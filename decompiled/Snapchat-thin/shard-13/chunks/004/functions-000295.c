/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5e95a0; end: 10a5e95bf;  */

void FUN_10a5e95a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf8580;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5e95c0; end: 10a5e969b;  */

void FUN_10a5e95c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a5e5e98();
      } while (lVar1 != lVar3);
      lVar2 = *(long *)(param_1 + 0x50);
    }
    *(long *)(param_1 + 0x58) = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a5e96a0();
      } while (lVar1 != lVar3);
      lVar2 = *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x40) = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a0daa60();
      } while (lVar1 != lVar3);
      lVar2 = *(long *)(param_1 + 0x20);
    }
    *(long *)(param_1 + 0x28) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a5e969c; end: 10a5e969f;  */

void FUN_10a5e969c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5e96a0; end: 10a5e974f;  */

long FUN_10a5e96a0(long param_1)

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



/* Entry: 10a5e9750; end: 10a5e9853;  */

long * FUN_10a5e9750(long *param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
joined_r0x00010a5e9778:
  plVar4 = plVar1;
  if (plVar2 == (long *)0x0) {
LAB_10a5e97e4:
    plVar2 = (long *)0x40;
    __Znwm();
    lVar3 = *param_4;
    lVar6 = param_5[1];
    lVar5 = *param_5;
    plVar2[5] = param_4[1];
    plVar2[4] = lVar3;
    plVar2[7] = lVar6;
    plVar2[6] = lVar5;
    *param_5 = 0;
    param_5[1] = 0;
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = (long)plVar1;
    *plVar4 = (long)plVar2;
    plVar1 = plVar2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      plVar1 = (long *)*plVar4;
    }
    func_0x000107c2b058(param_1[1],plVar1);
    param_1[2] = param_1[2] + 1;
    return plVar2;
  }
  do {
    plVar1 = plVar2;
    lVar3 = plVar1[4];
    if (param_2 == lVar3) {
      lVar3 = plVar1[5];
      if (param_3 < lVar3) break;
      if (lVar3 == param_3 || param_3 <= lVar3) {
        return plVar1;
      }
    }
    else {
      if (param_2 < lVar3) break;
      if (param_2 <= lVar3) {
        return plVar1;
      }
    }
    plVar2 = (long *)plVar1[1];
    if ((long *)plVar1[1] == (long *)0x0) {
      plVar4 = plVar1 + 1;
      goto LAB_10a5e97e4;
    }
  } while( true );
  plVar2 = (long *)*plVar1;
  goto joined_r0x00010a5e9778;
}



/* Entry: 10a5e9854; end: 10a5e9a27;  */

/* WARNING: Possible PIC construction at 0x00010a5e98d4: Changing call to branch */

undefined1  [16] FUN_10a5e9854(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong uStack_1a0;
  ulong *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 **ppuStack_180;
  code *pcStack_178;
  undefined8 **ppuStack_130;
  code *pcStack_128;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar1 = (ulong *)auStack_60;
  ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  uVar4 = *param_1;
  if (param_2 <= (ulong)((long)(param_1[2] - uVar4) >> 4)) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  if (param_2 >> 0x3c == 0) {
    uVar6 = param_1[1];
    uVar7 = param_2;
    puStack_38 = param_1;
    FUN_10a5e9bbc();
    uVar6 = param_2 + (uVar6 - uVar4);
    uVar7 = param_2 + uVar7 * 0x10;
    param_2 = *param_1;
    uVar4 = uVar6 - (param_1[1] - param_2);
    _memcpy(uVar4);
    uStack_48 = *param_1;
    *param_1 = uVar4;
    param_1[1] = uVar6;
    uStack_40 = param_1[2];
    param_1[2] = uVar7;
    uStack_58 = uStack_48;
    uStack_50 = uStack_48;
    puVar5 = &uStack_58;
    uVar11 = 0x10a5e98d8;
SUB_10a5e9bf0:
    *(ulong *)((long)puVar1 + -0x20) = uVar4;
    *(ulong **)((long)puVar1 + -0x18) = param_1;
    *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar10;
    *(undefined8 *)((long)puVar1 + -8) = uVar11;
    uVar4 = puVar5[1];
    uVar6 = puVar5[2];
    while (uVar6 != uVar4) {
      puVar5[2] = uVar6 - 0x10;
      func_0x00010a0daa60();
      uVar6 = puVar5[2];
    }
    if (*puVar5 != 0) {
      __ZdlPv();
    }
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = puVar5;
    return auVar17;
  }
  FUN_10a5e9ba8();
  uStack_68 = 0x10a5e98f0;
  ppuStack_d0 = &ppuStack_70;
  uVar4 = *param_1;
  if (param_2 <= (ulong)((long)(param_1[2] - uVar4) >> 4)) {
LAB_10a5e9974:
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  ppuStack_70 = ppuVar10;
  if (param_2 >> 0x3c == 0) {
    uVar7 = param_1[1];
    uVar6 = param_2;
    puStack_98 = param_1;
    FUN_10a5e9c50();
    uVar4 = param_2 + (uVar7 - uVar4);
    uVar6 = param_2 + uVar6 * 0x10;
    param_2 = *param_1;
    uVar7 = uVar4 - (param_1[1] - param_2);
    _memcpy(uVar7);
    uStack_b8 = *param_1;
    *param_1 = uVar7;
    param_1[1] = uVar4;
    uStack_a0 = param_1[2];
    param_1[2] = uVar6;
    param_1 = &uStack_b8;
    uStack_b0 = uStack_b8;
    uStack_a8 = uStack_b8;
    func_0x00010a5e9c84(param_1);
    goto LAB_10a5e9974;
  }
  FUN_10a5e9c3c();
  uStack_c8 = 0x10a5e998c;
  ppuStack_130 = &ppuStack_d0;
  uVar4 = *param_1;
  if (param_2 <= (ulong)((long)(param_1[2] - uVar4) >> 4)) {
LAB_10a5e9a10:
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = param_1;
    return auVar14;
  }
  if (param_2 >> 0x3c == 0) {
    uVar7 = param_1[1];
    uVar6 = param_2;
    puStack_f8 = param_1;
    FUN_10a5e5e18();
    uVar4 = param_2 + (uVar7 - uVar4);
    uVar6 = param_2 + uVar6 * 0x10;
    param_2 = *param_1;
    uVar7 = uVar4 - (param_1[1] - param_2);
    _memcpy(uVar7);
    uStack_118 = *param_1;
    *param_1 = uVar7;
    param_1[1] = uVar4;
    uStack_100 = param_1[2];
    param_1[2] = uVar6;
    param_1 = &uStack_118;
    uStack_110 = uStack_118;
    uStack_108 = uStack_118;
    func_0x00010a5e5e4c(param_1);
    goto LAB_10a5e9a10;
  }
  FUN_10a5e5e04();
  pcStack_128 = FUN_10a5e9a28;
  uVar4 = *param_1;
  puVar5 = (ulong *)param_1[1];
  lVar9 = (long)puVar5 - uVar4;
  bVar2 = (ulong)((lVar9 >> 4) * -0x5555555555555555) <= param_2;
  uVar6 = param_2 + (lVar9 >> 4) * 0x5555555555555555;
  if (bVar2 && uVar6 != 0) {
    if ((ulong)(((long)(param_1[2] - (long)puVar5) >> 4) * -0x5555555555555555) < uVar6) {
      if (param_2 < 0x555555555555556) {
        lVar8 = (long)(param_1[2] - uVar4) >> 4;
        uVar7 = lVar8 * 0x5555555555555556;
        if (uVar7 < param_2 || uVar7 - param_2 == 0) {
          uVar7 = param_2;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
          uVar7 = 0x555555555555555;
        }
        if (uVar7 < 0x555555555555556) {
          puVar3 = (ulong *)(uVar7 * 0x30);
          __Znwm();
          lVar8 = ((uVar6 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
          _bzero((long)puVar3 + lVar9,lVar8);
          puVar5 = puVar3;
          param_2 = uVar4;
          _memcpy(puVar3,uVar4,lVar9);
          *param_1 = (ulong)puVar3;
          param_1[1] = (long)puVar3 + lVar9 + lVar8;
          param_1[2] = (ulong)(puVar3 + uVar7 * 6);
          param_1 = puVar5;
          if (uVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(uVar4);
            auVar18._8_8_ = param_2;
            auVar18._0_8_ = uVar4;
            return auVar18;
          }
          goto LAB_10a5e9b88;
        }
      }
      else {
        FUN_10a5e9cd0();
      }
      func_0x000109ffded8();
      pcStack_178 = FUN_10a5e9ba8;
      puVar5 = (ulong *)&DAT_10f62a4d8;
      ppuStack_180 = &ppuStack_130;
      FUN_109ffde64();
      puVar1 = &uStack_1a0;
      pcStack_188 = FUN_10a5e9bbc;
      ppuVar10 = &puStack_190;
      uStack_1a0 = uVar4;
      puStack_198 = param_1;
      if ((ulong)puVar5 >> 0x3c == 0) {
        lVar9 = (long)puVar5 << 4;
        puStack_190 = (undefined1 *)&ppuStack_180;
        __Znwm(lVar9);
        auVar16._8_8_ = puVar5;
        auVar16._0_8_ = lVar9;
        return auVar16;
      }
      uVar11 = 0x10a5e9bf0;
      puStack_190 = (undefined1 *)&ppuStack_180;
      func_0x000109ffded8();
      goto SUB_10a5e9bf0;
    }
    uVar4 = (uVar6 * 0x30 - 0x30) / 0x30;
    param_2 = uVar4 * 0x30 + 0x30;
    puVar3 = puVar5;
    _bzero(puVar5,param_2);
    puVar5 = puVar5 + uVar4 * 6 + 6;
  }
  else {
    if (bVar2) goto LAB_10a5e9b88;
    puVar5 = (ulong *)(uVar4 + param_2 * 0x30);
    puVar3 = param_1;
  }
  param_1[1] = (ulong)puVar5;
  param_1 = puVar3;
LAB_10a5e9b88:
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  return auVar15;
}



/* Entry: 10a5e9a28; end: 10a5e9ba7;  */

undefined1  [16] FUN_10a5e9a28(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar7 = *param_1;
  puVar5 = (ulong *)param_1[1];
  lVar9 = (long)puVar5 - uVar7;
  bVar2 = (ulong)((lVar9 >> 4) * -0x5555555555555555) <= param_2;
  uVar1 = param_2 + (lVar9 >> 4) * 0x5555555555555555;
  if (bVar2 && uVar1 != 0) {
    if ((ulong)(((long)(param_1[2] - (long)puVar5) >> 4) * -0x5555555555555555) < uVar1) {
      if (param_2 < 0x555555555555556) {
        lVar6 = (long)(param_1[2] - uVar7) >> 4;
        uVar8 = lVar6 * 0x5555555555555556;
        if (uVar8 < param_2 || uVar8 - param_2 == 0) {
          uVar8 = param_2;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
          uVar8 = 0x555555555555555;
        }
        if (uVar8 < 0x555555555555556) {
          puVar3 = (ulong *)(uVar8 * 0x30);
          __Znwm();
          lVar6 = ((uVar1 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
          _bzero((long)puVar3 + lVar9,lVar6);
          puVar5 = puVar3;
          param_2 = uVar7;
          _memcpy(puVar3,uVar7,lVar9);
          *param_1 = (ulong)puVar3;
          param_1[1] = (long)puVar3 + lVar9 + lVar6;
          param_1[2] = (ulong)(puVar3 + uVar8 * 6);
          param_1 = puVar5;
          if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(uVar7);
            auVar13._8_8_ = param_2;
            auVar13._0_8_ = uVar7;
            return auVar13;
          }
          goto LAB_10a5e9b88;
        }
      }
      else {
        FUN_10a5e9cd0();
      }
      func_0x000109ffded8();
      plVar4 = (long *)&DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)plVar4 >> 0x3c == 0) {
        lVar9 = (long)plVar4 << 4;
        __Znwm(lVar9);
        auVar11._8_8_ = plVar4;
        auVar11._0_8_ = lVar9;
        return auVar11;
      }
      func_0x000109ffded8();
      lVar9 = plVar4[1];
      lVar6 = plVar4[2];
      while (lVar6 != lVar9) {
        plVar4[2] = lVar6 + -0x10;
        func_0x00010a0daa60();
        lVar6 = plVar4[2];
      }
      if (*plVar4 != 0) {
        __ZdlPv();
      }
      auVar12._8_8_ = param_2;
      auVar12._0_8_ = plVar4;
      return auVar12;
    }
    uVar7 = (uVar1 * 0x30 - 0x30) / 0x30;
    param_2 = uVar7 * 0x30 + 0x30;
    puVar3 = puVar5;
    _bzero(puVar5,param_2);
    puVar5 = puVar5 + uVar7 * 6 + 6;
  }
  else {
    if (bVar2) goto LAB_10a5e9b88;
    puVar5 = (ulong *)(uVar7 + param_2 * 0x30);
    puVar3 = param_1;
  }
  param_1[1] = (ulong)puVar5;
  param_1 = puVar3;
LAB_10a5e9b88:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  return auVar10;
}



/* Entry: 10a5e9ba8; end: 10a5e9bbb;  */

undefined1  [16] FUN_10a5e9ba8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a0daa60();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a5e9bbc; end: 10a5e9c3b;  */

undefined1  [16] FUN_10a5e9bbc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a0daa60();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a5e9c3c; end: 10a5e9c4f;  */

undefined1  [16] FUN_10a5e9c3c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a5e96a0();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a5e9c50; end: 10a5e9ccf;  */

undefined1  [16] FUN_10a5e9c50(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a5e96a0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a5e9cd0; end: 10a5e9ce3;  */

void FUN_10a5e9cd0(undefined8 param_1,long *param_2,ulong *param_3,long *param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  long *plVar25;
  long *plVar26;
  ulong unaff_x25;
  ulong *puVar27;
  ulong *puVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  ulong uStack_218;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_190;
  long *plStack_188;
  ulong *puStack_180;
  ulong uStack_178;
  long *plStack_170;
  long lStack_168;
  ulong *puStack_160;
  long *plStack_158;
  ulong *puStack_150;
  long *plStack_148;
  undefined1 ***pppuStack_140;
  code *pcStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong *puStack_108;
  long *plStack_100;
  long *plStack_f8;
  ulong *puStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  ulong *puStack_d0;
  long *plStack_c8;
  ulong *puStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar28 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
  pcStack_18 = FUN_10a5e9ce4;
  plVar25 = param_2 + 1;
  plVar30 = (long *)*param_2;
  uVar10 = *param_3;
  plVar19 = (long *)param_3[1];
  uStack_a0 = uVar10;
  plVar21 = plVar19;
  if (plVar30 != plVar25) {
    puVar23 = puVar28 + 1;
    puVar27 = (ulong *)*puVar28;
    puVar6 = param_3;
    plVar26 = param_4;
    puStack_20 = &stack0xfffffffffffffff0;
    do {
      if (puVar27 != puVar23) {
        do {
          if ((ulong)plVar30[7] <= puVar27[7]) break;
          puVar7 = puVar27;
          puVar24 = (ulong *)puVar27[1];
          if ((ulong *)puVar27[1] == (ulong *)0x0) {
            do {
              puVar27 = (ulong *)puVar7[2];
              bVar3 = (ulong *)*puVar27 != puVar7;
              puVar7 = puVar27;
            } while (bVar3);
          }
          else {
            do {
              puVar27 = puVar24;
              puVar24 = (ulong *)*puVar27;
            } while ((ulong *)*puVar27 != (ulong *)0x0);
          }
        } while (puVar27 != puVar23);
      }
      if (puVar27 == puVar23) break;
      if (puVar27[7] == plVar30[7]) {
        lVar8 = plVar30[8];
        if (*(ushort *)(puVar27[8] + 0x20) == *(ushort *)(lVar8 + 0x20)) {
          if (plVar21 < (long *)param_3[2]) {
            *plVar21 = lVar8;
            lVar8 = plVar30[9];
            plVar21[1] = lVar8;
            if (lVar8 != 0) {
              plVar31 = (long *)(lVar8 + 8);
              do {
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                if (bVar3) {
                  *plVar31 = *plVar31 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
LAB_10a5e9e30:
            plVar21 = plVar21 + 2;
          }
          else {
            lVar8 = (long)plVar21 - *param_3;
            uVar10 = (lVar8 >> 4) + 1;
            if (uVar10 >> 0x3c != 0) {
LAB_10a5e9fd0:
              FUN_10a5e9ba8();
              uStack_a8 = 0x10a5e9fd4;
              plVar29 = param_2 + 1;
              plVar31 = (long *)*param_2;
              uVar10 = *puVar6;
              uVar12 = puVar6[1];
              uVar9 = uVar10;
              uStack_130 = uVar12;
              if (plVar31 == plVar29) goto LAB_10a5ea240;
              puVar24 = puVar28 + 1;
              puVar28 = (ulong *)*puVar28;
              puVar7 = puVar6;
              plStack_100 = plVar30;
              plStack_f8 = plVar19;
              puStack_f0 = puVar27;
              uStack_e8 = unaff_x25;
              plStack_e0 = plVar21;
              lStack_d8 = lVar8;
              puStack_d0 = puVar23;
              plStack_c8 = plVar25;
              puStack_c0 = param_3;
              plStack_b8 = param_4;
              ppuStack_b0 = &puStack_20;
              goto LAB_10a5ea01c;
            }
            uVar9 = (long)param_3[2] - *param_3;
            uVar12 = (long)uVar9 >> 3;
            if (uVar12 <= uVar10) {
              uVar12 = uVar10;
            }
            if (0x7fffffffffffffef < uVar9) {
              uVar12 = 0xfffffffffffffff;
            }
            puStack_78 = param_3;
            FUN_10a5e9bbc();
            plVar31 = (long *)(uVar12 + lVar8);
            lVar8 = plVar30[9];
            lVar11 = plVar30[8];
            plVar31[1] = plVar30[9];
            *plVar31 = lVar11;
            if (lVar8 != 0) {
              plVar21 = (long *)(lVar8 + 8);
              do {
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar3) {
                  *plVar21 = *plVar21 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
LAB_10a5e9f0c:
            unaff_x25 = uVar12 + (long)param_2 * 0x10;
            plVar21 = plVar31 + 2;
            param_2 = (long *)*param_3;
            puVar6 = (ulong *)(param_3[1] - (long)param_2);
            uVar10 = (long)plVar31 - (long)puVar6;
            _memcpy(uVar10);
            uStack_98 = *param_3;
            *param_3 = uVar10;
            param_3[1] = (ulong)plVar21;
            uStack_80 = param_3[2];
            param_3[2] = unaff_x25;
            puVar28 = &uStack_98;
            uStack_90 = uStack_98;
            uStack_88 = uStack_98;
            func_0x00010a5e9bf0();
          }
          param_3[1] = (ulong)plVar21;
        }
        else if ((*(ushort *)(puVar27[8] + 0x20) | 4) == 6 && *(ushort *)(lVar8 + 0x20) == 3) {
          if ((long *)param_3[2] <= plVar21) {
            lVar8 = (long)plVar21 - *param_3;
            uVar10 = (lVar8 >> 4) + 1;
            if (uVar10 >> 0x3c != 0) goto LAB_10a5e9fd0;
            uVar9 = (long)param_3[2] - *param_3;
            uVar12 = (long)uVar9 >> 3;
            if (uVar12 <= uVar10) {
              uVar12 = uVar10;
            }
            if (0x7fffffffffffffef < uVar9) {
              uVar12 = 0xfffffffffffffff;
            }
            puStack_78 = param_3;
            FUN_10a5e9bbc();
            plVar31 = (long *)(uVar12 + lVar8);
            lVar8 = plVar30[9];
            lVar11 = plVar30[8];
            plVar31[1] = plVar30[9];
            *plVar31 = lVar11;
            if (lVar8 != 0) {
              plVar21 = (long *)(lVar8 + 8);
              do {
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar3) {
                  *plVar21 = *plVar21 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            goto LAB_10a5e9f0c;
          }
          *plVar21 = lVar8;
          lVar8 = plVar30[9];
          plVar21[1] = lVar8;
          if (lVar8 != 0) {
            plVar31 = (long *)(lVar8 + 8);
            do {
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar3) {
                *plVar31 = *plVar31 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          goto LAB_10a5e9e30;
        }
      }
      plVar31 = (long *)plVar30[1];
      plVar29 = plVar30;
      if ((long *)plVar30[1] == (long *)0x0) {
        do {
          plVar30 = (long *)plVar29[2];
          bVar3 = (long *)*plVar30 != plVar29;
          plVar29 = plVar30;
        } while (bVar3);
      }
      else {
        do {
          plVar30 = plVar31;
          plVar31 = (long *)*plVar30;
        } while ((long *)*plVar30 != (long *)0x0);
      }
    } while (plVar30 != plVar25);
    uVar10 = *param_3;
  }
  *param_4 = uVar10 + ((long)plVar19 - uStack_a0);
  param_4[1] = ((long)((long)plVar21 - uVar10) >> 4) - ((long)((long)plVar19 - uStack_a0) >> 4);
  return;
LAB_10a5ea01c:
  do {
    if (puVar28 != puVar24) {
      do {
        if ((ulong)plVar31[7] <= puVar28[7]) break;
        puVar27 = puVar28;
        puVar23 = (ulong *)puVar28[1];
        if ((ulong *)puVar28[1] == (ulong *)0x0) {
          do {
            puVar28 = (ulong *)puVar27[2];
            bVar3 = (ulong *)*puVar28 != puVar27;
            puVar27 = puVar28;
          } while (bVar3);
        }
        else {
          do {
            puVar28 = puVar23;
            puVar23 = (ulong *)*puVar28;
          } while ((ulong *)*puVar28 != (ulong *)0x0);
        }
      } while (puVar28 != puVar24);
    }
    if (puVar28 == puVar24) break;
    if (puVar28[7] == plVar31[7]) {
      plVar30 = (long *)puVar28[8];
      (**(code **)(*plVar30 + 0x28))();
      puVar27 = (ulong *)plVar31[8];
      (**(code **)(*puVar27 + 0x28))();
      if ((int)plVar30 != (int)puVar27) {
        plVar30 = (long *)puVar28[8];
        (**(code **)(*plVar30 + 0x28))();
        if ((int)plVar30 != 2) {
          plVar30 = (long *)puVar28[8];
          (**(code **)(*plVar30 + 0x28))();
          if ((int)plVar30 != 6) goto LAB_10a5ea1f4;
        }
        puVar27 = (ulong *)plVar31[8];
        (**(code **)(*puVar27 + 0x28))();
        if ((int)puVar27 != 3) goto LAB_10a5ea1f4;
      }
      plVar30 = (long *)puVar6[1];
      if (plVar30 < (long *)puVar6[2]) {
        lVar11 = plVar31[9];
        lVar8 = 0;
        if (plVar31[8] != 0) {
          lVar8 = plVar31[8] + 8;
        }
        *plVar30 = lVar8;
        plVar30[1] = lVar11;
        if (lVar11 != 0) {
          plVar19 = (long *)(lVar11 + 8);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar3) {
              *plVar19 = *plVar19 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        plVar19 = plVar30 + 2;
      }
      else {
        lVar8 = (long)plVar30 - *puVar6;
        uVar12 = (lVar8 >> 4) + 1;
        if (uVar12 >> 0x3c != 0) {
          FUN_10a5e9c3c();
          pcStack_138 = FUN_10a5ea27c;
          plVar30 = (long *)puVar27[1];
          uVar12 = puVar27[2];
          plVar25 = (long *)*plVar30;
          while( true ) {
            if (plVar25 == (long *)(uVar12 + 0x1a0)) {
              return;
            }
            if (param_2 < (long *)plVar25[4]) {
              *puVar27 = *puVar27 + (*(long *)(*puVar7 + 0x230) - *(long *)(*puVar7 + 0x228) >> 4);
              return;
            }
            if (param_2 <= (long *)plVar25[4]) break;
            plVar32 = (long *)plVar25[1];
            plVar18 = plVar25;
            if ((long *)plVar25[1] == (long *)0x0) {
              do {
                plVar25 = (long *)plVar18[2];
                bVar3 = (long *)*plVar25 != plVar18;
                plVar18 = plVar25;
              } while (bVar3);
            }
            else {
              do {
                plVar25 = plVar32;
                plVar32 = (long *)*plVar25;
              } while ((long *)*plVar25 != (long *)0x0);
            }
            *plVar30 = (long)plVar25;
          }
          uVar12 = *puVar7;
          lVar11 = *(long *)(uVar12 + 0x228);
          if (*(long *)(uVar12 + 0x230) == lVar11) {
            return;
          }
          uVar9 = 0;
          plStack_190 = plVar31;
          plStack_188 = plVar19;
          puStack_180 = puVar28;
          uStack_178 = uVar10;
          plStack_170 = plVar21;
          lStack_168 = lVar8;
          puStack_160 = puVar24;
          plStack_158 = plVar29;
          puStack_150 = puVar6;
          plStack_148 = plVar26;
          pppuStack_140 = &ppuStack_b0;
          do {
            plVar19 = *(long **)(plVar25[5] + 0x188);
            plVar21 = (long *)(plVar25[5] + 400);
            while ((plVar19 != plVar21 && ((ulong)plVar19[4] < uVar9))) {
              plVar30 = plVar19;
              plVar26 = (long *)plVar19[1];
              if ((long *)plVar19[1] == (long *)0x0) {
                do {
                  plVar19 = (long *)plVar30[2];
                  bVar3 = (long *)*plVar19 != plVar30;
                  plVar30 = plVar19;
                } while (bVar3);
              }
              else {
                do {
                  plVar19 = plVar26;
                  plVar26 = (long *)*plVar19;
                } while ((long *)*plVar19 != (long *)0x0);
              }
            }
            if ((plVar19 != plVar21) && (plVar19[4] == uVar9)) {
              uVar12 = puVar27[3];
              uVar10 = *puVar27;
              uVar13 = (*(long *)(uVar12 + 0x58) - *(long *)(uVar12 + 0x50) >> 4) *
                       -0x5555555555555555;
              if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
LAB_10a5ead24:
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5ead28);
                (*pcVar2)();
              }
              if (uVar10 < (ulong)((long *)puVar27[4])[1]) {
                puVar6 = (ulong *)(*(long *)puVar27[4] + uVar10 * 0x30);
                plVar21 = (long *)*puVar6;
                uVar13 = puVar6[1];
                puVar28 = (ulong *)puVar6[2];
                uStack_218 = puVar6[3];
              }
              else {
                plVar21 = (long *)0x0;
                uVar13 = 0;
                puVar28 = (ulong *)0x0;
                uStack_218 = 0;
              }
              plVar30 = (long *)(lVar11 + uVar9 * 0x10);
              plVar31 = (long *)(*(long *)(uVar12 + 0x50) + uVar10 * 0x30);
              lVar8 = plVar19[5];
              plVar18 = (long *)(uVar12 + 8);
              lVar14 = *plVar18;
              plVar5 = *(undefined8 **)(*plVar30 + 0x1b8) + 1;
              plVar32 = (long *)**(undefined8 **)(*plVar30 + 0x1b8);
              plVar29 = *(long **)(lVar8 + 0x188);
              lVar11 = *(long *)(uVar12 + 0x10);
              plVar26 = plVar21 + uVar13 * 2;
              do {
                if (plVar29 == (long *)(lVar8 + 400)) {
                  if (plVar21 == plVar26) break;
                  plStack_1d0 = (long *)0x0;
                  plStack_1c8 = (long *)0x0;
LAB_10a5ea524:
                  param_2 = plVar21;
                  FUN_10a334e90(&plStack_1d0);
                  plVar21 = plVar21 + 2;
                }
                else {
                  plStack_1d0 = (long *)0x0;
                  plStack_1c8 = (long *)0x0;
                  param_2 = plVar29 + 8;
                  FUN_10a334e90(&plStack_1d0);
                  if (plVar21 == plVar26) {
                    plVar4 = (long *)plVar29[1];
                    plVar20 = plVar29;
                    if ((long *)plVar29[1] == (long *)0x0) {
                      do {
                        plVar29 = (long *)plVar20[2];
                        bVar3 = (long *)*plVar29 != plVar20;
                        plVar20 = plVar29;
                      } while (bVar3);
                    }
                    else {
                      do {
                        plVar29 = plVar4;
                        plVar4 = (long *)*plVar29;
                      } while ((long *)*plVar29 != (long *)0x0);
                    }
                  }
                  else if (*(ulong *)(*plVar21 + 0x18) == plStack_1d0[3]) {
                    plVar4 = (long *)plVar29[1];
                    plVar20 = plVar29;
                    if ((long *)plVar29[1] == (long *)0x0) {
                      do {
                        plVar29 = (long *)plVar20[2];
                        bVar3 = (long *)*plVar29 != plVar20;
                        plVar20 = plVar29;
                      } while (bVar3);
                    }
                    else {
                      do {
                        plVar29 = plVar4;
                        plVar4 = (long *)*plVar29;
                      } while ((long *)*plVar29 != (long *)0x0);
                    }
                    plVar21 = plVar21 + 2;
                  }
                  else {
                    if (*(ulong *)(*plVar21 + 0x18) < (ulong)plStack_1d0[3]) goto LAB_10a5ea524;
                    plVar4 = (long *)plVar29[1];
                    plVar20 = plVar29;
                    if ((long *)plVar29[1] == (long *)0x0) {
                      do {
                        plVar29 = (long *)plVar20[2];
                        bVar3 = (long *)*plVar29 != plVar20;
                        plVar20 = plVar29;
                      } while (bVar3);
                    }
                    else {
                      do {
                        plVar29 = plVar4;
                        plVar4 = (long *)*plVar29;
                      } while ((long *)*plVar29 != (long *)0x0);
                    }
                  }
                }
                if (plVar32 != plVar5) {
                  do {
                    if ((ulong)plStack_1d0[3] <= (ulong)plVar32[7]) break;
                    plVar4 = plVar32;
                    plVar20 = (long *)plVar32[1];
                    if ((long *)plVar32[1] == (long *)0x0) {
                      do {
                        plVar32 = (long *)plVar4[2];
                        bVar3 = (long *)*plVar32 != plVar4;
                        plVar4 = plVar32;
                      } while (bVar3);
                    }
                    else {
                      do {
                        plVar32 = plVar20;
                        plVar20 = (long *)*plVar32;
                      } while ((long *)*plVar32 != (long *)0x0);
                    }
                  } while (plVar32 != plVar5);
                }
                if ((plVar32 != plVar5) && (plVar32[7] == plStack_1d0[3])) {
                  if (*(ushort *)(plVar32[8] + 0x20) == *(ushort *)(plStack_1d0 + 4)) {
                    puVar15 = *(undefined8 **)(uVar12 + 0x10);
                    if (puVar15 < *(undefined8 **)(uVar12 + 0x18)) {
                      *puVar15 = plStack_1d0;
                      puVar15[1] = plStack_1c8;
                      if (plStack_1c8 != (long *)0x0) {
                        plVar4 = plStack_1c8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                          if (bVar3) {
                            *plVar4 = *plVar4 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
LAB_10a5ea638:
                      plVar20 = puVar15 + 2;
                    }
                    else {
                      lVar16 = (long)puVar15 - *plVar18;
                      uVar10 = (lVar16 >> 4) + 1;
                      if (uVar10 >> 0x3c != 0) {
LAB_10a5ead20:
                        FUN_10a5e9ba8();
                        goto LAB_10a5ead24;
                      }
                      uVar17 = (long)*(undefined8 **)(uVar12 + 0x18) - *plVar18;
                      uVar13 = (long)uVar17 >> 3;
                      if (uVar13 <= uVar10) {
                        uVar13 = uVar10;
                      }
                      if (0x7fffffffffffffef < uVar17) {
                        uVar13 = 0xfffffffffffffff;
                      }
                      plStack_1a0 = plVar18;
                      FUN_10a5e9bbc();
                      plVar4 = (long *)(uVar13 + lVar16);
                      plVar4[1] = (long)plStack_1c8;
                      *plVar4 = (long)plStack_1d0;
                      if (plStack_1c8 != (long *)0x0) {
                        plVar20 = plStack_1c8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                          if (bVar3) {
                            *plVar20 = *plVar20 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
LAB_10a5ea74c:
                      lVar16 = (long)param_2 * 0x10;
                      plVar20 = plVar4 + 2;
                      param_2 = *(long **)(uVar12 + 8);
                      lVar22 = (long)plVar4 - (*(long *)(uVar12 + 0x10) - (long)param_2);
                      _memcpy(lVar22);
                      uStack_1c0 = *(undefined8 *)(uVar12 + 8);
                      *(long *)(uVar12 + 8) = lVar22;
                      *(long **)(uVar12 + 0x10) = plVar20;
                      uStack_1a8 = *(undefined8 *)(uVar12 + 0x18);
                      *(ulong *)(uVar12 + 0x18) = uVar13 + lVar16;
                      uStack_1b8 = uStack_1c0;
                      uStack_1b0 = uStack_1c0;
                      func_0x00010a5e9bf0(&uStack_1c0);
                    }
                    *(long **)(uVar12 + 0x10) = plVar20;
                  }
                  else if ((*(ushort *)(plVar32[8] + 0x20) | 4) == 6 &&
                           *(ushort *)(plStack_1d0 + 4) == 3) {
                    puVar15 = *(undefined8 **)(uVar12 + 0x10);
                    if (*(undefined8 **)(uVar12 + 0x18) <= puVar15) {
                      lVar16 = (long)puVar15 - *plVar18;
                      uVar10 = (lVar16 >> 4) + 1;
                      if (uVar10 >> 0x3c != 0) goto LAB_10a5ead20;
                      uVar17 = (long)*(undefined8 **)(uVar12 + 0x18) - *plVar18;
                      uVar13 = (long)uVar17 >> 3;
                      if (uVar13 <= uVar10) {
                        uVar13 = uVar10;
                      }
                      if (0x7fffffffffffffef < uVar17) {
                        uVar13 = 0xfffffffffffffff;
                      }
                      plStack_1a0 = plVar18;
                      FUN_10a5e9bbc();
                      plVar4 = (long *)(uVar13 + lVar16);
                      plVar4[1] = (long)plStack_1c8;
                      *plVar4 = (long)plStack_1d0;
                      if (plStack_1c8 != (long *)0x0) {
                        plVar20 = plStack_1c8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                          if (bVar3) {
                            *plVar20 = *plVar20 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
                      goto LAB_10a5ea74c;
                    }
                    *puVar15 = plStack_1d0;
                    puVar15[1] = plStack_1c8;
                    if (plStack_1c8 != (long *)0x0) {
                      plVar4 = plStack_1c8 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                        if (bVar3) {
                          *plVar4 = *plVar4 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    goto LAB_10a5ea638;
                  }
                }
                plVar4 = plStack_1c8;
                if (plStack_1c8 != (long *)0x0) {
                  plVar20 = plStack_1c8 + 1;
                  do {
                    lVar16 = *plVar20;
                    cVar1 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                    if (bVar3) {
                      *plVar20 = lVar16 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar16 == 0) {
                    (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
                  }
                }
              } while (plVar32 != plVar5);
              lVar11 = lVar11 - lVar14;
              lVar8 = *(long *)(uVar12 + 8);
              lVar14 = *(long *)(uVar12 + 0x10);
              *plVar31 = lVar8 + lVar11;
              plVar31[1] = (lVar14 - lVar8 >> 4) - (lVar11 >> 4);
              lVar11 = plVar19[5];
              uVar10 = puVar27[3];
              plVar32 = (long *)(uVar10 + 0x20);
              lVar14 = *plVar32;
              plVar26 = *(long **)(*plVar30 + 0x1e8);
              plVar29 = *(long **)(lVar11 + 0x1a0);
              lVar8 = *(long *)(uVar10 + 0x28);
              plVar21 = (long *)(*plVar30 + 0x1f0);
              puVar6 = puVar28 + uStack_218 * 2;
              do {
                if (plVar29 == (long *)(lVar11 + 0x1a8)) {
                  if (puVar28 == puVar6) break;
                  plStack_1d0 = (long *)0x0;
                  plStack_1c8 = (long *)0x0;
LAB_10a5ea970:
                  param_2 = (long *)*puVar28;
                  FUN_10a5ead54(&plStack_1d0,param_2,puVar28[1]);
                  plVar18 = plStack_1d0;
                  plVar20 = plStack_1d0;
                  puVar28 = puVar28 + 2;
                }
                else {
                  plStack_1c8 = (long *)plVar29[9];
                  plVar18 = (long *)(plVar29[8] + 8);
                  plStack_1d0 = (long *)0x0;
                  if (plVar29[8] != 0) {
                    plStack_1d0 = plVar18;
                  }
                  if (plStack_1c8 != (long *)0x0) {
                    plVar5 = plStack_1c8 + 1;
                    do {
                      cVar1 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                      if (bVar3) {
                        *plVar5 = *plVar5 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                  }
                  if (puVar28 == puVar6) {
                    plVar5 = (long *)plVar29[1];
                    plVar4 = plVar29;
                    plVar18 = plStack_1d0;
                    puVar28 = puVar6;
                    if ((long *)plVar29[1] == (long *)0x0) {
                      do {
                        plVar29 = (long *)plVar4[2];
                        bVar3 = (long *)*plVar29 != plVar4;
                        plVar4 = plVar29;
                        plVar20 = plStack_1d0;
                      } while (bVar3);
                    }
                    else {
                      do {
                        plVar29 = plVar5;
                        plVar5 = (long *)*plVar29;
                        plVar20 = plStack_1d0;
                      } while ((long *)*plVar29 != (long *)0x0);
                    }
                  }
                  else {
                    plVar4 = (long *)*puVar28;
                    (**(code **)(*plVar4 + 0x30))();
                    plVar5 = plVar18;
                    (**(code **)(*plVar18 + 0x30))();
                    if (plVar4[3] == plVar5[3]) {
                      plVar18 = (long *)plVar29[1];
                      plVar5 = plVar29;
                      if ((long *)plVar29[1] == (long *)0x0) {
                        do {
                          plVar29 = (long *)plVar5[2];
                          bVar3 = (long *)*plVar29 != plVar5;
                          plVar5 = plVar29;
                        } while (bVar3);
                      }
                      else {
                        do {
                          plVar29 = plVar18;
                          plVar18 = (long *)*plVar29;
                        } while ((long *)*plVar29 != (long *)0x0);
                      }
                      plVar18 = plStack_1d0;
                      plVar20 = plStack_1d0;
                      puVar28 = puVar28 + 2;
                    }
                    else {
                      plVar5 = (long *)*puVar28;
                      (**(code **)(*plVar5 + 0x30))();
                      (**(code **)(*plVar18 + 0x30))();
                      if ((ulong)plVar5[3] < (ulong)plVar18[3]) goto LAB_10a5ea970;
                      plVar5 = (long *)plVar29[1];
                      plVar4 = plVar29;
                      plVar18 = plStack_1d0;
                      if ((long *)plVar29[1] == (long *)0x0) {
                        do {
                          plVar29 = (long *)plVar4[2];
                          bVar3 = (long *)*plVar29 != plVar4;
                          plVar4 = plVar29;
                          plVar20 = plStack_1d0;
                        } while (bVar3);
                      }
                      else {
                        do {
                          plVar29 = plVar5;
                          plVar5 = (long *)*plVar29;
                          plVar20 = plStack_1d0;
                        } while ((long *)*plVar29 != (long *)0x0);
                      }
                    }
                  }
                }
                while ((plStack_1d0 = plVar20, plVar20 = plStack_1d0, plVar26 != plVar21 &&
                       (lVar16 = *plStack_1d0, plVar5 = plStack_1d0, plStack_1d0 = plVar18,
                       (**(code **)(lVar16 + 0x30))(), plVar18 = plStack_1d0,
                       (ulong)plVar26[7] < (ulong)plVar5[3]))) {
                  plVar5 = (long *)plVar26[1];
                  plVar4 = plVar26;
                  if ((long *)plVar26[1] == (long *)0x0) {
                    do {
                      plVar26 = (long *)plVar4[2];
                      bVar3 = (long *)*plVar26 != plVar4;
                      plVar4 = plVar26;
                    } while (bVar3);
                  }
                  else {
                    do {
                      plVar26 = plVar5;
                      plVar5 = (long *)*plVar26;
                    } while ((long *)*plVar26 != (long *)0x0);
                  }
                }
                plStack_1d0 = plVar18;
                plVar18 = plStack_1d0;
                if ((plVar26 != plVar21) &&
                   (plVar5 = plStack_1d0, (**(code **)(*plStack_1d0 + 0x30))(),
                   plVar26[7] == plVar5[3])) {
                  plVar4 = (long *)plVar26[8];
                  (**(code **)(*plVar4 + 0x28))();
                  plVar5 = plVar18;
                  (**(code **)(*plVar18 + 0x28))();
                  if ((int)plVar4 == (int)plVar5) {
                    plVar5 = *(long **)(uVar10 + 0x28);
                    if (plVar5 < *(long **)(uVar10 + 0x30)) {
                      *plVar5 = (long)plVar18;
                      plVar5[1] = (long)plStack_1c8;
                      if (plStack_1c8 != (long *)0x0) {
                        plVar18 = plStack_1c8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                          if (bVar3) {
                            *plVar18 = *plVar18 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
LAB_10a5eaaf0:
                      plVar5 = plVar5 + 2;
                    }
                    else {
                      lVar16 = (long)plVar5 - *plVar32;
                      uVar12 = (lVar16 >> 4) + 1;
                      if (uVar12 >> 0x3c != 0) {
LAB_10a5ead18:
                        FUN_10a5e9c3c();
                        goto LAB_10a5ead24;
                      }
                      uVar17 = (long)*(long **)(uVar10 + 0x30) - *plVar32;
                      uVar13 = (long)uVar17 >> 3;
                      if (uVar13 <= uVar12) {
                        uVar13 = uVar12;
                      }
                      if (0x7fffffffffffffef < uVar17) {
                        uVar13 = 0xfffffffffffffff;
                      }
                      plStack_1a0 = plVar32;
                      FUN_10a5e9c50();
                      plVar4 = (long *)(uVar13 + lVar16);
                      *plVar4 = (long)plVar18;
                      plVar4[1] = (long)plStack_1c8;
                      if (plStack_1c8 != (long *)0x0) {
                        plVar18 = plStack_1c8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                          if (bVar3) {
                            *plVar18 = *plVar18 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
LAB_10a5eabfc:
                      lVar16 = (long)param_2 * 0x10;
                      plVar5 = plVar4 + 2;
                      param_2 = *(long **)(uVar10 + 0x20);
                      lVar22 = (long)plVar4 - (*(long *)(uVar10 + 0x28) - (long)param_2);
                      _memcpy(lVar22);
                      uStack_1c0 = *(undefined8 *)(uVar10 + 0x20);
                      *(long *)(uVar10 + 0x20) = lVar22;
                      *(long **)(uVar10 + 0x28) = plVar5;
                      uStack_1a8 = *(undefined8 *)(uVar10 + 0x30);
                      *(ulong *)(uVar10 + 0x30) = uVar13 + lVar16;
                      uStack_1b8 = uStack_1c0;
                      uStack_1b0 = uStack_1c0;
                      func_0x00010a5e9c84(&uStack_1c0);
                    }
                    *(long **)(uVar10 + 0x28) = plVar5;
                  }
                  else {
                    plVar5 = (long *)plVar26[8];
                    (**(code **)(*plVar5 + 0x28))();
                    if ((int)plVar5 != 2) {
                      plVar5 = (long *)plVar26[8];
                      (**(code **)(*plVar5 + 0x28))();
                      if ((int)plVar5 != 6) goto LAB_10a5eac40;
                    }
                    plVar5 = plVar18;
                    (**(code **)(*plVar18 + 0x28))();
                    if ((int)plVar5 == 3) {
                      plVar5 = *(long **)(uVar10 + 0x28);
                      if (*(long **)(uVar10 + 0x30) <= plVar5) {
                        lVar16 = (long)plVar5 - *plVar32;
                        uVar12 = (lVar16 >> 4) + 1;
                        if (uVar12 >> 0x3c != 0) goto LAB_10a5ead18;
                        uVar17 = (long)*(long **)(uVar10 + 0x30) - *plVar32;
                        uVar13 = (long)uVar17 >> 3;
                        if (uVar13 <= uVar12) {
                          uVar13 = uVar12;
                        }
                        if (0x7fffffffffffffef < uVar17) {
                          uVar13 = 0xfffffffffffffff;
                        }
                        plStack_1a0 = plVar32;
                        FUN_10a5e9c50();
                        plVar4 = (long *)(uVar13 + lVar16);
                        *plVar4 = (long)plVar18;
                        plVar4[1] = (long)plStack_1c8;
                        if (plStack_1c8 != (long *)0x0) {
                          plVar18 = plStack_1c8 + 1;
                          do {
                            cVar1 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                            if (bVar3) {
                              *plVar18 = *plVar18 + 1;
                              cVar1 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar1 != '\0');
                        }
                        goto LAB_10a5eabfc;
                      }
                      *plVar5 = (long)plVar18;
                      plVar5[1] = (long)plStack_1c8;
                      if (plStack_1c8 != (long *)0x0) {
                        plVar18 = plStack_1c8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                          if (bVar3) {
                            *plVar18 = *plVar18 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
                      goto LAB_10a5eaaf0;
                    }
                  }
                }
LAB_10a5eac40:
                plVar18 = plStack_1c8;
                if (plStack_1c8 != (long *)0x0) {
                  plVar5 = plStack_1c8 + 1;
                  do {
                    lVar16 = *plVar5;
                    cVar1 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                    if (bVar3) {
                      *plVar5 = lVar16 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar16 == 0) {
                    (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                  }
                }
              } while (plVar26 != plVar21);
              lVar8 = lVar8 - lVar14;
              lVar11 = *(long *)(uVar10 + 0x20);
              lVar14 = *(long *)(uVar10 + 0x28);
              plVar31[2] = lVar11 + lVar8;
              plVar31[3] = (lVar14 - lVar11 >> 4) - (lVar8 >> 4);
              param_2 = (long *)(plVar19[5] + 0x1b8);
              FUN_10a5e1c84(*plVar30 + 0x2c0,param_2,puVar27[3] + 0x38,plVar31 + 4);
              uVar12 = *puVar7;
            }
            uVar9 = uVar9 + 1;
            *puVar27 = *puVar27 + 1;
            lVar11 = *(long *)(uVar12 + 0x228);
            if ((ulong)(*(long *)(uVar12 + 0x230) - lVar11 >> 4) <= uVar9) {
              return;
            }
          } while( true );
        }
        uVar13 = (long)puVar6[2] - *puVar6;
        uVar9 = (long)uVar13 >> 3;
        if (uVar9 <= uVar12) {
          uVar9 = uVar12;
        }
        if (0x7fffffffffffffef < uVar13) {
          uVar9 = 0xfffffffffffffff;
        }
        puStack_108 = puVar6;
        FUN_10a5e9c50();
        plVar30 = (long *)(uVar9 + lVar8);
        lVar11 = plVar31[9];
        lVar8 = 0;
        if (plVar31[8] != 0) {
          lVar8 = plVar31[8] + 8;
        }
        *plVar30 = lVar8;
        plVar30[1] = lVar11;
        if (lVar11 != 0) {
          plVar21 = (long *)(lVar11 + 8);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *plVar21 = *plVar21 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        plVar21 = (long *)(uVar9 + (long)param_2 * 0x10);
        plVar19 = plVar30 + 2;
        param_2 = (long *)*puVar6;
        puVar7 = (ulong *)(puVar6[1] - (long)param_2);
        uVar12 = (long)plVar30 - (long)puVar7;
        _memcpy(uVar12);
        uStack_128 = *puVar6;
        *puVar6 = uVar12;
        puVar6[1] = (ulong)plVar19;
        uStack_110 = puVar6[2];
        puVar6[2] = (ulong)plVar21;
        uStack_120 = uStack_128;
        uStack_118 = uStack_128;
        func_0x00010a5e9c84(&uStack_128);
      }
      puVar6[1] = (ulong)plVar19;
    }
LAB_10a5ea1f4:
    plVar30 = (long *)plVar31[1];
    plVar25 = plVar31;
    if ((long *)plVar31[1] == (long *)0x0) {
      do {
        plVar31 = (long *)plVar25[2];
        bVar3 = (long *)*plVar31 != plVar25;
        plVar25 = plVar31;
      } while (bVar3);
    }
    else {
      do {
        plVar31 = plVar30;
        plVar30 = (long *)*plVar31;
      } while ((long *)*plVar31 != (long *)0x0);
    }
  } while (plVar31 != plVar29);
  uVar12 = puVar6[1];
  uVar9 = *puVar6;
LAB_10a5ea240:
  *plVar26 = uVar9 + (uStack_130 - uVar10);
  plVar26[1] = ((long)(uVar12 - uVar9) >> 4) - ((long)(uStack_130 - uVar10) >> 4);
  return;
}



/* Entry: 10a5e9ce4; end: 10a5ea27b;  */

void FUN_10a5e9ce4(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  ulong *puVar24;
  long *plVar25;
  long *plVar26;
  ulong unaff_x25;
  ulong *puVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  ulong uStack_208;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_180;
  long *plStack_178;
  ulong *puStack_170;
  ulong uStack_168;
  long *plStack_160;
  long lStack_158;
  ulong *puStack_150;
  long *plStack_148;
  ulong *puStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong *puStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  ulong *puStack_c0;
  long *plStack_b8;
  ulong *puStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  plVar25 = param_2 + 1;
  plVar29 = (long *)*param_2;
  uVar10 = *param_3;
  plVar19 = (long *)param_3[1];
  uStack_90 = uVar10;
  plVar22 = plVar19;
  if (plVar29 != plVar25) {
    puVar20 = param_1 + 1;
    puVar27 = (ulong *)*param_1;
    puVar6 = param_3;
    plVar26 = param_4;
    do {
      if (puVar27 != puVar20) {
        do {
          if ((ulong)plVar29[7] <= puVar27[7]) break;
          puVar7 = puVar27;
          puVar24 = (ulong *)puVar27[1];
          if ((ulong *)puVar27[1] == (ulong *)0x0) {
            do {
              puVar27 = (ulong *)puVar7[2];
              bVar3 = (ulong *)*puVar27 != puVar7;
              puVar7 = puVar27;
            } while (bVar3);
          }
          else {
            do {
              puVar27 = puVar24;
              puVar24 = (ulong *)*puVar27;
            } while ((ulong *)*puVar27 != (ulong *)0x0);
          }
        } while (puVar27 != puVar20);
      }
      if (puVar27 == puVar20) break;
      if (puVar27[7] == plVar29[7]) {
        lVar8 = plVar29[8];
        if (*(ushort *)(puVar27[8] + 0x20) == *(ushort *)(lVar8 + 0x20)) {
          if (plVar22 < (long *)param_3[2]) {
            *plVar22 = lVar8;
            lVar8 = plVar29[9];
            plVar22[1] = lVar8;
            if (lVar8 != 0) {
              plVar30 = (long *)(lVar8 + 8);
              do {
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar30,0x10);
                if (bVar3) {
                  *plVar30 = *plVar30 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
LAB_10a5e9e30:
            plVar22 = plVar22 + 2;
          }
          else {
            lVar8 = (long)plVar22 - *param_3;
            uVar10 = (lVar8 >> 4) + 1;
            if (uVar10 >> 0x3c != 0) {
LAB_10a5e9fd0:
              FUN_10a5e9ba8();
              uStack_98 = 0x10a5e9fd4;
              plVar28 = param_2 + 1;
              plVar30 = (long *)*param_2;
              uVar10 = *puVar6;
              uVar12 = puVar6[1];
              uVar9 = uVar10;
              uStack_120 = uVar12;
              if (plVar30 == plVar28) goto LAB_10a5ea240;
              puVar24 = param_1 + 1;
              param_1 = (ulong *)*param_1;
              puVar7 = puVar6;
              plStack_f0 = plVar29;
              plStack_e8 = plVar19;
              puStack_e0 = puVar27;
              uStack_d8 = unaff_x25;
              plStack_d0 = plVar22;
              lStack_c8 = lVar8;
              puStack_c0 = puVar20;
              plStack_b8 = plVar25;
              puStack_b0 = param_3;
              plStack_a8 = param_4;
              puStack_a0 = &stack0xfffffffffffffff0;
              goto LAB_10a5ea01c;
            }
            uVar9 = (long)param_3[2] - *param_3;
            uVar12 = (long)uVar9 >> 3;
            if (uVar12 <= uVar10) {
              uVar12 = uVar10;
            }
            if (0x7fffffffffffffef < uVar9) {
              uVar12 = 0xfffffffffffffff;
            }
            puStack_68 = param_3;
            FUN_10a5e9bbc();
            plVar30 = (long *)(uVar12 + lVar8);
            lVar8 = plVar29[9];
            lVar11 = plVar29[8];
            plVar30[1] = plVar29[9];
            *plVar30 = lVar11;
            if (lVar8 != 0) {
              plVar22 = (long *)(lVar8 + 8);
              do {
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar3) {
                  *plVar22 = *plVar22 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
LAB_10a5e9f0c:
            unaff_x25 = uVar12 + (long)param_2 * 0x10;
            plVar22 = plVar30 + 2;
            param_2 = (long *)*param_3;
            puVar6 = (ulong *)(param_3[1] - (long)param_2);
            uVar10 = (long)plVar30 - (long)puVar6;
            _memcpy(uVar10);
            uStack_88 = *param_3;
            *param_3 = uVar10;
            param_3[1] = (ulong)plVar22;
            uStack_70 = param_3[2];
            param_3[2] = unaff_x25;
            param_1 = &uStack_88;
            uStack_80 = uStack_88;
            uStack_78 = uStack_88;
            func_0x00010a5e9bf0();
          }
          param_3[1] = (ulong)plVar22;
        }
        else if ((*(ushort *)(puVar27[8] + 0x20) | 4) == 6 && *(ushort *)(lVar8 + 0x20) == 3) {
          if ((long *)param_3[2] <= plVar22) {
            lVar8 = (long)plVar22 - *param_3;
            uVar10 = (lVar8 >> 4) + 1;
            if (uVar10 >> 0x3c != 0) goto LAB_10a5e9fd0;
            uVar9 = (long)param_3[2] - *param_3;
            uVar12 = (long)uVar9 >> 3;
            if (uVar12 <= uVar10) {
              uVar12 = uVar10;
            }
            if (0x7fffffffffffffef < uVar9) {
              uVar12 = 0xfffffffffffffff;
            }
            puStack_68 = param_3;
            FUN_10a5e9bbc();
            plVar30 = (long *)(uVar12 + lVar8);
            lVar8 = plVar29[9];
            lVar11 = plVar29[8];
            plVar30[1] = plVar29[9];
            *plVar30 = lVar11;
            if (lVar8 != 0) {
              plVar22 = (long *)(lVar8 + 8);
              do {
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar3) {
                  *plVar22 = *plVar22 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            goto LAB_10a5e9f0c;
          }
          *plVar22 = lVar8;
          lVar8 = plVar29[9];
          plVar22[1] = lVar8;
          if (lVar8 != 0) {
            plVar30 = (long *)(lVar8 + 8);
            do {
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar3) {
                *plVar30 = *plVar30 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          goto LAB_10a5e9e30;
        }
      }
      plVar30 = (long *)plVar29[1];
      plVar28 = plVar29;
      if ((long *)plVar29[1] == (long *)0x0) {
        do {
          plVar29 = (long *)plVar28[2];
          bVar3 = (long *)*plVar29 != plVar28;
          plVar28 = plVar29;
        } while (bVar3);
      }
      else {
        do {
          plVar29 = plVar30;
          plVar30 = (long *)*plVar29;
        } while ((long *)*plVar29 != (long *)0x0);
      }
    } while (plVar29 != plVar25);
    uVar10 = *param_3;
  }
  *param_4 = uVar10 + ((long)plVar19 - uStack_90);
  param_4[1] = ((long)((long)plVar22 - uVar10) >> 4) - ((long)((long)plVar19 - uStack_90) >> 4);
  return;
LAB_10a5ea01c:
  do {
    if (param_1 != puVar24) {
      do {
        if ((ulong)plVar30[7] <= param_1[7]) break;
        puVar27 = param_1;
        puVar20 = (ulong *)param_1[1];
        if ((ulong *)param_1[1] == (ulong *)0x0) {
          do {
            param_1 = (ulong *)puVar27[2];
            bVar3 = (ulong *)*param_1 != puVar27;
            puVar27 = param_1;
          } while (bVar3);
        }
        else {
          do {
            param_1 = puVar20;
            puVar20 = (ulong *)*param_1;
          } while ((ulong *)*param_1 != (ulong *)0x0);
        }
      } while (param_1 != puVar24);
    }
    if (param_1 == puVar24) break;
    if (param_1[7] == plVar30[7]) {
      plVar29 = (long *)param_1[8];
      (**(code **)(*plVar29 + 0x28))();
      puVar27 = (ulong *)plVar30[8];
      (**(code **)(*puVar27 + 0x28))();
      if ((int)plVar29 != (int)puVar27) {
        plVar29 = (long *)param_1[8];
        (**(code **)(*plVar29 + 0x28))();
        if ((int)plVar29 != 2) {
          plVar29 = (long *)param_1[8];
          (**(code **)(*plVar29 + 0x28))();
          if ((int)plVar29 != 6) goto LAB_10a5ea1f4;
        }
        puVar27 = (ulong *)plVar30[8];
        (**(code **)(*puVar27 + 0x28))();
        if ((int)puVar27 != 3) goto LAB_10a5ea1f4;
      }
      plVar29 = (long *)puVar6[1];
      if (plVar29 < (long *)puVar6[2]) {
        lVar11 = plVar30[9];
        lVar8 = 0;
        if (plVar30[8] != 0) {
          lVar8 = plVar30[8] + 8;
        }
        *plVar29 = lVar8;
        plVar29[1] = lVar11;
        if (lVar11 != 0) {
          plVar19 = (long *)(lVar11 + 8);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar3) {
              *plVar19 = *plVar19 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        plVar19 = plVar29 + 2;
      }
      else {
        lVar8 = (long)plVar29 - *puVar6;
        uVar12 = (lVar8 >> 4) + 1;
        if (uVar12 >> 0x3c != 0) {
          FUN_10a5e9c3c();
          pcStack_128 = FUN_10a5ea27c;
          plVar29 = (long *)puVar27[1];
          uVar12 = puVar27[2];
          plVar25 = (long *)*plVar29;
          while( true ) {
            if (plVar25 == (long *)(uVar12 + 0x1a0)) {
              return;
            }
            if (param_2 < (long *)plVar25[4]) {
              *puVar27 = *puVar27 + (*(long *)(*puVar7 + 0x230) - *(long *)(*puVar7 + 0x228) >> 4);
              return;
            }
            if (param_2 <= (long *)plVar25[4]) break;
            plVar31 = (long *)plVar25[1];
            plVar18 = plVar25;
            if ((long *)plVar25[1] == (long *)0x0) {
              do {
                plVar25 = (long *)plVar18[2];
                bVar3 = (long *)*plVar25 != plVar18;
                plVar18 = plVar25;
              } while (bVar3);
            }
            else {
              do {
                plVar25 = plVar31;
                plVar31 = (long *)*plVar25;
              } while ((long *)*plVar25 != (long *)0x0);
            }
            *plVar29 = (long)plVar25;
          }
          uVar12 = *puVar7;
          lVar11 = *(long *)(uVar12 + 0x228);
          if (*(long *)(uVar12 + 0x230) == lVar11) {
            return;
          }
          uVar9 = 0;
          plStack_180 = plVar30;
          plStack_178 = plVar19;
          puStack_170 = param_1;
          uStack_168 = uVar10;
          plStack_160 = plVar22;
          lStack_158 = lVar8;
          puStack_150 = puVar24;
          plStack_148 = plVar28;
          puStack_140 = puVar6;
          plStack_138 = plVar26;
          ppuStack_130 = &puStack_a0;
          do {
            plVar19 = *(long **)(plVar25[5] + 0x188);
            plVar22 = (long *)(plVar25[5] + 400);
            while ((plVar19 != plVar22 && ((ulong)plVar19[4] < uVar9))) {
              plVar29 = plVar19;
              plVar26 = (long *)plVar19[1];
              if ((long *)plVar19[1] == (long *)0x0) {
                do {
                  plVar19 = (long *)plVar29[2];
                  bVar3 = (long *)*plVar19 != plVar29;
                  plVar29 = plVar19;
                } while (bVar3);
              }
              else {
                do {
                  plVar19 = plVar26;
                  plVar26 = (long *)*plVar19;
                } while ((long *)*plVar19 != (long *)0x0);
              }
            }
            if ((plVar19 != plVar22) && (plVar19[4] == uVar9)) {
              uVar12 = puVar27[3];
              uVar10 = *puVar27;
              uVar13 = (*(long *)(uVar12 + 0x58) - *(long *)(uVar12 + 0x50) >> 4) *
                       -0x5555555555555555;
              if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
LAB_10a5ead24:
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5ead28);
                (*pcVar2)();
              }
              if (uVar10 < (ulong)((long *)puVar27[4])[1]) {
                puVar20 = (ulong *)(*(long *)puVar27[4] + uVar10 * 0x30);
                plVar22 = (long *)*puVar20;
                uVar13 = puVar20[1];
                puVar6 = (ulong *)puVar20[2];
                uStack_208 = puVar20[3];
              }
              else {
                plVar22 = (long *)0x0;
                uVar13 = 0;
                puVar6 = (ulong *)0x0;
                uStack_208 = 0;
              }
              plVar29 = (long *)(lVar11 + uVar9 * 0x10);
              plVar30 = (long *)(*(long *)(uVar12 + 0x50) + uVar10 * 0x30);
              lVar8 = plVar19[5];
              plVar18 = (long *)(uVar12 + 8);
              lVar14 = *plVar18;
              plVar5 = *(undefined8 **)(*plVar29 + 0x1b8) + 1;
              plVar31 = (long *)**(undefined8 **)(*plVar29 + 0x1b8);
              plVar28 = *(long **)(lVar8 + 0x188);
              lVar11 = *(long *)(uVar12 + 0x10);
              plVar26 = plVar22 + uVar13 * 2;
              do {
                if (plVar28 == (long *)(lVar8 + 400)) {
                  if (plVar22 == plVar26) break;
                  plStack_1c0 = (long *)0x0;
                  plStack_1b8 = (long *)0x0;
LAB_10a5ea524:
                  param_2 = plVar22;
                  FUN_10a334e90(&plStack_1c0);
                  plVar22 = plVar22 + 2;
                }
                else {
                  plStack_1c0 = (long *)0x0;
                  plStack_1b8 = (long *)0x0;
                  param_2 = plVar28 + 8;
                  FUN_10a334e90(&plStack_1c0);
                  if (plVar22 == plVar26) {
                    plVar4 = (long *)plVar28[1];
                    plVar21 = plVar28;
                    if ((long *)plVar28[1] == (long *)0x0) {
                      do {
                        plVar28 = (long *)plVar21[2];
                        bVar3 = (long *)*plVar28 != plVar21;
                        plVar21 = plVar28;
                      } while (bVar3);
                    }
                    else {
                      do {
                        plVar28 = plVar4;
                        plVar4 = (long *)*plVar28;
                      } while ((long *)*plVar28 != (long *)0x0);
                    }
                  }
                  else if (*(ulong *)(*plVar22 + 0x18) == plStack_1c0[3]) {
                    plVar4 = (long *)plVar28[1];
                    plVar21 = plVar28;
                    if ((long *)plVar28[1] == (long *)0x0) {
                      do {
                        plVar28 = (long *)plVar21[2];
                        bVar3 = (long *)*plVar28 != plVar21;
                        plVar21 = plVar28;
                      } while (bVar3);
                    }
                    else {
                      do {
                        plVar28 = plVar4;
                        plVar4 = (long *)*plVar28;
                      } while ((long *)*plVar28 != (long *)0x0);
                    }
                    plVar22 = plVar22 + 2;
                  }
                  else {
                    if (*(ulong *)(*plVar22 + 0x18) < (ulong)plStack_1c0[3]) goto LAB_10a5ea524;
                    plVar4 = (long *)plVar28[1];
                    plVar21 = plVar28;
                    if ((long *)plVar28[1] == (long *)0x0) {
                      do {
                        plVar28 = (long *)plVar21[2];
                        bVar3 = (long *)*plVar28 != plVar21;
                        plVar21 = plVar28;
                      } while (bVar3);
                    }
                    else {
                      do {
                        plVar28 = plVar4;
                        plVar4 = (long *)*plVar28;
                      } while ((long *)*plVar28 != (long *)0x0);
                    }
                  }
                }
                if (plVar31 != plVar5) {
                  do {
                    if ((ulong)plStack_1c0[3] <= (ulong)plVar31[7]) break;
                    plVar4 = plVar31;
                    plVar21 = (long *)plVar31[1];
                    if ((long *)plVar31[1] == (long *)0x0) {
                      do {
                        plVar31 = (long *)plVar4[2];
                        bVar3 = (long *)*plVar31 != plVar4;
                        plVar4 = plVar31;
                      } while (bVar3);
                    }
                    else {
                      do {
                        plVar31 = plVar21;
                        plVar21 = (long *)*plVar31;
                      } while ((long *)*plVar31 != (long *)0x0);
                    }
                  } while (plVar31 != plVar5);
                }
                if ((plVar31 != plVar5) && (plVar31[7] == plStack_1c0[3])) {
                  if (*(ushort *)(plVar31[8] + 0x20) == *(ushort *)(plStack_1c0 + 4)) {
                    puVar15 = *(undefined8 **)(uVar12 + 0x10);
                    if (puVar15 < *(undefined8 **)(uVar12 + 0x18)) {
                      *puVar15 = plStack_1c0;
                      puVar15[1] = plStack_1b8;
                      if (plStack_1b8 != (long *)0x0) {
                        plVar4 = plStack_1b8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                          if (bVar3) {
                            *plVar4 = *plVar4 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
LAB_10a5ea638:
                      plVar21 = puVar15 + 2;
                    }
                    else {
                      lVar16 = (long)puVar15 - *plVar18;
                      uVar10 = (lVar16 >> 4) + 1;
                      if (uVar10 >> 0x3c != 0) {
LAB_10a5ead20:
                        FUN_10a5e9ba8();
                        goto LAB_10a5ead24;
                      }
                      uVar17 = (long)*(undefined8 **)(uVar12 + 0x18) - *plVar18;
                      uVar13 = (long)uVar17 >> 3;
                      if (uVar13 <= uVar10) {
                        uVar13 = uVar10;
                      }
                      if (0x7fffffffffffffef < uVar17) {
                        uVar13 = 0xfffffffffffffff;
                      }
                      plStack_190 = plVar18;
                      FUN_10a5e9bbc();
                      plVar4 = (long *)(uVar13 + lVar16);
                      plVar4[1] = (long)plStack_1b8;
                      *plVar4 = (long)plStack_1c0;
                      if (plStack_1b8 != (long *)0x0) {
                        plVar21 = plStack_1b8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                          if (bVar3) {
                            *plVar21 = *plVar21 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
LAB_10a5ea74c:
                      lVar16 = (long)param_2 * 0x10;
                      plVar21 = plVar4 + 2;
                      param_2 = *(long **)(uVar12 + 8);
                      lVar23 = (long)plVar4 - (*(long *)(uVar12 + 0x10) - (long)param_2);
                      _memcpy(lVar23);
                      uStack_1b0 = *(undefined8 *)(uVar12 + 8);
                      *(long *)(uVar12 + 8) = lVar23;
                      *(long **)(uVar12 + 0x10) = plVar21;
                      uStack_198 = *(undefined8 *)(uVar12 + 0x18);
                      *(ulong *)(uVar12 + 0x18) = uVar13 + lVar16;
                      uStack_1a8 = uStack_1b0;
                      uStack_1a0 = uStack_1b0;
                      func_0x00010a5e9bf0(&uStack_1b0);
                    }
                    *(long **)(uVar12 + 0x10) = plVar21;
                  }
                  else if ((*(ushort *)(plVar31[8] + 0x20) | 4) == 6 &&
                           *(ushort *)(plStack_1c0 + 4) == 3) {
                    puVar15 = *(undefined8 **)(uVar12 + 0x10);
                    if (*(undefined8 **)(uVar12 + 0x18) <= puVar15) {
                      lVar16 = (long)puVar15 - *plVar18;
                      uVar10 = (lVar16 >> 4) + 1;
                      if (uVar10 >> 0x3c != 0) goto LAB_10a5ead20;
                      uVar17 = (long)*(undefined8 **)(uVar12 + 0x18) - *plVar18;
                      uVar13 = (long)uVar17 >> 3;
                      if (uVar13 <= uVar10) {
                        uVar13 = uVar10;
                      }
                      if (0x7fffffffffffffef < uVar17) {
                        uVar13 = 0xfffffffffffffff;
                      }
                      plStack_190 = plVar18;
                      FUN_10a5e9bbc();
                      plVar4 = (long *)(uVar13 + lVar16);
                      plVar4[1] = (long)plStack_1b8;
                      *plVar4 = (long)plStack_1c0;
                      if (plStack_1b8 != (long *)0x0) {
                        plVar21 = plStack_1b8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                          if (bVar3) {
                            *plVar21 = *plVar21 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
                      goto LAB_10a5ea74c;
                    }
                    *puVar15 = plStack_1c0;
                    puVar15[1] = plStack_1b8;
                    if (plStack_1b8 != (long *)0x0) {
                      plVar4 = plStack_1b8 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                        if (bVar3) {
                          *plVar4 = *plVar4 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    goto LAB_10a5ea638;
                  }
                }
                plVar4 = plStack_1b8;
                if (plStack_1b8 != (long *)0x0) {
                  plVar21 = plStack_1b8 + 1;
                  do {
                    lVar16 = *plVar21;
                    cVar1 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                    if (bVar3) {
                      *plVar21 = lVar16 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar16 == 0) {
                    (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
                  }
                }
              } while (plVar31 != plVar5);
              lVar11 = lVar11 - lVar14;
              lVar8 = *(long *)(uVar12 + 8);
              lVar14 = *(long *)(uVar12 + 0x10);
              *plVar30 = lVar8 + lVar11;
              plVar30[1] = (lVar14 - lVar8 >> 4) - (lVar11 >> 4);
              lVar11 = plVar19[5];
              uVar10 = puVar27[3];
              plVar31 = (long *)(uVar10 + 0x20);
              lVar14 = *plVar31;
              plVar26 = *(long **)(*plVar29 + 0x1e8);
              plVar28 = *(long **)(lVar11 + 0x1a0);
              lVar8 = *(long *)(uVar10 + 0x28);
              plVar22 = (long *)(*plVar29 + 0x1f0);
              puVar20 = puVar6 + uStack_208 * 2;
              do {
                if (plVar28 == (long *)(lVar11 + 0x1a8)) {
                  if (puVar6 == puVar20) break;
                  plStack_1c0 = (long *)0x0;
                  plStack_1b8 = (long *)0x0;
LAB_10a5ea970:
                  param_2 = (long *)*puVar6;
                  FUN_10a5ead54(&plStack_1c0,param_2,puVar6[1]);
                  plVar18 = plStack_1c0;
                  plVar21 = plStack_1c0;
                  puVar6 = puVar6 + 2;
                }
                else {
                  plStack_1b8 = (long *)plVar28[9];
                  plVar18 = (long *)(plVar28[8] + 8);
                  plStack_1c0 = (long *)0x0;
                  if (plVar28[8] != 0) {
                    plStack_1c0 = plVar18;
                  }
                  if (plStack_1b8 != (long *)0x0) {
                    plVar5 = plStack_1b8 + 1;
                    do {
                      cVar1 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                      if (bVar3) {
                        *plVar5 = *plVar5 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                  }
                  if (puVar6 == puVar20) {
                    plVar5 = (long *)plVar28[1];
                    plVar4 = plVar28;
                    plVar18 = plStack_1c0;
                    puVar6 = puVar20;
                    if ((long *)plVar28[1] == (long *)0x0) {
                      do {
                        plVar28 = (long *)plVar4[2];
                        bVar3 = (long *)*plVar28 != plVar4;
                        plVar4 = plVar28;
                        plVar21 = plStack_1c0;
                      } while (bVar3);
                    }
                    else {
                      do {
                        plVar28 = plVar5;
                        plVar5 = (long *)*plVar28;
                        plVar21 = plStack_1c0;
                      } while ((long *)*plVar28 != (long *)0x0);
                    }
                  }
                  else {
                    plVar4 = (long *)*puVar6;
                    (**(code **)(*plVar4 + 0x30))();
                    plVar5 = plVar18;
                    (**(code **)(*plVar18 + 0x30))();
                    if (plVar4[3] == plVar5[3]) {
                      plVar18 = (long *)plVar28[1];
                      plVar5 = plVar28;
                      if ((long *)plVar28[1] == (long *)0x0) {
                        do {
                          plVar28 = (long *)plVar5[2];
                          bVar3 = (long *)*plVar28 != plVar5;
                          plVar5 = plVar28;
                        } while (bVar3);
                      }
                      else {
                        do {
                          plVar28 = plVar18;
                          plVar18 = (long *)*plVar28;
                        } while ((long *)*plVar28 != (long *)0x0);
                      }
                      plVar18 = plStack_1c0;
                      plVar21 = plStack_1c0;
                      puVar6 = puVar6 + 2;
                    }
                    else {
                      plVar5 = (long *)*puVar6;
                      (**(code **)(*plVar5 + 0x30))();
                      (**(code **)(*plVar18 + 0x30))();
                      if ((ulong)plVar5[3] < (ulong)plVar18[3]) goto LAB_10a5ea970;
                      plVar5 = (long *)plVar28[1];
                      plVar4 = plVar28;
                      plVar18 = plStack_1c0;
                      if ((long *)plVar28[1] == (long *)0x0) {
                        do {
                          plVar28 = (long *)plVar4[2];
                          bVar3 = (long *)*plVar28 != plVar4;
                          plVar4 = plVar28;
                          plVar21 = plStack_1c0;
                        } while (bVar3);
                      }
                      else {
                        do {
                          plVar28 = plVar5;
                          plVar5 = (long *)*plVar28;
                          plVar21 = plStack_1c0;
                        } while ((long *)*plVar28 != (long *)0x0);
                      }
                    }
                  }
                }
                while ((plStack_1c0 = plVar21, plVar21 = plStack_1c0, plVar26 != plVar22 &&
                       (lVar16 = *plStack_1c0, plVar5 = plStack_1c0, plStack_1c0 = plVar18,
                       (**(code **)(lVar16 + 0x30))(), plVar18 = plStack_1c0,
                       (ulong)plVar26[7] < (ulong)plVar5[3]))) {
                  plVar5 = (long *)plVar26[1];
                  plVar4 = plVar26;
                  if ((long *)plVar26[1] == (long *)0x0) {
                    do {
                      plVar26 = (long *)plVar4[2];
                      bVar3 = (long *)*plVar26 != plVar4;
                      plVar4 = plVar26;
                    } while (bVar3);
                  }
                  else {
                    do {
                      plVar26 = plVar5;
                      plVar5 = (long *)*plVar26;
                    } while ((long *)*plVar26 != (long *)0x0);
                  }
                }
                plStack_1c0 = plVar18;
                plVar18 = plStack_1c0;
                if ((plVar26 != plVar22) &&
                   (plVar5 = plStack_1c0, (**(code **)(*plStack_1c0 + 0x30))(),
                   plVar26[7] == plVar5[3])) {
                  plVar4 = (long *)plVar26[8];
                  (**(code **)(*plVar4 + 0x28))();
                  plVar5 = plVar18;
                  (**(code **)(*plVar18 + 0x28))();
                  if ((int)plVar4 == (int)plVar5) {
                    plVar5 = *(long **)(uVar10 + 0x28);
                    if (plVar5 < *(long **)(uVar10 + 0x30)) {
                      *plVar5 = (long)plVar18;
                      plVar5[1] = (long)plStack_1b8;
                      if (plStack_1b8 != (long *)0x0) {
                        plVar18 = plStack_1b8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                          if (bVar3) {
                            *plVar18 = *plVar18 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
LAB_10a5eaaf0:
                      plVar5 = plVar5 + 2;
                    }
                    else {
                      lVar16 = (long)plVar5 - *plVar31;
                      uVar12 = (lVar16 >> 4) + 1;
                      if (uVar12 >> 0x3c != 0) {
LAB_10a5ead18:
                        FUN_10a5e9c3c();
                        goto LAB_10a5ead24;
                      }
                      uVar17 = (long)*(long **)(uVar10 + 0x30) - *plVar31;
                      uVar13 = (long)uVar17 >> 3;
                      if (uVar13 <= uVar12) {
                        uVar13 = uVar12;
                      }
                      if (0x7fffffffffffffef < uVar17) {
                        uVar13 = 0xfffffffffffffff;
                      }
                      plStack_190 = plVar31;
                      FUN_10a5e9c50();
                      plVar4 = (long *)(uVar13 + lVar16);
                      *plVar4 = (long)plVar18;
                      plVar4[1] = (long)plStack_1b8;
                      if (plStack_1b8 != (long *)0x0) {
                        plVar18 = plStack_1b8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                          if (bVar3) {
                            *plVar18 = *plVar18 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
LAB_10a5eabfc:
                      lVar16 = (long)param_2 * 0x10;
                      plVar5 = plVar4 + 2;
                      param_2 = *(long **)(uVar10 + 0x20);
                      lVar23 = (long)plVar4 - (*(long *)(uVar10 + 0x28) - (long)param_2);
                      _memcpy(lVar23);
                      uStack_1b0 = *(undefined8 *)(uVar10 + 0x20);
                      *(long *)(uVar10 + 0x20) = lVar23;
                      *(long **)(uVar10 + 0x28) = plVar5;
                      uStack_198 = *(undefined8 *)(uVar10 + 0x30);
                      *(ulong *)(uVar10 + 0x30) = uVar13 + lVar16;
                      uStack_1a8 = uStack_1b0;
                      uStack_1a0 = uStack_1b0;
                      func_0x00010a5e9c84(&uStack_1b0);
                    }
                    *(long **)(uVar10 + 0x28) = plVar5;
                  }
                  else {
                    plVar5 = (long *)plVar26[8];
                    (**(code **)(*plVar5 + 0x28))();
                    if ((int)plVar5 != 2) {
                      plVar5 = (long *)plVar26[8];
                      (**(code **)(*plVar5 + 0x28))();
                      if ((int)plVar5 != 6) goto LAB_10a5eac40;
                    }
                    plVar5 = plVar18;
                    (**(code **)(*plVar18 + 0x28))();
                    if ((int)plVar5 == 3) {
                      plVar5 = *(long **)(uVar10 + 0x28);
                      if (*(long **)(uVar10 + 0x30) <= plVar5) {
                        lVar16 = (long)plVar5 - *plVar31;
                        uVar12 = (lVar16 >> 4) + 1;
                        if (uVar12 >> 0x3c != 0) goto LAB_10a5ead18;
                        uVar17 = (long)*(long **)(uVar10 + 0x30) - *plVar31;
                        uVar13 = (long)uVar17 >> 3;
                        if (uVar13 <= uVar12) {
                          uVar13 = uVar12;
                        }
                        if (0x7fffffffffffffef < uVar17) {
                          uVar13 = 0xfffffffffffffff;
                        }
                        plStack_190 = plVar31;
                        FUN_10a5e9c50();
                        plVar4 = (long *)(uVar13 + lVar16);
                        *plVar4 = (long)plVar18;
                        plVar4[1] = (long)plStack_1b8;
                        if (plStack_1b8 != (long *)0x0) {
                          plVar18 = plStack_1b8 + 1;
                          do {
                            cVar1 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                            if (bVar3) {
                              *plVar18 = *plVar18 + 1;
                              cVar1 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar1 != '\0');
                        }
                        goto LAB_10a5eabfc;
                      }
                      *plVar5 = (long)plVar18;
                      plVar5[1] = (long)plStack_1b8;
                      if (plStack_1b8 != (long *)0x0) {
                        plVar18 = plStack_1b8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                          if (bVar3) {
                            *plVar18 = *plVar18 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
                      goto LAB_10a5eaaf0;
                    }
                  }
                }
LAB_10a5eac40:
                plVar18 = plStack_1b8;
                if (plStack_1b8 != (long *)0x0) {
                  plVar5 = plStack_1b8 + 1;
                  do {
                    lVar16 = *plVar5;
                    cVar1 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                    if (bVar3) {
                      *plVar5 = lVar16 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar16 == 0) {
                    (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                  }
                }
              } while (plVar26 != plVar22);
              lVar8 = lVar8 - lVar14;
              lVar11 = *(long *)(uVar10 + 0x20);
              lVar14 = *(long *)(uVar10 + 0x28);
              plVar30[2] = lVar11 + lVar8;
              plVar30[3] = (lVar14 - lVar11 >> 4) - (lVar8 >> 4);
              param_2 = (long *)(plVar19[5] + 0x1b8);
              FUN_10a5e1c84(*plVar29 + 0x2c0,param_2,puVar27[3] + 0x38,plVar30 + 4);
              uVar12 = *puVar7;
            }
            uVar9 = uVar9 + 1;
            *puVar27 = *puVar27 + 1;
            lVar11 = *(long *)(uVar12 + 0x228);
            if ((ulong)(*(long *)(uVar12 + 0x230) - lVar11 >> 4) <= uVar9) {
              return;
            }
          } while( true );
        }
        uVar13 = (long)puVar6[2] - *puVar6;
        uVar9 = (long)uVar13 >> 3;
        if (uVar9 <= uVar12) {
          uVar9 = uVar12;
        }
        if (0x7fffffffffffffef < uVar13) {
          uVar9 = 0xfffffffffffffff;
        }
        puStack_f8 = puVar6;
        FUN_10a5e9c50();
        plVar29 = (long *)(uVar9 + lVar8);
        lVar11 = plVar30[9];
        lVar8 = 0;
        if (plVar30[8] != 0) {
          lVar8 = plVar30[8] + 8;
        }
        *plVar29 = lVar8;
        plVar29[1] = lVar11;
        if (lVar11 != 0) {
          plVar22 = (long *)(lVar11 + 8);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar3) {
              *plVar22 = *plVar22 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        plVar22 = (long *)(uVar9 + (long)param_2 * 0x10);
        plVar19 = plVar29 + 2;
        param_2 = (long *)*puVar6;
        puVar7 = (ulong *)(puVar6[1] - (long)param_2);
        uVar12 = (long)plVar29 - (long)puVar7;
        _memcpy(uVar12);
        uStack_118 = *puVar6;
        *puVar6 = uVar12;
        puVar6[1] = (ulong)plVar19;
        uStack_100 = puVar6[2];
        puVar6[2] = (ulong)plVar22;
        uStack_110 = uStack_118;
        uStack_108 = uStack_118;
        func_0x00010a5e9c84(&uStack_118);
      }
      puVar6[1] = (ulong)plVar19;
    }
LAB_10a5ea1f4:
    plVar29 = (long *)plVar30[1];
    plVar25 = plVar30;
    if ((long *)plVar30[1] == (long *)0x0) {
      do {
        plVar30 = (long *)plVar25[2];
        bVar3 = (long *)*plVar30 != plVar25;
        plVar25 = plVar30;
      } while (bVar3);
    }
    else {
      do {
        plVar30 = plVar29;
        plVar29 = (long *)*plVar30;
      } while ((long *)*plVar30 != (long *)0x0);
    }
  } while (plVar30 != plVar28);
  uVar12 = puVar6[1];
  uVar9 = *puVar6;
LAB_10a5ea240:
  *plVar26 = uVar9 + (uStack_120 - uVar10);
  plVar26[1] = ((long)(uVar12 - uVar9) >> 4) - ((long)(uStack_120 - uVar10) >> 4);
  return;
}



/* Entry: 10a5ea27c; end: 10a5ead53;  */

void FUN_10a5ea27c(ulong *param_1,long *param_2,long *param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  ulong *puVar27;
  long *plVar28;
  ulong uStack_e8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  plVar22 = (long *)param_1[1];
  uVar20 = param_1[2];
  plVar24 = (long *)*plVar22;
  while( true ) {
    if (plVar24 == (long *)(uVar20 + 0x1a0)) {
      return;
    }
    if (param_2 < (long *)plVar24[4]) {
      *param_1 = *param_1 + (*(long *)(*param_3 + 0x230) - *(long *)(*param_3 + 0x228) >> 4);
      return;
    }
    if (param_2 <= (long *)plVar24[4]) break;
    plVar16 = (long *)plVar24[1];
    plVar17 = plVar24;
    if ((long *)plVar24[1] == (long *)0x0) {
      do {
        plVar24 = (long *)plVar17[2];
        bVar3 = (long *)*plVar24 != plVar17;
        plVar17 = plVar24;
      } while (bVar3);
    }
    else {
      do {
        plVar24 = plVar16;
        plVar16 = (long *)*plVar24;
      } while ((long *)*plVar24 != (long *)0x0);
    }
    *plVar22 = (long)plVar24;
  }
  lVar8 = *param_3;
  lVar6 = *(long *)(lVar8 + 0x228);
  if (*(long *)(lVar8 + 0x230) == lVar6) {
    return;
  }
  uVar20 = 0;
  do {
    plVar16 = *(long **)(plVar24[5] + 0x188);
    plVar22 = (long *)(plVar24[5] + 400);
    while ((plVar16 != plVar22 && ((ulong)plVar16[4] < uVar20))) {
      plVar17 = plVar16;
      plVar25 = (long *)plVar16[1];
      if ((long *)plVar16[1] == (long *)0x0) {
        do {
          plVar16 = (long *)plVar17[2];
          bVar3 = (long *)*plVar16 != plVar17;
          plVar17 = plVar16;
        } while (bVar3);
      }
      else {
        do {
          plVar16 = plVar25;
          plVar25 = (long *)*plVar16;
        } while ((long *)*plVar16 != (long *)0x0);
      }
    }
    if ((plVar16 != plVar22) && (plVar16[4] == uVar20)) {
      uVar14 = param_1[3];
      uVar9 = *param_1;
      uVar18 = (*(long *)(uVar14 + 0x58) - *(long *)(uVar14 + 0x50) >> 4) * -0x5555555555555555;
      if (uVar18 < uVar9 || uVar18 - uVar9 == 0) {
LAB_10a5ead24:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5ead28);
        (*pcVar2)();
      }
      if (uVar9 < (ulong)((long *)param_1[4])[1]) {
        puVar19 = (ulong *)(*(long *)param_1[4] + uVar9 * 0x30);
        plVar22 = (long *)*puVar19;
        uVar18 = puVar19[1];
        puVar27 = (ulong *)puVar19[2];
        uStack_e8 = puVar19[3];
      }
      else {
        plVar22 = (long *)0x0;
        uVar18 = 0;
        puVar27 = (ulong *)0x0;
        uStack_e8 = 0;
      }
      plVar17 = (long *)(lVar6 + uVar20 * 0x10);
      plVar7 = (long *)(*(long *)(uVar14 + 0x50) + uVar9 * 0x30);
      lVar6 = plVar16[5];
      plVar15 = (long *)(uVar14 + 8);
      lVar10 = *plVar15;
      plVar5 = *(undefined8 **)(*plVar17 + 0x1b8) + 1;
      plVar28 = (long *)**(undefined8 **)(*plVar17 + 0x1b8);
      plVar26 = *(long **)(lVar6 + 0x188);
      lVar8 = *(long *)(uVar14 + 0x10);
      plVar25 = plVar22 + uVar18 * 2;
      do {
        if (plVar26 == (long *)(lVar6 + 400)) {
          if (plVar22 == plVar25) break;
          plStack_a0 = (long *)0x0;
          plStack_98 = (long *)0x0;
LAB_10a5ea524:
          param_2 = plVar22;
          FUN_10a334e90(&plStack_a0);
          plVar22 = plVar22 + 2;
        }
        else {
          plStack_a0 = (long *)0x0;
          plStack_98 = (long *)0x0;
          param_2 = plVar26 + 8;
          FUN_10a334e90(&plStack_a0);
          if (plVar22 == plVar25) {
            plVar4 = (long *)plVar26[1];
            plVar21 = plVar26;
            if ((long *)plVar26[1] == (long *)0x0) {
              do {
                plVar26 = (long *)plVar21[2];
                bVar3 = (long *)*plVar26 != plVar21;
                plVar21 = plVar26;
              } while (bVar3);
            }
            else {
              do {
                plVar26 = plVar4;
                plVar4 = (long *)*plVar26;
              } while ((long *)*plVar26 != (long *)0x0);
            }
          }
          else if (*(ulong *)(*plVar22 + 0x18) == plStack_a0[3]) {
            plVar4 = (long *)plVar26[1];
            plVar21 = plVar26;
            if ((long *)plVar26[1] == (long *)0x0) {
              do {
                plVar26 = (long *)plVar21[2];
                bVar3 = (long *)*plVar26 != plVar21;
                plVar21 = plVar26;
              } while (bVar3);
            }
            else {
              do {
                plVar26 = plVar4;
                plVar4 = (long *)*plVar26;
              } while ((long *)*plVar26 != (long *)0x0);
            }
            plVar22 = plVar22 + 2;
          }
          else {
            if (*(ulong *)(*plVar22 + 0x18) < (ulong)plStack_a0[3]) goto LAB_10a5ea524;
            plVar4 = (long *)plVar26[1];
            plVar21 = plVar26;
            if ((long *)plVar26[1] == (long *)0x0) {
              do {
                plVar26 = (long *)plVar21[2];
                bVar3 = (long *)*plVar26 != plVar21;
                plVar21 = plVar26;
              } while (bVar3);
            }
            else {
              do {
                plVar26 = plVar4;
                plVar4 = (long *)*plVar26;
              } while ((long *)*plVar26 != (long *)0x0);
            }
          }
        }
        if (plVar28 != plVar5) {
          do {
            if ((ulong)plStack_a0[3] <= (ulong)plVar28[7]) break;
            plVar4 = plVar28;
            plVar21 = (long *)plVar28[1];
            if ((long *)plVar28[1] == (long *)0x0) {
              do {
                plVar28 = (long *)plVar4[2];
                bVar3 = (long *)*plVar28 != plVar4;
                plVar4 = plVar28;
              } while (bVar3);
            }
            else {
              do {
                plVar28 = plVar21;
                plVar21 = (long *)*plVar28;
              } while ((long *)*plVar28 != (long *)0x0);
            }
          } while (plVar28 != plVar5);
        }
        if ((plVar28 != plVar5) && (plVar28[7] == plStack_a0[3])) {
          if (*(ushort *)(plVar28[8] + 0x20) == *(ushort *)(plStack_a0 + 4)) {
            puVar11 = *(undefined8 **)(uVar14 + 0x10);
            if (puVar11 < *(undefined8 **)(uVar14 + 0x18)) {
              *puVar11 = plStack_a0;
              puVar11[1] = plStack_98;
              if (plStack_98 != (long *)0x0) {
                plVar4 = plStack_98 + 1;
                do {
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar3) {
                    *plVar4 = *plVar4 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
LAB_10a5ea638:
              plVar21 = puVar11 + 2;
            }
            else {
              lVar12 = (long)puVar11 - *plVar15;
              uVar9 = (lVar12 >> 4) + 1;
              if (uVar9 >> 0x3c != 0) {
LAB_10a5ead20:
                FUN_10a5e9ba8();
                goto LAB_10a5ead24;
              }
              uVar13 = (long)*(undefined8 **)(uVar14 + 0x18) - *plVar15;
              uVar18 = (long)uVar13 >> 3;
              if (uVar18 <= uVar9) {
                uVar18 = uVar9;
              }
              if (0x7fffffffffffffef < uVar13) {
                uVar18 = 0xfffffffffffffff;
              }
              plStack_70 = plVar15;
              FUN_10a5e9bbc();
              plVar4 = (long *)(uVar18 + lVar12);
              plVar4[1] = (long)plStack_98;
              *plVar4 = (long)plStack_a0;
              if (plStack_98 != (long *)0x0) {
                plVar21 = plStack_98 + 1;
                do {
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar3) {
                    *plVar21 = *plVar21 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
LAB_10a5ea74c:
              lVar12 = (long)param_2 * 0x10;
              plVar21 = plVar4 + 2;
              param_2 = *(long **)(uVar14 + 8);
              lVar23 = (long)plVar4 - (*(long *)(uVar14 + 0x10) - (long)param_2);
              _memcpy(lVar23);
              uStack_90 = *(undefined8 *)(uVar14 + 8);
              *(long *)(uVar14 + 8) = lVar23;
              *(long **)(uVar14 + 0x10) = plVar21;
              uStack_78 = *(undefined8 *)(uVar14 + 0x18);
              *(ulong *)(uVar14 + 0x18) = uVar18 + lVar12;
              uStack_88 = uStack_90;
              uStack_80 = uStack_90;
              func_0x00010a5e9bf0(&uStack_90);
            }
            *(long **)(uVar14 + 0x10) = plVar21;
          }
          else if ((*(ushort *)(plVar28[8] + 0x20) | 4) == 6 && *(ushort *)(plStack_a0 + 4) == 3) {
            puVar11 = *(undefined8 **)(uVar14 + 0x10);
            if (*(undefined8 **)(uVar14 + 0x18) <= puVar11) {
              lVar12 = (long)puVar11 - *plVar15;
              uVar9 = (lVar12 >> 4) + 1;
              if (uVar9 >> 0x3c != 0) goto LAB_10a5ead20;
              uVar13 = (long)*(undefined8 **)(uVar14 + 0x18) - *plVar15;
              uVar18 = (long)uVar13 >> 3;
              if (uVar18 <= uVar9) {
                uVar18 = uVar9;
              }
              if (0x7fffffffffffffef < uVar13) {
                uVar18 = 0xfffffffffffffff;
              }
              plStack_70 = plVar15;
              FUN_10a5e9bbc();
              plVar4 = (long *)(uVar18 + lVar12);
              plVar4[1] = (long)plStack_98;
              *plVar4 = (long)plStack_a0;
              if (plStack_98 != (long *)0x0) {
                plVar21 = plStack_98 + 1;
                do {
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar3) {
                    *plVar21 = *plVar21 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              goto LAB_10a5ea74c;
            }
            *puVar11 = plStack_a0;
            puVar11[1] = plStack_98;
            if (plStack_98 != (long *)0x0) {
              plVar4 = plStack_98 + 1;
              do {
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar3) {
                  *plVar4 = *plVar4 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            goto LAB_10a5ea638;
          }
        }
        plVar4 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar21 = plStack_98 + 1;
          do {
            lVar12 = *plVar21;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *plVar21 = lVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      } while (plVar28 != plVar5);
      lVar8 = lVar8 - lVar10;
      lVar6 = *(long *)(uVar14 + 8);
      lVar10 = *(long *)(uVar14 + 0x10);
      *plVar7 = lVar6 + lVar8;
      plVar7[1] = (lVar10 - lVar6 >> 4) - (lVar8 >> 4);
      lVar8 = plVar16[5];
      uVar9 = param_1[3];
      plVar28 = (long *)(uVar9 + 0x20);
      lVar10 = *plVar28;
      plVar25 = *(long **)(*plVar17 + 0x1e8);
      plVar26 = *(long **)(lVar8 + 0x1a0);
      lVar6 = *(long *)(uVar9 + 0x28);
      plVar22 = (long *)(*plVar17 + 0x1f0);
      puVar19 = puVar27 + uStack_e8 * 2;
      do {
        if (plVar26 == (long *)(lVar8 + 0x1a8)) {
          if (puVar27 == puVar19) break;
          plStack_a0 = (long *)0x0;
          plStack_98 = (long *)0x0;
LAB_10a5ea970:
          param_2 = (long *)*puVar27;
          FUN_10a5ead54(&plStack_a0,param_2,puVar27[1]);
          plVar15 = plStack_a0;
          plVar21 = plStack_a0;
          puVar27 = puVar27 + 2;
        }
        else {
          plStack_98 = (long *)plVar26[9];
          plVar15 = (long *)(plVar26[8] + 8);
          plStack_a0 = (long *)0x0;
          if (plVar26[8] != 0) {
            plStack_a0 = plVar15;
          }
          if (plStack_98 != (long *)0x0) {
            plVar5 = plStack_98 + 1;
            do {
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = *plVar5 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (puVar27 == puVar19) {
            plVar5 = (long *)plVar26[1];
            plVar4 = plVar26;
            plVar15 = plStack_a0;
            puVar27 = puVar19;
            if ((long *)plVar26[1] == (long *)0x0) {
              do {
                plVar26 = (long *)plVar4[2];
                bVar3 = (long *)*plVar26 != plVar4;
                plVar4 = plVar26;
                plVar21 = plStack_a0;
              } while (bVar3);
            }
            else {
              do {
                plVar26 = plVar5;
                plVar5 = (long *)*plVar26;
                plVar21 = plStack_a0;
              } while ((long *)*plVar26 != (long *)0x0);
            }
          }
          else {
            plVar4 = (long *)*puVar27;
            (**(code **)(*plVar4 + 0x30))();
            plVar5 = plVar15;
            (**(code **)(*plVar15 + 0x30))();
            if (plVar4[3] == plVar5[3]) {
              plVar15 = (long *)plVar26[1];
              plVar5 = plVar26;
              if ((long *)plVar26[1] == (long *)0x0) {
                do {
                  plVar26 = (long *)plVar5[2];
                  bVar3 = (long *)*plVar26 != plVar5;
                  plVar5 = plVar26;
                } while (bVar3);
              }
              else {
                do {
                  plVar26 = plVar15;
                  plVar15 = (long *)*plVar26;
                } while ((long *)*plVar26 != (long *)0x0);
              }
              plVar15 = plStack_a0;
              plVar21 = plStack_a0;
              puVar27 = puVar27 + 2;
            }
            else {
              plVar5 = (long *)*puVar27;
              (**(code **)(*plVar5 + 0x30))();
              (**(code **)(*plVar15 + 0x30))();
              if ((ulong)plVar5[3] < (ulong)plVar15[3]) goto LAB_10a5ea970;
              plVar5 = (long *)plVar26[1];
              plVar4 = plVar26;
              plVar15 = plStack_a0;
              if ((long *)plVar26[1] == (long *)0x0) {
                do {
                  plVar26 = (long *)plVar4[2];
                  bVar3 = (long *)*plVar26 != plVar4;
                  plVar4 = plVar26;
                  plVar21 = plStack_a0;
                } while (bVar3);
              }
              else {
                do {
                  plVar26 = plVar5;
                  plVar5 = (long *)*plVar26;
                  plVar21 = plStack_a0;
                } while ((long *)*plVar26 != (long *)0x0);
              }
            }
          }
        }
        while ((plStack_a0 = plVar21, plVar21 = plStack_a0, plVar25 != plVar22 &&
               (lVar12 = *plStack_a0, plVar5 = plStack_a0, plStack_a0 = plVar15,
               (**(code **)(lVar12 + 0x30))(), plVar15 = plStack_a0,
               (ulong)plVar25[7] < (ulong)plVar5[3]))) {
          plVar5 = (long *)plVar25[1];
          plVar4 = plVar25;
          if ((long *)plVar25[1] == (long *)0x0) {
            do {
              plVar25 = (long *)plVar4[2];
              bVar3 = (long *)*plVar25 != plVar4;
              plVar4 = plVar25;
            } while (bVar3);
          }
          else {
            do {
              plVar25 = plVar5;
              plVar5 = (long *)*plVar25;
            } while ((long *)*plVar25 != (long *)0x0);
          }
        }
        plStack_a0 = plVar15;
        plVar15 = plStack_a0;
        if ((plVar25 != plVar22) &&
           (plVar5 = plStack_a0, (**(code **)(*plStack_a0 + 0x30))(), plVar25[7] == plVar5[3])) {
          plVar4 = (long *)plVar25[8];
          (**(code **)(*plVar4 + 0x28))();
          plVar5 = plVar15;
          (**(code **)(*plVar15 + 0x28))();
          if ((int)plVar4 == (int)plVar5) {
            plVar5 = *(long **)(uVar9 + 0x28);
            if (plVar5 < *(long **)(uVar9 + 0x30)) {
              *plVar5 = (long)plVar15;
              plVar5[1] = (long)plStack_98;
              if (plStack_98 != (long *)0x0) {
                plVar15 = plStack_98 + 1;
                do {
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar3) {
                    *plVar15 = *plVar15 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
LAB_10a5eaaf0:
              plVar5 = plVar5 + 2;
            }
            else {
              lVar12 = (long)plVar5 - *plVar28;
              uVar14 = (lVar12 >> 4) + 1;
              if (uVar14 >> 0x3c != 0) {
LAB_10a5ead18:
                FUN_10a5e9c3c();
                goto LAB_10a5ead24;
              }
              uVar13 = (long)*(long **)(uVar9 + 0x30) - *plVar28;
              uVar18 = (long)uVar13 >> 3;
              if (uVar18 <= uVar14) {
                uVar18 = uVar14;
              }
              if (0x7fffffffffffffef < uVar13) {
                uVar18 = 0xfffffffffffffff;
              }
              plStack_70 = plVar28;
              FUN_10a5e9c50();
              plVar4 = (long *)(uVar18 + lVar12);
              *plVar4 = (long)plVar15;
              plVar4[1] = (long)plStack_98;
              if (plStack_98 != (long *)0x0) {
                plVar15 = plStack_98 + 1;
                do {
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar3) {
                    *plVar15 = *plVar15 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
LAB_10a5eabfc:
              lVar12 = (long)param_2 * 0x10;
              plVar5 = plVar4 + 2;
              param_2 = *(long **)(uVar9 + 0x20);
              lVar23 = (long)plVar4 - (*(long *)(uVar9 + 0x28) - (long)param_2);
              _memcpy(lVar23);
              uStack_90 = *(undefined8 *)(uVar9 + 0x20);
              *(long *)(uVar9 + 0x20) = lVar23;
              *(long **)(uVar9 + 0x28) = plVar5;
              uStack_78 = *(undefined8 *)(uVar9 + 0x30);
              *(ulong *)(uVar9 + 0x30) = uVar18 + lVar12;
              uStack_88 = uStack_90;
              uStack_80 = uStack_90;
              func_0x00010a5e9c84(&uStack_90);
            }
            *(long **)(uVar9 + 0x28) = plVar5;
          }
          else {
            plVar5 = (long *)plVar25[8];
            (**(code **)(*plVar5 + 0x28))();
            if ((int)plVar5 != 2) {
              plVar5 = (long *)plVar25[8];
              (**(code **)(*plVar5 + 0x28))();
              if ((int)plVar5 != 6) goto LAB_10a5eac40;
            }
            plVar5 = plVar15;
            (**(code **)(*plVar15 + 0x28))();
            if ((int)plVar5 == 3) {
              plVar5 = *(long **)(uVar9 + 0x28);
              if (*(long **)(uVar9 + 0x30) <= plVar5) {
                lVar12 = (long)plVar5 - *plVar28;
                uVar14 = (lVar12 >> 4) + 1;
                if (uVar14 >> 0x3c != 0) goto LAB_10a5ead18;
                uVar13 = (long)*(long **)(uVar9 + 0x30) - *plVar28;
                uVar18 = (long)uVar13 >> 3;
                if (uVar18 <= uVar14) {
                  uVar18 = uVar14;
                }
                if (0x7fffffffffffffef < uVar13) {
                  uVar18 = 0xfffffffffffffff;
                }
                plStack_70 = plVar28;
                FUN_10a5e9c50();
                plVar4 = (long *)(uVar18 + lVar12);
                *plVar4 = (long)plVar15;
                plVar4[1] = (long)plStack_98;
                if (plStack_98 != (long *)0x0) {
                  plVar15 = plStack_98 + 1;
                  do {
                    cVar1 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                    if (bVar3) {
                      *plVar15 = *plVar15 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                goto LAB_10a5eabfc;
              }
              *plVar5 = (long)plVar15;
              plVar5[1] = (long)plStack_98;
              if (plStack_98 != (long *)0x0) {
                plVar15 = plStack_98 + 1;
                do {
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar3) {
                    *plVar15 = *plVar15 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              goto LAB_10a5eaaf0;
            }
          }
        }
LAB_10a5eac40:
        plVar15 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar5 = plStack_98 + 1;
          do {
            lVar12 = *plVar5;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
      } while (plVar25 != plVar22);
      lVar6 = lVar6 - lVar10;
      lVar8 = *(long *)(uVar9 + 0x20);
      lVar10 = *(long *)(uVar9 + 0x28);
      plVar7[2] = lVar8 + lVar6;
      plVar7[3] = (lVar10 - lVar8 >> 4) - (lVar6 >> 4);
      param_2 = (long *)(plVar16[5] + 0x1b8);
      FUN_10a5e1c84(*plVar17 + 0x2c0,param_2,param_1[3] + 0x38,plVar7 + 4);
      lVar8 = *param_3;
    }
    uVar20 = uVar20 + 1;
    *param_1 = *param_1 + 1;
    lVar6 = *(long *)(lVar8 + 0x228);
    if ((ulong)(*(long *)(lVar8 + 0x230) - lVar6 >> 4) <= uVar20) {
      return;
    }
  } while( true );
}



/* Entry: 10a5ead54; end: 10a5eadc7;  */

undefined8 * FUN_10a5ead54(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a5eadc8; end: 10a5eae2b;  */

long * FUN_10a5eadc8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[3] != 0) {
      plVar1[4] = plVar1[3];
      __ZdlPv();
    }
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



/* Entry: 10a5eae2c; end: 10a5eaf93;  */

long * FUN_10a5eae2c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5eaf94; end: 10a5eb07b;  */

undefined1  [16] FUN_10a5eaf94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f662726;
  return auVar1;
}



/* Entry: 10a5eb07c; end: 10a5eb53f;  */

void FUN_10a5eb07c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662726,0x1b);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bfce88;
  pppuVar2 = (undefined8 ***)&UNK_10f667746;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bfce88;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd9df0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5eb520;
    FUN_10a054dac(param_1,&UNK_10f667747,FUN_10a60fe1c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5eb520;
    FUN_10a054dac(param_1,&UNK_10f667758,FUN_10a610094,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5eb520;
    FUN_10a054dac(param_1,&UNK_10f667769,FUN_10a610210,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5eb520;
    FUN_10a054dac(param_1,&UNK_10f667779,FUN_10a610318,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5eb520;
    FUN_10a054dac(param_1,&UNK_10f667784,FUN_10a610490,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5eb520;
    FUN_10a054dac(param_1,&UNK_10f667792,FUN_10a610548,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5eb520;
    FUN_10a054dac(param_1,&UNK_10f6677a0,FUN_10a610620,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5eb520;
    FUN_10a054dac(param_1,&UNK_10f6677b4,FUN_10a610a18,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651ec4,FUN_10a610d6c,FUN_10a610e28);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a610f00,FUN_10a610fb8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651ece,FUN_10a6110b8,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662726,0x1b);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a5eb520:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5eb524);
  (*pcVar6)();
}



/* Entry: 10a5eb540; end: 10a5eb76b;  */

undefined8 * FUN_10a5eb540(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  param_1[0xb9] = &PTR_FUN_110c383b8;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0x100;
  puVar1 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110bf8aa0,param_2,param_3,8);
  FUN_10a0040d0(puVar1 + 0x9e,&PTR_PTR_110bf8ad8);
  *param_1 = &PTR_FUN_110bf8648;
  param_1[2] = &PTR_FUN_110bf8890;
  param_1[7] = &PTR_FUN_110bf88e8;
  param_1[0xd] = &PTR_FUN_110bf8908;
  param_1[0xb9] = &PTR_FUN_110bf8a60;
  param_1[0x16] = &PTR_FUN_110bf8978;
  param_1[0x17] = &PTR_FUN_110bf89a8;
  param_1[0x9e] = &PTR_FUN_110bf89e0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xb3] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  *(undefined8 *)((long)param_1 + 0x5a4) = 0;
  param_1[0xb6] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0xb7] = puVar1 + 3;
  param_1[0xb8] = puVar1;
  FUN_10a5cf1fc(param_1 + 0xb7);
  *(undefined4 *)(param_1 + 0xa3) = 0x42000000;
  uVar2 = 0x11a8;
  __Znwm();
  FUN_10a14a504();
  plVar3 = (long *)param_1[0xb6];
  param_1[0xb6] = uVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a5eb850(param_1);
  return param_1;
}



/* Entry: 10a5eb76c; end: 10a5eb78b;  */

void FUN_10a5eb76c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x43) = 3;
  if (((0xb0 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18)) &&
      (*(char *)((long)param_1 + 0x20c) == '\x01')) &&
     (lVar2 = *(long *)(param_1[0x2d] + 0x188), lVar2 != 0)) {
    for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0xbd1555114443a935);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x128))();
          (**(code **)(*param_1 + 0x130))(param_1,plVar1);
          break;
        }
      }
    }
  }
  if ((*(ushort *)(param_1 + 0x30) & 0x17) != 0) {
    return;
  }
  if ((param_1[0x2d] != 0) && ((*(ushort *)(param_1[0x2d] + 0x118) >> 9 & 1) != 0)) {
    if (((*(uint *)(param_1 + 0x3d) ^ 0xffffffff) & 2) != 0 ||
        (*(uint *)((long)param_1 + 0x1ec) & 2) != 2) {
      *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | 2;
      *(uint *)((long)param_1 + 0x1ec) = *(uint *)((long)param_1 + 0x1ec) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010a3c7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))(param_1,param_1[0x2e] + 0x4f8);
      return;
    }
  }
  return;
}



/* Entry: 10a5eb78c; end: 10a5eb823;  */

void FUN_10a5eb78c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a421994();
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x5b8),&PTR_DAT_110bfce88,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x4f0 + *(long *)(*(long *)(param_1 + 0x4f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x508);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x4f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a5eb824; end: 10a5eb84f;  */

void FUN_10a5eb824(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a42238c();
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x5b8));
  plVar3 = *(long **)(param_1 + 0x508);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a5eb850; end: 10a5ebbdf;  */

void FUN_10a5eb850(long param_1)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long **pplVar6;
  long **pplVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long **pplVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  int *piVar22;
  ulong *puVar23;
  ulong *puVar24;
  int *piVar25;
  long *plStack_88;
  long **pplStack_80;
  long **pplStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  puVar5 = (undefined8 *)0x3cda8;
  __Znwm();
  FUN_10a14a504();
  *puVar5 = &PTR_FUN_110ba7b88;
  puVar17 = puVar5 + 0x235;
  lVar19 = 0x3bc00;
  do {
    plVar8 = (long *)0x570;
    _bzero((long)puVar17 + 500);
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17 = puVar17 + 0xef;
    lVar19 = lVar19 + -0x778;
  } while (lVar19 != 0);
  pplVar6 = *(long ***)(param_1 + 0x538);
  *(undefined8 **)(param_1 + 0x538) = puVar5;
  if (pplVar6 != (long **)0x0) {
    (*(code *)(*pplVar6)[1])();
  }
  plVar18 = *(long **)(param_1 + 0x590);
  for (plVar14 = *(long **)(param_1 + 0x588); plVar14 != plVar18; plVar14 = plVar14 + 7) {
    pplVar6 = *(long ***)(param_1 + 0x538);
    plVar8 = plVar14;
    FUN_10a14b2dc();
  }
  pplVar15 = *(long ***)(param_1 + 0x570);
  *(long ***)(param_1 + 0x578) = pplVar15;
  *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x540);
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_1 + 0x558);
  uVar20 = *(ulong *)(*(long *)(param_1 + 0x538) + 0x40);
  if (uVar20 != 0) {
    uVar9 = *(long *)(param_1 + 0x580) - (long)pplVar15;
    if ((ulong)((long)uVar9 >> 3) < uVar20) {
      if (uVar20 >> 0x3d != 0) {
LAB_10a5ebbc4:
        FUN_10a107b70();
LAB_10a5ebbc8:
        FUN_10a001cf8();
        __ZdlPv(pplVar15);
        pplVar7 = pplVar6;
        __Unwind_Resume();
        pcStack_68 = FUN_10a5ebbe0;
        plStack_88 = plVar18;
        pplStack_80 = pplVar15;
        pplStack_78 = pplVar6;
        puStack_70 = &stack0xfffffffffffffff0;
        FUN_10a422a34();
        (**(code **)(*plVar8 + 0x40))
                  (plVar8,&PTR_DAT_110bf8b00,*(undefined4 *)((long)pplVar7 + 0x51c));
        (**(code **)(*plVar8 + 0x18))(plVar8,&PTR_DAT_110bf8b20);
        uVar2 = (int)((ulong)((long)pplVar7[0xb2] - (long)pplVar7[0xb1]) >> 3) * -0x49249249;
        if (uVar2 != 0) {
          lVar19 = 0;
          uVar20 = 0;
          do {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            uVar9 = ((long)pplVar7[0xb2] - (long)pplVar7[0xb1] >> 3) * 0x6db6db6db6db6db7;
            if (uVar9 < uVar20 || uVar9 - uVar20 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5ebd84);
              (*pcVar4)();
            }
            lVar16 = (long)pplVar7[0xb1] + lVar19;
            FUN_10a00d760(plVar8,&PTR_DAT_110bf8b40,lVar16);
            (**(code **)(*plVar8 + 0x60))(plVar8,&PTR_DAT_110bf8b60);
            (**(code **)(*plVar8 + 0x28))
                      (plVar8,&PTR_DAT_110bf8b80,*(long *)(lVar16 + 0x20),
                       *(long *)(lVar16 + 0x28) - *(long *)(lVar16 + 0x20));
            (**(code **)(*plVar8 + 0x20))(plVar8);
            uVar20 = uVar20 + 1;
            lVar19 = lVar19 + 0x38;
          } while ((ulong)uVar2 * 0x38 != lVar19);
        }
        (**(code **)(*plVar8 + 0x20))(plVar8);
        (**(code **)(*plVar8 + 0x70))(plVar8,&PTR_DAT_110bf8ba0,*(undefined1 *)(pplVar7 + 0xb4));
        pplStack_80 = (long **)&PTR_DAT_110bb3700;
        plStack_88 = plVar8;
        if (*(uint *)(pplVar7 + 0xa6) != 0xffffffff) {
          pplStack_78 = &plStack_88;
          (*(code *)(&PTR_FUN_110be7398)[*(uint *)(pplVar7 + 0xa6)])(&pplStack_78,pplVar7 + 0xa4);
          return;
        }
        FUN_10a0d459c();
        return;
      }
      uVar13 = (long)uVar9 >> 2;
      if ((ulong)((long)uVar9 >> 2) <= uVar20) {
        uVar13 = uVar20;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar13 = 0x1fffffffffffffff;
      }
      lVar19 = param_1 + 0x570;
      func_0x00010a0433c0();
      _memset();
      plVar8 = *(long **)(param_1 + 0x570);
      lVar16 = lVar19 - (*(long *)(param_1 + 0x578) - (long)plVar8);
      _memcpy(lVar16);
      pplVar6 = *(long ***)(param_1 + 0x570);
      *(long *)(param_1 + 0x570) = lVar16;
      *(ulong *)(param_1 + 0x578) = lVar19 + uVar20 * 8;
      *(ulong *)(param_1 + 0x580) = lVar19 + uVar13 * 8;
      if (pplVar6 != (long **)0x0) {
        __ZdlPv();
      }
    }
    else {
      plVar8 = (long *)0xff;
      pplVar6 = pplVar15;
      _memset(pplVar15,0xff,uVar20 << 3);
      *(long ***)(param_1 + 0x578) = pplVar15 + uVar20;
    }
  }
  lVar19 = *(long *)(param_1 + 0x588);
  lVar16 = *(long *)(param_1 + 0x590);
  if (lVar19 != lVar16) {
    pplVar15 = (long **)(param_1 + 0x558);
    do {
      piVar1 = *(int **)(lVar19 + 0x28);
      for (piVar25 = *(int **)(lVar19 + 0x20); piVar25 != piVar1; piVar25 = piVar25 + 5) {
        fVar3 = (float)piVar25[1];
        if (((0.0 < fVar3) && (uVar20 = (ulong)*piVar25, -1 < *piVar25)) &&
           (lVar10 = *(long *)(param_1 + 0x570),
           uVar20 < (ulong)(*(long *)(param_1 + 0x578) - lVar10 >> 3))) {
          uVar13 = *(ulong *)(lVar10 + uVar20 * 8);
          puVar23 = *(ulong **)(param_1 + 0x548);
          lVar12 = *(long *)(param_1 + 0x540);
          plVar18 = (long *)((long)puVar23 - lVar12);
          uVar9 = (long)plVar18 >> 3;
          if (uVar13 == 0xffffffffffffffff) {
            *(ulong *)(lVar10 + uVar20 * 8) = uVar9;
            if (puVar23 < *(ulong **)(param_1 + 0x550)) {
              puVar24 = puVar23 + 1;
              *puVar23 = uVar20;
            }
            else {
              uVar9 = uVar9 + 1;
              if (uVar9 >> 0x3d != 0) goto LAB_10a5ebbc4;
              uVar11 = (long)*(ulong **)(param_1 + 0x550) - lVar12;
              uVar13 = (long)uVar11 >> 2;
              if (uVar13 <= uVar9) {
                uVar13 = uVar9;
              }
              if (0x7ffffffffffffff7 < uVar11) {
                uVar13 = 0x1fffffffffffffff;
              }
              lVar10 = param_1 + 0x540;
              func_0x00010a0433c0();
              plVar8 = *(long **)(param_1 + 0x540);
              puVar23 = (ulong *)(lVar10 + (long)plVar18);
              lVar12 = (long)puVar23 - (*(long *)(param_1 + 0x548) - (long)plVar8);
              puVar24 = puVar23 + 1;
              *puVar23 = uVar20;
              _memcpy(lVar12);
              pplVar6 = *(long ***)(param_1 + 0x540);
              *(long *)(param_1 + 0x540) = lVar12;
              *(ulong **)(param_1 + 0x548) = puVar24;
              *(ulong *)(param_1 + 0x550) = lVar10 + uVar13 * 8;
              if (pplVar6 != (long **)0x0) {
                __ZdlPv();
              }
            }
            *(ulong **)(param_1 + 0x548) = puVar24;
            piVar21 = *(int **)(param_1 + 0x560);
            if (piVar21 < *(int **)(param_1 + 0x568)) {
              piVar22 = piVar21 + 1;
              *piVar21 = piVar25[1];
            }
            else {
              plVar18 = (long *)((long)piVar21 - (long)*pplVar15);
              uVar20 = ((long)plVar18 >> 2) + 1;
              if (uVar20 >> 0x3e != 0) goto LAB_10a5ebbc8;
              uVar13 = (long)*(int **)(param_1 + 0x568) - (long)*pplVar15;
              uVar9 = (long)uVar13 >> 1;
              if (uVar9 <= uVar20) {
                uVar9 = uVar20;
              }
              if (0x7ffffffffffffffb < uVar13) {
                uVar9 = 0x3fffffffffffffff;
              }
              pplVar7 = pplVar15;
              FUN_10a001d0c();
              plVar8 = *(long **)(param_1 + 0x558);
              piVar21 = (int *)((long)pplVar7 + (long)plVar18);
              lVar10 = (long)piVar21 - (*(long *)(param_1 + 0x560) - (long)plVar8);
              piVar22 = piVar21 + 1;
              *piVar21 = piVar25[1];
              _memcpy(lVar10);
              pplVar6 = *(long ***)(param_1 + 0x558);
              *(long *)(param_1 + 0x558) = lVar10;
              *(int **)(param_1 + 0x560) = piVar22;
              *(ulong *)(param_1 + 0x568) = (long)pplVar7 + uVar9 * 4;
              if (pplVar6 != (long **)0x0) {
                __ZdlPv();
              }
            }
            *(int **)(param_1 + 0x560) = piVar22;
          }
          else {
            if (uVar9 <= uVar13) {
LAB_10a5ebbc0:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5ebbc4);
              (*pcVar4)();
            }
            *(ulong *)(lVar12 + uVar13 * 8) = uVar20;
            uVar20 = *(ulong *)(lVar10 + uVar20 * 8);
            if ((ulong)(*(long *)(param_1 + 0x560) - *(long *)(param_1 + 0x558) >> 2) <= uVar20)
            goto LAB_10a5ebbc0;
            *(float *)(*(long *)(param_1 + 0x558) + uVar20 * 4) = fVar3;
          }
        }
      }
      lVar19 = lVar19 + 0x38;
    } while (lVar19 != lVar16);
  }
  return;
}



/* Entry: 10a5ebbe0; end: 10a5ebd83;  */

void FUN_10a5ebbe0(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_10a422a34();
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf8b00,*(undefined4 *)(param_1 + 0x51c));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bf8b20);
  uVar2 = (int)((ulong)(*(long *)(param_1 + 0x590) - *(long *)(param_1 + 0x588)) >> 3) * -0x49249249
  ;
  if (uVar2 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      (**(code **)(*param_2 + 0x10))(param_2);
      uVar4 = (*(long *)(param_1 + 0x590) - *(long *)(param_1 + 0x588) >> 3) * 0x6db6db6db6db6db7;
      if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5ebd84);
        (*pcVar3)();
      }
      lVar1 = *(long *)(param_1 + 0x588) + lVar5;
      FUN_10a00d760(param_2,&PTR_DAT_110bf8b40,lVar1);
      (**(code **)(*param_2 + 0x60))(*(undefined4 *)(lVar1 + 0x18),param_2,&PTR_DAT_110bf8b60);
      (**(code **)(*param_2 + 0x28))
                (param_2,&PTR_DAT_110bf8b80,*(long *)(lVar1 + 0x20),
                 *(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20));
      (**(code **)(*param_2 + 0x20))(param_2);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x38;
    } while ((ulong)uVar2 * 0x38 != lVar5);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bf8ba0,*(undefined1 *)(param_1 + 0x5a0));
  if (*(uint *)(param_1 + 0x530) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110be7398)[*(uint *)(param_1 + 0x530)])
              (&stack0xffffffffffffffe8,param_1 + 0x520);
    return;
  }
  FUN_10a0d459c();
  return;
}



/* Entry: 10a5ebd84; end: 10a5ec547;  */

void FUN_10a5ebd84(undefined8 ***param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 *****pppppuVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  int iVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 ***pppuVar15;
  undefined4 uVar16;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 ****ppppuStack_218;
  undefined8 ****ppppuStack_210;
  long lStack_208;
  undefined8 ****appppuStack_200 [2];
  char cStack_1e9;
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  int iStack_1d4;
  undefined8 **ppuStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined4 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  int iStack_194;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined **ppuStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_138;
  char cStack_121;
  undefined **appuStack_110 [20];
  
  FUN_10a42241c();
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110bf8bc0);
  if ((int)plVar1 == 0) {
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110bf8b20);
    if ((int)plVar1 != 0) {
      plVar1 = param_3;
      (**(code **)(*param_3 + 0x38))(param_3,&PTR_DAT_110bf8b00,0);
      *(int *)(param_2 + 0x51c) = (int)plVar1;
      (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110bf8b20);
      plVar1 = param_3;
      (**(code **)(*param_3 + 0x208))();
      lVar8 = *(long *)(param_2 + 0x590);
      lVar9 = *(long *)(param_2 + 0x588);
      while (lVar8 != lVar9) {
        lVar8 = lVar8 + -0x38;
        FUN_10a60ebec(lVar8);
      }
      *(long *)(param_2 + 0x590) = lVar9;
      FUN_10a5ec548(param_2 + 0x588,(ulong)plVar1 & 0xffffffff);
      if ((int)plVar1 != 0) {
        iVar7 = 0;
        do {
          (**(code **)(*param_3 + 0x218))(param_3,iVar7);
          lStack_170 = 0;
          lStack_168 = 0;
          uStack_160 = 0;
          ppuStack_188 = (undefined8 **)0x0;
          ppuStack_180 = (undefined8 **)0x0;
          ppuStack_190 = (undefined8 **)0x0;
          ppuStack_178 = (undefined **)((ulong)ppuStack_178 & 0xffffffff00000000);
          (**(code **)(*param_3 + 0xa0))(&ppuStack_1d0,param_3,&PTR_DAT_110bf8b40);
          if ((long)ppuStack_180 < 0) {
            __ZdlPv(ppuStack_190);
          }
          ppuStack_188 = ppuStack_1c8;
          ppuStack_190 = ppuStack_1d0;
          ppuStack_180 = ppuStack_1c0;
          pppuVar15 = (undefined8 ***)ppuStack_1d0;
          (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110bf8b60);
          ppuStack_178 = (undefined **)CONCAT44(ppuStack_178._4_4_,(int)pppuVar15);
          FUN_10a0ff254(param_3,&PTR_DAT_110bf8b80,&lStack_170,FUN_10a6111b8);
          func_0x00010a5ec610(param_2 + 0x588,&ppuStack_190);
          (**(code **)(*param_3 + 0x220))(param_3);
          if (lStack_170 != 0) {
            lStack_168 = lStack_170;
            __ZdlPv();
          }
          if ((long)ppuStack_180 < 0) {
            __ZdlPv(ppuStack_190);
          }
          iVar7 = iVar7 + 1;
        } while ((int)plVar1 != iVar7);
      }
      (**(code **)(*param_3 + 0x220))(param_3);
      plVar1 = param_3;
      (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110bf8ba0,0);
      *(char *)(param_2 + 0x5a0) = (char)plVar1;
      FUN_10a4c3348(param_3,&PTR_DAT_110bb3700,param_2 + 0x520);
    }
  }
  else {
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x38))(param_3,&PTR_DAT_110bf8b00,0);
    *(int *)(param_2 + 0x51c) = (int)plVar1;
    (**(code **)(*param_3 + 0xa8))(appppuStack_200,param_3,&PTR_DAT_110bf8bc0,&UNK_10f667746,0);
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110bf8ba0,0);
    *(char *)(param_2 + 0x5a0) = (char)plVar1;
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110bf8be0);
    ppppuStack_210 = (undefined8 *****)0x0;
    lStack_208 = 0;
    plVar1 = param_3;
    ppppuStack_218 = &ppppuStack_210;
    (**(code **)(*param_3 + 0x208))();
    if ((int)plVar1 != 0) {
      iVar7 = 0;
      do {
        (**(code **)(*param_3 + 0x218))(param_3,iVar7);
        (**(code **)(*param_3 + 0xa0))(&ppuStack_190,param_3,&PTR_DAT_110c008c0);
        (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110bf8c00);
        pppppuVar13 = &ppppuStack_210;
        pppuVar15 = param_1;
        pppppuVar10 = (undefined8 *****)ppppuStack_210;
        while (pppppuVar14 = pppppuVar13, pppppuVar10 != (undefined8 *****)0x0) {
          while( true ) {
            pppppuVar14 = pppppuVar10;
            pppuVar2 = &ppuStack_190;
            FUN_10a003e3c(pppuVar2,pppppuVar14 + 4);
            if (((uint)pppuVar2 >> 7 & 1) != 0) break;
            pppppuVar10 = pppppuVar14 + 4;
            FUN_10a003e3c(pppppuVar10,&ppuStack_190);
            if (((uint)pppppuVar10 >> 7 & 1) == 0) {
              ppppuVar3 = *pppppuVar13;
              if (ppppuVar3 == (undefined8 ****)0x0) goto LAB_10a5ebf30;
              goto LAB_10a5ebfa0;
            }
            pppppuVar13 = pppppuVar14 + 1;
            pppppuVar10 = (undefined8 *****)*pppppuVar13;
            if ((undefined8 *****)*pppppuVar13 == (undefined8 *****)0x0) goto LAB_10a5ebf30;
          }
          pppppuVar13 = pppppuVar14;
          pppppuVar10 = (undefined8 *****)*pppppuVar14;
        }
LAB_10a5ebf30:
        ppppuVar3 = (undefined8 ****)0x40;
        __Znwm();
        if ((long)ppuStack_180 < 0) {
          func_0x000107c3192c(ppppuVar3 + 4,ppuStack_190,ppuStack_188);
        }
        else {
          ppppuVar3[5] = (undefined8 ***)ppuStack_188;
          ppppuVar3[4] = (undefined8 ***)ppuStack_190;
          ppppuVar3[6] = (undefined8 ***)ppuStack_180;
          pppuVar15 = (undefined8 ***)ppuStack_190;
        }
        *(undefined4 *)(ppppuVar3 + 7) = 0;
        *ppppuVar3 = (undefined8 ***)0x0;
        ppppuVar3[1] = (undefined8 ***)0x0;
        ppppuVar3[2] = pppppuVar14;
        *pppppuVar13 = ppppuVar3;
        ppppuVar6 = ppppuVar3;
        if ((undefined8 *****)*ppppuStack_218 != (undefined8 *****)0x0) {
          ppppuVar6 = *pppppuVar13;
          ppppuStack_218 = (undefined8 ****)*ppppuStack_218;
        }
        func_0x000107c2b058(ppppuStack_210,ppppuVar6);
        lStack_208 = lStack_208 + 1;
LAB_10a5ebfa0:
        *(int *)(ppppuVar3 + 7) = (int)param_1;
        (**(code **)(*param_3 + 0x220))(param_3);
        if ((long)ppuStack_180 < 0) {
          __ZdlPv(ppuStack_190);
        }
        iVar7 = iVar7 + 1;
        param_1 = pppuVar15;
      } while (iVar7 != (int)plVar1);
    }
    (**(code **)(*param_3 + 0x220))(param_3);
    pppppuVar13 = (undefined8 *****)appppuStack_200[0];
    if (-1 < cStack_1e9) {
      pppppuVar13 = appppuStack_200;
    }
    func_0x000107c2b054(&ppuStack_1d0,pppppuVar13);
    FUN_10a174c58(&ppuStack_190,&ppuStack_1d0,0x18);
    if ((long)ppuStack_1c0 < 0) {
      __ZdlPv(ppuStack_1d0);
    }
    iStack_194 = 0;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(&ppuStack_190,&iStack_194);
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    FUN_10a5ec548(&uStack_230,(long)iStack_194);
    if (0 < iStack_194) {
      iVar7 = 0;
      do {
        lStack_1b0 = 0;
        lStack_1a8 = 0;
        uStack_1a0 = 0;
        ppuStack_1c8 = (undefined8 ***)0x0;
        ppuStack_1c0 = (undefined8 ***)0x0;
        ppuStack_1d0 = (undefined8 ***)0x0;
        uStack_1b8 = 0;
        FUN_10a125588(&ppuStack_190,&ppuStack_1d0);
        iStack_1d4 = 0;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(&ppuStack_190,&iStack_1d4);
        if (0 < iStack_1d4) {
          iVar11 = 0;
          do {
            uStack_1e8 = 0xffffffff;
            uStack_1dc = 0;
            uStack_1e4 = 0;
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(&ppuStack_190,&uStack_1e8);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf();
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf();
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf();
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf();
            if ((0.0 < (float)uStack_1e4) || (*(char *)(param_2 + 0x5a0) == '\x01')) {
              FUN_10a5ec7d4(&lStack_1b0,&uStack_1e8);
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iStack_1d4);
        }
        func_0x00010a5ec610(&uStack_230,&ppuStack_1d0);
        if (lStack_1b0 != 0) {
          lStack_1a8 = lStack_1b0;
          __ZdlPv();
        }
        if ((long)ppuStack_1c0 < 0) {
          __ZdlPv(ppuStack_1d0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iStack_194);
    }
    ppuStack_190 = (undefined8 **)&PTR_SUB_1108a5a38;
    ppuStack_180 = (undefined8 **)&PTR_DAT_1108a5a60;
    appuStack_110[0] = &PTR_DAT_1108a5a88;
    ppuStack_178 = &PTR_DAT_11088d7b0;
    if (cStack_121 < '\0') {
      __ZdlPv(uStack_138);
    }
    ppuStack_178 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(&lStack_170);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_190,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
    func_0x00010a60eb88((undefined8 *)(param_2 + 0x588));
    *(undefined8 *)(param_2 + 0x590) = uStack_228;
    *(undefined8 *)(param_2 + 0x588) = uStack_230;
    *(undefined8 *)(param_2 + 0x598) = uStack_220;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_230 = 0;
    func_0x00010a60eb20(&uStack_230);
    lVar9 = *(long *)(param_2 + 0x590);
    for (lVar8 = *(long *)(param_2 + 0x588); lVar8 != lVar9; lVar8 = lVar8 + 0x38) {
      pppppuVar10 = (undefined8 *****)ppppuStack_210;
      pppppuVar13 = &ppppuStack_210;
      uVar16 = 0x3f800000;
      if ((undefined8 *****)ppppuStack_210 != (undefined8 *****)0x0) {
        do {
          pppppuVar12 = pppppuVar13;
          pppppuVar14 = pppppuVar10 + 4;
          pppppuVar4 = pppppuVar14;
          FUN_10a003e3c(pppppuVar14,lVar8);
          pppppuVar13 = pppppuVar12;
          if (-1 < (char)pppppuVar4) {
            pppppuVar13 = pppppuVar10;
          }
          pppppuVar10 = *(undefined8 ******)((long)pppppuVar10 + ((ulong)pppppuVar4 >> 4 & 8));
        } while (pppppuVar10 != (undefined8 *****)0x0);
        uVar16 = 0x3f800000;
        if (pppppuVar13 != &ppppuStack_210) {
          pppppuVar10 = pppppuVar12 + 4;
          if (-1 < (char)pppppuVar4) {
            pppppuVar10 = pppppuVar14;
          }
          lVar5 = lVar8;
          FUN_10a003e3c(lVar8,pppppuVar10);
          if (((uint)lVar5 >> 7 & 1) == 0) {
            uVar16 = *(undefined4 *)(pppppuVar13 + 7);
          }
        }
      }
      *(undefined4 *)(lVar8 + 0x18) = uVar16;
    }
    FUN_10a611170(ppppuStack_210);
    if (cStack_1e9 < '\0') {
      __ZdlPv(appppuStack_200[0]);
    }
  }
  FUN_10a5eb850(param_2);
  return;
}



/* Entry: 10a5ec548; end: 10a5ec793;  */

long * FUN_10a5ec548(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar5 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar5 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if ((undefined8 *)0x492492492492492 < param_2) {
      FUN_10a60ec30();
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 < (undefined8 *)param_1[2]) {
        uVar10 = param_2[1];
        uVar9 = *param_2;
        puVar3[2] = param_2[2];
        puVar3[1] = uVar10;
        *puVar3 = uVar9;
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 3);
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[4] = 0;
        uVar9 = param_2[4];
        puVar3[5] = param_2[5];
        puVar3[4] = uVar9;
        puVar3[6] = param_2[6];
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        puVar3 = puVar3 + 7;
        plVar2 = param_1;
      }
      else {
        lVar5 = (long)puVar3 - *param_1;
        uVar6 = (lVar5 >> 3) * 0x6db6db6db6db6db7 + 1;
        if (0x492492492492492 < uVar6) {
          FUN_10a60ec30();
          if (param_1[4] != 0) {
            param_1[5] = param_1[4];
            __ZdlPv();
          }
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            __ZdlPv(*param_1);
          }
          return param_1;
        }
        lVar7 = param_1[2] - *param_1 >> 3;
        uVar8 = lVar7 * -0x2492492492492492;
        if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
          uVar8 = uVar6;
        }
        if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
          uVar8 = 0x492492492492492;
        }
        puVar4 = param_2;
        plStack_98 = param_1;
        FUN_10a60ec44();
        puVar1 = (undefined8 *)(uVar8 + lVar5);
        uVar10 = param_2[1];
        uVar9 = *param_2;
        puVar1[2] = param_2[2];
        puVar1[1] = uVar10;
        *puVar1 = uVar9;
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 3);
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[4] = 0;
        uVar9 = param_2[4];
        puVar1[5] = param_2[5];
        puVar1[4] = uVar9;
        puVar1[6] = param_2[6];
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[4] = 0;
        puVar3 = puVar1 + 7;
        lVar5 = (long)puVar1 + (*param_1 - param_1[1]);
        func_0x00010a60ec8c(*param_1,param_1[1],lVar5);
        lStack_b8 = *param_1;
        *param_1 = lVar5;
        param_1[1] = (long)puVar3;
        lStack_a0 = param_1[2];
        param_1[2] = uVar8 + (long)puVar4 * 0x38;
        plVar2 = &lStack_b8;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a60ed1c(plVar2);
      }
      param_1[1] = (long)puVar3;
      return plVar2;
    }
    lVar7 = param_1[1];
    puVar3 = param_2;
    plStack_38 = param_1;
    FUN_10a60ec44();
    lVar5 = (long)param_2 + (lVar7 - lVar5);
    lVar7 = lVar5 + (*param_1 - param_1[1]);
    func_0x00010a60ec8c(*param_1,param_1[1],lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = lVar5;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)puVar3 * 7);
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a60ed1c(param_1);
  }
  return param_1;
}



/* Entry: 10a5ec794; end: 10a5ec7d3;  */

undefined8 * FUN_10a5ec794(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a5ec7d4; end: 10a5ec8c7;  */

void FUN_10a5ec7d4(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined1 *puVar3;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    lVar8 = param_2[1];
    lVar12 = *param_2;
    *(int *)(plVar4 + 2) = (int)param_2[2];
    plVar4[1] = lVar8;
    *plVar4 = lVar12;
    lVar12 = (long)plVar4 + 0x14;
  }
  else {
    lVar12 = (long)plVar4 - *param_1;
    uVar9 = (lVar12 >> 2) * -0x3333333333333333 + 1;
    if (0xccccccccccccccc < uVar9) {
      pcVar13 = FUN_10a5ec8c8;
      plVar4 = param_1;
      plVar6 = param_2;
      FUN_10a60ed68();
      puVar1 = &stack0xffffffffffffffd0;
      puVar2 = (undefined1 *)register0x00000008;
      while( true ) {
        puVar3 = puVar1;
        plVar5 = (long *)(puVar3 + -0xe0);
        *(long **)(puVar3 + -0x20) = param_2;
        *(long **)(puVar3 + -0x18) = param_1;
        *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
        *(code **)(puVar3 + -8) = pcVar13;
        *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(undefined4 *)(puVar3 + -0xe0) = 0;
        *(undefined4 *)(puVar3 + -0xa8) = 0;
        *(undefined4 *)(puVar3 + -0xa0) = 9;
        puVar3[-0x9c] = 0;
        puVar3[-0x98] = 0;
        *(undefined4 *)(puVar3 + -0x94) = 0xffffffff;
        puVar3[-0x90] = 0;
        puVar3[-0x8c] = 0;
        plVar7 = plVar4 + 0xa4;
        FUN_10ab17db4(puVar3 + -0x88,puVar3 + -0xe0,plVar7,*(undefined4 *)((long)plVar4 + 0x51c));
        if (puVar3[-0x30] == '\x01') {
          plVar7 = (long *)(puVar3 + -0x88);
          FUN_10a4c3ba4(plVar6 + 0xb);
          if (puVar3[-0x30] == '\x01') {
            FUN_10a22d0f8(puVar3 + -0x88);
          }
        }
        plVar6 = plVar7;
        FUN_10a22d0f8();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x28)) break;
        ___stack_chk_fail();
        if (puVar3[-0x30] == '\x01') {
          FUN_10a22d0f8(puVar3 + -0x88);
        }
        FUN_10a22d0f8(puVar3 + -0xe0);
        pcVar13 = FUN_10a5ec9bc;
        plVar4 = plVar5;
        __Unwind_Resume();
        plVar4 = plVar4 + -0x9e;
        puVar1 = puVar3 + -0xe0;
        param_1 = plVar5;
        puVar2 = puVar3;
      }
      return;
    }
    lVar8 = param_1[2] - *param_1 >> 2;
    uVar10 = lVar8 * -0x6666666666666666;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x666666666666665 < (ulong)(lVar8 * -0x3333333333333333)) {
      uVar10 = 0xccccccccccccccc;
    }
    plVar6 = param_2;
    FUN_10a60ed7c();
    plVar4 = (long *)(uVar10 + lVar12);
    lVar8 = param_2[1];
    lVar12 = *param_2;
    *(int *)(plVar4 + 2) = (int)param_2[2];
    plVar4[1] = lVar8;
    *plVar4 = lVar12;
    lVar12 = (long)plVar4 + 0x14;
    lVar11 = (long)plVar4 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lVar8 = *param_1;
    *param_1 = lVar11;
    param_1[1] = lVar12;
    param_1[2] = uVar10 + (long)plVar6 * 0x14;
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar12;
  return;
}



/* Entry: 10a5ec8c8; end: 10a5ec9bb;  */

void FUN_10a5ec8c8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa0) = 9;
    *(undefined1 *)((long)register0x00000008 + -0x9c) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x94) = 0xffffffff;
    *(undefined1 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x8c) = 0;
    puVar2 = param_1 + 0x520;
    FUN_10ab17db4((undefined1 *)((long)register0x00000008 + -0x88),
                  (undefined1 *)((long)register0x00000008 + -0xe0),puVar2,
                  *(undefined4 *)(param_1 + 0x51c));
    if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x88);
      FUN_10a4c3ba4(param_2 + 0x58);
      if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
        FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x88));
      }
    }
    param_2 = puVar2;
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
      FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x88));
    }
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0xe0));
    unaff_x30 = FUN_10a5ec9bc;
    param_1 = puVar1;
    __Unwind_Resume();
    param_1 = param_1 + -0x4f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x19 = puVar1;
  }
  return;
}



/* Entry: 10a5ec9bc; end: 10a5ec9c3;  */

void FUN_10a5ec9bc(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa0) = 9;
    *(undefined1 *)((long)register0x00000008 + -0x9c) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x94) = 0xffffffff;
    *(undefined1 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x8c) = 0;
    puVar2 = param_1 + 0x30;
    FUN_10ab17db4((undefined1 *)((long)register0x00000008 + -0x88),
                  (undefined1 *)((long)register0x00000008 + -0xe0),puVar2,
                  *(undefined4 *)(param_1 + 0x2c));
    if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x88);
      FUN_10a4c3ba4(param_2 + 0x58);
      if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
        FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x88));
      }
    }
    param_2 = puVar2;
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
      FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x88));
    }
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0xe0));
    unaff_x30 = FUN_10a5ec9bc;
    param_1 = puVar1;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x19 = puVar1;
  }
  return;
}



/* Entry: 10a5ec9c4; end: 10a5ecacb;  */

bool FUN_10a5ec9c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010a5eca50(param_1,*(undefined8 *)(param_2 + 0x68));
  lVar2 = param_1 + 0x4f0;
  (**(code **)(*(long *)(param_1 + 0x4f0) + 0x30))();
  FUN_10ab6e450();
  if (lVar2 != 0 && lVar1 != 0) {
    FUN_10a14ca80(lVar1,*(undefined8 *)(param_1 + 0x5b0));
    *(undefined8 *)(param_1 + 0x5a4) = *(undefined8 *)(lVar1 + 0x180);
  }
  if (0x13e < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
    FUN_10a3e4548(*(undefined8 *)(param_1 + 0x168),lVar1 != 0);
  }
  return lVar1 != 0;
}



/* Entry: 10a5ecacc; end: 10a5ecad3;  */

bool FUN_10a5ecacc(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1 + -0x9e;
  func_0x00010a5eca50(plVar1,*(undefined8 *)(param_2 + 0x68));
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x30))();
  FUN_10ab6e450();
  if (plVar2 != (long *)0x0 && plVar1 != (long *)0x0) {
    FUN_10a14ca80(plVar1,param_1[0x18]);
    *(long *)((long)param_1 + 0xb4) = plVar1[0x30];
  }
  if (0x13e < *(int *)(*(long *)(param_1[-0x70] + 0xa20) + 0x18)) {
    FUN_10a3e4548(param_1[-0x71],plVar1 != (long *)0x0);
  }
  return plVar1 != (long *)0x0;
}



/* Entry: 10a5ecad4; end: 10a5ecbb7;  */

void FUN_10a5ecad4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x4f0;
  (**(code **)(*(long *)(param_1 + 0x4f0) + 0x30))();
  FUN_10ab6e450();
  if ((lVar1 == 0) &&
     (lVar1 = param_1,
     func_0x00010a5eca50(param_1,*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x8c0) + 0x18) +
                                  0x68)), lVar1 != 0)) {
    FUN_10a14ca80();
    *(undefined8 *)(param_1 + 0x5a4) = *(undefined8 *)(lVar1 + 0x180);
  }
  return;
}



/* Entry: 10a5ecbb8; end: 10a5ecfbf;  */

void FUN_10a5ecbb8(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long **pplVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar16 = param_2;
    uVar15 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    plStack_60 = (long *)param_2[8];
    lVar10 = param_4 + 0x88;
    func_0x00010a35bf90(lVar10,&plStack_60);
    puVar4 = (undefined8 *)((ulong)&plStack_60 | 8);
    pplVar7 = &plStack_60;
    if (lVar10 != 0) {
      puVar4 = (undefined8 *)(lVar10 + 0x28);
      pplVar7 = (long **)(lVar10 + 0x20);
    }
    uVar15 = *puVar4;
    plVar16 = *pplVar7;
  }
  plVar18 = (long *)param_2[0x2e];
  FUN_10a3dd220(plVar18);
  FUN_10a5759c4(plVar18,plVar16,uVar15);
  plVar16 = (long *)0x28;
  __Znwm();
  plVar9 = plVar16 + 1;
  *plVar9 = 0;
  *plVar16 = (long)&PTR_FUN_110c00cd8;
  plVar16[2] = 0;
  plVar16[3] = (long)plVar18;
  plVar16[4] = (long)FUN_10a3df8cc;
  if (plVar18 != (long *)0x0) {
    if (plVar18[6] == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar16 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar18[5] = (long)plVar18;
      plVar18[6] = (long)plVar16;
    }
    else {
      if (*(long *)(plVar18[6] + 8) != -1) goto LAB_10a5ecd24;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar16 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar18[5] = (long)plVar18;
      plVar18[6] = (long)plVar16;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar10 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
LAB_10a5ecd24:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar18 + 0x2a,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(plVar18 + 0x30) & 0xfffc;
  *(ushort *)(plVar18 + 0x30) = uVar3 | *(ushort *)(plVar18 + 0x30) & 1 | uVar2;
  *(ushort *)(plVar18 + 0x30) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar16 != (long *)0x0) {
    plVar9 = plVar16 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_60 = plVar18;
  plStack_58 = plVar16;
  FUN_10a3c7ce8(param_3,&plStack_60);
  plVar9 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x128))();
  *(undefined1 *)((long)plVar18 + 0x20c) = 0;
  *(int *)(plVar18 + 0x42) = (int)plVar9;
  plVar9 = plVar18;
  FUN_10a422d34(param_2,plVar18,param_4);
  if (plVar18 != param_2) {
    lVar10 = param_2[0xb1];
    lVar14 = param_2[0xb2];
    uVar11 = lVar14 - lVar10;
    if ((ulong)(plVar18[0xb3] - plVar18[0xb1]) < uVar11) {
      uVar17 = ((long)uVar11 >> 3) * 0x6db6db6db6db6db7;
      func_0x00010a60eb88(plVar18 + 0xb1);
      if (0x492492492492492 < uVar17) {
LAB_10a5ecf58:
        FUN_10a60ec30();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a5ecf9c);
        (*pcVar8)();
      }
      lVar12 = plVar18[0xb3] - plVar18[0xb1] >> 3;
      uVar13 = lVar12 * -0x2492492492492492;
      if (uVar13 < uVar17 || uVar13 + ((long)uVar11 >> 3) * -0x6db6db6db6db6db7 == 0) {
        uVar13 = uVar17;
      }
      if (0x249249249249248 < (ulong)(lVar12 * 0x6db6db6db6db6db7)) {
        uVar13 = 0x492492492492492;
      }
      if (0x492492492492492 < uVar13) goto LAB_10a5ecf58;
      FUN_10a60ec44();
      plVar18[0xb1] = uVar13;
      plVar18[0xb2] = uVar13;
      plVar18[0xb3] = uVar13 + (long)plVar9 * 0x38;
      FUN_10a60edbc(lVar10,lVar14,uVar13);
    }
    else {
      uVar17 = plVar18[0xb2] - plVar18[0xb1];
      if (uVar11 <= uVar17) {
        FUN_10a60eec0(lVar10,lVar14);
        lVar14 = plVar18[0xb2];
        while (lVar14 != lVar10) {
          lVar14 = lVar14 + -0x38;
          FUN_10a60ebec(lVar14);
        }
        plVar18[0xb2] = lVar10;
        goto LAB_10a5ecf2c;
      }
      FUN_10a60eec0(lVar10,lVar10 + uVar17);
      lVar10 = lVar10 + uVar17;
      FUN_10a60edbc(lVar10,lVar14,plVar18[0xb2]);
    }
    plVar18[0xb2] = lVar10;
  }
LAB_10a5ecf2c:
  FUN_10a5eb850(plVar18);
  param_1[1] = plVar16;
  *param_1 = plVar18;
  return;
}



/* Entry: 10a5ecfc0; end: 10a5ed093;  */

void FUN_10a5ecfc0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,(*(long *)(param_2 + 0x590) - *(long *)(param_2 + 0x588) >> 3) *
                              0x6db6db6db6db6db7);
  lVar1 = *(long *)(param_2 + 0x588);
  lVar3 = *(long *)(param_2 + 0x590);
  if (lVar1 != lVar3) {
    puVar2 = (undefined8 *)param_1[1];
    do {
      if (puVar2 < (undefined8 *)param_1[2]) {
        FUN_10a0cf46c(param_1,lVar1);
        puVar2 = puVar2 + 3;
      }
      else {
        puVar2 = param_1;
        func_0x000107c281ec(param_1,lVar1);
      }
      param_1[1] = puVar2;
      lVar1 = lVar1 + 0x38;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 10a5ed094; end: 10a5ed237;  */

void FUN_10a5ed094(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  long lVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined4 uStack_50;
  int *piStack_48;
  int *piStack_40;
  int *piStack_38;
  int *piVar6;
  
  lVar2 = *(long *)(param_1 + 0x588);
  lVar7 = *(long *)(param_1 + 0x590);
  FUN_10a5ed238(lVar2,lVar7,param_2);
  if (lVar7 != lVar2) {
    FUN_10a0ee900(&uStack_68,&UNK_10f6677c5,0x25);
    FUN_10a0029c0(&uStack_68);
LAB_10a5ed204:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5ed208);
    (*pcVar1)();
  }
  piStack_48 = (int *)0x0;
  piStack_40 = (int *)0x0;
  piStack_38 = (int *)0x0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_68);
  piVar8 = *(int **)(*(long *)(param_1 + 0x538) + 0x40);
  if (piVar8 == (int *)0x0) {
    piVar4 = (int *)0x0;
    piVar9 = (int *)0x0;
  }
  else {
    if ((int *)0xccccccccccccccc < piVar8) {
      FUN_10a60ed68();
      goto LAB_10a5ed204;
    }
    piVar4 = piVar8;
    FUN_10a60ed7c();
    piVar8 = piVar4 + (long)piVar8 * 5;
    piVar9 = piVar4;
    do {
      *piVar9 = -1;
      piVar9[3] = 0;
      piVar9[4] = 0;
      piVar9[1] = 0;
      piVar9[2] = 0;
      piVar9 = piVar9 + 5;
    } while (piVar9 != piVar8);
    piVar9 = piVar4 + param_2 * 5;
  }
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (piVar4 != piVar8) {
    iVar3 = 0;
    piVar5 = piVar4;
    do {
      piVar6 = piVar5 + 5;
      *piVar5 = iVar3;
      iVar3 = iVar3 + 1;
      piVar5 = piVar6;
    } while (piVar6 != piVar8);
  }
  piStack_48 = piVar4;
  piStack_40 = piVar8;
  piStack_38 = piVar9;
  func_0x00010a5ec610(param_1 + 0x588,&uStack_68);
  FUN_10a5eb850(param_1);
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (lStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  return;
}



/* Entry: 10a5ed238; end: 10a5ed2cb;  */

undefined8 * FUN_10a5ed238(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar5 = (undefined8 *)*param_1;
        if (-1 < (char)bVar3) {
          puVar5 = param_1;
        }
        _memcmp(puVar5,puVar1,uVar4);
        if ((int)puVar5 == 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 7;
      puVar5 = param_2;
    } while (param_1 != param_2);
  }
  return puVar5;
}



/* Entry: 10a5ed2cc; end: 10a5ed417;  */

void FUN_10a5ed2cc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long **pplVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  int *piVar22;
  int *piVar23;
  ulong *puVar24;
  ulong *puVar25;
  int *piVar26;
  float fVar27;
  long *plStack_88;
  long **pplStack_80;
  long **pplStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  puVar7 = *(undefined8 **)(param_1 + 0x588);
  puVar18 = *(undefined8 **)(param_1 + 0x590);
  FUN_10a5ed238(puVar7,puVar18,param_2);
  if (puVar18 == puVar7) {
    FUN_10a0ee900(&stack0xffffffffffffffb8,&UNK_10f6677eb,0x26);
    FUN_10a0029c0(&stack0xffffffffffffffb8);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5ed3fc);
    (*pcVar4)();
  }
  puVar20 = puVar7;
  if (puVar7 + 7 != puVar18) {
    do {
      if (*(char *)((long)puVar20 + 0x17) < '\0') {
        __ZdlPv(*puVar20);
      }
      puVar20[1] = puVar20[8];
      *puVar20 = puVar20[7];
      puVar20[2] = puVar20[9];
      *(undefined1 *)((long)puVar20 + 0x4f) = 0;
      *(undefined1 *)(puVar20 + 7) = 0;
      *(undefined4 *)(puVar20 + 3) = *(undefined4 *)(puVar20 + 10);
      lVar8 = puVar20[4];
      if (lVar8 != 0) {
        puVar20[5] = lVar8;
        __ZdlPv();
        puVar20[4] = 0;
        puVar20[5] = 0;
        puVar20[6] = 0;
      }
      puVar20[5] = puVar20[0xc];
      puVar20[4] = puVar20[0xb];
      puVar20[6] = puVar20[0xd];
      puVar20[0xc] = 0;
      puVar20[0xd] = 0;
      puVar20[0xb] = 0;
      puVar7 = puVar20 + 7;
      puVar1 = puVar20 + 0xe;
      puVar20 = puVar7;
    } while (puVar1 != puVar18);
    puVar18 = *(undefined8 **)(param_1 + 0x590);
  }
  while (puVar18 != puVar7) {
    puVar18 = puVar18 + -7;
    FUN_10a60ebec(puVar18);
  }
  *(undefined8 **)(param_1 + 0x590) = puVar7;
  puVar18 = (undefined8 *)0x3cda8;
  __Znwm();
  FUN_10a14a504();
  *puVar18 = &PTR_FUN_110ba7b88;
  puVar7 = puVar18 + 0x235;
  lVar8 = 0x3bc00;
  do {
    plVar9 = (long *)0x570;
    _bzero((long)puVar7 + 500);
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 0xef;
    lVar8 = lVar8 + -0x778;
  } while (lVar8 != 0);
  pplVar5 = *(long ***)(param_1 + 0x538);
  *(undefined8 **)(param_1 + 0x538) = puVar18;
  if (pplVar5 != (long **)0x0) {
    (*(code *)(*pplVar5)[1])();
  }
  plVar19 = *(long **)(param_1 + 0x590);
  for (plVar15 = *(long **)(param_1 + 0x588); plVar15 != plVar19; plVar15 = plVar15 + 7) {
    pplVar5 = *(long ***)(param_1 + 0x538);
    plVar9 = plVar15;
    FUN_10a14b2dc();
  }
  pplVar16 = *(long ***)(param_1 + 0x570);
  *(long ***)(param_1 + 0x578) = pplVar16;
  *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x540);
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_1 + 0x558);
  uVar21 = *(ulong *)(*(long *)(param_1 + 0x538) + 0x40);
  if (uVar21 != 0) {
    uVar10 = *(long *)(param_1 + 0x580) - (long)pplVar16;
    if ((ulong)((long)uVar10 >> 3) < uVar21) {
      if (uVar21 >> 0x3d != 0) {
LAB_10a5ebbc4:
        FUN_10a107b70();
LAB_10a5ebbc8:
        FUN_10a001cf8();
        __ZdlPv(pplVar16);
        pplVar6 = pplVar5;
        __Unwind_Resume();
        pcStack_68 = FUN_10a5ebbe0;
        plStack_88 = plVar19;
        pplStack_80 = pplVar16;
        pplStack_78 = pplVar5;
        puStack_70 = &stack0xfffffffffffffff0;
        FUN_10a422a34();
        (**(code **)(*plVar9 + 0x40))
                  (plVar9,&PTR_DAT_110bf8b00,*(undefined4 *)((long)pplVar6 + 0x51c));
        (**(code **)(*plVar9 + 0x18))(plVar9,&PTR_DAT_110bf8b20);
        uVar3 = (int)((ulong)((long)pplVar6[0xb2] - (long)pplVar6[0xb1]) >> 3) * -0x49249249;
        if (uVar3 != 0) {
          lVar8 = 0;
          uVar21 = 0;
          do {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            uVar10 = ((long)pplVar6[0xb2] - (long)pplVar6[0xb1] >> 3) * 0x6db6db6db6db6db7;
            if (uVar10 < uVar21 || uVar10 - uVar21 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5ebd84);
              (*pcVar4)();
            }
            lVar17 = (long)pplVar6[0xb1] + lVar8;
            FUN_10a00d760(plVar9,&PTR_DAT_110bf8b40,lVar17);
            (**(code **)(*plVar9 + 0x60))(*(undefined4 *)(lVar17 + 0x18),plVar9,&PTR_DAT_110bf8b60);
            (**(code **)(*plVar9 + 0x28))
                      (plVar9,&PTR_DAT_110bf8b80,*(long *)(lVar17 + 0x20),
                       *(long *)(lVar17 + 0x28) - *(long *)(lVar17 + 0x20));
            (**(code **)(*plVar9 + 0x20))(plVar9);
            uVar21 = uVar21 + 1;
            lVar8 = lVar8 + 0x38;
          } while ((ulong)uVar3 * 0x38 != lVar8);
        }
        (**(code **)(*plVar9 + 0x20))(plVar9);
        (**(code **)(*plVar9 + 0x70))(plVar9,&PTR_DAT_110bf8ba0,*(undefined1 *)(pplVar6 + 0xb4));
        pplStack_80 = (long **)&PTR_DAT_110bb3700;
        plStack_88 = plVar9;
        if (*(uint *)(pplVar6 + 0xa6) != 0xffffffff) {
          pplStack_78 = &plStack_88;
          (*(code *)(&PTR_FUN_110be7398)[*(uint *)(pplVar6 + 0xa6)])(&pplStack_78,pplVar6 + 0xa4);
          return;
        }
        FUN_10a0d459c();
        return;
      }
      uVar14 = (long)uVar10 >> 2;
      if ((ulong)((long)uVar10 >> 2) <= uVar21) {
        uVar14 = uVar21;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar14 = 0x1fffffffffffffff;
      }
      lVar8 = param_1 + 0x570;
      func_0x00010a0433c0();
      _memset();
      plVar9 = *(long **)(param_1 + 0x570);
      lVar17 = lVar8 - (*(long *)(param_1 + 0x578) - (long)plVar9);
      _memcpy(lVar17);
      pplVar5 = *(long ***)(param_1 + 0x570);
      *(long *)(param_1 + 0x570) = lVar17;
      *(ulong *)(param_1 + 0x578) = lVar8 + uVar21 * 8;
      *(ulong *)(param_1 + 0x580) = lVar8 + uVar14 * 8;
      if (pplVar5 != (long **)0x0) {
        __ZdlPv();
      }
    }
    else {
      plVar9 = (long *)0xff;
      pplVar5 = pplVar16;
      _memset(pplVar16,0xff,uVar21 << 3);
      *(long ***)(param_1 + 0x578) = pplVar16 + uVar21;
    }
  }
  lVar8 = *(long *)(param_1 + 0x588);
  lVar17 = *(long *)(param_1 + 0x590);
  if (lVar8 != lVar17) {
    pplVar16 = (long **)(param_1 + 0x558);
    do {
      piVar2 = *(int **)(lVar8 + 0x28);
      for (piVar26 = *(int **)(lVar8 + 0x20); piVar26 != piVar2; piVar26 = piVar26 + 5) {
        fVar27 = (float)piVar26[1];
        if (((0.0 < fVar27) && (uVar21 = (ulong)*piVar26, -1 < *piVar26)) &&
           (lVar11 = *(long *)(param_1 + 0x570),
           uVar21 < (ulong)(*(long *)(param_1 + 0x578) - lVar11 >> 3))) {
          uVar14 = *(ulong *)(lVar11 + uVar21 * 8);
          puVar24 = *(ulong **)(param_1 + 0x548);
          lVar13 = *(long *)(param_1 + 0x540);
          plVar19 = (long *)((long)puVar24 - lVar13);
          uVar10 = (long)plVar19 >> 3;
          if (uVar14 == 0xffffffffffffffff) {
            *(ulong *)(lVar11 + uVar21 * 8) = uVar10;
            if (puVar24 < *(ulong **)(param_1 + 0x550)) {
              puVar25 = puVar24 + 1;
              *puVar24 = uVar21;
            }
            else {
              uVar10 = uVar10 + 1;
              if (uVar10 >> 0x3d != 0) goto LAB_10a5ebbc4;
              uVar12 = (long)*(ulong **)(param_1 + 0x550) - lVar13;
              uVar14 = (long)uVar12 >> 2;
              if (uVar14 <= uVar10) {
                uVar14 = uVar10;
              }
              if (0x7ffffffffffffff7 < uVar12) {
                uVar14 = 0x1fffffffffffffff;
              }
              lVar11 = param_1 + 0x540;
              func_0x00010a0433c0();
              plVar9 = *(long **)(param_1 + 0x540);
              puVar24 = (ulong *)(lVar11 + (long)plVar19);
              lVar13 = (long)puVar24 - (*(long *)(param_1 + 0x548) - (long)plVar9);
              puVar25 = puVar24 + 1;
              *puVar24 = uVar21;
              _memcpy(lVar13);
              pplVar5 = *(long ***)(param_1 + 0x540);
              *(long *)(param_1 + 0x540) = lVar13;
              *(ulong **)(param_1 + 0x548) = puVar25;
              *(ulong *)(param_1 + 0x550) = lVar11 + uVar14 * 8;
              if (pplVar5 != (long **)0x0) {
                __ZdlPv();
              }
            }
            *(ulong **)(param_1 + 0x548) = puVar25;
            piVar22 = *(int **)(param_1 + 0x560);
            if (piVar22 < *(int **)(param_1 + 0x568)) {
              piVar23 = piVar22 + 1;
              *piVar22 = piVar26[1];
            }
            else {
              plVar19 = (long *)((long)piVar22 - (long)*pplVar16);
              uVar21 = ((long)plVar19 >> 2) + 1;
              if (uVar21 >> 0x3e != 0) goto LAB_10a5ebbc8;
              uVar14 = (long)*(int **)(param_1 + 0x568) - (long)*pplVar16;
              uVar10 = (long)uVar14 >> 1;
              if (uVar10 <= uVar21) {
                uVar10 = uVar21;
              }
              if (0x7ffffffffffffffb < uVar14) {
                uVar10 = 0x3fffffffffffffff;
              }
              pplVar6 = pplVar16;
              FUN_10a001d0c();
              plVar9 = *(long **)(param_1 + 0x558);
              piVar22 = (int *)((long)pplVar6 + (long)plVar19);
              lVar11 = (long)piVar22 - (*(long *)(param_1 + 0x560) - (long)plVar9);
              piVar23 = piVar22 + 1;
              *piVar22 = piVar26[1];
              _memcpy(lVar11);
              pplVar5 = *(long ***)(param_1 + 0x558);
              *(long *)(param_1 + 0x558) = lVar11;
              *(int **)(param_1 + 0x560) = piVar23;
              *(ulong *)(param_1 + 0x568) = (long)pplVar6 + uVar10 * 4;
              if (pplVar5 != (long **)0x0) {
                __ZdlPv();
              }
            }
            *(int **)(param_1 + 0x560) = piVar23;
          }
          else {
            if (uVar10 <= uVar14) {
LAB_10a5ebbc0:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5ebbc4);
              (*pcVar4)();
            }
            *(ulong *)(lVar13 + uVar14 * 8) = uVar21;
            uVar21 = *(ulong *)(lVar11 + uVar21 * 8);
            if ((ulong)(*(long *)(param_1 + 0x560) - *(long *)(param_1 + 0x558) >> 2) <= uVar21)
            goto LAB_10a5ebbc0;
            *(float *)(*(long *)(param_1 + 0x558) + uVar21 * 4) = fVar27;
          }
        }
      }
      lVar8 = lVar8 + 0x38;
    } while (lVar8 != lVar17);
  }
  return;
}



/* Entry: 10a5ed418; end: 10a5ed4db;  */

void FUN_10a5ed418(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(param_2 + 0x588);
  lVar4 = *(long *)(param_2 + 0x590);
  FUN_10a5ed238(lVar3,lVar4,param_3);
  if (lVar4 != lVar3) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar4 = *(long *)(lVar3 + 0x20);
    lVar3 = *(long *)(lVar3 + 0x28);
    lVar2 = (lVar3 - lVar4 >> 2) * -0x3333333333333333;
    if (lVar2 != 0) {
      FUN_10a60f060(param_1,lVar2);
      lVar2 = param_1[1];
      lVar3 = lVar3 - lVar4;
      if (lVar3 != 0) {
        _memmove(lVar2,lVar4,lVar3);
      }
      param_1[1] = lVar2 + lVar3;
    }
    return;
  }
  FUN_10a0ee900(auStack_48,&UNK_10f6677eb,0x26);
  FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5ed4c0);
  (*pcVar1)();
}



/* Entry: 10a5ed4dc; end: 10a5ed573;  */

undefined4 FUN_10a5ed4dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(param_1 + 0x588);
  lVar3 = *(long *)(param_1 + 0x590);
  FUN_10a5ed238(lVar2,lVar3,param_2);
  if (lVar3 != lVar2) {
    return *(undefined4 *)(lVar2 + 0x18);
  }
  FUN_10a0ee900(auStack_38,&UNK_10f6677eb,0x26);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5ed558);
  (*pcVar1)();
}



/* Entry: 10a5ed574; end: 10a5ed9ff;  */

void FUN_10a5ed574(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined8 **ppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  
  FUN_10a3c829c(&ppuStack_80);
  ppuStack_98 = (undefined8 **)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  pppuVar5 = (undefined8 ***)0x88;
  __Znwm();
  *(undefined1 *)pppuVar5 = 0;
  uStack_88 = 0x8000000000000088;
  uStack_90 = 0;
  lVar8 = *(long *)(param_2 + 0x590);
  lVar7 = *(long *)(param_2 + 0x588);
  ppuStack_98 = pppuVar5;
  if (lVar8 != lVar7) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      if (uVar11 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppuStack_98,&DAT_10f68f19e,2);
        lVar8 = *(long *)(param_2 + 0x590);
        lVar7 = *(long *)(param_2 + 0x588);
      }
      uVar9 = (lVar8 - lVar7 >> 3) * 0x6db6db6db6db6db7;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
LAB_10a5ed920:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5ed924);
        (*pcVar4)();
      }
      plVar1 = (long *)(lVar7 + lVar10);
      uVar9 = plVar1[1];
      if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
        uVar9 = (ulong)*(byte *)((long)plVar1 + 0x17);
      }
      FUN_10a003c90(&ppuStack_d0,uVar9 + 2,&ppuStack_e8);
      pppuVar5 = (undefined8 ***)ppuStack_d0;
      if (-1 < (long)puStack_c0) {
        pppuVar5 = &ppuStack_d0;
      }
      if (uVar9 != 0) {
        plVar3 = (long *)*plVar1;
        if (-1 < *(char *)((long)plVar1 + 0x17)) {
          plVar3 = plVar1;
        }
        _memmove(pppuVar5,plVar3,uVar9);
      }
      *(undefined2 *)((long)pppuVar5 + uVar9) = 0x203a;
      *(undefined1 *)((undefined2 *)((long)pppuVar5 + uVar9) + 1) = 0;
      uVar9 = (*(long *)(param_2 + 0x590) - *(long *)(param_2 + 0x588) >> 3) * 0x6db6db6db6db6db7;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) goto LAB_10a5ed920;
      __ZNSt3__19to_stringEf
                (&ppuStack_e8,*(undefined4 *)(*(long *)(param_2 + 0x588) + lVar10 + 0x18));
      uVar9 = uStack_e0;
      pppuVar5 = (undefined8 ***)ppuStack_e8;
      if (-1 < (char)bStack_d1) {
        uVar9 = (ulong)bStack_d1;
        pppuVar5 = &ppuStack_e8;
      }
      pppuVar6 = &ppuStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar6,pppuVar5,uVar9);
      puStack_a8 = pppuVar6[1];
      ppuStack_b0 = *pppuVar6;
      puStack_a0 = pppuVar6[2];
      pppuVar6[1] = (undefined8 **)0x0;
      pppuVar6[2] = (undefined8 **)0x0;
      *pppuVar6 = (undefined8 **)0x0;
      ppuVar12 = (undefined8 **)puStack_a8;
      pppuVar5 = (undefined8 ***)ppuStack_b0;
      if (-1 < (long)puStack_a0) {
        ppuVar12 = (undefined8 **)((ulong)puStack_a0 >> 0x38);
        pppuVar5 = &ppuStack_b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppuStack_98,pppuVar5,ppuVar12);
      if ((long)puStack_a0 < 0) {
        __ZdlPv(ppuStack_b0);
      }
      if ((char)bStack_d1 < '\0') {
        __ZdlPv(ppuStack_e8);
      }
      if ((long)puStack_c0 < 0) {
        __ZdlPv(ppuStack_d0);
      }
      uVar11 = uVar11 + 1;
      lVar8 = *(long *)(param_2 + 0x590);
      lVar7 = *(long *)(param_2 + 0x588);
      lVar10 = lVar10 + 0x38;
    } while (uVar11 < (ulong)((lVar8 - lVar7 >> 3) * 0x6db6db6db6db6db7));
  }
  uVar11 = uStack_78;
  if (-1 < (char)bStack_69) {
    uVar11 = (ulong)bStack_69;
  }
  FUN_10a003c90(&ppuStack_e8,uVar11 + 0x1a,&ppuStack_100);
  pppuVar5 = (undefined8 ***)ppuStack_e8;
  if (-1 < (char)bStack_d1) {
    pppuVar5 = &ppuStack_e8;
  }
  if (uVar11 != 0) {
    pppuVar6 = (undefined8 ***)ppuStack_80;
    if (-1 < (char)bStack_69) {
      pppuVar6 = &ppuStack_80;
    }
    _memmove(pppuVar5,pppuVar6,uVar11);
  }
  puVar2 = (undefined8 *)((long)pppuVar5 + uVar11);
  puVar2[1] = 0x737449646e417365;
  *puVar2 = 0x727574616566202c;
  *(undefined8 *)((long)puVar2 + 0x12) = 0x28203a7374686769;
  *(undefined8 *)((long)puVar2 + 10) = 0x6557737449646e41;
  *(undefined1 *)((long)puVar2 + 0x1a) = 0;
  uVar11 = uStack_90;
  pppuVar5 = (undefined8 ***)ppuStack_98;
  if (-1 < (long)uStack_88) {
    uVar11 = uStack_88 >> 0x38;
    pppuVar5 = &ppuStack_98;
  }
  pppuVar6 = &ppuStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,pppuVar5,uVar11);
  puStack_c8 = pppuVar6[1];
  ppuStack_d0 = *pppuVar6;
  puStack_c0 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  pppuVar5 = &ppuStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,&UNK_10f667864,0xe);
  puStack_a8 = pppuVar5[1];
  ppuStack_b0 = *pppuVar5;
  puStack_a0 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  __ZNSt3__19to_stringEi(&ppuStack_100,*(undefined4 *)(param_2 + 0x51c));
  pppuVar5 = (undefined8 ***)ppuStack_100;
  if (-1 < (char)bStack_e9) {
    uStack_f8 = (ulong)bStack_e9;
    pppuVar5 = &ppuStack_100;
  }
  pppuVar6 = &ppuStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,pppuVar5,uStack_f8);
  ppuVar12 = *pppuVar6;
  param_1[1] = pppuVar6[1];
  *param_1 = ppuVar12;
  param_1[2] = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  if ((char)bStack_e9 < '\0') {
    __ZdlPv(ppuStack_100);
  }
  if ((long)puStack_a0 < 0) {
    __ZdlPv(ppuStack_b0);
  }
  if ((long)puStack_c0 < 0) {
    __ZdlPv(ppuStack_d0);
  }
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(ppuStack_e8);
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if ((char)bStack_69 < '\0') {
    __ZdlPv(ppuStack_80);
  }
  return;
}



/* Entry: 10a5eda00; end: 10a5eda27;  */

void FUN_10a5eda00(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined8 **ppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  
  FUN_10a3c829c(&ppuStack_80);
  ppuStack_98 = (undefined8 **)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  pppuVar5 = (undefined8 ***)0x88;
  __Znwm();
  *(undefined1 *)pppuVar5 = 0;
  uStack_88 = 0x8000000000000088;
  uStack_90 = 0;
  lVar8 = *(long *)(param_2 + 0x580);
  lVar7 = *(long *)(param_2 + 0x578);
  ppuStack_98 = pppuVar5;
  if (lVar8 != lVar7) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      if (uVar11 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppuStack_98,&DAT_10f68f19e,2);
        lVar8 = *(long *)(param_2 + 0x580);
        lVar7 = *(long *)(param_2 + 0x578);
      }
      uVar9 = (lVar8 - lVar7 >> 3) * 0x6db6db6db6db6db7;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
LAB_10a5ed920:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5ed924);
        (*pcVar4)();
      }
      plVar1 = (long *)(lVar7 + lVar10);
      uVar9 = plVar1[1];
      if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
        uVar9 = (ulong)*(byte *)((long)plVar1 + 0x17);
      }
      FUN_10a003c90(&ppuStack_d0,uVar9 + 2,&ppuStack_e8);
      pppuVar5 = (undefined8 ***)ppuStack_d0;
      if (-1 < (long)puStack_c0) {
        pppuVar5 = &ppuStack_d0;
      }
      if (uVar9 != 0) {
        plVar3 = (long *)*plVar1;
        if (-1 < *(char *)((long)plVar1 + 0x17)) {
          plVar3 = plVar1;
        }
        _memmove(pppuVar5,plVar3,uVar9);
      }
      *(undefined2 *)((long)pppuVar5 + uVar9) = 0x203a;
      *(undefined1 *)((undefined2 *)((long)pppuVar5 + uVar9) + 1) = 0;
      uVar9 = (*(long *)(param_2 + 0x580) - *(long *)(param_2 + 0x578) >> 3) * 0x6db6db6db6db6db7;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) goto LAB_10a5ed920;
      __ZNSt3__19to_stringEf
                (&ppuStack_e8,*(undefined4 *)(*(long *)(param_2 + 0x578) + lVar10 + 0x18));
      uVar9 = uStack_e0;
      pppuVar5 = (undefined8 ***)ppuStack_e8;
      if (-1 < (char)bStack_d1) {
        uVar9 = (ulong)bStack_d1;
        pppuVar5 = &ppuStack_e8;
      }
      pppuVar6 = &ppuStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar6,pppuVar5,uVar9);
      puStack_a8 = pppuVar6[1];
      ppuStack_b0 = *pppuVar6;
      puStack_a0 = pppuVar6[2];
      pppuVar6[1] = (undefined8 **)0x0;
      pppuVar6[2] = (undefined8 **)0x0;
      *pppuVar6 = (undefined8 **)0x0;
      ppuVar12 = (undefined8 **)puStack_a8;
      pppuVar5 = (undefined8 ***)ppuStack_b0;
      if (-1 < (long)puStack_a0) {
        ppuVar12 = (undefined8 **)((ulong)puStack_a0 >> 0x38);
        pppuVar5 = &ppuStack_b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppuStack_98,pppuVar5,ppuVar12);
      if ((long)puStack_a0 < 0) {
        __ZdlPv(ppuStack_b0);
      }
      if ((char)bStack_d1 < '\0') {
        __ZdlPv(ppuStack_e8);
      }
      if ((long)puStack_c0 < 0) {
        __ZdlPv(ppuStack_d0);
      }
      uVar11 = uVar11 + 1;
      lVar8 = *(long *)(param_2 + 0x580);
      lVar7 = *(long *)(param_2 + 0x578);
      lVar10 = lVar10 + 0x38;
    } while (uVar11 < (ulong)((lVar8 - lVar7 >> 3) * 0x6db6db6db6db6db7));
  }
  uVar11 = uStack_78;
  if (-1 < (char)bStack_69) {
    uVar11 = (ulong)bStack_69;
  }
  FUN_10a003c90(&ppuStack_e8,uVar11 + 0x1a,&ppuStack_100);
  pppuVar5 = (undefined8 ***)ppuStack_e8;
  if (-1 < (char)bStack_d1) {
    pppuVar5 = &ppuStack_e8;
  }
  if (uVar11 != 0) {
    pppuVar6 = (undefined8 ***)ppuStack_80;
    if (-1 < (char)bStack_69) {
      pppuVar6 = &ppuStack_80;
    }
    _memmove(pppuVar5,pppuVar6,uVar11);
  }
  puVar2 = (undefined8 *)((long)pppuVar5 + uVar11);
  puVar2[1] = 0x737449646e417365;
  *puVar2 = 0x727574616566202c;
  *(undefined8 *)((long)puVar2 + 0x12) = 0x28203a7374686769;
  *(undefined8 *)((long)puVar2 + 10) = 0x6557737449646e41;
  *(undefined1 *)((long)puVar2 + 0x1a) = 0;
  uVar11 = uStack_90;
  pppuVar5 = (undefined8 ***)ppuStack_98;
  if (-1 < (long)uStack_88) {
    uVar11 = uStack_88 >> 0x38;
    pppuVar5 = &ppuStack_98;
  }
  pppuVar6 = &ppuStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,pppuVar5,uVar11);
  puStack_c8 = pppuVar6[1];
  ppuStack_d0 = *pppuVar6;
  puStack_c0 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  pppuVar5 = &ppuStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,&UNK_10f667864,0xe);
  puStack_a8 = pppuVar5[1];
  ppuStack_b0 = *pppuVar5;
  puStack_a0 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  __ZNSt3__19to_stringEi(&ppuStack_100,*(undefined4 *)(param_2 + 0x50c));
  pppuVar5 = (undefined8 ***)ppuStack_100;
  if (-1 < (char)bStack_e9) {
    uStack_f8 = (ulong)bStack_e9;
    pppuVar5 = &ppuStack_100;
  }
  pppuVar6 = &ppuStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,pppuVar5,uStack_f8);
  ppuVar12 = *pppuVar6;
  param_1[1] = pppuVar6[1];
  *param_1 = ppuVar12;
  param_1[2] = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  if ((char)bStack_e9 < '\0') {
    __ZdlPv(ppuStack_100);
  }
  if ((long)puStack_a0 < 0) {
    __ZdlPv(ppuStack_b0);
  }
  if ((long)puStack_c0 < 0) {
    __ZdlPv(ppuStack_d0);
  }
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(ppuStack_e8);
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if ((char)bStack_69 < '\0') {
    __ZdlPv(ppuStack_80);
  }
  return;
}



/* Entry: 10a5eda28; end: 10a5eda8f;  */

bool FUN_10a5eda28(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf6633b4;
    _memcmp(&UNK_10f6633b4,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1c) &&
     (((*param_2 == 0x6e656e6f706d6f43 && param_2[1] == 0x69726574614d2e74) &&
      param_2[2] == 0x69566873654d6c61) && (int)param_2[3] == 0x6c617573)) {
    return true;
  }
  if ((param_3 == 0x18) &&
     ((*param_2 == 0x6e656e6f706d6f43 && param_2[1] == 0x654d657361422e74) &&
      param_2[2] == 0x6c61757369566873)) {
    return true;
  }
  if ((param_3 == 0x10) && (*param_2 == 0x6e656e6f706d6f43 && param_2[1] == 0x6c61757369562e74)) {
    return true;
  }
  if ((param_3 == 9) && (*param_2 == 0x6e656e6f706d6f43 && (char)param_2[1] == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a5eda90; end: 10a5edae3;  */

bool FUN_10a5eda90(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf6633b4;
    _memcmp(&UNK_10f6633b4,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1c) &&
     (((*param_2 == 0x6e656e6f706d6f43 && param_2[1] == 0x69726574614d2e74) &&
      param_2[2] == 0x69566873654d6c61) && (int)param_2[3] == 0x6c617573)) {
    return true;
  }
  if ((param_3 == 0x18) &&
     ((*param_2 == 0x6e656e6f706d6f43 && param_2[1] == 0x654d657361422e74) &&
      param_2[2] == 0x6c61757369566873)) {
    return true;
  }
  if ((param_3 == 0x10) && (*param_2 == 0x6e656e6f706d6f43 && param_2[1] == 0x6c61757369562e74)) {
    return true;
  }
  if ((param_3 == 9) && (*param_2 == 0x6e656e6f706d6f43 && (char)param_2[1] == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a5edae4; end: 10a5ee2df;  */

void FUN_10a5edae4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6633b4,0x21);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bfd780;
  pppuVar2 = (undefined8 ***)&UNK_10f667746;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xf3;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bfd780;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bc3458;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5ee2c0;
    FUN_10a054dac(param_1,&DAT_10f2ee801,FUN_10a6113e0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5ee2c0;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10a611538,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5ee2c0;
    FUN_10a054dac(param_1,&DAT_10f3becc6,FUN_10a6115e8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5ee2c0;
    FUN_10a054dac(param_1,&UNK_10f667873,FUN_10a611708,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5ee2c0;
    FUN_10a054dac(param_1,&UNK_10f667888,FUN_10a611820,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5ee2c0;
    FUN_10a054dac(param_1,&UNK_10f667899,FUN_10a61198c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6678aa,FUN_10a611ae8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f305a7e,FUN_10a611ba4,FUN_10a611c5c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6678bb,FUN_10a6121d0,FUN_10a612288);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6678c9,FUN_10a612530,FUN_10a6125e8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6678d5,FUN_10a6126a8,FUN_10a612764);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f43c7dd,FUN_10a61282c,FUN_10a6128e4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f409d63,FUN_10a6129a4,FUN_10a612a60);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6678e1,FUN_10a612b18,FUN_10a612bd0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6678f7,FUN_10a612c90,FUN_10a612d48);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f667903,FUN_10a612e08,FUN_10a612ec0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66790e,FUN_10a612f80,FUN_10a61303c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66791d,FUN_10a613120,FUN_10a6131dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66792c,FUN_10a6132c0,FUN_10a613378);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f667940,FUN_10a613438,FUN_10a6134f0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66794f,FUN_10a6135d4,FUN_10a61368c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f667968,FUN_10a61374c,FUN_10a613808);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f638acc,FUN_10a6138f8,FUN_10a6139b4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f667989,FUN_10a613aa4,FUN_10a613b60);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6633b4,0x21);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a5ee2c0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5ee2c4);
  (*pcVar6)();
}



/* Entry: 10a5ee2e0; end: 10a5ee3df;  */

void FUN_10a5ee2e0(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66799e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x40000000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000173;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a5ee3e0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6679ad;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000173;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0;
  FUN_10a5ee438(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6679b6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000173;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10a5ee438(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a5ee3e0; end: 10a5ee437;  */

ulong FUN_10a5ee3e0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a5ee438; end: 10a5ee48f;  */

ulong FUN_10a5ee438(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a613c20(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a5ee490; end: 10a5ee593;  */

void FUN_10a5ee490(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6679bc;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x40000000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000173;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a5ee594(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6679cb;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000173;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0xc;
  FUN_10a5ee5ec(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6679d2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000173;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0x10;
  FUN_10a5ee5ec(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a5ee594; end: 10a5ee5eb;  */

ulong FUN_10a5ee594(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a5ee5ec; end: 10a5ee643;  */

ulong FUN_10a5ee5ec(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a613c94(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a5ee644; end: 10a5ee6b7;  */

undefined8 * FUN_10a5ee644(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a5ee6b8; end: 10a5ee867;  */

undefined8 * FUN_10a5ee6b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0xb2] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0xb5) = 0x100;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  puVar1 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110bf9060,param_2,param_3,9);
  *puVar1 = &PTR_DAT_110bfced8;
  puVar1[2] = &PTR_DAT_110bbddd0;
  puVar1[7] = &PTR_FUN_110bbde28;
  puVar1[0xd] = &PTR_FUN_110bbde48;
  puVar1[0xb2] = &PTR_FUN_110bfd138;
  puVar1[0x16] = &PTR_FUN_110bbdeb8;
  puVar1[0x17] = &PTR_DAT_110bbdee8;
  FUN_10a38da90(puVar1 + 0x9e);
  *param_1 = &PTR_DAT_110bf8c38;
  param_1[2] = &PTR_FUN_110bf8e78;
  param_1[7] = &PTR_DAT_110bf8ed0;
  param_1[0xd] = &PTR_DAT_110bf8ef0;
  param_1[0xb2] = &PTR_DAT_110bf9018;
  param_1[0x16] = &PTR_DAT_110bf8f60;
  param_1[0x17] = &PTR_DAT_110bf8f90;
  param_1[0x9e] = &PTR_DAT_110bf8fc0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  *(undefined4 *)((long)param_1 + 0x53c) = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  *(undefined4 *)((long)param_1 + 0x544) = 0x41f00000;
  *(undefined2 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)((long)param_1 + 0x54a) = 0;
  *(undefined8 *)((long)param_1 + 0x54c) = 0xc00000000;
  *(undefined2 *)((long)param_1 + 0x554) = 0;
  *(undefined1 *)((long)param_1 + 0x556) = 0;
  *(undefined4 *)(param_1 + 0xab) = 0xbf800000;
  *(undefined2 *)((long)param_1 + 0x564) = 0x100;
  *(undefined8 *)((long)param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  FUN_10a425f00(param_1,1);
  return param_1;
}



/* Entry: 10a5ee868; end: 10a5eec37;  */

/* WARNING: Removing unreachable block (ram,0x00010a5eea3c) */
/* WARNING: Removing unreachable block (ram,0x00010a5eeb98) */

void FUN_10a5ee868(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined1 *puVar11;
  code *pcVar12;
  undefined8 uStack_148;
  undefined8 uStack_140;
  char cStack_131;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined1 uStack_c1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  puVar11 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a2d5304();
  uStack_130 = 0x10a613fa0;
  ppuStack_128 = &PTR_DAT_110c00d30;
  pcStack_f0 = (code *)0x10a613fa0;
  ppuStack_e8 = &PTR_DAT_110c00d30;
  uStack_a0 = CONCAT17(5,(undefined7)uStack_a0);
  uStack_b0 = CONCAT26(uStack_b0._6_2_,0x7465737361);
  pcStack_98 = FUN_10a613d60;
  ppuStack_90 = &PTR_FUN_110c00d18;
  puVar1 = (undefined8 *)0x58;
  lStack_120 = param_1;
  lStack_e0 = param_1;
  __Znwm();
  *puVar1 = 0x10a613fa0;
  puVar1[1] = &PTR_DAT_110c00d30;
  puVar1[2] = param_1;
  puVar1[9] = uStack_a8;
  puVar1[8] = uStack_b0;
  puVar1[10] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_88 = puVar1;
  func_0x000107c2b054(&uStack_148,&UNK_10f667746);
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c008e0,&pcStack_98,0,&uStack_148);
  if (cStack_131 < '\0') {
    __ZdlPv(uStack_148);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  lVar10 = param_1 + 0x528;
  uStack_148 = 0;
  uStack_140 = 0;
  pcStack_f0 = FUN_10a613fcc;
  ppuStack_e8 = &PTR_FUN_110c00d48;
  uStack_d8 = 0x676e6974736f7266;
  uStack_d0 = 0x6c656853;
  uStack_cc = 0x6c;
  uStack_c1 = 0xd;
  lStack_e0 = lVar10;
  func_0x000107c2b054(&pcStack_98,&UNK_10f667746);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110bf90a0,&pcStack_f0,0,&pcStack_98);
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  if (((ulong)plVar2 & 1) == 0) {
    FUN_10a5ee644(lVar10,0,0);
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bf90c0,0);
  FUN_10a5eec38(param_1,plVar3);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bf90e0,1);
  *(char *)(param_1 + 0x540) = (char)plVar3;
  (**(code **)(*param_2 + 0x48))(0x41f00000,param_2,&PTR_DAT_110c00900);
  FUN_10a5eed00(param_1);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bf9100,0);
  *(char *)(param_1 + 0x548) = (char)plVar3;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bf9120,0);
  *(char *)(param_1 + 0x549) = (char)plVar3;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bf9140,0);
  *(char *)(param_1 + 0x538) = (char)plVar3;
  ppuVar7 = &PTR_DAT_110bf9160;
  uVar9 = 0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x48))();
  *(undefined4 *)(param_1 + 0x55c) = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    func_0x00010a0d6180(&uStack_148);
    plVar4 = plVar3;
    __Unwind_Resume();
    pcVar12 = FUN_10a5eec38;
    *(int *)((long)plVar4 + 0x53c) = (int)ppuVar7;
    plVar5 = plVar4;
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar6 = plVar4[0xae];
    if (lVar6 != 0) {
      FUN_10a7d919c(lVar6,ppuVar7);
    }
    if (*(char *)((long)plVar4 + 0x555) == '\x01') {
      plVar8 = (long *)(plVar4[0x2d] + 0x168);
      if (*(char *)(plVar4[0x2d] + 0x17f) < '\0') {
        plVar8 = (long *)*plVar8;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x00010ae06f08(1,0x14,&UNK_10f667746,&UNK_10f667746,0xffffffff,&UNK_10f667a5e,in_x6,in_x7
                          ,"Lens",plVar8,ppuVar7,
                          ((double)(lVar6 - (long)plVar5) / 1000000000.0) * 1000.0,plVar2,lVar10,
                          param_2,plVar3,puVar11,pcVar12);
    }
    return;
  }
  return;
}



/* Entry: 10a5eec38; end: 10a5eecff;  */

void FUN_10a5eec38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar3;
  
  *(int *)(param_1 + 0x53c) = (int)param_2;
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar2 = *(long *)(param_1 + 0x570);
  if (lVar2 != 0) {
    FUN_10a7d919c(lVar2,param_2);
  }
  if (*(char *)(param_1 + 0x555) == '\x01') {
    plVar3 = (long *)(*(long *)(param_1 + 0x168) + 0x168);
    if (*(char *)(*(long *)(param_1 + 0x168) + 0x17f) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x00010ae06f08(1,0x14,&UNK_10f667746,&UNK_10f667746,0xffffffff,&UNK_10f667a5e,in_x6,in_x7,
                        "Lens",plVar3,param_2,((double)(lVar2 - lVar1) / 1000000000.0) * 1000.0);
  }
  return;
}



/* Entry: 10a5eed00; end: 10a5eee37;  */

void FUN_10a5eed00(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  fVar5 = (float)param_1;
  if (fVar5 <= 0.0) {
    func_0x000107c2b054(auStack_68,&UNK_10f667a2b);
    __ZNSt3__19to_stringEf(&puStack_80,param_1);
    if (-1 < (char)bStack_69) {
      uStack_78 = (ulong)bStack_69;
      puStack_80 = (undefined1 *)&puStack_80;
    }
    puVar3 = auStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puStack_80,uStack_78);
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10a0029c0(&uStack_50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5eedec);
    (*pcVar1)();
  }
  *(float *)(param_2 + 0x544) = fVar5;
  lVar4 = *(long *)(param_2 + 0x570);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0xf8) = (long)((1.0 / fVar5) * 1e+09);
    lVar2 = lVar4 + 0xe0;
    FUN_10a7db3a0();
    *(undefined8 *)(lVar4 + 0x148) = 0;
    *(undefined8 *)(lVar4 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x150) = 0x1fca056;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(lVar4 + 0x158) = lVar2;
  }
  return;
}



/* Entry: 10a5eee38; end: 10a5ef05b;  */

void FUN_10a5eee38(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a2d5884();
  uStack_50 = *(undefined8 *)(param_1 + 0x518);
  plStack_48 = *(long **)(param_1 + 0x520);
  puStack_40 = &UNK_10f663397;
  uStack_38 = 0x1c;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c008e0,&uStack_50,&puStack_40);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_50 = *(undefined8 *)(param_1 + 0x528);
  plStack_48 = *(long **)(param_1 + 0x530);
  puStack_40 = &UNK_10f63972b;
  uStack_38 = 0x1a;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bf90a0,&uStack_50,&puStack_40);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bf90c0,*(undefined4 *)(param_1 + 0x53c));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bf90e0,*(undefined1 *)(param_1 + 0x540));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x544),param_2,&PTR_DAT_110c00900);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bf9100,*(undefined1 *)(param_1 + 0x548));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bf9120,*(undefined1 *)(param_1 + 0x549));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bf9140,*(undefined1 *)(param_1 + 0x538));
                    /* WARNING: Could not recover jumptable at 0x00010a5ef040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x55c),param_2,&PTR_DAT_110bf9160);
  return;
}



/* Entry: 10a5ef05c; end: 10a5ef063;  */

undefined8 FUN_10a5ef05c(void)

{
  return 1;
}



/* Entry: 10a5ef064; end: 10a5ef25b;  */

void FUN_10a5ef064(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(param_2 + 0x518);
  plVar6 = *(long **)(param_2 + 0x520);
  if (plVar6 == (long *)0x0) {
    puVar2 = (undefined8 *)&UNK_10e482ad8;
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)(lVar5 + 0x158);
    }
    uVar7 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar7;
    param_1[2] = puVar2[2];
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar2 = (undefined8 *)&UNK_10e482ad8;
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)(lVar5 + 0x158);
    }
    uVar7 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar7;
    param_1[2] = puVar2[2];
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a5ef25c; end: 10a5ef3b3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10a5ef25c(float param_1,long param_2)

{
  int iVar1;
  undefined8 *******pppppppuVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 uStack_50;
  undefined8 *******pppppppuStack_48;
  undefined7 uStack_40;
  char cStack_39;
  uint uStack_38;
  undefined4 uStack_34;
  
  plVar6 = *(long **)(param_2 + 0x570);
  if (plVar6 == (long *)0x0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      plVar6 = (long *)0x1;
      FUN_10ae06f30(1,2,&UNK_10f667aa1,&UNK_10f667ae4,0xb9,&UNK_10f667b35,&stack0x00000000);
      return plVar6;
    }
    return (long *)0x0;
  }
  if (plVar6[0x20] < 1) {
    return plVar6;
  }
  plVar9 = plVar6;
  FUN_10a7da640();
  uVar10 = plVar6[0x20];
  lVar13 = ((long)(param_1 * 1e+09) - (long)plVar9) + (long)uVar10 / 2;
  lVar16 = 0;
  if (uVar10 != 0) {
    lVar16 = lVar13 / (long)uVar10;
  }
  lVar13 = lVar13 - lVar16 * uVar10;
  lVar13 = (uVar10 & lVar13 >> 0x3f) + (lVar13 - (long)uVar10 / 2);
  plVar9 = plVar6 + 0x24;
  FUN_10a60f120();
  iVar5 = (int)plVar9;
  if ((iVar5 < 0) || (*(int *)((long)plVar6 + 0xf4) <= iVar5)) {
    lVar16 = 0;
  }
  else {
    lVar16 = plVar6[0x21];
    if ((ulong)(iVar5 + 1) < (ulong)(plVar6[0x22] - lVar16 >> 3)) {
      lVar16 = *(long *)(lVar16 + (ulong)(iVar5 + 1) * 8) -
               *(long *)(lVar16 + ((ulong)plVar9 & 0xffffffff) * 8);
    }
    else {
      lVar16 = plVar6[0x1f];
    }
  }
  plVar12 = plVar6 + 0x1c;
  FUN_10a7da90c(plVar12,plVar9,3);
  if ((lVar13 + lVar16 != 0 && lVar13 + lVar16 < 0 == SCARRY8(lVar13,lVar16)) &&
      lVar13 < (long)plVar12) {
    plVar6[0x29] = plVar6[0x29] + lVar13;
    return plVar12;
  }
  plVar9 = plVar6 + 0x1c;
  func_0x00010a7da9c0(plVar9,(long)(param_1 * 1e+09));
  iVar5 = *(int *)((long)plVar6 + 0xf4);
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar4 = (int)plVar9 / iVar5;
  }
  iVar14 = *(int *)(*plVar6 + 0x188);
  iVar5 = iVar14 + ((int)plVar9 - iVar4 * iVar5);
  iVar4 = 0;
  if (iVar14 != 0) {
    iVar4 = iVar5 / iVar14;
  }
  iVar5 = iVar5 - iVar4 * iVar14;
  plVar9 = plVar6 + 0x24;
  uStack_34 = iVar5;
  FUN_10a60f120();
  iVar4 = (int)plVar9;
  if (iVar4 < 0) {
    plVar6[0x27] = -0x100000000;
    while( true ) {
      plVar9 = plVar6;
      FUN_10a7d9f28(plVar6,iVar5);
      iVar4 = *(int *)((long)plVar6 + 0x13c) - (int)plVar6[0x27];
      iVar14 = (int)((ulong)(plVar6[0x25] - plVar6[0x24]) >> 4);
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar4 = iVar4 + iVar14;
        iVar5 = 0;
        if (iVar14 != 0) {
          iVar5 = iVar4 / iVar14;
        }
        iVar5 = (iVar4 - iVar5 * iVar14) + 1;
      }
      if (iVar14 <= iVar5) break;
      iVar5 = (int)plVar6 + 0x120;
      FUN_10a7fcc38();
      iVar4 = *(int *)(*plVar6 + 0x188);
      iVar14 = 0;
      if (iVar4 != 0) {
        iVar14 = (iVar5 + 1) / iVar4;
      }
      iVar5 = (iVar5 + 1) - iVar14 * iVar4;
    }
    plVar6[0x29] = 0;
    plVar6[0x28] = -1;
    plVar6[0x2a] = 0x1fca056;
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar6[0x2b] = (long)plVar9;
    return plVar9;
  }
  if (iVar4 == iVar5) {
    return plVar9;
  }
  iVar1 = 0;
  if (iVar14 != 0) {
    iVar1 = (iVar4 + 1) / iVar14;
  }
  if (iVar5 != (iVar4 + 1) - iVar1 * iVar14) {
    plVar9 = plVar6 + 0x24;
    FUN_10a12978c(plVar9,iVar5);
    uStack_38 = (uint)plVar9;
    if (-1 < (int)uStack_38) {
      if ((char)plVar6[0x2c] == '\x01') {
        FUN_10a7d95dc(&uStack_50,plVar6,plVar9);
        func_0x00010a800704(&uStack_34,&uStack_38,&uStack_50);
        ppuVar8 = &PTR_PTR_113302ba0;
        FUN_10ae079a0();
        func_0x00010a800750();
        FUN_10ae07cd4(ppuVar8,&PTR_PTR_113302ba0);
        if (cStack_39 < '\0') {
          __ZdlPv(uStack_50);
        }
        plVar9 = (long *)(ulong)uStack_38;
      }
      plVar12 = plVar6 + 0x24;
      FUN_10a129680(plVar12,plVar9);
      plVar6[0x29] = 0;
      plVar6[0x28] = -1;
      plVar6[0x2a] = 0x1fca056;
      __ZNSt3__16chrono12steady_clock3nowEv();
      plVar6[0x2b] = (long)plVar12;
      return plVar12;
    }
    if (1 < iVar14) {
      FUN_10a7d9320(plVar6,iVar5);
      return plVar6;
    }
    return plVar9;
  }
  plVar6[0x29] = 0;
  plVar6[0x28] = -1;
  plVar6[0x2a] = 0x1fca056;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar6[0x2b] = (long)plVar9;
  if ((int)plVar6[0x27] == *(int *)((long)plVar6 + 0x13c)) {
    FUN_10a7d95dc(&pppppppuStack_48,plVar6);
    uVar10 = CONCAT17(cStack_39,uStack_40);
    pppppppuVar2 = pppppppuStack_48;
    if (-1 < uStack_34) {
      uVar10 = (ulong)uStack_34._3_1_;
      pppppppuVar2 = &pppppppuStack_48;
    }
    FUN_10ae03140(0,pppppppuVar2,uVar10);
    ppuVar8 = &PTR_PTR_113302cf8;
  }
  else {
    iVar5 = (int)plVar6[0x27] + 1;
    uVar10 = plVar6[0x25] - plVar6[0x24];
    iVar4 = 0;
    iVar14 = (int)(uVar10 >> 4);
    if (iVar14 != 0) {
      iVar4 = iVar5 / iVar14;
    }
    uVar11 = (ulong)(iVar5 - iVar4 * iVar14);
    if ((ulong)((long)uVar10 >> 4) <= uVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7d95dc);
      (*pcVar3)();
    }
    plVar9 = (long *)(plVar6[0x24] + uVar11 * 0x10);
    plVar12 = (long *)*plVar9;
    if ((plVar12 != (long *)0x0) && (*plVar12 != 0)) {
      if ((plVar12[2] == 0) || (((uint)*(undefined8 *)(plVar12[2] + 0x10) >> 1 & 1) != 0)) {
        plVar9 = plVar6 + 0x24;
        func_0x00010a12964c();
        __ZNSt3__16chrono12steady_clock3nowEv();
        plVar6[0x2b] = (long)plVar9;
        return (long *)0x1;
      }
      if ((char)plVar6[0x2c] != '\x01') {
        return (long *)0x0;
      }
      plVar9 = (long *)*plVar9;
      if ((plVar9 == (long *)0x0) || (lVar13 = *plVar9, lVar13 == 0)) {
        uVar15 = 0xffffffff;
      }
      else {
        uVar15 = *(undefined4 *)(lVar13 + 8);
      }
      FUN_10a7d95dc(&pppppppuStack_48,plVar6);
      func_0x00010ae02ecc(0,uVar15);
      FUN_10ae03140();
      ppuVar8 = &PTR_PTR_113302d78;
      ppuVar7 = ppuVar8;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      FUN_10ae0314c();
      goto LAB_10a7d94fc;
    }
    FUN_10a7d95dc(&pppppppuStack_48,plVar6);
    uVar10 = CONCAT17(cStack_39,uStack_40);
    pppppppuVar2 = pppppppuStack_48;
    if (-1 < uStack_34) {
      uVar10 = (ulong)uStack_34._3_1_;
      pppppppuVar2 = &pppppppuStack_48;
    }
    FUN_10ae03140(0,pppppppuVar2,uVar10);
    ppuVar8 = &PTR_PTR_113302cc8;
  }
  ppuVar7 = ppuVar8;
  FUN_10ae079a0();
  FUN_10ae0314c();
LAB_10a7d94fc:
  FUN_10ae07cd4(ppuVar7,ppuVar8);
  if (uStack_34 < 0) {
    __ZdlPv(pppppppuStack_48);
  }
  return (long *)0x0;
}



/* Entry: 10a5ef3b4; end: 10a5ef417;  */

undefined8 * FUN_10a5ef3b4(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 10a5ef418; end: 10a5efcf3;  */

void FUN_10a5ef418(long *param_1)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar13;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = param_1;
    if (param_1[0xa3] != 0) {
      unaff_x19 = (long *)param_1[0x60];
      func_0x00010a3e8440(unaff_x19,param_1[0xa3] + 0xf4);
      if (*(char *)((long)param_1 + 0x565) != '\x01') goto LAB_10a5ef7dc;
      *(undefined1 *)((long)param_1 + 0x565) = 0;
      unaff_x20 = param_1 + 0x54;
      plVar11 = (long *)0x1138353c0;
      if ((long *)param_1[0x54] != (long *)param_1[0x55]) {
        plVar11 = (long *)param_1[0x54];
      }
      lVar9 = *plVar11;
      if (lVar9 == 0) {
        puVar6 = (undefined8 *)param_1[0x2e];
        FUN_10a3dd96c();
        func_0x00010a2450d0();
        FUN_10ab45900((undefined1 *)((long)register0x00000008 + -0xb0),*puVar6,1);
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
        FUN_10a436ef0((undefined1 *)((long)register0x00000008 + -0xf8),
                      (undefined1 *)((long)register0x00000008 + -0xc0),
                      (undefined1 *)((long)register0x00000008 + -0xb0),1);
        unaff_x21 = (long *)((long)register0x00000008 + -0xf8);
        FUN_10a421328(unaff_x20,(undefined1 *)((long)register0x00000008 + -0xf8));
        *(long **)((long)register0x00000008 + -0xd0) = unaff_x21;
        FUN_10a0d4a18((undefined1 *)((long)register0x00000008 + -0xd0));
        plVar11 = *(long **)((long)register0x00000008 + -0xb8);
        if (plVar11 != (long *)0x0) {
          plVar13 = plVar11 + 1;
          do {
            lVar9 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xa0));
        unaff_x19 = (long *)((long)register0x00000008 + -0x98);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x98))();
        plVar13 = *(long **)((long)register0x00000008 + -0xa8);
        unaff_x20 = plVar13;
        if (plVar13 != (long *)0x0) {
          plVar11 = plVar13 + 1;
          do {
            lVar9 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            goto LAB_10a5ef7d8;
          }
        }
      }
      else {
        plVar13 = (long *)plVar11[1];
        *(long *)((long)register0x00000008 + -0xc0) = lVar9;
        *(long **)((long)register0x00000008 + -0xb8) = plVar13;
        if (plVar13 != (long *)0x0) {
          plVar5 = plVar13 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (*(long **)(lVar9 + 0x230) == *(long **)(lVar9 + 0x228)) {
          puVar10 = &UNK_10f669d0d;
LAB_10a5ef600:
          if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
            plVar13 = (long *)(param_1[0x2d] + 0x168);
            if (*(char *)(param_1[0x2d] + 0x17f) < '\0') {
              plVar13 = (long *)*plVar13;
            }
            plVar12 = (long *)(*plVar11 + 0x58);
            plVar5 = (long *)*plVar12;
            if (-1 < *(char *)(*plVar11 + 0x6f)) {
              plVar5 = plVar12;
            }
            *(long **)((long)register0x00000008 + -0x108) = plVar5;
            *(undefined **)((long)register0x00000008 + -0x100) = puVar10;
            *(long **)((long)register0x00000008 + -0x110) = plVar13;
            func_0x00010ae06f08(1,2,&UNK_10f667aa1,&UNK_10f667b6b,0x16b,&UNK_10f667bb7);
          }
          puVar6 = (undefined8 *)param_1[0x2e];
          FUN_10a3dd96c();
          func_0x00010a2450d0();
          FUN_10ab45900((undefined1 *)((long)register0x00000008 + -0xb0),*puVar6,1);
          plVar11 = *(long **)(*(long *)((long)register0x00000008 + -0xb0) + 0x228);
          if (plVar11 == *(long **)(*(long *)((long)register0x00000008 + -0xb0) + 0x230)) {
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar11;
          }
          func_0x000107c2b07c((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f667be8);
          FUN_10a047898(lVar9 + 0x200,(undefined1 *)((long)register0x00000008 + -0xf8),
                        (undefined1 *)((long)register0x00000008 + -0xf8));
          if (*(char *)((long)register0x00000008 + -0xe1) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf8));
          }
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -0xa8);
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0xb0);
          *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          FUN_10a436ef0((undefined1 *)((long)register0x00000008 + -0xf8),
                        (undefined1 *)((long)register0x00000008 + -0xd0),
                        (undefined1 *)((long)register0x00000008 + -0xc0),1);
          FUN_10a421328(unaff_x20,(undefined1 *)((long)register0x00000008 + -0xf8));
          *(undefined1 **)((long)register0x00000008 + -0xd8) =
               (undefined1 *)((long)register0x00000008 + -0xf8);
          FUN_10a0d4a18((undefined1 *)((long)register0x00000008 + -0xd8));
          plVar11 = *(long **)((long)register0x00000008 + -200);
          if (plVar11 != (long *)0x0) {
            plVar13 = plVar11 + 1;
            do {
              lVar9 = *plVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xa0));
          unaff_x19 = (long *)((long)register0x00000008 + -0x98);
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x98))();
          unaff_x20 = *(long **)((long)register0x00000008 + -0xa8);
          if (unaff_x20 != (long *)0x0) {
            plVar11 = unaff_x20 + 1;
            do {
              lVar9 = *plVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
              unaff_x19 = unaff_x20;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          plVar13 = *(long **)((long)register0x00000008 + -0xb8);
        }
        else {
          unaff_x24 = **(long **)(lVar9 + 0x228);
          if ((unaff_x24 == 0) || ((*(byte *)(unaff_x24 + 0x279) & 1) != 0)) {
            puVar10 = &UNK_10f669d17;
            goto LAB_10a5ef600;
          }
          unaff_x22 = *(long **)(unaff_x24 + 0x188);
          if (unaff_x22 == (long *)0x0) {
            puVar10 = &UNK_10f669d28;
            goto LAB_10a5ef600;
          }
          do {
            plVar5 = unaff_x22;
            (**(code **)(*unaff_x22 + 0x80))();
            if ((int)plVar5 != 2) {
              uVar8 = *(undefined8 *)(unaff_x24 + 0x188);
              FUN_10a044920(uVar8,1);
              if ((int)uVar8 != 2) {
                puVar10 = &UNK_10f669d3b;
                goto LAB_10a5ef600;
              }
              break;
            }
            unaff_x22 = (long *)unaff_x22[0x13];
          } while (unaff_x22 != (long *)0x0);
          unaff_x19 = *(long **)(unaff_x24 + 0x188);
          (**(code **)(*unaff_x19 + 0x90))();
          if (((uint)unaff_x19 >> 2 & 1) == 0) {
            puVar10 = &UNK_10f669d56;
            goto LAB_10a5ef600;
          }
          if (*(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18) < 0x133) {
            unaff_x22 = (long *)**(undefined8 **)(*(long *)*unaff_x20 + 0x228);
            uVar2 = *(ushort *)((long)unaff_x22 + 0x129);
            *(ushort *)((long)unaff_x22 + 0x129) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
            *(ushort *)(unaff_x22 + 0xe) =
                 *(ushort *)(unaff_x22 + 0xe) & 0xff80 | *(ushort *)(unaff_x22 + 0xe) + 1 & 0x7f;
            *(undefined1 *)((long)register0x00000008 + -0x98) = 1;
            unaff_x20 = (long *)((long)register0x00000008 + -0xb0);
            *(code **)((long)register0x00000008 + -0xb0) = FUN_10a1d3648;
            *(undefined ***)((long)register0x00000008 + -0xa8) = &PTR_FUN_110bad818;
            *(long **)((long)register0x00000008 + -0xa0) = unaff_x22 + 8;
            func_0x00010a3326b8(unaff_x22 + 0x43,1);
            func_0x00010a332748((long)unaff_x22 + 0x219,1);
            func_0x00010a332700((long)unaff_x22 + 0x21a,0);
            *(undefined4 *)((long)unaff_x22 + 0x21e) = 0x1010101;
            lVar9 = unaff_x22[0x4b];
            *(undefined8 *)(lVar9 + 0x30) = 0;
            *(undefined8 *)(lVar9 + 0x28) = 0;
            *(undefined8 *)(lVar9 + 0x40) = 7;
            *(undefined8 *)(lVar9 + 0x38) = 0x607060100000000;
            *(undefined8 *)(lVar9 + 0x50) = 0;
            *(undefined8 *)(lVar9 + 0x48) = 0;
            FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xb0));
            unaff_x19 = (long *)((long)register0x00000008 + -0xa8);
            (*(code *)**(undefined8 **)((long)register0x00000008 + -0xa8))();
          }
        }
        unaff_x21 = plVar13;
        if (plVar13 != (long *)0x0) {
          plVar11 = plVar13 + 1;
          do {
            lVar9 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
LAB_10a5ef7d8:
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            unaff_x19 = plVar13;
          }
        }
      }
LAB_10a5ef7dc:
      unaff_x23 = param_1[0xa3];
      if (((*(long *)(unaff_x23 + 600) != 0) && (param_1[0xa5] != 0)) &&
         ((*(ushort *)(param_1[0xa5] + 0x180) & 0x17) == 0)) {
        unaff_x21 = (long *)(ulong)(uint)(int)*(float *)(unaff_x23 + 0x170);
        unaff_x22 = (long *)(ulong)(uint)(int)*(float *)(unaff_x23 + 0x174);
        unaff_x20 = param_1 + 0xb0;
        lVar9 = param_1[0xb0];
        if (((lVar9 == 0) || (*(uint *)(lVar9 + 0x40) != (int)*(float *)(unaff_x23 + 0x170))) ||
           (*(uint *)(lVar9 + 0x44) != (int)*(float *)(unaff_x23 + 0x174))) {
          func_0x00010ae06f08(1,0x14,&UNK_10f667746,&UNK_10f667746,0xffffffff,&UNK_10f667bfb);
          unaff_x24 = param_1[0x2e];
          puVar6 = (undefined8 *)0x120;
          __Znwm();
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar7 = puVar6 + 3;
          *puVar6 = &PTR_DAT_110c02148;
          FUN_10a123dc0(puVar7,unaff_x24,unaff_x21,unaff_x22,0);
          *(undefined8 **)((long)register0x00000008 + -0xb0) = puVar7;
          *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar6;
          FUN_10a5ef3b4(unaff_x20,(undefined1 *)((long)register0x00000008 + -0xb0));
          unaff_x21 = *(long **)((long)register0x00000008 + -0xa8);
          if (unaff_x21 != (long *)0x0) {
            plVar11 = unaff_x21 + 1;
            do {
              lVar9 = *plVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
            }
          }
          *(undefined4 *)((long)param_1 + 0x53c) = 0;
          *(undefined1 *)(*(long *)(param_1[0xa3] + 600) + 0x1dd) =
               *(undefined1 *)((long)param_1 + 0x555);
        }
        func_0x00010a424420((undefined1 *)((long)register0x00000008 + -0xb0),param_1);
        unaff_x19 = *(long **)(param_1[0xa3] + 600);
        FUN_10a11e5a4(unaff_x19,param_1[0xb0],(undefined1 *)((long)register0x00000008 + -0xb0),
                      param_1 + 0xa5,*(undefined1 *)((long)param_1 + 0x554));
        if (((ulong)unaff_x19 & 1) == 0) {
          lVar9 = *unaff_x20;
          *(undefined4 *)(lVar9 + 8) = 0xffffffff;
          *(undefined2 *)(lVar9 + 0x49) = 0;
          *(undefined8 *)(lVar9 + 0x10) = 0;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          *(undefined1 *)(lVar9 + 0x20) = 0;
          *(undefined8 *)(lVar9 + 0x54) = 0xff7fffff00000000;
          *(undefined8 *)(lVar9 + 0x4c) = 0;
          *(undefined8 *)(lVar9 + 0x5c) = 0xff7fffffff7fffff;
        }
        unaff_x23 = param_1[0xa3];
      }
      if ((1 < *(int *)(unaff_x23 + 0x188)) && (param_1[0xae] == 0)) {
        plVar11 = (long *)param_1[0xa4];
        unaff_x20 = (long *)0x250;
        __Znwm();
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
        *unaff_x20 = (long)&PTR_DAT_110c00d70;
        unaff_x22 = unaff_x20 + 3;
        *(long *)((long)register0x00000008 + -0xb0) = unaff_x23;
        *(long **)((long)register0x00000008 + -0xa8) = plVar11;
        if (plVar11 != (long *)0x0) {
          plVar13 = plVar11 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a7d8b88(*(undefined4 *)((long)param_1 + 0x544),unaff_x22,
                      (undefined1 *)((long)register0x00000008 + -0xb0),
                      *(undefined1 *)((long)param_1 + 0x555));
        if (plVar11 != (long *)0x0) {
          plVar13 = plVar11 + 1;
          do {
            lVar9 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        param_1[0xae] = (long)unaff_x22;
        unaff_x21 = (long *)param_1[0xaf];
        param_1[0xaf] = (long)unaff_x20;
        if (unaff_x21 != (long *)0x0) {
          plVar11 = unaff_x21 + 1;
          do {
            lVar9 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
          }
        }
        unaff_x19 = (long *)param_1[0xae];
        FUN_10a7d919c(unaff_x19,*(undefined4 *)((long)param_1 + 0x53c));
        unaff_x23 = param_1[0xa3];
      }
      if ((1 < *(int *)(unaff_x23 + 0x188)) && (*(char *)((long)param_1 + 0x564) == '\x01')) {
        FUN_10a7daa60(param_1[0xae]);
        unaff_x19 = (long *)(param_1[0xae] + 0x120);
        FUN_10a60f120();
        *(int *)((long)param_1 + 0x53c) = (int)unaff_x19;
      }
      lVar9 = param_1[0xb0];
      if (((lVar9 != 0) && (-1 < *(int *)(lVar9 + 8))) && (*(char *)(lVar9 + 0x4a) == '\x01')) {
        iVar1 = *(int *)((long)param_1 + 0x53c) + 1;
        *(int *)((long)param_1 + 0x53c) = iVar1;
        *(int *)(param_1[0xb0] + 8) = iVar1;
      }
      *(undefined4 *)(param_1 + 0xad) = *(undefined4 *)(*(long *)(param_1[0x2e] + 0x850) + 0x2c);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xb0));
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xa8))(unaff_x20 + 1);
    FUN_10a0617bc((undefined1 *)((long)register0x00000008 + -0xc0));
    unaff_x30 = FUN_10a5efcf4;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0xd;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
}



/* Entry: 10a5efcf4; end: 10a5efcfb;  */

void FUN_10a5efcf4(long *param_1)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar13;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = param_1 + -0xd;
    if (param_1[0x96] != 0) {
      unaff_x19 = (long *)param_1[0x53];
      func_0x00010a3e8440(unaff_x19,param_1[0x96] + 0xf4);
      if (*(char *)((long)param_1 + 0x4fd) != '\x01') goto LAB_10a5ef7dc;
      *(undefined1 *)((long)param_1 + 0x4fd) = 0;
      unaff_x20 = param_1 + 0x47;
      plVar11 = (long *)0x1138353c0;
      if ((long *)param_1[0x47] != (long *)param_1[0x48]) {
        plVar11 = (long *)param_1[0x47];
      }
      lVar9 = *plVar11;
      if (lVar9 == 0) {
        puVar6 = (undefined8 *)param_1[0x21];
        FUN_10a3dd96c();
        func_0x00010a2450d0();
        FUN_10ab45900((undefined1 *)((long)register0x00000008 + -0xb0),*puVar6,1);
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
        FUN_10a436ef0((undefined1 *)((long)register0x00000008 + -0xf8),
                      (undefined1 *)((long)register0x00000008 + -0xc0),
                      (undefined1 *)((long)register0x00000008 + -0xb0),1);
        unaff_x21 = (long *)((long)register0x00000008 + -0xf8);
        FUN_10a421328(unaff_x20,(undefined1 *)((long)register0x00000008 + -0xf8));
        *(long **)((long)register0x00000008 + -0xd0) = unaff_x21;
        FUN_10a0d4a18((undefined1 *)((long)register0x00000008 + -0xd0));
        plVar11 = *(long **)((long)register0x00000008 + -0xb8);
        if (plVar11 != (long *)0x0) {
          plVar13 = plVar11 + 1;
          do {
            lVar9 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xa0));
        unaff_x19 = (long *)((long)register0x00000008 + -0x98);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x98))();
        plVar13 = *(long **)((long)register0x00000008 + -0xa8);
        unaff_x20 = plVar13;
        if (plVar13 != (long *)0x0) {
          plVar11 = plVar13 + 1;
          do {
            lVar9 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            goto LAB_10a5ef7d8;
          }
        }
      }
      else {
        plVar13 = (long *)plVar11[1];
        *(long *)((long)register0x00000008 + -0xc0) = lVar9;
        *(long **)((long)register0x00000008 + -0xb8) = plVar13;
        if (plVar13 != (long *)0x0) {
          plVar5 = plVar13 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (*(long **)(lVar9 + 0x230) == *(long **)(lVar9 + 0x228)) {
          puVar10 = &UNK_10f669d0d;
LAB_10a5ef600:
          if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
            plVar13 = (long *)(param_1[0x20] + 0x168);
            if (*(char *)(param_1[0x20] + 0x17f) < '\0') {
              plVar13 = (long *)*plVar13;
            }
            plVar12 = (long *)(*plVar11 + 0x58);
            plVar5 = (long *)*plVar12;
            if (-1 < *(char *)(*plVar11 + 0x6f)) {
              plVar5 = plVar12;
            }
            *(long **)((long)register0x00000008 + -0x108) = plVar5;
            *(undefined **)((long)register0x00000008 + -0x100) = puVar10;
            *(long **)((long)register0x00000008 + -0x110) = plVar13;
            func_0x00010ae06f08(1,2,&UNK_10f667aa1,&UNK_10f667b6b,0x16b,&UNK_10f667bb7);
          }
          puVar6 = (undefined8 *)param_1[0x21];
          FUN_10a3dd96c();
          func_0x00010a2450d0();
          FUN_10ab45900((undefined1 *)((long)register0x00000008 + -0xb0),*puVar6,1);
          plVar11 = *(long **)(*(long *)((long)register0x00000008 + -0xb0) + 0x228);
          if (plVar11 == *(long **)(*(long *)((long)register0x00000008 + -0xb0) + 0x230)) {
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar11;
          }
          func_0x000107c2b07c((undefined1 *)((long)register0x00000008 + -0xf8),&UNK_10f667be8);
          FUN_10a047898(lVar9 + 0x200,(undefined1 *)((long)register0x00000008 + -0xf8),
                        (undefined1 *)((long)register0x00000008 + -0xf8));
          if (*(char *)((long)register0x00000008 + -0xe1) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf8));
          }
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -0xa8);
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0xb0);
          *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          FUN_10a436ef0((undefined1 *)((long)register0x00000008 + -0xf8),
                        (undefined1 *)((long)register0x00000008 + -0xd0),
                        (undefined1 *)((long)register0x00000008 + -0xc0),1);
          FUN_10a421328(unaff_x20,(undefined1 *)((long)register0x00000008 + -0xf8));
          *(undefined1 **)((long)register0x00000008 + -0xd8) =
               (undefined1 *)((long)register0x00000008 + -0xf8);
          FUN_10a0d4a18((undefined1 *)((long)register0x00000008 + -0xd8));
          plVar11 = *(long **)((long)register0x00000008 + -200);
          if (plVar11 != (long *)0x0) {
            plVar13 = plVar11 + 1;
            do {
              lVar9 = *plVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xa0));
          unaff_x19 = (long *)((long)register0x00000008 + -0x98);
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x98))();
          unaff_x20 = *(long **)((long)register0x00000008 + -0xa8);
          if (unaff_x20 != (long *)0x0) {
            plVar11 = unaff_x20 + 1;
            do {
              lVar9 = *plVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
              unaff_x19 = unaff_x20;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          plVar13 = *(long **)((long)register0x00000008 + -0xb8);
        }
        else {
          unaff_x24 = **(long **)(lVar9 + 0x228);
          if ((unaff_x24 == 0) || ((*(byte *)(unaff_x24 + 0x279) & 1) != 0)) {
            puVar10 = &UNK_10f669d17;
            goto LAB_10a5ef600;
          }
          unaff_x22 = *(long **)(unaff_x24 + 0x188);
          if (unaff_x22 == (long *)0x0) {
            puVar10 = &UNK_10f669d28;
            goto LAB_10a5ef600;
          }
          do {
            plVar5 = unaff_x22;
            (**(code **)(*unaff_x22 + 0x80))();
            if ((int)plVar5 != 2) {
              uVar8 = *(undefined8 *)(unaff_x24 + 0x188);
              FUN_10a044920(uVar8,1);
              if ((int)uVar8 != 2) {
                puVar10 = &UNK_10f669d3b;
                goto LAB_10a5ef600;
              }
              break;
            }
            unaff_x22 = (long *)unaff_x22[0x13];
          } while (unaff_x22 != (long *)0x0);
          unaff_x19 = *(long **)(unaff_x24 + 0x188);
          (**(code **)(*unaff_x19 + 0x90))();
          if (((uint)unaff_x19 >> 2 & 1) == 0) {
            puVar10 = &UNK_10f669d56;
            goto LAB_10a5ef600;
          }
          if (*(int *)(*(long *)(param_1[0x21] + 0xa20) + 0x18) < 0x133) {
            unaff_x22 = (long *)**(undefined8 **)(*(long *)*unaff_x20 + 0x228);
            uVar2 = *(ushort *)((long)unaff_x22 + 0x129);
            *(ushort *)((long)unaff_x22 + 0x129) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
            *(ushort *)(unaff_x22 + 0xe) =
                 *(ushort *)(unaff_x22 + 0xe) & 0xff80 | *(ushort *)(unaff_x22 + 0xe) + 1 & 0x7f;
            *(undefined1 *)((long)register0x00000008 + -0x98) = 1;
            unaff_x20 = (long *)((long)register0x00000008 + -0xb0);
            *(code **)((long)register0x00000008 + -0xb0) = FUN_10a1d3648;
            *(undefined ***)((long)register0x00000008 + -0xa8) = &PTR_FUN_110bad818;
            *(long **)((long)register0x00000008 + -0xa0) = unaff_x22 + 8;
            func_0x00010a3326b8(unaff_x22 + 0x43,1);
            func_0x00010a332748((long)unaff_x22 + 0x219,1);
            func_0x00010a332700((long)unaff_x22 + 0x21a,0);
            *(undefined4 *)((long)unaff_x22 + 0x21e) = 0x1010101;
            lVar9 = unaff_x22[0x4b];
            *(undefined8 *)(lVar9 + 0x30) = 0;
            *(undefined8 *)(lVar9 + 0x28) = 0;
            *(undefined8 *)(lVar9 + 0x40) = 7;
            *(undefined8 *)(lVar9 + 0x38) = 0x607060100000000;
            *(undefined8 *)(lVar9 + 0x50) = 0;
            *(undefined8 *)(lVar9 + 0x48) = 0;
            FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xb0));
            unaff_x19 = (long *)((long)register0x00000008 + -0xa8);
            (*(code *)**(undefined8 **)((long)register0x00000008 + -0xa8))();
          }
        }
        unaff_x21 = plVar13;
        if (plVar13 != (long *)0x0) {
          plVar11 = plVar13 + 1;
          do {
            lVar9 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
LAB_10a5ef7d8:
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            unaff_x19 = plVar13;
          }
        }
      }
LAB_10a5ef7dc:
      unaff_x23 = param_1[0x96];
      if (((*(long *)(unaff_x23 + 600) != 0) && (param_1[0x98] != 0)) &&
         ((*(ushort *)(param_1[0x98] + 0x180) & 0x17) == 0)) {
        unaff_x21 = (long *)(ulong)(uint)(int)*(float *)(unaff_x23 + 0x170);
        unaff_x22 = (long *)(ulong)(uint)(int)*(float *)(unaff_x23 + 0x174);
        unaff_x20 = param_1 + 0xa3;
        lVar9 = param_1[0xa3];
        if (((lVar9 == 0) || (*(uint *)(lVar9 + 0x40) != (int)*(float *)(unaff_x23 + 0x170))) ||
           (*(uint *)(lVar9 + 0x44) != (int)*(float *)(unaff_x23 + 0x174))) {
          func_0x00010ae06f08(1,0x14,&UNK_10f667746,&UNK_10f667746,0xffffffff,&UNK_10f667bfb);
          unaff_x24 = param_1[0x21];
          puVar6 = (undefined8 *)0x120;
          __Znwm();
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar7 = puVar6 + 3;
          *puVar6 = &PTR_DAT_110c02148;
          FUN_10a123dc0(puVar7,unaff_x24,unaff_x21,unaff_x22,0);
          *(undefined8 **)((long)register0x00000008 + -0xb0) = puVar7;
          *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar6;
          FUN_10a5ef3b4(unaff_x20,(undefined1 *)((long)register0x00000008 + -0xb0));
          unaff_x21 = *(long **)((long)register0x00000008 + -0xa8);
          if (unaff_x21 != (long *)0x0) {
            plVar11 = unaff_x21 + 1;
            do {
              lVar9 = *plVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
            }
          }
          *(undefined4 *)((long)param_1 + 0x4d4) = 0;
          *(undefined1 *)(*(long *)(param_1[0x96] + 600) + 0x1dd) =
               *(undefined1 *)((long)param_1 + 0x4ed);
        }
        func_0x00010a424420((undefined1 *)((long)register0x00000008 + -0xb0),param_1 + -0xd);
        unaff_x19 = *(long **)(param_1[0x96] + 600);
        FUN_10a11e5a4(unaff_x19,param_1[0xa3],(undefined1 *)((long)register0x00000008 + -0xb0),
                      param_1 + 0x98,*(undefined1 *)((long)param_1 + 0x4ec));
        if (((ulong)unaff_x19 & 1) == 0) {
          lVar9 = *unaff_x20;
          *(undefined4 *)(lVar9 + 8) = 0xffffffff;
          *(undefined2 *)(lVar9 + 0x49) = 0;
          *(undefined8 *)(lVar9 + 0x10) = 0;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          *(undefined1 *)(lVar9 + 0x20) = 0;
          *(undefined8 *)(lVar9 + 0x54) = 0xff7fffff00000000;
          *(undefined8 *)(lVar9 + 0x4c) = 0;
          *(undefined8 *)(lVar9 + 0x5c) = 0xff7fffffff7fffff;
        }
        unaff_x23 = param_1[0x96];
      }
      if ((1 < *(int *)(unaff_x23 + 0x188)) && (param_1[0xa1] == 0)) {
        plVar11 = (long *)param_1[0x97];
        unaff_x20 = (long *)0x250;
        __Znwm();
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
        *unaff_x20 = (long)&PTR_DAT_110c00d70;
        unaff_x22 = unaff_x20 + 3;
        *(long *)((long)register0x00000008 + -0xb0) = unaff_x23;
        *(long **)((long)register0x00000008 + -0xa8) = plVar11;
        if (plVar11 != (long *)0x0) {
          plVar13 = plVar11 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a7d8b88(*(undefined4 *)((long)param_1 + 0x4dc),unaff_x22,
                      (undefined1 *)((long)register0x00000008 + -0xb0),
                      *(undefined1 *)((long)param_1 + 0x4ed));
        if (plVar11 != (long *)0x0) {
          plVar13 = plVar11 + 1;
          do {
            lVar9 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        param_1[0xa1] = (long)unaff_x22;
        unaff_x21 = (long *)param_1[0xa2];
        param_1[0xa2] = (long)unaff_x20;
        if (unaff_x21 != (long *)0x0) {
          plVar11 = unaff_x21 + 1;
          do {
            lVar9 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
          }
        }
        unaff_x19 = (long *)param_1[0xa1];
        FUN_10a7d919c(unaff_x19,*(undefined4 *)((long)param_1 + 0x4d4));
        unaff_x23 = param_1[0x96];
      }
      if ((1 < *(int *)(unaff_x23 + 0x188)) && (*(char *)((long)param_1 + 0x4fc) == '\x01')) {
        FUN_10a7daa60(param_1[0xa1]);
        unaff_x19 = (long *)(param_1[0xa1] + 0x120);
        FUN_10a60f120();
        *(int *)((long)param_1 + 0x4d4) = (int)unaff_x19;
      }
      lVar9 = param_1[0xa3];
      if (((lVar9 != 0) && (-1 < *(int *)(lVar9 + 8))) && (*(char *)(lVar9 + 0x4a) == '\x01')) {
        iVar1 = *(int *)((long)param_1 + 0x4d4) + 1;
        *(int *)((long)param_1 + 0x4d4) = iVar1;
        *(int *)(param_1[0xa3] + 8) = iVar1;
      }
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(*(long *)(param_1[0x21] + 0x850) + 0x2c);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xb0));
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xa8))(unaff_x20 + 1);
    FUN_10a0617bc((undefined1 *)((long)register0x00000008 + -0xc0));
    unaff_x30 = FUN_10a5efcf4;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
}



/* Entry: 10a5efcfc; end: 10a5efd53;  */

void FUN_10a5efcfc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10a421994();
  lVar4 = *(long *)(param_1 + 0x4f8);
  uVar5 = *(undefined8 *)(param_1 + 0x170);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    lStack_28 = *(long *)(lVar4 + 0x18);
    uStack_30 = *(undefined8 *)(lVar4 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(uVar5,&uStack_30,&PTR_DAT_110bcfa10,param_1 + 0x4f0);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)uVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)uVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a5efd54; end: 10a5efec3;  */

void FUN_10a5efd54(long *param_1)

{
  if (((int)param_1[0xad] != *(int *)(*(long *)(param_1[0x2e] + 0x850) + 0x2c)) &&
     ((*(ushort *)(param_1 + 0x30) & 0x17) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a5efd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x220))();
    return;
  }
  return;
}



/* Entry: 10a5efec4; end: 10a5f014b;  */

void FUN_10a5efec4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66294e,0x13);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bfda00;
  pppuVar2 = (undefined8 ***)&UNK_10f667746;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bfda00;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f012c;
    FUN_10a054dac(param_1,&UNK_10f667c35,FUN_10a614204,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f667c4f,FUN_10a6143d4,FUN_10a61448c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f667c5e,FUN_10a6145b4,FUN_10a61466c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(lVar3 + -0x28);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x28) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66294e,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a5f012c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5f0130);
  (*pcVar6)();
}



/* Entry: 10a5f014c; end: 10a5f0263;  */

undefined8 * FUN_10a5f014c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x45] = &PTR_FUN_110c383b8;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bf94b8,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110bf94c8);
  *param_1 = &PTR_FUN_110bf9198;
  param_1[2] = &PTR_DAT_110bf92b0;
  param_1[7] = &PTR_DAT_110bf9308;
  param_1[0xd] = &PTR_DAT_110bf9328;
  param_1[0x45] = &PTR_DAT_110bf9478;
  param_1[0x16] = &PTR_DAT_110bf9398;
  param_1[0x17] = &PTR_DAT_110bf93c8;
  param_1[0x3e] = &PTR_DAT_110bf9400;
  *(undefined2 *)(param_1 + 0x43) = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR_DAT_110c38348;
  *(undefined4 *)(puVar1 + 3) = 0x3f800000;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  param_1[0x44] = puVar1;
  return param_1;
}



/* Entry: 10a5f0264; end: 10a5f0307;  */

void FUN_10a5f0264(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bf9198;
  param_1[2] = &PTR_DAT_110bf92b0;
  param_1[7] = &PTR_DAT_110bf9308;
  param_1[0xd] = &PTR_DAT_110bf9328;
  param_1[0x45] = &PTR_DAT_110bf9478;
  param_1[0x16] = &PTR_DAT_110bf9398;
  param_1[0x17] = &PTR_DAT_110bf93c8;
  param_1[0x3e] = &PTR_DAT_110bf9400;
  plVar1 = (long *)param_1[0x44];
  param_1[0x44] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x3e] = &PTR_DAT_110bfd950;
  param_1[0x45] = &PTR_FUN_110bfd9c8;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bfd7d0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x45] = &PTR_DAT_110bfd900;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a5f0308; end: 10a5f034b;  */

void FUN_10a5f0308(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bf9198;
  param_1[2] = &PTR_DAT_110bf92b0;
  param_1[7] = &PTR_DAT_110bf9308;
  param_1[0xd] = &PTR_DAT_110bf9328;
  param_1[0x45] = &PTR_DAT_110bf9478;
  param_1[0x16] = &PTR_DAT_110bf9398;
  param_1[0x17] = &PTR_DAT_110bf93c8;
  param_1[0x3e] = &PTR_DAT_110bf9400;
  plVar1 = (long *)param_1[0x44];
  param_1[0x44] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x3e] = &PTR_DAT_110bfd950;
  param_1[0x45] = &PTR_FUN_110bfd9c8;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bfd7d0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x45] = &PTR_DAT_110bfd900;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a5f034c; end: 10a5f03ef;  */

void FUN_10a5f034c(void)

{
  FUN_10a5f0264();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5f03f0; end: 10a5f0527;  */

void FUN_10a5f03f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a5f0264((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a5f0528; end: 10a5f058f;  */

float FUN_10a5f0528(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  fVar2 = param_1[3] * param_1[3] + fVar1 * fVar1 +
          param_1[1] * param_1[1] + param_1[2] * param_1[2];
  if (fVar2 != 0.0) {
    return fVar1 * (1.0 / SQRT(fVar2));
  }
  return 0.0;
}



/* Entry: 10a5f0590; end: 10a5f0673;  */

void FUN_10a5f0590(long param_1,long *param_2)

{
  long *plVar1;
  
  func_0x00010a3c7a18();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bf94e8,0);
  *(char *)(param_1 + 0x218) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bf9508,0);
  *(char *)(param_1 + 0x219) = (char)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010a5f0600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x1e0))(param_2,*(undefined8 *)(param_1 + 0x220));
  return;
}



/* Entry: 10a5f0674; end: 10a5f06bb;  */

void FUN_10a5f0674(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_2 + 0x199) & 1) == 0) {
    uVar1 = 0;
    *(undefined1 *)(param_2 + 0x199) = 1;
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0x198);
  }
  *(undefined1 *)(param_2 + 0x198) = uVar1;
  return;
}



/* Entry: 10a5f06bc; end: 10a5f0937;  */

void FUN_10a5f06bc(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar9 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar9 = (long *)(param_4 + 0x20);
    }
    uVar10 = *puVar4;
    lVar11 = *plVar9;
  }
  lVar12 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar12);
  FUN_10a576124(lVar12,lVar11,uVar10);
  plVar9 = (long *)0x28;
  __Znwm();
  plVar13 = plVar9 + 1;
  *plVar13 = 0;
  *plVar9 = (long)&PTR_FUN_110c00dc0;
  plVar9[2] = 0;
  plVar9[3] = lVar12;
  plVar9[4] = (long)FUN_10a3df8cc;
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 0x30) == 0) {
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar8) {
          *plVar13 = *plVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar1 = plVar9 + 2;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *(long *)(lVar12 + 0x28) = lVar12;
      *(long **)(lVar12 + 0x30) = plVar9;
    }
    else {
      if (*(long *)(*(long *)(lVar12 + 0x30) + 8) != -1) goto LAB_10a5f0820;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar8) {
          *plVar13 = *plVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar1 = plVar9 + 2;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *(long *)(lVar12 + 0x28) = lVar12;
      *(long **)(lVar12 + 0x30) = plVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar11 = *plVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *plVar13 = lVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
LAB_10a5f0820:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar12 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar12 + 0x180) & 0xfffc;
  *(ushort *)(lVar12 + 0x180) = uVar3 | *(ushort *)(lVar12 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar12 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar9 != (long *)0x0) {
    plVar13 = plVar9 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *plVar13 = *plVar13 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lStack_50 = lVar12;
  plStack_48 = plVar9;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar13 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar11 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  uVar6 = *(undefined2 *)(param_2 + 0x218);
  uVar5 = *(undefined4 *)(*(long *)(param_2 + 0x220) + 0x40);
  param_1[1] = (long)plVar9;
  *param_1 = lVar12;
  *(undefined2 *)(lVar12 + 0x218) = uVar6;
  *(undefined4 *)(*(long *)(lVar12 + 0x220) + 0x40) = uVar5;
  return;
}



/* Entry: 10a5f0938; end: 10a5f09d3;  */

void FUN_10a5f0938(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_1 + 0x220);
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a9ef5ac(uVar5,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a5f09d4; end: 10a5f0e2b;  */

/* WARNING: Removing unreachable block (ram,0x00010a5f0cb4) */

void FUN_10a5f09d4(undefined8 *param_1,undefined8 param_2,float param_3,float param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 ****ppppuVar1;
  undefined1 **ppuVar2;
  bool bVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined1 *puStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 ***pppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  undefined8 ***pppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 ***apppuStack_118 [2];
  char cStack_101;
  undefined8 **ppuStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 ***pppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  
  uVar16 = (undefined4)((ulong)param_5 >> 0x20);
  fVar15 = (float)param_5;
  func_0x00010a2cd08c(*(undefined8 *)(param_6 + 0x178));
  fVar9 = (float)param_2;
  fVar10 = fVar15 * fVar9 + param_4 * param_3;
  fVar10 = fVar10 + fVar10;
  uVar11 = (ulong)(uint)fVar10;
  fVar10 = ABS(fVar10);
  bVar3 = false;
  bVar4 = true;
  if (ABS(((-(fVar9 * fVar9) + fVar15 * fVar15) - param_3 * param_3) + param_4 * param_4) <=
      1.1920929e-07) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar10)) {
      bVar3 = fVar10 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar10;
    }
  }
  if (!bVar4 || bVar3) {
    _atan2f(param_2,CONCAT44(uVar16,fVar15));
    uVar11 = (ulong)(uint)((float)param_2 + (float)param_2);
  }
  else {
    _atan2f();
  }
  fVar10 = param_4 * fVar15 + param_3 * fVar9;
  fVar10 = fVar10 + fVar10;
  uVar12 = (ulong)(uint)fVar10;
  fVar10 = ABS(fVar10);
  bVar3 = false;
  bVar4 = true;
  if (ABS((fVar9 * fVar9 + fVar15 * fVar15 + param_3 * -param_3) - param_4 * param_4) <=
      1.1920929e-07) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar10)) {
      bVar3 = fVar10 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar10;
    }
  }
  uVar17 = 0;
  if (bVar4 && !bVar3) {
    _atan2f();
    uVar17 = uVar12;
  }
  fVar10 = (-(fVar15 * param_3) + param_4 * fVar9) * -2.0;
  fVar9 = -1.0;
  if (-1.0 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar10 = 1.0;
  if (fVar9 <= 1.0) {
    fVar10 = fVar9;
  }
  uVar13 = (ulong)(uint)fVar10;
  _asinf(uVar13);
  FUN_10a3c829c(&pppuStack_88,param_6);
  uVar12 = uStack_80;
  if (-1 < (char)bStack_71) {
    uVar12 = (ulong)bStack_71;
  }
  FUN_10a003c90(apppuStack_118,uVar12 + 0x14,&pppuStack_130);
  ppppuVar1 = (undefined8 ****)apppuStack_118[0];
  if (-1 < cStack_101) {
    ppppuVar1 = apppuStack_118;
  }
  if (uVar12 != 0) {
    ppppuVar5 = (undefined8 ****)pppuStack_88;
    if (-1 < (char)bStack_71) {
      ppppuVar5 = &pppuStack_88;
    }
    _memmove(ppppuVar1,ppppuVar5,uVar12);
  }
  puVar8 = (undefined8 *)((long)ppppuVar1 + uVar12);
  puVar8[1] = 0x3a6e6f697461746f;
  *puVar8 = 0x52646c726f77202c;
  *(undefined4 *)(puVar8 + 2) = 0x203a5820;
  *(undefined1 *)((long)puVar8 + 0x14) = 0;
  __ZNSt3__19to_stringEf(&pppuStack_130,uVar11);
  ppppuVar1 = (undefined8 ****)pppuStack_130;
  if (-1 < (char)bStack_119) {
    uStack_128 = (ulong)bStack_119;
    ppppuVar1 = &pppuStack_130;
  }
  ppppuVar5 = apppuStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar5,ppppuVar1,uStack_128);
  ppuStack_f8 = ppppuVar5[1];
  ppuStack_100 = *ppppuVar5;
  ppuStack_f0 = ppppuVar5[2];
  ppppuVar5[1] = (undefined8 ***)0x0;
  ppppuVar5[2] = (undefined8 ***)0x0;
  *ppppuVar5 = (undefined8 ***)0x0;
  pppuVar6 = &ppuStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,&UNK_10f667c87,5);
  puStack_d8 = pppuVar6[1];
  puStack_e0 = *pppuVar6;
  puStack_d0 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  __ZNSt3__19to_stringEf(&pppuStack_148,uVar13);
  ppppuVar1 = (undefined8 ****)pppuStack_148;
  if (-1 < (char)bStack_131) {
    uStack_140 = (ulong)bStack_131;
    ppppuVar1 = &pppuStack_148;
  }
  ppuVar7 = &puStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar7,ppppuVar1,uStack_140);
  uStack_b8 = ppuVar7[1];
  uStack_c0 = *ppuVar7;
  lStack_b0 = (long)ppuVar7[2];
  ppuVar7[1] = (undefined8 *)0x0;
  ppuVar7[2] = (undefined8 *)0x0;
  *ppuVar7 = (undefined8 *)0x0;
  puVar8 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f667c8d,5);
  uStack_98 = puVar8[1];
  uStack_a0 = *puVar8;
  uStack_90 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&puStack_160,uVar17);
  ppuVar2 = (undefined1 **)puStack_160;
  if (-1 < (char)bStack_149) {
    uStack_158 = (ulong)bStack_149;
    ppuVar2 = &puStack_160;
  }
  puVar8 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppuVar2,uStack_158);
  uVar14 = *puVar8;
  param_1[1] = puVar8[1];
  *param_1 = uVar14;
  param_1[2] = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if ((char)bStack_149 < '\0') {
    __ZdlPv(puStack_160);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if ((char)bStack_131 < '\0') {
    __ZdlPv(pppuStack_148);
  }
  if ((long)puStack_d0 < 0) {
    __ZdlPv(puStack_e0);
  }
  if ((long)ppuStack_f0 < 0) {
    __ZdlPv(ppuStack_100);
  }
  if ((char)bStack_119 < '\0') {
    __ZdlPv(pppuStack_130);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(apppuStack_118[0]);
  }
  if ((char)bStack_71 < '\0') {
    __ZdlPv(pppuStack_88);
  }
  return;
}



/* Entry: 10a5f0e2c; end: 10a5f0e33;  */

/* WARNING: Removing unreachable block (ram,0x00010a5f0cb4) */

void FUN_10a5f0e2c(undefined8 *param_1,undefined8 param_2,float param_3,float param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 ****ppppuVar1;
  undefined1 **ppuVar2;
  bool bVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined1 *puStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 ***pppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  undefined8 ***pppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 ***apppuStack_118 [2];
  char cStack_101;
  undefined8 **ppuStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 ***pppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  
  uVar16 = (undefined4)((ulong)param_5 >> 0x20);
  fVar15 = (float)param_5;
  func_0x00010a2cd08c(*(undefined8 *)(param_6 + 0x168));
  fVar9 = (float)param_2;
  fVar10 = fVar15 * fVar9 + param_4 * param_3;
  fVar10 = fVar10 + fVar10;
  uVar11 = (ulong)(uint)fVar10;
  fVar10 = ABS(fVar10);
  bVar3 = false;
  bVar4 = true;
  if (ABS(((-(fVar9 * fVar9) + fVar15 * fVar15) - param_3 * param_3) + param_4 * param_4) <=
      1.1920929e-07) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar10)) {
      bVar3 = fVar10 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar10;
    }
  }
  if (!bVar4 || bVar3) {
    _atan2f(param_2,CONCAT44(uVar16,fVar15));
    uVar11 = (ulong)(uint)((float)param_2 + (float)param_2);
  }
  else {
    _atan2f();
  }
  fVar10 = param_4 * fVar15 + param_3 * fVar9;
  fVar10 = fVar10 + fVar10;
  uVar12 = (ulong)(uint)fVar10;
  fVar10 = ABS(fVar10);
  bVar3 = false;
  bVar4 = true;
  if (ABS((fVar9 * fVar9 + fVar15 * fVar15 + param_3 * -param_3) - param_4 * param_4) <=
      1.1920929e-07) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar10)) {
      bVar3 = fVar10 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar10;
    }
  }
  uVar17 = 0;
  if (bVar4 && !bVar3) {
    _atan2f();
    uVar17 = uVar12;
  }
  fVar10 = (-(fVar15 * param_3) + param_4 * fVar9) * -2.0;
  fVar9 = -1.0;
  if (-1.0 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar10 = 1.0;
  if (fVar9 <= 1.0) {
    fVar10 = fVar9;
  }
  uVar13 = (ulong)(uint)fVar10;
  _asinf(uVar13);
  FUN_10a3c829c(&pppuStack_88,param_6 + -0x10);
  uVar12 = uStack_80;
  if (-1 < (char)bStack_71) {
    uVar12 = (ulong)bStack_71;
  }
  FUN_10a003c90(apppuStack_118,uVar12 + 0x14,&pppuStack_130);
  ppppuVar1 = (undefined8 ****)apppuStack_118[0];
  if (-1 < cStack_101) {
    ppppuVar1 = apppuStack_118;
  }
  if (uVar12 != 0) {
    ppppuVar5 = (undefined8 ****)pppuStack_88;
    if (-1 < (char)bStack_71) {
      ppppuVar5 = &pppuStack_88;
    }
    _memmove(ppppuVar1,ppppuVar5,uVar12);
  }
  puVar8 = (undefined8 *)((long)ppppuVar1 + uVar12);
  puVar8[1] = 0x3a6e6f697461746f;
  *puVar8 = 0x52646c726f77202c;
  *(undefined4 *)(puVar8 + 2) = 0x203a5820;
  *(undefined1 *)((long)puVar8 + 0x14) = 0;
  __ZNSt3__19to_stringEf(&pppuStack_130,uVar11);
  ppppuVar1 = (undefined8 ****)pppuStack_130;
  if (-1 < (char)bStack_119) {
    uStack_128 = (ulong)bStack_119;
    ppppuVar1 = &pppuStack_130;
  }
  ppppuVar5 = apppuStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar5,ppppuVar1,uStack_128);
  ppuStack_f8 = ppppuVar5[1];
  ppuStack_100 = *ppppuVar5;
  ppuStack_f0 = ppppuVar5[2];
  ppppuVar5[1] = (undefined8 ***)0x0;
  ppppuVar5[2] = (undefined8 ***)0x0;
  *ppppuVar5 = (undefined8 ***)0x0;
  pppuVar6 = &ppuStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,&UNK_10f667c87,5);
  puStack_d8 = pppuVar6[1];
  puStack_e0 = *pppuVar6;
  puStack_d0 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  __ZNSt3__19to_stringEf(&pppuStack_148,uVar13);
  ppppuVar1 = (undefined8 ****)pppuStack_148;
  if (-1 < (char)bStack_131) {
    uStack_140 = (ulong)bStack_131;
    ppppuVar1 = &pppuStack_148;
  }
  ppuVar7 = &puStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar7,ppppuVar1,uStack_140);
  uStack_b8 = ppuVar7[1];
  uStack_c0 = *ppuVar7;
  lStack_b0 = (long)ppuVar7[2];
  ppuVar7[1] = (undefined8 *)0x0;
  ppuVar7[2] = (undefined8 *)0x0;
  *ppuVar7 = (undefined8 *)0x0;
  puVar8 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f667c8d,5);
  uStack_98 = puVar8[1];
  uStack_a0 = *puVar8;
  uStack_90 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&puStack_160,uVar17);
  ppuVar2 = (undefined1 **)puStack_160;
  if (-1 < (char)bStack_149) {
    uStack_158 = (ulong)bStack_149;
    ppuVar2 = &puStack_160;
  }
  puVar8 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppuVar2,uStack_158);
  uVar14 = *puVar8;
  param_1[1] = puVar8[1];
  *param_1 = uVar14;
  param_1[2] = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if ((char)bStack_149 < '\0') {
    __ZdlPv(puStack_160);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if ((char)bStack_131 < '\0') {
    __ZdlPv(pppuStack_148);
  }
  if ((long)puStack_d0 < 0) {
    __ZdlPv(puStack_e0);
  }
  if ((long)ppuStack_f0 < 0) {
    __ZdlPv(ppuStack_100);
  }
  if ((char)bStack_119 < '\0') {
    __ZdlPv(pppuStack_130);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(apppuStack_118[0]);
  }
  if ((char)bStack_71 < '\0') {
    __ZdlPv(pppuStack_88);
  }
  return;
}



/* Entry: 10a5f0e34; end: 10a5f0eaf;  */

void FUN_10a5f0e34(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x1f0 + *(long *)(*(long *)(param_1 + 0x1f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x208);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x1f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a5f0eb0; end: 10a5f0eb7;  */

void FUN_10a5f0eb0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x208);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a5f0eb8; end: 10a5f0f27;  */

void FUN_10a5f0eb8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x220);
  lVar1 = *(long *)(param_1 + 0x168);
  *(long *)(lVar2 + 0x48) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x140);
  func_0x00010a0d8ae0(lVar1);
  uVar3 = *(undefined8 *)(lVar1 + 0x54);
  *(undefined8 *)(lVar2 + 0x14) = *(undefined8 *)(lVar1 + 0x5c);
  *(undefined8 *)(lVar2 + 0xc) = uVar3;
  return;
}



/* Entry: 10a5f0f28; end: 10a5f0fef;  */

undefined1  [16] FUN_10a5f0f28(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10f662b92;
  return auVar1;
}



/* Entry: 10a5f0ff0; end: 10a5f25b7;  */

void FUN_10a5f0ff0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662b92,0x14);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bfe048;
  pppuVar2 = (undefined8 ***)&UNK_10f667746;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bfe048;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd9df0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f2598;
    FUN_10a054dac(param_1,&UNK_10f65b397,FUN_10a615390,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f2598;
    FUN_10a054dac(param_1,"isInitialized",FUN_10a6154dc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f2598;
    FUN_10a054dac(param_1,&UNK_10f65b3ab,FUN_10a6155a8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f2598;
    FUN_10a054dac(param_1,&UNK_10f65b3bb,FUN_10a6156c4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f2598;
    FUN_10a054dac(param_1,&UNK_10f667c93,FUN_10a615778,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f2598;
    FUN_10a054dac(param_1,&UNK_10f667ca4,FUN_10a615840,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f2598;
    FUN_10a054dac(param_1,&UNK_10f65b3ca,FUN_10a61592c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f2598;
    FUN_10a054dac(param_1,&UNK_10f65b3e8,FUN_10a615a94,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f2598;
    FUN_10a054dac(param_1,&UNK_10f667cb0,FUN_10a615c14,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5f2598;
    FUN_10a054dac(param_1,&UNK_10f667cc6,FUN_10a615ccc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f667cdf,FUN_10a615d7c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65b4a1,FUN_10a615e38,FUN_10a615f48);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f667cf0,FUN_10a616064,FUN_10a616180);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667cf9;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a616738(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667d0e;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a616738();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667d2d;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61693c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667d48;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61693c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667d6d;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a616b40();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667d8b;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a616b40();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f667db3;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a616d44();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667dc2;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a616d44();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f667dda;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a616d44();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667ded;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a616f28();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667dff;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a616f28();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667e1a;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617108();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667e24;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617108();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667e30;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617328();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f667e3d;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  puStack_78 = &UNK_10f667e51;
  uStack_70 = 0x38;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617328();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f667e8a,FUN_10a61761c,FUN_10a6176d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f667e9f,FUN_10a61778c,FUN_10a617848);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667eab;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a617938(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667eb7;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617938();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667ec6;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617b3c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667ed3;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617b3c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667efa;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617d10();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667f06;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617d10();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667f26;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617f14();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667f34;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a617f14();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)0x10f224f5a;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a618118();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667f4a;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a618118();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667f70;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a6182ec();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667f76;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a6182ec();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f65b32c;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a6184f0();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667f94;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a6184f0();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f65b35a;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a6186fc();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667fa1;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a6186fc();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667fab;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a618908();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667fba;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a618908();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667fc5;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a618b14();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667fd7;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a618b14();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f667fe5;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a618d20();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f667fef;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a618d20();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f667ffd,FUN_10a618f2c,FUN_10a618fec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f4a776e,FUN_10a6190e0,FUN_10a6191a0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f588924,FUN_10a619294,FUN_10a61936c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3ed2be,FUN_10a61943c,FUN_10a6194fc);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f668002;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a6195c0(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f668016;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a6195c0();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f668029;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a619798();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f66803a;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a619798();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f66804e;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a619970();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f668061;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a619970();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f668074;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a619b7c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f668084;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a619b7c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f668098;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a619d88();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f6680aa;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a619d88();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f6680c0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a619f94();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f6680d5;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a619f94();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f6680eb;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61a16c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f668102;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61a16c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f668117;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61a378();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f66812b;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61a378();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f668141,FUN_10a61a584,FUN_10a61a644);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f668157;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a61a738(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f668163;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61a738();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66816e,FUN_10a61a910,FUN_10a61a9e8);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f668178;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a61aab8(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f668186;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61aab8();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f668195;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61ac88();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f6681a9;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61ac88();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f6681be;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61ae58();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f6681d2;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61ae58();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f65b587;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61b044();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f6681e1;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = &UNK_10f667746;
  uStack_40 = 0;
  FUN_10a61b044();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65b493,FUN_10a61b214,FUN_10a61b2f0);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f6681ed;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a61b694(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f6681fd;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f667746;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a61b694();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f668210,FUN_10a61b8b8,FUN_10a61b974);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66822a,FUN_10a61ba60,FUN_10a61bb3c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    puStack_48 = *(undefined **)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662b92,0x14);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a5f2598:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5f259c);
  (*pcVar6)();
}



/* Entry: 10a5f25b8; end: 10a5f2733;  */

void FUN_10a5f25b8(undefined8 param_1)

{
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f668233;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a5f26dc(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66824d;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 0;
  FUN_10a5f2734(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f668265;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 1;
  FUN_10a5f2734(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66827a;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 2;
  FUN_10a5f2734(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a5f2734; end: 10a5f278b;  */

ulong FUN_10a5f2734(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a61bc08(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a5f278c; end: 10a5f2a47;  */

undefined8 * FUN_10a5f278c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[0xd2] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0xd5) = 0x100;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  puVar1 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110bf9930,param_2,param_3,10);
  *puVar1 = &PTR_DAT_110bf9540;
  puVar1[2] = &PTR_DAT_110bf9778;
  puVar1[7] = &PTR_FUN_110bf97d0;
  puVar1[0xd] = &PTR_FUN_110bf97f0;
  puVar1[0xd2] = &PTR_FUN_110bf98f0;
  puVar1[0x16] = &PTR_FUN_110bf9860;
  puVar1[0x17] = &PTR_FUN_110bf9890;
  puVar1[0xa0] = 0;
  puVar1[0x9f] = 0;
  puVar1[0xa2] = 0;
  puVar1[0xa1] = 0;
  puVar1[0xa4] = 0;
  puVar1[0xa3] = 0;
  puVar1[0xa5] = 0;
  puVar1[0xa6] = 0x3f00000040400000;
  puVar1[0xa7] = 0;
  *(undefined1 *)(puVar1 + 0xa8) = 0;
  *(undefined4 *)((long)puVar1 + 0x544) = 0x3f800000;
  puVar1[0xaa] = 0;
  puVar1[0xa9] = 0;
  puVar1[0xac] = 0;
  puVar1[0xab] = 0;
  puVar1[0xad] = 0x3f800000;
  puVar1[0xae] = 0x3f00000000000000;
  puVar1[0xb0] = 0;
  puVar1[0xaf] = 0;
  puVar1[0xb2] = 0;
  puVar1[0xb1] = 0;
  *(undefined4 *)(puVar1 + 0xb3) = 2;
  *(undefined2 *)((long)puVar1 + 0x59c) = 0;
  puVar1[0xb4] = 0;
  *(undefined4 *)(puVar1 + 0xb5) = 0;
  puVar1[0xb7] = 0;
  puVar1[0xb6] = 0;
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = &PTR_DAT_110bd3ea8;
  *(undefined4 *)(puVar1 + 1) = 0x3f800000;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0x3f800000;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined4 *)((long)puVar1 + 0x44) = 0x3f800000;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  param_1[0xb8] = puVar1;
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0x4396000043960000;
  *puVar1 = 0x4416000044160000;
  puVar1[3] = 0x3e4ccccd;
  puVar1[2] = 0x40a000003dcccccd;
  puVar1[6] = 0x3f80000040a00000;
  puVar1[8] = 0x400000003f800000;
  *(undefined4 *)(puVar1 + 4) = 0xbf800000;
  *(undefined4 *)(puVar1 + 5) = 0x1e;
  *(undefined1 *)((long)puVar1 + 0x2d) = 1;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  puVar1[0xb] = 0;
  puVar1[10] = 0x3f800000;
  uVar3 = NEON_fmov(0x3f800000,4);
  puVar1[0xc] = uVar3;
  param_1[0xb9] = puVar1;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0x3f800000;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0x3f800000;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xce) = 1;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  if (((param_1[0x2e] != 0) && (lVar2 = *(long *)(param_1[0x2e] + 0xa20), lVar2 != 0)) &&
     (0x7e < *(int *)(lVar2 + 0x18))) {
    *(undefined4 *)(param_1 + 0xb3) = 2;
  }
  *(undefined4 *)(param_1 + 0x9e) = 0x30;
  return param_1;
}



/* Entry: 10a5f2a48; end: 10a5f3baf;  */

void FUN_10a5f2a48(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  long *param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 *extraout_x8;
  undefined8 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined ***pppuVar20;
  int iVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined **unaff_x24;
  undefined **ppuVar24;
  code *unaff_x25;
  undefined *puVar25;
  undefined **unaff_x26;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined *puStack_2c0;
  long *plStack_2b8;
  undefined *puStack_2b0;
  long *plStack_2a8;
  undefined *puStack_2a0;
  long *plStack_298;
  undefined *puStack_290;
  long *plStack_288;
  undefined *puStack_280;
  long *plStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  long lStack_258;
  long lStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined **ppuStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  long lStack_220;
  long *plStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined **ppuStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  code *pcStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 *puStack_130;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined1 uStack_b3;
  undefined2 uStack_b2;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a42241c();
  plVar10 = param_5;
  (**(code **)(*param_5 + 0xd0))(param_5,&PTR_DAT_110bf9968,0x10);
  *(uint *)(param_4 + 0x9e) = (uint)plVar10;
  plVar9 = param_5;
  uStack_170 = param_4;
  puStack_f0 = param_4;
  if ((uint)plVar10 < 0x20) {
    pcStack_100 = FUN_10a61d554;
    ppuStack_f8 = &PTR_FUN_110c00eb8;
    FUN_10a2cd220(param_5,&PTR_DAT_110bf99a8,&pcStack_100,0);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110bf99c8,0);
    *(int *)(param_4 + 0xb3) = (int)plVar10;
    uVar26 = *(undefined4 *)(param_4 + 0xa6);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf99e8);
    *(undefined4 *)(param_4 + 0xa6) = uVar26;
    uVar26 = *(undefined4 *)((long)param_4 + 0x534);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9a08);
    *(undefined4 *)((long)param_4 + 0x534) = uVar26;
    uVar26 = *(undefined4 *)(param_4 + 0xa7);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9a28);
    *(undefined4 *)(param_4 + 0xa7) = uVar26;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0xd0))
              (param_5,&PTR_DAT_110bf9a48,*(undefined4 *)((long)param_4 + 0x53c));
    *(int *)((long)param_4 + 0x53c) = (int)plVar10;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bf9a68,*(undefined1 *)(param_4 + 0xa8));
    *(char *)(param_4 + 0xa8) = (char)plVar10;
    uVar26 = *(undefined4 *)((long)param_4 + 0x544);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9a88);
    *(undefined4 *)((long)param_4 + 0x544) = uVar26;
    FUN_10a498de4(param_4 + 0xa1);
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110bf9aa8);
    uVar26 = (undefined4)param_2;
    if ((int)plVar10 != 0) {
      (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110bf9aa8);
      plVar10 = param_5;
      (**(code **)(*param_5 + 0x208))();
      uVar26 = (undefined4)param_2;
      if ((int)plVar10 != 0) {
        iVar21 = 0;
        unaff_x25 = FUN_10a61d5f4;
        unaff_x26 = &PTR_FUN_110c00ed0;
        unaff_x24 = &PTR_DAT_110bf9ac8;
        do {
          (**(code **)(*param_5 + 0x218))(param_5,iVar21);
          pcStack_a8 = FUN_10a61d5f4;
          ppuStack_a0 = &PTR_FUN_110c00ed0;
          puStack_98 = param_4;
          FUN_10a498e2c(param_5,&PTR_DAT_110bf9ac8,&pcStack_a8,0);
          (*(code *)*ppuStack_a0)(&ppuStack_a0);
          (**(code **)(*param_5 + 0x220))(param_5);
          uVar26 = (undefined4)param_2;
          iVar21 = iVar21 + 1;
        } while ((int)plVar10 != iVar21);
      }
      (**(code **)(*param_5 + 0x220))(param_5);
    }
    pcStack_140 = FUN_10a61d6b8;
    ppuStack_138 = &PTR_FUN_110c00ee8;
    puStack_130 = param_4;
    FUN_10a02daf4(param_5,&PTR_DAT_110bf9ae8,&pcStack_140,0);
    (*(code *)*ppuStack_138)(&ppuStack_138);
    pcStack_180 = FUN_10a61d774;
    ppuStack_178 = &PTR_FUN_110c00f00;
    FUN_10a02daf4(param_5,&PTR_DAT_110bf9b08,&pcStack_180,0);
    (*(code *)*ppuStack_178)(&ppuStack_178);
    uVar27 = *(undefined4 *)(param_4 + 0xad);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9b28);
    *(undefined4 *)(param_4 + 0xad) = uVar27;
    uVar27 = *(undefined4 *)((long)param_4 + 0x56c);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9b48);
    *(undefined4 *)((long)param_4 + 0x56c) = uVar27;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0xd0))(param_5,&PTR_DAT_110bf9b68,*(undefined4 *)(param_4 + 0xae));
    *(int *)(param_4 + 0xae) = (int)plVar10;
    uVar27 = *(undefined4 *)((long)param_4 + 0x574);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9b88);
    *(undefined4 *)((long)param_4 + 0x574) = uVar27;
    fVar28 = *(float *)(param_4 + 0xaf);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9ba8);
    *(float *)(param_4 + 0xaf) = fVar28;
    if (*(int *)(*(long *)(param_4[0x2e] + 0xa20) + 0x18) < 0x79) {
      uVar26 = 0xbf800000;
      *(float *)(param_4 + 0xaf) = fVar28 + -1.0;
    }
    plVar10 = param_5;
    (**(code **)(*param_5 + 0xd0))
              (param_5,&PTR_DAT_110bf9bc8,*(undefined4 *)((long)param_4 + 0x57c));
    *(int *)((long)param_4 + 0x57c) = (int)plVar10;
    uVar27 = *(undefined4 *)(param_4 + 0xb0);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9be8);
    *(undefined4 *)(param_4 + 0xb0) = uVar27;
    puVar18 = (undefined4 *)param_4[0xb9];
    uVar27 = *puVar18;
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9c08);
    plVar10 = param_4 + 0xb9;
    *puVar18 = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 4);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9c28);
    *(undefined4 *)(lVar19 + 4) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 8);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9c48);
    *(undefined4 *)(lVar19 + 8) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0xc);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9c68);
    *(undefined4 *)(lVar19 + 0xc) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x10);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9c88);
    *(undefined4 *)(lVar19 + 0x10) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x14);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110c00968);
    *(undefined4 *)(lVar19 + 0x14) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x18);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9ca8);
    *(undefined4 *)(lVar19 + 0x18) = uVar27;
    lVar22 = *plVar10;
    (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110bf9cc8,(undefined4 *)(lVar22 + 0x1c));
    *(undefined4 *)(lVar22 + 0x1c) = uVar27;
    *(undefined4 *)(lVar22 + 0x20) = uVar26;
    *(undefined4 *)(lVar22 + 0x24) = param_3;
    lVar19 = *plVar10;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110bf9ce8,*(undefined4 *)(lVar19 + 0x28));
    *(undefined4 *)(lVar19 + 0x28) = (int)plVar10;
    if (*(int *)(*(long *)(param_4[0x2e] + 0xa20) + 0x18) < 99) {
      plVar10 = param_5;
      (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110bf9988,2);
      lVar19 = param_4[0xb9];
      *(int *)(lVar19 + 0x28) = (int)plVar10 * 0xf;
      *(float *)(lVar19 + 0x14) = *(float *)(lVar19 + 0x14) + *(float *)(lVar19 + 0x14);
    }
    else {
      lVar19 = param_4[0xb9];
    }
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bf9d08,*(undefined1 *)(lVar19 + 0x2c));
    *(undefined1 *)(lVar19 + 0x2c) = (char)plVar10;
    lVar19 = param_4[0xb9];
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bf9d28,*(undefined1 *)(lVar19 + 0x2d));
    plVar10 = param_4 + 0xb9;
    *(undefined1 *)(lVar19 + 0x2d) = (char)plVar8;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x30);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9d48);
    *(undefined4 *)(lVar19 + 0x30) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x34);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9d68);
    *(undefined4 *)(lVar19 + 0x34) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x38);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9d88);
    *(undefined4 *)(lVar19 + 0x38) = uVar27;
    lVar19 = *plVar10;
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bf9da8,*(undefined1 *)(lVar19 + 0x3c));
    *(undefined1 *)(lVar19 + 0x3c) = (char)plVar8;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x40);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9dc8);
    *(undefined4 *)(lVar19 + 0x40) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x44);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9de8);
    *(undefined4 *)(lVar19 + 0x44) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x48);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9e08);
    *(undefined4 *)(lVar19 + 0x48) = uVar27;
    lVar19 = *plVar10;
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bf9e28,*(undefined1 *)(lVar19 + 0x4c));
    *(undefined1 *)(lVar19 + 0x4c) = (char)plVar8;
    lVar19 = *plVar10;
    (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110bf9e48,(undefined4 *)(lVar19 + 0x50));
    *(undefined4 *)(lVar19 + 0x50) = uVar27;
    *(undefined4 *)(lVar19 + 0x54) = uVar26;
    *(undefined4 *)(lVar19 + 0x58) = param_3;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x58))
              (param_5,&PTR_DAT_110bf9e68,*(undefined1 *)((long)param_4 + 0x584));
    *(char *)((long)param_4 + 0x584) = (char)plVar10;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x58))
              (param_5,&PTR_DAT_110bf9e88,*(undefined1 *)((long)param_4 + 0x585));
    *(char *)((long)param_4 + 0x585) = (char)plVar10;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bf9ea8,0);
    if ((uint)*(byte *)((long)param_4 + 0x586) != (uint)plVar9) {
      *(undefined2 *)((long)param_4 + 0x59c) = 0;
      FUN_10a5f98a4(param_4 + 0xb6);
    }
    *(char *)((long)param_4 + 0x586) = (char)plVar9;
    ppuVar24 = &PTR_DAT_110bf9ec8;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x58))
              (param_5,&PTR_DAT_110bf9ec8,*(undefined1 *)((long)param_4 + 0x587));
    uVar7 = SUB81(plVar10,0);
  }
  else {
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110bf9ee8);
    if ((int)plVar10 == 0) {
      pppuVar20 = &ppuStack_138;
      pcStack_140 = FUN_10a61db10;
      ppuStack_138 = &PTR_FUN_110c00f48;
      pcStack_100 = FUN_10a61db10;
      ppuStack_f8 = &PTR_FUN_110c00f48;
      uStack_b0 = CONCAT17(0xd,(undefined7)uStack_b0);
      uStack_c0 = 0x4472696168;
      uStack_bb = 0x617461;
      uStack_b8 = 0x7465737341;
      uStack_b3 = 0;
      pcStack_a8 = FUN_10a61d8d0;
      ppuStack_a0 = &PTR_FUN_110c00f30;
      puVar14 = (undefined8 *)0x58;
      puStack_130 = param_4;
      __Znwm();
      *puVar14 = FUN_10a61db10;
      puVar14[1] = &PTR_FUN_110c00f48;
      puVar14[2] = param_4;
      puVar14[9] = CONCAT26(uStack_b2,CONCAT15(uStack_b3,uStack_b8));
      puVar14[8] = CONCAT35(uStack_bb,uStack_c0);
      puVar14[10] = uStack_b0;
      uStack_c0 = 0;
      uStack_bb = 0;
      uStack_b8 = 0;
      uStack_b3 = 0;
      uStack_b2 = 0;
      uStack_b0 = 0;
      puStack_98 = puVar14;
      func_0x000107c2b054(&pcStack_180,&UNK_10f667746);
      (**(code **)(*param_5 + 0x250))(param_5,&PTR_DAT_110bf9f08,&pcStack_a8,0,&pcStack_180);
      if (uStack_170._7_1_ < '\0') {
        __ZdlPv(pcStack_180);
      }
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      if (uStack_b0 < 0) {
        __ZdlPv(CONCAT35(uStack_bb,uStack_c0));
      }
      (*(code *)*ppuStack_f8)(&ppuStack_f8);
      unaff_x24 = (undefined **)FUN_10a61db10;
      unaff_x25 = (code *)&PTR_FUN_110c00f48;
    }
    else {
      pppuVar20 = &ppuStack_f8;
      pcStack_100 = FUN_10a61d830;
      ppuStack_f8 = &PTR_FUN_110c00f18;
      FUN_10a2cd220(param_5,&PTR_DAT_110bf9ee8,&pcStack_100,0);
    }
    (*(code *)**pppuVar20)(pppuVar20);
    uVar26 = *(undefined4 *)(param_4 + 0xa6);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9f28);
    *(undefined4 *)(param_4 + 0xa6) = uVar26;
    uVar26 = *(undefined4 *)((long)param_4 + 0x534);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9f48);
    *(undefined4 *)((long)param_4 + 0x534) = uVar26;
    uVar26 = *(undefined4 *)(param_4 + 0xa7);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9f68);
    *(undefined4 *)(param_4 + 0xa7) = uVar26;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0xd0))
              (param_5,&PTR_DAT_110bf9f88,*(undefined4 *)((long)param_4 + 0x53c));
    *(int *)((long)param_4 + 0x53c) = (int)plVar10;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bf9fa8,*(undefined1 *)(param_4 + 0xa8));
    *(char *)(param_4 + 0xa8) = (char)plVar10;
    uVar26 = *(undefined4 *)((long)param_4 + 0x544);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bf9fc8);
    *(undefined4 *)((long)param_4 + 0x544) = uVar26;
    FUN_10a498de4(param_4 + 0xa1);
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110bf9fe8);
    uVar26 = (undefined4)param_2;
    if ((int)plVar10 != 0) {
      (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110bf9fe8);
      plVar10 = param_5;
      (**(code **)(*param_5 + 0x208))();
      uVar26 = (undefined4)param_2;
      if ((int)plVar10 != 0) {
        iVar21 = 0;
        unaff_x25 = FUN_10a61dbd0;
        unaff_x26 = &PTR_FUN_110c00f60;
        unaff_x24 = &PTR_DAT_110bfa008;
        do {
          (**(code **)(*param_5 + 0x218))(param_5,iVar21);
          pcStack_a8 = FUN_10a61dbd0;
          ppuStack_a0 = &PTR_FUN_110c00f60;
          puStack_98 = param_4;
          FUN_10a498e2c(param_5,&PTR_DAT_110bfa008,&pcStack_a8,0);
          (*(code *)*ppuStack_a0)(&ppuStack_a0);
          (**(code **)(*param_5 + 0x220))(param_5);
          uVar26 = (undefined4)param_2;
          iVar21 = iVar21 + 1;
        } while ((int)plVar10 != iVar21);
      }
      (**(code **)(*param_5 + 0x220))(param_5);
    }
    pcStack_180 = FUN_10a61dc94;
    ppuStack_178 = &PTR_FUN_110c00f78;
    FUN_10a02daf4(param_5,&PTR_DAT_110bfa028,&pcStack_180,0);
    (*(code *)*ppuStack_178)(&ppuStack_178);
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110bfa048);
    if ((int)plVar10 != 0) {
      pcStack_1c0 = FUN_10a61dd50;
      ppuStack_1b8 = &PTR_FUN_110c00f90;
      puStack_1b0 = param_4;
      FUN_10a02daf4(param_5,&PTR_DAT_110bfa048,&pcStack_1c0,0);
      (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
    }
    uVar27 = *(undefined4 *)(param_4 + 0xad);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa068);
    *(undefined4 *)(param_4 + 0xad) = uVar27;
    uVar27 = *(undefined4 *)((long)param_4 + 0x56c);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa088);
    *(undefined4 *)((long)param_4 + 0x56c) = uVar27;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0xd0))(param_5,&PTR_DAT_110bfa0a8,*(undefined4 *)(param_4 + 0xae));
    *(int *)(param_4 + 0xae) = (int)plVar10;
    uVar27 = *(undefined4 *)((long)param_4 + 0x574);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa0c8);
    *(undefined4 *)((long)param_4 + 0x574) = uVar27;
    uVar27 = *(undefined4 *)(param_4 + 0xaf);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa0e8);
    *(undefined4 *)(param_4 + 0xaf) = uVar27;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0xd0))
              (param_5,&PTR_DAT_110bfa108,*(undefined4 *)((long)param_4 + 0x57c));
    *(int *)((long)param_4 + 0x57c) = (int)plVar10;
    uVar27 = *(undefined4 *)(param_4 + 0xb0);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa128);
    *(undefined4 *)(param_4 + 0xb0) = uVar27;
    puVar18 = (undefined4 *)param_4[0xb9];
    uVar27 = *puVar18;
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa148);
    plVar10 = param_4 + 0xb9;
    *puVar18 = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 4);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa168);
    *(undefined4 *)(lVar19 + 4) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 8);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa188);
    *(undefined4 *)(lVar19 + 8) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0xc);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa1a8);
    *(undefined4 *)(lVar19 + 0xc) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x10);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa1c8);
    *(undefined4 *)(lVar19 + 0x10) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x14);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110c00988);
    *(undefined4 *)(lVar19 + 0x14) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x18);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa1e8);
    *(undefined4 *)(lVar19 + 0x18) = uVar27;
    lVar22 = *plVar10;
    (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110bfa208,(undefined4 *)(lVar22 + 0x1c));
    *(undefined4 *)(lVar22 + 0x1c) = uVar27;
    *(undefined4 *)(lVar22 + 0x20) = uVar26;
    *(undefined4 *)(lVar22 + 0x24) = param_3;
    lVar19 = *plVar10;
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110bfa228,*(undefined4 *)(lVar19 + 0x28));
    *(undefined4 *)(lVar19 + 0x28) = (int)plVar8;
    lVar19 = *plVar10;
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bfa248,*(undefined1 *)(lVar19 + 0x2c));
    *(undefined1 *)(lVar19 + 0x2c) = (char)plVar8;
    lVar19 = *plVar10;
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bfa268,*(undefined1 *)(lVar19 + 0x2d));
    *(undefined1 *)(lVar19 + 0x2d) = (char)plVar8;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x30);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa288);
    *(undefined4 *)(lVar19 + 0x30) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x34);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa2a8);
    *(undefined4 *)(lVar19 + 0x34) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x38);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa2c8);
    *(undefined4 *)(lVar19 + 0x38) = uVar27;
    lVar19 = *plVar10;
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bfa2e8,*(undefined1 *)(lVar19 + 0x3c));
    *(undefined1 *)(lVar19 + 0x3c) = (char)plVar8;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x40);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa308);
    *(undefined4 *)(lVar19 + 0x40) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x44);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa328);
    *(undefined4 *)(lVar19 + 0x44) = uVar27;
    lVar19 = *plVar10;
    uVar27 = *(undefined4 *)(lVar19 + 0x48);
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bfa348);
    *(undefined4 *)(lVar19 + 0x48) = uVar27;
    lVar19 = *plVar10;
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bfa368,*(undefined1 *)(lVar19 + 0x4c));
    *(undefined1 *)(lVar19 + 0x4c) = (char)plVar8;
    lVar19 = *plVar10;
    (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110bfa388,(undefined4 *)(lVar19 + 0x50));
    *(undefined4 *)(lVar19 + 0x50) = uVar27;
    *(undefined4 *)(lVar19 + 0x54) = uVar26;
    *(undefined4 *)(lVar19 + 0x58) = param_3;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x58))
              (param_5,&PTR_DAT_110bfa3a8,*(undefined1 *)((long)param_4 + 0x584));
    *(char *)((long)param_4 + 0x584) = (char)plVar10;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x58))
              (param_5,&PTR_DAT_110bfa3c8,*(undefined1 *)((long)param_4 + 0x585));
    *(char *)((long)param_4 + 0x585) = (char)plVar10;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bfa3e8,0);
    if ((uint)*(byte *)((long)param_4 + 0x586) != (uint)plVar9) {
      *(undefined2 *)((long)param_4 + 0x59c) = 0;
      FUN_10a5f98a4(param_4 + 0xb6);
    }
    *(char *)((long)param_4 + 0x586) = (char)plVar9;
    ppuVar24 = &PTR_DAT_110bfa408;
    plVar10 = param_5;
    (**(code **)(*param_5 + 0x58))
              (param_5,&PTR_DAT_110bfa408,*(undefined1 *)((long)param_4 + 0x587));
    uVar7 = SUB81(plVar10,0);
  }
  *(undefined1 *)((long)param_4 + 0x587) = uVar7;
  uVar16 = (ulong)*(byte *)(param_4[0x2e] + 0x29);
  if (5 < uVar16) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5f3b14);
    (*pcVar6)();
  }
  plVar10 = *(long **)(param_4[0x2e] + uVar16 * 8 + 0x30);
  (**(code **)(*plVar10 + 0x18))();
  if (((int)plVar10 == 0) || (*(char *)((long)param_4 + 0x586) == '\x01')) {
    *(undefined1 *)((long)param_4 + 0x59d) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  (**(code **)*plVar9)(plVar9);
  plVar8 = plVar10;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10a5f3bb0;
  ppuStack_200 = unaff_x24;
  lStack_1f8 = lVar22;
  lStack_1f0 = lVar19;
  plStack_1e8 = plVar9;
  plStack_1e0 = param_5;
  plStack_1d8 = plVar10;
  puStack_1d0 = &stack0xfffffffffffffff0;
  FUN_10a422a34();
  ppuVar12 = &PTR_DAT_110bf9968;
  lVar13 = 0x30;
  (**(code **)(*ppuVar24 + 0x50))(ppuVar24,&PTR_DAT_110bf9968);
  puStack_210 = &UNK_10f668699;
  uStack_208 = 0x4d;
  if ((plVar8 != (long *)0x0) && (ppuVar24 != (undefined **)0x0)) {
    puStack_210 = &UNK_10f662ba7;
    uStack_208 = 0x13;
    plStack_218 = (long *)plVar8[0xa5];
    lStack_220 = plVar8[0xa4];
    if (plVar8[0xa5] != 0) {
      plVar10 = (long *)(plVar8[0xa5] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    (**(code **)(*ppuVar24 + 0x108))(ppuVar24,&PTR_DAT_110bf9f08,&lStack_220,&puStack_210);
    plVar10 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      plVar9 = plStack_218 + 1;
      do {
        lVar19 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    (**(code **)(*ppuVar24 + 0x60))((int)plVar8[0xa6],ppuVar24,&PTR_DAT_110bf9f28);
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)((long)plVar8 + 0x534),ppuVar24,&PTR_DAT_110bf9f48);
    (**(code **)(*ppuVar24 + 0x60))((int)plVar8[0xa7],ppuVar24,&PTR_DAT_110bf9f68);
    (**(code **)(*ppuVar24 + 0x50))
              (ppuVar24,&PTR_DAT_110bf9f88,*(undefined4 *)((long)plVar8 + 0x53c));
    (**(code **)(*ppuVar24 + 0x70))(ppuVar24,&PTR_DAT_110bf9fa8,(char)plVar8[0xa8]);
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)((long)plVar8 + 0x544),ppuVar24,&PTR_DAT_110bf9fc8);
    (**(code **)(*ppuVar24 + 0x18))(ppuVar24,&PTR_DAT_110bf9fe8);
    lVar22 = plVar8[0xa2];
    for (lVar19 = plVar8[0xa1]; lVar19 != lVar22; lVar19 = lVar19 + 0x10) {
      (**(code **)(*ppuVar24 + 0x10))(ppuVar24);
      FUN_10a4994cc(ppuVar24,&PTR_DAT_110bfa008,lVar19,&UNK_10f65c897,0x19);
      (**(code **)(*ppuVar24 + 0x20))(ppuVar24);
    }
    (**(code **)(*ppuVar24 + 0x20))(ppuVar24);
    FUN_10a02e230(ppuVar24,&PTR_DAT_110bfa028,plVar8 + 0xa9,&UNK_10f633eab,0xe);
    (**(code **)(*ppuVar24 + 0x60))((int)plVar8[0xad],ppuVar24,&PTR_DAT_110bfa068);
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)((long)plVar8 + 0x56c),ppuVar24,&PTR_DAT_110bfa088);
    (**(code **)(*ppuVar24 + 0x50))(ppuVar24,&PTR_DAT_110bfa0a8,(int)plVar8[0xae]);
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)((long)plVar8 + 0x574),ppuVar24,&PTR_DAT_110bfa0c8);
    (**(code **)(*ppuVar24 + 0x60))((int)plVar8[0xaf],ppuVar24,&PTR_DAT_110bfa0e8);
    (**(code **)(*ppuVar24 + 0x50))
              (ppuVar24,&PTR_DAT_110bfa108,*(undefined4 *)((long)plVar8 + 0x57c));
    (**(code **)(*ppuVar24 + 0x60))((int)plVar8[0xb0],ppuVar24,&PTR_DAT_110bfa128);
    (**(code **)(*ppuVar24 + 0x60))(*(undefined4 *)plVar8[0xb9],ppuVar24,&PTR_DAT_110bfa148);
    (**(code **)(*ppuVar24 + 0x60))(*(undefined4 *)(plVar8[0xb9] + 4),ppuVar24,&PTR_DAT_110bfa168);
    (**(code **)(*ppuVar24 + 0x60))(*(undefined4 *)(plVar8[0xb9] + 8),ppuVar24,&PTR_DAT_110bfa188);
    (**(code **)(*ppuVar24 + 0x60))(*(undefined4 *)(plVar8[0xb9] + 0xc),ppuVar24,&PTR_DAT_110bfa1a8)
    ;
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)(plVar8[0xb9] + 0x10),ppuVar24,&PTR_DAT_110bfa1c8);
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)(plVar8[0xb9] + 0x14),ppuVar24,&PTR_DAT_110c00988);
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)(plVar8[0xb9] + 0x18),ppuVar24,&PTR_DAT_110bfa1e8);
    (**(code **)(*ppuVar24 + 0x80))(ppuVar24,&PTR_DAT_110bfa208,plVar8[0xb9] + 0x1c);
    (**(code **)(*ppuVar24 + 0x40))
              (ppuVar24,&PTR_DAT_110bfa228,*(undefined4 *)(plVar8[0xb9] + 0x28));
    (**(code **)(*ppuVar24 + 0x70))
              (ppuVar24,&PTR_DAT_110bfa248,*(undefined1 *)(plVar8[0xb9] + 0x2c));
    (**(code **)(*ppuVar24 + 0x70))
              (ppuVar24,&PTR_DAT_110bfa268,*(undefined1 *)(plVar8[0xb9] + 0x2d));
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)(plVar8[0xb9] + 0x30),ppuVar24,&PTR_DAT_110bfa288);
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)(plVar8[0xb9] + 0x34),ppuVar24,&PTR_DAT_110bfa2a8);
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)(plVar8[0xb9] + 0x38),ppuVar24,&PTR_DAT_110bfa2c8);
    (**(code **)(*ppuVar24 + 0x70))
              (ppuVar24,&PTR_DAT_110bfa2e8,*(undefined1 *)(plVar8[0xb9] + 0x3c));
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)(plVar8[0xb9] + 0x40),ppuVar24,&PTR_DAT_110bfa308);
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)(plVar8[0xb9] + 0x44),ppuVar24,&PTR_DAT_110bfa328);
    (**(code **)(*ppuVar24 + 0x60))
              (*(undefined4 *)(plVar8[0xb9] + 0x48),ppuVar24,&PTR_DAT_110bfa348);
    (**(code **)(*ppuVar24 + 0x70))
              (ppuVar24,&PTR_DAT_110bfa368,*(undefined1 *)(plVar8[0xb9] + 0x4c));
    (**(code **)(*ppuVar24 + 0x80))(ppuVar24,&PTR_DAT_110bfa388,plVar8[0xb9] + 0x50);
    (**(code **)(*ppuVar24 + 0x70))
              (ppuVar24,&PTR_DAT_110bfa3a8,*(undefined1 *)((long)plVar8 + 0x584));
    (**(code **)(*ppuVar24 + 0x70))
              (ppuVar24,&PTR_DAT_110bfa3c8,*(undefined1 *)((long)plVar8 + 0x585));
    (**(code **)(*ppuVar24 + 0x70))
              (ppuVar24,&PTR_DAT_110bfa3e8,*(undefined1 *)((long)plVar8 + 0x586));
                    /* WARNING: Could not recover jumptable at 0x00010a5f41ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar24 + 0x70))
              (ppuVar24,&PTR_DAT_110bfa408,*(undefined1 *)((long)plVar8 + 0x587));
    return;
  }
  ppuVar24 = &puStack_210;
  FUN_10a0edfc4();
  func_0x00010a052384(&lStack_220);
  ppuVar11 = ppuVar24;
  __Unwind_Resume();
  pcStack_228 = FUN_10a5f41cc;
  ppuStack_270 = unaff_x26;
  ppuStack_268 = (undefined **)unaff_x25;
  ppuStack_260 = unaff_x24;
  lStack_258 = lVar22;
  lStack_250 = lVar19;
  plStack_248 = plVar9;
  plStack_240 = plVar8;
  ppuStack_238 = ppuVar24;
  ppuStack_230 = &puStack_1d0;
  if (lVar13 == 0) {
    ppuVar24 = ppuVar11;
    ppuVar23 = ppuVar12;
    func_0x00010a0fda30();
  }
  else {
    plStack_278 = (long *)ppuVar11[9];
    puStack_280 = ppuVar11[8];
    lVar19 = lVar13 + 0x88;
    func_0x00010a35bf90(lVar19,&puStack_280);
    puVar14 = (undefined8 *)((ulong)&puStack_280 | 8);
    ppuVar24 = &puStack_280;
    if (lVar19 != 0) {
      puVar14 = (undefined8 *)(lVar19 + 0x28);
      ppuVar24 = (undefined **)(lVar19 + 0x20);
    }
    ppuVar23 = (undefined **)*puVar14;
    ppuVar24 = (undefined **)*ppuVar24;
  }
  puVar25 = ppuVar11[0x2e];
  FUN_10a3dd220(puVar25);
  FUN_10a5771f8(puVar25,ppuVar24,ppuVar23);
  plVar10 = (long *)0x28;
  puStack_290 = puVar25;
  __Znwm();
  plVar9 = plVar10 + 1;
  *plVar9 = 0;
  *plVar10 = (long)&PTR_FUN_110c00e60;
  plVar10[2] = 0;
  plVar10[3] = (long)puVar25;
  plVar10[4] = (long)FUN_10a3df8cc;
  plStack_288 = plVar10;
  if (puVar25 != (undefined *)0x0) {
    if (*(long *)(puVar25 + 0x30) == 0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar8 = plVar10 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined **)(puVar25 + 0x28) = puVar25;
      *(long **)(puVar25 + 0x30) = plVar10;
    }
    else {
      if (*(long *)(*(long *)(puVar25 + 0x30) + 8) != -1) goto LAB_10a5f4338;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar8 = plVar10 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined **)(puVar25 + 0x28) = puVar25;
      *(long **)(puVar25 + 0x30) = plVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar19 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
LAB_10a5f4338:
  puVar25 = puStack_290;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puStack_290 + 0x150,ppuVar11 + 0x2a);
  uVar1 = (*(ushort *)(ppuVar11 + 0x30) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(puVar25 + 0x180) & 0xfffc;
  *(ushort *)(puVar25 + 0x180) = uVar2 | *(ushort *)(puVar25 + 0x180) & 1 | uVar1;
  *(ushort *)(puVar25 + 0x180) = uVar2 | uVar1 | *(ushort *)(ppuVar11 + 0x30) & 1;
  puStack_280 = puVar25;
  plStack_278 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    plVar10 = plStack_288 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a3c7ce8(ppuVar12,&puStack_280);
  plVar10 = plStack_278;
  if (plStack_278 != (long *)0x0) {
    plVar9 = plStack_278 + 1;
    do {
      lVar19 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  puVar25 = puStack_290;
  ppuVar24 = ppuVar11;
  (**(code **)(*ppuVar11 + 0x128))();
  puVar25[0x20c] = 0;
  *(int *)(puVar25 + 0x210) = (int)ppuVar24;
  FUN_10a422d34(ppuVar11,puVar25,lVar13);
  uVar3 = *(uint *)(ppuVar11 + 0x9e);
  *(uint *)(puVar25 + 0x4f0) = uVar3;
  if (uVar3 < 0x30) {
    FUN_10a5f489c(&puStack_280,ppuVar11);
    FUN_10a5f4760(puVar25,&puStack_280);
    if (plStack_278 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    puStack_2a0 = ppuVar11[0xab];
    plStack_298 = (long *)ppuVar11[0xac];
    if (plStack_298 != (long *)0x0) {
      plVar10 = plStack_298 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a5f4934(puVar25,&puStack_2a0);
    if (plStack_298 == (long *)0x0) goto LAB_10a5f44f4;
    plVar10 = plStack_298 + 1;
    do {
      lVar19 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_298;
    } while (cVar4 != '\0');
  }
  else {
    puStack_2b0 = ppuVar11[0xa4];
    plStack_2a8 = (long *)ppuVar11[0xa5];
    if (plStack_2a8 != (long *)0x0) {
      plVar10 = plStack_2a8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(undefined **)(puVar25 + 0x520) != puStack_2b0) {
      func_0x00010a5f96f4(puVar25 + 0x520,&puStack_2b0);
      *(undefined2 *)(puVar25 + 0x59c) = 0;
    }
    if (plStack_2a8 == (long *)0x0) goto LAB_10a5f44f4;
    plVar10 = plStack_2a8 + 1;
    do {
      lVar19 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_2a8;
    } while (cVar4 != '\0');
  }
  if (lVar19 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10a5f44f4:
  puVar25 = puStack_290;
  FUN_10a5f4a20(puStack_290,*(undefined4 *)(ppuVar11 + 0xb3));
  *(undefined **)(puVar25 + 0x530) = ppuVar11[0xa6];
  *(undefined4 *)(puVar25 + 0x538) = *(undefined4 *)(ppuVar11 + 0xa7);
  if (*(int *)(puVar25 + 0x53c) != *(int *)((long)ppuVar11 + 0x53c)) {
    *(int *)(puVar25 + 0x53c) = *(int *)((long)ppuVar11 + 0x53c);
    *(undefined2 *)(puVar25 + 0x59c) = 0;
  }
  if (puVar25[0x540] != *(char *)(ppuVar11 + 0xa8)) {
    puVar25[0x540] = *(char *)(ppuVar11 + 0xa8);
    *(undefined2 *)(puVar25 + 0x59c) = 0;
  }
  if (1e-06 <= ABS(*(float *)(puVar25 + 0x544) - *(float *)((long)ppuVar11 + 0x544))) {
    *(float *)(puVar25 + 0x544) = *(float *)((long)ppuVar11 + 0x544);
    *(undefined2 *)(puVar25 + 0x59c) = 0;
  }
  puStack_2c0 = ppuVar11[0xa9];
  plStack_2b8 = (long *)ppuVar11[0xaa];
  if (plStack_2b8 != (long *)0x0) {
    plVar10 = plStack_2b8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a5f4a70(puVar25,&puStack_2c0);
  plVar10 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    plVar9 = plStack_2b8 + 1;
    do {
      lVar19 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  puVar25 = puStack_290;
  *(undefined **)(puStack_290 + 0x568) = ppuVar11[0xad];
  *(undefined4 *)(puStack_290 + 0x570) = *(undefined4 *)(ppuVar11 + 0xae);
  *(undefined4 *)(puStack_290 + 0x574) = *(undefined4 *)((long)ppuVar11 + 0x574);
  *(undefined4 *)(puStack_290 + 0x578) = *(undefined4 *)(ppuVar11 + 0xaf);
  *(undefined4 *)(puStack_290 + 0x57c) = *(undefined4 *)((long)ppuVar11 + 0x57c);
  *(undefined4 *)(puStack_290 + 0x580) = *(undefined4 *)(ppuVar11 + 0xb0);
  puVar14 = (undefined8 *)ppuVar11[0xb9];
  puVar17 = *(undefined8 **)(puStack_290 + 0x5c8);
  uVar29 = *puVar14;
  puVar17[1] = puVar14[1];
  *puVar17 = uVar29;
  puVar17[2] = puVar14[2];
  *(undefined4 *)(puVar17 + 3) = *(undefined4 *)(puVar14 + 3);
  uVar26 = *(undefined4 *)((long)puVar14 + 0x24);
  *(undefined8 *)((long)puVar17 + 0x1c) = *(undefined8 *)((long)puVar14 + 0x1c);
  *(undefined4 *)((long)puVar17 + 0x24) = uVar26;
  puVar15 = ppuVar11[0xb9];
  lVar19 = *(long *)(puStack_290 + 0x5c8);
  *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)(puVar15 + 0x28);
  *(undefined2 *)(lVar19 + 0x2c) = *(undefined2 *)(puVar15 + 0x2c);
  *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)(puVar15 + 0x30);
  *(undefined4 *)(lVar19 + 0x38) = *(undefined4 *)(puVar15 + 0x38);
  *(undefined *)(lVar19 + 0x3c) = puVar15[0x3c];
  *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)(puVar15 + 0x40);
  *(undefined4 *)(lVar19 + 0x48) = *(undefined4 *)(puVar15 + 0x48);
  *(undefined *)(lVar19 + 0x4c) = puVar15[0x4c];
  uVar26 = *(undefined4 *)(puVar15 + 0x58);
  *(undefined8 *)(lVar19 + 0x50) = *(undefined8 *)(puVar15 + 0x50);
  *(undefined4 *)(lVar19 + 0x58) = uVar26;
  *(undefined2 *)(puStack_290 + 0x584) = *(undefined2 *)((long)ppuVar11 + 0x584);
  cVar4 = *(char *)((long)ppuVar11 + 0x586);
  if (puStack_290[0x586] != cVar4) {
    *(undefined2 *)(puStack_290 + 0x59c) = 0;
    FUN_10a5f98a4(puStack_290 + 0x5b0);
  }
  puVar25[0x586] = cVar4;
  puVar25[0x587] = *(undefined1 *)((long)ppuVar11 + 0x587);
  *extraout_x8 = puVar25;
  extraout_x8[1] = plStack_288;
  return;
}



/* Entry: 10a5f3bb0; end: 10a5f41cb;  */

void FUN_10a5f3bb0(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 *extraout_x8;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined *puStack_100;
  long *plStack_f8;
  undefined *puStack_f0;
  long *plStack_e8;
  undefined *puStack_e0;
  long *plStack_d8;
  undefined *puStack_d0;
  long *plStack_c8;
  undefined *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_60;
  long *plStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  FUN_10a422a34();
  ppuVar9 = &PTR_DAT_110bf9968;
  lVar10 = 0x30;
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bf9968);
  puStack_50 = &UNK_10f668699;
  uStack_48 = 0x4d;
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    puStack_50 = &UNK_10f662ba7;
    uStack_48 = 0x13;
    plStack_58 = *(long **)(param_1 + 0x528);
    uStack_60 = *(undefined8 *)(param_1 + 0x520);
    if (*(long *)(param_1 + 0x528) != 0) {
      plVar8 = (long *)(*(long *)(param_1 + 0x528) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bf9f08,&uStack_60,&puStack_50);
    plVar8 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar14 = plStack_58 + 1;
      do {
        lVar10 = *plVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x530),param_2,&PTR_DAT_110bf9f28);
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x534),param_2,&PTR_DAT_110bf9f48);
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x538),param_2,&PTR_DAT_110bf9f68);
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bf9f88,*(undefined4 *)(param_1 + 0x53c));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bf9fa8,*(undefined1 *)(param_1 + 0x540));
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x544),param_2,&PTR_DAT_110bf9fc8);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bf9fe8);
    lVar16 = *(long *)(param_1 + 0x510);
    for (lVar10 = *(long *)(param_1 + 0x508); lVar10 != lVar16; lVar10 = lVar10 + 0x10) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a4994cc(param_2,&PTR_DAT_110bfa008,lVar10,&UNK_10f65c897,0x19);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    FUN_10a02e230(param_2,&PTR_DAT_110bfa028,param_1 + 0x548,&UNK_10f633eab,0xe);
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x568),param_2,&PTR_DAT_110bfa068);
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x56c),param_2,&PTR_DAT_110bfa088);
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bfa0a8,*(undefined4 *)(param_1 + 0x570));
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x574),param_2,&PTR_DAT_110bfa0c8);
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x578),param_2,&PTR_DAT_110bfa0e8);
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bfa108,*(undefined4 *)(param_1 + 0x57c));
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x580),param_2,&PTR_DAT_110bfa128);
    (**(code **)(*param_2 + 0x60))(**(undefined4 **)(param_1 + 0x5c8),param_2,&PTR_DAT_110bfa148);
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 4),param_2,&PTR_DAT_110bfa168);
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 8),param_2,&PTR_DAT_110bfa188);
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0xc),param_2,&PTR_DAT_110bfa1a8);
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0x10),param_2,&PTR_DAT_110bfa1c8);
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0x14),param_2,&PTR_DAT_110c00988);
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0x18),param_2,&PTR_DAT_110bfa1e8);
    (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110bfa208,*(long *)(param_1 + 0x5c8) + 0x1c);
    (**(code **)(*param_2 + 0x40))
              (param_2,&PTR_DAT_110bfa228,*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0x28));
    (**(code **)(*param_2 + 0x70))
              (param_2,&PTR_DAT_110bfa248,*(undefined1 *)(*(long *)(param_1 + 0x5c8) + 0x2c));
    (**(code **)(*param_2 + 0x70))
              (param_2,&PTR_DAT_110bfa268,*(undefined1 *)(*(long *)(param_1 + 0x5c8) + 0x2d));
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0x30),param_2,&PTR_DAT_110bfa288);
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0x34),param_2,&PTR_DAT_110bfa2a8);
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0x38),param_2,&PTR_DAT_110bfa2c8);
    (**(code **)(*param_2 + 0x70))
              (param_2,&PTR_DAT_110bfa2e8,*(undefined1 *)(*(long *)(param_1 + 0x5c8) + 0x3c));
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0x40),param_2,&PTR_DAT_110bfa308);
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0x44),param_2,&PTR_DAT_110bfa328);
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)(*(long *)(param_1 + 0x5c8) + 0x48),param_2,&PTR_DAT_110bfa348);
    (**(code **)(*param_2 + 0x70))
              (param_2,&PTR_DAT_110bfa368,*(undefined1 *)(*(long *)(param_1 + 0x5c8) + 0x4c));
    (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110bfa388,*(long *)(param_1 + 0x5c8) + 0x50);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bfa3a8,*(undefined1 *)(param_1 + 0x584));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bfa3c8,*(undefined1 *)(param_1 + 0x585));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bfa3e8,*(undefined1 *)(param_1 + 0x586));
                    /* WARNING: Could not recover jumptable at 0x00010a5f41ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bfa408,*(undefined1 *)(param_1 + 0x587));
    return;
  }
  ppuVar7 = &puStack_50;
  FUN_10a0edfc4();
  func_0x00010a052384(&uStack_60);
  __Unwind_Resume();
  if (lVar10 == 0) {
    ppuVar17 = ppuVar7;
    ppuVar15 = ppuVar9;
    func_0x00010a0fda30();
  }
  else {
    plStack_b8 = (long *)ppuVar7[9];
    puStack_c0 = ppuVar7[8];
    lVar16 = lVar10 + 0x88;
    func_0x00010a35bf90(lVar16,&puStack_c0);
    puVar11 = (undefined8 *)((ulong)&puStack_c0 | 8);
    ppuVar17 = &puStack_c0;
    if (lVar16 != 0) {
      puVar11 = (undefined8 *)(lVar16 + 0x28);
      ppuVar17 = (undefined **)(lVar16 + 0x20);
    }
    ppuVar15 = (undefined **)*puVar11;
    ppuVar17 = (undefined **)*ppuVar17;
  }
  puVar18 = ppuVar7[0x2e];
  FUN_10a3dd220(puVar18);
  FUN_10a5771f8(puVar18,ppuVar17,ppuVar15);
  plVar8 = (long *)0x28;
  puStack_d0 = puVar18;
  __Znwm();
  plVar14 = plVar8 + 1;
  *plVar14 = 0;
  *plVar8 = (long)&PTR_FUN_110c00e60;
  plVar8[2] = 0;
  plVar8[3] = (long)puVar18;
  plVar8[4] = (long)FUN_10a3df8cc;
  plStack_c8 = plVar8;
  if (puVar18 != (undefined *)0x0) {
    if (*(long *)(puVar18 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = *plVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined **)(puVar18 + 0x28) = puVar18;
      *(long **)(puVar18 + 0x30) = plVar8;
    }
    else {
      if (*(long *)(*(long *)(puVar18 + 0x30) + 8) != -1) goto LAB_10a5f4338;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = *plVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined **)(puVar18 + 0x28) = puVar18;
      *(long **)(puVar18 + 0x30) = plVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar16 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_10a5f4338:
  puVar18 = puStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puStack_d0 + 0x150,ppuVar7 + 0x2a);
  uVar2 = (*(ushort *)(ppuVar7 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(puVar18 + 0x180) & 0xfffc;
  *(ushort *)(puVar18 + 0x180) = uVar3 | *(ushort *)(puVar18 + 0x180) & 1 | uVar2;
  *(ushort *)(puVar18 + 0x180) = uVar3 | uVar2 | *(ushort *)(ppuVar7 + 0x30) & 1;
  puStack_c0 = puVar18;
  plStack_b8 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar8 = plStack_c8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(ppuVar9,&puStack_c0);
  plVar8 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar14 = plStack_b8 + 1;
    do {
      lVar16 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puVar18 = puStack_d0;
  ppuVar9 = ppuVar7;
  (**(code **)(*ppuVar7 + 0x128))();
  puVar18[0x20c] = 0;
  *(int *)(puVar18 + 0x210) = (int)ppuVar9;
  FUN_10a422d34(ppuVar7,puVar18,lVar10);
  uVar4 = *(uint *)(ppuVar7 + 0x9e);
  *(uint *)(puVar18 + 0x4f0) = uVar4;
  if (uVar4 < 0x30) {
    FUN_10a5f489c(&puStack_c0,ppuVar7);
    FUN_10a5f4760(puVar18,&puStack_c0);
    if (plStack_b8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    puStack_e0 = ppuVar7[0xab];
    plStack_d8 = (long *)ppuVar7[0xac];
    if (plStack_d8 != (long *)0x0) {
      plVar8 = plStack_d8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10a5f4934(puVar18,&puStack_e0);
    if (plStack_d8 == (long *)0x0) goto LAB_10a5f44f4;
    plVar8 = plStack_d8 + 1;
    do {
      lVar10 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar14 = plStack_d8;
    } while (cVar5 != '\0');
  }
  else {
    puStack_f0 = ppuVar7[0xa4];
    plStack_e8 = (long *)ppuVar7[0xa5];
    if (plStack_e8 != (long *)0x0) {
      plVar8 = plStack_e8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(undefined **)(puVar18 + 0x520) != puStack_f0) {
      func_0x00010a5f96f4(puVar18 + 0x520,&puStack_f0);
      *(undefined2 *)(puVar18 + 0x59c) = 0;
    }
    if (plStack_e8 == (long *)0x0) goto LAB_10a5f44f4;
    plVar8 = plStack_e8 + 1;
    do {
      lVar10 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar14 = plStack_e8;
    } while (cVar5 != '\0');
  }
  if (lVar10 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
  }
LAB_10a5f44f4:
  puVar18 = puStack_d0;
  FUN_10a5f4a20(puStack_d0,*(undefined4 *)(ppuVar7 + 0xb3));
  *(undefined **)(puVar18 + 0x530) = ppuVar7[0xa6];
  *(undefined4 *)(puVar18 + 0x538) = *(undefined4 *)(ppuVar7 + 0xa7);
  if (*(int *)(puVar18 + 0x53c) != *(int *)((long)ppuVar7 + 0x53c)) {
    *(int *)(puVar18 + 0x53c) = *(int *)((long)ppuVar7 + 0x53c);
    *(undefined2 *)(puVar18 + 0x59c) = 0;
  }
  if (puVar18[0x540] != *(char *)(ppuVar7 + 0xa8)) {
    puVar18[0x540] = *(char *)(ppuVar7 + 0xa8);
    *(undefined2 *)(puVar18 + 0x59c) = 0;
  }
  if (1e-06 <= ABS(*(float *)(puVar18 + 0x544) - *(float *)((long)ppuVar7 + 0x544))) {
    *(float *)(puVar18 + 0x544) = *(float *)((long)ppuVar7 + 0x544);
    *(undefined2 *)(puVar18 + 0x59c) = 0;
  }
  puStack_100 = ppuVar7[0xa9];
  plStack_f8 = (long *)ppuVar7[0xaa];
  if (plStack_f8 != (long *)0x0) {
    plVar8 = plStack_f8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a5f4a70(puVar18,&puStack_100);
  plVar8 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar14 = plStack_f8 + 1;
    do {
      lVar10 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puVar18 = puStack_d0;
  *(undefined **)(puStack_d0 + 0x568) = ppuVar7[0xad];
  *(undefined4 *)(puStack_d0 + 0x570) = *(undefined4 *)(ppuVar7 + 0xae);
  *(undefined4 *)(puStack_d0 + 0x574) = *(undefined4 *)((long)ppuVar7 + 0x574);
  *(undefined4 *)(puStack_d0 + 0x578) = *(undefined4 *)(ppuVar7 + 0xaf);
  *(undefined4 *)(puStack_d0 + 0x57c) = *(undefined4 *)((long)ppuVar7 + 0x57c);
  *(undefined4 *)(puStack_d0 + 0x580) = *(undefined4 *)(ppuVar7 + 0xb0);
  puVar11 = (undefined8 *)ppuVar7[0xb9];
  puVar13 = *(undefined8 **)(puStack_d0 + 0x5c8);
  uVar20 = *puVar11;
  puVar13[1] = puVar11[1];
  *puVar13 = uVar20;
  puVar13[2] = puVar11[2];
  *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(puVar11 + 3);
  uVar19 = *(undefined4 *)((long)puVar11 + 0x24);
  *(undefined8 *)((long)puVar13 + 0x1c) = *(undefined8 *)((long)puVar11 + 0x1c);
  *(undefined4 *)((long)puVar13 + 0x24) = uVar19;
  puVar12 = ppuVar7[0xb9];
  lVar10 = *(long *)(puStack_d0 + 0x5c8);
  *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(puVar12 + 0x28);
  *(undefined2 *)(lVar10 + 0x2c) = *(undefined2 *)(puVar12 + 0x2c);
  *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(puVar12 + 0x30);
  *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(puVar12 + 0x38);
  *(undefined *)(lVar10 + 0x3c) = puVar12[0x3c];
  *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(puVar12 + 0x40);
  *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(puVar12 + 0x48);
  *(undefined *)(lVar10 + 0x4c) = puVar12[0x4c];
  uVar19 = *(undefined4 *)(puVar12 + 0x58);
  *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(puVar12 + 0x50);
  *(undefined4 *)(lVar10 + 0x58) = uVar19;
  *(undefined2 *)(puStack_d0 + 0x584) = *(undefined2 *)((long)ppuVar7 + 0x584);
  cVar5 = *(char *)((long)ppuVar7 + 0x586);
  if (puStack_d0[0x586] != cVar5) {
    *(undefined2 *)(puStack_d0 + 0x59c) = 0;
    FUN_10a5f98a4(puStack_d0 + 0x5b0);
  }
  puVar18[0x586] = cVar5;
  puVar18[0x587] = *(undefined1 *)((long)ppuVar7 + 0x587);
  *extraout_x8 = puVar18;
  extraout_x8[1] = plStack_c8;
  return;
}



/* Entry: 10a5f41cc; end: 10a5f475f;  */

void FUN_10a5f41cc(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined4 uVar15;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar13 = param_2;
    uVar12 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    lStack_60 = param_2[8];
    lVar14 = param_4 + 0x88;
    func_0x00010a35bf90(lVar14,&lStack_60);
    puVar7 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar13 = &lStack_60;
    if (lVar14 != 0) {
      puVar7 = (undefined8 *)(lVar14 + 0x28);
      plVar13 = (long *)(lVar14 + 0x20);
    }
    uVar12 = *puVar7;
    plVar13 = (long *)*plVar13;
  }
  lVar14 = param_2[0x2e];
  FUN_10a3dd220(lVar14);
  FUN_10a5771f8(lVar14,plVar13,uVar12);
  plVar13 = (long *)0x28;
  lStack_70 = lVar14;
  __Znwm();
  plVar11 = plVar13 + 1;
  *plVar11 = 0;
  *plVar13 = (long)&PTR_FUN_110c00e60;
  plVar13[2] = 0;
  plVar13[3] = lVar14;
  plVar13[4] = (long)FUN_10a3df8cc;
  plStack_68 = plVar13;
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar13 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar14 + 0x28) = lVar14;
      *(long **)(lVar14 + 0x30) = plVar13;
    }
    else {
      if (*(long *)(*(long *)(lVar14 + 0x30) + 8) != -1) goto LAB_10a5f4338;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar13 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar14 + 0x28) = lVar14;
      *(long **)(lVar14 + 0x30) = plVar13;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar14 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
LAB_10a5f4338:
  lVar14 = lStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_70 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar14 + 0x180) & 0xfffc;
  *(ushort *)(lVar14 + 0x180) = uVar3 | *(ushort *)(lVar14 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar14 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  lStack_60 = lVar14;
  plStack_58 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar13 = plStack_68 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(param_3,&lStack_60);
  plVar13 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar11 = plStack_58 + 1;
    do {
      lVar14 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar14 = lStack_70;
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x128))();
  *(undefined1 *)(lVar14 + 0x20c) = 0;
  *(int *)(lVar14 + 0x210) = (int)plVar13;
  FUN_10a422d34(param_2,lVar14,param_4);
  uVar4 = *(uint *)(param_2 + 0x9e);
  *(uint *)(lVar14 + 0x4f0) = uVar4;
  if (uVar4 < 0x30) {
    FUN_10a5f489c(&lStack_60,param_2);
    FUN_10a5f4760(lVar14,&lStack_60);
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    lStack_80 = param_2[0xab];
    plStack_78 = (long *)param_2[0xac];
    if (plStack_78 != (long *)0x0) {
      plVar13 = plStack_78 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10a5f4934(lVar14,&lStack_80);
    if (plStack_78 == (long *)0x0) goto LAB_10a5f44f4;
    plVar13 = plStack_78 + 1;
    do {
      lVar14 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar11 = plStack_78;
    } while (cVar5 != '\0');
  }
  else {
    lStack_90 = param_2[0xa4];
    plStack_88 = (long *)param_2[0xa5];
    if (plStack_88 != (long *)0x0) {
      plVar13 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(long *)(lVar14 + 0x520) != lStack_90) {
      func_0x00010a5f96f4(lVar14 + 0x520,&lStack_90);
      *(undefined2 *)(lVar14 + 0x59c) = 0;
    }
    if (plStack_88 == (long *)0x0) goto LAB_10a5f44f4;
    plVar13 = plStack_88 + 1;
    do {
      lVar14 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar11 = plStack_88;
    } while (cVar5 != '\0');
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10a5f44f4:
  lVar14 = lStack_70;
  FUN_10a5f4a20(lStack_70,(int)param_2[0xb3]);
  *(long *)(lVar14 + 0x530) = param_2[0xa6];
  *(int *)(lVar14 + 0x538) = (int)param_2[0xa7];
  if (*(int *)(lVar14 + 0x53c) != *(int *)((long)param_2 + 0x53c)) {
    *(int *)(lVar14 + 0x53c) = *(int *)((long)param_2 + 0x53c);
    *(undefined2 *)(lVar14 + 0x59c) = 0;
  }
  if (*(char *)(lVar14 + 0x540) != (char)param_2[0xa8]) {
    *(char *)(lVar14 + 0x540) = (char)param_2[0xa8];
    *(undefined2 *)(lVar14 + 0x59c) = 0;
  }
  if (1e-06 <= ABS(*(float *)(lVar14 + 0x544) - *(float *)((long)param_2 + 0x544))) {
    *(float *)(lVar14 + 0x544) = *(float *)((long)param_2 + 0x544);
    *(undefined2 *)(lVar14 + 0x59c) = 0;
  }
  lStack_a0 = param_2[0xa9];
  plStack_98 = (long *)param_2[0xaa];
  if (plStack_98 != (long *)0x0) {
    plVar13 = plStack_98 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a5f4a70(lVar14,&lStack_a0);
  plVar13 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar11 = plStack_98 + 1;
    do {
      lVar14 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar14 = lStack_70;
  *(long *)(lStack_70 + 0x568) = param_2[0xad];
  *(int *)(lStack_70 + 0x570) = (int)param_2[0xae];
  *(undefined4 *)(lStack_70 + 0x574) = *(undefined4 *)((long)param_2 + 0x574);
  *(int *)(lStack_70 + 0x578) = (int)param_2[0xaf];
  *(undefined4 *)(lStack_70 + 0x57c) = *(undefined4 *)((long)param_2 + 0x57c);
  *(int *)(lStack_70 + 0x580) = (int)param_2[0xb0];
  puVar7 = (undefined8 *)param_2[0xb9];
  puVar9 = *(undefined8 **)(lStack_70 + 0x5c8);
  uVar12 = *puVar7;
  puVar9[1] = puVar7[1];
  *puVar9 = uVar12;
  puVar9[2] = puVar7[2];
  *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar7 + 3);
  uVar15 = *(undefined4 *)((long)puVar7 + 0x24);
  *(undefined8 *)((long)puVar9 + 0x1c) = *(undefined8 *)((long)puVar7 + 0x1c);
  *(undefined4 *)((long)puVar9 + 0x24) = uVar15;
  lVar8 = param_2[0xb9];
  lVar10 = *(long *)(lStack_70 + 0x5c8);
  *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(lVar8 + 0x28);
  *(undefined2 *)(lVar10 + 0x2c) = *(undefined2 *)(lVar8 + 0x2c);
  *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
  *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(lVar8 + 0x38);
  *(undefined1 *)(lVar10 + 0x3c) = *(undefined1 *)(lVar8 + 0x3c);
  *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(lVar8 + 0x40);
  *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(lVar8 + 0x48);
  *(undefined1 *)(lVar10 + 0x4c) = *(undefined1 *)(lVar8 + 0x4c);
  uVar15 = *(undefined4 *)(lVar8 + 0x58);
  *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(lVar8 + 0x50);
  *(undefined4 *)(lVar10 + 0x58) = uVar15;
  *(undefined2 *)(lStack_70 + 0x584) = *(undefined2 *)((long)param_2 + 0x584);
  cVar5 = *(char *)((long)param_2 + 0x586);
  if (*(char *)(lStack_70 + 0x586) != cVar5) {
    *(undefined2 *)(lStack_70 + 0x59c) = 0;
    FUN_10a5f98a4(lStack_70 + 0x5b0);
  }
  *(char *)(lVar14 + 0x586) = cVar5;
  *(undefined1 *)(lVar14 + 0x587) = *(undefined1 *)((long)param_2 + 0x587);
  *param_1 = lVar14;
  param_1[1] = (long)plStack_68;
  return;
}



/* Entry: 10a5f4760; end: 10a5f489b;  */

void FUN_10a5f4760(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)param_2[1];
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    lVar9 = 0;
  }
  else {
    lVar9 = *param_2;
    plVar1 = plVar4 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = *(long **)(param_1 + 0x500);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    if (lVar9 == 0) {
      return;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x4f8);
    plVar1 = plVar4 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (lVar7 == lVar9) {
      return;
    }
  }
  lVar8 = param_2[1];
  lVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar4 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *(long *)(param_1 + 0x500);
  *(long *)(param_1 + 0x500) = lVar8;
  *(long *)(param_1 + 0x4f8) = lVar7;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar9 == 0) {
    bVar6 = 1;
  }
  else if (*(uint *)(param_1 + 0x4f0) < 0x20) {
    bVar6 = 0;
  }
  else {
    bVar6 = (byte)(*(ushort *)(lVar9 + 0x118) >> 4) & 1;
  }
  *(byte *)(param_1 + 0x670) = bVar6;
  *(undefined2 *)(param_1 + 0x59c) = 0;
  return;
}



/* Entry: 10a5f489c; end: 10a5f4933;  */

void FUN_10a5f489c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_2 + 0x500);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = *(undefined8 *)(param_2 + 0x4f8);
    param_1[1] = plVar4;
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a5f4934; end: 10a5f4a1f;  */

void FUN_10a5f4934(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_30;
  long *plStack_28;
  
  func_0x00010a015c50(param_1 + 0x558);
  uVar6 = (ulong)*(byte *)(*(long *)(param_1 + 0x170) + 0x29);
  if (5 < uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5f4a0c);
    (*pcVar4)();
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x170) + uVar6 * 8 + 0x30);
  (**(code **)(*plVar5 + 0x18))();
  if (((int)plVar5 == 0) || (*(char *)(param_1 + 0x586) == '\x01')) {
    uStack_30 = *(undefined8 *)(param_1 + 0x558);
    plStack_28 = *(long **)(param_1 + 0x560);
    if (plStack_28 != (long *)0x0) {
      plVar5 = plStack_28 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a42646c(param_1,&uStack_30);
    plVar5 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a5f4a20; end: 10a5f4a6f;  */

void FUN_10a5f4a20(long param_1,int param_2)

{
  *(int *)(param_1 + 0x598) = param_2;
  if (((param_2 != 2) && (0x1f < *(uint *)(param_1 + 0x4f0))) &&
     ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    FUN_10ae06f30(1,2,&UNK_10f66828f,&UNK_10f6682c5,0x15d,&UNK_10f66832f,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a5f4a70; end: 10a5f4b57;  */

void FUN_10a5f4a70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_30;
  long *plStack_28;
  
  func_0x00010a015c50(param_1 + 0x548);
  uVar6 = (ulong)*(byte *)(*(long *)(param_1 + 0x170) + 0x29);
  if (5 < uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5f4b44);
    (*pcVar4)();
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x170) + uVar6 * 8 + 0x30);
  (**(code **)(*plVar5 + 0x18))();
  if (((int)plVar5 != 0) && ((*(byte *)(param_1 + 0x586) & 1) == 0)) {
    uStack_30 = *(undefined8 *)(param_1 + 0x548);
    plStack_28 = *(long **)(param_1 + 0x550);
    if (plStack_28 != (long *)0x0) {
      plVar5 = plStack_28 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a42646c(param_1,&uStack_30);
    plVar5 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a5f4b58; end: 10a5f4bcb;  */

void FUN_10a5f4b58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  FUN_10a3c73cc(param_1,2);
  uVar8 = (ulong)*(byte *)(*(long *)(param_1 + 0x170) + 0x29);
  if (5 < uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5f4bcc);
    (*pcVar4)();
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x170) + uVar8 * 8 + 0x30);
  (**(code **)(*plVar5 + 0x18))();
  if ((((int)plVar5 != 0) && ((*(byte *)(param_1 + 0x586) & 1) == 0)) &&
     (*(char *)(param_1 + 0x59c) == '\x01')) {
    lVar6 = param_1;
    FUN_10a5f9ad8();
    plVar10 = *(long **)(param_1 + 0x510);
    for (plVar5 = *(long **)(param_1 + 0x508); plVar5 != plVar10; plVar5 = plVar5 + 2) {
      plVar7 = (long *)plVar5[1];
      if ((plVar7 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
        if (*plVar5 != 0) {
          FUN_10aa19b04();
        }
        plVar1 = plVar7 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    for (plVar5 = *(long **)(param_1 + 0x5e0); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      FUN_10a8f2de0(plVar5[3],lVar6);
    }
    return;
  }
  return;
}



/* Entry: 10a5f4bcc; end: 10a5f4ca7;  */

void FUN_10a5f4bcc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  lVar4 = param_1;
  FUN_10a5f9ad8();
  plVar8 = *(long **)(param_1 + 0x510);
  for (plVar7 = *(long **)(param_1 + 0x508); plVar7 != plVar8; plVar7 = plVar7 + 2) {
    plVar5 = (long *)plVar7[1];
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      if (*plVar7 != 0) {
        FUN_10aa19b04();
      }
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  for (plVar7 = *(long **)(param_1 + 0x5e0); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    FUN_10a8f2de0(plVar7[3],lVar4);
  }
  return;
}



/* Entry: 10a5f4ca8; end: 10a5f4caf;  */

void FUN_10a5f4ca8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  lVar7 = param_1 + -0x68;
  FUN_10a3c73cc(lVar7,2);
  uVar8 = (ulong)*(byte *)(*(long *)(param_1 + 0x108) + 0x29);
  if (5 < uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5f4bcc);
    (*pcVar4)();
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x108) + uVar8 * 8 + 0x30);
  (**(code **)(*plVar5 + 0x18))();
  if ((((int)plVar5 != 0) && ((*(byte *)(param_1 + 0x51e) & 1) == 0)) &&
     (*(char *)(param_1 + 0x534) == '\x01')) {
    FUN_10a5f9ad8();
    plVar10 = *(long **)(param_1 + 0x4a8);
    for (plVar5 = *(long **)(param_1 + 0x4a0); plVar5 != plVar10; plVar5 = plVar5 + 2) {
      plVar6 = (long *)plVar5[1];
      if ((plVar6 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
        if (*plVar5 != 0) {
          FUN_10aa19b04();
        }
        plVar1 = plVar6 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    for (plVar5 = *(long **)(param_1 + 0x578); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      FUN_10a8f2de0(plVar5[3],lVar7);
    }
    return;
  }
  return;
}



/* Entry: 10a5f4cb0; end: 10a5f7beb;  */

/* WARNING: Removing unreachable block (ram,0x00010a5f7964) */
/* WARNING: Removing unreachable block (ram,0x00010a5f518c) */
/* WARNING: Removing unreachable block (ram,0x00010a5f79e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5f6e90) */

void FUN_10a5f4cb0(long *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined4 *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  long *plVar32;
  long *plVar33;
  ulong uVar34;
  long *plVar35;
  uint uVar36;
  long lVar37;
  undefined8 *puVar38;
  undefined4 *puVar39;
  int iVar40;
  long *unaff_x19;
  long *unaff_x20;
  int iVar41;
  undefined1 *unaff_x21;
  uint uVar42;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong uVar43;
  long *plVar44;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  int iVar45;
  undefined8 unaff_x26;
  long *plVar46;
  int iVar47;
  undefined8 unaff_x27;
  long *plVar48;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  long lVar56;
  long lVar57;
  float fVar58;
  float fVar59;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float fVar60;
  undefined8 unaff_d11;
  float fVar61;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
code_r0x00010a5f4cb0:
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d12;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0xb8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(uint *)(param_1 + 0x9e) < 0x30) {
LAB_10a5f4d20:
    if ((*(byte *)(param_1 + 0xce) & 1) != 0) goto LAB_10a5f7850;
  }
  else {
    lVar8 = param_1[0xa4];
    if ((lVar8 == 0) || (FUN_10ab3b8d0(), (int)lVar8 != 2)) goto LAB_10a5f7850;
    if (*(uint *)(param_1 + 0x9e) < 0x30) goto LAB_10a5f4d20;
  }
  lVar15 = param_1[0x2d];
  for (lVar8 = *(long *)(lVar15 + 0x158); lVar8 != lVar15 + 0x150; lVar8 = *(long *)(lVar8 + 8)) {
    if (*(long *)(lVar8 + 0x10) != 0) {
      plVar9 = (long *)(*(long *)(lVar8 + 0x10) + 0xb0);
      (**(code **)(*plVar9 + 0x18))(plVar9,0xd88b8b8a073aaad7);
      if (plVar9 != (long *)0x0) goto LAB_10a5f4d80;
    }
  }
  plVar9 = (long *)0x0;
LAB_10a5f4d80:
  uVar20 = (ulong)*(byte *)(param_1[0x2e] + 0x29);
  if (5 < uVar20) goto LAB_10a5f7a1c;
  plVar10 = *(long **)(param_1[0x2e] + uVar20 * 8 + 0x30);
  (**(code **)(*plVar10 + 0x18))();
  *(long **)((long)register0x00000008 + -0x318) = param_1;
  if (((int)plVar10 == 0) || ((*(byte *)((long)param_1 + 0x586) & 1) != 0)) {
    if ((*(byte *)((long)param_1 + 0x59d) & 1) != 0) goto LAB_10a5f7850;
    plVar9 = param_1;
    FUN_10a5f7bec();
    *(char *)((long)param_1 + 0x59d) = (char)plVar9;
    if ((int)plVar9 == 0) goto LAB_10a5f7850;
    plVar9 = (long *)param_1[0xb6];
    if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x90))(), *plVar9 == 0)) {
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x220);
      FUN_10a0d0194((undefined1 *)((long)register0x00000008 + -0x238));
      param_1 = *(long **)((long)register0x00000008 + -0x318);
      uVar42 = *(uint *)(param_1 + 0x9e);
      lVar8 = 0xd0;
      if (0x2f < uVar42) {
        lVar8 = 0x108;
      }
      puVar30 = (undefined8 *)0x1137eb698;
      if (0x2f < uVar42) {
        puVar30 = (undefined8 *)0x1137eb6d0;
      }
      FUN_10ab6e728();
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        puVar38 = (undefined8 *)((long)register0x00000008 + -0x220);
        func_0x000107c3192c(puVar38,*puVar25,puVar25[1]);
      }
      else {
        uVar55 = puVar25[1];
        uVar17 = *puVar25;
        *(undefined8 *)((long)register0x00000008 + -0x210) = puVar25[2];
        *(undefined8 *)((long)register0x00000008 + -0x218) = uVar55;
        *(undefined8 *)((long)register0x00000008 + -0x220) = uVar17;
        puVar38 = puVar25;
      }
      *(undefined8 *)((long)register0x00000008 + -0x208) = puVar25[3];
      uVar50 = *(undefined4 *)(puVar25 + 6);
      uVar17 = puVar25[4];
      *(undefined8 *)((long)register0x00000008 + -0x1f8) = puVar25[5];
      *(undefined8 *)((long)register0x00000008 + -0x200) = uVar17;
      *(undefined4 *)((long)register0x00000008 + -0x1f0) = uVar50;
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x1e8);
      if (cRam00000001137eb63f < '\0') {
        func_0x000107c3192c(puVar25,uRam00000001137eb628,uRam00000001137eb630);
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = uRam00000001137eb630;
        *puVar25 = uRam00000001137eb628;
        *(ulong *)((long)register0x00000008 + -0x1d8) =
             CONCAT17(cRam00000001137eb63f,uRam00000001137eb638);
        puVar25 = puVar38;
      }
      *(long *)((long)register0x00000008 + -0x1d0) = lRam00000001137eb640;
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = uRam00000001137eb650;
      *(undefined8 *)((long)register0x00000008 + -0x1c8) = uRam00000001137eb648;
      *(undefined4 *)((long)register0x00000008 + -0x1b8) = uRam00000001137eb658;
      puVar38 = (undefined8 *)((long)register0x00000008 + -0x1b0);
      if (cRam00000001137eb677 < '\0') {
        func_0x000107c3192c(puVar38,uRam00000001137eb660,uRam00000001137eb668);
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = uRam00000001137eb668;
        *puVar38 = uRam00000001137eb660;
        *(ulong *)((long)register0x00000008 + -0x1a0) =
             CONCAT17(cRam00000001137eb677,uRam00000001137eb670);
        puVar38 = puVar25;
      }
      *(long *)((long)register0x00000008 + -0x198) = lRam00000001137eb678;
      *(undefined8 *)((long)register0x00000008 + -0x188) = uRam00000001137eb688;
      *(undefined8 *)((long)register0x00000008 + -400) = uRam00000001137eb680;
      *(undefined4 *)((long)register0x00000008 + -0x180) = uRam00000001137eb690;
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x178);
      pcVar1 = (char *)0x1137eb6af;
      if (0x2f < uVar42) {
        pcVar1 = (char *)0x1137eb6e7;
      }
      if (*pcVar1 < '\0') {
        puVar30 = (undefined8 *)0x1137eb6a0;
        if (0x2f < uVar42) {
          puVar30 = (undefined8 *)0x1137eb6d8;
        }
        func_0x000107c3192c(puVar25,*(undefined8 *)(lVar8 + 0x1137eb5c8),*puVar30);
      }
      else {
        uVar17 = *puVar30;
        *(undefined8 *)((long)register0x00000008 + -0x170) = puVar30[1];
        *puVar25 = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x168) = puVar30[2];
        puVar25 = puVar38;
      }
      puVar30 = (undefined8 *)0x1137eb6b0;
      if (0x2f < uVar42) {
        puVar30 = (undefined8 *)0x1137eb6e8;
      }
      *(undefined8 *)((long)register0x00000008 + -0x160) = *puVar30;
      puVar30 = (undefined8 *)0x1137eb6b8;
      if (0x2f < uVar42) {
        puVar30 = (undefined8 *)0x1137eb6f0;
      }
      uVar17 = *puVar30;
      *(undefined8 *)((long)register0x00000008 + -0x150) = puVar30[1];
      *(undefined8 *)((long)register0x00000008 + -0x158) = uVar17;
      *(undefined4 *)((long)register0x00000008 + -0x148) = *(undefined4 *)(puVar30 + 2);
      FUN_10ab6f020();
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        func_0x000107c3192c((undefined8 *)((long)register0x00000008 + -0x140),*puVar25,puVar25[1]);
      }
      else {
        uVar55 = puVar25[1];
        uVar17 = *puVar25;
        *(undefined8 *)((long)register0x00000008 + -0x130) = puVar25[2];
        *(undefined8 *)((long)register0x00000008 + -0x138) = uVar55;
        *(undefined8 *)((long)register0x00000008 + -0x140) = uVar17;
      }
      *(undefined8 *)((long)register0x00000008 + -0x128) = puVar25[3];
      uVar55 = puVar25[5];
      uVar17 = puVar25[4];
      *(undefined4 *)((long)register0x00000008 + -0x110) = *(undefined4 *)(puVar25 + 6);
      *(undefined8 *)((long)register0x00000008 + -0x118) = uVar55;
      *(undefined8 *)((long)register0x00000008 + -0x120) = uVar17;
      FUN_10ab6f520((undefined1 *)((long)register0x00000008 + -0x100),
                    (undefined1 *)((long)register0x00000008 + -0x220),5);
      lVar8 = *(long *)((long)register0x00000008 + -0x238);
      *(undefined4 *)(lVar8 + 0xf0) = *(undefined4 *)((long)register0x00000008 + -0x100);
      if ((undefined4 *)(lVar8 + 0xf0) != (undefined4 *)((long)register0x00000008 + -0x100)) {
        FUN_10a1903c4(lVar8 + 0xf8,*(long *)((long)register0x00000008 + -0xf8),
                      *(long *)((long)register0x00000008 + -0xf0),
                      (*(long *)((long)register0x00000008 + -0xf0) -
                       *(long *)((long)register0x00000008 + -0xf8) >> 3) * 0x6db6db6db6db6db7);
      }
      plVar9 = param_1 + 0xb6;
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      uVar54 = *(undefined8 *)((long)register0x00000008 + -200);
      uVar55 = *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)(lVar8 + 0x118) = *(undefined8 *)((long)register0x00000008 + -0xd8);
      *(undefined8 *)(lVar8 + 0x110) = uVar17;
      *(undefined8 *)(lVar8 + 0x128) = uVar54;
      *(undefined8 *)(lVar8 + 0x120) = uVar55;
      *(undefined8 *)(lVar8 + 0x130) = *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined1 **)((long)register0x00000008 + -0x250) =
           (undefined1 *)((long)register0x00000008 + -0xf8);
      func_0x00010a190844((undefined1 *)((long)register0x00000008 + -0x250));
      lVar8 = 0x118;
      do {
        lVar8 = lVar8 + -0x38;
      } while (lVar8 != 0);
      *(undefined8 *)(*(long *)((long)register0x00000008 + -0x238) + 0xe8) = 1;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
      FUN_10a1995d0((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x250),
                    (undefined1 *)((long)register0x00000008 + -0x100),
                    (undefined1 *)((long)register0x00000008 + -0x238));
      func_0x00010a19a938(plVar9,(undefined1 *)((long)register0x00000008 + -0x220));
      plVar10 = *(long **)((long)register0x00000008 + -0x218);
      if (plVar10 != (long *)0x0) {
        plVar44 = plVar10 + 1;
        do {
          lVar8 = *plVar44;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar6) {
            *plVar44 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = (long *)*plVar9;
      if (*(char *)((long)plVar10 + 0xb9) != '\0') {
        *(undefined1 *)((long)plVar10 + 0xb9) = 0;
        (**(code **)(*plVar10 + 0xa0))();
        plVar10 = (long *)*plVar9;
      }
      if (*(char *)((long)plVar10 + 0xba) != '\0') {
        *(undefined1 *)((long)plVar10 + 0xba) = 0;
        (**(code **)(*plVar10 + 0xa0))();
      }
      *(long *)((long)register0x00000008 + -0x100) = param_1[0x2e];
      FUN_10a2db3d8((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x100),plVar9);
      *(undefined8 *)((long)register0x00000008 + -0x248) =
           *(undefined8 *)((long)register0x00000008 + -0x218);
      *(undefined8 *)((long)register0x00000008 + -0x250) =
           *(undefined8 *)((long)register0x00000008 + -0x220);
      if (*(long *)((long)register0x00000008 + -0x218) != 0) {
        plVar9 = (long *)(*(long *)((long)register0x00000008 + -0x218) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = *plVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a426824(param_1,(undefined1 *)((long)register0x00000008 + -0x250));
      plVar9 = *(long **)((long)register0x00000008 + -0x248);
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar8 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (*(uint *)(param_1 + 0x9e) < 0x30) {
        lVar8 = param_1[0xac];
        *(long *)((long)register0x00000008 + -0x260) = param_1[0xab];
        *(long *)((long)register0x00000008 + -600) = lVar8;
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10a42646c(param_1,(undefined1 *)((long)register0x00000008 + -0x260));
        plVar9 = *(long **)((long)register0x00000008 + -600);
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 1;
          do {
            lVar8 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_10a5f5368:
          if (lVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
      else {
        lVar8 = param_1[0xaa];
        *(long *)((long)register0x00000008 + -0x260) = param_1[0xa9];
        *(long *)((long)register0x00000008 + -600) = lVar8;
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10a42646c(param_1,(undefined1 *)((long)register0x00000008 + -0x260));
        plVar9 = *(long **)((long)register0x00000008 + -600);
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 1;
          do {
            lVar8 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_10a5f5368;
        }
      }
      plVar9 = *(long **)((long)register0x00000008 + -0x218);
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar8 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = *(long **)((long)register0x00000008 + -0x230);
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar8 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    uVar42 = *(uint *)(param_1 + 0x9e);
    plVar9 = (long *)param_1[0xb6];
    (**(code **)(*plVar9 + 0x90))();
    lVar8 = *plVar9;
    if (uVar42 < 0x30) {
      *(undefined **)((long)register0x00000008 + -0x220) = &UNK_10f66a490;
      *(undefined8 *)((long)register0x00000008 + -0x218) = 0x3b;
      lVar15 = *(long *)((long)register0x00000008 + -0x318);
      if (lVar8 == 0) {
        FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x220));
        goto LAB_10a5f7a1c;
      }
      plVar9 = *(long **)(lVar15 + 0x630);
      if (plVar9 == (long *)0x0) {
        iVar41 = 0;
      }
      else {
        iVar41 = 0;
        do {
          iVar41 = iVar41 + (int)((ulong)(plVar9[4] - plVar9[3]) >> 3) * (int)plVar9[2] *
                            -0x55555555;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      uVar42 = *(uint *)(lVar15 + 0x570);
      iVar40 = *(int *)(lVar15 + 0x57c);
      *(ulong *)((long)register0x00000008 + -0x348) = (ulong)uVar42;
      iVar47 = iVar40 + uVar42;
      *(int *)((long)register0x00000008 + -0x3a4) = iVar47;
      uVar42 = iVar47 + 1;
      *(ulong *)((long)register0x00000008 + -0x2d8) = (ulong)uVar42;
      uVar42 = iVar41 * uVar42;
      if ((uVar42 >> 0xf & 0xffff) != 0) {
        FUN_10a185264((undefined1 *)((long)register0x00000008 + -0x220),0x100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),&UNK_10f66a4cc,0x46);
        __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0x100),0xffff);
        uVar20 = *(ulong *)((long)register0x00000008 + -0xf8);
        puVar7 = *(undefined1 **)((long)register0x00000008 + -0x100);
        if (-1 < (char)*(byte *)((long)register0x00000008 + -0xe9)) {
          uVar20 = (ulong)*(byte *)((long)register0x00000008 + -0xe9);
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x100);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),puVar7,uVar20);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),&UNK_10f66a513,0x53);
        FUN_10a61d104((undefined1 *)((long)register0x00000008 + -0x220));
        goto LAB_10a5f7a1c;
      }
      fVar59 = *(float *)(lVar15 + 0x578);
      *(undefined4 *)((long)register0x00000008 + -0x39c) = *(undefined4 *)(lVar15 + 0x574);
      uVar49 = *(uint *)(lVar15 + 0x580);
      *(undefined8 *)((long)register0x00000008 + -0x388) = 0;
      *(ulong *)((long)register0x00000008 + -0x390) = (ulong)uVar49;
      *(undefined4 *)((long)register0x00000008 + -0x394) =
           *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0x170) + 0xa20) + 0x18);
      FUN_10ab4a154(lVar8,uVar42 * 2);
      uVar20 = (ulong)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x2d8) *
                            (iVar41 * 6 + -6));
      FUN_10ab4cb54(lVar8);
      uVar42 = *(uint *)(lVar8 + 0x110);
      lVar15 = *(long *)(lVar8 + 0x100);
      if (uVar42 == 0xffffffff) {
        lVar21 = 0;
        lVar16 = *(long *)(lVar8 + 0xf8);
      }
      else {
        lVar16 = *(long *)(lVar8 + 0xf8);
        uVar28 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar28 < uVar42 || uVar28 - uVar42 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar21 = lVar16 + (ulong)uVar42 * 0x38;
      }
      lVar29 = lVar16;
      if (lVar16 == lVar15) {
        lVar29 = 0;
        lVar56 = lVar16;
      }
      else {
        do {
          lVar56 = lVar29;
          if (*(long *)(lVar29 + 0x18) == lRam00000001137eb640) break;
          lVar29 = lVar29 + 0x38;
          lVar56 = lVar15;
        } while (lVar29 != lVar15);
        lVar57 = lVar16;
        lVar29 = 0;
        if (lVar56 != lVar15) {
          lVar29 = lVar56;
        }
        do {
          lVar56 = lVar57;
          if (*(long *)(lVar57 + 0x18) == lRam00000001137eb678) break;
          lVar57 = lVar57 + 0x38;
          lVar56 = lVar15;
        } while (lVar57 != lVar15);
      }
      uVar42 = *(uint *)(lVar8 + 0x120);
      lVar57 = lVar16;
      if (uVar42 == 0xffffffff) {
        lVar37 = 0;
      }
      else {
        uVar28 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar28 < uVar42 || uVar28 - uVar42 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar37 = lVar16 + (ulong)uVar42 * 0x38;
      }
      for (; (lVar57 != lVar15 &&
             (lVar16 = lVar57, *(long *)(lVar57 + 0x18) != lRam00000001137eb6e8));
          lVar57 = lVar57 + 0x38) {
        lVar16 = lVar15;
      }
      if (((((lVar21 == 0) || (*(int *)(lVar21 + 0x24) != 5)) || (lVar29 == 0)) ||
          ((((*(int *)(lVar21 + 0x28) != 3 || (*(int *)(lVar29 + 0x24) != 5)) ||
            ((lVar56 == lVar15 || ((lVar56 == 0 || (*(int *)(lVar29 + 0x28) != 3)))))) ||
           (*(int *)(lVar56 + 0x24) != 5)))) ||
         ((((((*(int *)(lVar56 + 0x28) != 3 || (lVar37 == 0)) || (*(int *)(lVar37 + 0x24) != 5)) ||
            ((lVar16 == lVar15 || (lVar16 == 0)))) || (*(int *)(lVar37 + 0x28) != 2)) ||
          ((*(int *)(lVar16 + 0x24) != 5 || (*(int *)(lVar16 + 0x28) != 3)))))) goto LAB_10a5f78a8;
      lVar15 = *(long *)(lVar8 + 0x10);
      uVar42 = *(uint *)(lVar21 + 0x30);
      uVar49 = *(uint *)(lVar8 + 0xf0);
      uVar14 = *(uint *)(lVar29 + 0x30);
      uVar2 = *(uint *)(lVar56 + 0x30);
      uVar3 = *(uint *)(lVar37 + 0x30);
      uVar4 = *(uint *)(lVar16 + 0x30);
      FUN_10ab4ccac((undefined1 *)((long)register0x00000008 + -0x220),lVar8);
      lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x318) + 0x630);
      if (lVar8 != 0) {
        uVar36 = 0;
        *(undefined4 *)((long)register0x00000008 + -0x368) = 0;
        *(ulong *)((long)register0x00000008 + -0x2e0) = lVar15 + (ulong)uVar42;
        *(ulong *)((long)register0x00000008 + -0x2c0) = lVar15 + (ulong)uVar14;
        *(ulong *)((long)register0x00000008 + -0x2b8) = lVar15 + (ulong)uVar2;
        *(ulong *)((long)register0x00000008 + -0x2e8) = lVar15 + (ulong)uVar3;
        *(ulong *)((long)register0x00000008 + -0x2f0) = lVar15 + (ulong)uVar4;
        fVar61 = fVar59 * *(float *)((long)register0x00000008 + -0x39c);
        if (0.0 <= fVar59) {
          fVar61 = fVar59;
        }
        *(float *)((long)register0x00000008 + -0x3a0) = fVar61;
        *(int *)((long)register0x00000008 + -0x3a8) =
             ~(iVar40 + (int)*(undefined8 *)((long)register0x00000008 + -0x348));
        do {
          *(long *)((long)register0x00000008 + -0x350) = lVar8;
          lVar15 = *(long *)(lVar8 + 0x18);
          lVar8 = *(long *)(lVar8 + 0x20);
          if (lVar8 - lVar15 != 0) {
            *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
            uVar28 = 0;
            *(undefined4 *)((long)register0x00000008 + -0x364) = 0;
            uVar42 = (int)((ulong)(lVar8 - lVar15) >> 3) *
                     (int)*(undefined8 *)((long)register0x00000008 + -0x2d8) * -0x55555555;
            *(float *)((long)register0x00000008 + -0x294) = (float)uVar42;
            *(uint *)((long)register0x00000008 + -0x398) = uVar42 - 1;
            do {
              plVar9 = (long *)(lVar15 + uVar28 * 0x18);
              *(long **)((long)register0x00000008 + -0x290) = plVar9;
              lVar16 = *plVar9;
              lVar21 = plVar9[1];
              uVar28 = (lVar21 - lVar16 >> 2) * -0x5555555555555555;
              iVar41 = (int)uVar28 * 2;
              *(int *)((long)register0x00000008 + -0x33c) = iVar41 + -2;
              if (lVar21 != lVar16) {
                uVar34 = 0;
                do {
                  uVar43 = (ulong)(uVar36 + 1);
                  puVar38 = (undefined8 *)(lVar16 + uVar34 * 0xc);
                  lVar8 = *(long *)((long)register0x00000008 + -0x2e0);
                  puVar30 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar36);
                  uVar17 = *puVar38;
                  *(undefined4 *)(puVar30 + 1) = *(undefined4 *)(puVar38 + 1);
                  fVar61 = (float)uVar34 / (float)(uVar28 - 1);
                  *puVar30 = uVar17;
                  uVar17 = *puVar38;
                  puVar25 = (undefined8 *)(lVar8 + uVar49 * uVar43);
                  *(undefined8 **)((long)register0x00000008 + -0x370) = puVar38;
                  *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar38 + 1);
                  *(undefined8 **)((long)register0x00000008 + -0x300) = puVar25;
                  *(undefined8 **)((long)register0x00000008 + -0x2f8) = puVar30;
                  *puVar25 = uVar17;
                  lVar16 = (ulong)uVar49 * (ulong)uVar36;
                  lVar15 = uVar49 * uVar43;
                  lVar8 = *(long *)((long)register0x00000008 + -0x2f0);
                  puVar31 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar36);
                  *puVar31 = 0x3f800000;
                  puVar39 = (undefined4 *)(lVar8 + uVar49 * uVar43);
                  *puVar39 = 0xbf800000;
                  iVar47 = *(int *)((long)register0x00000008 + -0x394);
                  fVar59 = fVar61;
                  if (iVar47 < 0x79) {
                    fVar59 = 0.0;
                  }
                  puVar31[1] = fVar59;
                  puVar39[1] = fVar59;
                  *(undefined4 **)((long)register0x00000008 + -0x2d0) = puVar39;
                  *(undefined4 **)((long)register0x00000008 + -0x2c8) = puVar31;
                  puVar31[2] = 0;
                  puVar39[2] = 0;
                  lVar8 = *(long *)((long)register0x00000008 + -0x2e8);
                  puVar39 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar36);
                  *puVar39 = 0;
                  puVar39[1] = 1.0 - fVar61;
                  puVar31 = (undefined4 *)(lVar8 + uVar49 * uVar43);
                  *puVar31 = 0x3f800000;
                  *(undefined4 **)((long)register0x00000008 + -0x310) = puVar31;
                  *(undefined4 **)((long)register0x00000008 + -0x308) = puVar39;
                  puVar31[1] = 1.0 - fVar61;
                  *(ulong *)((long)register0x00000008 + -0x288) = uVar34;
                  if (uVar34 == 0) {
                    lVar8 = *(long *)((long)register0x00000008 + -0x2b8);
                    puVar25 = (undefined8 *)(lVar8 + lVar16);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar8 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    lVar8 = 0;
                    if (iVar47 < 0x79) {
                      lVar21 = *(long *)((long)register0x00000008 + -0x2d0);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x2c8) + 4) = 0x3f800000
                      ;
                      *(undefined4 *)(lVar21 + 4) = 0x3f800000;
                    }
                  }
                  else {
                    uVar34 = uVar34 - 1;
                    lVar8 = **(long **)((long)register0x00000008 + -0x290);
                    uVar28 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar8 >> 2) *
                             -0x5555555555555555;
                    if (uVar28 < uVar34 || uVar28 - uVar34 == 0) goto LAB_10a5f7a1c;
                    puVar30 = (undefined8 *)(lVar8 + uVar34 * 0xc);
                    lVar8 = *(long *)((long)register0x00000008 + -0x2b8);
                    puVar25 = (undefined8 *)(lVar8 + lVar16);
                    uVar17 = *puVar30;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar30 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar8 + lVar15);
                    lVar8 = *(long *)((long)register0x00000008 + -0x288);
                    uVar17 = *puVar30;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar30 + 1);
                    *puVar25 = uVar17;
                  }
                  lVar21 = **(long **)((long)register0x00000008 + -0x290);
                  uVar28 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar21 >> 2) *
                           -0x5555555555555555;
                  *(uint *)((long)register0x00000008 + -0x374) = uVar36;
                  if (lVar8 == uVar28 - 1) {
                    lVar8 = *(long *)((long)register0x00000008 + -0x2c0);
                    puVar25 = (undefined8 *)(lVar8 + lVar16);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar8 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    if (*(int *)((long)register0x00000008 + -0x394) < 0x79) {
                      lVar8 = *(long *)((long)register0x00000008 + -0x2d0);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x2c8) + 4) = 0x40000000
                      ;
                      *(undefined4 *)(lVar8 + 4) = 0x40000000;
                    }
                  }
                  else {
                    uVar20 = lVar8 + 1;
                    if (uVar28 < uVar20 || uVar28 - uVar20 == 0) goto LAB_10a5f7a1c;
                    puVar30 = (undefined8 *)(lVar21 + uVar20 * 0xc);
                    lVar8 = *(long *)((long)register0x00000008 + -0x2c0);
                    puVar25 = (undefined8 *)(lVar8 + lVar16);
                    uVar17 = *puVar30;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar30 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar8 + lVar15);
                    uVar17 = *puVar30;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar30 + 1);
                    *puVar25 = uVar17;
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(undefined4 *)((long)register0x00000008 + -0x374));
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(int *)((long)register0x00000008 + -0x374) + 2);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),uVar43);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(int *)((long)register0x00000008 + -0x374) + 3);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),uVar43);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),2);
                    uVar20 = (ulong)(*(int *)((long)register0x00000008 + -0x374) + 2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100));
                  }
                  if (1 < (uint)*(undefined8 *)((long)register0x00000008 + -0x2d8)) {
                    *(long *)((long)register0x00000008 + -0x328) =
                         *(long *)((long)register0x00000008 + -0x2c0) + lVar15;
                    *(long *)((long)register0x00000008 + -800) =
                         *(long *)((long)register0x00000008 + -0x2c0) + lVar16;
                    *(long *)((long)register0x00000008 + -0x330) =
                         *(long *)((long)register0x00000008 + -0x2b8) + lVar16;
                    puVar25 = (undefined8 *)(*(long *)((long)register0x00000008 + -0x2b8) + lVar15);
                    *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
                    *(ulong *)((long)register0x00000008 + -0x360) =
                         (ulong)(uint)(*(float *)((long)register0x00000008 + -0x39c) +
                                      *(float *)((long)register0x00000008 + -0x3a0) * fVar61);
                    iVar47 = *(int *)((long)register0x00000008 + -0x368) + -1;
                    iVar40 = *(int *)((long)register0x00000008 + -0x368) + -2;
                    uVar42 = *(uint *)((long)register0x00000008 + -0x398);
                    iVar45 = *(int *)((long)register0x00000008 + -0x374);
                    uVar28 = 1;
                    do {
                      fVar61 = (float)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x338)
                                            + (int)uVar28) /
                               *(float *)((long)register0x00000008 + -0x294);
                      fVar59 = fVar61 * 78.233 + fVar61 * 12.9898;
                      _sinf();
                      fVar59 = fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547);
                      *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
                      *(ulong *)((long)register0x00000008 + -0x2b0) = (ulong)(uint)fVar59;
                      fVar59 = fVar59 * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
                      *(ulong *)((long)register0x00000008 + -0x270) = (ulong)(uint)fVar59;
                      fVar59 = fVar61 * 78.233 + fVar59 * 12.9898;
                      _sinf();
                      fVar59 = (fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547)) * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
                      *(ulong *)((long)register0x00000008 + -0x280) = (ulong)(uint)fVar59;
                      fVar59 = fVar59 * 78.233 +
                               (float)*(undefined8 *)((long)register0x00000008 + -0x270) * 12.9898;
                      _sinf();
                      fVar59 = (fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547)) * 2.0 + -1.0;
                      if (*(ulong *)((long)register0x00000008 + -0x348) < uVar28) {
                        uVar20 = (ulong)*(uint *)(*(long *)((long)register0x00000008 + -0x350) +
                                                 0x10);
                        puVar11 = *(uint **)((long)register0x00000008 + -0x318);
                        func_0x00010a5f9694(puVar11,uVar20,
                                            *(undefined4 *)((long)register0x00000008 + -0x364));
                        uVar14 = *puVar11;
                        uVar34 = (ulong)uVar14;
                        uVar2 = puVar11[1];
                        uVar43 = (ulong)uVar2;
                        if (((int)uVar14 < 0) && ((int)uVar2 < 0)) goto LAB_10a5f5d9c;
                        uVar17 = **(undefined8 **)((long)register0x00000008 + -0x370);
                        fVar60 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x370) + 1)
                        ;
                        fVar51 = (float)uVar17;
                        fVar53 = (float)((ulong)uVar17 >> 0x20);
                        fVar52 = fVar60;
                        if (-1 < (int)uVar14) {
                          fVar61 = ((float)uVar42 / *(float *)((long)register0x00000008 + -0x294)) *
                                   78.233 + fVar61 * 12.9898;
                          _sinf();
                          lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                          uVar22 = (*(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20) -
                                    lVar8 >> 3) * -0x5555555555555555;
                          if (uVar22 < uVar34 || uVar22 - uVar34 == 0) goto LAB_10a5f7a1c;
                          plVar9 = (long *)(lVar8 + uVar34 * 0x18);
                          lVar8 = *plVar9;
                          uVar34 = (plVar9[1] - lVar8 >> 2) * -0x5555555555555555;
                          uVar22 = *(ulong *)((long)register0x00000008 + -0x288);
                          if (uVar34 < uVar22 || uVar34 - uVar22 == 0) goto LAB_10a5f7a1c;
                          fVar61 = fVar61 * 43758.547 - (float)(int)(fVar61 * 43758.547);
                          puVar30 = (undefined8 *)(lVar8 + uVar22 * 0xc);
                          fVar52 = 1.0 - fVar61;
                          uVar17 = *puVar30;
                          uVar17 = CONCAT44(fVar53 * fVar52 +
                                            (float)((ulong)uVar17 >> 0x20) * fVar61,
                                            fVar51 * fVar52 + (float)uVar17 * fVar61);
                          fVar52 = fVar52 * fVar60 + fVar61 * *(float *)(puVar30 + 1);
                        }
                        if (-1 < (int)uVar2) {
                          lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                          uVar34 = (*(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20) -
                                    lVar8 >> 3) * -0x5555555555555555;
                          if (uVar34 < uVar43 || uVar34 - uVar43 == 0) goto LAB_10a5f7a1c;
                          plVar9 = (long *)(lVar8 + uVar43 * 0x18);
                          lVar8 = *plVar9;
                          uVar34 = (plVar9[1] - lVar8 >> 2) * -0x5555555555555555;
                          uVar43 = *(ulong *)((long)register0x00000008 + -0x288);
                          if (uVar34 < uVar43 || uVar34 - uVar43 == 0) goto LAB_10a5f7a1c;
                          puVar30 = (undefined8 *)(lVar8 + uVar43 * 0xc);
                          fVar58 = (float)*(undefined8 *)((long)register0x00000008 + -0x2b0);
                          fVar61 = 1.0 - fVar58;
                          uVar55 = *puVar30;
                          uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar61 +
                                            (float)((ulong)uVar55 >> 0x20) * fVar58,
                                            (float)uVar17 * fVar61 + (float)uVar55 * fVar58);
                          fVar52 = fVar61 * fVar52 + fVar58 * *(float *)(puVar30 + 1);
                        }
                        fVar61 = (float)*(undefined8 *)((long)register0x00000008 + -0x390);
                        fVar51 = (float)*(undefined8 *)((long)register0x00000008 + -0x270) * fVar61
                                 + ((float)uVar17 - fVar51);
                        fVar53 = (float)*(undefined8 *)((long)register0x00000008 + -0x280) * fVar61
                                 + ((float)((ulong)uVar17 >> 0x20) - fVar53);
                        fVar61 = fVar61 * fVar59 + (fVar52 - fVar60);
                        uVar50 = 0x40000000;
                      }
                      else {
LAB_10a5f5d9c:
                        fVar61 = (float)*(undefined8 *)((long)register0x00000008 + -0x360);
                        fVar51 = (float)*(undefined8 *)((long)register0x00000008 + -0x270) * fVar61;
                        fVar53 = (float)*(undefined8 *)((long)register0x00000008 + -0x280) * fVar61;
                        fVar61 = fVar61 * fVar59;
                        uVar50 = 0x3f800000;
                      }
                      uVar2 = iVar41 + iVar45;
                      uVar14 = uVar2 + 1;
                      puVar30 = *(undefined8 **)((long)register0x00000008 + -0x300);
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x2f8) + 1);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2e0);
                      puVar38 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x2f8);
                      *puVar38 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar38 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar30 + 1);
                      puVar38 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar30;
                      *puVar38 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar38 + 1) = fVar61 + fVar59;
                      puVar30 = *(undefined8 **)((long)register0x00000008 + -0x328);
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -800) + 1);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2c0);
                      lVar15 = *(long *)((long)register0x00000008 + -0x2b8);
                      puVar38 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -800);
                      *puVar38 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar38 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar30 + 1);
                      puVar38 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar30;
                      *puVar38 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar38 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x330) + 1);
                      puVar30 = (undefined8 *)(lVar15 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x330);
                      *puVar30 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar30 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar25 + 1);
                      puVar30 = (undefined8 *)(lVar15 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar25;
                      *puVar30 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar30 + 1) = fVar61 + fVar59;
                      lVar8 = *(long *)((long)register0x00000008 + -0x2e8);
                      *(undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2) =
                           **(undefined8 **)((long)register0x00000008 + -0x308);
                      *(undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14) =
                           **(undefined8 **)((long)register0x00000008 + -0x310);
                      puVar31 = *(undefined4 **)((long)register0x00000008 + -0x2d0);
                      puVar39 = *(undefined4 **)((long)register0x00000008 + -0x2c8);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2f0);
                      puVar23 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      *puVar23 = *puVar39;
                      puVar18 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      *puVar18 = *puVar31;
                      puVar23[1] = puVar39[1];
                      puVar18[1] = puVar31[1];
                      puVar23[2] = uVar50;
                      puVar18[2] = uVar50;
                      if (*(ulong *)((long)register0x00000008 + -0x288) <
                          ((*(long **)((long)register0x00000008 + -0x290))[1] -
                           **(long **)((long)register0x00000008 + -0x290) >> 2) *
                          -0x5555555555555555 - 1U) {
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar40);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),(ulong)uVar2
                                     );
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar40);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar41 + iVar45 + 2);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar40);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar41 + iVar45 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar47);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar41 + iVar45 + 3);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar47);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar41 + iVar45 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar47);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),2);
                        uVar20 = (ulong)(iVar41 + iVar45 + 2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100));
                      }
                      uVar28 = uVar28 + 1;
                      iVar47 = iVar47 + *(int *)((long)register0x00000008 + -0x33c);
                      iVar40 = iVar40 + *(int *)((long)register0x00000008 + -0x33c);
                      iVar45 = iVar45 + iVar41;
                      uVar42 = uVar42 - 1;
                    } while (*(ulong *)((long)register0x00000008 + -0x2d8) != uVar28);
                  }
                  lVar16 = **(long **)((long)register0x00000008 + -0x290);
                  uVar28 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar16 >> 2) *
                           -0x5555555555555555;
                  iVar47 = *(int *)((long)register0x00000008 + -0x368) + 2;
                  if (uVar28 - 1 <= *(ulong *)((long)register0x00000008 + -0x288)) {
                    iVar47 = *(int *)((long)register0x00000008 + -0x368);
                  }
                  *(int *)((long)register0x00000008 + -0x368) = iVar47;
                  uVar36 = *(int *)((long)register0x00000008 + -0x374) + 2;
                  uVar34 = *(ulong *)((long)register0x00000008 + -0x288) + 1;
                } while (uVar34 < uVar28);
                lVar15 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20);
              }
              uVar36 = uVar36 + iVar41 * *(int *)((long)register0x00000008 + -0x3a4);
              *(int *)((long)register0x00000008 + -0x368) =
                   *(int *)((long)register0x00000008 + -0x368) +
                   *(int *)((long)register0x00000008 + -0x33c) *
                   *(int *)((long)register0x00000008 + -0x3a4);
              uVar28 = (ulong)(*(int *)((long)register0x00000008 + -0x364) + 1U);
              uVar34 = (lVar8 - lVar15 >> 3) * -0x5555555555555555;
              *(int *)((long)register0x00000008 + -0x398) =
                   *(int *)((long)register0x00000008 + -0x398) +
                   *(int *)((long)register0x00000008 + -0x3a8);
              *(long *)((long)register0x00000008 + -0x338) =
                   *(long *)((long)register0x00000008 + -0x338) +
                   *(long *)((long)register0x00000008 + -0x2d8);
              *(uint *)((long)register0x00000008 + -0x364) =
                   *(int *)((long)register0x00000008 + -0x364) + 1U;
            } while (uVar28 <= uVar34 && uVar34 - uVar28 != 0);
          }
          lVar8 = **(long **)((long)register0x00000008 + -0x350);
        } while (lVar8 != 0);
      }
    }
    else {
      *(undefined **)((long)register0x00000008 + -0x220) = &UNK_10f66a490;
      *(undefined8 *)((long)register0x00000008 + -0x218) = 0x3b;
      lVar15 = *(long *)((long)register0x00000008 + -0x318);
      if (lVar8 == 0) {
        FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x220));
        goto LAB_10a5f7a1c;
      }
      plVar9 = *(long **)(lVar15 + 0x630);
      if (plVar9 == (long *)0x0) {
        iVar41 = 0;
      }
      else {
        iVar41 = 0;
        do {
          iVar41 = iVar41 + (int)((ulong)(plVar9[4] - plVar9[3]) >> 3) * (int)plVar9[2] *
                            -0x55555555;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      uVar42 = *(uint *)(lVar15 + 0x570);
      iVar40 = *(int *)(lVar15 + 0x57c);
      *(ulong *)((long)register0x00000008 + -0x348) = (ulong)uVar42;
      iVar47 = iVar40 + uVar42;
      *(int *)((long)register0x00000008 + -0x3a4) = iVar47;
      uVar42 = iVar47 + 1;
      *(ulong *)((long)register0x00000008 + -0x2d8) = (ulong)uVar42;
      uVar42 = iVar41 * uVar42;
      if ((uVar42 >> 0xf & 0xffff) != 0) {
        FUN_10a185264((undefined1 *)((long)register0x00000008 + -0x220),0x100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),&UNK_10f66a4cc,0x46);
        __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0x100),0xffff);
        uVar20 = *(ulong *)((long)register0x00000008 + -0xf8);
        puVar7 = *(undefined1 **)((long)register0x00000008 + -0x100);
        if (-1 < (char)*(byte *)((long)register0x00000008 + -0xe9)) {
          uVar20 = (ulong)*(byte *)((long)register0x00000008 + -0xe9);
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x100);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),puVar7,uVar20);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  ((undefined1 *)((long)register0x00000008 + -0x220),&UNK_10f66a513,0x53);
        FUN_10a61d104((undefined1 *)((long)register0x00000008 + -0x220));
        goto LAB_10a5f7a1c;
      }
      fVar59 = *(float *)(lVar15 + 0x578);
      *(undefined4 *)((long)register0x00000008 + -0x39c) = *(undefined4 *)(lVar15 + 0x574);
      uVar49 = *(uint *)(lVar15 + 0x580);
      *(undefined8 *)((long)register0x00000008 + -0x388) = 0;
      *(ulong *)((long)register0x00000008 + -0x390) = (ulong)uVar49;
      *(undefined4 *)((long)register0x00000008 + -0x394) =
           *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0x170) + 0xa20) + 0x18);
      FUN_10ab4a154(lVar8,uVar42 * 2);
      uVar20 = (ulong)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x2d8) *
                            (iVar41 * 6 + -6));
      FUN_10ab4cb54(lVar8);
      uVar42 = *(uint *)(lVar8 + 0x110);
      lVar15 = *(long *)(lVar8 + 0x100);
      if (uVar42 == 0xffffffff) {
        lVar21 = 0;
        lVar16 = *(long *)(lVar8 + 0xf8);
      }
      else {
        lVar16 = *(long *)(lVar8 + 0xf8);
        uVar28 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar28 < uVar42 || uVar28 - uVar42 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar21 = lVar16 + (ulong)uVar42 * 0x38;
      }
      lVar29 = lVar16;
      if (lVar16 == lVar15) {
        lVar29 = 0;
        lVar56 = lVar16;
      }
      else {
        do {
          lVar56 = lVar29;
          if (*(long *)(lVar29 + 0x18) == lRam00000001137eb640) break;
          lVar29 = lVar29 + 0x38;
          lVar56 = lVar15;
        } while (lVar29 != lVar15);
        lVar57 = lVar16;
        lVar29 = 0;
        if (lVar56 != lVar15) {
          lVar29 = lVar56;
        }
        do {
          lVar56 = lVar57;
          if (*(long *)(lVar57 + 0x18) == lRam00000001137eb678) break;
          lVar57 = lVar57 + 0x38;
          lVar56 = lVar15;
        } while (lVar57 != lVar15);
      }
      uVar42 = *(uint *)(lVar8 + 0x120);
      lVar57 = lVar16;
      if (uVar42 == 0xffffffff) {
        lVar37 = 0;
      }
      else {
        uVar28 = (lVar15 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        if (uVar28 < uVar42 || uVar28 - uVar42 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        lVar37 = lVar16 + (ulong)uVar42 * 0x38;
      }
      for (; (lVar57 != lVar15 &&
             (lVar16 = lVar57, *(long *)(lVar57 + 0x18) != lRam00000001137eb6e8));
          lVar57 = lVar57 + 0x38) {
        lVar16 = lVar15;
      }
      if (((((((lVar21 == 0) || (*(int *)(lVar21 + 0x24) != 5)) || (lVar29 == 0)) ||
            ((*(int *)(lVar21 + 0x28) != 3 || (*(int *)(lVar29 + 0x24) != 5)))) ||
           ((lVar56 == lVar15 || ((lVar56 == 0 || (*(int *)(lVar29 + 0x28) != 3)))))) ||
          (*(int *)(lVar56 + 0x24) != 5)) ||
         ((((*(int *)(lVar56 + 0x28) != 3 || (lVar37 == 0)) || (*(int *)(lVar37 + 0x24) != 5)) ||
          (((lVar16 == lVar15 || (lVar16 == 0)) ||
           ((*(int *)(lVar37 + 0x28) != 2 ||
            ((*(int *)(lVar16 + 0x24) != 5 || (*(int *)(lVar16 + 0x28) != 4)))))))))) {
        FUN_10a3ee510(&UNK_10f66a567);
        goto LAB_10a5f7a1c;
      }
      lVar15 = *(long *)(lVar8 + 0x10);
      uVar42 = *(uint *)(lVar21 + 0x30);
      uVar49 = *(uint *)(lVar8 + 0xf0);
      uVar14 = *(uint *)(lVar29 + 0x30);
      uVar2 = *(uint *)(lVar56 + 0x30);
      uVar3 = *(uint *)(lVar37 + 0x30);
      uVar4 = *(uint *)(lVar16 + 0x30);
      FUN_10ab4ccac((undefined1 *)((long)register0x00000008 + -0x220),lVar8);
      lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x318) + 0x630);
      if (lVar8 != 0) {
        uVar36 = 0;
        *(undefined4 *)((long)register0x00000008 + -0x368) = 0;
        *(ulong *)((long)register0x00000008 + -0x2e0) = lVar15 + (ulong)uVar42;
        *(ulong *)((long)register0x00000008 + -0x2c0) = lVar15 + (ulong)uVar14;
        *(ulong *)((long)register0x00000008 + -0x2b8) = lVar15 + (ulong)uVar2;
        *(ulong *)((long)register0x00000008 + -0x2e8) = lVar15 + (ulong)uVar3;
        *(ulong *)((long)register0x00000008 + -0x2f0) = lVar15 + (ulong)uVar4;
        fVar61 = fVar59 * *(float *)((long)register0x00000008 + -0x39c);
        if (0.0 <= fVar59) {
          fVar61 = fVar59;
        }
        *(float *)((long)register0x00000008 + -0x3a0) = fVar61;
        *(int *)((long)register0x00000008 + -0x3a8) =
             ~(iVar40 + (int)*(undefined8 *)((long)register0x00000008 + -0x348));
        do {
          *(long *)((long)register0x00000008 + -0x350) = lVar8;
          lVar15 = *(long *)(lVar8 + 0x18);
          lVar8 = *(long *)(lVar8 + 0x20);
          if (lVar8 - lVar15 != 0) {
            *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
            uVar28 = 0;
            *(undefined4 *)((long)register0x00000008 + -0x364) = 0;
            uVar42 = (int)((ulong)(lVar8 - lVar15) >> 3) *
                     (int)*(undefined8 *)((long)register0x00000008 + -0x2d8) * -0x55555555;
            *(float *)((long)register0x00000008 + -0x294) = (float)uVar42;
            *(uint *)((long)register0x00000008 + -0x398) = uVar42 - 1;
            do {
              plVar9 = (long *)(lVar15 + uVar28 * 0x18);
              *(long **)((long)register0x00000008 + -0x290) = plVar9;
              lVar16 = *plVar9;
              lVar21 = plVar9[1];
              uVar28 = (lVar21 - lVar16 >> 2) * -0x5555555555555555;
              iVar41 = (int)uVar28 * 2;
              *(int *)((long)register0x00000008 + -0x33c) = iVar41 + -2;
              if (lVar21 != lVar16) {
                uVar34 = 0;
                do {
                  uVar43 = (ulong)(uVar36 + 1);
                  puVar38 = (undefined8 *)(lVar16 + uVar34 * 0xc);
                  lVar8 = *(long *)((long)register0x00000008 + -0x2e0);
                  puVar30 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar36);
                  uVar17 = *puVar38;
                  *(undefined4 *)(puVar30 + 1) = *(undefined4 *)(puVar38 + 1);
                  *puVar30 = uVar17;
                  puVar25 = (undefined8 *)(lVar8 + uVar49 * uVar43);
                  uVar17 = *puVar38;
                  *(undefined8 **)((long)register0x00000008 + -0x370) = puVar38;
                  *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar38 + 1);
                  *(undefined8 **)((long)register0x00000008 + -0x300) = puVar25;
                  *(undefined8 **)((long)register0x00000008 + -0x2f8) = puVar30;
                  *puVar25 = uVar17;
                  lVar8 = *(long *)((long)register0x00000008 + -0x2f0);
                  puVar31 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar36);
                  *puVar31 = 0x3f800000;
                  puVar39 = (undefined4 *)(lVar8 + uVar49 * uVar43);
                  *puVar39 = 0xbf800000;
                  fVar61 = (float)uVar34 / (float)(uVar28 - 1);
                  lVar15 = (ulong)uVar49 * (ulong)uVar36;
                  lVar8 = uVar49 * uVar43;
                  iVar47 = *(int *)((long)register0x00000008 + -0x394);
                  fVar59 = fVar61;
                  if (iVar47 < 0x79) {
                    fVar59 = 0.0;
                  }
                  puVar31[1] = fVar59;
                  puVar39[1] = fVar59;
                  puVar31[2] = 0;
                  puVar39[2] = 0;
                  *(undefined4 **)((long)register0x00000008 + -0x2d0) = puVar39;
                  *(undefined4 **)((long)register0x00000008 + -0x2c8) = puVar31;
                  puVar31[3] = 0;
                  puVar39[3] = 0;
                  lVar16 = *(long *)((long)register0x00000008 + -0x2e8);
                  puVar39 = (undefined4 *)(lVar16 + (ulong)uVar49 * (ulong)uVar36);
                  *puVar39 = 0;
                  puVar39[1] = 1.0 - fVar61;
                  puVar31 = (undefined4 *)(lVar16 + uVar49 * uVar43);
                  *puVar31 = 0x3f800000;
                  *(undefined4 **)((long)register0x00000008 + -0x310) = puVar31;
                  *(undefined4 **)((long)register0x00000008 + -0x308) = puVar39;
                  puVar31[1] = 1.0 - fVar61;
                  *(ulong *)((long)register0x00000008 + -0x288) = uVar34;
                  if (uVar34 == 0) {
                    lVar16 = *(long *)((long)register0x00000008 + -0x2b8);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar16 + lVar8);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    lVar16 = 0;
                    if (iVar47 < 0x79) {
                      lVar21 = *(long *)((long)register0x00000008 + -0x2d0);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x2c8) + 4) = 0x3f800000
                      ;
                      *(undefined4 *)(lVar21 + 4) = 0x3f800000;
                    }
                  }
                  else {
                    uVar34 = uVar34 - 1;
                    lVar16 = **(long **)((long)register0x00000008 + -0x290);
                    uVar28 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar16 >> 2) *
                             -0x5555555555555555;
                    if (uVar28 < uVar34 || uVar28 - uVar34 == 0) goto LAB_10a5f7a1c;
                    puVar30 = (undefined8 *)(lVar16 + uVar34 * 0xc);
                    lVar16 = *(long *)((long)register0x00000008 + -0x2b8);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    uVar17 = *puVar30;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar30 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar16 + lVar8);
                    lVar16 = *(long *)((long)register0x00000008 + -0x288);
                    uVar17 = *puVar30;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar30 + 1);
                    *puVar25 = uVar17;
                  }
                  lVar21 = **(long **)((long)register0x00000008 + -0x290);
                  uVar28 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar21 >> 2) *
                           -0x5555555555555555;
                  *(uint *)((long)register0x00000008 + -0x374) = uVar36;
                  if (lVar16 == uVar28 - 1) {
                    lVar16 = *(long *)((long)register0x00000008 + -0x2c0);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    puVar25 = (undefined8 *)(lVar16 + lVar8);
                    *puVar25 = 0;
                    *(undefined4 *)(puVar25 + 1) = 0;
                    if (*(int *)((long)register0x00000008 + -0x394) < 0x79) {
                      lVar16 = *(long *)((long)register0x00000008 + -0x2d0);
                      *(undefined4 *)(*(long *)((long)register0x00000008 + -0x2c8) + 4) = 0x40000000
                      ;
                      *(undefined4 *)(lVar16 + 4) = 0x40000000;
                    }
                  }
                  else {
                    uVar20 = lVar16 + 1;
                    if (uVar28 < uVar20 || uVar28 - uVar20 == 0) goto LAB_10a5f7a1c;
                    puVar30 = (undefined8 *)(lVar21 + uVar20 * 0xc);
                    lVar16 = *(long *)((long)register0x00000008 + -0x2c0);
                    puVar25 = (undefined8 *)(lVar16 + lVar15);
                    uVar17 = *puVar30;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar30 + 1);
                    *puVar25 = uVar17;
                    puVar25 = (undefined8 *)(lVar16 + lVar8);
                    uVar17 = *puVar30;
                    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar30 + 1);
                    *puVar25 = uVar17;
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(undefined4 *)((long)register0x00000008 + -0x374));
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(int *)((long)register0x00000008 + -0x374) + 2);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(undefined4 *)((long)register0x00000008 + -0x368));
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),uVar43);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),0);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                  *(int *)((long)register0x00000008 + -0x374) + 3);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),1);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),uVar43);
                    FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                  (undefined1 *)((long)register0x00000008 + -0x220),
                                  *(int *)((long)register0x00000008 + -0x368) + 1);
                    FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                  (undefined1 *)((long)register0x00000008 + -0x238),2);
                    uVar20 = (ulong)(*(int *)((long)register0x00000008 + -0x374) + 2);
                    FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100));
                  }
                  if (1 < (uint)*(undefined8 *)((long)register0x00000008 + -0x2d8)) {
                    *(long *)((long)register0x00000008 + -0x328) =
                         *(long *)((long)register0x00000008 + -0x2c0) + lVar8;
                    *(long *)((long)register0x00000008 + -800) =
                         *(long *)((long)register0x00000008 + -0x2c0) + lVar15;
                    *(long *)((long)register0x00000008 + -0x330) =
                         *(long *)((long)register0x00000008 + -0x2b8) + lVar15;
                    puVar25 = (undefined8 *)(*(long *)((long)register0x00000008 + -0x2b8) + lVar8);
                    *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
                    *(ulong *)((long)register0x00000008 + -0x360) =
                         (ulong)(uint)(*(float *)((long)register0x00000008 + -0x39c) +
                                      *(float *)((long)register0x00000008 + -0x3a0) * fVar61);
                    iVar47 = *(int *)((long)register0x00000008 + -0x368) + -1;
                    iVar40 = *(int *)((long)register0x00000008 + -0x368) + -2;
                    uVar42 = *(uint *)((long)register0x00000008 + -0x398);
                    iVar45 = *(int *)((long)register0x00000008 + -0x374);
                    uVar28 = 1;
                    do {
                      fVar61 = (float)(uint)((int)*(undefined8 *)((long)register0x00000008 + -0x338)
                                            + (int)uVar28) /
                               *(float *)((long)register0x00000008 + -0x294);
                      fVar59 = fVar61 * 78.233 + fVar61 * 12.9898;
                      _sinf();
                      fVar59 = fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547);
                      *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
                      *(ulong *)((long)register0x00000008 + -0x2b0) = (ulong)(uint)fVar59;
                      fVar59 = fVar59 * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
                      *(ulong *)((long)register0x00000008 + -0x270) = (ulong)(uint)fVar59;
                      fVar59 = fVar61 * 78.233 + fVar59 * 12.9898;
                      _sinf();
                      fVar59 = (fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547)) * 2.0 + -1.0;
                      *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
                      *(ulong *)((long)register0x00000008 + -0x280) = (ulong)(uint)fVar59;
                      fVar59 = fVar59 * 78.233 +
                               (float)*(undefined8 *)((long)register0x00000008 + -0x270) * 12.9898;
                      _sinf();
                      fVar59 = (fVar59 * 43758.547 - (float)(int)(fVar59 * 43758.547)) * 2.0 + -1.0;
                      if (*(ulong *)((long)register0x00000008 + -0x348) < uVar28) {
                        uVar20 = (ulong)*(uint *)(*(long *)((long)register0x00000008 + -0x350) +
                                                 0x10);
                        puVar11 = *(uint **)((long)register0x00000008 + -0x318);
                        func_0x00010a5f9694(puVar11,uVar20,
                                            *(undefined4 *)((long)register0x00000008 + -0x364));
                        uVar14 = *puVar11;
                        uVar34 = (ulong)uVar14;
                        uVar2 = puVar11[1];
                        uVar43 = (ulong)uVar2;
                        if (((int)uVar14 < 0) && ((int)uVar2 < 0)) goto LAB_10a5f6880;
                        uVar17 = **(undefined8 **)((long)register0x00000008 + -0x370);
                        fVar60 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x370) + 1)
                        ;
                        fVar51 = (float)uVar17;
                        fVar53 = (float)((ulong)uVar17 >> 0x20);
                        fVar52 = fVar60;
                        if (-1 < (int)uVar14) {
                          fVar61 = ((float)uVar42 / *(float *)((long)register0x00000008 + -0x294)) *
                                   78.233 + fVar61 * 12.9898;
                          _sinf();
                          lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                          uVar22 = (*(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20) -
                                    lVar8 >> 3) * -0x5555555555555555;
                          if (uVar22 < uVar34 || uVar22 - uVar34 == 0) goto LAB_10a5f7a1c;
                          plVar9 = (long *)(lVar8 + uVar34 * 0x18);
                          lVar8 = *plVar9;
                          uVar34 = (plVar9[1] - lVar8 >> 2) * -0x5555555555555555;
                          uVar22 = *(ulong *)((long)register0x00000008 + -0x288);
                          if (uVar34 < uVar22 || uVar34 - uVar22 == 0) goto LAB_10a5f7a1c;
                          fVar61 = fVar61 * 43758.547 - (float)(int)(fVar61 * 43758.547);
                          puVar30 = (undefined8 *)(lVar8 + uVar22 * 0xc);
                          fVar52 = 1.0 - fVar61;
                          uVar17 = *puVar30;
                          uVar17 = CONCAT44(fVar53 * fVar52 +
                                            (float)((ulong)uVar17 >> 0x20) * fVar61,
                                            fVar51 * fVar52 + (float)uVar17 * fVar61);
                          fVar52 = fVar52 * fVar60 + fVar61 * *(float *)(puVar30 + 1);
                        }
                        if (-1 < (int)uVar2) {
                          lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                          uVar34 = (*(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20) -
                                    lVar8 >> 3) * -0x5555555555555555;
                          if (uVar34 < uVar43 || uVar34 - uVar43 == 0) goto LAB_10a5f7a1c;
                          plVar9 = (long *)(lVar8 + uVar43 * 0x18);
                          lVar8 = *plVar9;
                          uVar34 = (plVar9[1] - lVar8 >> 2) * -0x5555555555555555;
                          uVar43 = *(ulong *)((long)register0x00000008 + -0x288);
                          if (uVar34 < uVar43 || uVar34 - uVar43 == 0) goto LAB_10a5f7a1c;
                          puVar30 = (undefined8 *)(lVar8 + uVar43 * 0xc);
                          fVar58 = (float)*(undefined8 *)((long)register0x00000008 + -0x2b0);
                          fVar61 = 1.0 - fVar58;
                          uVar55 = *puVar30;
                          uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar61 +
                                            (float)((ulong)uVar55 >> 0x20) * fVar58,
                                            (float)uVar17 * fVar61 + (float)uVar55 * fVar58);
                          fVar52 = fVar61 * fVar52 + fVar58 * *(float *)(puVar30 + 1);
                        }
                        fVar61 = (float)*(undefined8 *)((long)register0x00000008 + -0x390);
                        fVar51 = (float)*(undefined8 *)((long)register0x00000008 + -0x270) * fVar61
                                 + ((float)uVar17 - fVar51);
                        fVar53 = (float)*(undefined8 *)((long)register0x00000008 + -0x280) * fVar61
                                 + ((float)((ulong)uVar17 >> 0x20) - fVar53);
                        fVar61 = fVar61 * fVar59 + (fVar52 - fVar60);
                        uVar50 = 0x40000000;
                      }
                      else {
LAB_10a5f6880:
                        fVar61 = (float)*(undefined8 *)((long)register0x00000008 + -0x360);
                        fVar51 = (float)*(undefined8 *)((long)register0x00000008 + -0x270) * fVar61;
                        fVar53 = (float)*(undefined8 *)((long)register0x00000008 + -0x280) * fVar61;
                        fVar61 = fVar61 * fVar59;
                        uVar50 = 0x3f800000;
                      }
                      uVar2 = iVar41 + iVar45;
                      uVar14 = uVar2 + 1;
                      puVar30 = *(undefined8 **)((long)register0x00000008 + -0x300);
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x2f8) + 1);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2e0);
                      puVar38 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x2f8);
                      *puVar38 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar38 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar30 + 1);
                      puVar38 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar30;
                      *puVar38 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar38 + 1) = fVar61 + fVar59;
                      puVar30 = *(undefined8 **)((long)register0x00000008 + -0x328);
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -800) + 1);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2c0);
                      lVar15 = *(long *)((long)register0x00000008 + -0x2b8);
                      puVar38 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -800);
                      *puVar38 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar38 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar30 + 1);
                      puVar38 = (undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar30;
                      *puVar38 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar38 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(*(undefined8 **)((long)register0x00000008 + -0x330) + 1);
                      puVar30 = (undefined8 *)(lVar15 + (ulong)uVar49 * (ulong)uVar2);
                      uVar17 = **(undefined8 **)((long)register0x00000008 + -0x330);
                      *puVar30 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar30 + 1) = fVar61 + fVar59;
                      fVar59 = *(float *)(puVar25 + 1);
                      puVar30 = (undefined8 *)(lVar15 + (ulong)uVar49 * (ulong)uVar14);
                      uVar17 = *puVar25;
                      *puVar30 = CONCAT44(fVar53 + (float)((ulong)uVar17 >> 0x20),
                                          fVar51 + (float)uVar17);
                      *(float *)(puVar30 + 1) = fVar61 + fVar59;
                      lVar8 = *(long *)((long)register0x00000008 + -0x2e8);
                      *(undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2) =
                           **(undefined8 **)((long)register0x00000008 + -0x308);
                      *(undefined8 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14) =
                           **(undefined8 **)((long)register0x00000008 + -0x310);
                      puVar31 = *(undefined4 **)((long)register0x00000008 + -0x2d0);
                      puVar39 = *(undefined4 **)((long)register0x00000008 + -0x2c8);
                      lVar8 = *(long *)((long)register0x00000008 + -0x2f0);
                      puVar23 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar2);
                      *puVar23 = *puVar39;
                      puVar18 = (undefined4 *)(lVar8 + (ulong)uVar49 * (ulong)uVar14);
                      *puVar18 = *puVar31;
                      puVar23[1] = puVar39[1];
                      puVar18[1] = puVar31[1];
                      puVar23[2] = uVar50;
                      puVar18[2] = uVar50;
                      puVar23[3] = (float)(uVar28 & 0xffffffff);
                      puVar18[3] = (float)(uVar28 & 0xffffffff);
                      if (*(ulong *)((long)register0x00000008 + -0x288) <
                          ((*(long **)((long)register0x00000008 + -0x290))[1] -
                           **(long **)((long)register0x00000008 + -0x290) >> 2) *
                          -0x5555555555555555 - 1U) {
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar40);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),(ulong)uVar2
                                     );
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar40);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar41 + iVar45 + 2);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar40);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar41 + iVar45 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar47);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),0);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar41 + iVar45 + 3);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar47);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),1);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100),
                                      iVar41 + iVar45 + 1);
                        FUN_10ab4e710((undefined1 *)((long)register0x00000008 + -0x238),
                                      (undefined1 *)((long)register0x00000008 + -0x220),
                                      iVar41 + iVar47);
                        FUN_10ab4e794((undefined1 *)((long)register0x00000008 + -0x100),
                                      (undefined1 *)((long)register0x00000008 + -0x238),2);
                        uVar20 = (ulong)(iVar41 + iVar45 + 2);
                        FUN_10a557ab0((undefined1 *)((long)register0x00000008 + -0x100));
                      }
                      uVar28 = uVar28 + 1;
                      iVar47 = iVar47 + *(int *)((long)register0x00000008 + -0x33c);
                      iVar40 = iVar40 + *(int *)((long)register0x00000008 + -0x33c);
                      iVar45 = iVar45 + iVar41;
                      uVar42 = uVar42 - 1;
                    } while (*(ulong *)((long)register0x00000008 + -0x2d8) != uVar28);
                  }
                  lVar16 = **(long **)((long)register0x00000008 + -0x290);
                  uVar28 = ((*(long **)((long)register0x00000008 + -0x290))[1] - lVar16 >> 2) *
                           -0x5555555555555555;
                  iVar47 = *(int *)((long)register0x00000008 + -0x368) + 2;
                  if (uVar28 - 1 <= *(ulong *)((long)register0x00000008 + -0x288)) {
                    iVar47 = *(int *)((long)register0x00000008 + -0x368);
                  }
                  *(int *)((long)register0x00000008 + -0x368) = iVar47;
                  uVar36 = *(int *)((long)register0x00000008 + -0x374) + 2;
                  uVar34 = *(ulong *)((long)register0x00000008 + -0x288) + 1;
                } while (uVar34 < uVar28);
                lVar15 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x18);
                lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0x350) + 0x20);
              }
              uVar36 = uVar36 + iVar41 * *(int *)((long)register0x00000008 + -0x3a4);
              *(int *)((long)register0x00000008 + -0x368) =
                   *(int *)((long)register0x00000008 + -0x368) +
                   *(int *)((long)register0x00000008 + -0x33c) *
                   *(int *)((long)register0x00000008 + -0x3a4);
              uVar28 = (ulong)(*(int *)((long)register0x00000008 + -0x364) + 1U);
              uVar34 = (lVar8 - lVar15 >> 3) * -0x5555555555555555;
              *(int *)((long)register0x00000008 + -0x398) =
                   *(int *)((long)register0x00000008 + -0x398) +
                   *(int *)((long)register0x00000008 + -0x3a8);
              *(long *)((long)register0x00000008 + -0x338) =
                   *(long *)((long)register0x00000008 + -0x338) +
                   *(long *)((long)register0x00000008 + -0x2d8);
              *(uint *)((long)register0x00000008 + -0x364) =
                   *(int *)((long)register0x00000008 + -0x364) + 1U;
            } while (uVar28 <= uVar34 && uVar34 - uVar28 != 0);
          }
          lVar8 = **(long **)((long)register0x00000008 + -0x350);
        } while (lVar8 != 0);
      }
    }
    (**(code **)(**(long **)(*(long *)((long)register0x00000008 + -0x318) + 0x5b0) + 0xa0))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0xb8))
    goto LAB_10a5f78a4;
    unaff_x19 = *(long **)((long)register0x00000008 + -0x318);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined1 **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x27 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_d10 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_d13 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_d12 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_d15 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_d14 = *(undefined8 *)((long)register0x00000008 + -0x98);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((((*(byte *)((long)unaff_x19 + 0x59c) & 1) != 0) ||
        (*(char *)((long)unaff_x19 + 0x59d) == '\x01')) &&
       (plVar9 = (long *)unaff_x19[0xb1], plVar9 != (long *)0x0)) {
      (**(code **)(*unaff_x19 + 0x50))((undefined1 *)((long)register0x00000008 + -0x80));
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      if (*(long *)((long)register0x00000008 + -0x78) != 0) {
        plVar10 = (long *)(*(long *)((long)register0x00000008 + -0x78) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        unaff_x20 = *(long **)((long)register0x00000008 + -0x78);
        if (unaff_x20 != (long *)0x0) {
          plVar10 = unaff_x20 + 1;
          do {
            lVar8 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
            unaff_x19 = unaff_x20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      if ((char)plVar9[8] == '\x01') {
        pcVar19 = (code *)*plVar9;
        *(undefined8 *)((long)register0x00000008 + -0x78) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        if (*(long *)((long)register0x00000008 + -0xa8) != 0) {
          plVar10 = (long *)(*(long *)((long)register0x00000008 + -0xa8) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = *plVar10 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        unaff_x19 = (long *)((long)register0x00000008 + -0x80);
        (*pcVar19)(unaff_x19,plVar9);
        plVar9 = *(long **)((long)register0x00000008 + -0x78);
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 1;
          do {
            lVar8 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_10a5f93e4:
          if (lVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            unaff_x19 = plVar9;
          }
        }
      }
      else if ((char)plVar9[8] == '\x02') {
        unaff_x20 = plVar9;
        FUN_10a688b40();
        if (unaff_x20 == (long *)0x0) {
          unaff_x19 = (long *)0x0;
          if (uVar20 != 0) {
            lVar15 = plVar9[1];
            lVar8 = *plVar9;
            if (plVar9[1] != 0) {
              plVar9 = (long *)(plVar9[1] + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar6) {
                  *plVar9 = *plVar9 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uVar17 = *(undefined8 *)((long)register0x00000008 + -0xb0);
            plVar9 = *(long **)((long)register0x00000008 + -0xa8);
            *(undefined8 *)((long)register0x00000008 + -0x90) = uVar17;
            *(long **)((long)register0x00000008 + -0x88) = plVar9;
            if (plVar9 != (long *)0x0) {
              plVar10 = plVar9 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar6) {
                  *plVar10 = *plVar10 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            *(code **)((long)register0x00000008 + -0x80) = FUN_10a61d4dc;
            *(undefined ***)((long)register0x00000008 + -0x78) = &PTR_FUN_110c00ea0;
            *(long *)((long)register0x00000008 + -0x68) = lVar15;
            *(long *)((long)register0x00000008 + -0x70) = lVar8;
            *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x60) = uVar17;
            *(long **)((long)register0x00000008 + -0x58) = plVar9;
            if (plVar9 != (long *)0x0) {
              plVar10 = plVar9 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar6) {
                  *plVar10 = *plVar10 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            unaff_x20 = (long *)((long)register0x00000008 + -0xa0);
            unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x80);
            FUN_10a4634ec(uVar20,(undefined1 *)((long)register0x00000008 + -0x80));
            unaff_x19 = (long *)((long)register0x00000008 + -0x78);
            (*(code *)**(undefined8 **)((long)register0x00000008 + -0x78))();
            if (plVar9 != (long *)0x0) {
              plVar10 = plVar9 + 1;
              do {
                lVar8 = *plVar10;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar6) {
                  *plVar10 = lVar8 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                unaff_x19 = plVar9;
              }
            }
            plVar9 = *(long **)((long)register0x00000008 + -0x98);
            if (plVar9 != (long *)0x0) {
              plVar10 = plVar9 + 1;
              do {
                lVar8 = *plVar10;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar6) {
                  *plVar10 = lVar8 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_10a5f93e4;
            }
          }
        }
        else {
          *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
          unaff_x19 = (long *)*plVar9;
          FUN_10a61d2d0(unaff_x19,(undefined1 *)((long)register0x00000008 + -0xb0));
          iVar41 = *(int *)((long)unaff_x20 + 4) + -1;
          *(int *)((long)unaff_x20 + 4) = iVar41;
          if (iVar41 == 0) {
            *(undefined4 *)unaff_x20 = 0;
          }
        }
      }
      plVar9 = *(long **)((long)register0x00000008 + -0xa8);
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar8 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          unaff_x19 = plVar9;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x78))(unaff_x21 + 8);
    FUN_10a61be10(unaff_x20 + 2);
    func_0x00010a004dac((undefined1 *)((long)register0x00000008 + -0xa0));
    FUN_10a61be10((undefined1 *)((long)register0x00000008 + -0xb0));
    unaff_x30 = FUN_10a5f95c8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0xd;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    goto code_r0x00010a5f4cb0;
  }
  if ((*(byte *)((long)param_1 + 0x59c) & 1) != 0) {
    if (plVar9 == (long *)0x0) {
LAB_10a5f4e60:
      if ((uint)(*(int *)(*(long *)(param_1[0x2e] + 0x850) + 0x2c) - (int)param_1[0xb5]) < 2)
      goto LAB_10a5f770c;
      FUN_10a5f4bcc(param_1);
      if (plVar9 != (long *)0x0) goto LAB_10a5f4f24;
      lVar8 = 0;
    }
    else {
      lVar8 = plVar9[0x45];
      FUN_10a5fbd7c();
      if (lVar8 == param_1[0xb4]) goto LAB_10a5f4e60;
      FUN_10a5f4bcc(param_1);
LAB_10a5f4f24:
      lVar8 = plVar9[0x45];
      FUN_10a5fbd7c();
    }
    param_1[0xb4] = lVar8;
    goto LAB_10a5f770c;
  }
  plVar9 = param_1;
  FUN_10a5f7bec();
  *(char *)((long)param_1 + 0x59c) = (char)plVar9;
  if ((int)plVar9 == 0) goto LAB_10a5f770c;
  uVar20 = (ulong)*(byte *)(param_1[0x2e] + 0x29);
  if (5 < uVar20) goto LAB_10a5f7a1c;
  plVar9 = *(long **)(param_1[0x2e] + uVar20 * 8 + 0x30);
  (**(code **)(*plVar9 + 0x18))();
  if ((int)plVar9 == 0) {
    if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f66828f,&UNK_10f668524,0x38c,&UNK_10f66856b);
    }
  }
  else {
    plVar9 = param_1 + 0xb6;
    plVar10 = (long *)param_1[0xb6];
    if ((plVar10 == (long *)0x0) || ((**(code **)(*plVar10 + 0x90))(), *plVar10 == 0)) {
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x220);
      FUN_10a0d0194((undefined1 *)((long)register0x00000008 + -0x238));
      FUN_10ab6e728();
      param_1 = *(long **)((long)register0x00000008 + -0x318);
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x100),*puVar25,puVar25[1]);
      }
      else {
        uVar55 = puVar25[1];
        uVar17 = *puVar25;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = puVar25[2];
        *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar55;
        *(undefined8 *)((long)register0x00000008 + -0x100) = uVar17;
      }
      *(undefined8 *)((long)register0x00000008 + -0xe8) = puVar25[3];
      uVar50 = *(undefined4 *)(puVar25 + 6);
      uVar17 = puVar25[4];
      *(undefined8 *)((long)register0x00000008 + -0xd8) = puVar25[5];
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar17;
      *(undefined4 *)((long)register0x00000008 + -0xd0) = uVar50;
      FUN_10ab6f520((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x100),1);
      lVar8 = *(long *)((long)register0x00000008 + -0x238);
      *(undefined4 *)(lVar8 + 0xf0) = *(undefined4 *)((long)register0x00000008 + -0x220);
      if ((undefined4 *)(lVar8 + 0xf0) != (undefined4 *)((long)register0x00000008 + -0x220)) {
        FUN_10a1903c4(lVar8 + 0xf8,*(long *)((long)register0x00000008 + -0x218),
                      *(long *)((long)register0x00000008 + -0x210),
                      (*(long *)((long)register0x00000008 + -0x210) -
                       *(long *)((long)register0x00000008 + -0x218) >> 3) * 0x6db6db6db6db6db7);
      }
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x200);
      uVar54 = *(undefined8 *)((long)register0x00000008 + -0x1e8);
      uVar55 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
      *(undefined8 *)(lVar8 + 0x118) = *(undefined8 *)((long)register0x00000008 + -0x1f8);
      *(undefined8 *)(lVar8 + 0x110) = uVar17;
      *(undefined8 *)(lVar8 + 0x128) = uVar54;
      *(undefined8 *)(lVar8 + 0x120) = uVar55;
      *(undefined8 *)(lVar8 + 0x130) = *(undefined8 *)((long)register0x00000008 + -0x1e0);
      *(undefined1 **)((long)register0x00000008 + -0x250) =
           (undefined1 *)((long)register0x00000008 + -0x218);
      func_0x00010a190844((undefined1 *)((long)register0x00000008 + -0x250));
      *(undefined8 *)(*(long *)((long)register0x00000008 + -0x238) + 0xe8) = 0x100000000;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
      FUN_10a1995d0((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x250),
                    (undefined1 *)((long)register0x00000008 + -0x100),
                    (undefined1 *)((long)register0x00000008 + -0x238));
      func_0x00010a19a938(plVar9,(undefined1 *)((long)register0x00000008 + -0x220));
      plVar10 = *(long **)((long)register0x00000008 + -0x218);
      if (plVar10 != (long *)0x0) {
        plVar44 = plVar10 + 1;
        do {
          lVar8 = *plVar44;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar6) {
            *plVar44 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = (long *)*plVar9;
      if (*(char *)((long)plVar10 + 0xb9) != '\0') {
        *(undefined1 *)((long)plVar10 + 0xb9) = 0;
        (**(code **)(*plVar10 + 0xa0))();
      }
      *(long *)((long)register0x00000008 + -0x100) = param_1[0x2e];
      FUN_10a2db3d8((undefined1 *)((long)register0x00000008 + -0x220),
                    (undefined1 *)((long)register0x00000008 + -0x100),plVar9);
      *(undefined8 *)((long)register0x00000008 + -0xf8) =
           *(undefined8 *)((long)register0x00000008 + -0x218);
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x220);
      if (*(long *)((long)register0x00000008 + -0x218) != 0) {
        plVar10 = (long *)(*(long *)((long)register0x00000008 + -0x218) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a426824(param_1,(undefined1 *)((long)register0x00000008 + -0x100));
      plVar10 = *(long **)((long)register0x00000008 + -0xf8);
      if (plVar10 != (long *)0x0) {
        plVar44 = plVar10 + 1;
        do {
          lVar8 = *plVar44;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar6) {
            *plVar44 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      lVar8 = param_1[0xaa];
      *(long *)((long)register0x00000008 + -0x250) = param_1[0xa9];
      *(long *)((long)register0x00000008 + -0x248) = lVar8;
      if (lVar8 != 0) {
        plVar10 = (long *)(lVar8 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a42646c(param_1,(undefined1 *)((long)register0x00000008 + -0x250));
      plVar10 = *(long **)((long)register0x00000008 + -0x248);
      if (plVar10 != (long *)0x0) {
        plVar44 = plVar10 + 1;
        do {
          lVar8 = *plVar44;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar6) {
            *plVar44 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = *(long **)((long)register0x00000008 + -0x218);
      if (plVar10 != (long *)0x0) {
        plVar44 = plVar10 + 1;
        do {
          lVar8 = *plVar44;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar6) {
            *plVar44 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = *(long **)((long)register0x00000008 + -0x230);
      if (plVar10 != (long *)0x0) {
        plVar44 = plVar10 + 1;
        do {
          lVar8 = *plVar44;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar6) {
            *plVar44 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
    plVar10 = (long *)param_1[0xc6];
    if (plVar10 == (long *)0x0) {
      uVar42 = 0;
    }
    else {
      uVar42 = 0;
      do {
        if (uVar42 <= *(uint *)(plVar10 + 2)) {
          uVar42 = *(uint *)(plVar10 + 2);
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
      uVar42 = uVar42 << 1;
    }
    plVar10 = (long *)*plVar9;
    (**(code **)(*plVar10 + 0x90))();
    lVar8 = *plVar10;
    uVar49 = *(uint *)(lVar8 + 0xf0);
    uVar14 = 0;
    if (uVar49 != 0) {
      uVar14 = 0;
      if ((ulong)uVar49 != 0) {
        uVar14 = (uint)((ulong)(*(long *)(lVar8 + 0x18) - *(long *)(lVar8 + 0x10)) / (ulong)uVar49);
      }
    }
    param_1 = *(long **)((long)register0x00000008 + -0x318);
    if (uVar14 < uVar42) {
      FUN_10ab4a154(lVar8,(ulong)uVar42);
      uVar49 = *(uint *)(lVar8 + 0x110);
      if (uVar49 != 0xffffffff) {
        lVar15 = *(long *)(lVar8 + 0xf8);
        uVar20 = (*(long *)(lVar8 + 0x100) - lVar15 >> 3) * 0x6db6db6db6db6db7;
        if (uVar20 < uVar49 || uVar20 - uVar49 == 0) {
          FUN_10ab725fc();
          goto LAB_10a5f7a1c;
        }
        if (((lVar15 != 0) && (lVar15 = lVar15 + (ulong)uVar49 * 0x38, *(int *)(lVar15 + 0x24) == 5)
            ) && (*(int *)(lVar15 + 0x28) == 3)) {
          uVar49 = 0;
          uVar20 = 0;
          puVar31 = (undefined4 *)(*(long *)(lVar8 + 0x10) + (ulong)*(uint *)(lVar15 + 0x30));
          uVar14 = *(uint *)(lVar8 + 0xf0);
          do {
            *puVar31 = 0xbf800000;
            puVar31[1] = (float)uVar49;
            puVar31[2] = 0;
            puVar39 = (undefined4 *)((long)puVar31 + (ulong)uVar14);
            *puVar39 = 0x3f800000;
            puVar39[1] = (float)uVar49;
            puVar39[2] = 0;
            uVar20 = uVar20 + 2;
            uVar49 = uVar49 + 1;
            puVar31 = (undefined4 *)((long)puVar31 + (ulong)uVar14 * 2);
          } while (uVar20 < uVar42);
          (**(code **)(*(long *)*plVar9 + 0xa0))();
          param_1 = *(long **)((long)register0x00000008 + -0x318);
          goto LAB_10a5f71ac;
        }
      }
      FUN_10a3ee510(&UNK_10f66859d);
      goto LAB_10a5f7a1c;
    }
  }
LAB_10a5f71ac:
  plVar10 = param_1;
  FUN_10a5f9ad8(param_1);
  plVar44 = (long *)param_1[0xa2];
  for (plVar9 = (long *)param_1[0xa1]; plVar9 != plVar44; plVar9 = plVar9 + 2) {
    plVar13 = (long *)plVar9[1];
    if (plVar13 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long **)((long)register0x00000008 + -0x218) = plVar13;
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar9;
        *(long *)((long)register0x00000008 + -0x220) = lVar8;
        if (lVar8 != 0) {
          FUN_10aa19b04();
        }
        plVar48 = plVar13 + 1;
        do {
          lVar8 = *plVar48;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar48,0x10);
          if (bVar6) {
            *plVar48 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
  }
  plVar9 = (long *)param_1[0xc6];
  if (plVar9 != (long *)0x0) {
    plVar44 = param_1 + 0xba;
    plVar13 = param_1 + 0xbc;
    do {
      plVar12 = (long *)0x2758;
      __Znwm();
      FUN_10a8f278c();
      uVar42 = *(uint *)(plVar9 + 2);
      plVar46 = (long *)(ulong)uVar42;
      plVar48 = (long *)param_1[0xbb];
      if (plVar48 != (long *)0x0) {
        uVar20 = (long)plVar48 - 1;
        uVar49 = (uint)plVar48;
        if (((ulong)plVar48 & uVar20) == 0) {
          param_1 = (long *)(ulong)(uVar49 - 1 & uVar42);
        }
        else {
          param_1 = plVar46;
          if (plVar48 <= plVar46) {
            uVar14 = 0;
            if (uVar49 != 0) {
              uVar14 = uVar42 / uVar49;
            }
            param_1 = (long *)(ulong)(uVar42 - uVar14 * uVar49);
          }
        }
        plVar24 = *(long **)(*plVar44 + (long)param_1 * 8);
        if (plVar24 != (long *)0x0) {
          do {
            while( true ) {
              plVar24 = (long *)*plVar24;
              if (plVar24 == (long *)0x0) goto LAB_10a5f72e4;
              plVar26 = (long *)plVar24[1];
              if (plVar26 != plVar46) break;
              if (*(uint *)(plVar24 + 2) == uVar42) {
                (**(code **)(*plVar12 + 8))(plVar12);
                param_1 = *(long **)((long)register0x00000008 + -0x318);
                goto LAB_10a5f7588;
              }
            }
            if (((ulong)plVar48 & uVar20) == 0) {
              plVar26 = (long *)((ulong)plVar26 & uVar20);
            }
            else if (plVar48 <= plVar26) {
              uVar28 = 0;
              if (plVar48 != (long *)0x0) {
                uVar28 = (ulong)plVar26 / (ulong)plVar48;
              }
              plVar26 = (long *)((long)plVar26 - uVar28 * (long)plVar48);
            }
          } while (plVar26 == param_1);
        }
      }
LAB_10a5f72e4:
      plVar24 = (long *)0x20;
      __Znwm();
      *(long **)((long)register0x00000008 + -0x220) = plVar24;
      *(long **)((long)register0x00000008 + -0x218) = plVar44;
      *(undefined8 *)((long)register0x00000008 + -0x210) = 1;
      *plVar24 = 0;
      plVar24[1] = (long)plVar46;
      *(uint *)(plVar24 + 2) = uVar42;
      plVar24[3] = (long)plVar12;
      fVar59 = (float)(*(long *)(*(long *)((long)register0x00000008 + -0x318) + 0x5e8) + 1);
      fVar61 = *(float *)(*(long *)((long)register0x00000008 + -0x318) + 0x5f0);
      if ((plVar48 == (long *)0x0) || (fVar61 * (float)plVar48 < fVar59)) {
        uVar20 = 1;
        if ((long *)0x2 < plVar48) {
          uVar20 = (ulong)(((ulong)plVar48 & (long)plVar48 - 1U) != 0);
        }
        plVar12 = (long *)(uVar20 | (long)plVar48 << 1);
        plVar26 = (long *)(long)(fVar59 / fVar61);
        if (plVar12 <= plVar26) {
          plVar12 = plVar26;
        }
        if ((long)plVar12 - 1U == 0) {
          plVar12 = (long *)0x2;
          lVar8 = *(long *)((long)register0x00000008 + -0x318);
        }
        else {
          lVar8 = *(long *)((long)register0x00000008 + -0x318);
          if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar48 = *(long **)(lVar8 + 0x5d8);
          }
        }
        if (plVar48 < plVar12) {
LAB_10a5f7390:
          if ((ulong)plVar12 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10a5f7a1c;
          }
          lVar15 = (long)plVar12 << 3;
          __Znwm();
          lVar16 = *plVar44;
          *plVar44 = lVar15;
          if (lVar16 != 0) {
            __ZdlPv();
          }
          plVar48 = (long *)0x0;
          *(long **)(lVar8 + 0x5d8) = plVar12;
          do {
            *(undefined8 *)(*plVar44 + (long)plVar48 * 8) = 0;
            plVar48 = (long *)((long)plVar48 + 1);
          } while (plVar12 != plVar48);
          plVar26 = (long *)*plVar13;
          plVar48 = plVar12;
          if (plVar26 != (long *)0x0) {
            plVar27 = (long *)plVar26[1];
            uVar20 = (long)plVar12 - 1;
            if (((ulong)plVar12 & uVar20) == 0) {
              plVar27 = (long *)((ulong)plVar27 & uVar20);
            }
            else if (plVar12 <= plVar27) {
              uVar28 = 0;
              if (plVar12 != (long *)0x0) {
                uVar28 = (ulong)plVar27 / (ulong)plVar12;
              }
              plVar27 = (long *)((long)plVar27 - uVar28 * (long)plVar12);
            }
            *(long **)(*plVar44 + (long)plVar27 * 8) = plVar13;
            plVar32 = (long *)*plVar26;
            while (plVar32 != (long *)0x0) {
              plVar35 = (long *)plVar32[1];
              if (((ulong)plVar12 & uVar20) == 0) {
                plVar35 = (long *)((ulong)plVar35 & uVar20);
              }
              else if (plVar12 <= plVar35) {
                uVar28 = 0;
                if (plVar12 != (long *)0x0) {
                  uVar28 = (ulong)plVar35 / (ulong)plVar12;
                }
                plVar35 = (long *)((long)plVar35 - uVar28 * (long)plVar12);
              }
              plVar33 = plVar32;
              if (plVar35 != plVar27) {
                lVar8 = *plVar44;
                if (*(long *)(lVar8 + (long)plVar35 * 8) == 0) {
                  *(long **)(lVar8 + (long)plVar35 * 8) = plVar26;
                  plVar27 = plVar35;
                }
                else {
                  *plVar26 = *plVar32;
                  *plVar32 = **(undefined8 **)(lVar8 + (long)plVar35 * 8);
                  **(long **)(lVar8 + (long)plVar35 * 8) = (long)plVar32;
                  plVar33 = plVar26;
                }
              }
              plVar26 = plVar33;
              plVar32 = (long *)*plVar33;
            }
          }
        }
        else if (plVar12 < plVar48) {
          plVar26 = (long *)(long)((float)*(ulong *)(lVar8 + 0x5e8) / *(float *)(lVar8 + 0x5f0));
          if ((plVar48 < (long *)0x3) || (((ulong)plVar48 & (long)plVar48 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar26) {
            plVar26 = (long *)(1L << (-LZCOUNT((long)plVar26 + -1) & 0x3fU));
          }
          if (plVar12 <= plVar26) {
            plVar12 = plVar26;
          }
          if (plVar12 < plVar48) {
            if (plVar12 != (long *)0x0) goto LAB_10a5f7390;
            lVar15 = *plVar44;
            *plVar44 = 0;
            if (lVar15 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(lVar8 + 0x5d8) = 0;
            plVar48 = (long *)0x0;
          }
          else {
            plVar48 = *(long **)(lVar8 + 0x5d8);
          }
        }
        if (((ulong)plVar48 & (long)plVar48 - 1U) == 0) {
          param_1 = (long *)(ulong)((int)plVar48 - 1U & uVar42);
        }
        else {
          param_1 = plVar46;
          if (plVar48 <= plVar46) {
            uVar20 = 0;
            if (plVar48 != (long *)0x0) {
              uVar20 = (ulong)plVar46 / (ulong)plVar48;
            }
            param_1 = (long *)((long)plVar46 - uVar20 * (long)plVar48);
          }
        }
      }
      lVar8 = *plVar44;
      plVar12 = *(long **)(lVar8 + (long)param_1 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar24 = *plVar13;
        *plVar13 = (long)plVar24;
        *(long **)(lVar8 + (long)param_1 * 8) = plVar13;
        param_1 = *(long **)((long)register0x00000008 + -0x318);
        if (*plVar24 != 0) {
          plVar12 = *(long **)(*plVar24 + 8);
          if (((ulong)plVar48 & (long)plVar48 - 1U) == 0) {
            plVar12 = (long *)((ulong)plVar12 & (long)plVar48 - 1U);
          }
          else if (plVar48 <= plVar12) {
            uVar20 = 0;
            if (plVar48 != (long *)0x0) {
              uVar20 = (ulong)plVar12 / (ulong)plVar48;
            }
            plVar12 = (long *)((long)plVar12 - uVar20 * (long)plVar48);
          }
          *(long **)(*plVar44 + (long)plVar12 * 8) = plVar24;
        }
      }
      else {
        *plVar24 = *plVar12;
        *plVar12 = (long)plVar24;
        param_1 = *(long **)((long)register0x00000008 + -0x318);
      }
      *(undefined8 *)((long)register0x00000008 + -0x220) = 0;
      param_1[0xbd] = param_1[0xbd] + 1;
      FUN_10a61d1d4((undefined1 *)((long)register0x00000008 + -0x220));
LAB_10a5f7588:
      plVar48 = plVar44;
      FUN_10a61d22c(plVar44,(int)plVar9[2]);
      if (plVar48 == (long *)0x0) {
LAB_10a5f7898:
        FUN_109ffdddc(&UNK_10f66a46f);
        goto LAB_10a5f78a4;
      }
      func_0x00010a8f2b5c(plVar48[3],plVar9 + 3);
      plVar48 = plVar44;
      FUN_10a61d22c(plVar44,(int)plVar9[2]);
      if (plVar48 == (long *)0x0) goto LAB_10a5f7898;
      FUN_10a8f2de0(plVar48[3],plVar10);
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) break;
    } while( true );
  }
  if (param_1[0xc2] != 0) {
    if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x532,&UNK_10f66863f);
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        *(long *)((long)register0x00000008 + -0x3c0) = param_1[0xc2];
        func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x533,&UNK_10f668651);
      }
    }
    uVar42 = uRam000000011330a9e8;
    for (plVar9 = (long *)param_1[0xc1]; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if ((uVar42 >> 2 & 1) != 0) {
        uVar42 = *(uint *)(plVar9 + 2);
        *(long *)((long)register0x00000008 + -0x3c0) =
             (plVar9[4] - plVar9[3] >> 3) * -0x5555555555555555;
        *(ulong *)((long)register0x00000008 + -0x3b8) = (ulong)uVar42;
        func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x537,&UNK_10f668669);
        uVar42 = uRam000000011330a9e8;
      }
    }
  }
  FUN_10a5f9290(param_1);
LAB_10a5f770c:
  *(undefined4 *)(param_1 + 0xb5) = *(undefined4 *)(*(long *)(param_1[0x2e] + 0x850) + 0x2c);
  plVar10 = param_1;
  FUN_10a5f9ad8();
  plVar44 = (long *)param_1[0xa2];
  for (plVar9 = (long *)param_1[0xa1]; plVar9 != plVar44; plVar9 = plVar9 + 2) {
    plVar13 = (long *)plVar9[1];
    if (plVar13 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long **)((long)register0x00000008 + -0x218) = plVar13;
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar9;
        *(long *)((long)register0x00000008 + -0x220) = lVar8;
        if (lVar8 != 0) {
          FUN_10aa19c3c(lVar8);
          lVar8 = *(long *)(lVar8 + 0x2b0);
          *(long *)((long)register0x00000008 + -0x100) = lVar8;
          if (lVar8 != 0) {
            func_0x00010a49db98(param_1 + 0xcf,(undefined1 *)((long)register0x00000008 + -0x100));
          }
        }
        plVar48 = plVar13 + 1;
        do {
          lVar8 = *plVar48;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar48,0x10);
          if (bVar6) {
            *plVar48 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
  }
  plVar9 = param_1 + 0xbc;
  while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
    lVar8 = plVar9[3];
    *(undefined8 *)(lVar8 + 0x2d8) = *(undefined8 *)(lVar8 + 0x2d0);
    puVar30 = (undefined8 *)param_1[0xd0];
    puVar25 = (undefined8 *)param_1[0xcf];
    if ((undefined8 *)param_1[0xcf] != puVar30) {
      do {
        lVar8 = plVar9[3];
        puVar38 = puVar25 + 1;
        *(undefined8 *)((long)register0x00000008 + -0x220) = *puVar25;
        func_0x00010a8f2d1c(lVar8 + 0x2d0,(undefined1 *)((long)register0x00000008 + -0x220));
        puVar25 = puVar38;
      } while (puVar38 != puVar30);
      lVar8 = plVar9[3];
    }
    lVar15 = plVar10[1];
    lVar21 = plVar10[4];
    lVar16 = plVar10[3];
    *(long *)(lVar8 + 0x278) = plVar10[2];
    *(long *)(lVar8 + 0x270) = lVar15;
    *(long *)(lVar8 + 0x288) = lVar21;
    *(long *)(lVar8 + 0x280) = lVar16;
    lVar16 = plVar10[6];
    lVar15 = plVar10[5];
    lVar29 = plVar10[8];
    lVar21 = plVar10[7];
    lVar57 = plVar10[10];
    lVar56 = plVar10[9];
    uVar17 = *(undefined8 *)((long)plVar10 + 0x54);
    *(undefined8 *)(lVar8 + 0x2c4) = *(undefined8 *)((long)plVar10 + 0x5c);
    *(undefined8 *)(lVar8 + 700) = uVar17;
    *(long *)(lVar8 + 0x2a8) = lVar29;
    *(long *)(lVar8 + 0x2a0) = lVar21;
    *(long *)(lVar8 + 0x2b8) = lVar57;
    *(long *)(lVar8 + 0x2b0) = lVar56;
    *(long *)(lVar8 + 0x298) = lVar16;
    *(long *)(lVar8 + 0x290) = lVar15;
    FUN_10a8f47d8((float)*(double *)(*(long *)(param_1[0x2e] + 0x850) + 0x10),plVar9[3]);
  }
  param_1[0xd0] = param_1[0xcf];
LAB_10a5f7850:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xb8)) {
    return;
  }
LAB_10a5f78a4:
  ___stack_chk_fail();
LAB_10a5f78a8:
  FUN_10a3ee510(&UNK_10f66a567);
LAB_10a5f7a1c:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10a5f7a20);
  (*pcVar19)();
}



/* Entry: 10a5f7bec; end: 10a5f928f;  */

/* WARNING: Removing unreachable block (ram,0x00010a5f7964) */
/* WARNING: Removing unreachable block (ram,0x00010a5f518c) */
/* WARNING: Removing unreachable block (ram,0x00010a5f79e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5f6e90) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_10a5f7bec(long **param_1,long param_2)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  char cVar8;
  code *pcVar9;
  long *plVar10;
  bool bVar11;
  uint *puVar12;
  long *plVar13;
  long ***ppplVar14;
  long *plVar15;
  float *pfVar16;
  uint uVar17;
  undefined4 *puVar18;
  long *plVar19;
  long **pplVar20;
  float *pfVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined4 *puVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  ulong uVar29;
  long lVar30;
  undefined8 uVar31;
  long *plVar32;
  long *plVar33;
  long **pplVar34;
  long lVar35;
  undefined4 *puVar36;
  long *plVar37;
  long *plVar38;
  uint uVar39;
  long *plVar40;
  undefined8 *puVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  long lVar45;
  undefined8 *puVar46;
  undefined4 *puVar47;
  ulong uVar48;
  ulong uVar49;
  int iVar50;
  ulong uVar51;
  ulong uVar52;
  int iVar53;
  undefined1 *puVar54;
  long lVar55;
  uint uVar56;
  ulong uVar57;
  long **pplVar58;
  undefined8 unaff_x25;
  int iVar59;
  undefined4 uVar60;
  long *plVar61;
  long *plVar62;
  long **pplVar63;
  int iVar64;
  long *unaff_x27;
  long lVar65;
  undefined8 unaff_x28;
  long **pplVar66;
  undefined1 *puVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  long lVar71;
  long lVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined8 unaff_d8;
  float fVar79;
  undefined4 uVar80;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined8 uVar84;
  float fVar85;
  float fVar86;
  undefined8 uVar87;
  float fVar88;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long ***ppplStack_150;
  long **pplStack_148;
  long lStack_140;
  long **pplStack_138;
  long **pplStack_130;
  long ***ppplStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long **pplStack_110;
  long **pplStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  uint uStack_e4;
  long **pplStack_e0;
  long **pplStack_d8;
  long **pplStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long ****apppplStack_b0 [2];
  
  puVar67 = &stack0xfffffffffffffff0;
  pplVar66 = param_1 + 0xbf;
  func_0x00010a61d0b0(pplVar66);
  pplStack_138 = param_1 + 0xc4;
  func_0x00010a61d0b0();
  pplStack_148 = param_1 + 0xc9;
  FUN_10a61cbc8();
  if (param_1[0xbd] != (long *)0x0) {
    func_0x00010a61bcd4(param_1[0xbc]);
    param_1[0xbc] = (long *)0x0;
    plVar19 = param_1[0xbb];
    if (plVar19 != (long *)0x0) {
      plVar27 = (long *)0x0;
      do {
        param_1[0xba][(long)plVar27] = 0;
        plVar27 = (long *)((long)plVar27 + 1);
      } while (plVar19 != plVar27);
    }
    param_1[0xbd] = (long *)0x0;
  }
  if (*(uint *)(param_1 + 0x9e) < 0x30) {
    pplStack_110 = (long **)0x0;
    pplStack_108 = (long **)0x0;
    pplVar63 = (long **)param_1[0xa0];
    if ((pplVar63 != (long **)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), pplStack_108 = pplVar63, pplVar63 != (long **)0x0)
       ) {
      pplVar58 = (long **)param_1[0x9f];
      pplStack_e0 = (long **)&UNK_10f6684f2;
      pplStack_d8 = (long **)0x31;
      pplStack_110 = pplVar58;
      if (pplVar58 != (long **)0x0) {
        if ((*(byte *)((long)pplVar58[0x28] + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4();
        }
        FUN_10a5f9900(pplVar58,pplVar66);
        if ((*(uint *)(param_1 + 0x9e) < 0x20) || (param_1[0xc2] != (long *)0x0)) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
        pplVar66 = pplVar63 + 1;
        do {
          plVar19 = *pplVar66;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pplVar66,0x10);
          if (bVar7) {
            *pplVar66 = (long *)((long)plVar19 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (plVar19 == (long *)0x0) {
          (*(code *)(*pplVar63)[2])(pplVar63);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar63);
        }
        if (!bVar11) {
          return (long *)0x0;
        }
LAB_10a5f7d6c:
        uVar56 = *(uint *)((long)param_1 + 0x53c);
        uVar57 = (ulong)uVar56;
        plVar19 = param_1[0xc1];
        pplStack_130 = param_1;
        if (uVar56 < 3) {
          if (plVar19 != (long *)0x0) {
            pplVar66 = param_1 + 0xc6;
            do {
              uVar56 = *(uint *)(plVar19 + 2);
              plVar27 = (long *)(ulong)uVar56;
              plVar62 = param_1[0xc5];
              if (plVar62 != (long *)0x0) {
                uVar57 = (long)plVar62 - 1;
                uVar39 = (uint)plVar62;
                if (((ulong)plVar62 & uVar57) == 0) {
                  unaff_x27 = (long *)(ulong)(uVar39 - 1 & uVar56);
                }
                else {
                  unaff_x27 = plVar27;
                  if (plVar62 <= plVar27) {
                    uVar17 = 0;
                    if (uVar39 != 0) {
                      uVar17 = uVar56 / uVar39;
                    }
                    unaff_x27 = (long *)(ulong)(uVar56 - uVar17 * uVar39);
                  }
                }
                plVar28 = (long *)(*pplStack_138)[(long)unaff_x27];
                if (plVar28 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar28 = (long *)*plVar28;
                      if (plVar28 == (long *)0x0) goto LAB_10a5f7e34;
                      plVar33 = (long *)plVar28[1];
                      if (plVar33 != plVar27) break;
                      if (*(uint *)(plVar28 + 2) == uVar56) goto LAB_10a5f7f84;
                    }
                    if (((ulong)plVar62 & uVar57) == 0) {
                      plVar33 = (long *)((ulong)plVar33 & uVar57);
                    }
                    else if (plVar62 <= plVar33) {
                      uVar51 = 0;
                      if (plVar62 != (long *)0x0) {
                        uVar51 = (ulong)plVar33 / (ulong)plVar62;
                      }
                      plVar33 = (long *)((long)plVar33 - uVar51 * (long)plVar62);
                    }
                  } while (plVar33 == unaff_x27);
                }
              }
LAB_10a5f7e34:
              pplVar63 = (long **)0x30;
              __Znwm();
              pplStack_d8 = pplStack_138;
              pplStack_d0 = (long **)0x0;
              *pplVar63 = (long *)0x0;
              pplVar63[1] = plVar27;
              *(int *)(pplVar63 + 2) = (int)plVar19[2];
              pplVar63[3] = (long *)0x0;
              pplVar63[4] = (long *)0x0;
              pplVar63[5] = (long *)0x0;
              pplStack_e0 = pplVar63;
              FUN_10a6152c0();
              pplStack_d0 = (long **)CONCAT71(pplStack_d0._1_7_,1);
              if ((plVar62 == (long *)0x0) ||
                 (*(float *)(param_1 + 200) * (float)plVar62 < (float)((long)param_1[199] + 1))) {
                uVar57 = 1;
                if ((long *)0x2 < plVar62) {
                  uVar57 = (ulong)(((ulong)plVar62 & (long)plVar62 - 1U) != 0);
                }
                uVar57 = uVar57 | (long)plVar62 << 1;
                uVar51 = (ulong)((float)((long)param_1[199] + 1) / *(float *)(param_1 + 200));
                if (uVar57 <= uVar51) {
                  uVar57 = uVar51;
                }
                FUN_10a61c274(pplStack_138,uVar57);
                plVar62 = param_1[0xc5];
                if (((ulong)plVar62 & (long)plVar62 - 1U) == 0) {
                  unaff_x27 = (long *)(ulong)((int)plVar62 - 1U & uVar56);
                }
                else {
                  unaff_x27 = plVar27;
                  if (plVar62 <= plVar27) {
                    uVar57 = 0;
                    if (plVar62 != (long *)0x0) {
                      uVar57 = (ulong)plVar27 / (ulong)plVar62;
                    }
                    unaff_x27 = (long *)((long)plVar27 - uVar57 * (long)plVar62);
                  }
                }
              }
              plVar27 = *pplStack_138;
              plVar28 = (long *)plVar27[(long)unaff_x27];
              if (plVar28 == (long *)0x0) {
                *pplStack_e0 = *pplVar66;
                *pplVar66 = (long *)pplStack_e0;
                plVar27[(long)unaff_x27] = (long)pplVar66;
                if (*pplStack_e0 != (long *)0x0) {
                  plVar27 = (long *)(*pplStack_e0)[1];
                  if (((ulong)plVar62 & (long)plVar62 - 1U) == 0) {
                    plVar27 = (long *)((ulong)plVar27 & (long)plVar62 - 1U);
                  }
                  else if (plVar62 <= plVar27) {
                    uVar57 = 0;
                    if (plVar62 != (long *)0x0) {
                      uVar57 = (ulong)plVar27 / (ulong)plVar62;
                    }
                    plVar27 = (long *)((long)plVar27 - uVar57 * (long)plVar62);
                  }
                  (*pplStack_138)[(long)plVar27] = (long)pplStack_e0;
                }
              }
              else {
                *pplStack_e0 = (long *)*plVar28;
                *plVar28 = (long)pplStack_e0;
              }
              param_1[199] = (long *)((long)param_1[199] + 1);
LAB_10a5f7f84:
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else {
          uVar51 = 0;
          for (; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            uVar51 = uVar51 + (plVar19[4] - plVar19[3] >> 3) * -0x5555555555555555;
          }
          pplStack_e0 = (long **)CONCAT44(pplStack_e0._4_4_,uVar56);
          pplStack_d0 = (long **)0x0;
          lStack_c8 = 0;
          pplStack_d8 = (long **)0x0;
          pplStack_108 = (long **)0x0;
          lStack_100 = 0;
          pplStack_110 = (long **)0x0;
          FUN_10a61c04c(pplStack_138,uVar57,&pplStack_e0);
          ppplStack_128 = &pplStack_d8;
          func_0x00010a60f324(&ppplStack_128);
          ppplStack_128 = &pplStack_110;
          func_0x00010a60f324(&ppplStack_128);
          plVar19 = param_1[0xc4];
          plVar27 = param_1[0xc5];
          func_0x00010a61bfb0(plVar19,plVar27,uVar57);
          if (plVar19 == (long *)0x0) {
LAB_10a5f9128:
            FUN_109ffdddc(&UNK_10f66a46f);
LAB_10a5f9134:
            FUN_109ffdddc(&UNK_10f66a46f);
            goto LAB_10a5f9174;
          }
          plVar33 = plVar19 + 3;
          lVar55 = *plVar33;
          plVar28 = (long *)plVar19[4];
          puVar54 = (undefined1 *)((long)plVar28 - lVar55);
          bVar11 = uVar51 < (ulong)(((long)puVar54 >> 3) * -0x5555555555555555);
          plVar62 = (long *)(uVar51 + ((long)puVar54 >> 3) * 0x5555555555555555);
          if (bVar11 || plVar62 == (long *)0x0) {
            if (bVar11) {
              plVar27 = (long *)(lVar55 + uVar51 * 0x18);
              while (plVar62 = plVar28, plVar62 != plVar27) {
                plVar28 = plVar62 + -3;
                if (*plVar28 != 0) {
                  plVar62[-2] = *plVar28;
                  __ZdlPv();
                }
              }
              plVar19[4] = (long)plVar27;
            }
          }
          else if ((long *)((plVar19[5] - (long)plVar28 >> 3) * -0x5555555555555555) < plVar62) {
            if (0xaaaaaaaaaaaaaaa < uVar51) {
              FUN_10a60f544();
              if (pplStack_d8 != (long **)0x0) {
                __ZdlPv();
              }
              if (pplStack_110 != (long **)0x0) {
                pplStack_108 = pplStack_110;
                __ZdlPv();
              }
              pcVar9 = FUN_10a5f9290;
              plVar15 = plVar33;
              __Unwind_Resume();
              plVar10 = &lStack_170;
code_r0x00010a5f9290:
              *(ulong *)((long)plVar10 + -0x30) = uVar57;
              *(undefined1 **)((long)plVar10 + -0x28) = puVar54;
              *(long **)((long)plVar10 + -0x20) = plVar62;
              *(long **)((long)plVar10 + -0x18) = plVar33;
              *(undefined1 **)((long)plVar10 + -0x10) = puVar67;
              *(code **)((long)plVar10 + -8) = pcVar9;
              *(undefined8 *)((long)plVar10 + -0x38) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              if ((((*(byte *)((long)plVar15 + 0x59c) & 1) != 0) ||
                  (*(char *)((long)plVar15 + 0x59d) == '\x01')) &&
                 (plVar33 = (long *)plVar15[0xb1], plVar33 != (long *)0x0)) {
                (**(code **)(*plVar15 + 0x50))((undefined1 *)((long)plVar10 + -0x80));
                *(undefined8 *)((long)plVar10 + -0xa8) = *(undefined8 *)((long)plVar10 + -0x78);
                *(undefined8 *)((long)plVar10 + -0xb0) = *(undefined8 *)((long)plVar10 + -0x80);
                if (*(long *)((long)plVar10 + -0x78) != 0) {
                  plVar62 = (long *)(*(long *)((long)plVar10 + -0x78) + 8);
                  do {
                    cVar8 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                    if (bVar11) {
                      *plVar62 = *plVar62 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  plVar62 = *(long **)((long)plVar10 + -0x78);
                  if (plVar62 != (long *)0x0) {
                    plVar13 = plVar62 + 1;
                    do {
                      lVar55 = *plVar13;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                      if (bVar11) {
                        *plVar13 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar62 + 0x10))(plVar62);
                      plVar15 = plVar62;
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                  }
                }
                if ((char)plVar33[8] == '\x01') {
                  pcVar9 = (code *)*plVar33;
                  *(undefined8 *)((long)plVar10 + -0x78) = *(undefined8 *)((long)plVar10 + -0xa8);
                  *(undefined8 *)((long)plVar10 + -0x80) = *(undefined8 *)((long)plVar10 + -0xb0);
                  if (*(long *)((long)plVar10 + -0xa8) != 0) {
                    plVar27 = (long *)(*(long *)((long)plVar10 + -0xa8) + 8);
                    do {
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                      if (bVar11) {
                        *plVar27 = *plVar27 + 1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                  }
                  plVar15 = (long *)((long)plVar10 + -0x80);
                  (*pcVar9)(plVar15,plVar33);
                  plVar27 = *(long **)((long)plVar10 + -0x78);
                  if (plVar27 != (long *)0x0) {
                    plVar33 = plVar27 + 1;
                    do {
                      lVar55 = *plVar33;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                      if (bVar11) {
                        *plVar33 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
LAB_10a5f93e4:
                    if (lVar55 == 0) {
                      (**(code **)(*plVar27 + 0x10))(plVar27);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      plVar15 = plVar27;
                    }
                  }
                }
                else if ((char)plVar33[8] == '\x02') {
                  plVar62 = plVar33;
                  FUN_10a688b40();
                  if (plVar62 == (long *)0x0) {
                    plVar15 = (long *)0x0;
                    if (plVar27 != (long *)0x0) {
                      lVar65 = plVar33[1];
                      lVar55 = *plVar33;
                      if (plVar33[1] != 0) {
                        plVar62 = (long *)(plVar33[1] + 8);
                        do {
                          cVar8 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                          if (bVar11) {
                            *plVar62 = *plVar62 + 1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                      }
                      uVar31 = *(undefined8 *)((long)plVar10 + -0xb0);
                      plVar33 = *(long **)((long)plVar10 + -0xa8);
                      *(undefined8 *)((long)plVar10 + -0x90) = uVar31;
                      *(long **)((long)plVar10 + -0x88) = plVar33;
                      if (plVar33 != (long *)0x0) {
                        plVar62 = plVar33 + 1;
                        do {
                          cVar8 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                          if (bVar11) {
                            *plVar62 = *plVar62 + 1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                      }
                      *(code **)((long)plVar10 + -0x80) = FUN_10a61d4dc;
                      *(undefined ***)((long)plVar10 + -0x78) = &PTR_FUN_110c00ea0;
                      *(long *)((long)plVar10 + -0x68) = lVar65;
                      *(long *)((long)plVar10 + -0x70) = lVar55;
                      *(undefined8 *)((long)plVar10 + -0xa0) = 0;
                      *(undefined8 *)((long)plVar10 + -0x98) = 0;
                      *(undefined8 *)((long)plVar10 + -0x60) = uVar31;
                      *(long **)((long)plVar10 + -0x58) = plVar33;
                      if (plVar33 != (long *)0x0) {
                        plVar62 = plVar33 + 1;
                        do {
                          cVar8 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                          if (bVar11) {
                            *plVar62 = *plVar62 + 1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                      }
                      plVar62 = (long *)((long)plVar10 + -0xa0);
                      puVar54 = (undefined1 *)((long)plVar10 + -0x80);
                      FUN_10a4634ec(plVar27,(undefined1 *)((long)plVar10 + -0x80));
                      plVar15 = (long *)((long)plVar10 + -0x78);
                      (*(code *)**(undefined8 **)((long)plVar10 + -0x78))();
                      if (plVar33 != (long *)0x0) {
                        plVar27 = plVar33 + 1;
                        do {
                          lVar55 = *plVar27;
                          cVar8 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                          if (bVar11) {
                            *plVar27 = lVar55 + -1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if (lVar55 == 0) {
                          (**(code **)(*plVar33 + 0x10))(plVar33);
                          __ZNSt3__119__shared_weak_count14__release_weakEv();
                          plVar15 = plVar33;
                        }
                      }
                      plVar27 = *(long **)((long)plVar10 + -0x98);
                      if (plVar27 != (long *)0x0) {
                        plVar33 = plVar27 + 1;
                        do {
                          lVar55 = *plVar33;
                          cVar8 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                          if (bVar11) {
                            *plVar33 = lVar55 + -1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        goto LAB_10a5f93e4;
                      }
                    }
                  }
                  else {
                    *plVar62 = CONCAT44((int)((ulong)*plVar62 >> 0x20) + 1,(int)*plVar62 + 1);
                    plVar15 = (long *)*plVar33;
                    FUN_10a61d2d0(plVar15,(undefined1 *)((long)plVar10 + -0xb0));
                    iVar53 = *(int *)((long)plVar62 + 4) + -1;
                    *(int *)((long)plVar62 + 4) = iVar53;
                    if (iVar53 == 0) {
                      *(undefined4 *)plVar62 = 0;
                    }
                  }
                }
                plVar27 = *(long **)((long)plVar10 + -0xa8);
                if (plVar27 != (long *)0x0) {
                  plVar33 = plVar27 + 1;
                  do {
                    lVar55 = *plVar33;
                    cVar8 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                    if (bVar11) {
                      *plVar33 = lVar55 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar55 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    plVar15 = plVar27;
                  }
                }
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar10 + -0x38)) {
                return plVar15;
              }
              ___stack_chk_fail();
              (*(code *)**(undefined8 **)((long)plVar10 + -0x78))(puVar54 + 8);
              FUN_10a61be10(plVar62 + 2);
              func_0x00010a004dac((undefined1 *)((long)plVar10 + -0xa0));
              FUN_10a61be10((undefined1 *)((long)plVar10 + -0xb0));
              plVar27 = plVar15;
              __Unwind_Resume();
              plVar33 = plVar27 + -0xd;
              *(undefined8 *)((long)plVar10 + -0x150) = unaff_d15;
              *(undefined8 *)((long)plVar10 + -0x148) = unaff_d14;
              *(undefined8 *)((long)plVar10 + -0x140) = unaff_d13;
              *(undefined8 *)((long)plVar10 + -0x138) = unaff_d12;
              *(undefined8 *)((long)plVar10 + -0x130) = unaff_d11;
              *(undefined8 *)((long)plVar10 + -0x128) = unaff_d10;
              *(undefined8 *)((long)plVar10 + -0x120) = unaff_d9;
              *(undefined8 *)((long)plVar10 + -0x118) = unaff_d8;
              *(undefined8 *)((long)plVar10 + -0x110) = unaff_x28;
              *(long **)((long)plVar10 + -0x108) = unaff_x27;
              *(long ***)((long)plVar10 + -0x100) = param_1;
              *(undefined8 *)((long)plVar10 + -0xf8) = unaff_x25;
              *(long **)((long)plVar10 + -0xf0) = plVar28;
              *(long **)((long)plVar10 + -0xe8) = plVar19;
              *(ulong *)((long)plVar10 + -0xe0) = uVar57;
              *(undefined1 **)((long)plVar10 + -0xd8) = puVar54;
              *(long **)((long)plVar10 + -0xd0) = plVar62;
              *(long **)((long)plVar10 + -200) = plVar15;
              *(undefined1 **)((long)plVar10 + -0xc0) = (undefined1 *)((long)plVar10 + -0x10);
              *(code **)((long)plVar10 + -0xb8) = FUN_10a5f95c8;
              *(undefined8 *)((long)plVar10 + -0x168) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              plVar19 = plVar33;
              if (*(uint *)(plVar27 + 0x91) < 0x30) {
LAB_10a5f4d20:
                if ((*(byte *)(plVar27 + 0xc1) & 1) != 0) goto LAB_10a5f7850;
              }
              else {
                plVar19 = (long *)plVar27[0x97];
                if ((plVar19 == (long *)0x0) || (FUN_10ab3b8d0(), (int)plVar19 != 2))
                goto LAB_10a5f7850;
                if (*(uint *)(plVar27 + 0x91) < 0x30) goto LAB_10a5f4d20;
              }
              lVar65 = plVar27[0x20];
              for (lVar55 = *(long *)(lVar65 + 0x158); lVar55 != lVar65 + 0x150;
                  lVar55 = *(long *)(lVar55 + 8)) {
                if (*(long *)(lVar55 + 0x10) != 0) {
                  plVar62 = (long *)(*(long *)(lVar55 + 0x10) + 0xb0);
                  (**(code **)(*plVar62 + 0x18))(plVar62,0xd88b8b8a073aaad7);
                  if (plVar62 != (long *)0x0) goto LAB_10a5f4d80;
                }
              }
              plVar62 = (long *)0x0;
LAB_10a5f4d80:
              uVar57 = (ulong)*(byte *)(plVar27[0x21] + 0x29);
              if (5 < uVar57) goto LAB_10a5f7a1c;
              plVar19 = *(long **)(plVar27[0x21] + uVar57 * 8 + 0x30);
              (**(code **)(*plVar19 + 0x18))();
              *(long **)((long)plVar10 + -0x3c8) = plVar33;
              if (((int)plVar19 == 0) || ((*(byte *)((long)plVar27 + 0x51e) & 1) != 0)) {
                if ((*(byte *)((long)plVar27 + 0x535) & 1) != 0) goto LAB_10a5f7850;
                plVar19 = plVar33;
                FUN_10a5f7bec();
                *(char *)((long)plVar27 + 0x535) = (char)plVar19;
                if ((int)plVar19 == 0) goto LAB_10a5f7850;
                plVar19 = (long *)plVar27[0xa9];
                if ((plVar19 == (long *)0x0) || ((**(code **)(*plVar19 + 0x90))(), *plVar19 == 0)) {
                  puVar23 = (undefined8 *)((long)plVar10 + -0x2d0);
                  FUN_10a0d0194((undefined1 *)((long)plVar10 + -0x2e8));
                  plVar33 = *(long **)((long)plVar10 + -0x3c8);
                  uVar56 = *(uint *)(plVar33 + 0x9e);
                  lVar55 = 0xd0;
                  if (0x2f < uVar56) {
                    lVar55 = 0x108;
                  }
                  puVar22 = (undefined8 *)0x1137eb698;
                  if (0x2f < uVar56) {
                    puVar22 = (undefined8 *)0x1137eb6d0;
                  }
                  FUN_10ab6e728();
                  if (*(char *)((long)puVar23 + 0x17) < '\0') {
                    puVar41 = (undefined8 *)((long)plVar10 + -0x2d0);
                    func_0x000107c3192c(puVar41,*puVar23,puVar23[1]);
                  }
                  else {
                    uVar87 = puVar23[1];
                    uVar31 = *puVar23;
                    *(undefined8 *)((long)plVar10 + -0x2c0) = puVar23[2];
                    *(undefined8 *)((long)plVar10 + -0x2c8) = uVar87;
                    *(undefined8 *)((long)plVar10 + -0x2d0) = uVar31;
                    puVar41 = puVar23;
                  }
                  *(undefined8 *)((long)plVar10 + -0x2b8) = puVar23[3];
                  uVar80 = *(undefined4 *)(puVar23 + 6);
                  uVar31 = puVar23[4];
                  *(undefined8 *)((long)plVar10 + -0x2a8) = puVar23[5];
                  *(undefined8 *)((long)plVar10 + -0x2b0) = uVar31;
                  *(undefined4 *)((long)plVar10 + -0x2a0) = uVar80;
                  puVar23 = (undefined8 *)((long)plVar10 + -0x298);
                  if (cRam00000001137eb63f < '\0') {
                    func_0x000107c3192c(puVar23,uRam00000001137eb628,uRam00000001137eb630);
                  }
                  else {
                    *(undefined8 *)((long)plVar10 + -0x290) = uRam00000001137eb630;
                    *puVar23 = uRam00000001137eb628;
                    *(ulong *)((long)plVar10 + -0x288) =
                         CONCAT17(cRam00000001137eb63f,uRam00000001137eb638);
                    puVar23 = puVar41;
                  }
                  *(long *)((long)plVar10 + -0x280) = lRam00000001137eb640;
                  *(undefined8 *)((long)plVar10 + -0x270) = uRam00000001137eb650;
                  *(undefined8 *)((long)plVar10 + -0x278) = uRam00000001137eb648;
                  *(undefined4 *)((long)plVar10 + -0x268) = uRam00000001137eb658;
                  puVar41 = (undefined8 *)((long)plVar10 + -0x260);
                  if (cRam00000001137eb677 < '\0') {
                    func_0x000107c3192c(puVar41,uRam00000001137eb660,uRam00000001137eb668);
                  }
                  else {
                    *(undefined8 *)((long)plVar10 + -600) = uRam00000001137eb668;
                    *puVar41 = uRam00000001137eb660;
                    *(ulong *)((long)plVar10 + -0x250) =
                         CONCAT17(cRam00000001137eb677,uRam00000001137eb670);
                    puVar41 = puVar23;
                  }
                  *(long *)((long)plVar10 + -0x248) = lRam00000001137eb678;
                  *(undefined8 *)((long)plVar10 + -0x238) = uRam00000001137eb688;
                  *(undefined8 *)((long)plVar10 + -0x240) = uRam00000001137eb680;
                  *(undefined4 *)((long)plVar10 + -0x230) = uRam00000001137eb690;
                  puVar23 = (undefined8 *)((long)plVar10 + -0x228);
                  pcVar2 = (char *)0x1137eb6af;
                  if (0x2f < uVar56) {
                    pcVar2 = (char *)0x1137eb6e7;
                  }
                  if (*pcVar2 < '\0') {
                    puVar22 = (undefined8 *)0x1137eb6a0;
                    if (0x2f < uVar56) {
                      puVar22 = (undefined8 *)0x1137eb6d8;
                    }
                    func_0x000107c3192c(puVar23,*(undefined8 *)(lVar55 + 0x1137eb5c8),*puVar22);
                  }
                  else {
                    uVar31 = *puVar22;
                    *(undefined8 *)((long)plVar10 + -0x220) = puVar22[1];
                    *puVar23 = uVar31;
                    *(undefined8 *)((long)plVar10 + -0x218) = puVar22[2];
                    puVar23 = puVar41;
                  }
                  puVar22 = (undefined8 *)0x1137eb6b0;
                  if (0x2f < uVar56) {
                    puVar22 = (undefined8 *)0x1137eb6e8;
                  }
                  *(undefined8 *)((long)plVar10 + -0x210) = *puVar22;
                  puVar22 = (undefined8 *)0x1137eb6b8;
                  if (0x2f < uVar56) {
                    puVar22 = (undefined8 *)0x1137eb6f0;
                  }
                  uVar31 = *puVar22;
                  *(undefined8 *)((long)plVar10 + -0x200) = puVar22[1];
                  *(undefined8 *)((long)plVar10 + -0x208) = uVar31;
                  *(undefined4 *)((long)plVar10 + -0x1f8) = *(undefined4 *)(puVar22 + 2);
                  FUN_10ab6f020();
                  if (*(char *)((long)puVar23 + 0x17) < '\0') {
                    func_0x000107c3192c((undefined8 *)((long)plVar10 + -0x1f0),*puVar23,puVar23[1]);
                  }
                  else {
                    uVar87 = puVar23[1];
                    uVar31 = *puVar23;
                    *(undefined8 *)((long)plVar10 + -0x1e0) = puVar23[2];
                    *(undefined8 *)((long)plVar10 + -0x1e8) = uVar87;
                    *(undefined8 *)((long)plVar10 + -0x1f0) = uVar31;
                  }
                  *(undefined8 *)((long)plVar10 + -0x1d8) = puVar23[3];
                  uVar87 = puVar23[5];
                  uVar31 = puVar23[4];
                  *(undefined4 *)((long)plVar10 + -0x1c0) = *(undefined4 *)(puVar23 + 6);
                  *(undefined8 *)((long)plVar10 + -0x1c8) = uVar87;
                  *(undefined8 *)((long)plVar10 + -0x1d0) = uVar31;
                  FUN_10ab6f520((undefined1 *)((long)plVar10 + -0x1b0),
                                (undefined1 *)((long)plVar10 + -0x2d0),5);
                  lVar55 = *(long *)((long)plVar10 + -0x2e8);
                  *(undefined4 *)(lVar55 + 0xf0) = *(undefined4 *)((long)plVar10 + -0x1b0);
                  if ((undefined4 *)(lVar55 + 0xf0) != (undefined4 *)((long)plVar10 + -0x1b0)) {
                    FUN_10a1903c4(lVar55 + 0xf8,*(long *)((long)plVar10 + -0x1a8),
                                  *(long *)((long)plVar10 + -0x1a0),
                                  (*(long *)((long)plVar10 + -0x1a0) -
                                   *(long *)((long)plVar10 + -0x1a8) >> 3) * 0x6db6db6db6db6db7);
                  }
                  plVar19 = plVar33 + 0xb6;
                  uVar31 = *(undefined8 *)((long)plVar10 + -400);
                  uVar84 = *(undefined8 *)((long)plVar10 + -0x178);
                  uVar87 = *(undefined8 *)((long)plVar10 + -0x180);
                  *(undefined8 *)(lVar55 + 0x118) = *(undefined8 *)((long)plVar10 + -0x188);
                  *(undefined8 *)(lVar55 + 0x110) = uVar31;
                  *(undefined8 *)(lVar55 + 0x128) = uVar84;
                  *(undefined8 *)(lVar55 + 0x120) = uVar87;
                  *(undefined8 *)(lVar55 + 0x130) = *(undefined8 *)((long)plVar10 + -0x170);
                  *(undefined1 **)((long)plVar10 + -0x300) = (undefined1 *)((long)plVar10 + -0x1a8);
                  func_0x00010a190844((undefined1 *)((long)plVar10 + -0x300));
                  lVar55 = 0x118;
                  do {
                    lVar55 = lVar55 + -0x38;
                  } while (lVar55 != 0);
                  *(undefined8 *)(*(long *)((long)plVar10 + -0x2e8) + 0xe8) = 1;
                  *(undefined8 *)((long)plVar10 + -0x1b0) = 0;
                  FUN_10a1995d0((undefined1 *)((long)plVar10 + -0x2d0),
                                (undefined1 *)((long)plVar10 + -0x300),
                                (undefined1 *)((long)plVar10 + -0x1b0),
                                (undefined1 *)((long)plVar10 + -0x2e8));
                  func_0x00010a19a938(plVar19,(undefined1 *)((long)plVar10 + -0x2d0));
                  plVar27 = *(long **)((long)plVar10 + -0x2c8);
                  if (plVar27 != (long *)0x0) {
                    plVar62 = plVar27 + 1;
                    do {
                      lVar55 = *plVar62;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                      if (bVar11) {
                        *plVar62 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar27 + 0x10))(plVar27);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                    }
                  }
                  plVar27 = (long *)*plVar19;
                  if (*(char *)((long)plVar27 + 0xb9) != '\0') {
                    *(undefined1 *)((long)plVar27 + 0xb9) = 0;
                    (**(code **)(*plVar27 + 0xa0))();
                    plVar27 = (long *)*plVar19;
                  }
                  if (*(char *)((long)plVar27 + 0xba) != '\0') {
                    *(undefined1 *)((long)plVar27 + 0xba) = 0;
                    (**(code **)(*plVar27 + 0xa0))();
                  }
                  *(long *)((long)plVar10 + -0x1b0) = plVar33[0x2e];
                  FUN_10a2db3d8((undefined1 *)((long)plVar10 + -0x2d0),
                                (undefined1 *)((long)plVar10 + -0x1b0),plVar19);
                  *(undefined8 *)((long)plVar10 + -0x2f8) = *(undefined8 *)((long)plVar10 + -0x2c8);
                  *(undefined8 *)((long)plVar10 + -0x300) = *(undefined8 *)((long)plVar10 + -0x2d0);
                  if (*(long *)((long)plVar10 + -0x2c8) != 0) {
                    plVar19 = (long *)(*(long *)((long)plVar10 + -0x2c8) + 8);
                    do {
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                      if (bVar11) {
                        *plVar19 = *plVar19 + 1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                  }
                  FUN_10a426824(plVar33,(undefined1 *)((long)plVar10 + -0x300));
                  plVar19 = *(long **)((long)plVar10 + -0x2f8);
                  if (plVar19 != (long *)0x0) {
                    plVar27 = plVar19 + 1;
                    do {
                      lVar55 = *plVar27;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                      if (bVar11) {
                        *plVar27 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
                    }
                  }
                  if (*(uint *)(plVar33 + 0x9e) < 0x30) {
                    lVar55 = plVar33[0xac];
                    *(long *)((long)plVar10 + -0x310) = plVar33[0xab];
                    *(long *)((long)plVar10 + -0x308) = lVar55;
                    if (lVar55 != 0) {
                      plVar19 = (long *)(lVar55 + 8);
                      do {
                        cVar8 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar11) {
                          *plVar19 = *plVar19 + 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                    }
                    FUN_10a42646c(plVar33,(undefined1 *)((long)plVar10 + -0x310));
                    plVar19 = *(long **)((long)plVar10 + -0x308);
                    if (plVar19 != (long *)0x0) {
                      plVar27 = plVar19 + 1;
                      do {
                        lVar55 = *plVar27;
                        cVar8 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                        if (bVar11) {
                          *plVar27 = lVar55 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
LAB_10a5f5368:
                      if (lVar55 == 0) {
                        (**(code **)(*plVar19 + 0x10))(plVar19);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
                      }
                    }
                  }
                  else {
                    lVar55 = plVar33[0xaa];
                    *(long *)((long)plVar10 + -0x310) = plVar33[0xa9];
                    *(long *)((long)plVar10 + -0x308) = lVar55;
                    if (lVar55 != 0) {
                      plVar19 = (long *)(lVar55 + 8);
                      do {
                        cVar8 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar11) {
                          *plVar19 = *plVar19 + 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                    }
                    FUN_10a42646c(plVar33,(undefined1 *)((long)plVar10 + -0x310));
                    plVar19 = *(long **)((long)plVar10 + -0x308);
                    if (plVar19 != (long *)0x0) {
                      plVar27 = plVar19 + 1;
                      do {
                        lVar55 = *plVar27;
                        cVar8 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                        if (bVar11) {
                          *plVar27 = lVar55 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      goto LAB_10a5f5368;
                    }
                  }
                  plVar19 = *(long **)((long)plVar10 + -0x2c8);
                  if (plVar19 != (long *)0x0) {
                    plVar27 = plVar19 + 1;
                    do {
                      lVar55 = *plVar27;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                      if (bVar11) {
                        *plVar27 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
                    }
                  }
                  plVar19 = *(long **)((long)plVar10 + -0x2e0);
                  if (plVar19 != (long *)0x0) {
                    plVar27 = plVar19 + 1;
                    do {
                      lVar55 = *plVar27;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                      if (bVar11) {
                        *plVar27 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
                    }
                  }
                }
                uVar56 = *(uint *)(plVar33 + 0x9e);
                plVar19 = (long *)plVar33[0xb6];
                (**(code **)(*plVar19 + 0x90))();
                lVar55 = *plVar19;
                if (uVar56 < 0x30) {
                  *(undefined **)((long)plVar10 + -0x2d0) = &UNK_10f66a490;
                  *(undefined8 *)((long)plVar10 + -0x2c8) = 0x3b;
                  lVar65 = *(long *)((long)plVar10 + -0x3c8);
                  if (lVar55 == 0) {
                    FUN_10a0edfc4((undefined1 *)((long)plVar10 + -0x2d0));
                    goto LAB_10a5f7a1c;
                  }
                  plVar19 = *(long **)(lVar65 + 0x630);
                  if (plVar19 == (long *)0x0) {
                    iVar53 = 0;
                  }
                  else {
                    iVar53 = 0;
                    do {
                      iVar53 = iVar53 + (int)((ulong)(plVar19[4] - plVar19[3]) >> 3) *
                                        (int)plVar19[2] * -0x55555555;
                      plVar19 = (long *)*plVar19;
                    } while (plVar19 != (long *)0x0);
                  }
                  uVar56 = *(uint *)(lVar65 + 0x570);
                  iVar50 = *(int *)(lVar65 + 0x57c);
                  *(ulong *)((long)plVar10 + -0x3f8) = (ulong)uVar56;
                  iVar64 = iVar50 + uVar56;
                  *(int *)((long)plVar10 + -0x454) = iVar64;
                  uVar56 = iVar64 + 1;
                  *(ulong *)((long)plVar10 + -0x388) = (ulong)uVar56;
                  uVar56 = iVar53 * uVar56;
                  if ((uVar56 >> 0xf & 0xffff) != 0) {
                    FUN_10a185264((undefined1 *)((long)plVar10 + -0x2d0),0x100);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              ((undefined1 *)((long)plVar10 + -0x2d0),&UNK_10f66a4cc,0x46);
                    __ZNSt3__19to_stringEi((undefined1 *)((long)plVar10 + -0x1b0),0xffff);
                    uVar57 = *(ulong *)((long)plVar10 + -0x1a8);
                    puVar67 = *(undefined1 **)((long)plVar10 + -0x1b0);
                    if (-1 < (char)*(byte *)((long)plVar10 + -0x199)) {
                      uVar57 = (ulong)*(byte *)((long)plVar10 + -0x199);
                      puVar67 = (undefined1 *)((long)plVar10 + -0x1b0);
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              ((undefined1 *)((long)plVar10 + -0x2d0),puVar67,uVar57);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              ((undefined1 *)((long)plVar10 + -0x2d0),&UNK_10f66a513,0x53);
                    FUN_10a61d104((undefined1 *)((long)plVar10 + -0x2d0));
                    goto LAB_10a5f7a1c;
                  }
                  fVar79 = *(float *)(lVar65 + 0x578);
                  *(undefined4 *)((long)plVar10 + -0x44c) = *(undefined4 *)(lVar65 + 0x574);
                  uVar39 = *(uint *)(lVar65 + 0x580);
                  *(undefined8 *)((long)plVar10 + -0x438) = 0;
                  *(ulong *)((long)plVar10 + -0x440) = (ulong)uVar39;
                  *(undefined4 *)((long)plVar10 + -0x444) =
                       *(undefined4 *)(*(long *)(*(long *)(lVar65 + 0x170) + 0xa20) + 0x18);
                  FUN_10ab4a154(lVar55,uVar56 * 2);
                  plVar27 = (long *)(ulong)(uint)((int)*(undefined8 *)((long)plVar10 + -0x388) *
                                                 (iVar53 * 6 + -6));
                  FUN_10ab4cb54(lVar55);
                  uVar56 = *(uint *)(lVar55 + 0x110);
                  lVar65 = *(long *)(lVar55 + 0x100);
                  if (uVar56 == 0xffffffff) {
                    lVar24 = 0;
                    lVar30 = *(long *)(lVar55 + 0xf8);
                  }
                  else {
                    lVar30 = *(long *)(lVar55 + 0xf8);
                    uVar57 = (lVar65 - lVar30 >> 3) * 0x6db6db6db6db6db7;
                    if (uVar57 < uVar56 || uVar57 - uVar56 == 0) {
                      FUN_10ab725fc();
                      goto LAB_10a5f7a1c;
                    }
                    lVar24 = lVar30 + (ulong)uVar56 * 0x38;
                  }
                  lVar35 = lVar30;
                  if (lVar30 == lVar65) {
                    lVar35 = 0;
                    lVar71 = lVar30;
                  }
                  else {
                    do {
                      lVar71 = lVar35;
                      if (*(long *)(lVar35 + 0x18) == lRam00000001137eb640) break;
                      lVar35 = lVar35 + 0x38;
                      lVar71 = lVar65;
                    } while (lVar35 != lVar65);
                    lVar72 = lVar30;
                    lVar35 = 0;
                    if (lVar71 != lVar65) {
                      lVar35 = lVar71;
                    }
                    do {
                      lVar71 = lVar72;
                      if (*(long *)(lVar72 + 0x18) == lRam00000001137eb678) break;
                      lVar72 = lVar72 + 0x38;
                      lVar71 = lVar65;
                    } while (lVar72 != lVar65);
                  }
                  uVar56 = *(uint *)(lVar55 + 0x120);
                  lVar72 = lVar30;
                  if (uVar56 == 0xffffffff) {
                    lVar45 = 0;
                  }
                  else {
                    uVar57 = (lVar65 - lVar30 >> 3) * 0x6db6db6db6db6db7;
                    if (uVar57 < uVar56 || uVar57 - uVar56 == 0) {
                      FUN_10ab725fc();
                      goto LAB_10a5f7a1c;
                    }
                    lVar45 = lVar30 + (ulong)uVar56 * 0x38;
                  }
                  for (; (lVar72 != lVar65 &&
                         (lVar30 = lVar72, *(long *)(lVar72 + 0x18) != lRam00000001137eb6e8));
                      lVar72 = lVar72 + 0x38) {
                    lVar30 = lVar65;
                  }
                  if (((((lVar24 == 0) || (*(int *)(lVar24 + 0x24) != 5)) || (lVar35 == 0)) ||
                      (((((*(int *)(lVar24 + 0x28) != 3 || (*(int *)(lVar35 + 0x24) != 5)) ||
                         ((lVar71 == lVar65 || ((lVar71 == 0 || (*(int *)(lVar35 + 0x28) != 3))))))
                        || (*(int *)(lVar71 + 0x24) != 5)) ||
                       (((((*(int *)(lVar71 + 0x28) != 3 || (lVar45 == 0)) ||
                          (*(int *)(lVar45 + 0x24) != 5)) || ((lVar30 == lVar65 || (lVar30 == 0))))
                        || (*(int *)(lVar45 + 0x28) != 2)))))) ||
                     ((*(int *)(lVar30 + 0x24) != 5 || (*(int *)(lVar30 + 0x28) != 3))))
                  goto LAB_10a5f78a8;
                  lVar65 = *(long *)(lVar55 + 0x10);
                  uVar56 = *(uint *)(lVar24 + 0x30);
                  uVar39 = *(uint *)(lVar55 + 0xf0);
                  uVar17 = *(uint *)(lVar35 + 0x30);
                  uVar3 = *(uint *)(lVar71 + 0x30);
                  uVar4 = *(uint *)(lVar45 + 0x30);
                  uVar5 = *(uint *)(lVar30 + 0x30);
                  FUN_10ab4ccac((undefined1 *)((long)plVar10 + -0x2d0),lVar55);
                  lVar55 = *(long *)(*(long *)((long)plVar10 + -0x3c8) + 0x630);
                  if (lVar55 != 0) {
                    uVar44 = 0;
                    *(undefined4 *)((long)plVar10 + -0x418) = 0;
                    *(ulong *)((long)plVar10 + -0x390) = lVar65 + (ulong)uVar56;
                    *(ulong *)((long)plVar10 + -0x370) = lVar65 + (ulong)uVar17;
                    *(ulong *)((long)plVar10 + -0x368) = lVar65 + (ulong)uVar3;
                    *(ulong *)((long)plVar10 + -0x398) = lVar65 + (ulong)uVar4;
                    *(ulong *)((long)plVar10 + -0x3a0) = lVar65 + (ulong)uVar5;
                    fVar68 = fVar79 * *(float *)((long)plVar10 + -0x44c);
                    if (0.0 <= fVar79) {
                      fVar68 = fVar79;
                    }
                    *(float *)((long)plVar10 + -0x450) = fVar68;
                    *(int *)((long)plVar10 + -0x458) =
                         ~(iVar50 + (int)*(undefined8 *)((long)plVar10 + -0x3f8));
                    do {
                      *(long *)((long)plVar10 + -0x400) = lVar55;
                      lVar65 = *(long *)(lVar55 + 0x18);
                      lVar55 = *(long *)(lVar55 + 0x20);
                      if (lVar55 - lVar65 != 0) {
                        *(undefined8 *)((long)plVar10 + -1000) = 0;
                        uVar57 = 0;
                        *(undefined4 *)((long)plVar10 + -0x414) = 0;
                        uVar56 = (int)((ulong)(lVar55 - lVar65) >> 3) *
                                 (int)*(undefined8 *)((long)plVar10 + -0x388) * -0x55555555;
                        *(float *)((long)plVar10 + -0x344) = (float)uVar56;
                        *(uint *)((long)plVar10 + -0x448) = uVar56 - 1;
                        do {
                          plVar19 = (long *)(lVar65 + uVar57 * 0x18);
                          *(long **)((long)plVar10 + -0x340) = plVar19;
                          lVar30 = *plVar19;
                          lVar24 = plVar19[1];
                          uVar57 = (lVar24 - lVar30 >> 2) * -0x5555555555555555;
                          iVar53 = (int)uVar57 * 2;
                          *(int *)((long)plVar10 + -0x3ec) = iVar53 + -2;
                          if (lVar24 != lVar30) {
                            uVar51 = 0;
                            do {
                              uVar29 = (ulong)(uVar44 + 1);
                              puVar41 = (undefined8 *)(lVar30 + uVar51 * 0xc);
                              lVar55 = *(long *)((long)plVar10 + -0x390);
                              puVar22 = (undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar44);
                              uVar31 = *puVar41;
                              *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar41 + 1);
                              fVar68 = (float)uVar51 / (float)(uVar57 - 1);
                              *puVar22 = uVar31;
                              uVar31 = *puVar41;
                              puVar23 = (undefined8 *)(lVar55 + uVar39 * uVar29);
                              *(undefined8 **)((long)plVar10 + -0x420) = puVar41;
                              *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar41 + 1);
                              *(undefined8 **)((long)plVar10 + -0x3b0) = puVar23;
                              *(undefined8 **)((long)plVar10 + -0x3a8) = puVar22;
                              *puVar23 = uVar31;
                              lVar30 = (ulong)uVar39 * (ulong)uVar44;
                              lVar65 = uVar39 * uVar29;
                              lVar55 = *(long *)((long)plVar10 + -0x3a0);
                              puVar36 = (undefined4 *)(lVar55 + (ulong)uVar39 * (ulong)uVar44);
                              *puVar36 = 0x3f800000;
                              puVar47 = (undefined4 *)(lVar55 + uVar39 * uVar29);
                              *puVar47 = 0xbf800000;
                              iVar64 = *(int *)((long)plVar10 + -0x444);
                              fVar79 = fVar68;
                              if (iVar64 < 0x79) {
                                fVar79 = 0.0;
                              }
                              puVar36[1] = fVar79;
                              puVar47[1] = fVar79;
                              *(undefined4 **)((long)plVar10 + -0x380) = puVar47;
                              *(undefined4 **)((long)plVar10 + -0x378) = puVar36;
                              puVar36[2] = 0;
                              puVar47[2] = 0;
                              lVar55 = *(long *)((long)plVar10 + -0x398);
                              puVar47 = (undefined4 *)(lVar55 + (ulong)uVar39 * (ulong)uVar44);
                              *puVar47 = 0;
                              puVar47[1] = 1.0 - fVar68;
                              puVar36 = (undefined4 *)(lVar55 + uVar39 * uVar29);
                              *puVar36 = 0x3f800000;
                              *(undefined4 **)((long)plVar10 + -0x3c0) = puVar36;
                              *(undefined4 **)((long)plVar10 + -0x3b8) = puVar47;
                              puVar36[1] = 1.0 - fVar68;
                              *(ulong *)((long)plVar10 + -0x338) = uVar51;
                              if (uVar51 == 0) {
                                lVar55 = *(long *)((long)plVar10 + -0x368);
                                puVar23 = (undefined8 *)(lVar55 + lVar30);
                                *puVar23 = 0;
                                *(undefined4 *)(puVar23 + 1) = 0;
                                puVar23 = (undefined8 *)(lVar55 + lVar65);
                                *puVar23 = 0;
                                *(undefined4 *)(puVar23 + 1) = 0;
                                lVar55 = 0;
                                if (iVar64 < 0x79) {
                                  lVar24 = *(long *)((long)plVar10 + -0x380);
                                  *(undefined4 *)(*(long *)((long)plVar10 + -0x378) + 4) =
                                       0x3f800000;
                                  *(undefined4 *)(lVar24 + 4) = 0x3f800000;
                                }
                              }
                              else {
                                uVar51 = uVar51 - 1;
                                lVar55 = **(long **)((long)plVar10 + -0x340);
                                uVar57 = ((*(long **)((long)plVar10 + -0x340))[1] - lVar55 >> 2) *
                                         -0x5555555555555555;
                                if (uVar57 < uVar51 || uVar57 - uVar51 == 0) goto LAB_10a5f7a1c;
                                puVar22 = (undefined8 *)(lVar55 + uVar51 * 0xc);
                                lVar55 = *(long *)((long)plVar10 + -0x368);
                                puVar23 = (undefined8 *)(lVar55 + lVar30);
                                uVar31 = *puVar22;
                                *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar22 + 1);
                                *puVar23 = uVar31;
                                puVar23 = (undefined8 *)(lVar55 + lVar65);
                                lVar55 = *(long *)((long)plVar10 + -0x338);
                                uVar31 = *puVar22;
                                *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar22 + 1);
                                *puVar23 = uVar31;
                              }
                              lVar24 = **(long **)((long)plVar10 + -0x340);
                              uVar57 = ((*(long **)((long)plVar10 + -0x340))[1] - lVar24 >> 2) *
                                       -0x5555555555555555;
                              *(uint *)((long)plVar10 + -0x424) = uVar44;
                              if (lVar55 == uVar57 - 1) {
                                lVar55 = *(long *)((long)plVar10 + -0x370);
                                puVar23 = (undefined8 *)(lVar55 + lVar30);
                                *puVar23 = 0;
                                *(undefined4 *)(puVar23 + 1) = 0;
                                puVar23 = (undefined8 *)(lVar55 + lVar65);
                                *puVar23 = 0;
                                *(undefined4 *)(puVar23 + 1) = 0;
                                if (*(int *)((long)plVar10 + -0x444) < 0x79) {
                                  lVar55 = *(long *)((long)plVar10 + -0x380);
                                  *(undefined4 *)(*(long *)((long)plVar10 + -0x378) + 4) =
                                       0x40000000;
                                  *(undefined4 *)(lVar55 + 4) = 0x40000000;
                                }
                              }
                              else {
                                uVar51 = lVar55 + 1;
                                if (uVar57 < uVar51 || uVar57 - uVar51 == 0) goto LAB_10a5f7a1c;
                                puVar22 = (undefined8 *)(lVar24 + uVar51 * 0xc);
                                lVar55 = *(long *)((long)plVar10 + -0x370);
                                puVar23 = (undefined8 *)(lVar55 + lVar30);
                                uVar31 = *puVar22;
                                *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar22 + 1);
                                *puVar23 = uVar31;
                                puVar23 = (undefined8 *)(lVar55 + lVar65);
                                uVar31 = *puVar22;
                                *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar22 + 1);
                                *puVar23 = uVar31;
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(undefined4 *)((long)plVar10 + -0x418));
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),0);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                              *(undefined4 *)((long)plVar10 + -0x424));
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(undefined4 *)((long)plVar10 + -0x418));
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),1);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                              *(int *)((long)plVar10 + -0x424) + 2);
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(undefined4 *)((long)plVar10 + -0x418));
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),2);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),uVar29);
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(int *)((long)plVar10 + -0x418) + 1);
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),0);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                              *(int *)((long)plVar10 + -0x424) + 3);
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(int *)((long)plVar10 + -0x418) + 1);
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),1);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),uVar29);
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(int *)((long)plVar10 + -0x418) + 1);
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),2);
                                plVar27 = (long *)(ulong)(*(int *)((long)plVar10 + -0x424) + 2);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0));
                              }
                              if (1 < (uint)*(undefined8 *)((long)plVar10 + -0x388)) {
                                *(long *)((long)plVar10 + -0x3d8) =
                                     *(long *)((long)plVar10 + -0x370) + lVar65;
                                *(long *)((long)plVar10 + -0x3d0) =
                                     *(long *)((long)plVar10 + -0x370) + lVar30;
                                *(long *)((long)plVar10 + -0x3e0) =
                                     *(long *)((long)plVar10 + -0x368) + lVar30;
                                puVar23 = (undefined8 *)(*(long *)((long)plVar10 + -0x368) + lVar65)
                                ;
                                *(undefined8 *)((long)plVar10 + -0x408) = 0;
                                *(ulong *)((long)plVar10 + -0x410) =
                                     (ulong)(uint)(*(float *)((long)plVar10 + -0x44c) +
                                                  *(float *)((long)plVar10 + -0x450) * fVar68);
                                iVar64 = *(int *)((long)plVar10 + -0x418) + -1;
                                iVar50 = *(int *)((long)plVar10 + -0x418) + -2;
                                uVar56 = *(uint *)((long)plVar10 + -0x448);
                                iVar59 = *(int *)((long)plVar10 + -0x424);
                                uVar57 = 1;
                                do {
                                  fVar68 = (float)(uint)((int)*(undefined8 *)((long)plVar10 + -1000)
                                                        + (int)uVar57) /
                                           *(float *)((long)plVar10 + -0x344);
                                  fVar79 = fVar68 * 78.233 + fVar68 * 12.9898;
                                  _sinf();
                                  fVar79 = fVar79 * 43758.547 - (float)(int)(fVar79 * 43758.547);
                                  *(undefined8 *)((long)plVar10 + -0x358) = 0;
                                  *(ulong *)((long)plVar10 + -0x360) = (ulong)(uint)fVar79;
                                  fVar79 = fVar79 * 2.0 + -1.0;
                                  *(undefined8 *)((long)plVar10 + -0x318) = 0;
                                  *(ulong *)((long)plVar10 + -800) = (ulong)(uint)fVar79;
                                  fVar79 = fVar68 * 78.233 + fVar79 * 12.9898;
                                  _sinf();
                                  fVar79 = (fVar79 * 43758.547 - (float)(int)(fVar79 * 43758.547)) *
                                           2.0 + -1.0;
                                  *(undefined8 *)((long)plVar10 + -0x328) = 0;
                                  *(ulong *)((long)plVar10 + -0x330) = (ulong)(uint)fVar79;
                                  fVar79 = fVar79 * 78.233 +
                                           (float)*(undefined8 *)((long)plVar10 + -800) * 12.9898;
                                  _sinf();
                                  fVar79 = (fVar79 * 43758.547 - (float)(int)(fVar79 * 43758.547)) *
                                           2.0 + -1.0;
                                  if (*(ulong *)((long)plVar10 + -0x3f8) < uVar57) {
                                    plVar27 = (long *)(ulong)*(uint *)(*(long *)((long)plVar10 +
                                                                                -0x400) + 0x10);
                                    puVar12 = *(uint **)((long)plVar10 + -0x3c8);
                                    func_0x00010a5f9694(puVar12,plVar27,
                                                        *(undefined4 *)((long)plVar10 + -0x414));
                                    uVar17 = *puVar12;
                                    uVar51 = (ulong)uVar17;
                                    uVar3 = puVar12[1];
                                    uVar29 = (ulong)uVar3;
                                    if (((int)uVar17 < 0) && ((int)uVar3 < 0)) goto LAB_10a5f5d9c;
                                    uVar31 = **(undefined8 **)((long)plVar10 + -0x420);
                                    fVar77 = *(float *)(*(undefined8 **)((long)plVar10 + -0x420) + 1
                                                       );
                                    fVar69 = (float)uVar31;
                                    fVar70 = (float)((ulong)uVar31 >> 0x20);
                                    fVar74 = fVar77;
                                    if (-1 < (int)uVar17) {
                                      fVar68 = ((float)uVar56 / *(float *)((long)plVar10 + -0x344))
                                               * 78.233 + fVar68 * 12.9898;
                                      _sinf();
                                      lVar55 = *(long *)(*(long *)((long)plVar10 + -0x400) + 0x18);
                                      uVar43 = (*(long *)(*(long *)((long)plVar10 + -0x400) + 0x20)
                                                - lVar55 >> 3) * -0x5555555555555555;
                                      if (uVar43 < uVar51 || uVar43 - uVar51 == 0)
                                      goto LAB_10a5f7a1c;
                                      plVar19 = (long *)(lVar55 + uVar51 * 0x18);
                                      lVar55 = *plVar19;
                                      uVar51 = (plVar19[1] - lVar55 >> 2) * -0x5555555555555555;
                                      uVar43 = *(ulong *)((long)plVar10 + -0x338);
                                      if (uVar51 < uVar43 || uVar51 - uVar43 == 0)
                                      goto LAB_10a5f7a1c;
                                      fVar68 = fVar68 * 43758.547 - (float)(int)(fVar68 * 43758.547)
                                      ;
                                      puVar22 = (undefined8 *)(lVar55 + uVar43 * 0xc);
                                      fVar74 = 1.0 - fVar68;
                                      uVar31 = *puVar22;
                                      uVar31 = CONCAT44(fVar70 * fVar74 +
                                                        (float)((ulong)uVar31 >> 0x20) * fVar68,
                                                        fVar69 * fVar74 + (float)uVar31 * fVar68);
                                      fVar74 = fVar74 * fVar77 + fVar68 * *(float *)(puVar22 + 1);
                                    }
                                    if (-1 < (int)uVar3) {
                                      lVar55 = *(long *)(*(long *)((long)plVar10 + -0x400) + 0x18);
                                      uVar51 = (*(long *)(*(long *)((long)plVar10 + -0x400) + 0x20)
                                                - lVar55 >> 3) * -0x5555555555555555;
                                      if (uVar51 < uVar29 || uVar51 - uVar29 == 0)
                                      goto LAB_10a5f7a1c;
                                      plVar19 = (long *)(lVar55 + uVar29 * 0x18);
                                      lVar55 = *plVar19;
                                      uVar51 = (plVar19[1] - lVar55 >> 2) * -0x5555555555555555;
                                      uVar29 = *(ulong *)((long)plVar10 + -0x338);
                                      if (uVar51 < uVar29 || uVar51 - uVar29 == 0)
                                      goto LAB_10a5f7a1c;
                                      puVar22 = (undefined8 *)(lVar55 + uVar29 * 0xc);
                                      fVar78 = (float)*(undefined8 *)((long)plVar10 + -0x360);
                                      fVar68 = 1.0 - fVar78;
                                      uVar87 = *puVar22;
                                      uVar31 = CONCAT44((float)((ulong)uVar31 >> 0x20) * fVar68 +
                                                        (float)((ulong)uVar87 >> 0x20) * fVar78,
                                                        (float)uVar31 * fVar68 +
                                                        (float)uVar87 * fVar78);
                                      fVar74 = fVar68 * fVar74 + fVar78 * *(float *)(puVar22 + 1);
                                    }
                                    fVar68 = (float)*(undefined8 *)((long)plVar10 + -0x440);
                                    fVar69 = (float)*(undefined8 *)((long)plVar10 + -800) * fVar68 +
                                             ((float)uVar31 - fVar69);
                                    fVar70 = (float)*(undefined8 *)((long)plVar10 + -0x330) * fVar68
                                             + ((float)((ulong)uVar31 >> 0x20) - fVar70);
                                    fVar68 = fVar68 * fVar79 + (fVar74 - fVar77);
                                    uVar80 = 0x40000000;
                                  }
                                  else {
LAB_10a5f5d9c:
                                    fVar68 = (float)*(undefined8 *)((long)plVar10 + -0x410);
                                    fVar69 = (float)*(undefined8 *)((long)plVar10 + -800) * fVar68;
                                    fVar70 = (float)*(undefined8 *)((long)plVar10 + -0x330) * fVar68
                                    ;
                                    fVar68 = fVar68 * fVar79;
                                    uVar80 = 0x3f800000;
                                  }
                                  uVar3 = iVar53 + iVar59;
                                  uVar17 = uVar3 + 1;
                                  puVar22 = *(undefined8 **)((long)plVar10 + -0x3b0);
                                  fVar79 = *(float *)(*(undefined8 **)((long)plVar10 + -0x3a8) + 1);
                                  lVar55 = *(long *)((long)plVar10 + -0x390);
                                  puVar41 = (undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar3);
                                  uVar31 = **(undefined8 **)((long)plVar10 + -0x3a8);
                                  *puVar41 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar41 + 1) = fVar68 + fVar79;
                                  fVar79 = *(float *)(puVar22 + 1);
                                  puVar41 = (undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar17);
                                  uVar31 = *puVar22;
                                  *puVar41 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar41 + 1) = fVar68 + fVar79;
                                  puVar22 = *(undefined8 **)((long)plVar10 + -0x3d8);
                                  fVar79 = *(float *)(*(undefined8 **)((long)plVar10 + -0x3d0) + 1);
                                  lVar55 = *(long *)((long)plVar10 + -0x370);
                                  lVar65 = *(long *)((long)plVar10 + -0x368);
                                  puVar41 = (undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar3);
                                  uVar31 = **(undefined8 **)((long)plVar10 + -0x3d0);
                                  *puVar41 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar41 + 1) = fVar68 + fVar79;
                                  fVar79 = *(float *)(puVar22 + 1);
                                  puVar41 = (undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar17);
                                  uVar31 = *puVar22;
                                  *puVar41 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar41 + 1) = fVar68 + fVar79;
                                  fVar79 = *(float *)(*(undefined8 **)((long)plVar10 + -0x3e0) + 1);
                                  puVar22 = (undefined8 *)(lVar65 + (ulong)uVar39 * (ulong)uVar3);
                                  uVar31 = **(undefined8 **)((long)plVar10 + -0x3e0);
                                  *puVar22 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar22 + 1) = fVar68 + fVar79;
                                  fVar79 = *(float *)(puVar23 + 1);
                                  puVar22 = (undefined8 *)(lVar65 + (ulong)uVar39 * (ulong)uVar17);
                                  uVar31 = *puVar23;
                                  *puVar22 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar22 + 1) = fVar68 + fVar79;
                                  lVar55 = *(long *)((long)plVar10 + -0x398);
                                  *(undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar3) =
                                       **(undefined8 **)((long)plVar10 + -0x3b8);
                                  *(undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar17) =
                                       **(undefined8 **)((long)plVar10 + -0x3c0);
                                  puVar36 = *(undefined4 **)((long)plVar10 + -0x380);
                                  puVar47 = *(undefined4 **)((long)plVar10 + -0x378);
                                  lVar55 = *(long *)((long)plVar10 + -0x3a0);
                                  puVar25 = (undefined4 *)(lVar55 + (ulong)uVar39 * (ulong)uVar3);
                                  *puVar25 = *puVar47;
                                  puVar18 = (undefined4 *)(lVar55 + (ulong)uVar39 * (ulong)uVar17);
                                  *puVar18 = *puVar36;
                                  puVar25[1] = puVar47[1];
                                  puVar18[1] = puVar36[1];
                                  puVar25[2] = uVar80;
                                  puVar18[2] = uVar80;
                                  if (*(ulong *)((long)plVar10 + -0x338) <
                                      ((*(long **)((long)plVar10 + -0x340))[1] -
                                       **(long **)((long)plVar10 + -0x340) >> 2) *
                                      -0x5555555555555555 - 1U) {
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar50);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),0);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (ulong)uVar3);
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar50);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),1);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                                  iVar53 + iVar59 + 2);
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar50);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),2);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                                  iVar53 + iVar59 + 1);
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar64);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),0);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                                  iVar53 + iVar59 + 3);
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar64);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),1);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                                  iVar53 + iVar59 + 1);
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar64);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),2);
                                    plVar27 = (long *)(ulong)(iVar53 + iVar59 + 2);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0));
                                  }
                                  uVar57 = uVar57 + 1;
                                  iVar64 = iVar64 + *(int *)((long)plVar10 + -0x3ec);
                                  iVar50 = iVar50 + *(int *)((long)plVar10 + -0x3ec);
                                  iVar59 = iVar59 + iVar53;
                                  uVar56 = uVar56 - 1;
                                } while (*(ulong *)((long)plVar10 + -0x388) != uVar57);
                              }
                              lVar30 = **(long **)((long)plVar10 + -0x340);
                              uVar57 = ((*(long **)((long)plVar10 + -0x340))[1] - lVar30 >> 2) *
                                       -0x5555555555555555;
                              iVar64 = *(int *)((long)plVar10 + -0x418) + 2;
                              if (uVar57 - 1 <= *(ulong *)((long)plVar10 + -0x338)) {
                                iVar64 = *(int *)((long)plVar10 + -0x418);
                              }
                              *(int *)((long)plVar10 + -0x418) = iVar64;
                              uVar44 = *(int *)((long)plVar10 + -0x424) + 2;
                              uVar51 = *(ulong *)((long)plVar10 + -0x338) + 1;
                            } while (uVar51 < uVar57);
                            lVar65 = *(long *)(*(long *)((long)plVar10 + -0x400) + 0x18);
                            lVar55 = *(long *)(*(long *)((long)plVar10 + -0x400) + 0x20);
                          }
                          uVar44 = uVar44 + iVar53 * *(int *)((long)plVar10 + -0x454);
                          *(int *)((long)plVar10 + -0x418) =
                               *(int *)((long)plVar10 + -0x418) +
                               *(int *)((long)plVar10 + -0x3ec) * *(int *)((long)plVar10 + -0x454);
                          uVar57 = (ulong)(*(int *)((long)plVar10 + -0x414) + 1U);
                          uVar51 = (lVar55 - lVar65 >> 3) * -0x5555555555555555;
                          *(int *)((long)plVar10 + -0x448) =
                               *(int *)((long)plVar10 + -0x448) + *(int *)((long)plVar10 + -0x458);
                          *(long *)((long)plVar10 + -1000) =
                               *(long *)((long)plVar10 + -1000) + *(long *)((long)plVar10 + -0x388);
                          *(uint *)((long)plVar10 + -0x414) = *(int *)((long)plVar10 + -0x414) + 1U;
                        } while (uVar57 <= uVar51 && uVar51 - uVar57 != 0);
                      }
                      lVar55 = **(long **)((long)plVar10 + -0x400);
                    } while (lVar55 != 0);
                  }
                }
                else {
                  *(undefined **)((long)plVar10 + -0x2d0) = &UNK_10f66a490;
                  *(undefined8 *)((long)plVar10 + -0x2c8) = 0x3b;
                  lVar65 = *(long *)((long)plVar10 + -0x3c8);
                  if (lVar55 == 0) {
                    FUN_10a0edfc4((undefined1 *)((long)plVar10 + -0x2d0));
                    goto LAB_10a5f7a1c;
                  }
                  plVar19 = *(long **)(lVar65 + 0x630);
                  if (plVar19 == (long *)0x0) {
                    iVar53 = 0;
                  }
                  else {
                    iVar53 = 0;
                    do {
                      iVar53 = iVar53 + (int)((ulong)(plVar19[4] - plVar19[3]) >> 3) *
                                        (int)plVar19[2] * -0x55555555;
                      plVar19 = (long *)*plVar19;
                    } while (plVar19 != (long *)0x0);
                  }
                  uVar56 = *(uint *)(lVar65 + 0x570);
                  iVar50 = *(int *)(lVar65 + 0x57c);
                  *(ulong *)((long)plVar10 + -0x3f8) = (ulong)uVar56;
                  iVar64 = iVar50 + uVar56;
                  *(int *)((long)plVar10 + -0x454) = iVar64;
                  uVar56 = iVar64 + 1;
                  *(ulong *)((long)plVar10 + -0x388) = (ulong)uVar56;
                  uVar56 = iVar53 * uVar56;
                  if ((uVar56 >> 0xf & 0xffff) != 0) {
                    FUN_10a185264((undefined1 *)((long)plVar10 + -0x2d0),0x100);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              ((undefined1 *)((long)plVar10 + -0x2d0),&UNK_10f66a4cc,0x46);
                    __ZNSt3__19to_stringEi((undefined1 *)((long)plVar10 + -0x1b0),0xffff);
                    uVar57 = *(ulong *)((long)plVar10 + -0x1a8);
                    puVar67 = *(undefined1 **)((long)plVar10 + -0x1b0);
                    if (-1 < (char)*(byte *)((long)plVar10 + -0x199)) {
                      uVar57 = (ulong)*(byte *)((long)plVar10 + -0x199);
                      puVar67 = (undefined1 *)((long)plVar10 + -0x1b0);
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              ((undefined1 *)((long)plVar10 + -0x2d0),puVar67,uVar57);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              ((undefined1 *)((long)plVar10 + -0x2d0),&UNK_10f66a513,0x53);
                    FUN_10a61d104((undefined1 *)((long)plVar10 + -0x2d0));
                    goto LAB_10a5f7a1c;
                  }
                  fVar79 = *(float *)(lVar65 + 0x578);
                  *(undefined4 *)((long)plVar10 + -0x44c) = *(undefined4 *)(lVar65 + 0x574);
                  uVar39 = *(uint *)(lVar65 + 0x580);
                  *(undefined8 *)((long)plVar10 + -0x438) = 0;
                  *(ulong *)((long)plVar10 + -0x440) = (ulong)uVar39;
                  *(undefined4 *)((long)plVar10 + -0x444) =
                       *(undefined4 *)(*(long *)(*(long *)(lVar65 + 0x170) + 0xa20) + 0x18);
                  FUN_10ab4a154(lVar55,uVar56 * 2);
                  plVar27 = (long *)(ulong)(uint)((int)*(undefined8 *)((long)plVar10 + -0x388) *
                                                 (iVar53 * 6 + -6));
                  FUN_10ab4cb54(lVar55);
                  uVar56 = *(uint *)(lVar55 + 0x110);
                  lVar65 = *(long *)(lVar55 + 0x100);
                  if (uVar56 == 0xffffffff) {
                    lVar24 = 0;
                    lVar30 = *(long *)(lVar55 + 0xf8);
                  }
                  else {
                    lVar30 = *(long *)(lVar55 + 0xf8);
                    uVar57 = (lVar65 - lVar30 >> 3) * 0x6db6db6db6db6db7;
                    if (uVar57 < uVar56 || uVar57 - uVar56 == 0) {
                      FUN_10ab725fc();
                      goto LAB_10a5f7a1c;
                    }
                    lVar24 = lVar30 + (ulong)uVar56 * 0x38;
                  }
                  lVar35 = lVar30;
                  if (lVar30 == lVar65) {
                    lVar35 = 0;
                    lVar71 = lVar30;
                  }
                  else {
                    do {
                      lVar71 = lVar35;
                      if (*(long *)(lVar35 + 0x18) == lRam00000001137eb640) break;
                      lVar35 = lVar35 + 0x38;
                      lVar71 = lVar65;
                    } while (lVar35 != lVar65);
                    lVar72 = lVar30;
                    lVar35 = 0;
                    if (lVar71 != lVar65) {
                      lVar35 = lVar71;
                    }
                    do {
                      lVar71 = lVar72;
                      if (*(long *)(lVar72 + 0x18) == lRam00000001137eb678) break;
                      lVar72 = lVar72 + 0x38;
                      lVar71 = lVar65;
                    } while (lVar72 != lVar65);
                  }
                  uVar56 = *(uint *)(lVar55 + 0x120);
                  lVar72 = lVar30;
                  if (uVar56 == 0xffffffff) {
                    lVar45 = 0;
                  }
                  else {
                    uVar57 = (lVar65 - lVar30 >> 3) * 0x6db6db6db6db6db7;
                    if (uVar57 < uVar56 || uVar57 - uVar56 == 0) {
                      FUN_10ab725fc();
                      goto LAB_10a5f7a1c;
                    }
                    lVar45 = lVar30 + (ulong)uVar56 * 0x38;
                  }
                  for (; (lVar72 != lVar65 &&
                         (lVar30 = lVar72, *(long *)(lVar72 + 0x18) != lRam00000001137eb6e8));
                      lVar72 = lVar72 + 0x38) {
                    lVar30 = lVar65;
                  }
                  if ((((((lVar24 == 0) || (*(int *)(lVar24 + 0x24) != 5)) || (lVar35 == 0)) ||
                       ((*(int *)(lVar24 + 0x28) != 3 || (*(int *)(lVar35 + 0x24) != 5)))) ||
                      ((lVar71 == lVar65 || ((lVar71 == 0 || (*(int *)(lVar35 + 0x28) != 3)))))) ||
                     ((*(int *)(lVar71 + 0x24) != 5 ||
                      ((((*(int *)(lVar71 + 0x28) != 3 || (lVar45 == 0)) ||
                        (*(int *)(lVar45 + 0x24) != 5)) ||
                       (((lVar30 == lVar65 || (lVar30 == 0)) ||
                        ((*(int *)(lVar45 + 0x28) != 2 ||
                         ((*(int *)(lVar30 + 0x24) != 5 || (*(int *)(lVar30 + 0x28) != 4))))))))))))
                  {
                    FUN_10a3ee510(&UNK_10f66a567);
                    goto LAB_10a5f7a1c;
                  }
                  lVar65 = *(long *)(lVar55 + 0x10);
                  uVar56 = *(uint *)(lVar24 + 0x30);
                  uVar39 = *(uint *)(lVar55 + 0xf0);
                  uVar17 = *(uint *)(lVar35 + 0x30);
                  uVar3 = *(uint *)(lVar71 + 0x30);
                  uVar4 = *(uint *)(lVar45 + 0x30);
                  uVar5 = *(uint *)(lVar30 + 0x30);
                  FUN_10ab4ccac((undefined1 *)((long)plVar10 + -0x2d0),lVar55);
                  lVar55 = *(long *)(*(long *)((long)plVar10 + -0x3c8) + 0x630);
                  if (lVar55 != 0) {
                    uVar44 = 0;
                    *(undefined4 *)((long)plVar10 + -0x418) = 0;
                    *(ulong *)((long)plVar10 + -0x390) = lVar65 + (ulong)uVar56;
                    *(ulong *)((long)plVar10 + -0x370) = lVar65 + (ulong)uVar17;
                    *(ulong *)((long)plVar10 + -0x368) = lVar65 + (ulong)uVar3;
                    *(ulong *)((long)plVar10 + -0x398) = lVar65 + (ulong)uVar4;
                    *(ulong *)((long)plVar10 + -0x3a0) = lVar65 + (ulong)uVar5;
                    fVar68 = fVar79 * *(float *)((long)plVar10 + -0x44c);
                    if (0.0 <= fVar79) {
                      fVar68 = fVar79;
                    }
                    *(float *)((long)plVar10 + -0x450) = fVar68;
                    *(int *)((long)plVar10 + -0x458) =
                         ~(iVar50 + (int)*(undefined8 *)((long)plVar10 + -0x3f8));
                    do {
                      *(long *)((long)plVar10 + -0x400) = lVar55;
                      lVar65 = *(long *)(lVar55 + 0x18);
                      lVar55 = *(long *)(lVar55 + 0x20);
                      if (lVar55 - lVar65 != 0) {
                        *(undefined8 *)((long)plVar10 + -1000) = 0;
                        uVar57 = 0;
                        *(undefined4 *)((long)plVar10 + -0x414) = 0;
                        uVar56 = (int)((ulong)(lVar55 - lVar65) >> 3) *
                                 (int)*(undefined8 *)((long)plVar10 + -0x388) * -0x55555555;
                        *(float *)((long)plVar10 + -0x344) = (float)uVar56;
                        *(uint *)((long)plVar10 + -0x448) = uVar56 - 1;
                        do {
                          plVar19 = (long *)(lVar65 + uVar57 * 0x18);
                          *(long **)((long)plVar10 + -0x340) = plVar19;
                          lVar30 = *plVar19;
                          lVar24 = plVar19[1];
                          uVar57 = (lVar24 - lVar30 >> 2) * -0x5555555555555555;
                          iVar53 = (int)uVar57 * 2;
                          *(int *)((long)plVar10 + -0x3ec) = iVar53 + -2;
                          if (lVar24 != lVar30) {
                            uVar51 = 0;
                            do {
                              uVar29 = (ulong)(uVar44 + 1);
                              puVar41 = (undefined8 *)(lVar30 + uVar51 * 0xc);
                              lVar55 = *(long *)((long)plVar10 + -0x390);
                              puVar22 = (undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar44);
                              uVar31 = *puVar41;
                              *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar41 + 1);
                              *puVar22 = uVar31;
                              puVar23 = (undefined8 *)(lVar55 + uVar39 * uVar29);
                              uVar31 = *puVar41;
                              *(undefined8 **)((long)plVar10 + -0x420) = puVar41;
                              *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar41 + 1);
                              *(undefined8 **)((long)plVar10 + -0x3b0) = puVar23;
                              *(undefined8 **)((long)plVar10 + -0x3a8) = puVar22;
                              *puVar23 = uVar31;
                              lVar55 = *(long *)((long)plVar10 + -0x3a0);
                              puVar36 = (undefined4 *)(lVar55 + (ulong)uVar39 * (ulong)uVar44);
                              *puVar36 = 0x3f800000;
                              puVar47 = (undefined4 *)(lVar55 + uVar39 * uVar29);
                              *puVar47 = 0xbf800000;
                              fVar68 = (float)uVar51 / (float)(uVar57 - 1);
                              lVar65 = (ulong)uVar39 * (ulong)uVar44;
                              lVar55 = uVar39 * uVar29;
                              iVar64 = *(int *)((long)plVar10 + -0x444);
                              fVar79 = fVar68;
                              if (iVar64 < 0x79) {
                                fVar79 = 0.0;
                              }
                              puVar36[1] = fVar79;
                              puVar47[1] = fVar79;
                              puVar36[2] = 0;
                              puVar47[2] = 0;
                              *(undefined4 **)((long)plVar10 + -0x380) = puVar47;
                              *(undefined4 **)((long)plVar10 + -0x378) = puVar36;
                              puVar36[3] = 0;
                              puVar47[3] = 0;
                              lVar30 = *(long *)((long)plVar10 + -0x398);
                              puVar47 = (undefined4 *)(lVar30 + (ulong)uVar39 * (ulong)uVar44);
                              *puVar47 = 0;
                              puVar47[1] = 1.0 - fVar68;
                              puVar36 = (undefined4 *)(lVar30 + uVar39 * uVar29);
                              *puVar36 = 0x3f800000;
                              *(undefined4 **)((long)plVar10 + -0x3c0) = puVar36;
                              *(undefined4 **)((long)plVar10 + -0x3b8) = puVar47;
                              puVar36[1] = 1.0 - fVar68;
                              *(ulong *)((long)plVar10 + -0x338) = uVar51;
                              if (uVar51 == 0) {
                                lVar30 = *(long *)((long)plVar10 + -0x368);
                                puVar23 = (undefined8 *)(lVar30 + lVar65);
                                *puVar23 = 0;
                                *(undefined4 *)(puVar23 + 1) = 0;
                                puVar23 = (undefined8 *)(lVar30 + lVar55);
                                *puVar23 = 0;
                                *(undefined4 *)(puVar23 + 1) = 0;
                                lVar30 = 0;
                                if (iVar64 < 0x79) {
                                  lVar24 = *(long *)((long)plVar10 + -0x380);
                                  *(undefined4 *)(*(long *)((long)plVar10 + -0x378) + 4) =
                                       0x3f800000;
                                  *(undefined4 *)(lVar24 + 4) = 0x3f800000;
                                }
                              }
                              else {
                                uVar51 = uVar51 - 1;
                                lVar30 = **(long **)((long)plVar10 + -0x340);
                                uVar57 = ((*(long **)((long)plVar10 + -0x340))[1] - lVar30 >> 2) *
                                         -0x5555555555555555;
                                if (uVar57 < uVar51 || uVar57 - uVar51 == 0) goto LAB_10a5f7a1c;
                                puVar22 = (undefined8 *)(lVar30 + uVar51 * 0xc);
                                lVar30 = *(long *)((long)plVar10 + -0x368);
                                puVar23 = (undefined8 *)(lVar30 + lVar65);
                                uVar31 = *puVar22;
                                *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar22 + 1);
                                *puVar23 = uVar31;
                                puVar23 = (undefined8 *)(lVar30 + lVar55);
                                lVar30 = *(long *)((long)plVar10 + -0x338);
                                uVar31 = *puVar22;
                                *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar22 + 1);
                                *puVar23 = uVar31;
                              }
                              lVar24 = **(long **)((long)plVar10 + -0x340);
                              uVar57 = ((*(long **)((long)plVar10 + -0x340))[1] - lVar24 >> 2) *
                                       -0x5555555555555555;
                              *(uint *)((long)plVar10 + -0x424) = uVar44;
                              if (lVar30 == uVar57 - 1) {
                                lVar30 = *(long *)((long)plVar10 + -0x370);
                                puVar23 = (undefined8 *)(lVar30 + lVar65);
                                *puVar23 = 0;
                                *(undefined4 *)(puVar23 + 1) = 0;
                                puVar23 = (undefined8 *)(lVar30 + lVar55);
                                *puVar23 = 0;
                                *(undefined4 *)(puVar23 + 1) = 0;
                                if (*(int *)((long)plVar10 + -0x444) < 0x79) {
                                  lVar30 = *(long *)((long)plVar10 + -0x380);
                                  *(undefined4 *)(*(long *)((long)plVar10 + -0x378) + 4) =
                                       0x40000000;
                                  *(undefined4 *)(lVar30 + 4) = 0x40000000;
                                }
                              }
                              else {
                                uVar51 = lVar30 + 1;
                                if (uVar57 < uVar51 || uVar57 - uVar51 == 0) goto LAB_10a5f7a1c;
                                puVar22 = (undefined8 *)(lVar24 + uVar51 * 0xc);
                                lVar30 = *(long *)((long)plVar10 + -0x370);
                                puVar23 = (undefined8 *)(lVar30 + lVar65);
                                uVar31 = *puVar22;
                                *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar22 + 1);
                                *puVar23 = uVar31;
                                puVar23 = (undefined8 *)(lVar30 + lVar55);
                                uVar31 = *puVar22;
                                *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar22 + 1);
                                *puVar23 = uVar31;
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(undefined4 *)((long)plVar10 + -0x418));
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),0);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                              *(undefined4 *)((long)plVar10 + -0x424));
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(undefined4 *)((long)plVar10 + -0x418));
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),1);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                              *(int *)((long)plVar10 + -0x424) + 2);
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(undefined4 *)((long)plVar10 + -0x418));
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),2);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),uVar29);
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(int *)((long)plVar10 + -0x418) + 1);
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),0);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                              *(int *)((long)plVar10 + -0x424) + 3);
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(int *)((long)plVar10 + -0x418) + 1);
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),1);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),uVar29);
                                FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                              (undefined1 *)((long)plVar10 + -0x2d0),
                                              *(int *)((long)plVar10 + -0x418) + 1);
                                FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                              (undefined1 *)((long)plVar10 + -0x2e8),2);
                                plVar27 = (long *)(ulong)(*(int *)((long)plVar10 + -0x424) + 2);
                                FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0));
                              }
                              if (1 < (uint)*(undefined8 *)((long)plVar10 + -0x388)) {
                                *(long *)((long)plVar10 + -0x3d8) =
                                     *(long *)((long)plVar10 + -0x370) + lVar55;
                                *(long *)((long)plVar10 + -0x3d0) =
                                     *(long *)((long)plVar10 + -0x370) + lVar65;
                                *(long *)((long)plVar10 + -0x3e0) =
                                     *(long *)((long)plVar10 + -0x368) + lVar65;
                                puVar23 = (undefined8 *)(*(long *)((long)plVar10 + -0x368) + lVar55)
                                ;
                                *(undefined8 *)((long)plVar10 + -0x408) = 0;
                                *(ulong *)((long)plVar10 + -0x410) =
                                     (ulong)(uint)(*(float *)((long)plVar10 + -0x44c) +
                                                  *(float *)((long)plVar10 + -0x450) * fVar68);
                                iVar64 = *(int *)((long)plVar10 + -0x418) + -1;
                                iVar50 = *(int *)((long)plVar10 + -0x418) + -2;
                                uVar56 = *(uint *)((long)plVar10 + -0x448);
                                iVar59 = *(int *)((long)plVar10 + -0x424);
                                uVar57 = 1;
                                do {
                                  fVar68 = (float)(uint)((int)*(undefined8 *)((long)plVar10 + -1000)
                                                        + (int)uVar57) /
                                           *(float *)((long)plVar10 + -0x344);
                                  fVar79 = fVar68 * 78.233 + fVar68 * 12.9898;
                                  _sinf();
                                  fVar79 = fVar79 * 43758.547 - (float)(int)(fVar79 * 43758.547);
                                  *(undefined8 *)((long)plVar10 + -0x358) = 0;
                                  *(ulong *)((long)plVar10 + -0x360) = (ulong)(uint)fVar79;
                                  fVar79 = fVar79 * 2.0 + -1.0;
                                  *(undefined8 *)((long)plVar10 + -0x318) = 0;
                                  *(ulong *)((long)plVar10 + -800) = (ulong)(uint)fVar79;
                                  fVar79 = fVar68 * 78.233 + fVar79 * 12.9898;
                                  _sinf();
                                  fVar79 = (fVar79 * 43758.547 - (float)(int)(fVar79 * 43758.547)) *
                                           2.0 + -1.0;
                                  *(undefined8 *)((long)plVar10 + -0x328) = 0;
                                  *(ulong *)((long)plVar10 + -0x330) = (ulong)(uint)fVar79;
                                  fVar79 = fVar79 * 78.233 +
                                           (float)*(undefined8 *)((long)plVar10 + -800) * 12.9898;
                                  _sinf();
                                  fVar79 = (fVar79 * 43758.547 - (float)(int)(fVar79 * 43758.547)) *
                                           2.0 + -1.0;
                                  if (*(ulong *)((long)plVar10 + -0x3f8) < uVar57) {
                                    plVar27 = (long *)(ulong)*(uint *)(*(long *)((long)plVar10 +
                                                                                -0x400) + 0x10);
                                    puVar12 = *(uint **)((long)plVar10 + -0x3c8);
                                    func_0x00010a5f9694(puVar12,plVar27,
                                                        *(undefined4 *)((long)plVar10 + -0x414));
                                    uVar17 = *puVar12;
                                    uVar51 = (ulong)uVar17;
                                    uVar3 = puVar12[1];
                                    uVar29 = (ulong)uVar3;
                                    if (((int)uVar17 < 0) && ((int)uVar3 < 0)) goto LAB_10a5f6880;
                                    uVar31 = **(undefined8 **)((long)plVar10 + -0x420);
                                    fVar77 = *(float *)(*(undefined8 **)((long)plVar10 + -0x420) + 1
                                                       );
                                    fVar69 = (float)uVar31;
                                    fVar70 = (float)((ulong)uVar31 >> 0x20);
                                    fVar74 = fVar77;
                                    if (-1 < (int)uVar17) {
                                      fVar68 = ((float)uVar56 / *(float *)((long)plVar10 + -0x344))
                                               * 78.233 + fVar68 * 12.9898;
                                      _sinf();
                                      lVar55 = *(long *)(*(long *)((long)plVar10 + -0x400) + 0x18);
                                      uVar43 = (*(long *)(*(long *)((long)plVar10 + -0x400) + 0x20)
                                                - lVar55 >> 3) * -0x5555555555555555;
                                      if (uVar43 < uVar51 || uVar43 - uVar51 == 0)
                                      goto LAB_10a5f7a1c;
                                      plVar19 = (long *)(lVar55 + uVar51 * 0x18);
                                      lVar55 = *plVar19;
                                      uVar51 = (plVar19[1] - lVar55 >> 2) * -0x5555555555555555;
                                      uVar43 = *(ulong *)((long)plVar10 + -0x338);
                                      if (uVar51 < uVar43 || uVar51 - uVar43 == 0)
                                      goto LAB_10a5f7a1c;
                                      fVar68 = fVar68 * 43758.547 - (float)(int)(fVar68 * 43758.547)
                                      ;
                                      puVar22 = (undefined8 *)(lVar55 + uVar43 * 0xc);
                                      fVar74 = 1.0 - fVar68;
                                      uVar31 = *puVar22;
                                      uVar31 = CONCAT44(fVar70 * fVar74 +
                                                        (float)((ulong)uVar31 >> 0x20) * fVar68,
                                                        fVar69 * fVar74 + (float)uVar31 * fVar68);
                                      fVar74 = fVar74 * fVar77 + fVar68 * *(float *)(puVar22 + 1);
                                    }
                                    if (-1 < (int)uVar3) {
                                      lVar55 = *(long *)(*(long *)((long)plVar10 + -0x400) + 0x18);
                                      uVar51 = (*(long *)(*(long *)((long)plVar10 + -0x400) + 0x20)
                                                - lVar55 >> 3) * -0x5555555555555555;
                                      if (uVar51 < uVar29 || uVar51 - uVar29 == 0)
                                      goto LAB_10a5f7a1c;
                                      plVar19 = (long *)(lVar55 + uVar29 * 0x18);
                                      lVar55 = *plVar19;
                                      uVar51 = (plVar19[1] - lVar55 >> 2) * -0x5555555555555555;
                                      uVar29 = *(ulong *)((long)plVar10 + -0x338);
                                      if (uVar51 < uVar29 || uVar51 - uVar29 == 0)
                                      goto LAB_10a5f7a1c;
                                      puVar22 = (undefined8 *)(lVar55 + uVar29 * 0xc);
                                      fVar78 = (float)*(undefined8 *)((long)plVar10 + -0x360);
                                      fVar68 = 1.0 - fVar78;
                                      uVar87 = *puVar22;
                                      uVar31 = CONCAT44((float)((ulong)uVar31 >> 0x20) * fVar68 +
                                                        (float)((ulong)uVar87 >> 0x20) * fVar78,
                                                        (float)uVar31 * fVar68 +
                                                        (float)uVar87 * fVar78);
                                      fVar74 = fVar68 * fVar74 + fVar78 * *(float *)(puVar22 + 1);
                                    }
                                    fVar68 = (float)*(undefined8 *)((long)plVar10 + -0x440);
                                    fVar69 = (float)*(undefined8 *)((long)plVar10 + -800) * fVar68 +
                                             ((float)uVar31 - fVar69);
                                    fVar70 = (float)*(undefined8 *)((long)plVar10 + -0x330) * fVar68
                                             + ((float)((ulong)uVar31 >> 0x20) - fVar70);
                                    fVar68 = fVar68 * fVar79 + (fVar74 - fVar77);
                                    uVar80 = 0x40000000;
                                  }
                                  else {
LAB_10a5f6880:
                                    fVar68 = (float)*(undefined8 *)((long)plVar10 + -0x410);
                                    fVar69 = (float)*(undefined8 *)((long)plVar10 + -800) * fVar68;
                                    fVar70 = (float)*(undefined8 *)((long)plVar10 + -0x330) * fVar68
                                    ;
                                    fVar68 = fVar68 * fVar79;
                                    uVar80 = 0x3f800000;
                                  }
                                  uVar3 = iVar53 + iVar59;
                                  uVar17 = uVar3 + 1;
                                  puVar22 = *(undefined8 **)((long)plVar10 + -0x3b0);
                                  fVar79 = *(float *)(*(undefined8 **)((long)plVar10 + -0x3a8) + 1);
                                  lVar55 = *(long *)((long)plVar10 + -0x390);
                                  puVar41 = (undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar3);
                                  uVar31 = **(undefined8 **)((long)plVar10 + -0x3a8);
                                  *puVar41 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar41 + 1) = fVar68 + fVar79;
                                  fVar79 = *(float *)(puVar22 + 1);
                                  puVar41 = (undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar17);
                                  uVar31 = *puVar22;
                                  *puVar41 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar41 + 1) = fVar68 + fVar79;
                                  puVar22 = *(undefined8 **)((long)plVar10 + -0x3d8);
                                  fVar79 = *(float *)(*(undefined8 **)((long)plVar10 + -0x3d0) + 1);
                                  lVar55 = *(long *)((long)plVar10 + -0x370);
                                  lVar65 = *(long *)((long)plVar10 + -0x368);
                                  puVar41 = (undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar3);
                                  uVar31 = **(undefined8 **)((long)plVar10 + -0x3d0);
                                  *puVar41 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar41 + 1) = fVar68 + fVar79;
                                  fVar79 = *(float *)(puVar22 + 1);
                                  puVar41 = (undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar17);
                                  uVar31 = *puVar22;
                                  *puVar41 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar41 + 1) = fVar68 + fVar79;
                                  fVar79 = *(float *)(*(undefined8 **)((long)plVar10 + -0x3e0) + 1);
                                  puVar22 = (undefined8 *)(lVar65 + (ulong)uVar39 * (ulong)uVar3);
                                  uVar31 = **(undefined8 **)((long)plVar10 + -0x3e0);
                                  *puVar22 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar22 + 1) = fVar68 + fVar79;
                                  fVar79 = *(float *)(puVar23 + 1);
                                  puVar22 = (undefined8 *)(lVar65 + (ulong)uVar39 * (ulong)uVar17);
                                  uVar31 = *puVar23;
                                  *puVar22 = CONCAT44(fVar70 + (float)((ulong)uVar31 >> 0x20),
                                                      fVar69 + (float)uVar31);
                                  *(float *)(puVar22 + 1) = fVar68 + fVar79;
                                  lVar55 = *(long *)((long)plVar10 + -0x398);
                                  *(undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar3) =
                                       **(undefined8 **)((long)plVar10 + -0x3b8);
                                  *(undefined8 *)(lVar55 + (ulong)uVar39 * (ulong)uVar17) =
                                       **(undefined8 **)((long)plVar10 + -0x3c0);
                                  puVar36 = *(undefined4 **)((long)plVar10 + -0x380);
                                  puVar47 = *(undefined4 **)((long)plVar10 + -0x378);
                                  lVar55 = *(long *)((long)plVar10 + -0x3a0);
                                  puVar25 = (undefined4 *)(lVar55 + (ulong)uVar39 * (ulong)uVar3);
                                  *puVar25 = *puVar47;
                                  puVar18 = (undefined4 *)(lVar55 + (ulong)uVar39 * (ulong)uVar17);
                                  *puVar18 = *puVar36;
                                  puVar25[1] = puVar47[1];
                                  puVar18[1] = puVar36[1];
                                  puVar25[2] = uVar80;
                                  puVar18[2] = uVar80;
                                  puVar25[3] = (float)(uVar57 & 0xffffffff);
                                  puVar18[3] = (float)(uVar57 & 0xffffffff);
                                  if (*(ulong *)((long)plVar10 + -0x338) <
                                      ((*(long **)((long)plVar10 + -0x340))[1] -
                                       **(long **)((long)plVar10 + -0x340) >> 2) *
                                      -0x5555555555555555 - 1U) {
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar50);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),0);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (ulong)uVar3);
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar50);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),1);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                                  iVar53 + iVar59 + 2);
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar50);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),2);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                                  iVar53 + iVar59 + 1);
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar64);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),0);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                                  iVar53 + iVar59 + 3);
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar64);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),1);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0),
                                                  iVar53 + iVar59 + 1);
                                    FUN_10ab4e710((undefined1 *)((long)plVar10 + -0x2e8),
                                                  (undefined1 *)((long)plVar10 + -0x2d0),
                                                  iVar53 + iVar64);
                                    FUN_10ab4e794((undefined1 *)((long)plVar10 + -0x1b0),
                                                  (undefined1 *)((long)plVar10 + -0x2e8),2);
                                    plVar27 = (long *)(ulong)(iVar53 + iVar59 + 2);
                                    FUN_10a557ab0((undefined1 *)((long)plVar10 + -0x1b0));
                                  }
                                  uVar57 = uVar57 + 1;
                                  iVar64 = iVar64 + *(int *)((long)plVar10 + -0x3ec);
                                  iVar50 = iVar50 + *(int *)((long)plVar10 + -0x3ec);
                                  iVar59 = iVar59 + iVar53;
                                  uVar56 = uVar56 - 1;
                                } while (*(ulong *)((long)plVar10 + -0x388) != uVar57);
                              }
                              lVar30 = **(long **)((long)plVar10 + -0x340);
                              uVar57 = ((*(long **)((long)plVar10 + -0x340))[1] - lVar30 >> 2) *
                                       -0x5555555555555555;
                              iVar64 = *(int *)((long)plVar10 + -0x418) + 2;
                              if (uVar57 - 1 <= *(ulong *)((long)plVar10 + -0x338)) {
                                iVar64 = *(int *)((long)plVar10 + -0x418);
                              }
                              *(int *)((long)plVar10 + -0x418) = iVar64;
                              uVar44 = *(int *)((long)plVar10 + -0x424) + 2;
                              uVar51 = *(ulong *)((long)plVar10 + -0x338) + 1;
                            } while (uVar51 < uVar57);
                            lVar65 = *(long *)(*(long *)((long)plVar10 + -0x400) + 0x18);
                            lVar55 = *(long *)(*(long *)((long)plVar10 + -0x400) + 0x20);
                          }
                          uVar44 = uVar44 + iVar53 * *(int *)((long)plVar10 + -0x454);
                          *(int *)((long)plVar10 + -0x418) =
                               *(int *)((long)plVar10 + -0x418) +
                               *(int *)((long)plVar10 + -0x3ec) * *(int *)((long)plVar10 + -0x454);
                          uVar57 = (ulong)(*(int *)((long)plVar10 + -0x414) + 1U);
                          uVar51 = (lVar55 - lVar65 >> 3) * -0x5555555555555555;
                          *(int *)((long)plVar10 + -0x448) =
                               *(int *)((long)plVar10 + -0x448) + *(int *)((long)plVar10 + -0x458);
                          *(long *)((long)plVar10 + -1000) =
                               *(long *)((long)plVar10 + -1000) + *(long *)((long)plVar10 + -0x388);
                          *(uint *)((long)plVar10 + -0x414) = *(int *)((long)plVar10 + -0x414) + 1U;
                        } while (uVar57 <= uVar51 && uVar51 - uVar57 != 0);
                      }
                      lVar55 = **(long **)((long)plVar10 + -0x400);
                    } while (lVar55 != 0);
                  }
                }
                (**(code **)(**(long **)(*(long *)((long)plVar10 + -0x3c8) + 0x5b0) + 0xa0))();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar10 + -0x168))
                goto LAB_10a5f78a4;
                plVar15 = *(long **)((long)plVar10 + -0x3c8);
                puVar67 = *(undefined1 **)((long)plVar10 + -0xc0);
                pcVar9 = *(code **)((long)plVar10 + -0xb8);
                plVar62 = *(long **)((long)plVar10 + -0xd0);
                plVar33 = *(long **)((long)plVar10 + -200);
                uVar57 = *(ulong *)((long)plVar10 + -0xe0);
                puVar54 = *(undefined1 **)((long)plVar10 + -0xd8);
                plVar28 = *(long **)((long)plVar10 + -0xf0);
                plVar19 = *(long **)((long)plVar10 + -0xe8);
                param_1 = *(long ***)((long)plVar10 + -0x100);
                unaff_x25 = *(undefined8 *)((long)plVar10 + -0xf8);
                unaff_x28 = *(undefined8 *)((long)plVar10 + -0x110);
                unaff_x27 = *(long **)((long)plVar10 + -0x108);
                unaff_d9 = *(undefined8 *)((long)plVar10 + -0x120);
                unaff_d8 = *(undefined8 *)((long)plVar10 + -0x118);
                unaff_d11 = *(undefined8 *)((long)plVar10 + -0x130);
                unaff_d10 = *(undefined8 *)((long)plVar10 + -0x128);
                unaff_d13 = *(undefined8 *)((long)plVar10 + -0x140);
                unaff_d12 = *(undefined8 *)((long)plVar10 + -0x138);
                unaff_d15 = *(undefined8 *)((long)plVar10 + -0x150);
                unaff_d14 = *(undefined8 *)((long)plVar10 + -0x148);
                plVar10 = (long *)((long)plVar10 + -0xb0);
                goto code_r0x00010a5f9290;
              }
              if ((*(byte *)((long)plVar27 + 0x534) & 1) != 0) {
                if (plVar62 == (long *)0x0) {
LAB_10a5f4e60:
                  if ((uint)(*(int *)(*(long *)(plVar27[0x21] + 0x850) + 0x2c) - (int)plVar27[0xa8])
                      < 2) goto LAB_10a5f770c;
                  FUN_10a5f4bcc(plVar33);
                  if (plVar62 != (long *)0x0) goto LAB_10a5f4f24;
                  lVar55 = 0;
                }
                else {
                  lVar55 = plVar62[0x45];
                  FUN_10a5fbd7c();
                  if (lVar55 == plVar27[0xa7]) goto LAB_10a5f4e60;
                  FUN_10a5f4bcc(plVar33);
LAB_10a5f4f24:
                  lVar55 = plVar62[0x45];
                  FUN_10a5fbd7c();
                }
                plVar27[0xa7] = lVar55;
                goto LAB_10a5f770c;
              }
              plVar19 = plVar33;
              FUN_10a5f7bec();
              *(char *)((long)plVar27 + 0x534) = (char)plVar19;
              if ((int)plVar19 == 0) goto LAB_10a5f770c;
              uVar57 = (ulong)*(byte *)(plVar27[0x21] + 0x29);
              if (5 < uVar57) goto LAB_10a5f7a1c;
              plVar19 = *(long **)(plVar27[0x21] + uVar57 * 8 + 0x30);
              (**(code **)(*plVar19 + 0x18))();
              if ((int)plVar19 == 0) {
                if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
                  func_0x00010ae06f08(1,2,&UNK_10f66828f,&UNK_10f668524,0x38c,&UNK_10f66856b);
                }
              }
              else {
                plVar19 = plVar27 + 0xa9;
                plVar27 = (long *)plVar27[0xa9];
                if ((plVar27 == (long *)0x0) || ((**(code **)(*plVar27 + 0x90))(), *plVar27 == 0)) {
                  puVar23 = (undefined8 *)((long)plVar10 + -0x2d0);
                  FUN_10a0d0194((undefined1 *)((long)plVar10 + -0x2e8));
                  FUN_10ab6e728();
                  plVar33 = *(long **)((long)plVar10 + -0x3c8);
                  if (*(char *)((long)puVar23 + 0x17) < '\0') {
                    func_0x000107c3192c((undefined1 *)((long)plVar10 + -0x1b0),*puVar23,puVar23[1]);
                  }
                  else {
                    uVar87 = puVar23[1];
                    uVar31 = *puVar23;
                    *(undefined8 *)((long)plVar10 + -0x1a0) = puVar23[2];
                    *(undefined8 *)((long)plVar10 + -0x1a8) = uVar87;
                    *(undefined8 *)((long)plVar10 + -0x1b0) = uVar31;
                  }
                  *(undefined8 *)((long)plVar10 + -0x198) = puVar23[3];
                  uVar80 = *(undefined4 *)(puVar23 + 6);
                  uVar31 = puVar23[4];
                  *(undefined8 *)((long)plVar10 + -0x188) = puVar23[5];
                  *(undefined8 *)((long)plVar10 + -400) = uVar31;
                  *(undefined4 *)((long)plVar10 + -0x180) = uVar80;
                  FUN_10ab6f520((undefined1 *)((long)plVar10 + -0x2d0),
                                (undefined1 *)((long)plVar10 + -0x1b0),1);
                  lVar55 = *(long *)((long)plVar10 + -0x2e8);
                  *(undefined4 *)(lVar55 + 0xf0) = *(undefined4 *)((long)plVar10 + -0x2d0);
                  if ((undefined4 *)(lVar55 + 0xf0) != (undefined4 *)((long)plVar10 + -0x2d0)) {
                    FUN_10a1903c4(lVar55 + 0xf8,*(long *)((long)plVar10 + -0x2c8),
                                  *(long *)((long)plVar10 + -0x2c0),
                                  (*(long *)((long)plVar10 + -0x2c0) -
                                   *(long *)((long)plVar10 + -0x2c8) >> 3) * 0x6db6db6db6db6db7);
                  }
                  uVar31 = *(undefined8 *)((long)plVar10 + -0x2b0);
                  uVar84 = *(undefined8 *)((long)plVar10 + -0x298);
                  uVar87 = *(undefined8 *)((long)plVar10 + -0x2a0);
                  *(undefined8 *)(lVar55 + 0x118) = *(undefined8 *)((long)plVar10 + -0x2a8);
                  *(undefined8 *)(lVar55 + 0x110) = uVar31;
                  *(undefined8 *)(lVar55 + 0x128) = uVar84;
                  *(undefined8 *)(lVar55 + 0x120) = uVar87;
                  *(undefined8 *)(lVar55 + 0x130) = *(undefined8 *)((long)plVar10 + -0x290);
                  *(undefined1 **)((long)plVar10 + -0x300) = (undefined1 *)((long)plVar10 + -0x2c8);
                  func_0x00010a190844((undefined1 *)((long)plVar10 + -0x300));
                  *(undefined8 *)(*(long *)((long)plVar10 + -0x2e8) + 0xe8) = 0x100000000;
                  *(undefined8 *)((long)plVar10 + -0x1b0) = 0;
                  FUN_10a1995d0((undefined1 *)((long)plVar10 + -0x2d0),
                                (undefined1 *)((long)plVar10 + -0x300),
                                (undefined1 *)((long)plVar10 + -0x1b0),
                                (undefined1 *)((long)plVar10 + -0x2e8));
                  func_0x00010a19a938(plVar19,(undefined1 *)((long)plVar10 + -0x2d0));
                  plVar27 = *(long **)((long)plVar10 + -0x2c8);
                  if (plVar27 != (long *)0x0) {
                    plVar62 = plVar27 + 1;
                    do {
                      lVar55 = *plVar62;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                      if (bVar11) {
                        *plVar62 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar27 + 0x10))(plVar27);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                    }
                  }
                  plVar27 = (long *)*plVar19;
                  if (*(char *)((long)plVar27 + 0xb9) != '\0') {
                    *(undefined1 *)((long)plVar27 + 0xb9) = 0;
                    (**(code **)(*plVar27 + 0xa0))();
                  }
                  *(long *)((long)plVar10 + -0x1b0) = plVar33[0x2e];
                  FUN_10a2db3d8((undefined1 *)((long)plVar10 + -0x2d0),
                                (undefined1 *)((long)plVar10 + -0x1b0),plVar19);
                  *(undefined8 *)((long)plVar10 + -0x1a8) = *(undefined8 *)((long)plVar10 + -0x2c8);
                  *(undefined8 *)((long)plVar10 + -0x1b0) = *(undefined8 *)((long)plVar10 + -0x2d0);
                  if (*(long *)((long)plVar10 + -0x2c8) != 0) {
                    plVar27 = (long *)(*(long *)((long)plVar10 + -0x2c8) + 8);
                    do {
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                      if (bVar11) {
                        *plVar27 = *plVar27 + 1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                  }
                  FUN_10a426824(plVar33,(undefined1 *)((long)plVar10 + -0x1b0));
                  plVar27 = *(long **)((long)plVar10 + -0x1a8);
                  if (plVar27 != (long *)0x0) {
                    plVar62 = plVar27 + 1;
                    do {
                      lVar55 = *plVar62;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                      if (bVar11) {
                        *plVar62 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar27 + 0x10))(plVar27);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                    }
                  }
                  lVar55 = plVar33[0xaa];
                  *(long *)((long)plVar10 + -0x300) = plVar33[0xa9];
                  *(long *)((long)plVar10 + -0x2f8) = lVar55;
                  if (lVar55 != 0) {
                    plVar27 = (long *)(lVar55 + 8);
                    do {
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                      if (bVar11) {
                        *plVar27 = *plVar27 + 1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                  }
                  FUN_10a42646c(plVar33,(undefined1 *)((long)plVar10 + -0x300));
                  plVar27 = *(long **)((long)plVar10 + -0x2f8);
                  if (plVar27 != (long *)0x0) {
                    plVar62 = plVar27 + 1;
                    do {
                      lVar55 = *plVar62;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                      if (bVar11) {
                        *plVar62 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar27 + 0x10))(plVar27);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                    }
                  }
                  plVar27 = *(long **)((long)plVar10 + -0x2c8);
                  if (plVar27 != (long *)0x0) {
                    plVar62 = plVar27 + 1;
                    do {
                      lVar55 = *plVar62;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                      if (bVar11) {
                        *plVar62 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar27 + 0x10))(plVar27);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                    }
                  }
                  plVar27 = *(long **)((long)plVar10 + -0x2e0);
                  if (plVar27 != (long *)0x0) {
                    plVar62 = plVar27 + 1;
                    do {
                      lVar55 = *plVar62;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                      if (bVar11) {
                        *plVar62 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar27 + 0x10))(plVar27);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                    }
                  }
                }
                plVar27 = (long *)plVar33[0xc6];
                if (plVar27 == (long *)0x0) {
                  uVar56 = 0;
                }
                else {
                  uVar56 = 0;
                  do {
                    if (uVar56 <= *(uint *)(plVar27 + 2)) {
                      uVar56 = *(uint *)(plVar27 + 2);
                    }
                    plVar27 = (long *)*plVar27;
                  } while (plVar27 != (long *)0x0);
                  uVar56 = uVar56 << 1;
                }
                plVar27 = (long *)*plVar19;
                (**(code **)(*plVar27 + 0x90))();
                lVar55 = *plVar27;
                uVar39 = *(uint *)(lVar55 + 0xf0);
                uVar17 = 0;
                if (uVar39 != 0) {
                  uVar17 = 0;
                  if ((ulong)uVar39 != 0) {
                    uVar17 = (uint)((ulong)(*(long *)(lVar55 + 0x18) - *(long *)(lVar55 + 0x10)) /
                                   (ulong)uVar39);
                  }
                }
                plVar33 = *(long **)((long)plVar10 + -0x3c8);
                if (uVar17 < uVar56) {
                  FUN_10ab4a154(lVar55,(ulong)uVar56);
                  uVar39 = *(uint *)(lVar55 + 0x110);
                  if (uVar39 != 0xffffffff) {
                    lVar65 = *(long *)(lVar55 + 0xf8);
                    uVar57 = (*(long *)(lVar55 + 0x100) - lVar65 >> 3) * 0x6db6db6db6db6db7;
                    if (uVar57 < uVar39 || uVar57 - uVar39 == 0) {
                      FUN_10ab725fc();
                      goto LAB_10a5f7a1c;
                    }
                    if (((lVar65 != 0) &&
                        (lVar65 = lVar65 + (ulong)uVar39 * 0x38, *(int *)(lVar65 + 0x24) == 5)) &&
                       (*(int *)(lVar65 + 0x28) == 3)) {
                      uVar39 = 0;
                      uVar57 = 0;
                      puVar36 = (undefined4 *)
                                (*(long *)(lVar55 + 0x10) + (ulong)*(uint *)(lVar65 + 0x30));
                      uVar17 = *(uint *)(lVar55 + 0xf0);
                      do {
                        *puVar36 = 0xbf800000;
                        puVar36[1] = (float)uVar39;
                        puVar36[2] = 0;
                        puVar47 = (undefined4 *)((long)puVar36 + (ulong)uVar17);
                        *puVar47 = 0x3f800000;
                        puVar47[1] = (float)uVar39;
                        puVar47[2] = 0;
                        uVar57 = uVar57 + 2;
                        uVar39 = uVar39 + 1;
                        puVar36 = (undefined4 *)((long)puVar36 + (ulong)uVar17 * 2);
                      } while (uVar57 < uVar56);
                      (**(code **)(*(long *)*plVar19 + 0xa0))();
                      plVar33 = *(long **)((long)plVar10 + -0x3c8);
                      goto LAB_10a5f71ac;
                    }
                  }
                  FUN_10a3ee510(&UNK_10f66859d);
                  goto LAB_10a5f7a1c;
                }
              }
LAB_10a5f71ac:
              plVar27 = plVar33;
              FUN_10a5f9ad8(plVar33);
              plVar62 = (long *)plVar33[0xa2];
              for (plVar19 = (long *)plVar33[0xa1]; plVar19 != plVar62; plVar19 = plVar19 + 2) {
                plVar28 = (long *)plVar19[1];
                if (plVar28 != (long *)0x0) {
                  __ZNSt3__119__shared_weak_count4lockEv();
                  *(long **)((long)plVar10 + -0x2c8) = plVar28;
                  if (plVar28 != (long *)0x0) {
                    lVar55 = *plVar19;
                    *(long *)((long)plVar10 + -0x2d0) = lVar55;
                    if (lVar55 != 0) {
                      FUN_10aa19b04();
                    }
                    plVar15 = plVar28 + 1;
                    do {
                      lVar55 = *plVar15;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar11) {
                        *plVar15 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar28 + 0x10))(plVar28);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
                    }
                  }
                }
              }
              plVar19 = (long *)plVar33[0xc6];
              if (plVar19 != (long *)0x0) {
                plVar62 = plVar33 + 0xba;
                plVar28 = plVar33 + 0xbc;
                do {
                  plVar13 = (long *)0x2758;
                  __Znwm();
                  FUN_10a8f278c();
                  uVar56 = *(uint *)(plVar19 + 2);
                  plVar61 = (long *)(ulong)uVar56;
                  plVar15 = (long *)plVar33[0xbb];
                  if (plVar15 != (long *)0x0) {
                    uVar57 = (long)plVar15 - 1;
                    uVar39 = (uint)plVar15;
                    if (((ulong)plVar15 & uVar57) == 0) {
                      plVar33 = (long *)(ulong)(uVar39 - 1 & uVar56);
                    }
                    else {
                      plVar33 = plVar61;
                      if (plVar15 <= plVar61) {
                        uVar17 = 0;
                        if (uVar39 != 0) {
                          uVar17 = uVar56 / uVar39;
                        }
                        plVar33 = (long *)(ulong)(uVar56 - uVar17 * uVar39);
                      }
                    }
                    plVar26 = *(long **)(*plVar62 + (long)plVar33 * 8);
                    if (plVar26 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar26 = (long *)*plVar26;
                          if (plVar26 == (long *)0x0) goto LAB_10a5f72e4;
                          plVar32 = (long *)plVar26[1];
                          if (plVar32 != plVar61) break;
                          if (*(uint *)(plVar26 + 2) == uVar56) {
                            (**(code **)(*plVar13 + 8))(plVar13);
                            plVar33 = *(long **)((long)plVar10 + -0x3c8);
                            goto LAB_10a5f7588;
                          }
                        }
                        if (((ulong)plVar15 & uVar57) == 0) {
                          plVar32 = (long *)((ulong)plVar32 & uVar57);
                        }
                        else if (plVar15 <= plVar32) {
                          uVar51 = 0;
                          if (plVar15 != (long *)0x0) {
                            uVar51 = (ulong)plVar32 / (ulong)plVar15;
                          }
                          plVar32 = (long *)((long)plVar32 - uVar51 * (long)plVar15);
                        }
                      } while (plVar32 == plVar33);
                    }
                  }
LAB_10a5f72e4:
                  plVar26 = (long *)0x20;
                  __Znwm();
                  *(long **)((long)plVar10 + -0x2d0) = plVar26;
                  *(long **)((long)plVar10 + -0x2c8) = plVar62;
                  *(undefined8 *)((long)plVar10 + -0x2c0) = 1;
                  *plVar26 = 0;
                  plVar26[1] = (long)plVar61;
                  *(uint *)(plVar26 + 2) = uVar56;
                  plVar26[3] = (long)plVar13;
                  fVar79 = (float)(*(long *)(*(long *)((long)plVar10 + -0x3c8) + 0x5e8) + 1);
                  fVar68 = *(float *)(*(long *)((long)plVar10 + -0x3c8) + 0x5f0);
                  if ((plVar15 == (long *)0x0) || (fVar68 * (float)plVar15 < fVar79)) {
                    uVar57 = 1;
                    if ((long *)0x2 < plVar15) {
                      uVar57 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
                    }
                    plVar33 = (long *)(uVar57 | (long)plVar15 << 1);
                    plVar13 = (long *)(long)(fVar79 / fVar68);
                    if (plVar33 <= plVar13) {
                      plVar33 = plVar13;
                    }
                    if ((long)plVar33 - 1U == 0) {
                      plVar33 = (long *)0x2;
                      lVar55 = *(long *)((long)plVar10 + -0x3c8);
                    }
                    else {
                      lVar55 = *(long *)((long)plVar10 + -0x3c8);
                      if (((ulong)plVar33 & (long)plVar33 - 1U) != 0) {
                        __ZNSt3__112__next_primeEm();
                        plVar15 = *(long **)(lVar55 + 0x5d8);
                      }
                    }
                    if (plVar15 < plVar33) {
LAB_10a5f7390:
                      if ((ulong)plVar33 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10a5f7a1c;
                      }
                      lVar65 = (long)plVar33 << 3;
                      __Znwm();
                      lVar30 = *plVar62;
                      *plVar62 = lVar65;
                      if (lVar30 != 0) {
                        __ZdlPv();
                      }
                      plVar15 = (long *)0x0;
                      *(long **)(lVar55 + 0x5d8) = plVar33;
                      do {
                        *(undefined8 *)(*plVar62 + (long)plVar15 * 8) = 0;
                        plVar15 = (long *)((long)plVar15 + 1);
                      } while (plVar33 != plVar15);
                      plVar13 = (long *)*plVar28;
                      plVar15 = plVar33;
                      if (plVar13 != (long *)0x0) {
                        plVar32 = (long *)plVar13[1];
                        uVar57 = (long)plVar33 - 1;
                        if (((ulong)plVar33 & uVar57) == 0) {
                          plVar32 = (long *)((ulong)plVar32 & uVar57);
                        }
                        else if (plVar33 <= plVar32) {
                          uVar51 = 0;
                          if (plVar33 != (long *)0x0) {
                            uVar51 = (ulong)plVar32 / (ulong)plVar33;
                          }
                          plVar32 = (long *)((long)plVar32 - uVar51 * (long)plVar33);
                        }
                        *(long **)(*plVar62 + (long)plVar32 * 8) = plVar28;
                        plVar37 = (long *)*plVar13;
                        while (plVar37 != (long *)0x0) {
                          plVar40 = (long *)plVar37[1];
                          if (((ulong)plVar33 & uVar57) == 0) {
                            plVar40 = (long *)((ulong)plVar40 & uVar57);
                          }
                          else if (plVar33 <= plVar40) {
                            uVar51 = 0;
                            if (plVar33 != (long *)0x0) {
                              uVar51 = (ulong)plVar40 / (ulong)plVar33;
                            }
                            plVar40 = (long *)((long)plVar40 - uVar51 * (long)plVar33);
                          }
                          plVar38 = plVar37;
                          if (plVar40 != plVar32) {
                            lVar55 = *plVar62;
                            if (*(long *)(lVar55 + (long)plVar40 * 8) == 0) {
                              *(long **)(lVar55 + (long)plVar40 * 8) = plVar13;
                              plVar32 = plVar40;
                            }
                            else {
                              *plVar13 = *plVar37;
                              *plVar37 = **(undefined8 **)(lVar55 + (long)plVar40 * 8);
                              **(long **)(lVar55 + (long)plVar40 * 8) = (long)plVar37;
                              plVar38 = plVar13;
                            }
                          }
                          plVar13 = plVar38;
                          plVar37 = (long *)*plVar38;
                        }
                      }
                    }
                    else if (plVar33 < plVar15) {
                      plVar13 = (long *)(long)((float)*(ulong *)(lVar55 + 0x5e8) /
                                              *(float *)(lVar55 + 0x5f0));
                      if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if ((long *)0x1 < plVar13) {
                        plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
                      }
                      if (plVar33 <= plVar13) {
                        plVar33 = plVar13;
                      }
                      if (plVar33 < plVar15) {
                        if (plVar33 != (long *)0x0) goto LAB_10a5f7390;
                        lVar65 = *plVar62;
                        *plVar62 = 0;
                        if (lVar65 != 0) {
                          __ZdlPv();
                        }
                        *(undefined8 *)(lVar55 + 0x5d8) = 0;
                        plVar15 = (long *)0x0;
                      }
                      else {
                        plVar15 = *(long **)(lVar55 + 0x5d8);
                      }
                    }
                    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
                      plVar33 = (long *)(ulong)((int)plVar15 - 1U & uVar56);
                    }
                    else {
                      plVar33 = plVar61;
                      if (plVar15 <= plVar61) {
                        uVar57 = 0;
                        if (plVar15 != (long *)0x0) {
                          uVar57 = (ulong)plVar61 / (ulong)plVar15;
                        }
                        plVar33 = (long *)((long)plVar61 - uVar57 * (long)plVar15);
                      }
                    }
                  }
                  lVar55 = *plVar62;
                  plVar13 = *(long **)(lVar55 + (long)plVar33 * 8);
                  if (plVar13 == (long *)0x0) {
                    *plVar26 = *plVar28;
                    *plVar28 = (long)plVar26;
                    *(long **)(lVar55 + (long)plVar33 * 8) = plVar28;
                    plVar33 = *(long **)((long)plVar10 + -0x3c8);
                    if (*plVar26 != 0) {
                      plVar13 = *(long **)(*plVar26 + 8);
                      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
                        plVar13 = (long *)((ulong)plVar13 & (long)plVar15 - 1U);
                      }
                      else if (plVar15 <= plVar13) {
                        uVar57 = 0;
                        if (plVar15 != (long *)0x0) {
                          uVar57 = (ulong)plVar13 / (ulong)plVar15;
                        }
                        plVar13 = (long *)((long)plVar13 - uVar57 * (long)plVar15);
                      }
                      *(long **)(*plVar62 + (long)plVar13 * 8) = plVar26;
                    }
                  }
                  else {
                    *plVar26 = *plVar13;
                    *plVar13 = (long)plVar26;
                    plVar33 = *(long **)((long)plVar10 + -0x3c8);
                  }
                  *(undefined8 *)((long)plVar10 + -0x2d0) = 0;
                  plVar33[0xbd] = plVar33[0xbd] + 1;
                  FUN_10a61d1d4((undefined1 *)((long)plVar10 + -0x2d0));
LAB_10a5f7588:
                  plVar15 = plVar62;
                  FUN_10a61d22c(plVar62,(int)plVar19[2]);
                  if (plVar15 == (long *)0x0) {
LAB_10a5f7898:
                    FUN_109ffdddc(&UNK_10f66a46f);
                    goto LAB_10a5f78a4;
                  }
                  func_0x00010a8f2b5c(plVar15[3],plVar19 + 3);
                  plVar15 = plVar62;
                  FUN_10a61d22c(plVar62,(int)plVar19[2]);
                  if (plVar15 == (long *)0x0) goto LAB_10a5f7898;
                  FUN_10a8f2de0(plVar15[3],plVar27);
                  plVar19 = (long *)*plVar19;
                  if (plVar19 == (long *)0x0) break;
                } while( true );
              }
              if (plVar33[0xc2] != 0) {
                if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
                  func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x532,&UNK_10f66863f);
                  if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
                    *(long *)((long)plVar10 + -0x470) = plVar33[0xc2];
                    func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x533,&UNK_10f668651);
                  }
                }
                uVar56 = uRam000000011330a9e8;
                for (plVar19 = (long *)plVar33[0xc1]; plVar19 != (long *)0x0;
                    plVar19 = (long *)*plVar19) {
                  if ((uVar56 >> 2 & 1) != 0) {
                    uVar56 = *(uint *)(plVar19 + 2);
                    *(long *)((long)plVar10 + -0x470) =
                         (plVar19[4] - plVar19[3] >> 3) * -0x5555555555555555;
                    *(ulong *)((long)plVar10 + -0x468) = (ulong)uVar56;
                    func_0x00010ae06f08(1,4,&UNK_10f66828f,&UNK_10f668602,0x537,&UNK_10f668669);
                    uVar56 = uRam000000011330a9e8;
                  }
                }
              }
              FUN_10a5f9290(plVar33);
LAB_10a5f770c:
              *(undefined4 *)(plVar33 + 0xb5) =
                   *(undefined4 *)(*(long *)(plVar33[0x2e] + 0x850) + 0x2c);
              plVar27 = plVar33;
              FUN_10a5f9ad8();
              puVar22 = (undefined8 *)plVar33[0xa2];
              plVar19 = plVar27;
              for (puVar23 = (undefined8 *)plVar33[0xa1]; puVar23 != puVar22; puVar23 = puVar23 + 2)
              {
                plVar62 = (long *)puVar23[1];
                plVar19 = plVar62;
                if (plVar62 != (long *)0x0) {
                  __ZNSt3__119__shared_weak_count4lockEv();
                  *(long **)((long)plVar10 + -0x2c8) = plVar62;
                  plVar19 = plVar62;
                  if (plVar62 != (long *)0x0) {
                    plVar28 = (long *)*puVar23;
                    *(long **)((long)plVar10 + -0x2d0) = plVar28;
                    if (plVar28 != (long *)0x0) {
                      plVar19 = plVar28;
                      FUN_10aa19c3c(plVar28);
                      lVar55 = plVar28[0x56];
                      *(long *)((long)plVar10 + -0x1b0) = lVar55;
                      if (lVar55 != 0) {
                        plVar19 = plVar33 + 0xcf;
                        func_0x00010a49db98(plVar19,(undefined1 *)((long)plVar10 + -0x1b0));
                      }
                    }
                    plVar28 = plVar62 + 1;
                    do {
                      lVar55 = *plVar28;
                      cVar8 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                      if (bVar11) {
                        *plVar28 = lVar55 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar55 == 0) {
                      (**(code **)(*plVar62 + 0x10))(plVar62);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar62);
                      plVar19 = plVar62;
                    }
                  }
                }
              }
              plVar62 = plVar33 + 0xbc;
              while (plVar62 = (long *)*plVar62, plVar62 != (long *)0x0) {
                lVar55 = plVar62[3];
                *(undefined8 *)(lVar55 + 0x2d8) = *(undefined8 *)(lVar55 + 0x2d0);
                puVar22 = (undefined8 *)plVar33[0xd0];
                puVar23 = (undefined8 *)plVar33[0xcf];
                if ((undefined8 *)plVar33[0xcf] != puVar22) {
                  do {
                    lVar55 = plVar62[3];
                    puVar41 = puVar23 + 1;
                    *(undefined8 *)((long)plVar10 + -0x2d0) = *puVar23;
                    func_0x00010a8f2d1c(lVar55 + 0x2d0,(undefined1 *)((long)plVar10 + -0x2d0));
                    puVar23 = puVar41;
                  } while (puVar41 != puVar22);
                  lVar55 = plVar62[3];
                }
                lVar65 = plVar27[1];
                lVar24 = plVar27[4];
                lVar30 = plVar27[3];
                *(long *)(lVar55 + 0x278) = plVar27[2];
                *(long *)(lVar55 + 0x270) = lVar65;
                *(long *)(lVar55 + 0x288) = lVar24;
                *(long *)(lVar55 + 0x280) = lVar30;
                lVar30 = plVar27[6];
                lVar65 = plVar27[5];
                lVar35 = plVar27[8];
                lVar24 = plVar27[7];
                lVar72 = plVar27[10];
                lVar71 = plVar27[9];
                uVar31 = *(undefined8 *)((long)plVar27 + 0x54);
                *(undefined8 *)(lVar55 + 0x2c4) = *(undefined8 *)((long)plVar27 + 0x5c);
                *(undefined8 *)(lVar55 + 700) = uVar31;
                *(long *)(lVar55 + 0x2a8) = lVar35;
                *(long *)(lVar55 + 0x2a0) = lVar24;
                *(long *)(lVar55 + 0x2b8) = lVar72;
                *(long *)(lVar55 + 0x2b0) = lVar71;
                *(long *)(lVar55 + 0x298) = lVar30;
                *(long *)(lVar55 + 0x290) = lVar65;
                plVar19 = (long *)plVar62[3];
                FUN_10a8f47d8((float)*(double *)(*(long *)(plVar33[0x2e] + 0x850) + 0x10),plVar19);
              }
              plVar33[0xd0] = plVar33[0xcf];
LAB_10a5f7850:
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar10 + -0x168)) {
                return plVar19;
              }
LAB_10a5f78a4:
              ___stack_chk_fail();
LAB_10a5f78a8:
              FUN_10a3ee510(&UNK_10f66a567);
LAB_10a5f7a1c:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10a5f7a20);
              (*pcVar9)();
            }
            lVar55 = plVar19[5] - lVar55 >> 3;
            uVar29 = lVar55 * 0x5555555555555556;
            if (uVar29 < uVar51 || uVar29 - uVar51 == 0) {
              uVar29 = uVar51;
            }
            if (0x555555555555554 < (ulong)(lVar55 * -0x5555555555555555)) {
              uVar29 = 0xaaaaaaaaaaaaaaa;
            }
            plStack_c0 = plVar33;
            FUN_10a60f558();
            puVar54 = (undefined1 *)((long)plVar33 + (long)puVar54);
            lVar65 = (((long)plVar62 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
            _bzero(puVar54,lVar65);
            lVar55 = (long)puVar54 - (plVar19[4] - plVar19[3]);
            _memcpy(lVar55);
            pplStack_e0 = (long **)plVar19[3];
            plVar19[3] = lVar55;
            plVar19[4] = (long)(puVar54 + lVar65);
            lStack_c8 = plVar19[5];
            plVar19[5] = (long)(plVar33 + uVar29 * 3);
            pplStack_d8 = pplStack_e0;
            pplStack_d0 = pplStack_e0;
            func_0x00010a60f59c(&pplStack_e0);
          }
          else {
            uVar51 = ((long)plVar62 * 0x18 - 0x18U) / 0x18;
            _bzero(plVar28,uVar51 * 0x18 + 0x18);
            plVar19[4] = (long)(plVar28 + uVar51 * 3 + 3);
          }
          plVar19 = param_1[0xc1];
          if (plVar19 != (long *)0x0) {
            uVar51 = 0;
            uVar29 = (ulong)(uVar56 - 1);
            lStack_140 = CONCAT44(lStack_140._4_4_,uVar56 - 3);
            do {
              lVar55 = plVar19[3];
              if (plVar19[4] != lVar55) {
                uVar43 = 0;
                do {
                  plVar27 = pplStack_130[0xc4];
                  func_0x00010a61bfb0(plVar27,pplStack_130[0xc5],uVar57);
                  if (plVar27 == (long *)0x0) goto LAB_10a5f9128;
                  uVar52 = (plVar27[4] - plVar27[3] >> 3) * -0x5555555555555555;
                  if (uVar52 < uVar51 || uVar52 - uVar51 == 0) goto LAB_10a5f9174;
                  plVar62 = (long *)(lVar55 + uVar43 * 0x18);
                  plVar27 = (long *)(plVar27[3] + uVar51 * 0x18);
                  if ((plVar62[1] - *plVar62 >> 2) * -0x5555555555555555 - uVar57 == 0) {
                    FUN_10a60f628(plVar27,*plVar62,plVar62[1],uVar57);
                  }
                  else {
                    func_0x0001096b5198(plVar27,uVar57);
                    puVar23 = (undefined8 *)*plVar62;
                    if (((undefined8 *)plVar62[1] == puVar23) ||
                       (puVar22 = (undefined8 *)*plVar27, (undefined8 *)plVar27[1] == puVar22))
                    goto LAB_10a5f9174;
                    uVar31 = *puVar23;
                    *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar23 + 1);
                    *puVar22 = uVar31;
                    lVar55 = plVar62[1];
                    if ((lVar55 == *plVar62) ||
                       (uVar52 = (plVar27[1] - *plVar27 >> 2) * -0x5555555555555555,
                       uVar52 < uVar29 || uVar52 - uVar29 == 0)) goto LAB_10a5f9174;
                    puVar23 = (undefined8 *)(*plVar27 + uVar29 * 0xc);
                    uVar31 = *(undefined8 *)(lVar55 + -0xc);
                    *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(lVar55 + -4);
                    *puVar23 = uVar31;
                    uVar52 = (plVar62[1] - *plVar62 >> 2) * -0x5555555555555555;
                    if ((2 < uVar52) && ((uint)(float)lStack_140 < 0xfffffffe)) {
                      lVar55 = 0;
                      fVar79 = 0.0;
                      uVar42 = 1;
                      do {
                        fVar79 = (float)(uVar52 - 1) / (float)uVar56 + fVar79;
                        uVar39 = (uint)fVar79;
                        uVar49 = (ulong)(uVar39 + 1);
                        lVar65 = *plVar62;
                        uVar48 = (plVar62[1] - lVar65 >> 2) * -0x5555555555555555;
                        if (uVar48 < uVar49 || uVar48 - uVar49 == 0) {
                          if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
                            func_0x00010ae06f08(1,2,&UNK_10f66828f,&UNK_10f6683b5,0x2b7,
                                                &UNK_10f668491);
                          }
                          break;
                        }
                        if (uVar48 < uVar39 || uVar48 - uVar39 == 0) goto LAB_10a5f9174;
                        puVar23 = (undefined8 *)(lVar65 + uVar49 * 0xc);
                        uVar17 = 0;
                        if (uVar39 != 0) {
                          uVar17 = uVar39 - 1;
                        }
                        puVar22 = puVar23;
                        if (uVar49 < uVar48 - 1) {
                          uVar49 = (ulong)(uVar39 + 2);
                          if (uVar48 < uVar49 || uVar48 - uVar49 == 0) goto LAB_10a5f9174;
                          puVar22 = (undefined8 *)(lVar65 + uVar49 * 0xc);
                        }
                        uVar49 = (plVar27[1] - *plVar27 >> 2) * -0x5555555555555555;
                        if (uVar49 < uVar42 || uVar49 - uVar42 == 0) goto LAB_10a5f9174;
                        fVar68 = fVar79 - (float)(int)fVar79;
                        puVar41 = (undefined8 *)(lVar65 + (ulong)uVar39 * 0xc);
                        puVar46 = (undefined8 *)(lVar65 + (ulong)uVar17 * 0xc);
                        fVar69 = *(float *)(puVar46 + 1);
                        fVar70 = fVar68 * fVar68;
                        fVar74 = fVar68 * fVar70;
                        fVar77 = (fVar70 * 2.0 - fVar74) - fVar68;
                        fVar78 = fVar70 * -5.0 + fVar74 * 3.0 + 2.0;
                        fVar81 = *(float *)(puVar41 + 1);
                        fVar68 = fVar68 + fVar70 * 4.0 + fVar74 * -3.0;
                        fVar73 = *(float *)(puVar23 + 1);
                        fVar74 = fVar74 - fVar70;
                        fVar70 = *(float *)(puVar22 + 1);
                        lVar65 = *plVar27 + lVar55;
                        uVar31 = *puVar46;
                        uVar87 = *puVar41;
                        *(ulong *)(lVar65 + 0xc) =
                             CONCAT44(((float)((ulong)uVar31 >> 0x20) * fVar77 +
                                       (float)((ulong)uVar87 >> 0x20) * fVar78 +
                                       (float)((ulong)*puVar23 >> 0x20) * fVar68 +
                                      (float)((ulong)*puVar22 >> 0x20) * fVar74) * 0.5,
                                      ((float)uVar31 * fVar77 + (float)uVar87 * fVar78 +
                                       (float)*puVar23 * fVar68 + (float)*puVar22 * fVar74) * 0.5);
                        *(float *)(lVar65 + 0x14) =
                             (fVar77 * fVar69 + fVar78 * fVar81 + fVar68 * fVar73 + fVar74 * fVar70)
                             * 0.5;
                        uVar42 = uVar42 + 1;
                        lVar55 = lVar55 + 0xc;
                      } while (uVar29 != uVar42);
                    }
                  }
                  uVar51 = (ulong)((int)uVar51 + 1);
                  uVar43 = uVar43 + 1;
                  lVar55 = plVar19[3];
                } while (uVar43 < (ulong)((plVar19[4] - lVar55 >> 3) * -0x5555555555555555));
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        pplStack_d8 = (long **)0x0;
        pplStack_e0 = (long **)0x0;
        lStack_c8 = 0;
        pplStack_d0 = (long **)0x0;
        plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,0x3f800000);
        plVar19 = pplStack_130[0xc6];
        pplVar66 = pplStack_130;
        if (plVar19 != (long *)0x0) {
          ppplStack_150 = &pplStack_d0;
          fVar79 = 0.0;
          do {
            pplVar63 = pplStack_d8;
            uVar56 = *(uint *)(plVar19 + 2);
            pplVar58 = (long **)(ulong)uVar56;
            lStack_140 = plVar19[3];
            lVar55 = plVar19[4];
            pplStack_110 = (long **)CONCAT44(pplStack_110._4_4_,uVar56);
            lStack_100 = 0;
            uStack_f8 = 0;
            pplStack_108 = (long **)0x0;
            uStack_120 = 0;
            uStack_118 = 0;
            ppplStack_128 = (long ***)0x0;
            uStack_e4 = uVar56;
            if (pplStack_d8 != (long **)0x0) {
              uVar57 = (long)pplStack_d8 - 1;
              uVar39 = (uint)pplStack_d8;
              if (((ulong)pplStack_d8 & uVar57) == 0) {
                pplVar66 = (long **)(ulong)(uVar39 - 1 & uVar56);
              }
              else {
                pplVar66 = pplVar58;
                if (pplStack_d8 <= pplVar58) {
                  uVar17 = 0;
                  if (uVar39 != 0) {
                    uVar17 = uVar56 / uVar39;
                  }
                  pplVar66 = (long **)(ulong)(uVar56 - uVar17 * uVar39);
                }
              }
              plVar27 = pplStack_e0[(long)pplVar66];
              if (plVar27 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar27 = (long *)*plVar27;
                    if (plVar27 == (long *)0x0) goto LAB_10a5f8580;
                    pplVar34 = (long **)plVar27[1];
                    if (pplVar34 != pplVar58) break;
                    if (*(uint *)(plVar27 + 2) == uVar56) goto LAB_10a5f86ac;
                  }
                  if (((ulong)pplStack_d8 & uVar57) == 0) {
                    pplVar34 = (long **)((ulong)pplVar34 & uVar57);
                  }
                  else if (pplStack_d8 <= pplVar34) {
                    uVar51 = 0;
                    if (pplStack_d8 != (long **)0x0) {
                      uVar51 = (ulong)pplVar34 / (ulong)pplStack_d8;
                    }
                    pplVar34 = (long **)((long)pplVar34 - uVar51 * (long)pplStack_d8);
                  }
                } while (pplVar34 == pplVar66);
              }
            }
LAB_10a5f8580:
            pplVar34 = (long **)0x30;
            __Znwm();
            *pplVar34 = (long *)0x0;
            pplVar34[1] = (long *)pplVar58;
            *(uint *)(pplVar34 + 2) = uVar56;
            pplVar34[3] = (long *)0x0;
            pplVar34[4] = (long *)0x0;
            pplVar34[5] = (long *)0x0;
            lStack_100 = 0;
            uStack_f8 = 0;
            pplStack_108 = (long **)0x0;
            if ((pplVar63 == (long **)0x0) ||
               (plStack_c0._0_4_ * (float)pplVar63 < (float)(lStack_c8 + 1))) {
              uVar57 = 1;
              if ((long **)0x2 < pplVar63) {
                uVar57 = (ulong)(((ulong)pplVar63 & (long)pplVar63 - 1U) != 0);
              }
              uVar57 = uVar57 | (long)pplVar63 << 1;
              uVar51 = (ulong)((float)(lStack_c8 + 1) / plStack_c0._0_4_);
              if (uVar57 <= uVar51) {
                uVar57 = uVar51;
              }
              func_0x00010a61c4ec(&pplStack_e0,uVar57);
              pplVar63 = pplStack_d8;
              if (((ulong)pplStack_d8 & (long)pplStack_d8 - 1U) == 0) {
                pplVar66 = (long **)(ulong)((int)pplStack_d8 - 1U & uVar56);
              }
              else {
                pplVar66 = pplVar58;
                if (pplStack_d8 <= pplVar58) {
                  uVar57 = 0;
                  if (pplStack_d8 != (long **)0x0) {
                    uVar57 = (ulong)pplVar58 / (ulong)pplStack_d8;
                  }
                  pplVar66 = (long **)((long)pplVar58 - uVar57 * (long)pplStack_d8);
                }
              }
            }
            pplVar20 = (long **)pplStack_e0[(long)pplVar66];
            if (pplVar20 == (long **)0x0) {
              *pplVar34 = (long *)pplStack_d0;
              pplStack_e0[(long)pplVar66] = (long *)ppplStack_150;
              pplStack_d0 = pplVar34;
              if (*pplVar34 != (long *)0x0) {
                pplVar20 = (long **)(*pplVar34)[1];
                if (((ulong)pplVar63 & (long)pplVar63 - 1U) == 0) {
                  pplVar20 = (long **)((ulong)pplVar20 & (long)pplVar63 - 1U);
                }
                else if (pplVar63 <= pplVar20) {
                  uVar57 = 0;
                  if (pplVar63 != (long **)0x0) {
                    uVar57 = (ulong)pplVar20 / (ulong)pplVar63;
                  }
                  pplVar20 = (long **)((long)pplVar20 - uVar57 * (long)pplVar63);
                }
                pplVar20 = pplStack_e0 + (long)pplVar20;
                goto LAB_10a5f869c;
              }
            }
            else {
              *pplVar34 = *pplVar20;
LAB_10a5f869c:
              *pplVar20 = (long *)pplVar34;
            }
            lStack_c8 = lStack_c8 + 1;
LAB_10a5f86ac:
            apppplStack_b0[0] = (long ****)&pplStack_108;
            FUN_10a0ca968(apppplStack_b0);
            apppplStack_b0[0] = &ppplStack_128;
            FUN_10a0ca968(apppplStack_b0);
            ppplVar14 = &pplStack_e0;
            FUN_10a61c6fc(ppplVar14,pplVar58,&uStack_e4);
            lVar65 = lStack_140;
            uVar57 = (lVar55 - lStack_140 >> 3) * -0x5555555555555555;
            func_0x0001095201f0(ppplVar14 + 3,uVar57);
            pplVar66 = pplStack_130;
            if (lVar55 != lVar65) {
              uVar51 = 0;
              do {
                pplStack_110 = (long **)((ulong)pplStack_110 & 0xffffffff00000000);
                ppplVar14 = &pplStack_e0;
                FUN_10a61c6fc(ppplVar14,pplVar58,&uStack_e4);
                uVar29 = ((long)ppplVar14[4] - (long)ppplVar14[3] >> 3) * -0x5555555555555555;
                if (uVar29 < uVar51 || uVar29 - uVar51 == 0) goto LAB_10a5f9174;
                func_0x0001073b504c(ppplVar14[3] + uVar51 * 3,pplVar58);
                ppplVar14 = &pplStack_e0;
                FUN_10a61c6fc(ppplVar14,pplVar58,&uStack_e4);
                uVar29 = ((long)ppplVar14[4] - (long)ppplVar14[3] >> 3) * -0x5555555555555555;
                if (uVar29 < uVar51 || uVar29 - uVar51 == 0) goto LAB_10a5f9174;
                ppplStack_128 = (long ***)((ulong)ppplStack_128 & 0xffffffff00000000);
                FUN_10a001c34(ppplVar14[3] + uVar51 * 3,&ppplStack_128);
                if (1 < uVar56) {
                  lVar55 = 0;
                  pplVar63 = (long **)0x1;
                  do {
                    uVar29 = (plVar19[4] - plVar19[3] >> 3) * -0x5555555555555555;
                    if ((uVar29 < uVar51 || uVar29 - uVar51 == 0) ||
                       (plVar27 = (long *)(plVar19[3] + uVar51 * 0x18), lVar65 = *plVar27,
                       pplVar34 = (long **)((plVar27[1] - lVar65 >> 2) * -0x5555555555555555),
                       pplVar34 < pplVar63 || (long)pplVar34 - (long)pplVar63 == 0))
                    goto LAB_10a5f9174;
                    puVar23 = (undefined8 *)(lVar65 + lVar55);
                    fVar68 = *(float *)((long)puVar23 + 0x14) - *(float *)(puVar23 + 1);
                    fVar69 = (float)*(undefined8 *)((long)puVar23 + 0xc) - (float)*puVar23;
                    fVar70 = (float)((ulong)*(undefined8 *)((long)puVar23 + 0xc) >> 0x20) -
                             (float)((ulong)*puVar23 >> 0x20);
                    pplStack_110 = (long **)CONCAT44(pplStack_110._4_4_,
                                                     pplStack_110._0_4_ +
                                                     SQRT(fVar69 * fVar69 + fVar70 * fVar70 +
                                                          fVar68 * fVar68));
                    ppplVar14 = &pplStack_e0;
                    FUN_10a61c6fc(ppplVar14,pplVar58,&uStack_e4);
                    uVar29 = ((long)ppplVar14[4] - (long)ppplVar14[3] >> 3) * -0x5555555555555555;
                    if (uVar29 < uVar51 || uVar29 - uVar51 == 0) goto LAB_10a5f9174;
                    FUN_10a0ca014(ppplVar14[3] + uVar51 * 3,&pplStack_110);
                    pplVar63 = (long **)((long)pplVar63 + 1);
                    lVar55 = lVar55 + 0xc;
                  } while (pplVar58 != pplVar63);
                }
                fVar68 = pplStack_110._0_4_;
                if (pplStack_110._0_4_ <= fVar79) {
                  fVar68 = fVar79;
                }
                fVar79 = fVar68;
                uVar51 = uVar51 + 1;
              } while (uVar51 != uVar57);
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
          plVar19 = pplVar66[0xc6];
          if (plVar19 != (long *)0x0) {
            ppplStack_150 =
                 (long ***)CONCAT44(ppplStack_150._4_4_,fVar79 * *(float *)((long)pplVar66 + 0x544))
            ;
            do {
              iVar53 = (int)plVar19[2];
              pplStack_110 = (long **)CONCAT44(pplStack_110._4_4_,iVar53);
              if (plVar19[4] - plVar19[3] != 0) {
                uVar57 = 0;
                uStack_160 = (plVar19[4] - plVar19[3] >> 3) * -0x5555555555555555;
                uStack_158 = (ulong)(iVar53 - 1);
                lStack_168 = uStack_158 * 0xc + -0xc;
                lStack_170 = uStack_158 << 2;
                do {
                  uVar51 = uStack_158;
                  bVar6 = *(byte *)(pplVar66 + 0xa8);
                  pplVar63 = pplStack_e0;
                  FUN_10a61c908(pplStack_e0,pplStack_d8,iVar53);
                  if (pplVar63 == (long **)0x0) goto LAB_10a5f9168;
                  uVar29 = ((long)pplVar63[4] - (long)pplVar63[3] >> 3) * -0x5555555555555555;
                  if ((uVar29 < uVar57 || uVar29 - uVar57 == 0) ||
                     (plVar27 = pplVar63[3] + uVar57 * 3, lVar55 = *plVar27,
                     (ulong)(plVar27[1] - lVar55 >> 2) <= uVar51)) goto LAB_10a5f9174;
                  fVar79 = *(float *)(lVar55 + uVar51 * 4);
                  fVar68 = ppplStack_150._0_4_;
                  if ((bVar6 & 1) == 0) {
                    fVar68 = fVar79 * *(float *)((long)pplVar66 + 0x544);
                  }
                  bVar11 = fVar79 < ppplStack_150._0_4_;
                  if (bVar6 == 0) {
                    bVar11 = fVar68 == fVar79;
                  }
                  if ((int)uVar51 != 0) {
                    lStack_140 = CONCAT44(lStack_140._4_4_,fVar79);
                    lVar55 = lStack_170;
                    lVar65 = lStack_168;
                    uVar51 = uStack_158;
                    if (!bVar11) {
                      do {
                        pplVar66 = pplStack_e0;
                        FUN_10a61c908(pplStack_e0,pplStack_d8,iVar53);
                        if (pplVar66 == (long **)0x0) goto LAB_10a5f9134;
                        uVar29 = ((long)pplVar66[4] - (long)pplVar66[3] >> 3) * -0x5555555555555555;
                        if (uVar29 < uVar57 || uVar29 - uVar57 == 0) goto LAB_10a5f9174;
                        plVar27 = pplVar66[3] + uVar57 * 3;
                        lVar30 = *plVar27;
                        uVar29 = plVar27[1] - lVar30 >> 2;
                        if (uVar29 <= uVar51) goto LAB_10a5f9174;
                        uVar52 = uVar51 - 1;
                        fVar69 = fVar68 * (*(float *)(lVar30 + uVar51 * 4) / fVar79);
                        pfVar21 = (float *)(lVar30 + lVar55);
                        lVar30 = lVar65;
                        uVar43 = uVar51;
                        do {
                          if (uVar29 <= uVar52) goto LAB_10a5f9174;
                          uVar42 = uVar43 - 1;
                          fVar70 = pfVar21[-1];
                          if (fVar70 <= fVar69) {
                            uVar29 = (plVar19[4] - plVar19[3] >> 3) * -0x5555555555555555;
                            if (uVar29 < uVar57 || uVar29 - uVar57 == 0) goto LAB_10a5f9174;
                            plVar27 = (long *)(plVar19[3] + uVar57 * 0x18);
                            lVar24 = *plVar27;
                            uVar29 = (plVar27[1] - lVar24 >> 2) * -0x5555555555555555;
                            if ((uVar29 < uVar42 || uVar29 - uVar42 == 0) ||
                               (uVar29 < uVar43 || uVar29 - uVar43 == 0)) goto LAB_10a5f9174;
                            fVar79 = *pfVar21;
                            puVar23 = (undefined8 *)(lVar24 + lVar30);
                            fVar74 = *(float *)(puVar23 + 1);
                            uVar31 = *puVar23;
                            uVar87 = *(undefined8 *)((long)puVar23 + 0xc);
                            fVar77 = *(float *)((long)puVar23 + 0x14);
                            pplVar66 = pplStack_138;
                            FUN_10a61c9a4(pplStack_138,iVar53,&pplStack_110);
                            uVar29 = ((long)pplVar66[4] - (long)pplVar66[3] >> 3) *
                                     -0x5555555555555555;
                            if ((uVar29 < uVar57 || uVar29 - uVar57 == 0) ||
                               (plVar27 = pplVar66[3] + uVar57 * 3, lVar30 = *plVar27,
                               uVar29 = (plVar27[1] - lVar30 >> 2) * -0x5555555555555555,
                               uVar29 < uVar51 || uVar29 - uVar51 == 0)) goto LAB_10a5f9174;
                            fVar79 = (fVar69 - fVar70) / (fVar79 - fVar70);
                            fVar69 = 1.0 - fVar79;
                            puVar23 = (undefined8 *)(lVar30 + uVar51 * 0xc);
                            *puVar23 = CONCAT44((float)((ulong)uVar31 >> 0x20) * fVar69 +
                                                (float)((ulong)uVar87 >> 0x20) * fVar79,
                                                (float)uVar31 * fVar69 + (float)uVar87 * fVar79);
                            *(float *)(puVar23 + 1) = fVar69 * fVar74 + fVar79 * fVar77;
                            fVar79 = (float)lStack_140;
                            goto LAB_10a5f8b1c;
                          }
                          lVar30 = lVar30 + -0xc;
                          pfVar21 = pfVar21 + -1;
                          uVar43 = uVar42;
                        } while (uVar42 != 0);
                        uVar29 = (plVar19[4] - plVar19[3] >> 3) * -0x5555555555555555;
                        if ((uVar29 < uVar57 || uVar29 - uVar57 == 0) ||
                           (plVar27 = (long *)(plVar19[3] + uVar57 * 0x18),
                           puVar23 = (undefined8 *)*plVar27, (undefined8 *)plVar27[1] == puVar23))
                        goto LAB_10a5f9174;
                        pplVar66 = pplStack_138;
                        FUN_10a61c9a4(pplStack_138,iVar53,&pplStack_110);
                        uVar29 = ((long)pplVar66[4] - (long)pplVar66[3] >> 3) * -0x5555555555555555;
                        if ((uVar29 < uVar57 || uVar29 - uVar57 == 0) ||
                           (plVar27 = pplVar66[3] + uVar57 * 3, lVar30 = *plVar27,
                           uVar29 = (plVar27[1] - lVar30 >> 2) * -0x5555555555555555,
                           uVar29 < uVar51 || uVar29 - uVar51 == 0)) goto LAB_10a5f9174;
                        uVar31 = *puVar23;
                        puVar22 = (undefined8 *)(lVar30 + uVar51 * 0xc);
                        *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar23 + 1);
                        *puVar22 = uVar31;
LAB_10a5f8b1c:
                        lVar65 = lVar65 + -0xc;
                        lVar55 = lVar55 + -4;
                        uVar51 = uVar52;
                      } while (uVar52 != 0);
                    }
                  }
                  uVar57 = uVar57 + 1;
                  pplVar66 = pplStack_130;
                } while (uVar57 != uStack_160);
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        FUN_10a61c480(&pplStack_e0);
        iVar53 = *(int *)(pplVar66 + 0xb3);
        fVar79 = *(float *)(pplVar66 + 0xa6);
        if (iVar53 == 2) {
          fVar68 = *(float *)(pplVar66 + 0xa7);
          fVar69 = *(float *)((long)pplVar66 + 0x534);
          FUN_10a61cbc8(pplStack_148);
          plVar19 = pplVar66[0xc6];
          if (plVar19 != (long *)0x0) {
            plVar27 = pplVar66[0xca];
            do {
              lVar55 = plVar19[3];
              lVar65 = plVar19[4];
              uVar51 = (lVar65 - lVar55 >> 3) * -0x5555555555555555;
              uVar29 = (ulong)*(uint *)(plVar19 + 2);
              plVar28 = *pplStack_148;
              plVar62 = plVar28;
              FUN_10a61cc1c(plVar28,plVar27,uVar29);
              uVar57 = uVar29;
              if (plVar62 == (long *)0x0) {
                FUN_10a60f7a8(&pplStack_110,uVar51,0xffffffffffffffff);
                pplStack_e0 = (long **)CONCAT44(pplStack_e0._4_4_,(int)plVar19[2]);
                pplStack_d0 = pplStack_108;
                pplStack_d8 = pplStack_110;
                lStack_c8 = lStack_100;
                pplStack_110 = (long **)0x0;
                pplStack_108 = (long **)0x0;
                lStack_100 = 0;
                FUN_10a61ccb8(pplStack_148,(int)plVar19[2],&pplStack_e0);
                if (pplStack_d8 != (long **)0x0) {
                  __ZdlPv();
                }
                if (pplStack_110 != (long **)0x0) {
                  pplStack_108 = pplStack_110;
                  __ZdlPv();
                }
                plVar28 = pplVar66[0xc9];
                plVar27 = pplVar66[0xca];
                uVar57 = (ulong)*(uint *)(plVar19 + 2);
              }
              FUN_10a61cc1c(plVar28,plVar27,uVar57);
              if (plVar28 == (long *)0x0) goto LAB_10a5f9128;
              if (lVar65 != lVar55) {
                uVar57 = 0;
                lVar55 = plVar19[3];
                lVar65 = uVar29 - 1;
                uVar43 = (plVar19[4] - lVar55 >> 3) * -0x5555555555555555;
                do {
                  if (uVar57 == uVar43) goto LAB_10a5f9174;
                  plVar62 = (long *)(lVar55 + uVar57 * 0x18);
                  pfVar21 = (float *)*plVar62;
                  uVar52 = (plVar62[1] - (long)pfVar21 >> 2) * -0x5555555555555555;
                  if (uVar52 < 2) goto LAB_10a5f9174;
                  uVar31 = *(undefined8 *)pfVar21;
                  fVar70 = 0.0;
                  if (0.0 < fVar68 && lVar65 != 0) {
                    if (uVar52 - 1 <= uVar29 - 2) goto LAB_10a5f9174;
                    pfVar16 = pfVar21 + 5;
                    lVar30 = lVar65;
                    uVar87 = uVar31;
                    fVar74 = pfVar21[2];
                    do {
                      fVar81 = *pfVar16;
                      fVar74 = fVar81 - fVar74;
                      uVar84 = *(undefined8 *)(pfVar16 + -2);
                      fVar77 = (float)uVar84 - (float)uVar87;
                      fVar78 = (float)((ulong)uVar84 >> 0x20) - (float)((ulong)uVar87 >> 0x20);
                      fVar70 = fVar70 + fVar77 * fVar77 + fVar78 * fVar78 + fVar74 * fVar74;
                      pfVar16 = pfVar16 + 3;
                      lVar30 = lVar30 + -1;
                      uVar87 = uVar84;
                      fVar74 = fVar81;
                    } while (lVar30 != 0);
                  }
                  uVar52 = 0;
                  fVar74 = 3.4028235e+38;
                  fVar75 = pfVar21[3] - (float)uVar31;
                  fVar78 = pfVar21[4] - (float)((ulong)uVar31 >> 0x20);
                  fVar81 = pfVar21[5] - pfVar21[2];
                  fVar73 = 1.0 / SQRT(fVar75 * fVar75 + fVar78 * fVar78 + fVar81 * fVar81);
                  fVar77 = fVar74;
                  do {
                    if (uVar57 != uVar52) {
                      if (uVar43 < uVar52 || uVar43 - uVar52 == 0) goto LAB_10a5f9174;
                      plVar62 = (long *)(lVar55 + uVar52 * 0x18);
                      puVar23 = (undefined8 *)*plVar62;
                      uVar42 = (plVar62[1] - (long)puVar23 >> 2) * -0x5555555555555555;
                      if (uVar42 < 2) goto LAB_10a5f9174;
                      lVar30 = plVar28[3];
                      uVar49 = plVar28[4] - lVar30 >> 3;
                      if (uVar49 <= uVar52) goto LAB_10a5f9174;
                      piVar1 = (int *)(lVar30 + uVar52 * 8);
                      if ((uVar57 != (long)*piVar1) && (uVar57 != (long)piVar1[1])) {
                        uVar31 = *puVar23;
                        fVar83 = (float)((ulong)uVar31 >> 0x20);
                        fVar82 = *(float *)(puVar23 + 1);
                        fVar76 = (float)uVar31 - *pfVar21;
                        fVar85 = fVar83 - pfVar21[1];
                        fVar76 = fVar76 * fVar76 + fVar85 * fVar85 +
                                 (fVar82 - pfVar21[2]) * (fVar82 - pfVar21[2]);
                        if (fVar79 * fVar79 <= fVar76) {
                          fVar85 = *(float *)((long)puVar23 + 0xc) - (float)uVar31;
                          fVar83 = *(float *)(puVar23 + 2) - fVar83;
                          pfVar16 = (float *)((long)puVar23 + 0x14);
                          fVar86 = *pfVar16 - fVar82;
                          fVar88 = 1.0 / SQRT(fVar85 * fVar85 + fVar83 * fVar83 + fVar86 * fVar86);
                          if (fVar69 < fVar81 * fVar73 * fVar86 * fVar88 +
                                       fVar75 * fVar73 * fVar85 * fVar88 +
                                       fVar78 * fVar73 * fVar83 * fVar88) {
                            if (0.0 < fVar68) {
                              if (lVar65 == 0) {
                                fVar83 = 0.0;
                              }
                              else {
                                if (uVar42 - 1 <= uVar29 - 2) goto LAB_10a5f9174;
                                fVar83 = 0.0;
                                lVar24 = lVar65;
                                do {
                                  fVar88 = *pfVar16;
                                  fVar82 = fVar88 - fVar82;
                                  uVar87 = *(undefined8 *)(pfVar16 + -2);
                                  fVar85 = (float)uVar87 - (float)uVar31;
                                  fVar86 = (float)((ulong)uVar87 >> 0x20) -
                                           (float)((ulong)uVar31 >> 0x20);
                                  fVar83 = fVar83 + fVar85 * fVar85 + fVar86 * fVar86 +
                                                    fVar82 * fVar82;
                                  pfVar16 = pfVar16 + 3;
                                  lVar24 = lVar24 + -1;
                                  uVar31 = uVar87;
                                  fVar82 = fVar88;
                                } while (lVar24 != 0);
                              }
                              if (fVar68 * fVar68 < ABS(fVar70 - fVar83)) goto LAB_10a5f8d90;
                            }
                            if (fVar76 < fVar74) {
                              if (fVar74 < fVar77) {
                                if (uVar49 <= uVar57) goto LAB_10a5f9174;
                                puVar36 = (undefined4 *)(lVar30 + uVar57 * 8);
                                puVar36[1] = *puVar36;
                                fVar77 = fVar74;
                              }
                              if (uVar49 <= uVar57) goto LAB_10a5f9174;
                              *(int *)(lVar30 + uVar57 * 8) = (int)uVar52;
                              fVar74 = fVar76;
                            }
                            else if (fVar76 < fVar77) {
                              if (uVar49 <= uVar57) goto LAB_10a5f9174;
                              *(int *)(lVar30 + uVar57 * 8 + 4) = (int)uVar52;
                              fVar77 = fVar76;
                            }
                          }
                        }
                      }
                    }
LAB_10a5f8d90:
                    uVar52 = uVar52 + 1;
                  } while (uVar52 != uVar51);
                  uVar57 = uVar57 + 1;
                } while (uVar57 != uVar51);
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else {
          uVar80 = *(undefined4 *)((long)pplVar66 + 0x534);
          FUN_10a61cbc8(pplStack_148);
          for (plVar19 = pplVar66[0xc6]; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            plVar28 = plVar19 + 3;
            lVar55 = *plVar28;
            lVar65 = plVar19[4];
            lVar30 = (lVar65 - lVar55 >> 3) * -0x5555555555555555;
            plVar62 = pplStack_130[0xc9];
            plVar33 = pplStack_130[0xca];
            uVar60 = *(undefined4 *)(plVar19 + 2);
            plVar27 = plVar62;
            FUN_10a61cc1c(plVar62,plVar33,uVar60);
            if (plVar27 == (long *)0x0) {
              FUN_10a60f7a8(&pplStack_110,lVar30,0xffffffffffffffff);
              pplStack_e0 = (long **)CONCAT44(pplStack_e0._4_4_,*(undefined4 *)(plVar19 + 2));
              pplStack_d0 = pplStack_108;
              pplStack_d8 = pplStack_110;
              lStack_c8 = lStack_100;
              pplStack_110 = (long **)0x0;
              pplStack_108 = (long **)0x0;
              lStack_100 = 0;
              FUN_10a61ccb8(pplStack_148,*(undefined4 *)(plVar19 + 2),&pplStack_e0);
              if (pplStack_d8 != (long **)0x0) {
                __ZdlPv();
              }
              if (pplStack_110 != (long **)0x0) {
                pplStack_108 = pplStack_110;
                __ZdlPv();
              }
              plVar62 = pplStack_130[0xc9];
              plVar33 = pplStack_130[0xca];
              uVar60 = *(undefined4 *)(plVar19 + 2);
            }
            FUN_10a61cc1c(plVar62,plVar33,uVar60);
            if (plVar62 == (long *)0x0) goto LAB_10a5f9128;
            if (lVar65 != lVar55) {
              lVar55 = 0;
              uVar57 = 0;
              do {
                lVar65 = plVar62[3];
                if ((ulong)(plVar62[4] - lVar65 >> 3) <= uVar57) goto LAB_10a5f9174;
                iVar64 = *(int *)(lVar65 + lVar55);
                if (iVar64 == -1) {
                  pplStack_e0 = (long **)0x0;
                  pplStack_d8 = (long **)0x0;
                  pplStack_d0 = (long **)0x0;
                  uVar31 = plVar19[3];
                  func_0x00010a5fa0d0(fVar79,uVar80,uVar31,plVar19[4],lVar65,plVar62[4],0,0,uVar57);
                  if (-1 < (int)uVar31) {
                    func_0x000107c27e9c(&pplStack_e0,lVar30);
                    FUN_10a5fa2b4(fVar79,uVar80,iVar53,plVar28,uVar57,uVar31,&pplStack_e0,
                                  plVar62 + 3);
                    goto LAB_10a5f90cc;
                  }
                }
                else if (*(int *)(lVar65 + lVar55 + 4) == -1) {
                  pplStack_e0 = (long **)0x0;
                  pplStack_d8 = (long **)0x0;
                  pplStack_d0 = (long **)0x0;
                  func_0x000107c27e9c(&pplStack_e0,lVar30);
                  FUN_10a5fa2b4(fVar79,uVar80,iVar53,plVar28,uVar57,iVar64,&pplStack_e0,plVar62 + 3)
                  ;
LAB_10a5f90cc:
                  if (pplStack_e0 != (long **)0x0) {
                    pplStack_d8 = pplStack_e0;
                    __ZdlPv();
                  }
                }
                uVar57 = uVar57 + 1;
                lVar55 = lVar55 + 8;
              } while (lVar30 - uVar57 != 0);
            }
          }
        }
        return (long *)0x1;
      }
    }
    pplStack_d8 = (long **)0x31;
    pplStack_e0 = (long **)&UNK_10f6684f2;
    FUN_10a0edfc4(&pplStack_e0);
  }
  else {
    plVar19 = param_1[0xa4];
    if (plVar19 != (long *)0x0) {
      FUN_10ab3b8d0();
      pplStack_e0 = (long **)&UNK_10f6684d1;
      pplStack_d8 = (long **)0x20;
      if ((int)plVar19 == 2) {
        FUN_10ab3b8d0(param_1[0xa4]);
        if (pplVar66 != (long **)(param_2 + 0x18)) {
          *(undefined4 *)(param_1 + 0xc3) = *(undefined4 *)(param_2 + 0x38);
          FUN_10a6147f8(pplVar66,*(undefined8 *)(param_2 + 0x28),0);
        }
        goto LAB_10a5f7d6c;
      }
    }
    pplStack_d8 = (long **)0x20;
    pplStack_e0 = (long **)&UNK_10f6684d1;
    FUN_10a0edfc4(&pplStack_e0);
LAB_10a5f9168:
    FUN_109ffdddc(&UNK_10f66a46f);
  }
LAB_10a5f9174:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a5f9178);
  (*pcVar9)();
}


