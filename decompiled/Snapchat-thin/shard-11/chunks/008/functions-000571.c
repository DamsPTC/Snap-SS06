/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108982bf8; end: 108982c2b;  */

undefined8 * FUN_108982bf8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_108982c2c();
  param_1[1] = param_2;
  FUN_108982bb0(param_1);
  return param_1;
}



/* Entry: 108982c2c; end: 108982cb3;  */

long FUN_108982c2c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *param_1;
  plVar2 = param_1 + 1;
  *param_1 = (long)plVar2;
  *(undefined8 *)(*plVar2 + 0x10) = 0;
  param_1[2] = 0;
  *plVar2 = 0;
  lVar3 = *(long *)(lVar1 + 8);
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  return lVar1;
}



/* Entry: 108982cb4; end: 108982d07;  */

void FUN_108982cb4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 108982d08; end: 108982d4f;  */

long * FUN_108982d08(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (param_1 == *plVar1) {
    *plVar1 = 0;
    plVar1 = *(long **)(param_1 + 0x10);
    plVar2 = (long *)plVar1[1];
  }
  else {
    plVar1[1] = 0;
    plVar1 = *(long **)(param_1 + 0x10);
    plVar2 = (long *)*plVar1;
  }
  if (plVar2 == (long *)0x0) {
    return plVar1;
  }
  do {
    do {
      plVar1 = plVar2;
      plVar2 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    plVar2 = (long *)plVar1[1];
  } while ((long *)plVar1[1] != (long *)0x0);
  return plVar1;
}



/* Entry: 108982d50; end: 108982de3;  */

undefined8 * FUN_108982d50(undefined8 *param_1)

{
  long lVar1;
  
  func_0x000108982d9c(*param_1,param_1[2]);
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    while (lVar1 = *(long *)(lVar1 + 0x10), lVar1 != 0) {
      param_1[1] = lVar1;
    }
    func_0x000108982d9c(*param_1);
  }
  return param_1;
}



/* Entry: 108982de4; end: 108982dff;  */

void FUN_108982de4(undefined8 param_1,undefined8 param_2)

{
  FUN_108982e00(param_1,param_2,param_2);
  return;
}



/* Entry: 108982e00; end: 108982e7b;  */

undefined1  [16] FUN_108982e00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_108982e7c(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_108982ecc(alStack_50,param_1,param_3);
    FUN_108982cb4(param_1,uStack_38,plVar2,alStack_50[0]);
    lVar3 = alStack_50[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 108982e7c; end: 108982ecb;  */

long * FUN_108982e7c(long param_1,long *param_2,int *param_3)

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
      while (plVar2 = plVar3, (int)plVar3[4] <= *param_3) {
        if (*param_3 <= (int)plVar3[4]) goto LAB_108982ec4;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_108982ec4;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_108982ec4:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 108982ecc; end: 108982f1b;  */

undefined8 FUN_108982ecc(long *param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  lVar1 = 0x68;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 1;
  *(undefined4 *)(lVar1 + 0x20) = *param_3;
  lVar1 = lVar1 + 0x28;
  func_0x0001089f8024(lVar1,param_3 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  func_0x0001089f7f94(lVar1 + 0x28,unaff_x19 + 0x28);
  return unaff_x20;
}



/* Entry: 108982f1c; end: 108982f4f;  */

long * FUN_108982f1c(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  return param_1;
}



/* Entry: 108982f50; end: 108982f63;  */

void FUN_108982f50(void)

{
  return;
}



/* Entry: 108982f64; end: 108982fa3;  */

void FUN_108982f64(void)

{
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1089836f4();
  unaff_x19[1] = uStack_28;
  *unaff_x19 = uStack_30;
  *(undefined1 *)(unaff_x19 + 2) = 0;
  FUN_10894c690(unaff_x20 | 8);
  return;
}



/* Entry: 108982fa4; end: 10898302b;  */

void FUN_108982fa4(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  FUN_1089834bc(auStack_40,0);
  plVar4 = &lStack_38;
  FUN_108983644();
  plVar5 = plVar4 + 1;
  func_0x000104c038b0(plVar5,param_2);
  *(undefined1 *)plVar4 = 1;
  *param_1 = plVar5;
  param_1[1] = lStack_38;
  if (lStack_38 != 0) {
    piVar1 = (int *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000108983720();
  return;
}



/* Entry: 10898302c; end: 108983413;  */

void FUN_10898302c(ulong *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auStack_3c0 [216];
  undefined1 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined4 uStack_28c;
  undefined1 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined5 uStack_220;
  undefined3 uStack_21b;
  undefined5 uStack_218;
  undefined1 uStack_210;
  undefined1 uStack_208;
  undefined1 uStack_200;
  undefined1 uStack_1f8;
  undefined1 uStack_1f4;
  undefined1 uStack_1f0;
  undefined1 uStack_1ec;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_18c;
  undefined1 uStack_188;
  undefined1 uStack_186;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined1 uStack_176;
  undefined1 uStack_170;
  undefined1 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_140;
  undefined2 auStack_138 [4];
  undefined8 uStack_130;
  long lStack_128;
  undefined1 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a0;
  undefined1 uStack_9c;
  undefined1 uStack_98;
  undefined1 uStack_88;
  undefined8 uStack_80;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10898366c(param_2 + 2);
  plVar4 = (long *)*param_2;
  lStack_2c0 = param_2[1];
  param_2[1] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  plStack_2c8 = plVar4;
  FUN_10894c690((ulong)&uStack_2e0 | 8);
  if (plVar4 != (long *)0x0) {
    uVar11 = 0;
    plVar6 = plVar4 + 1;
    plVar15 = (long *)*plVar4;
    lVar13 = *(long *)(param_3 + 0x20) - plVar4[2];
    while (plVar6 != plVar15) {
      plVar4 = plVar6;
      func_0x000107c27bdc();
      iVar2 = *(int *)((long)plVar4 + 0x1c);
      lVar9 = plVar4[4];
      lVar12 = param_3;
      func_0x000108a01108();
      if ((int)lVar9 * iVar2 <= (int)lVar12) break;
      auStack_138[0] = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_130 = 0;
      lStack_128 = 0;
      uStack_120 = 0;
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      uStack_298 = 4;
      uStack_290 = 0;
      uStack_28c = 0xffffffff;
      uStack_288 = 0xff;
      uStack_230 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      uStack_1f0 = 0;
      uStack_1ec = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_21b = 0;
      uStack_218 = 0;
      uStack_1d0 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_186 = 0;
      uStack_180 = 0;
      uStack_178 = 1;
      uStack_176 = 0;
      uStack_170 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_2b0 = *(undefined8 *)((long)plVar4 + 0x1c);
      puStack_1e8 = &uStack_1e0;
      func_0x00010899fd84(&uStack_2b8,&uStack_2b0);
      func_0x00010899fcb0(&uStack_130,uStack_2b8);
      FUN_10894c5cc(&uStack_2b8);
      lStack_128 = lVar13;
      func_0x000108a00d40(auStack_3c0,auStack_138);
      uStack_2e8 = 1;
      func_0x0001089fe02c(&uStack_2b0);
      func_0x000108a00d18(auStack_138);
      if (uVar11 < param_1[2]) {
        func_0x000108a01014(uVar11,auStack_3c0);
        uVar1 = uVar11;
      }
      else {
        lVar9 = uVar11 - *param_1;
        uVar7 = lVar9 / 0xe0 + 1;
        if (0x124924924924924 < uVar7) {
          FUN_1089834a8();
LAB_1089833e0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1089833e4);
          (*pcVar3)();
        }
        uVar5 = (long)(param_1[2] - *param_1) / 0xe0;
        uVar8 = uVar5 * 2;
        if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
          uVar8 = uVar7;
        }
        if (0x92492492492491 < uVar5) {
          uVar8 = 0x124924924924924;
        }
        if (uVar8 == 0) {
          lVar12 = 0;
        }
        else {
          if (0x124924924924924 < uVar8) {
            func_0x000104bd35f4();
            goto LAB_1089833e0;
          }
          lVar12 = uVar8 * 0xe0;
          __Znwm();
        }
        uVar1 = lVar12 + lVar9;
        func_0x000108a01014(uVar1,auStack_3c0);
        uVar14 = *param_1;
        uVar10 = uVar1 + ((long)(uVar11 - uVar14) / -0xe0) * 0xe0;
        uVar5 = uVar10;
        for (uVar7 = uVar14; uVar7 != uVar11; uVar7 = uVar7 + 0xe0) {
          func_0x000108a00f9c(uVar5,uVar7);
          uVar5 = uVar5 + 0xe0;
        }
        for (; uVar14 != uVar11; uVar14 = uVar14 + 0xe0) {
          func_0x000108a00f74(uVar14);
        }
        uVar11 = *param_1;
        *param_1 = uVar10;
        param_1[2] = lVar12 + uVar8 * 0xe0;
        if (uVar11 != 0) {
          __ZdlPv();
        }
      }
      uVar11 = uVar1 + 0xe0;
      lVar13 = lVar13 + 1;
      param_1[1] = uVar11;
      func_0x000108a00f74(auStack_3c0);
      func_0x000107c27bdc();
    }
    uVar7 = *param_1;
    lVar13 = (long)(uVar11 - uVar7) / -0xe0 + *(long *)(param_3 + 0x18);
    for (; uVar7 != uVar11; uVar7 = uVar7 + 0xe0) {
      *(long *)(uVar7 + 0x18) = lVar13;
      lVar13 = lVar13 + 1;
    }
  }
  func_0x000108983720();
  return;
}



/* Entry: 108983414; end: 10898344b;  */

void FUN_108983414(void)

{
  long unaff_x20;
  
  FUN_1089836f4();
  FUN_10898344c();
  FUN_10894c690(unaff_x20 + 8);
  return;
}



/* Entry: 10898344c; end: 1089834a7;  */

void FUN_10898344c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_10898366c(param_1 + 2);
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_2[1];
  param_2[1] = param_1[1];
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 1089834a8; end: 1089834bb;  */

undefined8 * FUN_1089834a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = param_2;
  FUN_1089834e0(puVar1 + 1);
  return puVar1;
}



/* Entry: 1089834bc; end: 1089834df;  */

undefined8 * FUN_1089834bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_1089834e0(param_1 + 1);
  return param_1;
}



/* Entry: 1089834e0; end: 10898354b;  */

undefined8 * FUN_1089834e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0x100000001;
  *puVar1 = &PTR_FUN_110aa1c28;
  puVar1[2] = param_2;
  *(undefined1 *)(puVar1 + 3) = 0;
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 10898354c; end: 10898354f;  */

undefined8 * FUN_10898354c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1c28;
  func_0x000108983610(param_1 + 3);
  return param_1;
}



/* Entry: 108983550; end: 108983563;  */

void FUN_108983550(void)

{
  FUN_1089835e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108983564; end: 10898357f;  */

void FUN_108983564(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104c03854(param_1 + 0x20);
    *(char *)(param_1 + 0x18) = '\0';
  }
  return;
}



/* Entry: 108983580; end: 1089835b7;  */

long FUN_108983580(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110aa1c88);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1089835b8; end: 1089835db;  */

undefined8 FUN_1089835b8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110aa1c88);
  return 0;
}



/* Entry: 1089835dc; end: 1089835e3;  */

long FUN_1089835dc(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 1089835e4; end: 108983643;  */

undefined8 * FUN_1089835e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1c28;
  func_0x000108983610(param_1 + 3);
  return param_1;
}



/* Entry: 108983644; end: 10898366b;  */

void FUN_108983644(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x30))();
  }
  return;
}



/* Entry: 10898366c; end: 1089836b7;  */

void FUN_10898366c(char *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    do {
      cVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (cVar1 == '\0') break;
    FUN_1089836b8(iVar4);
    iVar4 = iVar4 + 1;
  }
  return;
}



/* Entry: 1089836b8; end: 1089836c3;  */

void FUN_1089836b8(int param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = 1000;
    uStack_20 = 0;
    _nanosleep(&uStack_20,0);
    return;
  }
  return;
}



/* Entry: 1089836c4; end: 1089836f3;  */

void FUN_1089836c4(void)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 1000;
  uStack_20 = 0;
  _nanosleep(&uStack_20,0);
  return;
}



/* Entry: 1089836f4; end: 108983727;  */

void FUN_1089836f4(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  FUN_1089834bc(auStack_40,0);
  plVar4 = &lStack_38;
  FUN_108983644();
  func_0x000104c038b0(plVar4 + 1,param_2);
  *(undefined1 *)plVar4 = 1;
  if (lStack_38 != 0) {
    piVar1 = (int *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000108983720();
  return;
}



/* Entry: 108983728; end: 108983c8f;  */

void FUN_108983728(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined4 extraout_w8;
  long *plVar9;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar10;
  long lVar11;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 in_stack_00000040;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  func_0x000108985bc4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa1ca8;
  plVar8 = param_1 + 3;
  param_1[4] = 0;
  *plVar8 = 0;
  plVar9 = param_1 + 5;
  param_1[6] = 0;
  *plVar9 = 0;
  puVar3 = (undefined8 *)0x90;
  __Znwm();
  plVar10 = puVar3 + 1;
  *plVar10 = 0;
  puVar3[2] = 0;
  puVar4 = puVar3 + 3;
  *puVar3 = &PTR_FUN_110aa1de8;
  FUN_10897fbd0(puVar4,in_stack_00000010,in_stack_00000000);
  *(undefined8 **)(unaff_x20 + 0x38) = puVar4;
  *(undefined8 **)(unaff_x20 + 0x40) = puVar3;
  if ((puVar3[5] == 0) || (*(long *)(puVar3[5] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puStack_78 = puVar4;
      puStack_70 = puVar3;
    } while (cVar1 != '\0');
    do {
      func_0x000108985ba4();
    } while (extraout_w11 != 0);
    plStack_98 = (long *)puVar3[4];
    puVar3[4] = puVar4;
    puVar3[5] = puVar3;
    FUN_108980200(&plStack_98);
    func_0x0001089802d0(&puStack_78);
  }
  plVar10 = (long *)(unaff_x20 + 0x48);
  *plVar10 = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000010;
  *(undefined8 *)(unaff_x20 + 0x58) = *in_stack_00000008;
  lVar11 = in_stack_00000008[1];
  *(long *)(unaff_x20 + 0x60) = lVar11;
  if (lVar11 != 0) {
    do {
      func_0x000108985ba4();
      in_stack_00000030 = extraout_w8;
    } while (extraout_w11_00 != 0);
  }
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined4 *)(unaff_x20 + 0x70) = 0;
  *(undefined1 *)(unaff_x20 + 0x74) = 0;
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  *(undefined1 *)(unaff_x20 + 0x7c) = 0;
  *(undefined4 *)(unaff_x20 + 0x80) = in_stack_00000030;
  *(undefined1 *)(unaff_x20 + 0x84) = in_stack_00000040;
  uVar5 = 1;
  __Znwm();
  *(undefined8 *)(unaff_x20 + 0x88) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = *in_stack_00000018;
  lVar11 = in_stack_00000018[1];
  *(long *)(unaff_x20 + 0xa0) = lVar11;
  if (lVar11 != 0) {
    do {
      func_0x000108985ae8();
    } while (extraout_w10 != 0);
  }
  FUN_10895ae60(unaff_x20 + 0xa8,param_4);
  *(undefined4 *)(unaff_x20 + 0xd0) = 0;
  FUN_1089821c4(unaff_x20 + 0xd8,in_stack_00000010);
  uVar5 = *in_stack_00000020;
  FUN_1089917ec(uVar5);
  FUN_108983c90(unaff_x20 + 0xe8,uVar5);
  uVar5 = *in_stack_00000028;
  FUN_1089917ec(uVar5);
  plVar6 = (long *)(unaff_x20 + 0xf0);
  FUN_108983c90(plVar6,uVar5);
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined2 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0x8000000000000000;
  func_0x000108985bd0();
  func_0x000108985b48();
  (**(code **)(*plVar6 + 0x10))(&plStack_98);
  plVar6 = plStack_98;
  plStack_98 = (long *)0x0;
  lVar11 = *plVar8;
  *plVar8 = (long)plVar6;
  plVar8 = (long *)0x0;
  if (lVar11 != 0) {
    func_0x000108985b08();
    plVar8 = plStack_98;
    plStack_98 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      func_0x000108985b08();
    }
  }
  func_0x000108985bd0();
  func_0x000108985b48();
  (**(code **)(*plVar8 + 0x28))();
  lVar11 = 0x38;
  __Znwm();
  FUN_108990a7c();
  lVar7 = *plVar9;
  *plVar9 = lVar11;
  if (lVar7 != 0) {
    func_0x000108985aa4();
  }
  func_0x000108b81514(*param_5 + 0x20);
  func_0x000108985bd0();
  func_0x000108985b48();
  uVar5 = 0x80;
  __Znwm();
  plStack_98 = (long *)0x0;
  uStack_90 = 0;
  FUN_10898928c();
  func_0x00010897e37c(&plStack_98);
  plVar8 = *(long **)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
  if (plVar8 != (long *)0x0) {
    func_0x000108985aa4();
  }
  func_0x000108985bd0();
  func_0x000108985b48();
  (**(code **)(*plVar8 + 0x28))();
  plStack_98 = (long *)&UNK_10e52b660;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar5 = 0x38;
  __Znwm();
  FUN_108990a7c();
  lVar11 = *(long *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
  if (lVar11 != 0) {
    func_0x000108985aa4();
  }
  FUN_108977458(&plStack_98);
  func_0x000108985bd0();
  func_0x000108985b48();
  lVar11 = 0x70;
  __Znwm();
  FUN_10898729c();
  lVar7 = *plVar10;
  *plVar10 = lVar11;
  if (lVar7 != 0) {
    func_0x000108985aa4();
  }
  func_0x000108985c94(*plVar9);
  (*extraout_x8)();
  func_0x000108985c94(*(undefined8 *)(unaff_x20 + 0x30));
  (*extraout_x8_00)();
  func_0x000108983cbc();
  func_0x000108985ca0(*(undefined8 *)(unaff_x20 + 0xd8));
  (*extraout_x8_01)();
  return;
}



/* Entry: 108983c90; end: 108983dab;  */

void FUN_108983c90(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x000108985bc4();
  uVar1 = 0x50;
  __Znwm();
  func_0x00010899f1a8();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 108983dac; end: 108983daf;  */

undefined8 * FUN_108983dac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1ca8;
  func_0x000108985064(param_1 + 0x1e);
  func_0x000108985064(param_1 + 0x1d);
  func_0x00010898503c(param_1 + 0x1b);
  func_0x000108959364(param_1 + 0x15);
  FUN_10897b3c0(param_1 + 0x13);
  func_0x000108985018(param_1 + 0x11);
  func_0x000104c05304(param_1 + 0xb);
  func_0x0001089850f8(param_1 + 9);
  func_0x0001089802d0(param_1 + 7);
  func_0x0001089850d4(param_1 + 6);
  func_0x0001089850d4(param_1 + 5);
  func_0x0001089850b0(param_1 + 4);
  func_0x00010898508c(param_1 + 3);
  FUN_10897b414(param_1 + 1);
  return param_1;
}



/* Entry: 108983db0; end: 108983dc3;  */

void FUN_108983db0(void)

{
  func_0x000108983d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108983dc4; end: 108983f57;  */

undefined *** FUN_108983dc4(undefined *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar4;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w11;
  long *plVar5;
  long unaff_x21;
  undefined **ppuVar6;
  undefined *unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  func_0x000108985b94(param_2);
  uVar8 = *(undefined8 *)(puVar1 + 0x10);
  uVar7 = *(undefined8 *)(puVar1 + 8);
  puVar4 = extraout_x8;
  uStack_38 = extraout_x9;
  if (*(long *)(puVar1 + 0x10) != 0) {
    do {
      func_0x000108985ba4();
      puVar4 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  ppuStack_58 = &PTR_SUB_110aa1e38;
  pppuStack_40 = &ppuStack_58;
  uStack_50 = uVar7;
  uStack_48 = uVar8;
  (**(code **)*puVar4)(puVar4,&ppuStack_58);
  pppuVar2 = &ppuStack_58;
  func_0x00010895abd8();
  func_0x000108985b6c();
  plVar5 = *(long **)(param_1 + 0x50);
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000108985bb4();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000108985ae8();
    } while (extraout_w10 != 0);
  }
  func_0x000108985bf8();
  if ((*(byte *)(plVar5 + 1) & 1) == 0) {
LAB_108983e80:
    ppuVar6 = (undefined **)0x0;
  }
  else {
    func_0x000108985ab0();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108985be8();
      func_0x000108985ab0();
      if (!(bool)in_CY) goto LAB_108983e80;
    }
    func_0x000108985b84();
    ppuVar6 = (undefined **)0x20;
    __Znwm();
    pppuStack_40 = (undefined ***)(unaff_x21 + 2000000000);
    *(undefined4 *)(ppuVar6 + 1) = 0;
    *ppuVar6 = (undefined *)&PTR_FUN_110aa1ec8;
    ppuVar6[2] = unaff_x22;
    ppuVar6[3] = param_1;
    ppuStack_58 = ppuVar6;
    uStack_50 = uVar7;
    uStack_48 = uVar8;
    func_0x000108985bf0(*(undefined8 *)(*plVar5 + 0x10));
    pppuVar2 = &ppuStack_58;
    FUN_10897dd3c();
  }
  func_0x000108985b00();
  func_0x000108985b7c();
  *(undefined ***)(param_1 + 0x68) = ppuVar6;
  func_0x000108985b94(uStack_38);
  if (extraout_x9_00 != extraout_x8_02) {
    ___stack_chk_fail();
    pppuVar3 = pppuVar2;
    func_0x000108985b00();
    func_0x000108985b7c();
    func_0x000108985af8();
    func_0x000107c27914(pppuVar3 + 10);
    func_0x00010897c5f4();
    if (pppuVar3 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return pppuVar2;
  }
  return pppuVar2;
}



/* Entry: 108983f58; end: 108983f7f;  */

undefined8 FUN_108983f58(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27914(param_1 + 0x50);
  func_0x00010897c5f4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 108983f80; end: 108984013;  */

undefined8 FUN_108983f80(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  uVar3 = param_2 >> 0x10 & 0xffff;
  if ((uint)uVar3 < 0xf) {
    puVar2 = (&PTR_DAT_113289a60)[uVar3];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x000107c278b8(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2d) {
    puVar2 = (&PTR_DAT_113289ad8)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  FUN_108949f78(param_1,auStack_38,puVar2);
  func_0x000108985c00();
  return param_1;
}



/* Entry: 108984014; end: 1089842a7;  */

void FUN_108984014(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long *plVar5;
  long unaff_x21;
  undefined8 *puVar6;
  undefined8 unaff_x22;
  undefined8 in_register_00005008;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_170;
  undefined1 uStack_168;
  undefined1 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    return;
  }
  plVar5 = *(long **)(param_2 + 0x50);
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000108985bb4();
  uStack_70 = param_1;
  uStack_68 = in_register_00005008;
  if (extraout_x8 != 0) {
    do {
      func_0x000108985ae8();
    } while (extraout_w10 != 0);
  }
  func_0x000108985bf8();
  cVar1 = (char)plVar5[1];
  uVar2 = cVar1 != '\0';
  bVar3 = cVar1 == '\x01';
  if (bVar3) {
    func_0x000108985ab0();
    if (!(bool)uVar2 || bVar3) {
      func_0x000108985be8();
      func_0x000108985ab0();
      if (!(bool)uVar2) goto LAB_108984080;
    }
    func_0x000108985b84();
    puVar6 = (undefined8 *)0x20;
    __Znwm();
    uStack_1f8 = unaff_x21 + 2000000000;
    *(undefined4 *)(puVar6 + 1) = 0;
    *puVar6 = &PTR_FUN_110aa1f48;
    puVar6[2] = unaff_x22;
    puVar6[3] = param_2;
    uStack_200 = uStack_68;
    uStack_208 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_210 = puVar6;
    func_0x000108985bf0(*(undefined8 *)(*plVar5 + 0x10));
    func_0x00010897dd3c(&puStack_210);
  }
  else {
LAB_108984080:
    puVar6 = (undefined8 *)0x0;
  }
  func_0x000108985b00();
  func_0x00010897dd64(&uStack_70);
  *(undefined8 **)(param_2 + 0x68) = puVar6;
  (**(code **)(**(long **)(param_2 + 0x18) + 0x80))(&uStack_70);
  puStack_210 = (undefined8 *)CONCAT44(puStack_210._4_4_,(undefined4)uStack_70);
  uStack_208 = uStack_58;
  uStack_200 = 2;
  uStack_1f8._0_5_ = CONCAT14(*(undefined1 *)(param_2 + 0x84),*(undefined4 *)(param_2 + 0x70));
  uStack_1f0 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puVar4 = (undefined8 *)0x1a8;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110aa1f88;
  puVar6 = puVar4 + 3;
  _memcpy(puVar6,&puStack_210,0x129);
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e0 = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x2e] = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  puVar4[0x2f] = 0;
  puVar4[0x30] = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puVar4[0x31] = 0;
  puVar4[0x32] = 0;
  puVar4[0x33] = 0;
  puVar4[0x34] = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_80 = puVar6;
  puStack_78 = puVar4;
  func_0x000108984ed0(&puStack_210);
  (**(code **)(**(long **)(param_2 + 0x28) + 0x30))(*(long **)(param_2 + 0x28),puVar6);
  func_0x00010897e0ac(*(undefined8 *)(param_2 + 0x20),puVar4 + 7,puVar4 + 0x29);
  (**(code **)(**(long **)(param_2 + 0x30) + 0x30))(*(long **)(param_2 + 0x30),puStack_80);
  func_0x00010897e0ac(*(undefined8 *)(param_2 + 0x48),puStack_80 + 0x1f,puStack_80 + 0x2f);
  (**(code **)(**(long **)(param_2 + 0x58) + 0x20))();
  func_0x000108985ca0();
  (*extraout_x8_00)();
  FUN_10893c0fc(&puStack_80);
  return;
}



/* Entry: 1089842a8; end: 10898434b;  */

void FUN_1089842a8(long param_1)

{
  long *plVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x000108985c50();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x000108985c50();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  func_0x00010897e174(*(undefined8 *)(param_1 + 0x20));
  func_0x000108985c64(*(undefined8 *)(param_1 + 0x28));
  func_0x000108985c64(*(undefined8 *)(param_1 + 0x30));
  func_0x00010897e174(*(undefined8 *)(param_1 + 0x48));
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))();
  uStack_28 = *(undefined8 *)(param_1 + 0xe0);
  uStack_30 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  func_0x00010898503c(&uStack_30);
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108984340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x100))();
    return;
  }
  return;
}



/* Entry: 10898434c; end: 10898440f;  */

void FUN_10898434c(long param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long **pplVar6;
  undefined8 uVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  long lVar8;
  long *plStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  char cStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  long lStack_38;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x70);
  uVar7 = *(undefined8 *)param_2;
  *(int *)(param_1 + 0x78) = param_2[2];
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  *(undefined1 *)(param_1 + 0x7c) = param_3;
  FUN_108984410();
  if (*param_2 == iVar1) {
    return;
  }
  if (iVar1 == 0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x88))(*(long **)(param_1 + 0x18),1,0);
  }
  plVar3 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar3 + 0x20))();
  (**(code **)(*plVar3 + 0x18))();
  func_0x00010899f618(*(undefined8 *)(param_1 + 0xe8),*param_2);
  func_0x00010899f618(*(undefined8 *)(param_1 + 0xf0),*param_2);
  if ((((*(byte *)(param_1 + 0xd0) & 1) != 0) || ((*(byte *)(param_1 + 0xd1) & 1) != 0)) ||
     (*(char *)(param_1 + 0xd2) == '\x01')) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x000108985c94();
    (*extraout_x8)();
    uStack_50 = (ulong)*(uint *)(lVar4 + 0x28);
    uVar2 = 560000000;
    if (*(char *)(param_1 + 0x7c) == '\0') {
      uVar2 = 400000000;
    }
    uVar9 = *(undefined4 *)(lVar4 + 0x2c);
    func_0x000108985b14(uVar2);
    lStack_38 = lVar4;
    if (((*(byte *)(param_1 + 0xd1) & 1) == 0) && (*(char *)(param_1 + 0xd2) != '\x01')) {
      lVar4 = lVar4 << 1;
    }
    else {
      lVar8 = lVar4;
      FUN_108981f84();
      if (((int)lVar8 == 0) || ((*(byte *)(param_1 + 0xd0) & 1) == 0)) {
        lVar4 = 0;
        uVar9 = 0;
        lStack_38 = 0;
      }
      if (*(char *)(param_1 + 0xd1) == '\x01') {
        uVar5 = *(ulong *)(param_1 + 0x28);
        func_0x000108985ac4();
        func_0x000108985c58();
        uStack_50 = uVar5;
        func_0x000108985ac4(*(undefined8 *)(param_1 + 0x28));
        func_0x000108991894();
        func_0x000108985c7c();
        lVar8 = 0x46;
        if (*(char *)(param_1 + 0x7c) == '\0') {
          lVar8 = 0x32;
        }
        func_0x000108985b14(lVar8 * uVar5);
        func_0x000108985c88();
        func_0x000108985ac4(*(undefined8 *)(param_1 + 0x28));
        func_0x000108991874();
        func_0x000108985c70();
      }
      if (*(char *)(param_1 + 0xd2) == '\x01') {
        uVar5 = *(ulong *)(param_1 + 0x30);
        func_0x000108985ac4();
        func_0x000108985c58();
        uStack_50 = uVar5;
        func_0x000108985ac4(*(undefined8 *)(param_1 + 0x30));
        func_0x000108991894();
        func_0x000108985c7c();
        lVar8 = 0x46;
        if (*(char *)(param_1 + 0x7c) == '\0') {
          lVar8 = 0x32;
        }
        func_0x000108985b14(lVar8 * uVar5);
        func_0x000108985c88();
        func_0x000108985ac4(*(undefined8 *)(param_1 + 0x30));
        func_0x000108991874();
        func_0x000108985c70();
      }
    }
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_50._0_5_ = CONCAT14(1,uVar9);
    uStack_40 = (undefined4)lVar4;
    uStack_3c = 1;
    lVar8 = *(long *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = lVar4;
    cStack_44 = lVar8 < lStack_38;
    if ((bool)cStack_44) {
      uStack_48 = (uint)lStack_38;
    }
    plVar3 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar3 + 0xc0))(plVar3,&uStack_50);
    if (cStack_44 == '\x01') {
      func_0x000108afd080();
      func_0x000108985ca0();
      (*extraout_x8_00)();
      pplVar6 = &plStack_58;
      plStack_58 = plVar3;
      FUN_108984dd8(pplVar6,*(undefined8 *)(param_1 + 0x108));
      if (999999 < (long)pplVar6) {
        *(short *)(param_1 + 0x100) = *(short *)(param_1 + 0x100) + 1;
        *(long **)(param_1 + 0x108) = plStack_58;
        FUN_108984410(param_1);
      }
    }
  }
  return;
}



/* Entry: 108984410; end: 1089847c3;  */

void FUN_108984410(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x68))();
  (**(code **)(*plVar1 + 0x78))();
  func_0x000108983cbc(param_1);
  return;
}



/* Entry: 1089847c4; end: 108984943;  */

void FUN_1089847c4(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar4;
  long *plVar5;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x98);
  FUN_108989434(&puStack_50,*(undefined8 *)(param_1 + 0x20));
  (**(code **)*puVar4)(puVar4,&puStack_50);
  func_0x000108984f64(&puStack_50);
  plVar5 = *(long **)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar7 = uVar6;
  uVar9 = uVar8;
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000108985ae8();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000108985bb4();
  if (extraout_x8 != 0) {
    do {
      func_0x000108985ae8();
    } while (extraout_w10_00 != 0);
  }
  func_0x000108985bf8();
  cVar1 = (char)plVar5[1];
  uVar2 = cVar1 != '\0';
  bVar3 = cVar1 == '\x01';
  if (bVar3) {
    func_0x000108985ab0();
    if (!(bool)uVar2 || bVar3) {
      func_0x000108985be8();
      func_0x000108985ab0();
      if (!(bool)uVar2) goto LAB_108984874;
    }
    func_0x000108985b84();
    puVar4 = (undefined8 *)0x28;
    __Znwm();
    lStack_38 = unaff_x21 + 300000000;
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar4[2] = unaff_x22;
    *puVar4 = &PTR_FUN_110aa1fd8;
    puVar4[4] = uVar8;
    puVar4[3] = uVar6;
    puStack_50 = puVar4;
    uStack_48 = uVar7;
    uStack_40 = uVar9;
    func_0x000108985bf0(*(undefined8 *)(*plVar5 + 0x10));
    FUN_10897dd3c(&puStack_50);
  }
  else {
LAB_108984874:
    puVar4 = (undefined8 *)0x0;
  }
  func_0x000108985b00();
  func_0x000108985b7c();
  *(undefined8 **)(param_1 + 0x90) = puVar4;
  func_0x000108985b6c();
  return;
}



/* Entry: 108984944; end: 10898498f;  */

void FUN_108984944(long param_1,uint param_2)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar4;
  long *plVar5;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (((param_2 ^ *(long *)(param_1 + 0x90) == 0) & 1) != 0) {
    return;
  }
  if (param_2 == 0) {
    func_0x000108985c50();
    *(undefined8 *)(param_1 + 0x90) = 0;
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x98);
  FUN_108989434(&puStack_50,*(undefined8 *)(param_1 + 0x20));
  (**(code **)*puVar4)(puVar4,&puStack_50);
  func_0x000108984f64(&puStack_50);
  plVar5 = *(long **)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar7 = uVar6;
  uVar9 = uVar8;
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000108985ae8();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000108985bb4();
  if (extraout_x8 != 0) {
    do {
      func_0x000108985ae8();
    } while (extraout_w10_00 != 0);
  }
  func_0x000108985bf8();
  cVar1 = (char)plVar5[1];
  uVar2 = cVar1 != '\0';
  bVar3 = cVar1 == '\x01';
  if (bVar3) {
    func_0x000108985ab0();
    if (!(bool)uVar2 || bVar3) {
      func_0x000108985be8();
      func_0x000108985ab0();
      if (!(bool)uVar2) goto LAB_108984874;
    }
    func_0x000108985b84();
    puVar4 = (undefined8 *)0x28;
    __Znwm();
    lStack_38 = unaff_x21 + 300000000;
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar4[2] = unaff_x22;
    *puVar4 = &PTR_FUN_110aa1fd8;
    puVar4[4] = uVar8;
    puVar4[3] = uVar6;
    puStack_50 = puVar4;
    uStack_48 = uVar7;
    uStack_40 = uVar9;
    func_0x000108985bf0(*(undefined8 *)(*plVar5 + 0x10));
    FUN_10897dd3c(&puStack_50);
  }
  else {
LAB_108984874:
    puVar4 = (undefined8 *)0x0;
  }
  func_0x000108985b00();
  func_0x000108985b7c();
  *(undefined8 **)(param_1 + 0x90) = puVar4;
  func_0x000108985b6c();
  return;
}



/* Entry: 108984990; end: 108984a93;  */

void FUN_108984990(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001089849c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10df7a7f8)[param_2] * 4 + 0x1089849c8))(param_1 + 0xd0);
  return;
}



/* Entry: 108984a94; end: 108984ac7;  */

void FUN_108984a94(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_2 == 1) {
    lVar1 = 0x28;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    lVar1 = 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x000108984ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + lVar1) + 0x18))(*(long **)(param_1 + lVar1),param_3);
  return;
}



/* Entry: 108984ac8; end: 108984b93;  */

void FUN_108984ac8(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  switch(param_2) {
  case 0:
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x000108985c24();
    uVar1 = *param_1;
    break;
  case 1:
    plVar2 = *(long **)(param_1 + 10);
    goto code_r0x000108984b68;
  case 2:
    plVar2 = *(long **)(param_1 + 0xc);
code_r0x000108984b68:
                    /* WARNING: Could not recover jumptable at 0x000108984b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2,param_3,param_4,param_5);
    return;
  case 3:
    uVar3 = *(undefined8 *)(param_1 + 0x12);
    func_0x000108985c24();
    uVar1 = *param_1;
    break;
  default:
    goto LAB_108985b20;
  }
  func_0x000108985bdc();
  FUN_10897def0(uVar3,uVar1,param_3,*param_1);
LAB_108985b20:
  return;
}



/* Entry: 108984b94; end: 108984bbb;  */

long * FUN_108984b94(long param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  FUN_108985a04();
  if (param_1 != 0) {
    return (long *)(param_1 + 0x14);
  }
  plVar2 = (long *)&UNK_10f639994;
  func_0x000104c03f28();
  switch(param_2) {
  case 0:
    lVar3 = plVar2[4];
    break;
  case 1:
    plVar2 = (long *)plVar2[5];
    goto code_r0x000108984c00;
  case 2:
    plVar2 = (long *)plVar2[6];
code_r0x000108984c00:
                    /* WARNING: Could not recover jumptable at 0x000108984c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,param_4);
    return plVar2;
  case 3:
    lVar3 = plVar2[9];
    break;
  default:
    return plVar2;
  }
  lVar1 = lVar3;
  func_0x00010897eb98();
  plVar2 = (long *)0x0;
  if (lVar1 != 0) {
    func_0x00010897eba8(*(undefined8 *)(param_3 + 8));
    plVar2 = (long *)(lVar3 + 0x50);
    FUN_10897e02c(plVar2,lVar1,param_3);
  }
  return plVar2;
}



/* Entry: 108984bbc; end: 108984c13;  */

void FUN_108984bbc(long param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  switch(param_2) {
  case 0:
    lVar3 = *(long *)(param_1 + 0x20);
    break;
  case 1:
    plVar2 = *(long **)(param_1 + 0x28);
    goto code_r0x000108984c00;
  case 2:
    plVar2 = *(long **)(param_1 + 0x30);
code_r0x000108984c00:
                    /* WARNING: Could not recover jumptable at 0x000108984c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,param_4);
    return;
  case 3:
    lVar3 = *(long *)(param_1 + 0x48);
    break;
  default:
    return;
  }
  lVar1 = lVar3;
  func_0x00010897eb98();
  if (lVar1 != 0) {
    func_0x00010897eba8(*(undefined8 *)(param_3 + 8));
    FUN_10897e02c(lVar3 + 0x50,lVar1,param_3);
  }
  return;
}



/* Entry: 108984c14; end: 108984c8b;  */

void FUN_108984c14(void)

{
  int in_w3;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000108985bc4();
  if (in_w3 == 3) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
    func_0x000108985c18();
  }
  else {
    if (in_w3 != 0) {
      return;
    }
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000108985c18();
  }
  func_0x000108985bdc();
  FUN_10897e06c(uVar1);
  return;
}



/* Entry: 108984c8c; end: 108984c93;  */

long FUN_108984c8c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0xa8;
  if (lVar1 != param_2) {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x20);
    FUN_10897b98c(lVar1,*(undefined8 *)(param_2 + 0x10),0);
  }
  return lVar1;
}



/* Entry: 108984c94; end: 108984cc3;  */

void FUN_108984c94(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  func_0x000108985b50(*(undefined8 *)(param_1 + 0x20));
  func_0x000108985b50(*(undefined8 *)(param_1 + 0x48));
  lVar1 = param_1;
  FUN_108981fa4();
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    uVar2 = 0x3a;
    if (*(char *)(param_1 + 0x7c) == '\0') {
      uVar2 = 0x26;
    }
                    /* WARNING: Could not recover jumptable at 0x000108983d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x90))(*(long **)(param_1 + 0x18),uVar2);
    return;
  }
  return;
}



/* Entry: 108984cc4; end: 108984d87;  */

void FUN_108984cc4(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_88 [32];
  undefined1 uStack_68;
  undefined1 auStack_60 [40];
  undefined1 uStack_38;
  
  func_0x000108985bc4();
  if (param_3 == 0) {
    auStack_60[0] = 0;
  }
  else {
    FUN_10895ae60(auStack_60,unaff_x20 + 0xa8);
  }
  uStack_38 = param_3 != 0;
  (**(code **)(**(long **)(unaff_x20 + 0x28) + 0x40))
            (*(long **)(unaff_x20 + 0x28),unaff_x19 + 0x18,auStack_60,param_4);
  auStack_88[0] = 0;
  uStack_68 = 0;
  (**(code **)(**(long **)(unaff_x20 + 0x30) + 0x40))
            (*(long **)(unaff_x20 + 0x30),unaff_x19 + 0x30,auStack_60,auStack_88);
  FUN_1089775ec(auStack_88);
  FUN_108984fc4(auStack_60);
  return;
}



/* Entry: 108984d88; end: 108984db3;  */

long FUN_108984d88(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = -0x8000000000000000;
  if (param_2 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
    lVar1 = lVar3 + param_2;
  }
  lVar2 = 0x7fffffffffffffff;
  if (lVar3 != 0x7fffffffffffffff && param_2 != 0x7fffffffffffffff) {
    lVar2 = lVar1;
  }
  return lVar2;
}



/* Entry: 108984db4; end: 108984dd7;  */

undefined8 * FUN_108984db4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_108984d88();
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 108984dd8; end: 108984e0b;  */

long FUN_108984dd8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = -0x8000000000000000;
  if (param_2 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
    lVar1 = lVar3 - param_2;
  }
  lVar2 = 0x7fffffffffffffff;
  if (lVar3 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
    lVar2 = lVar1;
  }
  return lVar2;
}



/* Entry: 108984e0c; end: 108984e4b;  */

undefined8 * FUN_108984e0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  FUN_108b8660c(param_1 + 5,param_2 + 5);
  return param_1;
}



/* Entry: 108984e4c; end: 108984e4f;  */

void FUN_108984e4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1d98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108984e50; end: 108984e63;  */

void FUN_108984e50(void)

{
  func_0x000108984e70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108984e64; end: 108984e7b;  */

long FUN_108984e64(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x30;
  func_0x000100100fd4(&lStack_28);
  return param_1 + 0x30;
}



/* Entry: 108984e7c; end: 108984fc3;  */

long FUN_108984e7c(long param_1)

{
  func_0x000108984ea8(param_1 + 0x18);
  func_0x00010724e5b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 108984fc4; end: 108984fe3;  */

void FUN_108984fc4(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000108959364();
  }
  return;
}



/* Entry: 108984fe4; end: 108984fe7;  */

void FUN_108984fe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1de8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108984fe8; end: 108984ffb;  */

void FUN_108984fe8(void)

{
  func_0x00010898500c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108984ffc; end: 108985017;  */

void FUN_108984ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108985004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108985018; end: 108985147;  */

void FUN_108985018(long param_1)

{
  func_0x000108985ad8();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108985148; end: 10898515b;  */

void FUN_108985148(void)

{
  func_0x00010898511c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898515c; end: 1089851a3;  */

void FUN_10898515c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_SUB_110aa1e38;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000108985ae8();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1089851a4; end: 1089851f7;  */

void FUN_1089851a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  
  *param_2 = &PTR_SUB_110aa1e38;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  param_2[2] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000108985ae8(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1089851f8; end: 10898535f;  */

void FUN_1089851f8(long param_1,long param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *extraout_x8;
  int extraout_w10;
  long lVar5;
  long alStack_d0 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [88];
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 *puStack_48;
  
  plVar3 = alStack_d0;
  uVar1 = *param_3;
  uVar2 = *param_4;
  FUN_1089853a4(alStack_d0,param_1 + 8);
  if (alStack_d0[0] != 0) {
    if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
      func_0x000108afd080();
      func_0x000108985ca0();
      (*extraout_x8)();
      if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
        *(undefined1 *)(param_2 + 0x20) = 1;
      }
      *(long **)(param_2 + 0x18) = plVar3;
    }
    lVar5 = *(long *)(alStack_d0[0] + 0x50);
    uStack_b8 = *(undefined8 *)(alStack_d0[0] + 0x10);
    uStack_c0 = *(undefined8 *)(alStack_d0[0] + 8);
    if (*(long *)(alStack_d0[0] + 0x10) != 0) {
      do {
        func_0x000108985ae8();
      } while (extraout_w10 != 0);
    }
    FUN_108984e0c(auStack_b0,param_2);
    puVar4 = (undefined8 *)0x88;
    uStack_58 = uVar1;
    uStack_54 = uVar2;
    __Znwm();
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110aa1f08;
    puVar4[4] = uStack_b8;
    puVar4[3] = uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    FUN_108984e0c(puVar4 + 5,auStack_b0);
    *(undefined4 *)(puVar4 + 0x10) = uStack_58;
    *(undefined1 *)((long)puVar4 + 0x84) = uStack_54;
    puStack_48 = puVar4;
    func_0x000104c04b3c(lVar5,lVar5 + 0x70,&puStack_48,0,lVar5 + 0x10);
    puVar4 = puStack_48;
    puStack_48 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      func_0x000108985aa4();
    }
    FUN_108983f58(&uStack_c0);
  }
  func_0x000108985b64();
  return;
}



/* Entry: 108985360; end: 108985397;  */

long FUN_108985360(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110aa1ea8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108985398; end: 1089853a3;  */

undefined ** FUN_108985398(void)

{
  return &PTR_DAT_110aa1ea8;
}



/* Entry: 1089853a4; end: 1089853df;  */

void FUN_1089853a4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1089853e0; end: 1089853ef;  */

void FUN_1089853e0(void)

{
  return;
}



/* Entry: 1089853f0; end: 10898541b;  */

undefined8 * FUN_1089853f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1f08;
  FUN_108983f58(param_1 + 3);
  return param_1;
}



/* Entry: 10898541c; end: 10898542f;  */

void FUN_10898541c(void)

{
  FUN_1089853f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108985430; end: 108985843;  */

void FUN_108985430(undefined1 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  bool bVar12;
  long lVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined ***pppuVar19;
  long *plVar20;
  undefined8 uVar21;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  undefined8 *puVar22;
  long alStack_1f0 [2];
  undefined1 *puStack_1e0;
  int *piStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  long alStack_1c0 [3];
  undefined1 uStack_1a5;
  int iStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined1 auStack_100 [144];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1089853a4(alStack_1f0,param_1 + 0x18);
  if ((alStack_1f0[0] != 0) && (plVar17 = *(long **)(alStack_1f0[0] + 0x18), plVar17 != (long *)0x0)
     ) {
    iVar16 = *(int *)(param_1 + 0x80);
    cVar11 = param_1[0x84];
    (**(code **)(*plVar17 + 0x60))();
    unaff_x19 = plVar17;
    if (plVar17 != (long *)0x0) {
      if (cVar11 == '\0') {
        iStack_1a4 = iVar16;
        if ((bRam000000011372cf28 & 1) == 0) goto LAB_108985744;
        goto LAB_108985500;
      }
      FUN_1089858e8(auStack_100,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                    *(undefined8 *)(param_1 + 0x30));
      (**(code **)*plVar17)(plVar17,auStack_100);
      func_0x000108aa2ba8(auStack_100);
      plVar17 = *(long **)(*(long *)(alStack_1f0[0] + 0x48) + 0x40);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x28))(plVar17,param_1 + 0x28);
      }
    }
  }
  while( true ) {
    func_0x00010897b438(alStack_1f0);
    func_0x000108985b94(uStack_70);
    if (extraout_x9 == extraout_x8) break;
    ___stack_chk_fail();
    plVar17 = unaff_x19;
LAB_108985744:
    iVar16 = 0x1372cf28;
    ___cxa_guard_acquire();
    if (iVar16 != 0) {
      plVar20 = (long *)0x1;
      FUN_108986c30();
      lVar13 = plVar20[1] - *plVar20;
      lVar2 = 0;
      if (lVar13 != 0) {
        lVar2 = *plVar20;
      }
      func_0x000108aba164(0x11372cf38,lVar2,lVar13 >> 5);
      ___cxa_guard_release(0x11372cf28);
    }
LAB_108985500:
    if ((bRam000000011372cf30 & 1) == 0) {
      plVar20 = (long *)0x11372cf30;
      ___cxa_guard_acquire();
      if ((int)plVar20 != 0) {
        FUN_108986db0();
        lVar13 = plVar20[1] - *plVar20;
        lVar2 = 0;
        if (lVar13 != 0) {
          lVar2 = *plVar20;
        }
        func_0x000108aba164(0x11372cf4f,lVar2,lVar13 >> 5);
        ___cxa_guard_release(0x11372cf30);
      }
    }
    iVar16 = iStack_1a4;
    bVar14 = iStack_1a4 != 0;
    bVar15 = iStack_1a4 != 3;
    uVar3 = 0x11372cf4f;
    if (!bVar14 || !bVar15) {
      uVar3 = 0x11372cf38;
    }
    func_0x000108abd7bc(auStack_100,uVar3,*(undefined8 *)(param_1 + 0x40));
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    ppuVar7 = *(undefined ***)(param_1 + 0x30);
    uVar21 = *(undefined8 *)(param_1 + 0x38);
    ppuVar4 = *(undefined ***)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    ppuStack_190 = ppuVar4;
    uStack_188 = uVar8;
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    uStack_180 = uVar5;
    puStack_178 = (undefined8 *)uVar9;
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    uVar10 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    puVar18 = (undefined8 *)0x48;
    puStack_170 = (undefined8 *)uVar6;
    uStack_168 = uVar10;
    __Znwm();
    plVar20 = puVar18 + 1;
    *plVar20 = 0;
    puVar18[2] = 0;
    *puVar18 = &PTR_FUN_110aa1d98;
    puVar22 = puVar18 + 3;
    *puVar22 = ppuVar4;
    puVar18[4] = uVar8;
    puVar18[5] = uVar5;
    puVar18[6] = uVar9;
    puVar18[7] = uVar6;
    puVar18[8] = uVar10;
    uStack_188 = 0;
    ppuStack_190 = (undefined **)0x0;
    puStack_178 = (undefined8 *)0x0;
    uStack_180 = 0;
    uStack_168 = 0;
    puStack_170 = (undefined8 *)0x0;
    puStack_1a0 = puVar22;
    puStack_198 = puVar18;
    func_0x000108985c0c();
    uStack_180 = 0;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    puStack_1e0 = (undefined1 *)0x0;
    piStack_1d8 = (int *)0x0;
    puStack_178 = puVar22;
    puStack_170 = puVar18;
    func_0x000108984ea8(&puStack_1e0);
    ppuStack_190 = ppuVar7;
    uStack_188 = uVar21;
    uStack_168 = uVar3;
    func_0x000108aedb2c(alStack_1c0,&ppuStack_190);
    func_0x000108984e7c(&ppuStack_190);
    func_0x000108984ea8(&puStack_1a0);
    param_1 = auStack_100;
    func_0x000108abb1ec(param_1,alStack_1c0);
    unaff_x19 = alStack_1c0;
    func_0x000108aa2ba8();
    if (((ulong)param_1 & 1) == 0) {
      FUN_1089a3c0c();
      uStack_180 = 0;
      puStack_178 = (undefined8 *)0x0;
      ppuStack_190 = &PTR_DAT_1107eac58;
      uStack_188 = 0;
      puStack_170 = (undefined8 *)CONCAT44(puStack_170._4_4_,0x6e);
      iVar1 = iVar16 + 0x9001d;
      if (2 < iVar16 - 1U) {
        iVar1 = 0x9001d;
      }
      pppuVar19 = &ppuStack_190;
      FUN_108983f80(pppuVar19,iVar1);
      (**(code **)(*(long *)*unaff_x19 + 8))((long *)*unaff_x19,pppuVar19,1);
      func_0x000104c03ee4(&ppuStack_190);
    }
    else {
      func_0x000108abd824(&ppuStack_190,auStack_100);
      puStack_1e0 = &uStack_1a5;
      piStack_1d8 = &iStack_1a4;
      pcStack_1d0 = FUN_108981410;
      pcStack_1c8 = FUN_108985844;
      (**(code **)(*plVar17 + 8))(plVar17,bVar14 && bVar15,&ppuStack_190,&puStack_1e0);
      func_0x000108985b34();
      func_0x000108abd8d0(&ppuStack_190);
      unaff_x19 = plVar17;
    }
    func_0x000108abd8d0(auStack_100);
  }
  return;
}



/* Entry: 108985844; end: 1089858e7;  */

undefined8 FUN_108985844(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar2 = param_1;
  FUN_1089a3c0c();
  uStack_38 = 0;
  uStack_30 = 0;
  ppuStack_48 = &PTR_DAT_1107eac58;
  uStack_40 = 0;
  uStack_28 = 0x6f;
  iVar1 = *(int *)param_1[1] + 0x9001d;
  if (2 < *(int *)param_1[1] - 1U) {
    iVar1 = 0x9001d;
  }
  pppuVar3 = &ppuStack_48;
  FUN_108983f80(pppuVar3,iVar1);
  (**(code **)(*(long *)*puVar2 + 8))((long *)*puVar2,pppuVar3,1);
  func_0x000104c03ee4(&ppuStack_48);
  return 0;
}



/* Entry: 1089858e8; end: 10898593f;  */

long * FUN_1089858e8(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x000108aedbbc(param_1,param_3,param_4);
  if (*plVar1 != 0) {
    _memcpy(*(undefined8 *)(*plVar1 + 0x28),param_2,param_3);
    param_1[1] = 0;
    param_1[2] = param_3;
  }
  return param_1;
}



/* Entry: 108985940; end: 108985953;  */

void FUN_108985940(void)

{
  return;
}



/* Entry: 108985954; end: 108985967;  */

void FUN_108985954(void)

{
  func_0x000108985974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108985968; end: 10898597f;  */

long FUN_108985968(long param_1)

{
  func_0x000108984f0c(param_1 + 400);
  func_0x000108984f38(param_1 + 0x178);
  func_0x000108984f38(param_1 + 0x160);
  func_0x000108984f0c(param_1 + 0x148);
  return param_1 + 0x18;
}



/* Entry: 108985980; end: 1089859ab;  */

undefined8 * FUN_108985980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1fd8;
  FUN_10897b414(param_1 + 3);
  return param_1;
}



/* Entry: 1089859ac; end: 1089859bf;  */

void FUN_1089859ac(void)

{
  FUN_108985980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089859c0; end: 108985a03;  */

void FUN_1089859c0(long param_1)

{
  long alStack_30 [2];
  
  FUN_1089853a4(alStack_30,param_1 + 0x18);
  if (alStack_30[0] != 0) {
    FUN_1089847c4();
  }
  func_0x000108985b64();
  return;
}



/* Entry: 108985a04; end: 108985cab;  */

long FUN_108985a04(long *param_1,uint *param_2)

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



/* Entry: 108985cac; end: 108985ce3;  */

undefined8 * FUN_108985cac(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110aa2018;
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x000108985e58();
  }
  return param_1;
}



/* Entry: 108985ce4; end: 108985ce7;  */

undefined8 * FUN_108985ce4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110aa2018;
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x000108985e58();
  }
  return param_1;
}



/* Entry: 108985ce8; end: 108985cfb;  */

void FUN_108985ce8(void)

{
  FUN_108985cac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108985cfc; end: 108985e1b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108985cfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long alStack_58 [6];
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 100;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c278b8(alStack_58 + 3,&UNK_10df7ac84);
  FUN_10897cbdc(uVar2,alStack_58 + 3,0);
  uStack_24 = (undefined1)uVar2;
  func_0x000108985e44();
  uVar3 = *(ulong *)(param_1 + 0x18);
  func_0x000107c278b8(alStack_58 + 3,&UNK_10df7aca4);
  FUN_10897cca0(uVar3,alStack_58 + 3);
  func_0x000108985e44();
  if (uVar3 >> 0x20 != 0) {
    uStack_28 = (undefined4)uVar3;
  }
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  alStack_58[0] = 0;
  FUN_10898a2a4(alStack_58 + 3,*(undefined8 *)(param_1 + 0x10),&uStack_28,alStack_58 + 2,
                alStack_58 + 1,alStack_58);
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = alStack_58[3];
  if (lVar1 != 0) {
    func_0x000108985e58();
  }
  lVar1 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar1 != 0) {
    func_0x000108985e4c();
  }
  FUN_108981388(alStack_58 + 1);
  FUN_108982f1c(alStack_58 + 2);
  return;
}



/* Entry: 108985e1c; end: 108985e63;  */

void FUN_108985e1c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000108985e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 108985e64; end: 108985ea3;  */

void FUN_108985e64(undefined8 *param_1,undefined8 *param_2)

{
  func_0x000108985efc();
  *param_1 = &PTR_DAT_110aa2078;
  param_1[0x1a] = *param_2;
  param_1[0x1b] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 108985ea4; end: 108985eb7;  */

void FUN_108985ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108985eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x10))();
  return;
}



/* Entry: 108985eb8; end: 108985ecb;  */

void FUN_108985eb8(void)

{
  FUN_108985ecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108985ecc; end: 108985f73;  */

undefined8 * FUN_108985ecc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aa2078;
  func_0x000104c052b8(param_1 + 0x1a);
  *param_1 = &PTR_FUN_110aa20d8;
  func_0x0001089869c0(param_1 + 0x16);
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  func_0x000108986904(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  func_0x0001089868dc(param_1 + 1);
  return param_1;
}



/* Entry: 108985f74; end: 108985f93;  */

void FUN_108985f74(void)

{
  undefined1 uStack_11;
  
  FUN_1089867b8(&uStack_11);
  return;
}



/* Entry: 108985f94; end: 108985fe7;  */

undefined8 * FUN_108985f94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa20d8;
  func_0x0001089869c0(param_1 + 0x16);
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  func_0x000108986904(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  func_0x0001089868dc(param_1 + 1);
  return param_1;
}



/* Entry: 108985fe8; end: 108985feb;  */

undefined8 * FUN_108985fe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa20d8;
  func_0x0001089869c0(param_1 + 0x16);
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  func_0x000108986904(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  func_0x0001089868dc(param_1 + 1);
  return param_1;
}



/* Entry: 108985fec; end: 108985fff;  */

void FUN_108985fec(void)

{
  FUN_108985f94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108986000; end: 10898623b;  */

void FUN_108986000(long **param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_60;
  undefined1 uStack_58;
  undefined1 auStack_50 [16];
  long *plStack_40;
  long *plStack_38;
  
  plVar6 = (long *)param_2[1];
  (**(code **)(*param_2 + 0x30))(auStack_50);
  (**(code **)(*plVar6 + 0x10))(&plStack_90,plVar6,auStack_50);
  plVar6 = plStack_90;
  plStack_38 = plStack_88;
  plStack_40 = plStack_90;
  plStack_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  FUN_10897b634(&plStack_90);
  FUN_1089493c4(auStack_50);
  if (plVar6 != (long *)0x0) {
    plStack_60 = param_2 + 3;
    uStack_58 = 1;
    __ZNSt3__15mutex4lockEv();
    (**(code **)(*plStack_40 + 0x20))(&plStack_a8);
    uStack_80 = uStack_98;
    plStack_88 = (long *)uStack_a0;
    plStack_90 = plStack_a8;
    uStack_a0 = 0;
    uStack_98 = 0;
    plStack_a8 = (long *)0x0;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar5 = (long *)param_2[0xc];
    plVar6 = param_2 + 0xc;
    plStack_70 = plStack_38;
    plStack_78 = plStack_40;
    while (plVar7 = plVar6, plVar5 != (long *)0x0) {
      while( true ) {
        plVar7 = plVar5;
        pplVar3 = &plStack_90;
        func_0x000107c27bd4(pplVar3,plVar7 + 4);
        if (((uint)pplVar3 >> 7 & 1) != 0) break;
        plVar5 = plVar7 + 4;
        func_0x000107c27bd4(plVar5,&plStack_90);
        if (((uint)plVar5 >> 7 & 1) == 0) {
          if (*plVar6 == 0) goto LAB_108986128;
          goto LAB_1089861a4;
        }
        plVar6 = plVar7 + 1;
        plVar5 = (long *)*plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_108986128;
      }
      plVar6 = plVar7;
      plVar5 = (long *)*plVar7;
    }
LAB_108986128:
    puVar4 = (undefined8 *)0x48;
    __Znwm();
    puVar4[5] = plStack_88;
    puVar4[4] = plStack_90;
    puVar4[6] = uStack_80;
    plStack_88 = (long *)0x0;
    uStack_80 = 0;
    plStack_90 = (long *)0x0;
    puVar4[8] = plStack_70;
    puVar4[7] = plStack_78;
    if (plStack_70 != (long *)0x0) {
      plVar5 = plStack_70 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = plVar7;
    *plVar6 = (long)puVar4;
    if (*(long *)param_2[0xb] != 0) {
      param_2[0xb] = *(long *)param_2[0xb];
      puVar4 = (undefined8 *)*plVar6;
    }
    func_0x000107c27be4(param_2[0xc],puVar4);
    param_2[0xd] = param_2[0xd] + 1;
LAB_1089861a4:
    FUN_108986790(&plStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_a8);
    func_0x000107c2798c(&plStack_60);
    param_1[1] = plStack_38;
    *param_1 = plStack_40;
    param_1 = &plStack_40;
  }
  *param_1 = (long *)0x0;
  param_1[1] = (long *)0x0;
  func_0x000108986a2c(&plStack_40);
  return;
}


