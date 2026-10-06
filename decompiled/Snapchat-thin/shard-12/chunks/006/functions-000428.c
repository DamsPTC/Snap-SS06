/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10940bc88; end: 10940bce3;  */

undefined8 * FUN_10940bc88(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined1 **ppuVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 extraout_x8_00;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 *apuStack_140 [3];
  undefined1 auStack_128 [24];
  long lStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  cVar3 = *(char *)((long)puVar6 + 0x17);
  if (cVar3 < '\0') goto LAB_10940bcbc;
  if (cVar3 == ' ') {
    return puVar6;
  }
  if (cVar3 == '\0') {
    do {
      puVar6 = (undefined8 *)&UNK_10f56cc4b;
      FUN_10940ce60();
LAB_10940bcbc:
      if (puVar6[1] == 0x20) {
        return (undefined8 *)*puVar6;
      }
    } while (puVar6[1] == 0);
  }
  FUN_10940ce60(&UNK_10f56ccb2);
  pcStack_18 = FUN_10940bce4;
  ppuStack_100 = &puStack_20;
  if ((*(int *)(param_2 + 0x18) < 0) && (*(int *)(param_2 + 0x18) != -2)) {
    puVar7 = &UNK_10f56cc1d;
    lVar9 = param_2;
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x000105688514();
    func_0x000104bd46a0();
    FUN_10940b66c(&puStack_d8);
    __Unwind_Resume(puVar7);
    ppuVar8 = apuStack_140;
    pcStack_f8 = FUN_10940be70;
    lStack_110 = param_2;
    puStack_108 = puVar7;
    FUN_109408768(auStack_128);
    FUN_10940b0d4(apuStack_140,auStack_128,lVar9 + 0x18);
    FUN_10940a758(extraout_x8_00,*(undefined4 *)(lVar9 + 0x2c),auStack_128,apuStack_140,
                  *(undefined4 *)(lVar9 + 0x28),*(undefined4 *)(lVar9 + 0x18),lVar9 + 0x80);
    if (apuStack_140[0] != (undefined1 *)0x0) {
      __ZdlPv();
    }
    apuStack_140[0] = auStack_128;
    FUN_10939d590(apuStack_140);
    return ppuVar8;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10940be70(&puStack_d8);
  uStack_e8 = uStack_c8;
  puVar5 = puStack_d0;
  puVar6 = puStack_d8;
  puStack_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  puStack_d8 = (undefined8 *)0x0;
  puStack_f0 = puVar5;
  if (puVar6 != puVar5) {
    fVar12 = *(float *)(param_2 + 0x24);
    puVar10 = puVar6;
    do {
      fVar11 = fVar12;
      _powf(fVar12,(float)*(int *)((long)puVar10 + 0x14));
      *puVar10 = CONCAT44(((float)((ulong)*puVar10 >> 0x20) + 0.5) * fVar11 + -0.5,
                          ((float)*puVar10 + 0.5) * fVar11 + -0.5);
      *(float *)(puVar10 + 1) = fVar11;
      puVar10 = (undefined8 *)((long)puVar10 + 0x1c);
    } while (puVar10 != puVar5);
  }
  uStack_c8 = uStack_e8;
  puStack_d0 = puStack_f0;
  puStack_d8 = puVar6;
  FUN_10940cb78(extraout_x8,&puStack_d8,auStack_c0);
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0 < iStack_bc) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_80 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_bc);
  }
  if (puStack_78 != auStack_70 && puStack_78 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_78 + -8));
  }
  if (puStack_d8 != (undefined8 *)0x0) {
    puStack_d0 = puStack_d8;
    __ZdlPv();
  }
  return puStack_d8;
}



/* Entry: 10940bce4; end: 10940be6f;  */

void FUN_10940bce4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 *apuStack_130 [3];
  undefined1 auStack_118 [24];
  long lStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  
  if ((*(int *)(param_3 + 0x18) < 0) && (*(int *)(param_3 + 0x18) != -2)) {
    puVar7 = &UNK_10f56cc1d;
    lVar8 = param_3;
    func_0x000105688514();
    func_0x000104bd46a0();
    FUN_10940b66c(&puStack_c8);
    __Unwind_Resume(puVar7);
    pcStack_e8 = FUN_10940be70;
    lStack_100 = param_3;
    puStack_f8 = puVar7;
    puStack_f0 = &stack0xfffffffffffffff0;
    FUN_109408768(auStack_118);
    FUN_10940b0d4(apuStack_130,auStack_118,lVar8 + 0x18);
    FUN_10940a758(extraout_x8,*(undefined4 *)(lVar8 + 0x2c),auStack_118,apuStack_130,
                  *(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x18),lVar8 + 0x80);
    if (apuStack_130[0] != (undefined1 *)0x0) {
      __ZdlPv();
    }
    apuStack_130[0] = auStack_118;
    FUN_10939d590(apuStack_130);
    return;
  }
  FUN_10940be70(&puStack_c8,param_2,param_3);
  uStack_d8 = uStack_b8;
  puVar6 = puStack_c0;
  puVar5 = puStack_c8;
  puStack_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  puStack_c8 = (undefined8 *)0x0;
  puStack_e0 = puVar6;
  if (puVar5 != puVar6) {
    fVar11 = *(float *)(param_3 + 0x24);
    puVar9 = puVar5;
    do {
      fVar10 = fVar11;
      _powf(fVar11,(float)*(int *)((long)puVar9 + 0x14));
      *puVar9 = CONCAT44(((float)((ulong)*puVar9 >> 0x20) + 0.5) * fVar10 + -0.5,
                         ((float)*puVar9 + 0.5) * fVar10 + -0.5);
      *(float *)(puVar9 + 1) = fVar10;
      puVar9 = (undefined8 *)((long)puVar9 + 0x1c);
    } while (puVar9 != puVar6);
  }
  uStack_b8 = uStack_d8;
  puStack_c0 = puStack_e0;
  puStack_c8 = puVar5;
  FUN_10940cb78(param_1,&puStack_c8,auStack_b0);
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < iStack_ac) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_ac);
  }
  if (puStack_68 != auStack_60 && puStack_68 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_68 + -8));
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    puStack_c0 = puStack_c8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10940be70; end: 10940bf1f;  */

void FUN_10940be70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *apuStack_50 [3];
  undefined1 auStack_38 [24];
  
  FUN_109408768(auStack_38,param_2,param_3 + 0x18);
  FUN_10940b0d4(apuStack_50,auStack_38,param_3 + 0x18);
  FUN_10940a758(param_1,*(undefined4 *)(param_3 + 0x2c),auStack_38,apuStack_50,
                *(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x18),param_3 + 0x80);
  if (apuStack_50[0] != (undefined1 *)0x0) {
    __ZdlPv();
  }
  apuStack_50[0] = auStack_38;
  FUN_10939d590(apuStack_50);
  return;
}



/* Entry: 10940bf20; end: 10940bf73;  */

void FUN_10940bf20(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    uVar4 = param_2[2];
    uVar3 = param_2[1];
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 3);
    puVar1[2] = uVar4;
    puVar1[1] = uVar3;
    lVar2 = (long)puVar1 + 0x1c;
  }
  else {
    lVar2 = param_1;
    FUN_10940ced4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10940bf74; end: 10940c0af;  */

void FUN_10940bf74(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = (long)*(char *)((long)param_1 + 0x17);
  puVar4 = param_1;
  if (lVar3 < 0) {
    uVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar2 < param_4) {
      lVar3 = param_1[1];
      goto LAB_10940bfc8;
    }
    cVar1 = (char)((ulong)param_1[2] >> 0x38);
  }
  else {
    if (param_4 < 0x17) goto LAB_10940c008;
    uVar2 = 0x16;
LAB_10940bfc8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (param_1,uVar2,param_4 - uVar2,lVar3,0,lVar3,0);
    param_1[1] = 0;
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar1 < '\0') {
    puVar4 = (undefined8 *)*param_1;
  }
LAB_10940c008:
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *(undefined1 *)puVar4 = *param_2;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  }
  *(undefined1 *)puVar4 = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = param_4;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)param_4 & 0x7f;
  }
  return;
}



/* Entry: 10940c0b0; end: 10940c0c3;  */

undefined1  [16] FUN_10940c0b0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  func_0x00010940c13c();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10940c0c4; end: 10940c193;  */

undefined1  [16] FUN_10940c0c4(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  func_0x00010940c13c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10940c194; end: 10940c2db;  */

void FUN_10940c194(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar4 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar4 >> 2) * 0x6db6db6db6db6db7) < param_2) {
    if ((undefined8 *)0x924924924924924 < param_2) {
      FUN_10939cbe4();
      if (lStack_38 - lStack_40 != 0) {
        lStack_38 = lStack_38 + (((lStack_38 - lStack_40) - 0x1cU) / 0x1c) * -0x1c + -0x1c;
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar5 = (undefined8 *)*param_1;
      puVar2 = (undefined8 *)param_1[1];
      puVar1 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
      puVar7 = puVar1;
      if (puVar2 != puVar5) {
        do {
          *puVar7 = *puVar5;
          uVar9 = puVar5[2];
          uVar8 = puVar5[1];
          *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar5 + 3);
          puVar7[2] = uVar9;
          puVar7[1] = uVar8;
          puVar5 = (undefined8 *)((long)puVar5 + 0x1c);
          puVar7 = (undefined8 *)((long)puVar7 + 0x1c);
        } while (puVar5 != puVar2);
        puVar5 = (undefined8 *)*param_1;
      }
      param_2[1] = puVar1;
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar5;
      param_2[1] = puVar5;
      lVar4 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar4;
      lVar4 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar4;
      *param_2 = param_2[1];
      return;
    }
    lVar6 = param_1[1];
    plVar3 = param_1;
    plStack_28 = param_1;
    FUN_10939cbf8();
    lStack_40 = (long)plVar3 + (lVar6 - lVar4);
    lStack_30 = (long)plVar3 + (long)param_2 * 0x1c;
    plStack_48 = plVar3;
    lStack_38 = lStack_40;
    FUN_10940c2dc(param_1,&plStack_48);
    if (lStack_38 - lStack_40 != 0) {
      lStack_38 = lStack_38 + (((lStack_38 - lStack_40) - 0x1cU) / 0x1c) * -0x1c + -0x1c;
    }
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10940c2dc; end: 10940c35b;  */

void FUN_10940c2dc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar2));
  puVar5 = puVar1;
  if (puVar2 != puVar3) {
    do {
      *puVar5 = *puVar3;
      uVar7 = puVar3[2];
      uVar6 = puVar3[1];
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar3 + 3);
      puVar5[2] = uVar7;
      puVar5[1] = uVar6;
      puVar3 = (undefined8 *)((long)puVar3 + 0x1c);
      puVar5 = (undefined8 *)((long)puVar5 + 0x1c);
    } while (puVar3 != puVar2);
    puVar3 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar3;
  param_2[1] = puVar3;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10940c35c; end: 10940c3cf;  */

undefined8 * FUN_10940c35c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10940097c(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10940c3d0; end: 10940c3e3;  */

void FUN_10940c3d0(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*plVar1 != 0) {
    FUN_10940c414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*plVar1);
    return;
  }
  return;
}



/* Entry: 10940c3e4; end: 10940c413;  */

void FUN_10940c3e4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10940c414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10940c414; end: 10940c467;  */

void FUN_10940c414(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10940c468; end: 10940c47b;  */

long FUN_10940c468(undefined8 param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = (float *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    return lVar2;
  }
  func_0x000104c4f740();
  fVar6 = *param_2;
  fVar5 = *pfVar1;
  uVar3 = 0;
  if (fVar6 != fVar5) {
    uVar3 = 0xffffff81;
  }
  if (fVar5 < fVar6) {
    uVar3 = 1;
  }
  if (fVar6 < fVar5) {
    uVar3 = 0xffffffff;
  }
  if (uVar3 == 0) {
    uVar3 = 1;
    if ((int)param_2[1] < (int)pfVar1[1]) {
      uVar3 = 0xffffffff;
    }
    if (param_2[1] == pfVar1[1]) goto LAB_10940c54c;
  }
  if ((uVar3 & 0xff) != 1) {
LAB_10940c54c:
    fVar5 = *param_3;
    uVar3 = 0;
    if (fVar5 != fVar6) {
      uVar3 = 0xffffff81;
    }
    if (fVar6 < fVar5) {
      uVar3 = 1;
    }
    if (fVar5 < fVar6) {
      uVar3 = 0xffffffff;
    }
    if (uVar3 == 0) {
      uVar3 = 1;
      if ((int)param_3[1] < (int)param_2[1]) {
        uVar3 = 0xffffffff;
      }
      if (param_3[1] == param_2[1]) {
        return 0;
      }
    }
    if ((uVar3 & 0xff) != 1) {
      return 0;
    }
    *param_2 = fVar5;
    *param_3 = fVar6;
    fVar5 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = fVar5;
    fVar5 = *param_2;
    fVar6 = *pfVar1;
    uVar3 = 0;
    if (fVar5 != fVar6) {
      uVar3 = 0xffffff81;
    }
    if (fVar6 < fVar5) {
      uVar3 = 1;
    }
    if (fVar5 < fVar6) {
      uVar3 = 0xffffffff;
    }
    if (uVar3 == 0) {
      uVar3 = 1;
      if ((int)param_2[1] < (int)pfVar1[1]) {
        uVar3 = 0xffffffff;
      }
      if (param_2[1] == pfVar1[1]) {
        return 1;
      }
    }
    if ((uVar3 & 0xff) == 1) {
      *pfVar1 = fVar5;
      *param_2 = fVar6;
      fVar5 = pfVar1[1];
      pfVar1[1] = param_2[1];
      param_2[1] = fVar5;
    }
    return 1;
  }
  fVar7 = *param_3;
  uVar3 = 0;
  if (fVar7 != fVar6) {
    uVar3 = 0xffffff81;
  }
  if (fVar6 < fVar7) {
    uVar3 = 1;
  }
  if (fVar7 < fVar6) {
    uVar3 = 0xffffffff;
  }
  if (uVar3 == 0) {
    fVar4 = param_3[1];
    uVar3 = 1;
    if ((int)fVar4 < (int)param_2[1]) {
      uVar3 = 0xffffffff;
    }
    if (fVar4 != param_2[1]) goto LAB_10940c528;
  }
  else {
LAB_10940c528:
    if ((uVar3 & 0xff) == 1) {
      *pfVar1 = fVar7;
      *param_3 = fVar5;
      fVar6 = pfVar1[1];
      pfVar1[1] = param_3[1];
      goto LAB_10940c670;
    }
    fVar4 = param_2[1];
  }
  *pfVar1 = fVar6;
  *param_2 = fVar5;
  fVar6 = pfVar1[1];
  pfVar1[1] = fVar4;
  param_2[1] = fVar6;
  fVar7 = *param_3;
  uVar3 = 0;
  if (fVar7 != fVar5) {
    uVar3 = 0xffffff81;
  }
  if (fVar5 < fVar7) {
    uVar3 = 1;
  }
  if (fVar7 < fVar5) {
    uVar3 = 0xffffffff;
  }
  if (uVar3 == 0) {
    uVar3 = 1;
    if ((int)param_3[1] < (int)fVar6) {
      uVar3 = 0xffffffff;
    }
    if (param_3[1] == fVar6) {
      return 1;
    }
  }
  if ((uVar3 & 0xff) != 1) {
    return 1;
  }
  *param_2 = fVar7;
  *param_3 = fVar5;
  param_2[1] = param_3[1];
LAB_10940c670:
  param_3[1] = fVar6;
  return 1;
}



/* Entry: 10940c47c; end: 10940c4af;  */

long FUN_10940c47c(float *param_1,float *param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm(lVar1);
    return lVar1;
  }
  func_0x000104c4f740();
  fVar5 = *param_2;
  fVar4 = *param_1;
  uVar2 = 0;
  if (fVar5 != fVar4) {
    uVar2 = 0xffffff81;
  }
  if (fVar4 < fVar5) {
    uVar2 = 1;
  }
  if (fVar5 < fVar4) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 == 0) {
    uVar2 = 1;
    if ((int)param_2[1] < (int)param_1[1]) {
      uVar2 = 0xffffffff;
    }
    if (param_2[1] == param_1[1]) goto LAB_10940c54c;
  }
  if ((uVar2 & 0xff) != 1) {
LAB_10940c54c:
    fVar4 = *param_3;
    uVar2 = 0;
    if (fVar4 != fVar5) {
      uVar2 = 0xffffff81;
    }
    if (fVar5 < fVar4) {
      uVar2 = 1;
    }
    if (fVar4 < fVar5) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 == 0) {
      uVar2 = 1;
      if ((int)param_3[1] < (int)param_2[1]) {
        uVar2 = 0xffffffff;
      }
      if (param_3[1] == param_2[1]) {
        return 0;
      }
    }
    if ((uVar2 & 0xff) != 1) {
      return 0;
    }
    *param_2 = fVar4;
    *param_3 = fVar5;
    fVar4 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = fVar4;
    fVar4 = *param_2;
    fVar5 = *param_1;
    uVar2 = 0;
    if (fVar4 != fVar5) {
      uVar2 = 0xffffff81;
    }
    if (fVar5 < fVar4) {
      uVar2 = 1;
    }
    if (fVar4 < fVar5) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 == 0) {
      uVar2 = 1;
      if ((int)param_2[1] < (int)param_1[1]) {
        uVar2 = 0xffffffff;
      }
      if (param_2[1] == param_1[1]) {
        return 1;
      }
    }
    if ((uVar2 & 0xff) == 1) {
      *param_1 = fVar4;
      *param_2 = fVar5;
      fVar4 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = fVar4;
    }
    return 1;
  }
  fVar6 = *param_3;
  uVar2 = 0;
  if (fVar6 != fVar5) {
    uVar2 = 0xffffff81;
  }
  if (fVar5 < fVar6) {
    uVar2 = 1;
  }
  if (fVar6 < fVar5) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 == 0) {
    fVar3 = param_3[1];
    uVar2 = 1;
    if ((int)fVar3 < (int)param_2[1]) {
      uVar2 = 0xffffffff;
    }
    if (fVar3 != param_2[1]) goto LAB_10940c528;
  }
  else {
LAB_10940c528:
    if ((uVar2 & 0xff) == 1) {
      *param_1 = fVar6;
      *param_3 = fVar4;
      fVar5 = param_1[1];
      param_1[1] = param_3[1];
      goto LAB_10940c670;
    }
    fVar3 = param_2[1];
  }
  *param_1 = fVar5;
  *param_2 = fVar4;
  fVar5 = param_1[1];
  param_1[1] = fVar3;
  param_2[1] = fVar5;
  fVar6 = *param_3;
  uVar2 = 0;
  if (fVar6 != fVar4) {
    uVar2 = 0xffffff81;
  }
  if (fVar4 < fVar6) {
    uVar2 = 1;
  }
  if (fVar6 < fVar4) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 == 0) {
    uVar2 = 1;
    if ((int)param_3[1] < (int)fVar5) {
      uVar2 = 0xffffffff;
    }
    if (param_3[1] == fVar5) {
      return 1;
    }
  }
  if ((uVar2 & 0xff) != 1) {
    return 1;
  }
  *param_2 = fVar6;
  *param_3 = fVar4;
  param_2[1] = param_3[1];
LAB_10940c670:
  param_3[1] = fVar5;
  return 1;
}



/* Entry: 10940c4b0; end: 10940c67b;  */

undefined8 FUN_10940c4b0(float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *param_2;
  fVar3 = *param_1;
  uVar1 = 0;
  if (fVar4 != fVar3) {
    uVar1 = 0xffffff81;
  }
  if (fVar3 < fVar4) {
    uVar1 = 1;
  }
  if (fVar4 < fVar3) {
    uVar1 = 0xffffffff;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
    if ((int)param_2[1] < (int)param_1[1]) {
      uVar1 = 0xffffffff;
    }
    if (param_2[1] == param_1[1]) goto LAB_10940c54c;
  }
  if ((uVar1 & 0xff) != 1) {
LAB_10940c54c:
    fVar3 = *param_3;
    uVar1 = 0;
    if (fVar3 != fVar4) {
      uVar1 = 0xffffff81;
    }
    if (fVar4 < fVar3) {
      uVar1 = 1;
    }
    if (fVar3 < fVar4) {
      uVar1 = 0xffffffff;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
      if ((int)param_3[1] < (int)param_2[1]) {
        uVar1 = 0xffffffff;
      }
      if (param_3[1] == param_2[1]) {
        return 0;
      }
    }
    if ((uVar1 & 0xff) != 1) {
      return 0;
    }
    *param_2 = fVar3;
    *param_3 = fVar4;
    fVar3 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = fVar3;
    fVar3 = *param_2;
    fVar4 = *param_1;
    uVar1 = 0;
    if (fVar3 != fVar4) {
      uVar1 = 0xffffff81;
    }
    if (fVar4 < fVar3) {
      uVar1 = 1;
    }
    if (fVar3 < fVar4) {
      uVar1 = 0xffffffff;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
      if ((int)param_2[1] < (int)param_1[1]) {
        uVar1 = 0xffffffff;
      }
      if (param_2[1] == param_1[1]) {
        return 1;
      }
    }
    if ((uVar1 & 0xff) == 1) {
      *param_1 = fVar3;
      *param_2 = fVar4;
      fVar3 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = fVar3;
    }
    return 1;
  }
  fVar5 = *param_3;
  uVar1 = 0;
  if (fVar5 != fVar4) {
    uVar1 = 0xffffff81;
  }
  if (fVar4 < fVar5) {
    uVar1 = 1;
  }
  if (fVar5 < fVar4) {
    uVar1 = 0xffffffff;
  }
  if (uVar1 == 0) {
    fVar2 = param_3[1];
    uVar1 = 1;
    if ((int)fVar2 < (int)param_2[1]) {
      uVar1 = 0xffffffff;
    }
    if (fVar2 != param_2[1]) goto LAB_10940c528;
  }
  else {
LAB_10940c528:
    if ((uVar1 & 0xff) == 1) {
      *param_1 = fVar5;
      *param_3 = fVar3;
      fVar4 = param_1[1];
      param_1[1] = param_3[1];
      goto LAB_10940c670;
    }
    fVar2 = param_2[1];
  }
  *param_1 = fVar4;
  *param_2 = fVar3;
  fVar4 = param_1[1];
  param_1[1] = fVar2;
  param_2[1] = fVar4;
  fVar5 = *param_3;
  uVar1 = 0;
  if (fVar5 != fVar3) {
    uVar1 = 0xffffff81;
  }
  if (fVar3 < fVar5) {
    uVar1 = 1;
  }
  if (fVar5 < fVar3) {
    uVar1 = 0xffffffff;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
    if ((int)param_3[1] < (int)fVar4) {
      uVar1 = 0xffffffff;
    }
    if (param_3[1] == fVar4) {
      return 1;
    }
  }
  if ((uVar1 & 0xff) != 1) {
    return 1;
  }
  *param_2 = fVar5;
  *param_3 = fVar3;
  param_2[1] = param_3[1];
LAB_10940c670:
  param_3[1] = fVar4;
  return 1;
}



/* Entry: 10940c67c; end: 10940c6ef;  */

void FUN_10940c67c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10940c6f0; end: 10940c96b;  */

void FUN_10940c6f0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  long *plStack_88;
  double *pdStack_80;
  double *pdStack_78;
  long *plStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    auVar12 = NEON_fmov(0x3ff0000000000000,8);
    auVar9 = NEON_fmov(0x3fe0000000000000,8);
    auVar10 = NEON_fmov(0xbfe0000000000000,8);
    pdVar7 = (double *)0x0;
    do {
      dVar13 = (double)(float)*param_2;
      dVar14 = (double)(float)((ulong)*param_2 >> 0x20);
      if (pdVar7 < (double *)param_1[2]) {
        fVar11 = *(float *)((long)param_2 + 0xc);
        pdVar7[4] = (double)*(float *)(param_2 + 2);
        *(undefined4 *)(pdVar7 + 5) = 0;
        pdVar7[6] = (double)fVar11;
        *(undefined4 *)(pdVar7 + 10) = 0x42ff0000;
        *(undefined8 *)((long)pdVar7 + 0x5c) = 0;
        *(undefined8 *)((long)pdVar7 + 0x54) = 0;
        *(undefined8 *)((long)pdVar7 + 0x6c) = 0;
        *(undefined8 *)((long)pdVar7 + 100) = 0;
        *(undefined8 *)((long)pdVar7 + 0x7c) = 0;
        *(undefined8 *)((long)pdVar7 + 0x74) = 0;
        pdVar7[0x11] = 0.0;
        pdVar7[0x10] = 0.0;
        pdVar7[0x14] = 0.0;
        pdVar7[0x12] = (double)(pdVar7 + 0xb);
        pdVar7[0x13] = (double)(pdVar7 + 0x14);
        pdVar7[0x15] = 0.0;
        pdVar7[8] = auVar12._8_8_;
        pdVar7[7] = auVar12._0_8_;
        pdVar7[9] = 1.0;
        pdVar8 = pdVar7 + 0x16;
        pdVar7[1] = dVar14;
        *pdVar7 = dVar13;
        pdVar7[3] = dVar14 + auVar9._8_8_ + auVar10._8_8_;
        pdVar7[2] = dVar13 + auVar9._0_8_ + auVar10._0_8_;
      }
      else {
        lVar6 = (long)pdVar7 - *param_1;
        uVar4 = (lVar6 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
        if (0x1745d1745d1745d < uVar4) {
          FUN_10939c884();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10940c940);
          (*pcVar1)();
        }
        lVar3 = param_1[2] - *param_1 >> 4;
        uVar5 = lVar3 * 0x5d1745d1745d1746;
        if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
          uVar5 = uVar4;
        }
        if (0xba2e8ba2e8ba2d < (ulong)(lVar3 * 0x2e8ba2e8ba2e8ba3)) {
          uVar5 = 0x1745d1745d1745d;
        }
        plStack_68 = param_1;
        if (uVar5 == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          plVar2 = param_1;
          FUN_10939c898(param_1,uVar5,0);
        }
        pdStack_80 = (double *)((long)plVar2 + lVar6);
        fVar11 = *(float *)((long)param_2 + 0xc);
        pdStack_80[4] = (double)*(float *)(param_2 + 2);
        *(undefined4 *)(pdStack_80 + 5) = 0;
        pdStack_80[6] = (double)fVar11;
        *(undefined4 *)(pdStack_80 + 10) = 0x42ff0000;
        pdStack_80[0x11] = 0.0;
        pdStack_80[0x10] = 0.0;
        *(undefined8 *)((long)pdStack_80 + 0x7c) = 0;
        *(undefined8 *)((long)pdStack_80 + 0x74) = 0;
        *(undefined8 *)((long)pdStack_80 + 0x6c) = 0;
        *(undefined8 *)((long)pdStack_80 + 100) = 0;
        *(undefined8 *)((long)pdStack_80 + 0x5c) = 0;
        *(undefined8 *)((long)pdStack_80 + 0x54) = 0;
        pdStack_80[0x14] = 0.0;
        pdStack_80[0x12] = (double)(pdStack_80 + 0xb);
        pdStack_80[0x13] = (double)(pdStack_80 + 0x14);
        pdStack_80[0x15] = 0.0;
        pdStack_80[8] = auVar12._8_8_;
        pdStack_80[7] = auVar12._0_8_;
        pdStack_80[9] = 1.0;
        pdStack_80[1] = dVar14;
        *pdStack_80 = dVar13;
        pdStack_80[3] = dVar14 + auVar9._8_8_ + auVar10._8_8_;
        pdStack_80[2] = dVar13 + auVar9._0_8_ + auVar10._0_8_;
        pdVar8 = pdStack_80 + 0x16;
        lVar6 = (long)pdStack_80 + (*param_1 - param_1[1]);
        plStack_88 = plVar2;
        pdStack_78 = pdVar8;
        plStack_70 = plVar2 + uVar5 * 0x16;
        FUN_10939c900(param_1,*param_1,param_1[1],lVar6);
        plStack_88 = (long *)*param_1;
        *param_1 = lVar6;
        param_1[1] = (long)pdVar8;
        plStack_70 = (long *)param_1[2];
        param_1[2] = (long)(plVar2 + uVar5 * 0x16);
        pdStack_80 = (double *)plStack_88;
        pdStack_78 = (double *)plStack_88;
        FUN_10939cadc(&plStack_88);
      }
      param_1[1] = (long)pdVar8;
      param_2 = (undefined8 *)((long)param_2 + 0x1c);
      pdVar7 = pdVar8;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10940c96c; end: 10940ca8b;  */

void FUN_10940c96c(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (param_4 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_4) {
      FUN_10940c0b0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10940ca64);
      (*pcVar1)();
    }
    puVar2 = param_1;
    FUN_10940c0c4();
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar2 + param_4 * 3;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_50 = puVar2;
    puStack_70 = param_1;
    for (; puStack_48 = puVar2, param_2 != param_3; param_2 = param_2 + 0x18) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      FUN_10940ca8c();
      puVar2 = puStack_48 + 3;
    }
    uStack_58 = 1;
    FUN_10940cb14(&puStack_70);
    param_1[1] = puVar2;
  }
  return;
}



/* Entry: 10940ca8c; end: 10940cb13;  */

void FUN_10940ca8c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    FUN_10939cb98(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0x1c)) {
      *puVar1 = *param_2;
      uVar3 = param_2[2];
      uVar2 = param_2[1];
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 3);
      puVar1[2] = uVar3;
      puVar1[1] = uVar2;
      puVar1 = (undefined8 *)((long)puVar1 + 0x1c);
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10940cb14; end: 10940cb77;  */

long FUN_10940cb14(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar2 = (long *)**(undefined8 **)(param_1 + 8);
    plVar3 = (long *)**(long **)(param_1 + 0x10);
    while (plVar1 = plVar3, plVar1 != plVar2) {
      plVar3 = plVar1 + -3;
      if (*plVar3 != 0) {
        plVar1[-2] = *plVar3;
        __ZdlPv();
      }
    }
  }
  return param_1;
}



/* Entry: 10940cb78; end: 10940cc67;  */

undefined8 * FUN_10940cb78(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10940ca8c(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 2) * 0x6db6db6db6db6db7);
  uVar8 = param_3[1];
  uVar7 = *param_3;
  uVar9 = param_3[2];
  param_1[6] = param_3[3];
  param_1[5] = uVar9;
  uVar9 = param_3[4];
  param_1[8] = param_3[5];
  param_1[7] = uVar9;
  lVar4 = param_3[7];
  uVar10 = param_3[7];
  uVar9 = param_3[6];
  param_1[0xd] = 0;
  param_1[10] = uVar10;
  param_1[9] = uVar9;
  param_1[0xb] = param_1 + 4;
  param_1[0xc] = param_1 + 0xd;
  param_1[0xe] = 0;
  param_1[4] = uVar8;
  param_1[3] = uVar7;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_3 + 4) < 3) {
    puVar5 = (undefined8 *)param_3[9];
    puVar6 = (undefined8 *)param_1[0xc];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    func_0x000109a84868(param_1 + 3,param_3);
  }
  return param_1;
}



/* Entry: 10940cc68; end: 10940ccfb;  */

void FUN_10940cc68(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  bVar3 = param_2 < (ulong)(lVar6 * -0x5555555555555555);
  uVar1 = param_2 + lVar6 * 0x5555555555555555;
  if (bVar3 || uVar1 == 0) {
    if (bVar3) {
      plVar5 = (long *)(*param_1 + param_2 * 0x18);
      plVar4 = (long *)param_1[1];
      while (plVar2 = plVar4, plVar2 != plVar5) {
        plVar4 = plVar2 + -3;
        if (*plVar4 != 0) {
          plVar2[-2] = *plVar4;
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar5;
    }
    return;
  }
  lVar6 = param_1[1];
  if ((ulong)((param_1[2] - lVar6 >> 3) * -0x5555555555555555) < uVar1) {
    lVar6 = lVar6 - *param_1;
    uVar8 = uVar1 + (lVar6 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      FUN_10940c0b0();
      plVar5 = (long *)0x10;
      ___cxa_allocate_exception();
      FUN_10940ceb0();
      plVar4 = plVar5;
      ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
      ___cxa_free_exception(plVar5);
      __Unwind_Resume();
      __ZNSt11logic_errorC2EPKc();
      *plVar4 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
      return;
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar9 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10940c0c4();
    }
    lVar6 = (long)plVar4 + lVar6;
    lVar7 = ((uVar1 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar6,lVar7);
    lVar10 = lVar6 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_68 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar6 + lVar7;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar9 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010940c108(&lStack_68);
  }
  else {
    if (uVar1 != 0) {
      lVar7 = ((uVar1 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar6,lVar7);
      lVar6 = lVar6 + lVar7;
    }
    param_1[1] = lVar6;
  }
  return;
}



/* Entry: 10940ccfc; end: 10940ce5f;  */

void FUN_10940ccfc(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar7 = param_1[1];
  if ((ulong)((param_1[2] - lVar7 >> 3) * -0x5555555555555555) < param_2) {
    lVar7 = lVar7 - *param_1;
    uVar4 = param_2 + (lVar7 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
      FUN_10940c0b0();
      plVar2 = (long *)0x10;
      ___cxa_allocate_exception();
      FUN_10940ceb0();
      plVar1 = plVar2;
      ___cxa_throw(plVar2,PTR___ZTISt16invalid_argument_110352248,
                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
      ___cxa_free_exception(plVar2);
      __Unwind_Resume();
      __ZNSt11logic_errorC2EPKc();
      *plVar1 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
      return;
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar5 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10940c0c4();
    }
    lVar7 = (long)plVar1 + lVar7;
    lVar3 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar7,lVar3);
    lVar6 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_68 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar7 + lVar3;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar1 + uVar5 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010940c108(&lStack_68);
  }
  else {
    if (param_2 != 0) {
      lVar3 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar7,lVar3);
      lVar7 = lVar7 + lVar3;
    }
    param_1[1] = lVar7;
  }
  return;
}



/* Entry: 10940ce60; end: 10940ceaf;  */

void FUN_10940ce60(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_10940ceb0();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *plVar2 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
  return;
}



/* Entry: 10940ceb0; end: 10940ced3;  */

void FUN_10940ceb0(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
  return;
}



/* Entry: 10940ced4; end: 10940d073;  */

long * FUN_10940ced4(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ushort uVar14;
  int iVar15;
  undefined4 uVar16;
  short sVar17;
  ushort uVar18;
  short sVar19;
  ushort uVar20;
  undefined4 uVar21;
  short sVar22;
  ushort uVar23;
  uint3 uVar24;
  code *pcVar25;
  char *pcVar26;
  undefined1 (*pauVar58) [16];
  ushort *puVar59;
  short *psVar60;
  int iVar61;
  long lVar62;
  int iVar63;
  short *psVar64;
  int iVar65;
  int iVar66;
  ushort *extraout_x8;
  long lVar67;
  ulong uVar68;
  undefined1 (*pauVar69) [16];
  int iVar70;
  ulong uVar71;
  int iVar72;
  byte bVar73;
  long *plVar74;
  long lVar75;
  long lVar76;
  byte bVar77;
  byte bVar78;
  long lVar79;
  byte bVar80;
  int iVar81;
  int iVar82;
  double *pdVar83;
  byte bVar84;
  long lVar85;
  byte bVar86;
  byte bVar87;
  float fVar88;
  float fVar89;
  char cVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined8 uVar98;
  undefined1 auVar99 [12];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 uVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  int iVar116;
  int iVar121;
  undefined1 auVar117 [12];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar122 [12];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined8 uVar133;
  undefined1 auVar134 [12];
  undefined8 uVar135;
  undefined8 uVar136;
  undefined8 uVar137;
  undefined1 auStack_218 [4];
  int iStack_214;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined4 auStack_1b8 [2];
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  long *plStack_198;
  long lStack_190;
  int iStack_188;
  undefined8 uStack_180;
  int iStack_178;
  int iStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [16];
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  char *pcVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  char *pcVar41;
  char *pcVar42;
  char *pcVar43;
  char *pcVar44;
  char *pcVar45;
  char *pcVar46;
  char *pcVar47;
  char *pcVar48;
  char *pcVar49;
  char *pcVar50;
  char *pcVar51;
  char *pcVar52;
  char *pcVar53;
  char *pcVar54;
  char *pcVar55;
  char *pcVar56;
  char *pcVar57;
  
  lVar79 = param_1[1] - *param_1;
  uVar68 = (lVar79 >> 2) * 0x6db6db6db6db6db7 + 1;
  if (uVar68 < 0x924924924924925) {
    lVar67 = param_1[2] - *param_1 >> 2;
    uVar71 = lVar67 * -0x2492492492492492;
    if (uVar71 < uVar68 || uVar71 - uVar68 == 0) {
      uVar71 = uVar68;
    }
    if (0x492492492492491 < (ulong)(lVar67 * 0x6db6db6db6db6db7)) {
      uVar71 = 0x924924924924924;
    }
    plVar74 = param_1;
    plStack_38 = param_1;
    FUN_10939cbf8();
    plStack_50 = (long *)((long)plVar74 + lVar79);
    lStack_40 = (long)plVar74 + uVar71 * 0x1c;
    *plStack_50 = *param_2;
    lVar79 = param_2[3];
    lVar67 = param_2[1];
    plStack_50[2] = param_2[2];
    plStack_50[1] = lVar67;
    *(int *)(plStack_50 + 3) = (int)lVar79;
    lStack_48 = (long)plStack_50 + 0x1c;
    plStack_58 = plVar74;
    FUN_10940c2dc(param_1,&plStack_58);
    plVar74 = (long *)param_1[1];
    if (lStack_48 - (long)plStack_50 != 0) {
      lStack_48 = lStack_48 + (((lStack_48 - (long)plStack_50) - 0x1cU) / 0x1c) * -0x1c + -0x1c;
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar74;
  }
  FUN_10939cbe4();
  if (lStack_48 - (long)plStack_50 != 0) {
    lStack_48 = lStack_48 + (((lStack_48 - (long)plStack_50) - 0x1cU) / 0x1c) * -0x1c + -0x1c;
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  extraout_x8[0] = 0;
  extraout_x8[1] = 0x42ff;
  extraout_x8[6] = 0;
  extraout_x8[7] = 0;
  extraout_x8[8] = 0;
  extraout_x8[9] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  extraout_x8[0xe] = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0x10] = 0;
  extraout_x8[0x11] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0x16] = 0;
  extraout_x8[0x17] = 0;
  extraout_x8[0x18] = 0;
  extraout_x8[0x19] = 0;
  extraout_x8[0x12] = 0;
  extraout_x8[0x13] = 0;
  extraout_x8[0x14] = 0;
  extraout_x8[0x15] = 0;
  puVar59 = extraout_x8 + 0x28;
  puVar59[0] = 0;
  puVar59[1] = 0;
  puVar59[2] = 0;
  puVar59[3] = 0;
  extraout_x8[0x1c] = 0;
  extraout_x8[0x1d] = 0;
  extraout_x8[0x1e] = 0;
  extraout_x8[0x1f] = 0;
  extraout_x8[0x18] = 0;
  extraout_x8[0x19] = 0;
  extraout_x8[0x1a] = 0;
  extraout_x8[0x1b] = 0;
  *(ushort **)(extraout_x8 + 0x20) = extraout_x8 + 4;
  *(ushort **)(extraout_x8 + 0x24) = puVar59;
  extraout_x8[0x2c] = 0;
  extraout_x8[0x2d] = 0;
  extraout_x8[0x2e] = 0;
  extraout_x8[0x2f] = 0;
  uVar68 = param_1[2];
  if (((uVar68 >> 0x20 != 0) && ((uVar68 & 0xffffffff) != 0)) && (*param_2 != param_2[1])) {
    plStack_198 = (long *)0x0;
    lStack_190 = 0;
    iStack_188 = 0;
    ppuStack_1a0 = &PTR_FUN_110af4c80;
    uStack_170 = uVar68;
    func_0x00010938e870(&ppuStack_1a0,&uStack_170);
    lVar79 = lStack_190;
    lVar67 = param_1[2];
    iVar82 = (int)lStack_190;
    iVar66 = (int)((ulong)lStack_190 >> 0x20);
    if (param_3 == 0x17) {
      if (lStack_190 != lVar67) goto LAB_10940e0e8;
      lVar75 = (lStack_190 << 0x20) + 0x400000000;
      lVar67 = (lVar75 >> 0x1f) + 0x20;
      if (lVar75 < -0x1000000000) {
        lVar67 = -1;
      }
      __Znam();
      if (0 < iVar66) {
        iVar66 = 0;
        psVar64 = (short *)(lVar67 + 0x23U & 0xffffffffffffffe0);
        iVar70 = -3;
        iVar63 = 3;
        iVar61 = -2;
        iVar72 = 2;
        do {
          iVar81 = (int)lVar79;
          lVar76 = param_1[1];
          iVar15 = (int)param_1[3];
          iVar116 = MP_INT_ABS(iVar66 + -2);
          iVar121 = MP_INT_ABS(iVar66 + -1);
          lVar67 = lVar76 + iVar15 * iVar116;
          lVar75 = lVar76 + iVar15 * iVar121;
          iVar116 = (int)((ulong)lVar79 >> 0x20);
          if ((lVar79 << 0x20) + -0x800000000 < 0) {
            uVar68 = 0;
          }
          else {
            uVar68 = 0;
            iVar121 = iVar116 + iVar70;
            if (iVar116 + iVar70 <= iVar63 - iVar116) {
              iVar121 = iVar63 - iVar116;
            }
            iVar65 = iVar116 + iVar61;
            if (iVar116 + iVar61 <= iVar72 - iVar116) {
              iVar65 = iVar72 - iVar116;
            }
            lVar79 = lVar76 + iVar15 * iVar66;
            lVar85 = -2;
            psVar60 = psVar64;
            do {
              auVar108._8_8_ = 0;
              auVar108._0_8_ = uVar68;
              Hint_Prefetch(lVar79 + 0x140 +
                            (long)iVar82 *
                            (lVar85 - ((SUB168(auVar108 * ZEXT816(0xcccccccccccccccd),8) &
                                       0xfffffffffffffffc) + uVar68 / 5)) + uVar68,0,0,0);
              uVar98 = *(undefined8 *)(lVar67 + uVar68);
              uVar102 = *(undefined8 *)(lVar75 + uVar68);
              uVar133 = *(undefined8 *)(lVar79 + uVar68);
              auVar103 = NEON_umull(*(undefined8 *)
                                     (lVar76 + iVar15 * ((iVar116 + -1) - iVar65) + uVar68),
                                    0x1f1f1f1f1f1f1f1f,1);
              auVar108 = NEON_umull(*(undefined8 *)
                                     (lVar76 + iVar15 * ((iVar116 + -1) - iVar121) + uVar68),
                                    0x909090909090909,1);
              psVar60[4] = auVar103._8_2_ + (ushort)(byte)((ulong)uVar102 >> 0x20) * 0x1f +
                           (ushort)(byte)((ulong)uVar133 >> 0x20) * 0x30 +
                           auVar108._8_2_ + (ushort)(byte)((ulong)uVar98 >> 0x20) * 9;
              psVar60[5] = auVar103._10_2_ + (ushort)(byte)((ulong)uVar102 >> 0x28) * 0x1f +
                           (ushort)(byte)((ulong)uVar133 >> 0x28) * 0x30 +
                           auVar108._10_2_ + (ushort)(byte)((ulong)uVar98 >> 0x28) * 9;
              psVar60[6] = auVar103._12_2_ + (ushort)(byte)((ulong)uVar102 >> 0x30) * 0x1f +
                           (ushort)(byte)((ulong)uVar133 >> 0x30) * 0x30 +
                           auVar108._12_2_ + (ushort)(byte)((ulong)uVar98 >> 0x30) * 9;
              psVar60[7] = auVar103._14_2_ + (ushort)(byte)((ulong)uVar102 >> 0x38) * 0x1f +
                           (ushort)(byte)((ulong)uVar133 >> 0x38) * 0x30 +
                           auVar108._14_2_ + (ushort)(byte)((ulong)uVar98 >> 0x38) * 9;
              *psVar60 = auVar103._0_2_ + (ushort)(byte)uVar102 * 0x1f +
                         (ushort)(byte)uVar133 * 0x30 + auVar108._0_2_ + (ushort)(byte)uVar98 * 9;
              psVar60[1] = auVar103._2_2_ + (ushort)(byte)((ulong)uVar102 >> 8) * 0x1f +
                           (ushort)(byte)((ulong)uVar133 >> 8) * 0x30 +
                           auVar108._2_2_ + (ushort)(byte)((ulong)uVar98 >> 8) * 9;
              psVar60[2] = auVar103._4_2_ + (ushort)(byte)((ulong)uVar102 >> 0x10) * 0x1f +
                           (ushort)(byte)((ulong)uVar133 >> 0x10) * 0x30 +
                           auVar108._4_2_ + (ushort)(byte)((ulong)uVar98 >> 0x10) * 9;
              psVar60[3] = auVar103._6_2_ + (ushort)(byte)((ulong)uVar102 >> 0x18) * 0x1f +
                           (ushort)(byte)((ulong)uVar133 >> 0x18) * 0x30 +
                           auVar108._6_2_ + (ushort)(byte)((ulong)uVar98 >> 0x18) * 9;
              uVar68 = uVar68 + 8;
              iVar81 = (int)param_1[2];
              lVar85 = lVar85 + 8;
              psVar60 = psVar60 + 8;
            } while ((long)uVar68 <= (param_1[2] << 0x20) + -0x800000000 >> 0x20);
          }
          if ((long)uVar68 < (long)iVar81) {
            iVar81 = iVar116 + iVar61;
            if (iVar116 + iVar61 <= iVar72 - iVar116) {
              iVar81 = iVar72 - iVar116;
            }
            iVar121 = iVar116 + iVar70;
            if (iVar116 + iVar70 <= iVar63 - iVar116) {
              iVar121 = iVar63 - iVar116;
            }
            do {
              psVar64[uVar68] =
                   ((ushort)*(byte *)(lVar76 + iVar15 * ((iVar116 + -1) - iVar121) + uVar68) +
                   (ushort)*(byte *)(lVar67 + uVar68)) * 9 +
                   ((ushort)*(byte *)(lVar76 + iVar15 * ((iVar116 + -1) - iVar81) + uVar68) +
                   (ushort)*(byte *)(lVar75 + uVar68)) * 0x1f +
                   (ushort)*(byte *)(lVar76 + iVar15 * iVar66 + uVar68) * 0x30;
              uVar68 = uVar68 + 1;
            } while ((long)uVar68 < (long)(int)param_1[2]);
          }
          *(uint *)(psVar64 + -2) = *(uint *)(psVar64 + 1) >> 0x10 | *(uint *)(psVar64 + 1) << 0x10;
          uVar68 = param_1[2];
          *(undefined2 *)
           ((long)psVar64 +
           (-(uVar68 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar68 & 0xffffffff) << 1)) =
               *(undefined2 *)((long)psVar64 + ((long)((uVar68 << 0x20) + -0x200000000) >> 0x1f));
          *(undefined2 *)((long)psVar64 + ((param_1[2] << 0x20) + 0x100000000 >> 0x1f)) =
               *(undefined2 *)((long)psVar64 + ((param_1[2] << 0x20) + -0x300000000 >> 0x1f));
          lVar79 = param_1[2];
          if ((lVar79 << 0x20) + -0x800000000 < 0) {
            lVar67 = 0;
          }
          else {
            lVar67 = 0;
            psVar60 = psVar64;
            do {
              Hint_Prefetch(psVar60 + 0xa0,0,0,0);
              uVar102 = *(undefined8 *)(psVar60 + 4);
              uVar98 = *(undefined8 *)psVar60;
              auVar117._0_8_ =
                   CONCAT26(psVar60[5] + psVar60[1],
                            CONCAT24(psVar60[4] + *psVar60,
                                     CONCAT22(psVar60[3] + psVar60[-1],psVar60[2] + psVar60[-2])));
              auVar117._8_2_ = psVar60[6] + psVar60[2];
              auVar117._10_2_ = psVar60[7] + psVar60[3];
              auVar122._0_8_ =
                   CONCAT26(psVar60[4] + psVar60[2],
                            CONCAT24(psVar60[3] + psVar60[1],
                                     CONCAT22(psVar60[2] + *psVar60,psVar60[1] + psVar60[-1])));
              auVar122._8_2_ = psVar60[5] + psVar60[3];
              auVar122._10_2_ = psVar60[6] + psVar60[4];
              auVar108 = NEON_umull(auVar122._0_8_,0x1f001f001f001f,2);
              auVar105._0_8_ =
                   CONCAT44(auVar108._4_4_ + (uint)(ushort)((ulong)uVar98 >> 0x10) * 0x30 +
                            (uint)(ushort)(psVar60[3] + psVar60[-1]) * 9,
                            auVar108._0_4_ + (uint)(ushort)uVar98 * 0x30 +
                            (uint)(ushort)(psVar60[2] + psVar60[-2]) * 9);
              auVar105._8_4_ =
                   auVar108._8_4_ + (uint)(ushort)((ulong)uVar98 >> 0x20) * 0x30 +
                   (uint)(ushort)(psVar60[4] + *psVar60) * 9;
              auVar105._12_4_ =
                   auVar108._12_4_ + (uint)(ushort)((ulong)uVar98 >> 0x30) * 0x30 +
                   (uint)(ushort)(psVar60[5] + psVar60[1]) * 9;
              uVar133 = NEON_uqshrn(auVar105._0_8_,auVar105,0xe,4);
              auVar103._0_4_ =
                   (auVar122._8_4_ & 0xffff) * 0x1f + (uint)(ushort)uVar102 * 0x30 +
                   (auVar117._8_4_ & 0xffff) * 9;
              auVar103._4_4_ =
                   (uint)auVar122._10_2_ * 0x1f + (uint)(ushort)((ulong)uVar102 >> 0x10) * 0x30 +
                   (uint)auVar117._10_2_ * 9;
              auVar103._8_4_ =
                   (uint)(ushort)(psVar60[7] + psVar60[5]) * 0x1f +
                   (uint)(ushort)((ulong)uVar102 >> 0x20) * 0x30 +
                   (uint)(ushort)(psVar60[8] + psVar60[4]) * 9;
              auVar103._12_4_ =
                   (uint)(ushort)(psVar60[8] + psVar60[6]) * 0x1f +
                   (uint)(ushort)((ulong)uVar102 >> 0x30) * 0x30 +
                   (uint)(ushort)(psVar60[9] + psVar60[5]) * 9;
              uVar98 = NEON_uqshrn(auVar117._0_8_,auVar103,0xe,4);
              *(ulong *)((long)plStack_198 + lVar67 + (long)iStack_188 * (long)iVar66) =
                   CONCAT17((char)((ulong)uVar98 >> 0x30),
                            CONCAT16((char)((ulong)uVar98 >> 0x20),
                                     CONCAT15((char)((ulong)uVar98 >> 0x10),
                                              CONCAT14((char)uVar98,
                                                       CONCAT13((char)((ulong)uVar133 >> 0x30),
                                                                CONCAT12((char)((ulong)uVar133 >>
                                                                               0x20),
                                                                         CONCAT11((char)((ulong)
                                                  uVar133 >> 0x10),(char)uVar133)))))));
              lVar67 = lVar67 + 8;
              lVar79 = param_1[2];
              psVar60 = psVar60 + 8;
            } while (lVar67 <= (lVar79 << 0x20) + -0x800000000 >> 0x20);
          }
          if (lVar67 < (int)lVar79) {
            puVar59 = (ushort *)(psVar64 + lVar67);
            do {
              *(char *)((long)plStack_198 + lVar67 + (long)iStack_188 * (long)iVar66) =
                   (char)(((uint)puVar59[2] + (uint)puVar59[-2]) * 9 +
                          ((uint)puVar59[1] + (uint)puVar59[-1]) * 0x1f + (uint)*puVar59 * 0x30 +
                          0x2000 >> 0xe);
              lVar67 = lVar67 + 1;
              lVar79 = param_1[2];
              puVar59 = puVar59 + 1;
            } while (lVar67 < (int)lVar79);
          }
          iVar66 = iVar66 + 1;
          iVar70 = iVar70 + -1;
          iVar63 = iVar63 + 1;
          iVar61 = iVar61 + -1;
          iVar72 = iVar72 + 1;
        } while (iVar66 < (int)((ulong)lVar79 >> 0x20));
      }
    }
    else if (param_3 == 0xf) {
      if (lStack_190 != lVar67) goto LAB_10940e0e8;
      lVar75 = (lStack_190 << 0x20) + 0x400000000;
      lVar67 = (lVar75 >> 0x1f) + 0x20;
      if (lVar75 < -0x1000000000) {
        lVar67 = -1;
      }
      __Znam();
      if (0 < iVar66) {
        iVar66 = 0;
        pauVar69 = (undefined1 (*) [16])(lVar67 + 0x23U & 0xffffffffffffffe0);
        iVar70 = -2;
        iVar72 = -1;
        iVar61 = 1;
        iVar63 = 2;
        do {
          iVar81 = (int)lVar79;
          iVar15 = iVar72;
          if (iVar72 <= iVar61) {
            iVar15 = iVar61;
          }
          iVar116 = iVar66 + -1;
          if (iVar66 + -1 < 0) {
            iVar116 = 1 - iVar66;
          }
          iVar121 = (int)((ulong)lVar79 >> 0x20);
          uVar5 = (iVar121 - iVar66) - 2;
          if ((int)uVar5 < 0) {
            uVar5 = 2 - (iVar121 - iVar66);
          }
          lVar75 = param_1[1];
          iVar65 = (int)param_1[3];
          lVar67 = lVar75 + iVar65 * iVar66;
          if ((lVar79 << 0x20) + -0x800000000 < 0) {
            uVar68 = 0;
          }
          else {
            uVar68 = 0;
            do {
              puVar3 = (undefined8 *)(lVar67 + uVar68);
              auVar120._8_8_ = 0;
              auVar120._0_8_ = uVar68;
              Hint_Prefetch((long)puVar3 +
                            ((uVar68 - ((SUB168(auVar120 * ZEXT816(0xcccccccccccccccd),8) &
                                        0xfffffffffffffffc) + uVar68 / 5)) + -2) * (long)iVar82 +
                            0x140,0,0,0);
              uVar98 = *(undefined8 *)(lVar75 + iVar65 * iVar116 + uVar68);
              uVar102 = *puVar3;
              auVar108 = NEON_umull(*(undefined8 *)
                                     (lVar75 + (int)((iVar121 + ~uVar5) * iVar65) + uVar68),
                                    0x1f1f1f1f1f1f1f1f,1);
              auVar125._0_8_ =
                   CONCAT26(auVar108._6_2_ + (ushort)(byte)((ulong)uVar98 >> 0x18) * 0x1f +
                            (ushort)(byte)((ulong)uVar102 >> 0x18) * 0x42,
                            CONCAT24(auVar108._4_2_ + (ushort)(byte)((ulong)uVar98 >> 0x10) * 0x1f +
                                     (ushort)(byte)((ulong)uVar102 >> 0x10) * 0x42,
                                     CONCAT22(auVar108._2_2_ +
                                              (ushort)(byte)((ulong)uVar98 >> 8) * 0x1f +
                                              (ushort)(byte)((ulong)uVar102 >> 8) * 0x42,
                                              auVar108._0_2_ + (ushort)(byte)uVar98 * 0x1f +
                                              (ushort)(byte)uVar102 * 0x42)));
              auVar125._8_2_ =
                   auVar108._8_2_ + (ushort)(byte)((ulong)uVar98 >> 0x20) * 0x1f +
                   (ushort)(byte)((ulong)uVar102 >> 0x20) * 0x42;
              auVar125._10_2_ =
                   auVar108._10_2_ + (ushort)(byte)((ulong)uVar98 >> 0x28) * 0x1f +
                   (ushort)(byte)((ulong)uVar102 >> 0x28) * 0x42;
              auVar125._12_2_ =
                   auVar108._12_2_ + (ushort)(byte)((ulong)uVar98 >> 0x30) * 0x1f +
                   (ushort)(byte)((ulong)uVar102 >> 0x30) * 0x42;
              auVar125._14_2_ =
                   auVar108._14_2_ + (ushort)(byte)((ulong)uVar98 >> 0x38) * 0x1f +
                   (ushort)(byte)((ulong)uVar102 >> 0x38) * 0x42;
              *(long *)((long)(*pauVar69 + uVar68 * 2) + 8) = auVar125._8_8_;
              *(undefined8 *)(*pauVar69 + uVar68 * 2) = auVar125._0_8_;
              uVar68 = uVar68 + 8;
              iVar81 = (int)param_1[2];
            } while ((long)uVar68 <= (param_1[2] << 0x20) + -0x800000000 >> 0x20);
          }
          if ((long)uVar68 < (long)iVar81) {
            uVar5 = iVar121 + iVar70;
            if (iVar121 + iVar70 <= iVar63 - iVar121) {
              uVar5 = iVar63 - iVar121;
            }
            do {
              *(ushort *)(*pauVar69 + uVar68 * 2) =
                   ((ushort)*(byte *)(lVar75 + (int)(iVar65 * (~uVar5 + iVar121)) + uVar68) +
                   (ushort)*(byte *)(lVar75 + iVar65 * iVar15 + uVar68)) * 0x1f +
                   (ushort)*(byte *)(lVar67 + uVar68) * 0x42;
              uVar68 = uVar68 + 1;
            } while ((long)uVar68 < (long)(int)param_1[2]);
          }
          *(undefined2 *)(pauVar69[-1] + 0xe) = *(undefined2 *)(*pauVar69 + 2);
          uVar68 = param_1[2];
          *(undefined2 *)
           (*pauVar69 + (-(uVar68 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar68 & 0xffffffff) << 1)) =
               *(undefined2 *)(*pauVar69 + ((long)((uVar68 << 0x20) + -0x200000000) >> 0x1f));
          lVar79 = param_1[2];
          if ((lVar79 << 0x20) + -0x800000000 < 0) {
            lVar67 = 0;
          }
          else {
            lVar67 = 0;
            pauVar58 = pauVar69;
            do {
              Hint_Prefetch(pauVar58 + 0x14,0,0,0);
              auVar108 = *pauVar58;
              auVar99._0_8_ =
                   CONCAT26(*(short *)(*pauVar58 + 8) + *(short *)(*pauVar58 + 4),
                            CONCAT24(*(short *)(*pauVar58 + 6) + *(short *)(*pauVar58 + 2),
                                     CONCAT22(*(short *)(*pauVar58 + 4) + *(short *)*pauVar58,
                                              *(short *)(*pauVar58 + 2) +
                                              *(short *)(pauVar58[-1] + 0xe))));
              auVar99._8_2_ = *(short *)(*pauVar58 + 10) + *(short *)(*pauVar58 + 6);
              auVar99._10_2_ = *(short *)(*pauVar58 + 0xc) + *(short *)(*pauVar58 + 8);
              auVar103 = NEON_umull(auVar99._0_8_,0x1f001f001f001f,2);
              auVar131._0_8_ =
                   CONCAT44(auVar103._4_4_ + (uint)auVar108._2_2_ * 0x42,
                            auVar103._0_4_ + (uint)auVar108._0_2_ * 0x42);
              auVar131._8_4_ = auVar103._8_4_ + (uint)auVar108._4_2_ * 0x42;
              auVar131._12_4_ = auVar103._12_4_ + (uint)auVar108._6_2_ * 0x42;
              uVar102 = NEON_uqshrn(auVar131._0_8_,auVar131,0xe,4);
              auVar128._0_8_ =
                   CONCAT44((uint)auVar99._10_2_ * 0x1f + (uint)auVar108._10_2_ * 0x42,
                            (auVar99._8_4_ & 0xffff) * 0x1f + (auVar108._8_4_ & 0xffff) * 0x42);
              auVar128._8_4_ =
                   (uint)(ushort)(*(short *)(*pauVar58 + 0xe) + *(short *)(*pauVar58 + 10)) * 0x1f +
                   (uint)auVar108._12_2_ * 0x42;
              auVar128._12_4_ =
                   (uint)(ushort)(*(short *)pauVar58[1] + *(short *)(*pauVar58 + 0xc)) * 0x1f +
                   (uint)auVar108._14_2_ * 0x42;
              uVar98 = NEON_uqshrn(auVar128._0_8_,auVar128,0xe,4);
              *(ulong *)((long)plStack_198 + lVar67 + (long)iStack_188 * (long)iVar66) =
                   CONCAT17((char)((ulong)uVar98 >> 0x30),
                            CONCAT16((char)((ulong)uVar98 >> 0x20),
                                     CONCAT15((char)((ulong)uVar98 >> 0x10),
                                              CONCAT14((char)uVar98,
                                                       CONCAT13((char)((ulong)uVar102 >> 0x30),
                                                                CONCAT12((char)((ulong)uVar102 >>
                                                                               0x20),
                                                                         CONCAT11((char)((ulong)
                                                  uVar102 >> 0x10),(char)uVar102)))))));
              lVar67 = lVar67 + 8;
              lVar79 = param_1[2];
              pauVar58 = pauVar58 + 1;
            } while (lVar67 <= (lVar79 << 0x20) + -0x800000000 >> 0x20);
          }
          if (lVar67 < (int)lVar79) {
            puVar59 = (ushort *)(*pauVar69 + lVar67 * 2);
            do {
              *(char *)((long)plStack_198 + lVar67 + (long)iStack_188 * (long)iVar66) =
                   (char)(((uint)puVar59[1] + (uint)puVar59[-1]) * 0x1f + (uint)*puVar59 * 0x42 +
                          0x2000 >> 0xe);
              lVar67 = lVar67 + 1;
              lVar79 = param_1[2];
              puVar59 = puVar59 + 1;
            } while (lVar67 < (int)lVar79);
          }
          iVar66 = iVar66 + 1;
          iVar70 = iVar70 + -1;
          iVar63 = iVar63 + 1;
          iVar72 = iVar72 + 1;
          iVar61 = iVar61 + -1;
        } while (iVar66 < (int)((ulong)lVar79 >> 0x20));
      }
    }
    else {
      if (lStack_190 != lVar67) goto LAB_10940e0e8;
      lVar75 = (lStack_190 << 0x20) + 0x400000000;
      lVar67 = (lVar75 >> 0x1f) + 0x20;
      if (lVar75 < -0x1000000000) {
        lVar67 = -1;
      }
      __Znam();
      if (0 < iVar66) {
        iVar66 = 0;
        psVar64 = (short *)(lVar67 + 0x23U & 0xffffffffffffffe0);
        iVar70 = -4;
        iVar63 = 4;
        iVar72 = -1;
        iVar61 = 1;
        do {
          iVar121 = (int)lVar79;
          iVar65 = (int)((ulong)lVar79 >> 0x20);
          lVar85 = param_1[1];
          iVar81 = (int)param_1[3];
          iVar15 = MP_INT_ABS(iVar66 + -3);
          iVar116 = MP_INT_ABS(iVar66 + -2);
          lVar67 = lVar85 + iVar81 * iVar15;
          lVar75 = lVar85 + iVar81 * iVar116;
          uVar16 = MP_INT_ABS((iVar65 - iVar66) + -2);
          uVar21 = MP_INT_ABS((iVar65 - iVar66) + -3);
          lVar76 = lVar85 + (iVar65 + CONCAT13(~(byte)((uint)uVar16 >> 0x18),
                                               CONCAT12(~(byte)((uint)uVar16 >> 0x10),
                                                        CONCAT11(~(byte)((uint)uVar16 >> 8),
                                                                 ~(byte)uVar16)))) * iVar81;
          iVar15 = iVar72;
          if (iVar72 <= iVar61) {
            iVar15 = iVar61;
          }
          lVar1 = lVar85 + (iVar65 + CONCAT13(~(byte)((uint)uVar21 >> 0x18),
                                              CONCAT12(~(byte)((uint)uVar21 >> 0x10),
                                                       CONCAT11(~(byte)((uint)uVar21 >> 8),
                                                                ~(byte)uVar21)))) * iVar81;
          if ((lVar79 << 0x20) + -0x800000000 < 0) {
            uVar68 = 0;
          }
          else {
            uVar68 = 0;
            uVar5 = iVar65 + iVar70;
            if (iVar65 + iVar70 <= iVar63 - iVar65) {
              uVar5 = iVar63 - iVar65;
            }
            lVar79 = lVar85 + iVar81 * iVar66;
            lVar62 = -3;
            psVar60 = psVar64;
            do {
              Hint_Prefetch(lVar79 + 0x140 + (long)iVar82 * (lVar62 + (uVar68 / 7) * -7) + uVar68,0,
                            0,0);
              uVar98 = *(undefined8 *)(lVar67 + uVar68);
              uVar102 = *(undefined8 *)(lVar75 + uVar68);
              uVar133 = *(undefined8 *)(lVar85 + iVar81 * iVar15 + uVar68);
              uVar135 = *(undefined8 *)(lVar79 + uVar68);
              auVar105 = NEON_umull(*(undefined8 *)(lVar76 + uVar68),0x1818181818181818,1);
              auVar103 = NEON_umull(*(undefined8 *)(lVar1 + uVar68),0x1111111111111111,1);
              auVar108 = NEON_umull(*(undefined8 *)
                                     (lVar85 + (int)(iVar81 * (~uVar5 + iVar65)) + uVar68),
                                    0x909090909090909,1);
              uVar24 = CONCAT12((char)((ulong)uVar98 >> 8),(short)uVar98) & 0xff00ff;
              sVar17 = auVar105._2_2_ + (ushort)(byte)((ulong)uVar133 >> 8) * 0x18 +
                       (ushort)(byte)((ulong)uVar135 >> 8) * 0x1c +
                       auVar103._2_2_ + (ushort)(byte)((ulong)uVar102 >> 8) * 0x11 +
                       auVar108._2_2_ + (ushort)(byte)(uVar24 >> 0x10) * 9;
              sVar19 = auVar105._4_2_ + (ushort)(byte)((ulong)uVar133 >> 0x10) * 0x18 +
                       (ushort)(byte)((ulong)uVar135 >> 0x10) * 0x1c +
                       auVar103._4_2_ + (ushort)(byte)((ulong)uVar102 >> 0x10) * 0x11 +
                       auVar108._4_2_ + (ushort)(byte)((ulong)uVar98 >> 0x10) * 9;
              sVar22 = auVar105._6_2_ + (ushort)(byte)((ulong)uVar133 >> 0x18) * 0x18 +
                       (ushort)(byte)((ulong)uVar135 >> 0x18) * 0x1c +
                       auVar103._6_2_ + (ushort)(byte)((ulong)uVar102 >> 0x18) * 0x11 +
                       auVar108._6_2_ + (ushort)(byte)((ulong)uVar98 >> 0x18) * 9;
              *(ulong *)(psVar60 + 4) =
                   CONCAT26(auVar105._14_2_ + (ushort)(byte)((ulong)uVar133 >> 0x38) * 0x18 +
                            (ushort)(byte)((ulong)uVar135 >> 0x38) * 0x1c +
                            auVar103._14_2_ + (ushort)(byte)((ulong)uVar102 >> 0x38) * 0x11 +
                            auVar108._14_2_ + (ushort)(byte)((ulong)uVar98 >> 0x38) * 9,
                            CONCAT24(auVar105._12_2_ + (ushort)(byte)((ulong)uVar133 >> 0x30) * 0x18
                                     + (ushort)(byte)((ulong)uVar135 >> 0x30) * 0x1c +
                                     auVar103._12_2_ + (ushort)(byte)((ulong)uVar102 >> 0x30) * 0x11
                                     + auVar108._12_2_ + (ushort)(byte)((ulong)uVar98 >> 0x30) * 9,
                                     CONCAT22(auVar105._10_2_ +
                                              (ushort)(byte)((ulong)uVar133 >> 0x28) * 0x18 +
                                              (ushort)(byte)((ulong)uVar135 >> 0x28) * 0x1c +
                                              auVar103._10_2_ +
                                              (ushort)(byte)((ulong)uVar102 >> 0x28) * 0x11 +
                                              auVar108._10_2_ +
                                              (ushort)(byte)((ulong)uVar98 >> 0x28) * 9,
                                              auVar105._8_2_ +
                                              (ushort)(byte)((ulong)uVar133 >> 0x20) * 0x18 +
                                              (ushort)(byte)((ulong)uVar135 >> 0x20) * 0x1c +
                                              auVar103._8_2_ +
                                              (ushort)(byte)((ulong)uVar102 >> 0x20) * 0x11 +
                                              auVar108._8_2_ +
                                              (ushort)(byte)((ulong)uVar98 >> 0x20) * 9)));
              *(ulong *)psVar60 =
                   CONCAT17((char)((ushort)sVar22 >> 8),
                            CONCAT16((char)sVar22,
                                     CONCAT15((char)((ushort)sVar19 >> 8),
                                              CONCAT14((char)sVar19,
                                                       CONCAT13((char)((ushort)sVar17 >> 8),
                                                                CONCAT12((char)sVar17,
                                                                         auVar105._0_2_ +
                                                                         (ushort)(byte)uVar133 *
                                                                         0x18 + (ushort)(byte)
                                                  uVar135 * 0x1c +
                                                  auVar103._0_2_ + (ushort)(byte)uVar102 * 0x11 +
                                                  auVar108._0_2_ + (short)uVar24 * 9))))));
              uVar68 = uVar68 + 8;
              iVar121 = (int)param_1[2];
              lVar62 = lVar62 + 8;
              psVar60 = psVar60 + 8;
            } while ((long)uVar68 <= (param_1[2] << 0x20) + -0x800000000 >> 0x20);
          }
          if ((long)uVar68 < (long)iVar121) {
            uVar5 = iVar65 + iVar70;
            if (iVar65 + iVar70 <= iVar63 - iVar65) {
              uVar5 = iVar63 - iVar65;
            }
            do {
              psVar64[uVar68] =
                   ((ushort)*(byte *)(lVar1 + uVar68) + (ushort)*(byte *)(lVar75 + uVar68)) * 0x11 +
                   ((ushort)*(byte *)(lVar85 + (int)(iVar81 * (~uVar5 + iVar65)) + uVar68) +
                   (ushort)*(byte *)(lVar67 + uVar68)) * 9 +
                   ((ushort)*(byte *)(lVar76 + uVar68) +
                   (ushort)*(byte *)(lVar85 + iVar81 * iVar15 + uVar68)) * 0x18 +
                   (ushort)*(byte *)(lVar85 + iVar81 * iVar66 + uVar68) * 0x1c;
              uVar68 = uVar68 + 1;
            } while ((long)uVar68 < (long)(int)param_1[2]);
          }
          psVar64[-1] = psVar64[1];
          *(uint *)(psVar64 + -3) = *(uint *)(psVar64 + 2) >> 0x10 | *(uint *)(psVar64 + 2) << 0x10;
          uVar68 = param_1[2];
          *(undefined2 *)
           ((long)psVar64 +
           (-(uVar68 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar68 & 0xffffffff) << 1)) =
               *(undefined2 *)((long)psVar64 + ((long)((uVar68 << 0x20) + -0x200000000) >> 0x1f));
          *(undefined2 *)((long)psVar64 + ((param_1[2] << 0x20) + 0x100000000 >> 0x1f)) =
               *(undefined2 *)((long)psVar64 + ((param_1[2] << 0x20) + -0x300000000 >> 0x1f));
          *(undefined2 *)((long)psVar64 + ((param_1[2] << 0x20) + 0x200000000 >> 0x1f)) =
               *(undefined2 *)((long)psVar64 + ((param_1[2] << 0x20) + -0x400000000 >> 0x1f));
          lVar79 = param_1[2];
          if ((lVar79 << 0x20) + -0x800000000 < 0) {
            lVar67 = 0;
          }
          else {
            lVar67 = 0;
            psVar60 = psVar64;
            do {
              Hint_Prefetch(psVar60 + 0xa0,0,0,0);
              uVar102 = *(undefined8 *)(psVar60 + 1);
              uVar98 = *(undefined8 *)(psVar60 + -3);
              uVar135 = *(undefined8 *)(psVar60 + 5);
              uVar133 = *(undefined8 *)(psVar60 + 1);
              uVar137 = *(undefined8 *)(psVar60 + 4);
              uVar136 = *(undefined8 *)psVar60;
              uVar14 = psVar60[3] + (short)uVar98;
              uVar18 = psVar60[4] + (short)((ulong)uVar98 >> 0x10);
              uVar20 = psVar60[5] + (short)((ulong)uVar98 >> 0x20);
              uVar23 = psVar60[6] + (short)((ulong)uVar98 >> 0x30);
              auVar134._0_8_ =
                   CONCAT26((short)((ulong)uVar133 >> 0x30) + psVar60[2],
                            CONCAT24((short)((ulong)uVar133 >> 0x20) + psVar60[1],
                                     CONCAT22((short)((ulong)uVar133 >> 0x10) + *psVar60,
                                              (short)uVar133 + psVar60[-1])));
              auVar134._8_2_ = (short)uVar135 + psVar60[3];
              auVar134._10_2_ = (short)((ulong)uVar135 >> 0x10) + psVar60[4];
              auVar108 = NEON_umull(auVar134._0_8_,0x18001800180018,2);
              auVar119._0_8_ =
                   CONCAT44(auVar108._4_4_ + (uint)(ushort)((ulong)uVar136 >> 0x10) * 0x1c +
                            (uint)(ushort)(psVar60[3] + psVar60[-1]) * 0x11 + (uint)uVar18 * 9,
                            auVar108._0_4_ + ((uint)uVar136 & 0xffff) * 0x1c +
                            (uint)(ushort)(psVar60[2] + psVar60[-2]) * 0x11 + (uint)uVar14 * 9);
              auVar119._8_4_ =
                   auVar108._8_4_ + (uint)(ushort)((ulong)uVar136 >> 0x20) * 0x1c +
                   (uint)(ushort)(psVar60[4] + *psVar60) * 0x11 + (uint)uVar20 * 9;
              auVar119._12_4_ =
                   auVar108._12_4_ + (uint)(ushort)((ulong)uVar136 >> 0x30) * 0x1c +
                   (uint)(ushort)(psVar60[5] + psVar60[1]) * 0x11 + (uint)uVar23 * 9;
              uVar133 = NEON_uqshrn(auVar119._0_8_,auVar119,0xe,4);
              auVar110._0_4_ =
                   (auVar134._8_4_ & 0xffff) * 0x18 + ((uint)uVar137 & 0xffff) * 0x1c +
                   ((uint)(CONCAT24(psVar60[7] + psVar60[3],
                                    CONCAT22(psVar60[6] + psVar60[2],psVar60[5] + psVar60[1])) >>
                          0x10) & 0xffff) * 0x11 + (uint)(ushort)(psVar60[7] + (short)uVar102) * 9;
              auVar110._4_4_ =
                   (uint)auVar134._10_2_ * 0x18 + (uint)(ushort)((ulong)uVar137 >> 0x10) * 0x1c +
                   (uint)(ushort)(psVar60[7] + psVar60[3]) * 0x11 +
                   (uint)(ushort)(psVar60[8] + (short)((ulong)uVar102 >> 0x10)) * 9;
              auVar110._8_4_ =
                   (uint)(ushort)((short)((ulong)uVar135 >> 0x20) + psVar60[5]) * 0x18 +
                   (uint)(ushort)((ulong)uVar137 >> 0x20) * 0x1c +
                   (uint)(ushort)(psVar60[8] + psVar60[4]) * 0x11 +
                   (uint)(ushort)(psVar60[9] + (short)((ulong)uVar102 >> 0x20)) * 9;
              auVar110._12_4_ =
                   (uint)(ushort)((short)((ulong)uVar135 >> 0x30) + psVar60[6]) * 0x18 +
                   (uint)(ushort)((ulong)uVar137 >> 0x30) * 0x1c +
                   (uint)(ushort)(psVar60[9] + psVar60[5]) * 0x11 +
                   (uint)(ushort)(psVar60[10] + (short)((ulong)uVar102 >> 0x30)) * 9;
              uVar98 = NEON_uqshrn(CONCAT17((char)(uVar23 >> 8),
                                            CONCAT16((char)uVar23,
                                                     CONCAT15((char)(uVar20 >> 8),
                                                              CONCAT14((char)uVar20,
                                                                       CONCAT13((char)(uVar18 >> 8),
                                                                                CONCAT12((char)
                                                  uVar18,uVar14)))))),auVar110,0xe,4);
              *(ulong *)((long)plStack_198 + lVar67 + (long)iStack_188 * (long)iVar66) =
                   CONCAT17((char)((ulong)uVar98 >> 0x30),
                            CONCAT16((char)((ulong)uVar98 >> 0x20),
                                     CONCAT15((char)((ulong)uVar98 >> 0x10),
                                              CONCAT14((char)uVar98,
                                                       CONCAT13((char)((ulong)uVar133 >> 0x30),
                                                                CONCAT12((char)((ulong)uVar133 >>
                                                                               0x20),
                                                                         CONCAT11((char)((ulong)
                                                  uVar133 >> 0x10),(char)uVar133)))))));
              lVar67 = lVar67 + 8;
              lVar79 = param_1[2];
              psVar60 = psVar60 + 8;
            } while (lVar67 <= (lVar79 << 0x20) + -0x800000000 >> 0x20);
          }
          if (lVar67 < (int)lVar79) {
            puVar59 = (ushort *)(psVar64 + lVar67);
            do {
              *(char *)((long)plStack_198 + lVar67 + (long)iStack_188 * (long)iVar66) =
                   (char)(((uint)puVar59[3] + (uint)puVar59[-3]) * 9 +
                          ((uint)puVar59[2] + (uint)puVar59[-2]) * 0x11 +
                          ((uint)puVar59[1] + (uint)puVar59[-1]) * 0x18 + (uint)*puVar59 * 0x1c +
                          0x2000 >> 0xe);
              lVar67 = lVar67 + 1;
              lVar79 = param_1[2];
              puVar59 = puVar59 + 1;
            } while (lVar67 < (int)lVar79);
          }
          iVar66 = iVar66 + 1;
          iVar70 = iVar70 + -1;
          iVar63 = iVar63 + 1;
          iVar72 = iVar72 + 1;
          iVar61 = iVar61 + -1;
        } while (iVar66 < (int)((ulong)lVar79 >> 0x20));
      }
    }
    __ZdaPv();
    lVar79 = *param_2;
    lVar67 = param_2[1];
    iVar66 = (int)((ulong)(lVar67 - lVar79) >> 4) * -0x45d1745d;
    if (((2 < *(int *)(extraout_x8 + 2)) || (*(int *)(extraout_x8 + 4) != iVar66)) ||
       ((*(int *)(extraout_x8 + 6) != 0x20 ||
        (((*extraout_x8 & 0xfff) != 0 || (*(long *)(extraout_x8 + 8) == 0)))))) {
      uStack_170 = CONCAT44(0x20,iVar66);
      FUN_109a83fd0(extraout_x8,2,&uStack_170,0);
      lVar79 = *param_2;
      lVar67 = param_2[1];
    }
    if (lVar67 != lVar79) {
      uVar68 = 0;
      uVar98 = 0x41f00000;
      fVar107 = ((float)param_3 + -1.0) / 30.0;
      do {
        fVar89 = (float)uVar98;
        pdVar83 = (double *)(lVar79 + uVar68 * 0xb0);
        fVar88 = (float)(pdVar83[6] * 0.01745329238474369);
        ___sincosf_stret();
        lVar79 = 0;
        fVar89 = fVar107 * fVar89;
        fVar88 = fVar107 * fVar88;
        lVar67 = (long)(int)(long)(double)(long)*pdVar83 +
                 (long)(iStack_188 * (int)(long)(double)(long)pdVar83[1]);
        pcVar57 = &UNK_10dfc9770;
        auVar132._8_4_ = 0x7fffffff;
        auVar132._0_8_ = 0x7fffffff7fffffff;
        auVar132._12_4_ = 0x7fffffff;
        do {
          cVar90 = *pcVar57;
          pcVar26 = pcVar57 + 1;
          pcVar27 = pcVar57 + 2;
          pcVar28 = pcVar57 + 3;
          pcVar29 = pcVar57 + 4;
          pcVar30 = pcVar57 + 5;
          pcVar31 = pcVar57 + 6;
          pcVar32 = pcVar57 + 7;
          pcVar33 = pcVar57 + 8;
          pcVar34 = pcVar57 + 9;
          pcVar35 = pcVar57 + 10;
          pcVar36 = pcVar57 + 0xb;
          pcVar37 = pcVar57 + 0xc;
          pcVar38 = pcVar57 + 0xd;
          pcVar39 = pcVar57 + 0xe;
          pcVar40 = pcVar57 + 0xf;
          pcVar41 = pcVar57 + 0x10;
          pcVar42 = pcVar57 + 0x11;
          pcVar43 = pcVar57 + 0x12;
          pcVar44 = pcVar57 + 0x13;
          pcVar45 = pcVar57 + 0x14;
          pcVar46 = pcVar57 + 0x15;
          pcVar47 = pcVar57 + 0x16;
          pcVar48 = pcVar57 + 0x17;
          pcVar49 = pcVar57 + 0x18;
          pcVar50 = pcVar57 + 0x19;
          pcVar51 = pcVar57 + 0x1a;
          pcVar52 = pcVar57 + 0x1b;
          pcVar53 = pcVar57 + 0x1c;
          pcVar54 = pcVar57 + 0x1d;
          pcVar55 = pcVar57 + 0x1e;
          pcVar56 = pcVar57 + 0x1f;
          pcVar57 = pcVar57 + 0x20;
          auVar104._0_4_ = (int)(short)cVar90;
          auVar104._4_4_ = (int)(short)*pcVar27;
          auVar104._8_4_ = (int)(short)*pcVar29;
          auVar104._12_4_ = (int)(short)*pcVar31;
          auVar105 = NEON_scvtf(auVar104,4);
          auVar109._0_4_ = (int)(short)*pcVar26;
          auVar109._4_4_ = (int)(short)*pcVar28;
          auVar109._8_4_ = (int)(short)*pcVar30;
          auVar109._12_4_ = (int)(short)*pcVar32;
          auVar110 = NEON_scvtf(auVar109,4);
          auVar95._0_4_ = (int)(short)*pcVar33;
          auVar95._4_4_ = (int)(short)*pcVar35;
          auVar95._8_4_ = (int)(short)*pcVar37;
          auVar95._12_4_ = (int)(short)*pcVar39;
          auVar100._0_4_ = (int)(short)*pcVar34;
          auVar100._4_4_ = (int)(short)*pcVar36;
          auVar100._8_4_ = (int)(short)*pcVar38;
          auVar100._12_4_ = (int)(short)*pcVar40;
          auVar108 = NEON_scvtf(auVar95,4);
          auVar103 = NEON_scvtf(auVar100,4);
          auVar111._0_4_ = auVar105._0_4_ * fVar89 - auVar110._0_4_ * fVar88;
          auVar111._4_4_ = auVar105._4_4_ * fVar89 - auVar110._4_4_ * fVar88;
          auVar111._8_4_ = auVar105._8_4_ * fVar89 - auVar110._8_4_ * fVar88;
          auVar111._12_4_ = auVar105._12_4_ * fVar89 - auVar110._12_4_ * fVar88;
          auVar106._0_4_ = auVar105._0_4_ * fVar88 + auVar110._0_4_ * fVar89;
          auVar106._4_4_ = auVar105._4_4_ * fVar88 + auVar110._4_4_ * fVar89;
          auVar106._8_4_ = auVar105._8_4_ * fVar88 + auVar110._8_4_ * fVar89;
          auVar106._12_4_ = auVar105._12_4_ * fVar88 + auVar110._12_4_ * fVar89;
          uVar98 = auVar132._8_8_;
          auVar112._8_8_ = uVar98;
          auVar112._0_8_ = 0x7fffffff7fffffff;
          auVar6._10_2_ = 0x3f00;
          auVar6._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar6._12_2_ = 0;
          auVar6._14_2_ = 0x3f00;
          auVar105 = auVar111 ^ (auVar111 ^ auVar6) & auVar112;
          auVar127._8_8_ = uVar98;
          auVar127._0_8_ = 0x7fffffff7fffffff;
          auVar7._10_2_ = 0x3f00;
          auVar7._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar7._12_2_ = 0;
          auVar7._14_2_ = 0x3f00;
          auVar128 = auVar106 ^ (auVar106 ^ auVar7) & auVar127;
          auVar101._0_4_ = auVar108._0_4_ * fVar89 - auVar103._0_4_ * fVar88;
          auVar101._4_4_ = auVar108._4_4_ * fVar89 - auVar103._4_4_ * fVar88;
          auVar101._8_4_ = auVar108._8_4_ * fVar89 - auVar103._8_4_ * fVar88;
          auVar101._12_4_ = auVar108._12_4_ * fVar89 - auVar103._12_4_ * fVar88;
          auVar96._0_4_ = auVar108._0_4_ * fVar88 + auVar103._0_4_ * fVar89;
          auVar96._4_4_ = auVar108._4_4_ * fVar88 + auVar103._4_4_ * fVar89;
          auVar96._8_4_ = auVar108._8_4_ * fVar88 + auVar103._8_4_ * fVar89;
          auVar96._12_4_ = auVar108._12_4_ * fVar88 + auVar103._12_4_ * fVar89;
          auVar118._8_8_ = uVar98;
          auVar118._0_8_ = 0x7fffffff7fffffff;
          auVar8._10_2_ = 0x3f00;
          auVar8._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar8._12_2_ = 0;
          auVar8._14_2_ = 0x3f00;
          auVar119 = auVar101 ^ (auVar101 ^ auVar8) & auVar118;
          auVar93._0_4_ = (int)(short)*pcVar41;
          auVar93._4_4_ = (int)(short)*pcVar43;
          auVar93._8_4_ = (int)(short)*pcVar45;
          auVar93._12_4_ = (int)(short)*pcVar47;
          auVar103 = NEON_scvtf(auVar93,4);
          auVar113._0_4_ = (int)(short)*pcVar42;
          auVar113._4_4_ = (int)(short)*pcVar44;
          auVar113._8_4_ = (int)(short)*pcVar46;
          auVar113._12_4_ = (int)(short)*pcVar48;
          auVar110 = NEON_scvtf(auVar113,4);
          auVar129._0_4_ = auVar103._0_4_ * fVar89 - auVar110._0_4_ * fVar88;
          auVar129._4_4_ = auVar103._4_4_ * fVar89 - auVar110._4_4_ * fVar88;
          auVar129._8_4_ = auVar103._8_4_ * fVar89 - auVar110._8_4_ * fVar88;
          auVar129._12_4_ = auVar103._12_4_ * fVar89 - auVar110._12_4_ * fVar88;
          auVar130._8_8_ = uVar98;
          auVar130._0_8_ = 0x7fffffff7fffffff;
          auVar9._10_2_ = 0x3f00;
          auVar9._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar9._12_2_ = 0;
          auVar9._14_2_ = 0x3f00;
          auVar131 = auVar96 ^ (auVar96 ^ auVar9) & auVar130;
          auVar123._0_4_ = (int)(short)*pcVar49;
          auVar123._4_4_ = (int)(short)*pcVar51;
          auVar123._8_4_ = (int)(short)*pcVar53;
          auVar123._12_4_ = (int)(short)*pcVar55;
          auVar120 = NEON_scvtf(auVar123,4);
          auVar91._0_4_ = (int)(short)*pcVar50;
          auVar91._4_4_ = (int)(short)*pcVar52;
          auVar91._8_4_ = (int)(short)*pcVar54;
          auVar91._12_4_ = (int)(short)*pcVar56;
          auVar108 = NEON_scvtf(auVar91,4);
          auVar94._0_4_ = auVar103._0_4_ * fVar88 + auVar110._0_4_ * fVar89;
          auVar94._4_4_ = auVar103._4_4_ * fVar88 + auVar110._4_4_ * fVar89;
          auVar94._8_4_ = auVar103._8_4_ * fVar88 + auVar110._8_4_ * fVar89;
          auVar94._12_4_ = auVar103._12_4_ * fVar88 + auVar110._12_4_ * fVar89;
          auVar114._8_8_ = uVar98;
          auVar114._0_8_ = 0x7fffffff7fffffff;
          auVar10._10_2_ = 0x3f00;
          auVar10._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar10._12_2_ = 0;
          auVar10._14_2_ = 0x3f00;
          auVar103 = auVar129 ^ (auVar129 ^ auVar10) & auVar114;
          auVar124._8_8_ = uVar98;
          auVar124._0_8_ = 0x7fffffff7fffffff;
          auVar11._10_2_ = 0x3f00;
          auVar11._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar11._12_2_ = 0;
          auVar11._14_2_ = 0x3f00;
          auVar125 = auVar94 ^ (auVar94 ^ auVar11) & auVar124;
          auVar126._0_4_ = auVar120._0_4_ * fVar89 - auVar108._0_4_ * fVar88;
          auVar126._4_4_ = auVar120._4_4_ * fVar89 - auVar108._4_4_ * fVar88;
          auVar126._8_4_ = auVar120._8_4_ * fVar89 - auVar108._8_4_ * fVar88;
          auVar126._12_4_ = auVar120._12_4_ * fVar89 - auVar108._12_4_ * fVar88;
          auVar92._0_4_ = auVar120._0_4_ * fVar88 + auVar108._0_4_ * fVar89;
          auVar92._4_4_ = auVar120._4_4_ * fVar88 + auVar108._4_4_ * fVar89;
          auVar92._8_4_ = auVar120._8_4_ * fVar88 + auVar108._8_4_ * fVar89;
          auVar92._12_4_ = auVar120._12_4_ * fVar88 + auVar108._12_4_ * fVar89;
          auVar97._8_8_ = uVar98;
          auVar97._0_8_ = 0x7fffffff7fffffff;
          auVar12._10_2_ = 0x3f00;
          auVar12._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar12._12_2_ = 0;
          auVar12._14_2_ = 0x3f00;
          auVar108 = auVar126 ^ (auVar126 ^ auVar12) & auVar97;
          auVar115._8_8_ = uVar98;
          auVar115._0_8_ = 0x7fffffff7fffffff;
          auVar13._10_2_ = 0x3f00;
          auVar13._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar13._12_2_ = 0;
          auVar13._14_2_ = 0x3f00;
          auVar110 = auVar92 ^ (auVar92 ^ auVar13) & auVar115;
          bVar87 = 2;
          if (*(byte *)((long)plStack_198 +
                       ((int)(auVar111._12_4_ + auVar105._12_4_) +
                       (int)(auVar106._12_4_ + auVar128._12_4_) * iStack_188) + lVar67) <=
              *(byte *)((long)plStack_198 +
                       ((int)(auVar111._8_4_ + auVar105._8_4_) +
                       (int)(auVar106._8_4_ + auVar128._8_4_) * iStack_188) + lVar67)) {
            bVar87 = 0;
          }
          if (*(byte *)((long)plStack_198 +
                       ((int)(auVar111._0_4_ + auVar105._0_4_) +
                       (int)(auVar106._0_4_ + auVar128._0_4_) * iStack_188) + lVar67) <
              *(byte *)((long)plStack_198 +
                       ((int)(auVar111._4_4_ + auVar105._4_4_) +
                       (int)(auVar106._4_4_ + auVar128._4_4_) * iStack_188) + lVar67)) {
            bVar87 = bVar87 + 1;
          }
          bVar80 = 4;
          if (*(byte *)((long)plStack_198 +
                       ((int)(auVar101._4_4_ + auVar119._4_4_) +
                       (int)(auVar96._4_4_ + auVar131._4_4_) * iStack_188) + lVar67) <=
              *(byte *)((long)plStack_198 +
                       ((int)(auVar101._0_4_ + auVar119._0_4_) +
                       (int)(auVar96._0_4_ + auVar131._0_4_) * iStack_188) + lVar67)) {
            bVar80 = 0;
          }
          bVar77 = 8;
          if (*(byte *)((long)plStack_198 +
                       ((int)(auVar101._12_4_ + auVar119._12_4_) +
                       (int)(auVar96._12_4_ + auVar131._12_4_) * iStack_188) + lVar67) <=
              *(byte *)((long)plStack_198 +
                       ((int)(auVar101._8_4_ + auVar119._8_4_) +
                       (int)(auVar96._8_4_ + auVar131._8_4_) * iStack_188) + lVar67)) {
            bVar77 = 0;
          }
          bVar73 = 0x10;
          if (*(byte *)((long)plStack_198 +
                       ((int)(auVar129._4_4_ + auVar103._4_4_) +
                       (int)(auVar94._4_4_ + auVar125._4_4_) * iStack_188) + lVar67) <=
              *(byte *)((long)plStack_198 +
                       ((int)(auVar129._0_4_ + auVar103._0_4_) +
                       (int)(auVar94._0_4_ + auVar125._0_4_) * iStack_188) + lVar67)) {
            bVar73 = 0;
          }
          bVar84 = 0x20;
          if (*(byte *)((long)plStack_198 +
                       ((int)(auVar129._12_4_ + auVar103._12_4_) +
                       (int)(auVar94._12_4_ + auVar125._12_4_) * iStack_188) + lVar67) <=
              *(byte *)((long)plStack_198 +
                       ((int)(auVar129._8_4_ + auVar103._8_4_) +
                       (int)(auVar94._8_4_ + auVar125._8_4_) * iStack_188) + lVar67)) {
            bVar84 = 0;
          }
          bVar86 = 0x40;
          if (*(byte *)((long)plStack_198 +
                       ((int)(auVar126._4_4_ + auVar108._4_4_) +
                       (int)(auVar92._4_4_ + auVar110._4_4_) * iStack_188) + lVar67) <=
              *(byte *)((long)plStack_198 +
                       ((int)(auVar126._0_4_ + auVar108._0_4_) +
                       (int)(auVar92._0_4_ + auVar110._0_4_) * iStack_188) + lVar67)) {
            bVar86 = 0;
          }
          bVar78 = 0x80;
          if (*(byte *)((long)plStack_198 +
                       ((int)(auVar126._12_4_ + auVar108._12_4_) +
                       (int)(auVar92._12_4_ + auVar110._12_4_) * iStack_188) + lVar67) <=
              *(byte *)((long)plStack_198 +
                       ((int)(auVar126._8_4_ + auVar108._8_4_) +
                       (int)(auVar92._8_4_ + auVar110._8_4_) * iStack_188) + lVar67)) {
            bVar78 = 0;
          }
          *(byte *)((long)&uStack_170 + lVar79) =
               bVar87 | bVar80 | bVar77 | bVar73 | bVar84 | bVar86 | bVar78;
          lVar79 = lVar79 + 1;
        } while (lVar79 != 0x20);
        uStack_108 = uStack_168;
        uStack_110 = uStack_170;
        uStack_f8 = uStack_158;
        uStack_100 = uStack_160;
        uVar98 = uStack_160;
        FUN_10940e164(&uStack_170,&uStack_110);
        iStack_178 = (int)uVar68;
        iStack_174 = iStack_178 + 1;
        uStack_180 = 0x7fffffff80000000;
        FUN_109a84930(auStack_218,extraout_x8,&iStack_178,&uStack_180);
        puStack_1b0 = auStack_218;
        auStack_1b8[0] = 0xc2010000;
        uStack_1a8 = 0;
        FUN_109a479a0(&uStack_170,auStack_1b8);
        if (lStack_1e0 != 0) {
          piVar2 = (int *)(lStack_1e0 + 0x14);
          do {
            iVar66 = *piVar2;
            cVar90 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar66 + -1;
              cVar90 = ExclusiveMonitorsStatus();
            }
          } while (cVar90 != '\0');
          if (iVar66 + -1 == 0) {
            func_0x000109a848d4(auStack_218);
          }
        }
        lStack_1e0 = 0;
        uStack_200 = 0;
        uStack_208 = 0;
        uStack_1f0 = 0;
        uStack_1f8 = 0;
        if (0 < iStack_214) {
          lVar79 = 0;
          do {
            *(undefined4 *)(lStack_1d8 + lVar79 * 4) = 0;
            lVar79 = lVar79 + 1;
          } while (lVar79 < iStack_214);
        }
        if (puStack_1d0 != auStack_1c8 && puStack_1d0 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_1d0 + -8));
        }
        if (lStack_138 != 0) {
          piVar2 = (int *)(lStack_138 + 0x14);
          do {
            iVar66 = *piVar2;
            cVar90 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar66 + -1;
              cVar90 = ExclusiveMonitorsStatus();
            }
          } while (cVar90 != '\0');
          if (iVar66 + -1 == 0) {
            func_0x000109a848d4(&uStack_170);
          }
        }
        lStack_138 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        if (0 < uStack_170._4_4_) {
          lVar79 = 0;
          do {
            *(undefined4 *)(lStack_130 + lVar79 * 4) = 0;
            lVar79 = lVar79 + 1;
          } while (lVar79 < uStack_170._4_4_);
        }
        if (puStack_128 != auStack_120 && puStack_128 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_128 + -8));
        }
        uVar68 = uVar68 + 1;
        lVar79 = *param_2;
      } while (uVar68 < (ulong)((param_2[1] - lVar79 >> 4) * 0x2e8ba2e8ba2e8ba3));
    }
    ppuStack_1a0 = &PTR_FUN_110af4c80;
    param_1 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10940e0e8:
  FUN_10938ce40(&UNK_10f56ccd6);
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x10940e0f8);
  (*pcVar25)();
}



/* Entry: 10940d074; end: 10940e163;  */

void FUN_10940d074(ushort *param_1,long param_2,long *param_3,int param_4)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ushort uVar14;
  int iVar15;
  undefined4 uVar16;
  short sVar17;
  ushort uVar18;
  short sVar19;
  ushort uVar20;
  undefined4 uVar21;
  short sVar22;
  ushort uVar23;
  uint3 uVar24;
  code *pcVar25;
  char *pcVar26;
  undefined1 (*pauVar58) [16];
  ushort *puVar59;
  short *psVar60;
  int iVar61;
  long lVar62;
  int iVar63;
  short *psVar64;
  int iVar65;
  int iVar66;
  long lVar67;
  undefined1 (*pauVar68) [16];
  int iVar69;
  ulong uVar70;
  int iVar71;
  byte bVar72;
  long lVar73;
  long lVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  int iVar78;
  int iVar79;
  long lVar80;
  double *pdVar81;
  byte bVar82;
  long lVar83;
  byte bVar84;
  byte bVar85;
  float fVar86;
  float fVar87;
  char cVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 uVar96;
  undefined1 auVar97 [12];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  int iVar114;
  int iVar119;
  undefined1 auVar115 [12];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar120 [12];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined8 uVar131;
  undefined1 auVar132 [12];
  undefined8 uVar133;
  undefined8 uVar134;
  undefined8 uVar135;
  undefined1 auStack_1b8 [4];
  int iStack_1b4;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 auStack_168 [16];
  undefined4 auStack_158 [2];
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  long lStack_130;
  int iStack_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [16];
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  char *pcVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  char *pcVar41;
  char *pcVar42;
  char *pcVar43;
  char *pcVar44;
  char *pcVar45;
  char *pcVar46;
  char *pcVar47;
  char *pcVar48;
  char *pcVar49;
  char *pcVar50;
  char *pcVar51;
  char *pcVar52;
  char *pcVar53;
  char *pcVar54;
  char *pcVar55;
  char *pcVar56;
  char *pcVar57;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0] = 0;
  param_1[1] = 0x42ff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar59 = param_1 + 0x28;
  puVar59[0] = 0;
  puVar59[1] = 0;
  puVar59[2] = 0;
  puVar59[3] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(ushort **)(param_1 + 0x20) = param_1 + 4;
  *(ushort **)(param_1 + 0x24) = puVar59;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  uVar70 = *(ulong *)(param_2 + 0x10);
  if (((uVar70 >> 0x20 != 0) && ((uVar70 & 0xffffffff) != 0)) && (*param_3 != param_3[1])) {
    lStack_138 = 0;
    lStack_130 = 0;
    iStack_128 = 0;
    ppuStack_140 = &PTR_FUN_110af4c80;
    uStack_110 = uVar70;
    func_0x00010938e870(&ppuStack_140,&uStack_110);
    lVar80 = lStack_130;
    lVar67 = *(long *)(param_2 + 0x10);
    iVar79 = (int)lStack_130;
    iVar66 = (int)((ulong)lStack_130 >> 0x20);
    if (param_4 == 0x17) {
      if (lStack_130 != lVar67) goto LAB_10940e0e8;
      lVar73 = (lStack_130 << 0x20) + 0x400000000;
      lVar67 = (lVar73 >> 0x1f) + 0x20;
      if (lVar73 < -0x1000000000) {
        lVar67 = -1;
      }
      __Znam();
      if (0 < iVar66) {
        iVar66 = 0;
        psVar64 = (short *)(lVar67 + 0x23U & 0xffffffffffffffe0);
        iVar69 = -3;
        iVar63 = 3;
        iVar61 = -2;
        iVar71 = 2;
        do {
          iVar78 = (int)lVar80;
          lVar74 = *(long *)(param_2 + 8);
          iVar15 = *(int *)(param_2 + 0x18);
          iVar114 = MP_INT_ABS(iVar66 + -2);
          iVar119 = MP_INT_ABS(iVar66 + -1);
          lVar67 = lVar74 + iVar15 * iVar114;
          lVar73 = lVar74 + iVar15 * iVar119;
          iVar114 = (int)((ulong)lVar80 >> 0x20);
          if ((lVar80 << 0x20) + -0x800000000 < 0) {
            uVar70 = 0;
          }
          else {
            uVar70 = 0;
            iVar119 = iVar114 + iVar69;
            if (iVar114 + iVar69 <= iVar63 - iVar114) {
              iVar119 = iVar63 - iVar114;
            }
            iVar65 = iVar114 + iVar61;
            if (iVar114 + iVar61 <= iVar71 - iVar114) {
              iVar65 = iVar71 - iVar114;
            }
            lVar80 = lVar74 + iVar15 * iVar66;
            lVar83 = -2;
            psVar60 = psVar64;
            do {
              auVar106._8_8_ = 0;
              auVar106._0_8_ = uVar70;
              Hint_Prefetch(lVar80 + 0x140 +
                            (long)iVar79 *
                            (lVar83 - ((SUB168(auVar106 * ZEXT816(0xcccccccccccccccd),8) &
                                       0xfffffffffffffffc) + uVar70 / 5)) + uVar70,0,0,0);
              uVar96 = *(undefined8 *)(lVar67 + uVar70);
              uVar100 = *(undefined8 *)(lVar73 + uVar70);
              uVar131 = *(undefined8 *)(lVar80 + uVar70);
              auVar101 = NEON_umull(*(undefined8 *)
                                     (lVar74 + iVar15 * ((iVar114 + -1) - iVar65) + uVar70),
                                    0x1f1f1f1f1f1f1f1f,1);
              auVar106 = NEON_umull(*(undefined8 *)
                                     (lVar74 + iVar15 * ((iVar114 + -1) - iVar119) + uVar70),
                                    0x909090909090909,1);
              psVar60[4] = auVar101._8_2_ + (ushort)(byte)((ulong)uVar100 >> 0x20) * 0x1f +
                           (ushort)(byte)((ulong)uVar131 >> 0x20) * 0x30 +
                           auVar106._8_2_ + (ushort)(byte)((ulong)uVar96 >> 0x20) * 9;
              psVar60[5] = auVar101._10_2_ + (ushort)(byte)((ulong)uVar100 >> 0x28) * 0x1f +
                           (ushort)(byte)((ulong)uVar131 >> 0x28) * 0x30 +
                           auVar106._10_2_ + (ushort)(byte)((ulong)uVar96 >> 0x28) * 9;
              psVar60[6] = auVar101._12_2_ + (ushort)(byte)((ulong)uVar100 >> 0x30) * 0x1f +
                           (ushort)(byte)((ulong)uVar131 >> 0x30) * 0x30 +
                           auVar106._12_2_ + (ushort)(byte)((ulong)uVar96 >> 0x30) * 9;
              psVar60[7] = auVar101._14_2_ + (ushort)(byte)((ulong)uVar100 >> 0x38) * 0x1f +
                           (ushort)(byte)((ulong)uVar131 >> 0x38) * 0x30 +
                           auVar106._14_2_ + (ushort)(byte)((ulong)uVar96 >> 0x38) * 9;
              *psVar60 = auVar101._0_2_ + (ushort)(byte)uVar100 * 0x1f +
                         (ushort)(byte)uVar131 * 0x30 + auVar106._0_2_ + (ushort)(byte)uVar96 * 9;
              psVar60[1] = auVar101._2_2_ + (ushort)(byte)((ulong)uVar100 >> 8) * 0x1f +
                           (ushort)(byte)((ulong)uVar131 >> 8) * 0x30 +
                           auVar106._2_2_ + (ushort)(byte)((ulong)uVar96 >> 8) * 9;
              psVar60[2] = auVar101._4_2_ + (ushort)(byte)((ulong)uVar100 >> 0x10) * 0x1f +
                           (ushort)(byte)((ulong)uVar131 >> 0x10) * 0x30 +
                           auVar106._4_2_ + (ushort)(byte)((ulong)uVar96 >> 0x10) * 9;
              psVar60[3] = auVar101._6_2_ + (ushort)(byte)((ulong)uVar100 >> 0x18) * 0x1f +
                           (ushort)(byte)((ulong)uVar131 >> 0x18) * 0x30 +
                           auVar106._6_2_ + (ushort)(byte)((ulong)uVar96 >> 0x18) * 9;
              uVar70 = uVar70 + 8;
              iVar78 = (int)*(long *)(param_2 + 0x10);
              lVar83 = lVar83 + 8;
              psVar60 = psVar60 + 8;
            } while ((long)uVar70 <= (*(long *)(param_2 + 0x10) << 0x20) + -0x800000000 >> 0x20);
          }
          if ((long)uVar70 < (long)iVar78) {
            iVar78 = iVar114 + iVar61;
            if (iVar114 + iVar61 <= iVar71 - iVar114) {
              iVar78 = iVar71 - iVar114;
            }
            iVar119 = iVar114 + iVar69;
            if (iVar114 + iVar69 <= iVar63 - iVar114) {
              iVar119 = iVar63 - iVar114;
            }
            do {
              psVar64[uVar70] =
                   ((ushort)*(byte *)(lVar74 + iVar15 * ((iVar114 + -1) - iVar119) + uVar70) +
                   (ushort)*(byte *)(lVar67 + uVar70)) * 9 +
                   ((ushort)*(byte *)(lVar74 + iVar15 * ((iVar114 + -1) - iVar78) + uVar70) +
                   (ushort)*(byte *)(lVar73 + uVar70)) * 0x1f +
                   (ushort)*(byte *)(lVar74 + iVar15 * iVar66 + uVar70) * 0x30;
              uVar70 = uVar70 + 1;
            } while ((long)uVar70 < (long)*(int *)(param_2 + 0x10));
          }
          *(uint *)(psVar64 + -2) = *(uint *)(psVar64 + 1) >> 0x10 | *(uint *)(psVar64 + 1) << 0x10;
          uVar70 = *(ulong *)(param_2 + 0x10);
          *(undefined2 *)
           ((long)psVar64 +
           (-(uVar70 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar70 & 0xffffffff) << 1)) =
               *(undefined2 *)((long)psVar64 + ((long)((uVar70 << 0x20) + -0x200000000) >> 0x1f));
          *(undefined2 *)
           ((long)psVar64 + ((*(long *)(param_2 + 0x10) << 0x20) + 0x100000000 >> 0x1f)) =
               *(undefined2 *)
                ((long)psVar64 + ((*(long *)(param_2 + 0x10) << 0x20) + -0x300000000 >> 0x1f));
          lVar80 = *(long *)(param_2 + 0x10);
          if ((lVar80 << 0x20) + -0x800000000 < 0) {
            lVar67 = 0;
          }
          else {
            lVar67 = 0;
            psVar60 = psVar64;
            do {
              Hint_Prefetch(psVar60 + 0xa0,0,0,0);
              uVar100 = *(undefined8 *)(psVar60 + 4);
              uVar96 = *(undefined8 *)psVar60;
              auVar115._0_8_ =
                   CONCAT26(psVar60[5] + psVar60[1],
                            CONCAT24(psVar60[4] + *psVar60,
                                     CONCAT22(psVar60[3] + psVar60[-1],psVar60[2] + psVar60[-2])));
              auVar115._8_2_ = psVar60[6] + psVar60[2];
              auVar115._10_2_ = psVar60[7] + psVar60[3];
              auVar120._0_8_ =
                   CONCAT26(psVar60[4] + psVar60[2],
                            CONCAT24(psVar60[3] + psVar60[1],
                                     CONCAT22(psVar60[2] + *psVar60,psVar60[1] + psVar60[-1])));
              auVar120._8_2_ = psVar60[5] + psVar60[3];
              auVar120._10_2_ = psVar60[6] + psVar60[4];
              auVar106 = NEON_umull(auVar120._0_8_,0x1f001f001f001f,2);
              auVar103._0_8_ =
                   CONCAT44(auVar106._4_4_ + (uint)(ushort)((ulong)uVar96 >> 0x10) * 0x30 +
                            (uint)(ushort)(psVar60[3] + psVar60[-1]) * 9,
                            auVar106._0_4_ + (uint)(ushort)uVar96 * 0x30 +
                            (uint)(ushort)(psVar60[2] + psVar60[-2]) * 9);
              auVar103._8_4_ =
                   auVar106._8_4_ + (uint)(ushort)((ulong)uVar96 >> 0x20) * 0x30 +
                   (uint)(ushort)(psVar60[4] + *psVar60) * 9;
              auVar103._12_4_ =
                   auVar106._12_4_ + (uint)(ushort)((ulong)uVar96 >> 0x30) * 0x30 +
                   (uint)(ushort)(psVar60[5] + psVar60[1]) * 9;
              uVar131 = NEON_uqshrn(auVar103._0_8_,auVar103,0xe,4);
              auVar101._0_4_ =
                   (auVar120._8_4_ & 0xffff) * 0x1f + (uint)(ushort)uVar100 * 0x30 +
                   (auVar115._8_4_ & 0xffff) * 9;
              auVar101._4_4_ =
                   (uint)auVar120._10_2_ * 0x1f + (uint)(ushort)((ulong)uVar100 >> 0x10) * 0x30 +
                   (uint)auVar115._10_2_ * 9;
              auVar101._8_4_ =
                   (uint)(ushort)(psVar60[7] + psVar60[5]) * 0x1f +
                   (uint)(ushort)((ulong)uVar100 >> 0x20) * 0x30 +
                   (uint)(ushort)(psVar60[8] + psVar60[4]) * 9;
              auVar101._12_4_ =
                   (uint)(ushort)(psVar60[8] + psVar60[6]) * 0x1f +
                   (uint)(ushort)((ulong)uVar100 >> 0x30) * 0x30 +
                   (uint)(ushort)(psVar60[9] + psVar60[5]) * 9;
              uVar96 = NEON_uqshrn(auVar115._0_8_,auVar101,0xe,4);
              *(ulong *)(lStack_138 + (long)iStack_128 * (long)iVar66 + lVar67) =
                   CONCAT17((char)((ulong)uVar96 >> 0x30),
                            CONCAT16((char)((ulong)uVar96 >> 0x20),
                                     CONCAT15((char)((ulong)uVar96 >> 0x10),
                                              CONCAT14((char)uVar96,
                                                       CONCAT13((char)((ulong)uVar131 >> 0x30),
                                                                CONCAT12((char)((ulong)uVar131 >>
                                                                               0x20),
                                                                         CONCAT11((char)((ulong)
                                                  uVar131 >> 0x10),(char)uVar131)))))));
              lVar67 = lVar67 + 8;
              lVar80 = *(long *)(param_2 + 0x10);
              psVar60 = psVar60 + 8;
            } while (lVar67 <= (lVar80 << 0x20) + -0x800000000 >> 0x20);
          }
          if (lVar67 < (int)lVar80) {
            puVar59 = (ushort *)(psVar64 + lVar67);
            do {
              *(char *)(lStack_138 + (long)iStack_128 * (long)iVar66 + lVar67) =
                   (char)(((uint)puVar59[2] + (uint)puVar59[-2]) * 9 +
                          ((uint)puVar59[1] + (uint)puVar59[-1]) * 0x1f + (uint)*puVar59 * 0x30 +
                          0x2000 >> 0xe);
              lVar67 = lVar67 + 1;
              lVar80 = *(long *)(param_2 + 0x10);
              puVar59 = puVar59 + 1;
            } while (lVar67 < (int)lVar80);
          }
          iVar66 = iVar66 + 1;
          iVar69 = iVar69 + -1;
          iVar63 = iVar63 + 1;
          iVar61 = iVar61 + -1;
          iVar71 = iVar71 + 1;
        } while (iVar66 < (int)((ulong)lVar80 >> 0x20));
      }
    }
    else if (param_4 == 0xf) {
      if (lStack_130 != lVar67) goto LAB_10940e0e8;
      lVar73 = (lStack_130 << 0x20) + 0x400000000;
      lVar67 = (lVar73 >> 0x1f) + 0x20;
      if (lVar73 < -0x1000000000) {
        lVar67 = -1;
      }
      __Znam();
      if (0 < iVar66) {
        iVar66 = 0;
        pauVar68 = (undefined1 (*) [16])(lVar67 + 0x23U & 0xffffffffffffffe0);
        iVar69 = -2;
        iVar71 = -1;
        iVar61 = 1;
        iVar63 = 2;
        do {
          iVar78 = (int)lVar80;
          iVar15 = iVar71;
          if (iVar71 <= iVar61) {
            iVar15 = iVar61;
          }
          iVar114 = iVar66 + -1;
          if (iVar66 + -1 < 0) {
            iVar114 = 1 - iVar66;
          }
          iVar119 = (int)((ulong)lVar80 >> 0x20);
          uVar5 = (iVar119 - iVar66) - 2;
          if ((int)uVar5 < 0) {
            uVar5 = 2 - (iVar119 - iVar66);
          }
          lVar73 = *(long *)(param_2 + 8);
          iVar65 = *(int *)(param_2 + 0x18);
          lVar67 = lVar73 + iVar65 * iVar66;
          if ((lVar80 << 0x20) + -0x800000000 < 0) {
            uVar70 = 0;
          }
          else {
            uVar70 = 0;
            do {
              puVar3 = (undefined8 *)(lVar67 + uVar70);
              auVar118._8_8_ = 0;
              auVar118._0_8_ = uVar70;
              Hint_Prefetch((long)puVar3 +
                            ((uVar70 - ((SUB168(auVar118 * ZEXT816(0xcccccccccccccccd),8) &
                                        0xfffffffffffffffc) + uVar70 / 5)) + -2) * (long)iVar79 +
                            0x140,0,0,0);
              uVar96 = *(undefined8 *)(lVar73 + iVar65 * iVar114 + uVar70);
              uVar100 = *puVar3;
              auVar106 = NEON_umull(*(undefined8 *)
                                     (lVar73 + (int)((iVar119 + ~uVar5) * iVar65) + uVar70),
                                    0x1f1f1f1f1f1f1f1f,1);
              auVar123._0_8_ =
                   CONCAT26(auVar106._6_2_ + (ushort)(byte)((ulong)uVar96 >> 0x18) * 0x1f +
                            (ushort)(byte)((ulong)uVar100 >> 0x18) * 0x42,
                            CONCAT24(auVar106._4_2_ + (ushort)(byte)((ulong)uVar96 >> 0x10) * 0x1f +
                                     (ushort)(byte)((ulong)uVar100 >> 0x10) * 0x42,
                                     CONCAT22(auVar106._2_2_ +
                                              (ushort)(byte)((ulong)uVar96 >> 8) * 0x1f +
                                              (ushort)(byte)((ulong)uVar100 >> 8) * 0x42,
                                              auVar106._0_2_ + (ushort)(byte)uVar96 * 0x1f +
                                              (ushort)(byte)uVar100 * 0x42)));
              auVar123._8_2_ =
                   auVar106._8_2_ + (ushort)(byte)((ulong)uVar96 >> 0x20) * 0x1f +
                   (ushort)(byte)((ulong)uVar100 >> 0x20) * 0x42;
              auVar123._10_2_ =
                   auVar106._10_2_ + (ushort)(byte)((ulong)uVar96 >> 0x28) * 0x1f +
                   (ushort)(byte)((ulong)uVar100 >> 0x28) * 0x42;
              auVar123._12_2_ =
                   auVar106._12_2_ + (ushort)(byte)((ulong)uVar96 >> 0x30) * 0x1f +
                   (ushort)(byte)((ulong)uVar100 >> 0x30) * 0x42;
              auVar123._14_2_ =
                   auVar106._14_2_ + (ushort)(byte)((ulong)uVar96 >> 0x38) * 0x1f +
                   (ushort)(byte)((ulong)uVar100 >> 0x38) * 0x42;
              *(long *)((long)(*pauVar68 + uVar70 * 2) + 8) = auVar123._8_8_;
              *(undefined8 *)(*pauVar68 + uVar70 * 2) = auVar123._0_8_;
              uVar70 = uVar70 + 8;
              iVar78 = (int)*(long *)(param_2 + 0x10);
            } while ((long)uVar70 <= (*(long *)(param_2 + 0x10) << 0x20) + -0x800000000 >> 0x20);
          }
          if ((long)uVar70 < (long)iVar78) {
            uVar5 = iVar119 + iVar69;
            if (iVar119 + iVar69 <= iVar63 - iVar119) {
              uVar5 = iVar63 - iVar119;
            }
            do {
              *(ushort *)(*pauVar68 + uVar70 * 2) =
                   ((ushort)*(byte *)(lVar73 + (int)(iVar65 * (~uVar5 + iVar119)) + uVar70) +
                   (ushort)*(byte *)(lVar73 + iVar65 * iVar15 + uVar70)) * 0x1f +
                   (ushort)*(byte *)(lVar67 + uVar70) * 0x42;
              uVar70 = uVar70 + 1;
            } while ((long)uVar70 < (long)*(int *)(param_2 + 0x10));
          }
          *(undefined2 *)(pauVar68[-1] + 0xe) = *(undefined2 *)(*pauVar68 + 2);
          uVar70 = *(ulong *)(param_2 + 0x10);
          *(undefined2 *)
           (*pauVar68 + (-(uVar70 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar70 & 0xffffffff) << 1)) =
               *(undefined2 *)(*pauVar68 + ((long)((uVar70 << 0x20) + -0x200000000) >> 0x1f));
          lVar80 = *(long *)(param_2 + 0x10);
          if ((lVar80 << 0x20) + -0x800000000 < 0) {
            lVar67 = 0;
          }
          else {
            lVar67 = 0;
            pauVar58 = pauVar68;
            do {
              Hint_Prefetch(pauVar58 + 0x14,0,0,0);
              auVar106 = *pauVar58;
              auVar97._0_8_ =
                   CONCAT26(*(short *)(*pauVar58 + 8) + *(short *)(*pauVar58 + 4),
                            CONCAT24(*(short *)(*pauVar58 + 6) + *(short *)(*pauVar58 + 2),
                                     CONCAT22(*(short *)(*pauVar58 + 4) + *(short *)*pauVar58,
                                              *(short *)(*pauVar58 + 2) +
                                              *(short *)(pauVar58[-1] + 0xe))));
              auVar97._8_2_ = *(short *)(*pauVar58 + 10) + *(short *)(*pauVar58 + 6);
              auVar97._10_2_ = *(short *)(*pauVar58 + 0xc) + *(short *)(*pauVar58 + 8);
              auVar101 = NEON_umull(auVar97._0_8_,0x1f001f001f001f,2);
              auVar129._0_8_ =
                   CONCAT44(auVar101._4_4_ + (uint)auVar106._2_2_ * 0x42,
                            auVar101._0_4_ + (uint)auVar106._0_2_ * 0x42);
              auVar129._8_4_ = auVar101._8_4_ + (uint)auVar106._4_2_ * 0x42;
              auVar129._12_4_ = auVar101._12_4_ + (uint)auVar106._6_2_ * 0x42;
              uVar100 = NEON_uqshrn(auVar129._0_8_,auVar129,0xe,4);
              auVar126._0_8_ =
                   CONCAT44((uint)auVar97._10_2_ * 0x1f + (uint)auVar106._10_2_ * 0x42,
                            (auVar97._8_4_ & 0xffff) * 0x1f + (auVar106._8_4_ & 0xffff) * 0x42);
              auVar126._8_4_ =
                   (uint)(ushort)(*(short *)(*pauVar58 + 0xe) + *(short *)(*pauVar58 + 10)) * 0x1f +
                   (uint)auVar106._12_2_ * 0x42;
              auVar126._12_4_ =
                   (uint)(ushort)(*(short *)pauVar58[1] + *(short *)(*pauVar58 + 0xc)) * 0x1f +
                   (uint)auVar106._14_2_ * 0x42;
              uVar96 = NEON_uqshrn(auVar126._0_8_,auVar126,0xe,4);
              *(ulong *)(lStack_138 + (long)iStack_128 * (long)iVar66 + lVar67) =
                   CONCAT17((char)((ulong)uVar96 >> 0x30),
                            CONCAT16((char)((ulong)uVar96 >> 0x20),
                                     CONCAT15((char)((ulong)uVar96 >> 0x10),
                                              CONCAT14((char)uVar96,
                                                       CONCAT13((char)((ulong)uVar100 >> 0x30),
                                                                CONCAT12((char)((ulong)uVar100 >>
                                                                               0x20),
                                                                         CONCAT11((char)((ulong)
                                                  uVar100 >> 0x10),(char)uVar100)))))));
              lVar67 = lVar67 + 8;
              lVar80 = *(long *)(param_2 + 0x10);
              pauVar58 = pauVar58 + 1;
            } while (lVar67 <= (lVar80 << 0x20) + -0x800000000 >> 0x20);
          }
          if (lVar67 < (int)lVar80) {
            puVar59 = (ushort *)(*pauVar68 + lVar67 * 2);
            do {
              *(char *)(lStack_138 + (long)iStack_128 * (long)iVar66 + lVar67) =
                   (char)(((uint)puVar59[1] + (uint)puVar59[-1]) * 0x1f + (uint)*puVar59 * 0x42 +
                          0x2000 >> 0xe);
              lVar67 = lVar67 + 1;
              lVar80 = *(long *)(param_2 + 0x10);
              puVar59 = puVar59 + 1;
            } while (lVar67 < (int)lVar80);
          }
          iVar66 = iVar66 + 1;
          iVar69 = iVar69 + -1;
          iVar63 = iVar63 + 1;
          iVar71 = iVar71 + 1;
          iVar61 = iVar61 + -1;
        } while (iVar66 < (int)((ulong)lVar80 >> 0x20));
      }
    }
    else {
      if (lStack_130 != lVar67) goto LAB_10940e0e8;
      lVar73 = (lStack_130 << 0x20) + 0x400000000;
      lVar67 = (lVar73 >> 0x1f) + 0x20;
      if (lVar73 < -0x1000000000) {
        lVar67 = -1;
      }
      __Znam();
      if (0 < iVar66) {
        iVar66 = 0;
        psVar64 = (short *)(lVar67 + 0x23U & 0xffffffffffffffe0);
        iVar69 = -4;
        iVar63 = 4;
        iVar71 = -1;
        iVar61 = 1;
        do {
          iVar119 = (int)lVar80;
          iVar65 = (int)((ulong)lVar80 >> 0x20);
          lVar83 = *(long *)(param_2 + 8);
          iVar78 = *(int *)(param_2 + 0x18);
          iVar15 = MP_INT_ABS(iVar66 + -3);
          iVar114 = MP_INT_ABS(iVar66 + -2);
          lVar67 = lVar83 + iVar78 * iVar15;
          lVar73 = lVar83 + iVar78 * iVar114;
          uVar16 = MP_INT_ABS((iVar65 - iVar66) + -2);
          uVar21 = MP_INT_ABS((iVar65 - iVar66) + -3);
          lVar74 = lVar83 + (iVar65 + CONCAT13(~(byte)((uint)uVar16 >> 0x18),
                                               CONCAT12(~(byte)((uint)uVar16 >> 0x10),
                                                        CONCAT11(~(byte)((uint)uVar16 >> 8),
                                                                 ~(byte)uVar16)))) * iVar78;
          iVar15 = iVar71;
          if (iVar71 <= iVar61) {
            iVar15 = iVar61;
          }
          lVar1 = lVar83 + (iVar65 + CONCAT13(~(byte)((uint)uVar21 >> 0x18),
                                              CONCAT12(~(byte)((uint)uVar21 >> 0x10),
                                                       CONCAT11(~(byte)((uint)uVar21 >> 8),
                                                                ~(byte)uVar21)))) * iVar78;
          if ((lVar80 << 0x20) + -0x800000000 < 0) {
            uVar70 = 0;
          }
          else {
            uVar70 = 0;
            uVar5 = iVar65 + iVar69;
            if (iVar65 + iVar69 <= iVar63 - iVar65) {
              uVar5 = iVar63 - iVar65;
            }
            lVar80 = lVar83 + iVar78 * iVar66;
            lVar62 = -3;
            psVar60 = psVar64;
            do {
              Hint_Prefetch(lVar80 + 0x140 + (long)iVar79 * (lVar62 + (uVar70 / 7) * -7) + uVar70,0,
                            0,0);
              uVar96 = *(undefined8 *)(lVar67 + uVar70);
              uVar100 = *(undefined8 *)(lVar73 + uVar70);
              uVar131 = *(undefined8 *)(lVar83 + iVar78 * iVar15 + uVar70);
              uVar133 = *(undefined8 *)(lVar80 + uVar70);
              auVar103 = NEON_umull(*(undefined8 *)(lVar74 + uVar70),0x1818181818181818,1);
              auVar101 = NEON_umull(*(undefined8 *)(lVar1 + uVar70),0x1111111111111111,1);
              auVar106 = NEON_umull(*(undefined8 *)
                                     (lVar83 + (int)(iVar78 * (~uVar5 + iVar65)) + uVar70),
                                    0x909090909090909,1);
              uVar24 = CONCAT12((char)((ulong)uVar96 >> 8),(short)uVar96) & 0xff00ff;
              sVar17 = auVar103._2_2_ + (ushort)(byte)((ulong)uVar131 >> 8) * 0x18 +
                       (ushort)(byte)((ulong)uVar133 >> 8) * 0x1c +
                       auVar101._2_2_ + (ushort)(byte)((ulong)uVar100 >> 8) * 0x11 +
                       auVar106._2_2_ + (ushort)(byte)(uVar24 >> 0x10) * 9;
              sVar19 = auVar103._4_2_ + (ushort)(byte)((ulong)uVar131 >> 0x10) * 0x18 +
                       (ushort)(byte)((ulong)uVar133 >> 0x10) * 0x1c +
                       auVar101._4_2_ + (ushort)(byte)((ulong)uVar100 >> 0x10) * 0x11 +
                       auVar106._4_2_ + (ushort)(byte)((ulong)uVar96 >> 0x10) * 9;
              sVar22 = auVar103._6_2_ + (ushort)(byte)((ulong)uVar131 >> 0x18) * 0x18 +
                       (ushort)(byte)((ulong)uVar133 >> 0x18) * 0x1c +
                       auVar101._6_2_ + (ushort)(byte)((ulong)uVar100 >> 0x18) * 0x11 +
                       auVar106._6_2_ + (ushort)(byte)((ulong)uVar96 >> 0x18) * 9;
              *(ulong *)(psVar60 + 4) =
                   CONCAT26(auVar103._14_2_ + (ushort)(byte)((ulong)uVar131 >> 0x38) * 0x18 +
                            (ushort)(byte)((ulong)uVar133 >> 0x38) * 0x1c +
                            auVar101._14_2_ + (ushort)(byte)((ulong)uVar100 >> 0x38) * 0x11 +
                            auVar106._14_2_ + (ushort)(byte)((ulong)uVar96 >> 0x38) * 9,
                            CONCAT24(auVar103._12_2_ + (ushort)(byte)((ulong)uVar131 >> 0x30) * 0x18
                                     + (ushort)(byte)((ulong)uVar133 >> 0x30) * 0x1c +
                                     auVar101._12_2_ + (ushort)(byte)((ulong)uVar100 >> 0x30) * 0x11
                                     + auVar106._12_2_ + (ushort)(byte)((ulong)uVar96 >> 0x30) * 9,
                                     CONCAT22(auVar103._10_2_ +
                                              (ushort)(byte)((ulong)uVar131 >> 0x28) * 0x18 +
                                              (ushort)(byte)((ulong)uVar133 >> 0x28) * 0x1c +
                                              auVar101._10_2_ +
                                              (ushort)(byte)((ulong)uVar100 >> 0x28) * 0x11 +
                                              auVar106._10_2_ +
                                              (ushort)(byte)((ulong)uVar96 >> 0x28) * 9,
                                              auVar103._8_2_ +
                                              (ushort)(byte)((ulong)uVar131 >> 0x20) * 0x18 +
                                              (ushort)(byte)((ulong)uVar133 >> 0x20) * 0x1c +
                                              auVar101._8_2_ +
                                              (ushort)(byte)((ulong)uVar100 >> 0x20) * 0x11 +
                                              auVar106._8_2_ +
                                              (ushort)(byte)((ulong)uVar96 >> 0x20) * 9)));
              *(ulong *)psVar60 =
                   CONCAT17((char)((ushort)sVar22 >> 8),
                            CONCAT16((char)sVar22,
                                     CONCAT15((char)((ushort)sVar19 >> 8),
                                              CONCAT14((char)sVar19,
                                                       CONCAT13((char)((ushort)sVar17 >> 8),
                                                                CONCAT12((char)sVar17,
                                                                         auVar103._0_2_ +
                                                                         (ushort)(byte)uVar131 *
                                                                         0x18 + (ushort)(byte)
                                                  uVar133 * 0x1c +
                                                  auVar101._0_2_ + (ushort)(byte)uVar100 * 0x11 +
                                                  auVar106._0_2_ + (short)uVar24 * 9))))));
              uVar70 = uVar70 + 8;
              iVar119 = (int)*(long *)(param_2 + 0x10);
              lVar62 = lVar62 + 8;
              psVar60 = psVar60 + 8;
            } while ((long)uVar70 <= (*(long *)(param_2 + 0x10) << 0x20) + -0x800000000 >> 0x20);
          }
          if ((long)uVar70 < (long)iVar119) {
            uVar5 = iVar65 + iVar69;
            if (iVar65 + iVar69 <= iVar63 - iVar65) {
              uVar5 = iVar63 - iVar65;
            }
            do {
              psVar64[uVar70] =
                   ((ushort)*(byte *)(lVar1 + uVar70) + (ushort)*(byte *)(lVar73 + uVar70)) * 0x11 +
                   ((ushort)*(byte *)(lVar83 + (int)(iVar78 * (~uVar5 + iVar65)) + uVar70) +
                   (ushort)*(byte *)(lVar67 + uVar70)) * 9 +
                   ((ushort)*(byte *)(lVar74 + uVar70) +
                   (ushort)*(byte *)(lVar83 + iVar78 * iVar15 + uVar70)) * 0x18 +
                   (ushort)*(byte *)(lVar83 + iVar78 * iVar66 + uVar70) * 0x1c;
              uVar70 = uVar70 + 1;
            } while ((long)uVar70 < (long)*(int *)(param_2 + 0x10));
          }
          psVar64[-1] = psVar64[1];
          *(uint *)(psVar64 + -3) = *(uint *)(psVar64 + 2) >> 0x10 | *(uint *)(psVar64 + 2) << 0x10;
          uVar70 = *(ulong *)(param_2 + 0x10);
          *(undefined2 *)
           ((long)psVar64 +
           (-(uVar70 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar70 & 0xffffffff) << 1)) =
               *(undefined2 *)((long)psVar64 + ((long)((uVar70 << 0x20) + -0x200000000) >> 0x1f));
          *(undefined2 *)
           ((long)psVar64 + ((*(long *)(param_2 + 0x10) << 0x20) + 0x100000000 >> 0x1f)) =
               *(undefined2 *)
                ((long)psVar64 + ((*(long *)(param_2 + 0x10) << 0x20) + -0x300000000 >> 0x1f));
          *(undefined2 *)
           ((long)psVar64 + ((*(long *)(param_2 + 0x10) << 0x20) + 0x200000000 >> 0x1f)) =
               *(undefined2 *)
                ((long)psVar64 + ((*(long *)(param_2 + 0x10) << 0x20) + -0x400000000 >> 0x1f));
          lVar80 = *(long *)(param_2 + 0x10);
          if ((lVar80 << 0x20) + -0x800000000 < 0) {
            lVar67 = 0;
          }
          else {
            lVar67 = 0;
            psVar60 = psVar64;
            do {
              Hint_Prefetch(psVar60 + 0xa0,0,0,0);
              uVar100 = *(undefined8 *)(psVar60 + 1);
              uVar96 = *(undefined8 *)(psVar60 + -3);
              uVar133 = *(undefined8 *)(psVar60 + 5);
              uVar131 = *(undefined8 *)(psVar60 + 1);
              uVar135 = *(undefined8 *)(psVar60 + 4);
              uVar134 = *(undefined8 *)psVar60;
              uVar14 = psVar60[3] + (short)uVar96;
              uVar18 = psVar60[4] + (short)((ulong)uVar96 >> 0x10);
              uVar20 = psVar60[5] + (short)((ulong)uVar96 >> 0x20);
              uVar23 = psVar60[6] + (short)((ulong)uVar96 >> 0x30);
              auVar132._0_8_ =
                   CONCAT26((short)((ulong)uVar131 >> 0x30) + psVar60[2],
                            CONCAT24((short)((ulong)uVar131 >> 0x20) + psVar60[1],
                                     CONCAT22((short)((ulong)uVar131 >> 0x10) + *psVar60,
                                              (short)uVar131 + psVar60[-1])));
              auVar132._8_2_ = (short)uVar133 + psVar60[3];
              auVar132._10_2_ = (short)((ulong)uVar133 >> 0x10) + psVar60[4];
              auVar106 = NEON_umull(auVar132._0_8_,0x18001800180018,2);
              auVar117._0_8_ =
                   CONCAT44(auVar106._4_4_ + (uint)(ushort)((ulong)uVar134 >> 0x10) * 0x1c +
                            (uint)(ushort)(psVar60[3] + psVar60[-1]) * 0x11 + (uint)uVar18 * 9,
                            auVar106._0_4_ + ((uint)uVar134 & 0xffff) * 0x1c +
                            (uint)(ushort)(psVar60[2] + psVar60[-2]) * 0x11 + (uint)uVar14 * 9);
              auVar117._8_4_ =
                   auVar106._8_4_ + (uint)(ushort)((ulong)uVar134 >> 0x20) * 0x1c +
                   (uint)(ushort)(psVar60[4] + *psVar60) * 0x11 + (uint)uVar20 * 9;
              auVar117._12_4_ =
                   auVar106._12_4_ + (uint)(ushort)((ulong)uVar134 >> 0x30) * 0x1c +
                   (uint)(ushort)(psVar60[5] + psVar60[1]) * 0x11 + (uint)uVar23 * 9;
              uVar131 = NEON_uqshrn(auVar117._0_8_,auVar117,0xe,4);
              auVar108._0_4_ =
                   (auVar132._8_4_ & 0xffff) * 0x18 + ((uint)uVar135 & 0xffff) * 0x1c +
                   ((uint)(CONCAT24(psVar60[7] + psVar60[3],
                                    CONCAT22(psVar60[6] + psVar60[2],psVar60[5] + psVar60[1])) >>
                          0x10) & 0xffff) * 0x11 + (uint)(ushort)(psVar60[7] + (short)uVar100) * 9;
              auVar108._4_4_ =
                   (uint)auVar132._10_2_ * 0x18 + (uint)(ushort)((ulong)uVar135 >> 0x10) * 0x1c +
                   (uint)(ushort)(psVar60[7] + psVar60[3]) * 0x11 +
                   (uint)(ushort)(psVar60[8] + (short)((ulong)uVar100 >> 0x10)) * 9;
              auVar108._8_4_ =
                   (uint)(ushort)((short)((ulong)uVar133 >> 0x20) + psVar60[5]) * 0x18 +
                   (uint)(ushort)((ulong)uVar135 >> 0x20) * 0x1c +
                   (uint)(ushort)(psVar60[8] + psVar60[4]) * 0x11 +
                   (uint)(ushort)(psVar60[9] + (short)((ulong)uVar100 >> 0x20)) * 9;
              auVar108._12_4_ =
                   (uint)(ushort)((short)((ulong)uVar133 >> 0x30) + psVar60[6]) * 0x18 +
                   (uint)(ushort)((ulong)uVar135 >> 0x30) * 0x1c +
                   (uint)(ushort)(psVar60[9] + psVar60[5]) * 0x11 +
                   (uint)(ushort)(psVar60[10] + (short)((ulong)uVar100 >> 0x30)) * 9;
              uVar96 = NEON_uqshrn(CONCAT17((char)(uVar23 >> 8),
                                            CONCAT16((char)uVar23,
                                                     CONCAT15((char)(uVar20 >> 8),
                                                              CONCAT14((char)uVar20,
                                                                       CONCAT13((char)(uVar18 >> 8),
                                                                                CONCAT12((char)
                                                  uVar18,uVar14)))))),auVar108,0xe,4);
              *(ulong *)(lStack_138 + (long)iStack_128 * (long)iVar66 + lVar67) =
                   CONCAT17((char)((ulong)uVar96 >> 0x30),
                            CONCAT16((char)((ulong)uVar96 >> 0x20),
                                     CONCAT15((char)((ulong)uVar96 >> 0x10),
                                              CONCAT14((char)uVar96,
                                                       CONCAT13((char)((ulong)uVar131 >> 0x30),
                                                                CONCAT12((char)((ulong)uVar131 >>
                                                                               0x20),
                                                                         CONCAT11((char)((ulong)
                                                  uVar131 >> 0x10),(char)uVar131)))))));
              lVar67 = lVar67 + 8;
              lVar80 = *(long *)(param_2 + 0x10);
              psVar60 = psVar60 + 8;
            } while (lVar67 <= (lVar80 << 0x20) + -0x800000000 >> 0x20);
          }
          if (lVar67 < (int)lVar80) {
            puVar59 = (ushort *)(psVar64 + lVar67);
            do {
              *(char *)(lStack_138 + (long)iStack_128 * (long)iVar66 + lVar67) =
                   (char)(((uint)puVar59[3] + (uint)puVar59[-3]) * 9 +
                          ((uint)puVar59[2] + (uint)puVar59[-2]) * 0x11 +
                          ((uint)puVar59[1] + (uint)puVar59[-1]) * 0x18 + (uint)*puVar59 * 0x1c +
                          0x2000 >> 0xe);
              lVar67 = lVar67 + 1;
              lVar80 = *(long *)(param_2 + 0x10);
              puVar59 = puVar59 + 1;
            } while (lVar67 < (int)lVar80);
          }
          iVar66 = iVar66 + 1;
          iVar69 = iVar69 + -1;
          iVar63 = iVar63 + 1;
          iVar71 = iVar71 + 1;
          iVar61 = iVar61 + -1;
        } while (iVar66 < (int)((ulong)lVar80 >> 0x20));
      }
    }
    __ZdaPv();
    lVar80 = *param_3;
    lVar67 = param_3[1];
    iVar66 = (int)((ulong)(lVar67 - lVar80) >> 4) * -0x45d1745d;
    if (((2 < *(int *)(param_1 + 2)) || (*(int *)(param_1 + 4) != iVar66)) ||
       ((*(int *)(param_1 + 6) != 0x20 ||
        (((*param_1 & 0xfff) != 0 || (*(long *)(param_1 + 8) == 0)))))) {
      uStack_110 = CONCAT44(0x20,iVar66);
      FUN_109a83fd0(param_1,2,&uStack_110,0);
      lVar80 = *param_3;
      lVar67 = param_3[1];
    }
    if (lVar67 != lVar80) {
      uVar70 = 0;
      uVar96 = 0x41f00000;
      fVar105 = ((float)param_4 + -1.0) / 30.0;
      do {
        fVar87 = (float)uVar96;
        pdVar81 = (double *)(lVar80 + uVar70 * 0xb0);
        fVar86 = (float)(pdVar81[6] * 0.01745329238474369);
        ___sincosf_stret();
        lVar67 = 0;
        fVar87 = fVar105 * fVar87;
        fVar86 = fVar105 * fVar86;
        lVar80 = lStack_138 + iStack_128 * (int)(long)(double)(long)pdVar81[1] +
                 (long)(int)(long)(double)(long)*pdVar81;
        pcVar57 = &UNK_10dfc9770;
        auVar130._8_4_ = 0x7fffffff;
        auVar130._0_8_ = 0x7fffffff7fffffff;
        auVar130._12_4_ = 0x7fffffff;
        do {
          cVar88 = *pcVar57;
          pcVar26 = pcVar57 + 1;
          pcVar27 = pcVar57 + 2;
          pcVar28 = pcVar57 + 3;
          pcVar29 = pcVar57 + 4;
          pcVar30 = pcVar57 + 5;
          pcVar31 = pcVar57 + 6;
          pcVar32 = pcVar57 + 7;
          pcVar33 = pcVar57 + 8;
          pcVar34 = pcVar57 + 9;
          pcVar35 = pcVar57 + 10;
          pcVar36 = pcVar57 + 0xb;
          pcVar37 = pcVar57 + 0xc;
          pcVar38 = pcVar57 + 0xd;
          pcVar39 = pcVar57 + 0xe;
          pcVar40 = pcVar57 + 0xf;
          pcVar41 = pcVar57 + 0x10;
          pcVar42 = pcVar57 + 0x11;
          pcVar43 = pcVar57 + 0x12;
          pcVar44 = pcVar57 + 0x13;
          pcVar45 = pcVar57 + 0x14;
          pcVar46 = pcVar57 + 0x15;
          pcVar47 = pcVar57 + 0x16;
          pcVar48 = pcVar57 + 0x17;
          pcVar49 = pcVar57 + 0x18;
          pcVar50 = pcVar57 + 0x19;
          pcVar51 = pcVar57 + 0x1a;
          pcVar52 = pcVar57 + 0x1b;
          pcVar53 = pcVar57 + 0x1c;
          pcVar54 = pcVar57 + 0x1d;
          pcVar55 = pcVar57 + 0x1e;
          pcVar56 = pcVar57 + 0x1f;
          pcVar57 = pcVar57 + 0x20;
          auVar102._0_4_ = (int)(short)cVar88;
          auVar102._4_4_ = (int)(short)*pcVar27;
          auVar102._8_4_ = (int)(short)*pcVar29;
          auVar102._12_4_ = (int)(short)*pcVar31;
          auVar103 = NEON_scvtf(auVar102,4);
          auVar107._0_4_ = (int)(short)*pcVar26;
          auVar107._4_4_ = (int)(short)*pcVar28;
          auVar107._8_4_ = (int)(short)*pcVar30;
          auVar107._12_4_ = (int)(short)*pcVar32;
          auVar108 = NEON_scvtf(auVar107,4);
          auVar93._0_4_ = (int)(short)*pcVar33;
          auVar93._4_4_ = (int)(short)*pcVar35;
          auVar93._8_4_ = (int)(short)*pcVar37;
          auVar93._12_4_ = (int)(short)*pcVar39;
          auVar98._0_4_ = (int)(short)*pcVar34;
          auVar98._4_4_ = (int)(short)*pcVar36;
          auVar98._8_4_ = (int)(short)*pcVar38;
          auVar98._12_4_ = (int)(short)*pcVar40;
          auVar106 = NEON_scvtf(auVar93,4);
          auVar101 = NEON_scvtf(auVar98,4);
          auVar109._0_4_ = auVar103._0_4_ * fVar87 - auVar108._0_4_ * fVar86;
          auVar109._4_4_ = auVar103._4_4_ * fVar87 - auVar108._4_4_ * fVar86;
          auVar109._8_4_ = auVar103._8_4_ * fVar87 - auVar108._8_4_ * fVar86;
          auVar109._12_4_ = auVar103._12_4_ * fVar87 - auVar108._12_4_ * fVar86;
          auVar104._0_4_ = auVar103._0_4_ * fVar86 + auVar108._0_4_ * fVar87;
          auVar104._4_4_ = auVar103._4_4_ * fVar86 + auVar108._4_4_ * fVar87;
          auVar104._8_4_ = auVar103._8_4_ * fVar86 + auVar108._8_4_ * fVar87;
          auVar104._12_4_ = auVar103._12_4_ * fVar86 + auVar108._12_4_ * fVar87;
          uVar96 = auVar130._8_8_;
          auVar110._8_8_ = uVar96;
          auVar110._0_8_ = 0x7fffffff7fffffff;
          auVar6._10_2_ = 0x3f00;
          auVar6._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar6._12_2_ = 0;
          auVar6._14_2_ = 0x3f00;
          auVar103 = auVar109 ^ (auVar109 ^ auVar6) & auVar110;
          auVar125._8_8_ = uVar96;
          auVar125._0_8_ = 0x7fffffff7fffffff;
          auVar7._10_2_ = 0x3f00;
          auVar7._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar7._12_2_ = 0;
          auVar7._14_2_ = 0x3f00;
          auVar126 = auVar104 ^ (auVar104 ^ auVar7) & auVar125;
          auVar99._0_4_ = auVar106._0_4_ * fVar87 - auVar101._0_4_ * fVar86;
          auVar99._4_4_ = auVar106._4_4_ * fVar87 - auVar101._4_4_ * fVar86;
          auVar99._8_4_ = auVar106._8_4_ * fVar87 - auVar101._8_4_ * fVar86;
          auVar99._12_4_ = auVar106._12_4_ * fVar87 - auVar101._12_4_ * fVar86;
          auVar94._0_4_ = auVar106._0_4_ * fVar86 + auVar101._0_4_ * fVar87;
          auVar94._4_4_ = auVar106._4_4_ * fVar86 + auVar101._4_4_ * fVar87;
          auVar94._8_4_ = auVar106._8_4_ * fVar86 + auVar101._8_4_ * fVar87;
          auVar94._12_4_ = auVar106._12_4_ * fVar86 + auVar101._12_4_ * fVar87;
          auVar116._8_8_ = uVar96;
          auVar116._0_8_ = 0x7fffffff7fffffff;
          auVar8._10_2_ = 0x3f00;
          auVar8._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar8._12_2_ = 0;
          auVar8._14_2_ = 0x3f00;
          auVar117 = auVar99 ^ (auVar99 ^ auVar8) & auVar116;
          auVar91._0_4_ = (int)(short)*pcVar41;
          auVar91._4_4_ = (int)(short)*pcVar43;
          auVar91._8_4_ = (int)(short)*pcVar45;
          auVar91._12_4_ = (int)(short)*pcVar47;
          auVar101 = NEON_scvtf(auVar91,4);
          auVar111._0_4_ = (int)(short)*pcVar42;
          auVar111._4_4_ = (int)(short)*pcVar44;
          auVar111._8_4_ = (int)(short)*pcVar46;
          auVar111._12_4_ = (int)(short)*pcVar48;
          auVar108 = NEON_scvtf(auVar111,4);
          auVar127._0_4_ = auVar101._0_4_ * fVar87 - auVar108._0_4_ * fVar86;
          auVar127._4_4_ = auVar101._4_4_ * fVar87 - auVar108._4_4_ * fVar86;
          auVar127._8_4_ = auVar101._8_4_ * fVar87 - auVar108._8_4_ * fVar86;
          auVar127._12_4_ = auVar101._12_4_ * fVar87 - auVar108._12_4_ * fVar86;
          auVar128._8_8_ = uVar96;
          auVar128._0_8_ = 0x7fffffff7fffffff;
          auVar9._10_2_ = 0x3f00;
          auVar9._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar9._12_2_ = 0;
          auVar9._14_2_ = 0x3f00;
          auVar129 = auVar94 ^ (auVar94 ^ auVar9) & auVar128;
          auVar121._0_4_ = (int)(short)*pcVar49;
          auVar121._4_4_ = (int)(short)*pcVar51;
          auVar121._8_4_ = (int)(short)*pcVar53;
          auVar121._12_4_ = (int)(short)*pcVar55;
          auVar118 = NEON_scvtf(auVar121,4);
          auVar89._0_4_ = (int)(short)*pcVar50;
          auVar89._4_4_ = (int)(short)*pcVar52;
          auVar89._8_4_ = (int)(short)*pcVar54;
          auVar89._12_4_ = (int)(short)*pcVar56;
          auVar106 = NEON_scvtf(auVar89,4);
          auVar92._0_4_ = auVar101._0_4_ * fVar86 + auVar108._0_4_ * fVar87;
          auVar92._4_4_ = auVar101._4_4_ * fVar86 + auVar108._4_4_ * fVar87;
          auVar92._8_4_ = auVar101._8_4_ * fVar86 + auVar108._8_4_ * fVar87;
          auVar92._12_4_ = auVar101._12_4_ * fVar86 + auVar108._12_4_ * fVar87;
          auVar112._8_8_ = uVar96;
          auVar112._0_8_ = 0x7fffffff7fffffff;
          auVar10._10_2_ = 0x3f00;
          auVar10._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar10._12_2_ = 0;
          auVar10._14_2_ = 0x3f00;
          auVar101 = auVar127 ^ (auVar127 ^ auVar10) & auVar112;
          auVar122._8_8_ = uVar96;
          auVar122._0_8_ = 0x7fffffff7fffffff;
          auVar11._10_2_ = 0x3f00;
          auVar11._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar11._12_2_ = 0;
          auVar11._14_2_ = 0x3f00;
          auVar123 = auVar92 ^ (auVar92 ^ auVar11) & auVar122;
          auVar124._0_4_ = auVar118._0_4_ * fVar87 - auVar106._0_4_ * fVar86;
          auVar124._4_4_ = auVar118._4_4_ * fVar87 - auVar106._4_4_ * fVar86;
          auVar124._8_4_ = auVar118._8_4_ * fVar87 - auVar106._8_4_ * fVar86;
          auVar124._12_4_ = auVar118._12_4_ * fVar87 - auVar106._12_4_ * fVar86;
          auVar90._0_4_ = auVar118._0_4_ * fVar86 + auVar106._0_4_ * fVar87;
          auVar90._4_4_ = auVar118._4_4_ * fVar86 + auVar106._4_4_ * fVar87;
          auVar90._8_4_ = auVar118._8_4_ * fVar86 + auVar106._8_4_ * fVar87;
          auVar90._12_4_ = auVar118._12_4_ * fVar86 + auVar106._12_4_ * fVar87;
          auVar95._8_8_ = uVar96;
          auVar95._0_8_ = 0x7fffffff7fffffff;
          auVar12._10_2_ = 0x3f00;
          auVar12._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar12._12_2_ = 0;
          auVar12._14_2_ = 0x3f00;
          auVar106 = auVar124 ^ (auVar124 ^ auVar12) & auVar95;
          auVar113._8_8_ = uVar96;
          auVar113._0_8_ = 0x7fffffff7fffffff;
          auVar13._10_2_ = 0x3f00;
          auVar13._0_10_ = (unkuint10)0x3f0000003f000000;
          auVar13._12_2_ = 0;
          auVar13._14_2_ = 0x3f00;
          auVar108 = auVar90 ^ (auVar90 ^ auVar13) & auVar113;
          bVar85 = 2;
          if (*(byte *)(lVar80 + ((int)(auVar109._12_4_ + auVar103._12_4_) +
                                 (int)(auVar104._12_4_ + auVar126._12_4_) * iStack_128)) <=
              *(byte *)(lVar80 + ((int)(auVar109._8_4_ + auVar103._8_4_) +
                                 (int)(auVar104._8_4_ + auVar126._8_4_) * iStack_128))) {
            bVar85 = 0;
          }
          if (*(byte *)(lVar80 + ((int)(auVar109._0_4_ + auVar103._0_4_) +
                                 (int)(auVar104._0_4_ + auVar126._0_4_) * iStack_128)) <
              *(byte *)(lVar80 + ((int)(auVar109._4_4_ + auVar103._4_4_) +
                                 (int)(auVar104._4_4_ + auVar126._4_4_) * iStack_128))) {
            bVar85 = bVar85 + 1;
          }
          bVar77 = 4;
          if (*(byte *)(lVar80 + ((int)(auVar99._4_4_ + auVar117._4_4_) +
                                 (int)(auVar94._4_4_ + auVar129._4_4_) * iStack_128)) <=
              *(byte *)(lVar80 + ((int)(auVar99._0_4_ + auVar117._0_4_) +
                                 (int)(auVar94._0_4_ + auVar129._0_4_) * iStack_128))) {
            bVar77 = 0;
          }
          bVar75 = 8;
          if (*(byte *)(lVar80 + ((int)(auVar99._12_4_ + auVar117._12_4_) +
                                 (int)(auVar94._12_4_ + auVar129._12_4_) * iStack_128)) <=
              *(byte *)(lVar80 + ((int)(auVar99._8_4_ + auVar117._8_4_) +
                                 (int)(auVar94._8_4_ + auVar129._8_4_) * iStack_128))) {
            bVar75 = 0;
          }
          bVar72 = 0x10;
          if (*(byte *)(lVar80 + ((int)(auVar127._4_4_ + auVar101._4_4_) +
                                 (int)(auVar92._4_4_ + auVar123._4_4_) * iStack_128)) <=
              *(byte *)(lVar80 + ((int)(auVar127._0_4_ + auVar101._0_4_) +
                                 (int)(auVar92._0_4_ + auVar123._0_4_) * iStack_128))) {
            bVar72 = 0;
          }
          bVar82 = 0x20;
          if (*(byte *)(lVar80 + ((int)(auVar127._12_4_ + auVar101._12_4_) +
                                 (int)(auVar92._12_4_ + auVar123._12_4_) * iStack_128)) <=
              *(byte *)(lVar80 + ((int)(auVar127._8_4_ + auVar101._8_4_) +
                                 (int)(auVar92._8_4_ + auVar123._8_4_) * iStack_128))) {
            bVar82 = 0;
          }
          bVar84 = 0x40;
          if (*(byte *)(lVar80 + ((int)(auVar124._4_4_ + auVar106._4_4_) +
                                 (int)(auVar90._4_4_ + auVar108._4_4_) * iStack_128)) <=
              *(byte *)(lVar80 + ((int)(auVar124._0_4_ + auVar106._0_4_) +
                                 (int)(auVar90._0_4_ + auVar108._0_4_) * iStack_128))) {
            bVar84 = 0;
          }
          bVar76 = 0x80;
          if (*(byte *)(lVar80 + ((int)(auVar124._12_4_ + auVar106._12_4_) +
                                 (int)(auVar90._12_4_ + auVar108._12_4_) * iStack_128)) <=
              *(byte *)(lVar80 + ((int)(auVar124._8_4_ + auVar106._8_4_) +
                                 (int)(auVar90._8_4_ + auVar108._8_4_) * iStack_128))) {
            bVar76 = 0;
          }
          *(byte *)((long)&uStack_110 + lVar67) =
               bVar85 | bVar77 | bVar75 | bVar72 | bVar82 | bVar84 | bVar76;
          lVar67 = lVar67 + 1;
        } while (lVar67 != 0x20);
        uStack_a8 = uStack_108;
        uStack_b0 = uStack_110;
        uStack_98 = uStack_f8;
        uStack_a0 = uStack_100;
        uVar96 = uStack_100;
        FUN_10940e164(&uStack_110,&uStack_b0);
        iStack_118 = (int)uVar70;
        iStack_114 = iStack_118 + 1;
        uStack_120 = 0x7fffffff80000000;
        FUN_109a84930(auStack_1b8,param_1,&iStack_118,&uStack_120);
        puStack_150 = auStack_1b8;
        auStack_158[0] = 0xc2010000;
        uStack_148 = 0;
        FUN_109a479a0(&uStack_110,auStack_158);
        if (lStack_180 != 0) {
          piVar2 = (int *)(lStack_180 + 0x14);
          do {
            iVar66 = *piVar2;
            cVar88 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar66 + -1;
              cVar88 = ExclusiveMonitorsStatus();
            }
          } while (cVar88 != '\0');
          if (iVar66 + -1 == 0) {
            func_0x000109a848d4(auStack_1b8);
          }
        }
        lStack_180 = 0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        uStack_190 = 0;
        uStack_198 = 0;
        if (0 < iStack_1b4) {
          lVar80 = 0;
          do {
            *(undefined4 *)(lStack_178 + lVar80 * 4) = 0;
            lVar80 = lVar80 + 1;
          } while (lVar80 < iStack_1b4);
        }
        if (puStack_170 != auStack_168 && puStack_170 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_170 + -8));
        }
        if (lStack_d8 != 0) {
          piVar2 = (int *)(lStack_d8 + 0x14);
          do {
            iVar66 = *piVar2;
            cVar88 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar66 + -1;
              cVar88 = ExclusiveMonitorsStatus();
            }
          } while (cVar88 != '\0');
          if (iVar66 + -1 == 0) {
            func_0x000109a848d4(&uStack_110);
          }
        }
        lStack_d8 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        if (0 < uStack_110._4_4_) {
          lVar80 = 0;
          do {
            *(undefined4 *)(lStack_d0 + lVar80 * 4) = 0;
            lVar80 = lVar80 + 1;
          } while (lVar80 < uStack_110._4_4_);
        }
        if (puStack_c8 != auStack_c0 && puStack_c8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_c8 + -8));
        }
        uVar70 = uVar70 + 1;
        lVar80 = *param_3;
      } while (uVar70 < (ulong)((param_3[1] - lVar80 >> 4) * 0x2e8ba2e8ba2e8ba3));
    }
    ppuStack_140 = &PTR_FUN_110af4c80;
    if (lStack_138 != 0) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_10940e0e8:
  FUN_10938ce40(&UNK_10f56ccd6);
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x10940e0f8);
  (*pcVar25)();
}



/* Entry: 10940e164; end: 10940e33f;  */

void FUN_10940e164(undefined4 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  uStack_a8 = 0x2000000001;
  uStack_b0 = 0x242ff0000;
  uStack_70 = (ulong)&uStack_b0 | 8;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_a0 = param_2;
  lStack_98 = param_2;
  puStack_68 = &uStack_60;
  if (param_2 != 0) {
    uStack_b0 = 0x242ff4000;
    uStack_58 = 1;
    uStack_60 = 0x20;
    lStack_90 = param_2 + 0x20;
    *param_1 = 0x42ff0000;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
    *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
    *(undefined8 *)(param_1 + 0x16) = 0;
    puStack_48 = (undefined4 *)CONCAT44(puStack_48._4_4_,0x2010000);
    uStack_38 = 0;
    lStack_88 = lStack_90;
    puStack_40 = param_1;
    FUN_109a479a0(&uStack_b0,&puStack_48);
    if (lStack_78 != 0) {
      piVar1 = (int *)(lStack_78 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_b0);
      }
    }
    lStack_78 = 0;
    lStack_98 = 0;
    lStack_a0 = 0;
    lStack_88 = 0;
    lStack_90 = 0;
    if (0 < uStack_b0._4_4_) {
      lVar7 = 0;
      do {
        *(undefined4 *)(uStack_70 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < uStack_b0._4_4_);
    }
    if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
      _free(puStack_68[-1]);
    }
    return;
  }
  puVar6 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  puStack_48 = puVar6 + 1;
  puStack_40 = (undefined4 *)0x1c;
  *(undefined1 *)(puVar6 + 8) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
  *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
  *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
  *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
  FUN_109ac3188(0xffffff29,&puStack_48,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10940e2f8);
  (*pcVar5)();
}



/* Entry: 10940e340; end: 10940fe7b;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010940e530 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long * FUN_10940e340(undefined8 *param_1,long *param_2,long *param_3,long param_4,long *param_5,
                    int *param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  ulong *puVar16;
  code *pcVar17;
  bool bVar18;
  undefined8 *******pppppppuVar19;
  undefined8 **ppuVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  int iVar26;
  undefined1 *puVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  undefined4 *puVar31;
  ulong *puVar32;
  ulong uVar33;
  double *pdVar34;
  double *pdVar35;
  ulong *puVar36;
  double *pdVar37;
  undefined8 *puVar38;
  ulong uVar39;
  undefined4 *puVar40;
  undefined8 uVar41;
  ulong *puVar42;
  ulong uVar43;
  int *piVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  int *piVar48;
  ulong *puVar49;
  undefined1 in_b0;
  undefined1 uVar50;
  undefined1 in_register_00005001;
  undefined1 uVar51;
  undefined1 in_register_00005002;
  undefined1 uVar52;
  undefined1 in_register_00005003;
  undefined1 uVar53;
  undefined1 in_register_00005004;
  undefined1 uVar54;
  undefined1 in_register_00005005;
  undefined1 uVar55;
  undefined1 in_register_00005006;
  undefined1 uVar56;
  undefined1 in_register_00005007;
  undefined1 uVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  long *plStack_978;
  long lStack_970;
  long lStack_968;
  long lStack_960;
  long *plStack_958;
  int *piStack_950;
  long *plStack_948;
  undefined1 *puStack_940;
  code *pcStack_938;
  undefined1 uStack_930;
  int iStack_92c;
  int iStack_928;
  int iStack_924;
  int iStack_920;
  int iStack_91c;
  byte bStack_918;
  undefined4 *puStack_910;
  undefined4 *puStack_908;
  undefined4 *puStack_900;
  undefined8 uStack_8f8;
  undefined1 *puStack_8f0;
  undefined2 uStack_8e8;
  undefined4 *puStack_8e0;
  undefined8 uStack_8d0;
  undefined8 *puStack_8c8;
  long *plStack_8c0;
  long lStack_8b8;
  int *piStack_8b0;
  undefined8 **ppuStack_8a8;
  undefined8 *******pppppppuStack_8a0;
  undefined8 *******pppppppuStack_898;
  long *plStack_890;
  double dStack_888;
  long *plStack_880;
  double dStack_878;
  long *plStack_870;
  undefined1 uStack_868;
  undefined7 uStack_867;
  int iStack_860;
  undefined4 uStack_85c;
  undefined1 uStack_858;
  undefined7 uStack_857;
  long *plStack_850;
  long *plStack_848;
  undefined8 uStack_840;
  undefined8 *******pppppppuStack_838;
  undefined8 *******pppppppuStack_830;
  undefined8 *******pppppppuStack_828;
  undefined8 *******pppppppuStack_820;
  undefined8 *******pppppppuStack_818;
  undefined8 *******pppppppuStack_810;
  undefined8 *puStack_808;
  undefined8 **ppuStack_800;
  undefined8 **ppuStack_7f8;
  undefined4 *puStack_7f0;
  undefined4 *puStack_7e8;
  undefined8 uStack_7e0;
  long lStack_7d8;
  long lStack_7d0;
  undefined8 uStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a0;
  long *plStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  long lStack_768;
  ulong uStack_760;
  long *plStack_758;
  long lStack_750;
  long lStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  long lStack_708;
  undefined8 *puStack_700;
  long *plStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  int *piStack_6e0;
  int *piStack_6d8;
  undefined8 uStack_6d0;
  undefined4 auStack_6c8 [2];
  undefined8 *******pppppppuStack_6c0;
  undefined8 uStack_6b8;
  undefined4 auStack_6b0 [2];
  long **pplStack_6a8;
  undefined8 uStack_6a0;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined1 uStack_690;
  undefined7 uStack_68f;
  undefined1 uStack_688;
  undefined7 uStack_687;
  undefined8 uStack_680;
  undefined1 uStack_678;
  undefined8 uStack_670;
  ulong *puStack_668;
  double dStack_660;
  double dStack_658;
  double dStack_650;
  double dStack_648;
  double dStack_640;
  double dStack_638;
  double dStack_630;
  double *pdStack_628;
  double dStack_620;
  undefined8 uStack_618;
  double dStack_610;
  double dStack_608;
  double dStack_600;
  undefined8 uStack_5f8;
  undefined4 uStack_508;
  int iStack_504;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  long lStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 auStack_4a8 [2];
  uint *puStack_4a0;
  undefined8 uStack_498;
  undefined4 auStack_490 [2];
  undefined1 *puStack_488;
  undefined8 uStack_480;
  undefined4 auStack_478 [2];
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_428;
  long lStack_420;
  undefined1 *puStack_418;
  undefined1 auStack_410 [24];
  undefined4 auStack_3f8 [2];
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined4 auStack_3e0 [2];
  long *plStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c4 [4];
  uint uStack_3c0;
  int iStack_3bc;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  long lStack_388;
  ulong uStack_380;
  long *plStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long lStack_328;
  int *piStack_320;
  long *plStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  int iStack_2f8;
  int iStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  long lStack_2c8;
  int *piStack_2c0;
  long *plStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined4 auStack_2a0 [2];
  long *plStack_298;
  undefined8 uStack_290;
  undefined4 auStack_288 [2];
  undefined8 **ppuStack_280;
  undefined8 uStack_278;
  undefined4 auStack_270 [2];
  undefined8 *******pppppppuStack_268;
  undefined8 uStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  undefined8 uStack_229;
  undefined8 uStack_220;
  double dStack_218;
  double dStack_210;
  undefined8 *puStack_208;
  double **ppdStack_200;
  double **ppdStack_1f8;
  double dStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  double *pdStack_1d8;
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_7b0 = 0;
  uStack_7c8 = 0;
  lStack_7d0 = 0;
  lStack_7b8 = 0;
  lStack_7c0 = 0;
  puStack_7e8 = (undefined4 *)0x0;
  puStack_7f0 = (undefined4 *)0x0;
  lStack_7d8 = 0;
  uStack_7e0 = 0;
  puStack_808 = (undefined8 *)0x0;
  pppppppuStack_810 = (undefined8 *******)0x0;
  ppuStack_7f8 = (undefined8 **)0x0;
  ppuStack_800 = (undefined8 **)0x0;
  pppppppuStack_828 = (undefined8 *******)0x0;
  pppppppuStack_830 = (undefined8 *******)0x0;
  pppppppuStack_818 = (undefined8 *******)0x0;
  pppppppuStack_820 = (undefined8 *******)0x0;
  plStack_848 = (long *)0x0;
  plStack_850 = (long *)0x0;
  pppppppuStack_838 = (undefined8 *******)0x0;
  uStack_840 = 0;
  puStack_8c8 = param_1;
  plStack_8c0 = param_5;
  piStack_8b0 = param_6;
  func_0x000107c27e9c(&plStack_850,(param_2[1] - *param_2 >> 3) * -0x3333333333333333);
  pppppppuStack_898 = &pppppppuStack_838;
  FUN_10940fe7c(pppppppuStack_898,(param_2[1] - *param_2 >> 3) * -0x3333333333333333);
  pppppppuStack_8a0 = &pppppppuStack_820;
  FUN_10940fe7c(pppppppuStack_8a0,(param_2[1] - *param_2 >> 3) * -0x3333333333333333);
  ppuStack_8a8 = &puStack_808;
  FUN_1093f458c(ppuStack_8a8,(param_2[1] - *param_2 >> 3) * -0x3333333333333333);
  func_0x0001073b504c(&puStack_7f0,(param_2[1] - *param_2 >> 3) * -0x3333333333333333);
  plStack_880 = &lStack_7d8;
  func_0x000107c27e9c(plStack_880,(param_2[1] - *param_2 >> 3) * -0x3333333333333333);
  plStack_890 = &lStack_7c0;
  func_0x000107c27e9c(plStack_890,(param_2[1] - *param_2 >> 3) * -0x3333333333333333);
  piVar44 = (int *)(ulong)*(byte *)(param_4 + 0x268);
  lVar45 = *param_2;
  uStack_8d0 = param_7;
  lStack_8b8 = param_4;
  if (param_2[1] != lVar45) {
    lVar46 = 0;
    lVar47 = 0;
    do {
      lVar1 = lVar45 + lVar46;
      lVar29 = *(long *)(lVar1 + 0x10);
      dVar70 = *(double *)(lVar29 + 0x18);
      plStack_870 = *(long **)(lVar29 + 0x20);
      uStack_868 = (undefined1)*(undefined8 *)(lVar29 + 0x28);
      uStack_867 = (undefined7)((ulong)*(undefined8 *)(lVar29 + 0x28) >> 8);
      uStack_858 = (undefined1)*(undefined8 *)(lVar29 + 0x10);
      uStack_857 = (undefined7)((ulong)*(undefined8 *)(lVar29 + 0x10) >> 8);
      iStack_860 = (int)*(undefined8 *)(lVar29 + 8);
      uStack_85c = (undefined4)((ulong)*(undefined8 *)(lVar29 + 8) >> 0x20);
      dVar69 = *(double *)(lVar29 + 0x30);
      bVar7 = *(byte *)(lVar1 + 0x1d);
      uStack_220._0_4_ = (float)lVar47;
      FUN_1092d7128(&plStack_850,&uStack_220);
      auVar65[8] = uStack_858;
      auVar65._0_8_ = CONCAT44(uStack_85c,iStack_860);
      auVar65[9] = (char)uStack_857;
      auVar65[10] = (char)((uint7)uStack_857 >> 8);
      auVar65[0xb] = (char)((uint7)uStack_857 >> 0x10);
      auVar65[0xc] = (char)((uint7)uStack_857 >> 0x18);
      auVar65[0xd] = (char)((uint7)uStack_857 >> 0x20);
      auVar65[0xe] = (char)((uint7)uStack_857 >> 0x28);
      auVar65[0xf] = (char)((uint7)uStack_857 >> 0x30);
      fVar11 = (float)auVar65._8_8_;
      uVar50 = (undefined1)((uint)fVar11 >> 8);
      uVar51 = (undefined1)((uint)fVar11 >> 0x10);
      uVar52 = (undefined1)((uint)fVar11 >> 0x18);
      if (pppppppuStack_830 < pppppppuStack_828) {
        *pppppppuStack_830 =
             (undefined8 ******)
             CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(SUB41(fVar11,0),
                                                                      (float)(double)CONCAT44(
                                                  uStack_85c,iStack_860)))));
        *(float *)(pppppppuStack_830 + 1) = (float)dVar70;
        pppppppuVar19 = (undefined8 *******)((long)pppppppuStack_830 + 0xc);
      }
      else {
        pppppppuVar19 = pppppppuStack_898;
        FUN_109410104(CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(SUB41(fVar11,0),
                                                                               CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                              ),fVar11);
      }
      auVar9[8] = uStack_868;
      auVar9._0_8_ = plStack_870;
      auVar9[9] = (char)uStack_867;
      auVar9[10] = (char)((uint7)uStack_867 >> 8);
      auVar9[0xb] = (char)((uint7)uStack_867 >> 0x10);
      auVar9[0xc] = (char)((uint7)uStack_867 >> 0x18);
      auVar9[0xd] = (char)((uint7)uStack_867 >> 0x20);
      auVar9[0xe] = (char)((uint7)uStack_867 >> 0x28);
      auVar9[0xf] = (char)((uint7)uStack_867 >> 0x30);
      fVar11 = (float)auVar9._8_8_;
      uVar50 = (undefined1)((uint)fVar11 >> 8);
      uVar51 = (undefined1)((uint)fVar11 >> 0x10);
      uVar52 = (undefined1)((uint)fVar11 >> 0x18);
      pppppppuStack_830 = pppppppuVar19;
      if (pppppppuStack_818 < pppppppuStack_810) {
        *pppppppuStack_818 =
             (undefined8 ******)
             CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(SUB41(fVar11,0),
                                                                      (float)(double)plStack_870))))
        ;
        *(float *)(pppppppuStack_818 + 1) = (float)dVar69;
        pppppppuVar19 = (undefined8 *******)((long)pppppppuStack_818 + 0xc);
      }
      else {
        pppppppuVar19 = pppppppuStack_8a0;
        FUN_109410104(CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(SUB41(fVar11,0),
                                                                               CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                              ),fVar11);
      }
      piVar48 = (int *)(lVar45 + lVar46 + 0x20);
      uVar41 = *(undefined8 *)(*param_3 + (long)*piVar48 * 0x1c);
      uStack_220._0_4_ = (float)uVar41 + 0.5;
      fVar11 = (float)((ulong)uVar41 >> 0x20) + 0.5;
      in_register_00005004 = SUB41(fVar11,0);
      in_register_00005005 = (undefined1)((uint)fVar11 >> 8);
      in_register_00005006 = (undefined1)((uint)fVar11 >> 0x10);
      in_register_00005007 = (undefined1)((uint)fVar11 >> 0x18);
      uStack_220._4_4_ =
           (int)(CONCAT17(in_register_00005007,
                          CONCAT16(in_register_00005006,
                                   CONCAT15(in_register_00005005,
                                            CONCAT14(in_register_00005004,(float)uStack_220)))) >>
                0x20);
      pppppppuStack_818 = pppppppuVar19;
      if (ppuStack_800 < ppuStack_7f8) {
        ppuVar20 = ppuStack_800 + 1;
        *ppuStack_800 =
             (undefined8 *)
             CONCAT17(in_register_00005007,
                      CONCAT16(in_register_00005006,
                               CONCAT15(in_register_00005005,
                                        CONCAT14(in_register_00005004,(float)uStack_220))));
      }
      else {
        ppuVar20 = ppuStack_8a8;
        FUN_1092de294(ppuStack_8a8,&uStack_220);
      }
      ppuStack_800 = ppuVar20;
      FUN_1092c9a40(&puStack_7f0,lVar45 + lVar46 + 0x18);
      uStack_220._0_4_ = *(float *)(*(long *)(lVar1 + 0x10) + 0x38);
      FUN_1092d7128(plStack_880,&uStack_220);
      FUN_10923b3a0(plStack_890,piVar48);
      piVar44 = (int *)(ulong)((uint)piVar44 & (uint)bVar7);
      lVar47 = lVar47 + 1;
      lVar45 = *param_2;
      lVar46 = lVar46 + 0x28;
    } while (lVar47 != (param_2[1] - lVar45 >> 3) * -0x3333333333333333);
  }
  iVar26 = (int)((long)puStack_7e8 - (long)puStack_7f0 >> 2);
  if (piStack_8b0[1] <= iVar26) {
    iVar26 = piStack_8b0[1];
  }
  FUN_10940c35c(&uStack_670);
  puVar42 = puStack_668;
  puVar16 = uStack_670;
  if (uStack_670 != puStack_668) {
    uVar30 = 0;
    puVar32 = uStack_670;
    do {
      puVar36 = puVar32 + 1;
      *puVar32 = uVar30;
      uVar30 = uVar30 + 1;
      puVar32 = puVar36;
    } while (puVar36 != puStack_668);
  }
  if (iVar26 != 0) {
    lVar45 = (long)iVar26;
    puVar32 = uStack_670 + iVar26;
    puVar36 = puVar32;
    if (1 < iVar26) {
      puVar49 = uStack_670 + (lVar45 - 2U >> 1);
      uVar30 = lVar45 - 2U >> 1 ^ 0xffffffffffffffff;
      do {
        FUN_1094103dc(puVar16,&puStack_7f0,lVar45,puVar49);
        puVar49 = puVar49 + -1;
        bVar18 = uVar30 != 0xffffffffffffffff;
        uVar30 = uVar30 + 1;
      } while (bVar18);
    }
    for (; puVar36 != puVar42; puVar36 = puVar36 + 1) {
      uVar30 = *puVar36;
      uVar33 = *puVar16;
      bVar18 = uVar30 < uVar33;
      if ((float)puStack_7f0[uVar30] != (float)puStack_7f0[uVar33]) {
        bVar18 = (float)puStack_7f0[uVar30] < (float)puStack_7f0[uVar33];
      }
      if (bVar18) {
        *puVar36 = uVar33;
        *puVar16 = uVar30;
        FUN_1094103dc(puVar16,&puStack_7f0,lVar45,puVar16);
      }
    }
    if (1 < iVar26) {
      do {
        uVar33 = *puVar16;
        puVar42 = puVar16;
        uVar30 = 0;
        do {
          puVar36 = puVar42 + uVar30 + 1;
          uVar3 = uVar30 << 1 | 1;
          uVar39 = uVar30 * 2 + 2;
          uVar43 = uVar3;
          if ((long)uVar39 < lVar45) {
            bVar18 = *puVar36 < puVar42[uVar30 + 2];
            if ((float)puStack_7f0[*puVar36] != (float)puStack_7f0[puVar42[uVar30 + 2]]) {
              bVar18 = (float)puStack_7f0[*puVar36] < (float)puStack_7f0[puVar42[uVar30 + 2]];
            }
            lVar47 = 8;
            if (!bVar18) {
              lVar47 = 0;
            }
            puVar36 = (ulong *)((long)puVar36 + lVar47);
            uVar43 = uVar39;
            if (!bVar18) {
              uVar43 = uVar3;
            }
          }
          *puVar42 = *puVar36;
          puVar42 = puVar36;
          uVar30 = uVar43;
        } while ((long)uVar43 <= (long)(lVar45 - 2U >> 1));
        puVar32 = puVar32 + -1;
        if (puVar36 == puVar32) {
          *puVar36 = uVar33;
        }
        else {
          *puVar36 = *puVar32;
          *puVar32 = uVar33;
          lVar47 = (long)puVar36 + (8 - (long)puVar16) >> 3;
          if (1 < lVar47) {
            uVar30 = lVar47 - 2U >> 1;
            uVar39 = puVar16[uVar30];
            uVar33 = *puVar36;
            fVar11 = (float)puStack_7f0[uVar33];
            bVar18 = uVar39 < uVar33;
            if ((float)puStack_7f0[uVar39] != fVar11) {
              bVar18 = (float)puStack_7f0[uVar39] < fVar11;
            }
            puVar42 = puVar16 + uVar30;
            if (bVar18) {
              do {
                puVar49 = puVar42;
                *puVar36 = uVar39;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1 >> 1;
                uVar39 = puVar16[uVar30];
                bVar18 = uVar39 < uVar33;
                if ((float)puStack_7f0[uVar39] != fVar11) {
                  bVar18 = (float)puStack_7f0[uVar39] < fVar11;
                }
                puVar36 = puVar49;
                puVar42 = puVar16 + uVar30;
              } while (bVar18);
              *puVar49 = uVar33;
            }
          }
        }
        bVar18 = 2 < lVar45;
        lVar45 = lVar45 + -1;
      } while (bVar18);
    }
  }
  uStack_7a0 = (long *)0x0;
  plStack_798 = (long *)0x0;
  uStack_790 = 0;
  func_0x0001073bf8d4(&uStack_7a0,(long)puStack_668 - (long)uStack_670 >> 3);
  puVar42 = puStack_668;
  lVar45 = lStack_8b8;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  iStack_2f8 = 0;
  iStack_2f4 = 0;
  uStack_300._0_1_ = SUB81(&iStack_2f8,0);
  uStack_300._1_1_ = (byte)((ulong)&iStack_2f8 >> 8);
  uStack_300._2_2_ = (undefined2)((ulong)&iStack_2f8 >> 0x10);
  uStack_300._4_4_ = (int)((ulong)&iStack_2f8 >> 0x20);
  for (puVar16 = uStack_670; puVar16 != puVar42; puVar16 = puVar16 + 1) {
    uVar30 = *puVar16;
    uStack_220._0_4_ = (float)uVar30;
    uStack_220._4_4_ = (int)(uVar30 >> 0x20);
    uVar71 = *(undefined4 *)(lStack_7d8 + uVar30 * 4);
    uStack_360._0_1_ = (undefined1)uVar71;
    uStack_360._1_1_ = (byte)((uint)uVar71 >> 8);
    uStack_360._2_2_ = (undefined2)((uint)uVar71 >> 0x10);
    uStack_360._4_4_ = *(int *)(lStack_7c0 + uVar30 * 4);
    puVar27 = (undefined1 *)&uStack_360;
    FUN_10941050c(&uStack_300,puVar27,&uStack_360);
    if (((ulong)puVar27 & 1) != 0) {
      FUN_1093fd894(&uStack_7a0,&uStack_220);
    }
  }
  uVar30 = (long)plStack_798 - (long)uStack_7a0;
  lVar47 = (long)(uVar30 * 0x20000000) >> 0x20;
  FUN_109367d10(&uStack_220,lVar47);
  puVar31 = (undefined4 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
  if ((uVar30 & 0x7fffffff8) != 0) {
    lVar47 = lVar47 << 3;
    plVar28 = uStack_7a0;
    puVar40 = puVar31;
    do {
      *puVar40 = puStack_7f0[*plVar28];
      lVar47 = lVar47 + -8;
      plVar28 = plVar28 + 1;
      puVar40 = puVar40 + 1;
    } while (lVar47 != 0);
  }
  puStack_7e8 = (undefined4 *)CONCAT71(dStack_218._1_7_,dStack_218._0_1_);
  uStack_220._0_4_ = SUB84(puStack_7f0,0);
  uStack_220._4_4_ = (int)((ulong)puStack_7f0 >> 0x20);
  dStack_210._0_1_ = (undefined1)uStack_7e0;
  dStack_210._1_7_ = (undefined7)((ulong)uStack_7e0 >> 8);
  if (puStack_7f0 != (undefined4 *)0x0) {
    dStack_218._0_1_ = SUB81(puStack_7f0,0);
    dStack_218._1_7_ = (undefined7)((ulong)puStack_7f0 >> 8);
    puStack_7f0 = puVar31;
    __ZdlPv();
    puVar31 = puStack_7f0;
  }
  puStack_7f0 = puVar31;
  FUN_109410280(&uStack_7a0,(ulong)((long)plStack_798 - (long)uStack_7a0) >> 3,&plStack_850);
  func_0x000109410324(&uStack_7a0,(ulong)((long)plStack_798 - (long)uStack_7a0) >> 3,
                      pppppppuStack_898);
  func_0x000109410324(&uStack_7a0,(ulong)((long)plStack_798 - (long)uStack_7a0) >> 3,
                      pppppppuStack_8a0);
  uVar30 = (long)plStack_798 - (long)uStack_7a0;
  lVar47 = (long)(uVar30 * 0x20000000) >> 0x20;
  FUN_10941066c(&uStack_220,lVar47);
  puVar21 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
  if ((uVar30 & 0x7fffffff8) != 0) {
    lVar47 = lVar47 << 3;
    plVar28 = uStack_7a0;
    puVar22 = puVar21;
    do {
      *puVar22 = puStack_808[*plVar28];
      lVar47 = lVar47 + -8;
      plVar28 = plVar28 + 1;
      puVar22 = puVar22 + 1;
    } while (lVar47 != 0);
  }
  uVar41 = CONCAT71(dStack_210._1_7_,dStack_210._0_1_);
  ppuStack_800 = (undefined8 **)CONCAT71(dStack_218._1_7_,dStack_218._0_1_);
  uStack_220._0_4_ = SUB84(puStack_808,0);
  uStack_220._4_4_ = (int)((ulong)puStack_808 >> 0x20);
  dStack_210._0_1_ = SUB81(ppuStack_7f8,0);
  dStack_210._1_7_ = (undefined7)((ulong)ppuStack_7f8 >> 8);
  ppuStack_7f8 = (undefined8 **)uVar41;
  if (puStack_808 != (undefined8 *)0x0) {
    dStack_218._0_1_ = SUB81(puStack_808,0);
    dStack_218._1_7_ = (undefined7)((ulong)puStack_808 >> 8);
    puStack_808 = puVar21;
    __ZdlPv();
    puVar21 = puStack_808;
  }
  puStack_808 = puVar21;
  FUN_109410280(&uStack_7a0,(ulong)((long)plStack_798 - (long)uStack_7a0) >> 3,plStack_880);
  FUN_109410280(&uStack_7a0,(ulong)((long)plStack_798 - (long)uStack_7a0) >> 3,plStack_890);
  func_0x0001091804b4(&uStack_300,CONCAT44(iStack_2f4,iStack_2f8));
  if (uStack_7a0 != (long *)0x0) {
    plStack_798 = uStack_7a0;
    __ZdlPv();
  }
  if (uStack_670 != (ulong *)0x0) {
    puStack_668 = uStack_670;
    __ZdlPv();
  }
  plVar28 = plStack_8c0;
  if ((char)plStack_8c0[3] == '\x01') {
    FUN_1094a2ae4(&uStack_220,lVar45 + 0x230);
    uStack_240 = CONCAT17(dStack_218._0_1_,CONCAT43(uStack_220._4_4_,uStack_220._1_3_));
    uStack_238 = dStack_218._1_7_;
    uStack_229 = puStack_208;
    uStack_231 = dStack_210._0_1_;
    uStack_230 = dStack_210._1_7_;
    uVar51 = SUB81(ppdStack_200,0);
    uVar50 = (undefined1)uStack_220;
  }
  else {
    uVar51 = 0;
    uVar50 = 0;
  }
  if (puStack_7f0 == puStack_7e8) {
    *(undefined1 *)puStack_8c8 = 0;
    *(undefined1 *)(puStack_8c8 + 0x16) = 0;
  }
  else {
    plStack_250 = (long *)0x0;
    plStack_258 = (long *)0x0;
    uStack_248 = 0;
    uStack_300._0_1_ = 0;
    uStack_300._1_1_ = 0;
    uStack_300._2_2_ = 0x42ff;
    uStack_3b8 = (undefined1 *)&uStack_300;
    piStack_2c0 = &iStack_2f8;
    iStack_2f4 = 0;
    uStack_2f0 = 0;
    uStack_300._4_4_ = 0;
    iStack_2f8 = 0;
    uStack_2e4 = 0;
    uStack_2e0 = 0;
    uStack_2ec = 0;
    uStack_2e8 = 0;
    uStack_2d4 = 0;
    uStack_2dc = 0;
    uStack_2d8 = 0;
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2cc = 0;
    lStack_2a8 = 0;
    lStack_2b0 = 0;
    dVar69 = *(double *)(lVar45 + 0x120);
    dVar58 = *(double *)(lVar45 + 0x128);
    dVar59 = dVar58 + dVar58;
    dVar60 = *(double *)(lVar45 + 0x130);
    dVar63 = *(double *)(lVar45 + 0x138);
    dVar67 = dVar60 + dVar60;
    dStack_648 = (dVar69 + dVar69) * dVar63;
    dVar70 = dVar69 * (dVar69 + dVar69);
    uStack_670 = (ulong *)(1.0 - (dVar58 * dVar59 + dVar60 * dVar67));
    dStack_658 = dVar69 * dVar59 - dVar67 * dVar63;
    puStack_668 = (ulong *)(dVar69 * dVar59 + dVar67 * dVar63);
    dStack_640 = dVar69 * dVar67 + dVar59 * dVar63;
    dStack_650 = 1.0 - (dVar70 + dVar60 * dVar67);
    dStack_638 = dVar58 * dVar67 - dStack_648;
    dStack_660 = dVar69 * dVar67 - dVar59 * dVar63;
    dStack_648 = dVar58 * dVar67 + dStack_648;
    dStack_630 = 1.0 - (dVar70 + dVar58 * dVar59);
    uStack_358 = &uStack_220;
    uStack_1e0 = (ulong)uStack_358 | 8;
    puStack_208 = &uStack_670;
    dStack_210._0_1_ = SUB81(puStack_208,0);
    dStack_210._1_7_ = (undefined7)((ulong)puStack_208 >> 8);
    lStack_1e8 = 0;
    dStack_1f0 = 0.0;
    dStack_218._0_1_ = 3;
    dStack_218._1_7_ = 0x3000000;
    uStack_220._0_4_ = 127.625046;
    uStack_220._4_4_ = 2;
    uStack_1c8 = 8;
    dStack_1d0 = 1.18575755001899e-322;
    ppdStack_200 = &pdStack_628;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_360._0_1_ = 0;
    uStack_360._1_1_ = 0;
    uStack_360._2_2_ = 0x101;
    uStack_3c0 = 0x2010000;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    plStack_2b8 = &lStack_2b0;
    ppdStack_1f8 = ppdStack_200;
    pdStack_1d8 = &dStack_1d0;
    FUN_109a895d0(&uStack_360,&uStack_3c0);
    if (lStack_1e8 != 0) {
      piVar48 = (int *)(lStack_1e8 + 0x14);
      do {
        iVar26 = *piVar48;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar48,0x10);
        if (bVar18) {
          *piVar48 = iVar26 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar26 + -1 == 0) {
        func_0x000109a848d4(&uStack_220);
      }
    }
    lStack_1e8 = 0;
    puStack_208 = (undefined8 *)0x0;
    dStack_210._0_1_ = 0;
    dStack_210._1_7_ = 0;
    ppdStack_1f8 = (double **)0x0;
    ppdStack_200 = (double **)0x0;
    if (0 < uStack_220._4_4_) {
      lVar47 = 0;
      do {
        *(undefined4 *)(uStack_1e0 + lVar47 * 4) = 0;
        lVar47 = lVar47 + 1;
      } while (lVar47 < uStack_220._4_4_);
    }
    if (pdStack_1d8 != &dStack_1d0 && pdStack_1d8 != (double *)0x0) {
      _free(pdStack_1d8[-1]);
    }
    lStack_328 = 0;
    uStack_32c = 0;
    uStack_334 = 0;
    uStack_330 = 0;
    uStack_33c = 0;
    uStack_338 = 0;
    piStack_320 = (int *)((ulong)&uStack_360 | 8);
    uStack_344 = 0;
    uStack_340 = 0;
    uStack_34c = 0;
    uStack_348 = 0;
    uStack_358._4_4_ = 0;
    uStack_350 = 0;
    uStack_360._4_4_ = 0;
    uStack_358._0_4_ = 0;
    lStack_308 = 0;
    lStack_310 = 0;
    uStack_360._0_1_ = 6;
    uStack_360._1_1_ = 0;
    uStack_360._2_2_ = 0x42ff;
    uStack_380 = (ulong)&uStack_3c0 | 8;
    lStack_388 = 0;
    uStack_38c = 0;
    uStack_394 = 0;
    uStack_390 = 0;
    uStack_39c = 0;
    uStack_398 = 0;
    uStack_3a4 = 0;
    uStack_3a0 = 0;
    uStack_3ac = 0;
    uStack_3a8 = 0;
    uStack_3b8._4_4_ = 0;
    uStack_3b0 = 0;
    iStack_3bc = 0;
    uStack_3b8._0_4_ = 0;
    plStack_8c0 = &lStack_370;
    uStack_368 = 0;
    lStack_370 = 0;
    uStack_3c0 = 0x42ff0006;
    uStack_260 = 0;
    auStack_270[0] = 0x81030015;
    pppppppuStack_268 = pppppppuStack_898;
    uStack_278 = 0;
    auStack_288[0] = 0x8103000d;
    ppuStack_280 = ppuStack_8a8;
    uStack_290 = 0;
    auStack_2a0[0] = 0x81030004;
    plStack_298 = plStack_880;
    uStack_3d0 = 0;
    auStack_3e0[0] = 0x81030004;
    plStack_3d8 = plStack_890;
    plStack_378 = plStack_8c0;
    plStack_318 = &lStack_310;
    FUN_109410838(&uStack_460,lVar45 + 0x10);
    uStack_3e8 = 0;
    auStack_3f8[0] = 0x81010005;
    plStack_880 = &lStack_310;
    puStack_3f0 = &uStack_460;
    FUN_109a8261c(&uStack_220,4,1,5);
    plStack_890 = (long *)CONCAT44(plStack_890._4_4_,0x8103000d);
    uStack_468 = 0;
    auStack_478[0] = 0xc1060000;
    auStack_490[0] = 0x82010006;
    puStack_488 = (undefined1 *)&uStack_360;
    uStack_480 = 0;
    auStack_4a8[0] = 0x82010006;
    puStack_4a0 = &uStack_3c0;
    uStack_498 = 0;
    iStack_860 = piStack_8b0[2];
    iVar4 = piStack_8b0[3];
    iVar26 = piStack_8b0[4];
    iVar5 = piStack_8b0[5];
    iVar6 = *piStack_8b0;
    plStack_870 = &lStack_2b0;
    puStack_470 = &uStack_220;
    FUN_109a82210(&uStack_670,&uStack_300);
    uStack_508 = 0x42ff0000;
    puStack_4c8 = &uStack_500;
    uStack_500._4_4_ = 0;
    uStack_4f8 = 0;
    iStack_504 = 0;
    uStack_500._0_4_ = 0;
    lStack_4d0 = 0;
    uStack_4d4 = 0;
    uStack_4dc = 0;
    uStack_4d8 = 0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4ec = 0;
    uStack_4e8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4b0 = 0;
    uStack_4b8 = 0;
    puStack_4c0 = &uStack_4b8;
    (**(code **)(*uStack_670 + 0x18))(uStack_670,&uStack_670,&uStack_508,0xffffffff);
    uStack_68f = uStack_238;
    uStack_698 = CONCAT31((int3)uStack_240,uVar50);
    uStack_694 = (undefined4)((ulong)uStack_240 >> 0x18);
    uStack_690 = (undefined1)((ulong)uStack_240 >> 0x38);
    uStack_680 = uStack_229;
    uStack_688 = uStack_231;
    uStack_687 = uStack_230;
    auStack_6b0[0] = 0x82030004;
    pplStack_6a8 = &plStack_258;
    uStack_6a0 = 0;
    uStack_8e8 = (undefined2)piStack_8b0[10];
    uStack_6b8 = 0;
    auStack_6c8[0] = 0x81030015;
    pppppppuStack_6c0 = pppppppuStack_8a0;
    puStack_8e0 = auStack_6c8;
    puStack_8f0 = auStack_3c4;
    puStack_900 = auStack_6b0;
    uStack_8f8 = uStack_8d0;
    puStack_908 = &uStack_698;
    bStack_918 = (byte)piVar44 & 1;
    iStack_92c = iStack_860;
    uStack_930 = 0;
    iStack_928 = iVar4;
    iStack_924 = iVar26;
    iStack_920 = iVar5;
    iStack_91c = iVar6;
    puStack_910 = &uStack_508;
    uStack_678 = uVar51;
    FUN_109414854(CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                  0x3fefae147ae147ae,0x47ae147b,auStack_270,auStack_288,auStack_2a0,auStack_3e0,
                  auStack_3f8,auStack_478,auStack_490,auStack_4a8);
    if (lStack_4d0 != 0) {
      piVar48 = (int *)(lStack_4d0 + 0x14);
      do {
        iVar26 = *piVar48;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar48,0x10);
        if (bVar18) {
          *piVar48 = iVar26 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar26 + -1 == 0) {
        func_0x000109a848d4(&uStack_508);
      }
    }
    plVar24 = plStack_870;
    lStack_4d0 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4e0 = 0;
    uStack_4dc = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    if (0 < iStack_504) {
      lVar45 = 0;
      do {
        *(undefined4 *)((long)puStack_4c8 + lVar45 * 4) = 0;
        lVar45 = lVar45 + 1;
      } while (lVar45 < iStack_504);
    }
    if (puStack_4c0 != &uStack_4b8 && puStack_4c0 != (undefined8 *)0x0) {
      _free(puStack_4c0[-1]);
    }
    FUN_10918eb6c(&uStack_670);
    FUN_10918eb6c(&uStack_220);
    if (lStack_428 != 0) {
      piVar48 = (int *)(lStack_428 + 0x14);
      do {
        iVar26 = *piVar48;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar48,0x10);
        if (bVar18) {
          *piVar48 = iVar26 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar26 + -1 == 0) {
        func_0x000109a848d4(&uStack_460);
      }
    }
    lStack_428 = 0;
    uStack_448 = 0;
    puStack_450 = (undefined8 *)0x0;
    uStack_438 = 0;
    uStack_440 = 0;
    if (0 < uStack_460._4_4_) {
      lVar45 = 0;
      do {
        *(undefined4 *)(lStack_420 + lVar45 * 4) = 0;
        lVar45 = lVar45 + 1;
      } while (lVar45 < uStack_460._4_4_);
    }
    if (puStack_418 != auStack_410 && puStack_418 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_418 + -8));
    }
    plStack_798 = (long *)CONCAT44(uStack_358._4_4_,(undefined4)uStack_358);
    uVar15 = CONCAT22(uStack_360._2_2_,CONCAT11(uStack_360._1_1_,(undefined1)uStack_360));
    uStack_7a0 = (long *)CONCAT44(uStack_360._4_4_,uVar15);
    uStack_760 = (ulong)&uStack_7a0 | 8;
    uStack_788 = CONCAT44(uStack_344,uStack_348);
    uStack_790 = CONCAT44(uStack_34c,uStack_350);
    uStack_778 = CONCAT44(uStack_334,uStack_338);
    uStack_780 = CONCAT44(uStack_33c,uStack_340);
    uStack_770 = CONCAT44(uStack_32c,uStack_330);
    lStack_768 = lStack_328;
    plStack_758 = &lStack_750;
    lStack_750 = 0;
    lStack_748 = 0;
    if (lStack_328 != 0) {
      piVar48 = (int *)(lStack_328 + 0x14);
      do {
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar48,0x10);
        if (bVar18) {
          *piVar48 = *piVar48 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (uStack_360._4_4_ < 3) {
      lStack_750 = *plStack_318;
      lStack_748 = plStack_318[1];
    }
    else {
      uStack_7a0 = (long *)(ulong)uVar15;
      func_0x000109a84868(&uStack_7a0,&uStack_360);
    }
    uStack_738 = CONCAT44(uStack_3b8._4_4_,(uint)uStack_3b8);
    uStack_740 = CONCAT44(iStack_3bc,uStack_3c0);
    puStack_700 = &uStack_738;
    uStack_728 = CONCAT44(uStack_3a4,uStack_3a8);
    uStack_730 = CONCAT44(uStack_3ac,uStack_3b0);
    uStack_718 = CONCAT44(uStack_394,uStack_398);
    uStack_720 = CONCAT44(uStack_39c,uStack_3a0);
    uStack_710 = CONCAT44(uStack_38c,uStack_390);
    lStack_708 = lStack_388;
    plStack_6f8 = &lStack_6f0;
    lStack_6e8 = 0;
    lStack_6f0 = 0;
    if (lStack_388 != 0) {
      piVar48 = (int *)(lStack_388 + 0x14);
      do {
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar48,0x10);
        if (bVar18) {
          *piVar48 = *piVar48 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (iStack_3bc < 3) {
      lStack_6f0 = *plStack_378;
      lStack_6e8 = plStack_378[1];
    }
    else {
      uStack_740 = (ulong)uStack_3c0;
      func_0x000109a84868(&uStack_740,&uStack_3c0);
    }
    piStack_6d8 = (int *)0x0;
    piStack_6e0 = (int *)0x0;
    uStack_6d0 = 0;
    plVar28 = plStack_258;
    FUN_109285684(&piStack_6e0,plStack_258,plStack_250,(long)plStack_250 - (long)plStack_258 >> 2);
    if (lStack_388 != 0) {
      piVar48 = (int *)(lStack_388 + 0x14);
      do {
        iVar26 = *piVar48;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar48,0x10);
        if (bVar18) {
          *piVar48 = iVar26 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar26 + -1 == 0) {
        func_0x000109a848d4(&uStack_3c0);
      }
    }
    lStack_388 = 0;
    uStack_3a8 = 0;
    uStack_3a4 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    uStack_398 = 0;
    uStack_394 = 0;
    uStack_3a0 = 0;
    uStack_39c = 0;
    if (0 < iStack_3bc) {
      lVar45 = 0;
      do {
        *(undefined4 *)(uStack_380 + lVar45 * 4) = 0;
        lVar45 = lVar45 + 1;
      } while (lVar45 < iStack_3bc);
    }
    if (plStack_378 != plStack_8c0 && plStack_378 != (long *)0x0) {
      _free(plStack_378[-1]);
    }
    if (lStack_328 != 0) {
      piVar48 = (int *)(lStack_328 + 0x14);
      do {
        iVar26 = *piVar48;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar48,0x10);
        if (bVar18) {
          *piVar48 = iVar26 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar26 + -1 == 0) {
        func_0x000109a848d4(&uStack_360);
      }
    }
    lStack_328 = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    if (0 < uStack_360._4_4_) {
      lVar45 = 0;
      do {
        piStack_320[lVar45] = 0;
        lVar45 = lVar45 + 1;
      } while (lVar45 < uStack_360._4_4_);
    }
    if (plStack_318 != plStack_880 && plStack_318 != (long *)0x0) {
      _free(plStack_318[-1]);
    }
    if (lStack_2c8 != 0) {
      piVar48 = (int *)(lStack_2c8 + 0x14);
      do {
        iVar26 = *piVar48;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar48,0x10);
        if (bVar18) {
          *piVar48 = iVar26 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar26 + -1 == 0) {
        func_0x000109a848d4(&uStack_300);
      }
    }
    lStack_2c8 = 0;
    uStack_2e8 = 0;
    uStack_2e4 = 0;
    uStack_2f0 = 0;
    uStack_2ec = 0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    if (0 < uStack_300._4_4_) {
      lVar45 = 0;
      do {
        piStack_2c0[lVar45] = 0;
        lVar45 = lVar45 + 1;
      } while (lVar45 < uStack_300._4_4_);
    }
    if (plStack_2b8 != plVar24 && plStack_2b8 != (long *)0x0) {
      _free(plStack_2b8[-1]);
    }
    if (plStack_258 != (long *)0x0) {
      plStack_250 = plStack_258;
      __ZdlPv();
    }
    if (*piStack_8b0 < (int)((ulong)((long)piStack_6d8 - (long)piStack_6e0) >> 2)) {
      piStack_2c0 = (int *)((ulong)&uStack_300 | 8);
      iStack_2f8 = (int)plStack_798;
      iStack_2f4 = (int)((ulong)plStack_798 >> 0x20);
      uStack_300._0_1_ = SUB81(uStack_7a0,0);
      uStack_300._1_1_ = (byte)((ulong)uStack_7a0 >> 8);
      uStack_300._2_2_ = (undefined2)((ulong)uStack_7a0 >> 0x10);
      uStack_2e8 = (undefined4)uStack_788;
      uStack_2e4 = (undefined4)((ulong)uStack_788 >> 0x20);
      uStack_2f0 = (undefined4)uStack_790;
      uStack_2ec = (undefined4)((ulong)uStack_790 >> 0x20);
      uStack_2d8 = (undefined4)uStack_778;
      uStack_2d4 = (undefined4)((ulong)uStack_778 >> 0x20);
      uStack_2e0 = (undefined4)uStack_780;
      uStack_2dc = (undefined4)((ulong)uStack_780 >> 0x20);
      lStack_2c8 = lStack_768;
      uStack_2d0 = (undefined4)uStack_770;
      uStack_2cc = (undefined4)((ulong)uStack_770 >> 0x20);
      lStack_2a8 = 0;
      lStack_2b0 = 0;
      if (lStack_768 != 0) {
        piVar44 = (int *)(lStack_768 + 0x14);
        do {
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar44,0x10);
          if (bVar18) {
            *piVar44 = *piVar44 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      plStack_2b8 = &lStack_2b0;
      if (uStack_7a0._4_4_ < 3) {
        lStack_2b0 = *plStack_758;
        lStack_2a8 = plStack_758[1];
        uStack_300._4_4_ = uStack_7a0._4_4_;
      }
      else {
        uStack_300._4_4_ = 0;
        func_0x000109a84868(&uStack_300,&uStack_7a0);
      }
      piStack_320 = (int *)((ulong)&uStack_360 | 8);
      uStack_358._0_4_ = (undefined4)uStack_738;
      uStack_358._4_4_ = (int)((ulong)uStack_738 >> 0x20);
      uStack_360._0_1_ = (undefined1)uStack_740;
      uStack_360._1_1_ = (byte)(uStack_740 >> 8);
      uStack_360._2_2_ = (undefined2)(uStack_740 >> 0x10);
      uStack_348 = (undefined4)uStack_728;
      uStack_344 = (undefined4)((ulong)uStack_728 >> 0x20);
      uStack_350 = (undefined4)uStack_730;
      uStack_34c = (undefined4)((ulong)uStack_730 >> 0x20);
      uStack_338 = (undefined4)uStack_718;
      uStack_334 = (undefined4)((ulong)uStack_718 >> 0x20);
      uStack_340 = (undefined4)uStack_720;
      uStack_33c = (undefined4)((ulong)uStack_720 >> 0x20);
      lStack_328 = lStack_708;
      uStack_330 = (undefined4)uStack_710;
      uStack_32c = (undefined4)((ulong)uStack_710 >> 0x20);
      lStack_308 = 0;
      lStack_310 = 0;
      if (lStack_708 != 0) {
        piVar44 = (int *)(lStack_708 + 0x14);
        do {
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar44,0x10);
          if (bVar18) {
            *piVar44 = *piVar44 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      plStack_318 = &lStack_310;
      if (uStack_740._4_4_ < 3) {
        lStack_310 = *plStack_6f8;
        lStack_308 = plStack_6f8[1];
        uStack_360._4_4_ = uStack_740._4_4_;
      }
      else {
        uStack_360._4_4_ = 0;
        func_0x000109a84868(&uStack_360,&uStack_740);
      }
      uStack_3b8._0_4_ = 0;
      uStack_3b8._4_4_ = 0;
      uStack_3c0 = 0;
      iStack_3bc = 0;
      uStack_3b0 = 0;
      uStack_3ac = 0;
      puStack_458 = (undefined8 *)0x0;
      uStack_460 = (undefined8 *)0x0;
      puStack_450 = (undefined8 *)0x0;
      FUN_10940fe7c(&uStack_3c0,(long)piStack_6d8 - (long)piStack_6e0 >> 2);
      FUN_1093f458c(&uStack_460,(long)piStack_6d8 - (long)piStack_6e0 >> 2);
      if (piStack_6d8 != piStack_6e0) {
        uVar30 = 0;
        do {
          FUN_109410cf8(&uStack_3c0,(long)pppppppuStack_838 + (long)piStack_6e0[uVar30] * 0xc);
          if (puStack_458 < puStack_450) {
            puVar21 = puStack_458 + 1;
            *puStack_458 = puStack_808[piStack_6e0[uVar30]];
          }
          else {
            puVar21 = &uStack_460;
            FUN_1092cbf20();
          }
          uVar30 = uVar30 + 1;
          puStack_458 = puVar21;
        } while (uVar30 < (ulong)((long)piStack_6d8 - (long)piStack_6e0 >> 2));
      }
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_508 = 0x81030015;
      uStack_500 = &uStack_3c0;
      uStack_688 = 0;
      uStack_687 = 0;
      uStack_698 = plStack_890._0_4_;
      uStack_690 = SUB81(&uStack_460,0);
      uStack_68f = (undefined7)((ulong)&uStack_460 >> 8);
      FUN_109410838(&uStack_670,lStack_8b8 + 0x10);
      uStack_248 = 0;
      plStack_258 = (long *)CONCAT44(plStack_258._4_4_,0x81010005);
      plStack_250 = &uStack_670;
      FUN_109a8261c(&uStack_220,4,1,5);
      uStack_260 = 0;
      auStack_270[0] = 0xc1060000;
      auStack_288[0] = 0x82010006;
      ppuStack_280 = (undefined8 **)&uStack_300;
      uStack_278 = 0;
      auStack_2a0[0] = 0x82010006;
      plStack_298 = &uStack_360;
      uStack_290 = 0;
      pppppppuStack_268 = (undefined8 *******)&uStack_220;
      FUN_109ba43b4(&uStack_508,&uStack_698,&plStack_258,auStack_270,auStack_288,auStack_2a0,1,0);
      FUN_10918eb6c(&uStack_220);
      if (dStack_638 != 0.0) {
        piVar44 = (int *)((long)dStack_638 + 0x14);
        do {
          iVar26 = *piVar44;
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar44,0x10);
          if (bVar18) {
            *piVar44 = iVar26 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_670);
        }
      }
      dStack_638 = 0.0;
      dStack_658 = 0.0;
      dStack_660 = 0.0;
      dStack_648 = 0.0;
      dStack_650 = 0.0;
      if (0 < uStack_670._4_4_) {
        lVar45 = 0;
        do {
          *(undefined4 *)((long)dStack_630 + lVar45 * 4) = 0;
          lVar45 = lVar45 + 1;
        } while (lVar45 < uStack_670._4_4_);
      }
      if (pdStack_628 != &dStack_620 && pdStack_628 != (double *)0x0) {
        _free(pdStack_628[-1]);
      }
      pdVar35 = (double *)CONCAT44(uStack_2ec,uStack_2f0);
      if (((uStack_300._1_1_ >> 6 & 1) == 0) && (*piStack_2c0 != 1)) {
        if (piStack_2c0[1] == 1) {
          pdVar34 = (double *)((long)pdVar35 + *plStack_2b8);
          pdVar37 = (double *)((long)pdVar35 + *plStack_2b8 * 2);
        }
        else {
          iVar26 = iStack_2f4;
          if (2 < iStack_2f4 + 1U) {
            iVar26 = 0;
          }
          pdVar34 = (double *)
                    ((long)pdVar35 +
                    (long)(1 - iVar26 * iStack_2f4) * 8 + *plStack_2b8 * (long)iVar26);
          iVar26 = 0;
          if (iStack_2f4 != 0) {
            iVar26 = 2 / iStack_2f4;
          }
          pdVar37 = (double *)
                    ((long)pdVar35 +
                    (long)(2 - iVar26 * iStack_2f4) * 8 + *plStack_2b8 * (long)iVar26);
        }
      }
      else {
        pdVar34 = pdVar35 + 1;
        pdVar37 = pdVar35 + 2;
      }
      plStack_870 = (long *)*pdVar35;
      dVar70 = *pdVar34;
      dVar69 = *pdVar37;
      puVar21 = (undefined8 *)CONCAT44(uStack_34c,uStack_350);
      if (((uStack_360._1_1_ >> 6 & 1) == 0) && (*piStack_320 != 1)) {
        if (piStack_320[1] == 1) {
          pdVar35 = (double *)((long)puVar21 + *plStack_318);
          pdVar34 = (double *)((long)puVar21 + *plStack_318 * 2);
        }
        else {
          iVar26 = uStack_358._4_4_;
          if (2 < uStack_358._4_4_ + 1U) {
            iVar26 = 0;
          }
          pdVar35 = (double *)
                    ((long)puVar21 +
                    (long)(1 - iVar26 * uStack_358._4_4_) * 8 + *plStack_318 * (long)iVar26);
          iVar26 = 0;
          if (uStack_358._4_4_ != 0) {
            iVar26 = 2 / uStack_358._4_4_;
          }
          pdVar34 = (double *)
                    ((long)puVar21 +
                    (long)(2 - iVar26 * uStack_358._4_4_) * 8 + *plStack_318 * (long)iVar26);
        }
      }
      else {
        pdVar35 = (double *)(puVar21 + 1);
        pdVar34 = (double *)(puVar21 + 2);
      }
      plStack_880 = (long *)*puVar21;
      dVar59 = dVar69 * dVar69 + (double)plStack_870 * (double)plStack_870 + dVar70 * dVar70;
      dVar58 = SQRT(dVar59);
      uVar50 = SUB81(dVar58,0);
      uVar51 = (undefined1)((ulong)dVar58 >> 8);
      uVar52 = (undefined1)((ulong)dVar58 >> 0x10);
      uVar53 = (undefined1)((ulong)dVar58 >> 0x18);
      uVar54 = (undefined1)((ulong)dVar58 >> 0x20);
      uVar55 = (undefined1)((ulong)dVar58 >> 0x28);
      uVar56 = (undefined1)((ulong)dVar58 >> 0x30);
      uVar57 = (undefined1)((ulong)dVar58 >> 0x38);
      if (0.0 < dVar59) {
        plStack_870 = (long *)((double)plStack_870 / dVar58);
        dVar70 = dVar70 / dVar58;
        dVar69 = dVar69 / dVar58;
        dVar59 = dVar58;
      }
      uStack_868 = SUB81(dVar70,0);
      uStack_867 = (undefined7)((ulong)dVar70 >> 8);
      uStack_858 = 0;
      uStack_857 = 0;
      iStack_860 = SUB84(dVar69,0);
      uStack_85c = (undefined4)((ulong)dVar69 >> 0x20);
      dStack_878 = *pdVar35;
      dVar68 = *pdVar34;
      ___sincos_stret();
      lVar45 = 0;
      dVar60 = (double)CONCAT71(uStack_867,uStack_868);
      dVar63 = (double)CONCAT44(uStack_85c,iStack_860);
      dVar69 = (double)CONCAT17(uVar57,CONCAT16(uVar56,CONCAT15(uVar55,CONCAT14(uVar54,CONCAT13(
                                                  uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50)))))
                                               ));
      dVar58 = (double)plStack_870 * dVar69;
      dVar69 = dVar60 * dVar69;
      dVar70 = (double)CONCAT17(uVar57,CONCAT16(uVar56,CONCAT15(uVar55,CONCAT14(uVar54,CONCAT13(
                                                  uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50)))))
                                               )) * dVar63;
      dVar67 = 1.0 - dVar59;
      dVar61 = (double)plStack_870 * dVar67;
      dVar62 = dVar60 * dVar67;
      auVar13._8_8_ = dVar62;
      auVar13._0_8_ = dVar61;
      auVar14._8_8_ = dVar62;
      auVar14._0_8_ = dVar61;
      auVar65 = NEON_ext(auVar13,auVar14,8,1);
      dVar64 = auVar65._0_8_ * dVar63;
      dVar66 = auVar65._8_8_ * dVar63;
      dStack_660 = dVar66 - dVar69;
      uStack_670 = (ulong *)(dVar59 + (double)plStack_870 * dVar61);
      puStack_668 = (ulong *)(dVar70 + dVar61 * dVar60);
      dStack_650 = dVar62 * dVar60 + dVar59;
      dStack_658 = dVar61 * dVar60 - dVar70;
      dStack_640 = dVar69 + dVar66;
      dStack_648 = dVar58 + dVar64;
      dStack_638 = dVar64 - dVar58;
      dStack_630 = dVar59 + dVar63 * dVar67 * dVar63;
      pdVar35 = &dStack_660;
      do {
        dVar69 = pdVar35[-2];
        *(double *)((long)&dStack_218 + lVar45) = pdVar35[-1];
        *(double *)((long)&uStack_220 + lVar45) = dVar69;
        *(double *)((long)&dStack_210 + lVar45) = *pdVar35;
        dVar70 = dStack_1d0;
        dVar69 = dStack_1f0;
        lVar45 = lVar45 + 0x20;
        pdVar35 = pdVar35 + 3;
      } while (lVar45 != 0x60);
      dStack_888 = (double)CONCAT71(dStack_218._1_7_,dStack_218._0_1_);
      plStack_890 = (long *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
      dVar58 = (double)CONCAT71(dStack_210._1_7_,dStack_210._0_1_);
      uStack_868 = SUB81(ppdStack_1f8,0);
      uStack_867 = (undefined7)((ulong)ppdStack_1f8 >> 8);
      plStack_870 = (long *)ppdStack_200;
      uStack_858 = SUB81(pdStack_1d8,0);
      uStack_857 = (undefined7)((ulong)pdStack_1d8 >> 8);
      iStack_860 = (int)uStack_1e0;
      uStack_85c = (undefined4)(uStack_1e0 >> 0x20);
      if (uStack_460 != (undefined8 *)0x0) {
        puStack_458 = uStack_460;
        __ZdlPv();
      }
      if (CONCAT44(iStack_3bc,uStack_3c0) != 0) {
        uStack_3b8._0_4_ = uStack_3c0;
        uStack_3b8._4_4_ = iStack_3bc;
        __ZdlPv();
      }
      if (lStack_328 != 0) {
        piVar44 = (int *)(lStack_328 + 0x14);
        do {
          iVar26 = *piVar44;
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar44,0x10);
          if (bVar18) {
            *piVar44 = iVar26 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_360);
        }
      }
      lStack_328 = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_33c = 0;
      if (0 < uStack_360._4_4_) {
        lVar45 = 0;
        do {
          piStack_320[lVar45] = 0;
          lVar45 = lVar45 + 1;
        } while (lVar45 < uStack_360._4_4_);
      }
      if (plStack_318 != &lStack_310 && plStack_318 != (long *)0x0) {
        _free(plStack_318[-1]);
      }
      if (lStack_2c8 != 0) {
        piVar44 = (int *)(lStack_2c8 + 0x14);
        do {
          iVar26 = *piVar44;
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar44,0x10);
          if (bVar18) {
            *piVar44 = iVar26 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_300);
        }
      }
      lStack_2c8 = 0;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2f0 = 0;
      uStack_2ec = 0;
      uStack_2d8 = 0;
      uStack_2d4 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0;
      if (0 < uStack_300._4_4_) {
        lVar45 = 0;
        do {
          piStack_2c0[lVar45] = 0;
          lVar45 = lVar45 + 1;
        } while (lVar45 < uStack_300._4_4_);
      }
      if (plStack_2b8 != &lStack_2b0 && plStack_2b8 != (long *)0x0) {
        _free(plStack_2b8[-1]);
      }
      puStack_458 = (undefined8 *)0x0;
      uStack_460 = (undefined8 *)0x0;
      puStack_450 = (undefined8 *)0x0;
      FUN_10941077c(&uStack_460,(long)piStack_6d8 - (long)piStack_6e0 >> 2);
      piVar44 = piStack_6d8;
      if (piStack_6e0 != piStack_6d8) {
        piVar48 = piStack_6e0;
        do {
          puVar31 = (undefined4 *)((long)pppppppuStack_838 + (long)*piVar48 * 0xc);
          uVar73 = *puVar31;
          uVar72 = puVar31[1];
          uVar71 = puVar31[2];
          if (puStack_458 < puStack_450) {
            *(undefined4 *)puStack_458 = uVar73;
            *(undefined4 *)((long)puStack_458 + 4) = uVar72;
            *(undefined4 *)(puStack_458 + 1) = uVar71;
            puVar21 = (undefined8 *)((long)puStack_458 + 0xc);
          }
          else {
            lVar45 = (long)puStack_458 - (long)uStack_460;
            uVar30 = (lVar45 >> 2) * -0x5555555555555555 + 1;
            if (0x1555555555555555 < uVar30) {
              FUN_10937ed14();
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x10940fca0);
              (*pcVar17)();
            }
            lVar47 = (long)puStack_450 - (long)uStack_460 >> 2;
            uVar33 = lVar47 * 0x5555555555555556;
            if (uVar33 < uVar30 || uVar33 - uVar30 == 0) {
              uVar33 = uVar30;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar47 * -0x5555555555555555)) {
              uVar33 = 0x1555555555555555;
            }
            puVar21 = &uStack_460;
            FUN_10937ed28();
            puVar22 = uStack_460;
            puVar31 = (undefined4 *)((long)puVar21 + lVar45);
            *puVar31 = uVar73;
            puVar31[1] = uVar72;
            puVar31[2] = uVar71;
            puVar2 = (undefined8 *)((long)puVar31 + ((long)puVar22 - (long)puStack_458));
            puVar23 = puVar22;
            puVar38 = puVar2;
            if ((long)puVar22 - (long)puStack_458 != 0) {
              do {
                uVar41 = *puVar22;
                *(undefined4 *)(puVar38 + 1) = *(undefined4 *)(puVar22 + 1);
                *puVar38 = uVar41;
                puVar22 = (undefined8 *)((long)puVar22 + 0xc);
                puVar23 = uStack_460;
                puVar38 = (undefined8 *)((long)puVar38 + 0xc);
              } while (puVar22 != puStack_458);
            }
            puStack_450 = (undefined8 *)((long)puVar21 + uVar33 * 0xc);
            puVar21 = (undefined8 *)(puVar31 + 3);
            uStack_460 = puVar2;
            if (puVar23 != (undefined8 *)0x0) {
              puStack_458 = puVar21;
              __ZdlPv();
            }
          }
          piVar48 = piVar48 + 1;
          puStack_458 = puVar21;
        } while (piVar48 != piVar44);
      }
      dVar59 = dStack_878 + 0.0;
      uStack_670 = (ulong *)(double)(float)(double)plStack_890;
      puStack_668 = (ulong *)(double)(float)dStack_888;
      dStack_660 = (double)(float)dVar58;
      dStack_658 = 0.0;
      dStack_650 = (double)(float)(double)plStack_870;
      dStack_648 = (double)(float)(double)CONCAT71(uStack_867,uStack_868);
      dStack_640 = (double)(float)dVar69;
      dStack_638 = 0.0;
      dStack_630 = (double)(float)(double)CONCAT44(uStack_85c,iStack_860);
      pdStack_628 = (double *)(double)(float)(double)CONCAT71(uStack_857,uStack_858);
      dStack_620 = (double)(float)dVar70;
      uStack_618 = 0;
      auVar10[8] = SUB81(dVar59,0);
      auVar10._0_8_ = (double)plStack_880 + 0.0;
      auVar10[9] = (char)((ulong)dVar59 >> 8);
      auVar10[10] = (char)((ulong)dVar59 >> 0x10);
      auVar10[0xb] = (char)((ulong)dVar59 >> 0x18);
      auVar10[0xc] = (char)((ulong)dVar59 >> 0x20);
      auVar10[0xd] = (char)((ulong)dVar59 >> 0x28);
      auVar10[0xe] = (char)((ulong)dVar59 >> 0x30);
      auVar10[0xf] = (char)((ulong)dVar59 >> 0x38);
      fVar11 = (float)((double)plStack_880 + 0.0);
      fVar12 = (float)auVar10._8_8_;
      dStack_610 = (double)fVar11;
      dStack_608 = (double)(float)(CONCAT17((char)((uint)fVar12 >> 0x18),
                                            CONCAT16((char)((uint)fVar12 >> 0x10),
                                                     CONCAT15((char)((uint)fVar12 >> 8),
                                                              CONCAT14(SUB41(fVar12,0),fVar11)))) >>
                                  0x20);
      dStack_600 = (double)(float)(dVar68 + 0.0);
      uStack_5f8 = 0x3ff0000000000000;
      plVar28 = &uStack_670;
      FUN_10937fc48(&uStack_220);
      func_0x00010937fbc4(&uStack_3c0,&uStack_220);
      uStack_1b8 = CONCAT44(uStack_394,uStack_398);
      uStack_1c0 = CONCAT44(uStack_39c,uStack_3a0);
      uStack_1b0 = CONCAT44(uStack_38c,uStack_390);
      uStack_1a8 = lStack_388;
      uStack_1a0 = uStack_380;
      uStack_1c8 = CONCAT44(uStack_3a4,uStack_3a8);
      dStack_1d0 = (double)CONCAT44(uStack_3ac,uStack_3b0);
      pdStack_1d8 = (double *)CONCAT44(uStack_3b8._4_4_,(uint)uStack_3b8);
      uStack_1e0 = CONCAT44(iStack_3bc,uStack_3c0);
      puStack_8c8[1] = CONCAT71(dStack_218._1_7_,dStack_218._0_1_);
      *puStack_8c8 = CONCAT44(uStack_220._4_4_,(float)uStack_220);
      puStack_8c8[3] = puStack_208;
      puStack_8c8[2] = CONCAT71(dStack_210._1_7_,dStack_210._0_1_);
      puStack_8c8[5] = ppdStack_1f8;
      puStack_8c8[4] = ppdStack_200;
      puStack_8c8[6] = dStack_1f0;
      puStack_8c8[0xd] = uStack_1b8;
      puStack_8c8[0xc] = uStack_1c0;
      puStack_8c8[0xf] = lStack_388;
      puStack_8c8[0xe] = uStack_1b0;
      puStack_8c8[0x10] = uStack_380;
      puStack_8c8[9] = pdStack_1d8;
      puStack_8c8[8] = uStack_1e0;
      puStack_8c8[0xb] = uStack_1c8;
      puStack_8c8[10] = dStack_1d0;
      puStack_8c8[0x13] = puStack_458;
      puStack_8c8[0x12] = uStack_460;
      puStack_8c8[0x14] = puStack_450;
      *(undefined1 *)(puStack_8c8 + 0x16) = 1;
    }
    else {
      *(undefined1 *)puStack_8c8 = 0;
      *(undefined1 *)(puStack_8c8 + 0x16) = 0;
    }
    FUN_109410ea8(&uStack_7a0);
  }
  if (lStack_7c0 != 0) {
    lStack_7b8 = lStack_7c0;
    __ZdlPv();
  }
  if (lStack_7d8 != 0) {
    lStack_7d0 = lStack_7d8;
    __ZdlPv();
  }
  if (puStack_7f0 != (undefined4 *)0x0) {
    puStack_7e8 = puStack_7f0;
    __ZdlPv();
  }
  if (puStack_808 != (undefined8 *)0x0) {
    ppuStack_800 = (undefined8 **)puStack_808;
    __ZdlPv();
  }
  if (pppppppuStack_820 != (undefined8 *******)0x0) {
    pppppppuStack_818 = pppppppuStack_820;
    __ZdlPv();
  }
  if (pppppppuStack_838 != (undefined8 *******)0x0) {
    pppppppuStack_830 = pppppppuStack_838;
    __ZdlPv();
  }
  plVar24 = plStack_850;
  if (plStack_850 != (long *)0x0) {
    plStack_848 = plStack_850;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return plVar24;
  }
  ___stack_chk_fail();
  if ((int)plVar28 != 0) {
    func_0x000104bd46a0();
    if (uStack_460 != (undefined8 *)0x0) {
      puStack_458 = uStack_460;
      __ZdlPv();
    }
    FUN_109410ea8(&uStack_7a0);
    FUN_10940ffa0(&plStack_850);
  }
  plVar25 = plVar24;
  __Unwind_Resume();
  pcStack_938 = FUN_10940fe7c;
  lVar45 = *plVar25;
  if ((long *)((plVar25[2] - lVar45 >> 2) * -0x5555555555555555) < plVar28) {
    piStack_950 = piVar44;
    plStack_948 = plVar24;
    puStack_940 = &stack0xfffffffffffffff0;
    if ((long *)0x1555555555555555 < plVar28) {
      FUN_109410030();
      if (lStack_968 - lStack_970 != 0) {
        uVar30 = (lStack_968 - lStack_970) - 0xc;
        lStack_968 = lStack_968 + (uVar30 % 0xc - uVar30) + -0xc;
      }
      if (plStack_978 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      if (plVar25[0x12] != 0) {
        plVar25[0x13] = plVar25[0x12];
        __ZdlPv();
      }
      if (plVar25[0xf] != 0) {
        plVar25[0x10] = plVar25[0xf];
        __ZdlPv();
      }
      if (plVar25[0xc] != 0) {
        plVar25[0xd] = plVar25[0xc];
        __ZdlPv();
      }
      if (plVar25[9] != 0) {
        plVar25[10] = plVar25[9];
        __ZdlPv();
      }
      if (plVar25[6] != 0) {
        plVar25[7] = plVar25[6];
        __ZdlPv();
      }
      if (plVar25[3] != 0) {
        plVar25[4] = plVar25[3];
        __ZdlPv();
      }
      if (*plVar25 != 0) {
        plVar25[1] = *plVar25;
        __ZdlPv();
      }
      return plVar25;
    }
    lVar47 = plVar25[1];
    plVar24 = plVar25;
    plStack_958 = plVar25;
    FUN_1094100c0();
    lStack_970 = (long)plVar24 + (lVar47 - lVar45);
    lStack_960 = (long)plVar24 + (long)plVar28 * 0xc;
    plStack_978 = plVar24;
    lStack_968 = lStack_970;
    FUN_109410044(plVar25,&plStack_978);
    if (lStack_968 - lStack_970 != 0) {
      uVar30 = (lStack_968 - lStack_970) - 0xc;
      lStack_968 = lStack_968 + (uVar30 % 0xc - uVar30) + -0xc;
    }
    plVar25 = plStack_978;
    if (plStack_978 != (long *)0x0) {
      __ZdlPv();
      plVar25 = plStack_978;
    }
  }
  return plVar25;
}



/* Entry: 10940fe7c; end: 10940ff9f;  */

long * FUN_10940fe7c(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 2) * -0x5555555555555555) < param_2) {
    if (0x1555555555555555 < param_2) {
      FUN_109410030();
      if (lStack_38 - lStack_40 != 0) {
        lStack_38 = lStack_38 + (((lStack_38 - lStack_40) - 0xcU) / 0xc) * -0xc + -0xc;
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      if (param_1[0x12] != 0) {
        param_1[0x13] = param_1[0x12];
        __ZdlPv();
      }
      if (param_1[0xf] != 0) {
        param_1[0x10] = param_1[0xf];
        __ZdlPv();
      }
      if (param_1[0xc] != 0) {
        param_1[0xd] = param_1[0xc];
        __ZdlPv();
      }
      if (param_1[9] != 0) {
        param_1[10] = param_1[9];
        __ZdlPv();
      }
      if (param_1[6] != 0) {
        param_1[7] = param_1[6];
        __ZdlPv();
      }
      if (param_1[3] != 0) {
        param_1[4] = param_1[3];
        __ZdlPv();
      }
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
      }
      return param_1;
    }
    lVar3 = param_1[1];
    plVar1 = param_1;
    plStack_28 = param_1;
    FUN_1094100c0();
    lStack_40 = (long)plVar1 + (lVar3 - lVar2);
    lStack_30 = (long)plVar1 + param_2 * 0xc;
    plStack_48 = plVar1;
    lStack_38 = lStack_40;
    FUN_109410044(param_1,&plStack_48);
    if (lStack_38 - lStack_40 != 0) {
      lStack_38 = lStack_38 + (((lStack_38 - lStack_40) - 0xcU) / 0xc) * -0xc + -0xc;
    }
    param_1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
      param_1 = plStack_48;
    }
  }
  return param_1;
}



/* Entry: 10940ffa0; end: 10941002f;  */

long * FUN_10940ffa0(long *param_1)

{
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109410030; end: 109410043;  */

void FUN_109410030(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar4 = (undefined8 *)*plVar6;
  puVar5 = (undefined8 *)plVar6[1];
  puVar3 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar5));
  puVar2 = puVar3;
  for (puVar1 = puVar4; puVar5 != puVar1; puVar1 = (undefined8 *)((long)puVar1 + 0xc)) {
    *puVar2 = *puVar1;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
    puVar2 = (undefined8 *)((long)puVar2 + 0xc);
  }
  param_2[1] = puVar3;
  lVar7 = *plVar6;
  *plVar6 = (long)puVar3;
  plVar6[1] = (long)puVar4;
  param_2[1] = lVar7;
  lVar7 = plVar6[1];
  plVar6[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = plVar6[2];
  plVar6[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return;
}



/* Entry: 109410044; end: 1094100bf;  */

void FUN_109410044(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar5));
  puVar2 = puVar3;
  for (puVar1 = puVar4; puVar5 != puVar1; puVar1 = (undefined8 *)((long)puVar1 + 0xc)) {
    *puVar2 = *puVar1;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
    puVar2 = (undefined8 *)((long)puVar2 + 0xc);
  }
  param_2[1] = puVar3;
  lVar6 = *param_1;
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar4;
  param_2[1] = lVar6;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1094100c0; end: 109410103;  */

undefined1  [16]
FUN_1094100c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,ulong param_5,
             long *param_6)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  long **pplVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 *puStack_d8;
  undefined4 *puStack_d0;
  long lStack_c8;
  long *plStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  long lStack_70;
  long *plStack_68;
  
  if (param_5 < 0x1555555555555556) {
    lVar1 = param_5 * 0xc;
    __Znwm(lVar1);
    auVar10._8_8_ = param_5;
    auVar10._0_8_ = lVar1;
    return auVar10;
  }
  func_0x000104c4f740();
  uVar4 = (uint)param_5;
  lVar1 = param_4[1] - *param_4;
  uVar8 = (lVar1 >> 2) * -0x5555555555555555 + 1;
  if (uVar8 < 0x1555555555555556) {
    lVar7 = param_4[2] - *param_4 >> 2;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0x1555555555555555;
    }
    plStack_68 = param_4;
    if (uVar9 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_4;
      FUN_1094100c0();
    }
    puStack_80 = (undefined4 *)((long)plVar2 + lVar1);
    lStack_70 = (long)plVar2 + uVar9 * 0xc;
    *puStack_80 = param_1;
    puStack_80[1] = param_2;
    puStack_80[2] = param_3;
    puStack_78 = puStack_80 + 3;
    pplVar5 = &plStack_88;
    plStack_88 = plVar2;
    FUN_109410044(param_4,pplVar5);
    lVar1 = param_4[1];
    if ((long)puStack_78 - (long)puStack_80 != 0) {
      puStack_78 = puStack_78 + ((((long)puStack_78 - (long)puStack_80) - 0xcU) / 0xc) * -3 + -3;
    }
    if (plStack_88 != (long *)0x0) {
      __ZdlPv();
    }
    auVar11._8_8_ = pplVar5;
    auVar11._0_8_ = lVar1;
    return auVar11;
  }
  FUN_109410030();
  if ((long)puStack_78 - (long)puStack_80 != 0) {
    puStack_78 = (undefined4 *)
                 ((long)puStack_78 + ((((long)puStack_78 - (long)puStack_80) - 0xcU) / 0xc) * -0xc +
                 -0xc);
  }
  if (plStack_88 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  uVar6 = (uint)((ulong)(param_4[1] - *param_4) >> 3);
  if ((int)uVar4 <= (int)uVar6) {
    uVar6 = uVar4;
  }
  lVar1 = (long)(int)uVar6;
  FUN_10925b8c4(&puStack_d8,lVar1);
  if (uVar6 != 0) {
    uVar8 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3;
    lVar7 = *param_6;
    plVar2 = (long *)*param_4;
    puVar3 = puStack_d8;
    do {
      *puVar3 = *(undefined4 *)(lVar7 + *plVar2 * 4);
      uVar8 = uVar8 - 8;
      plVar2 = plVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)*param_6;
  *param_6 = (long)puStack_d8;
  lVar7 = param_6[2];
  param_6[2] = lStack_c8;
  param_6[1] = (long)puStack_d0;
  if (puVar3 != (undefined4 *)0x0) {
    puStack_d8 = puVar3;
    puStack_d0 = puVar3;
    lStack_c8 = lVar7;
    __ZdlPv();
  }
  auVar12._8_8_ = lVar1;
  auVar12._0_8_ = puVar3;
  return auVar12;
}



/* Entry: 109410104; end: 10941027f;  */

long FUN_109410104(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                  uint param_5,long *param_6)

{
  long *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  long lStack_a8;
  long *plStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar7 = param_4[1] - *param_4;
  uVar5 = (lVar7 >> 2) * -0x5555555555555555 + 1;
  if (uVar5 < 0x1555555555555556) {
    lVar4 = param_4[2] - *param_4 >> 2;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x1555555555555555;
    }
    plStack_48 = param_4;
    if (uVar6 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_4;
      FUN_1094100c0();
    }
    puStack_60 = (undefined4 *)((long)plVar1 + lVar7);
    lStack_50 = (long)plVar1 + uVar6 * 0xc;
    *puStack_60 = param_1;
    puStack_60[1] = param_2;
    puStack_60[2] = param_3;
    puStack_58 = puStack_60 + 3;
    plStack_68 = plVar1;
    FUN_109410044(param_4,&plStack_68);
    lVar7 = param_4[1];
    if ((long)puStack_58 - (long)puStack_60 != 0) {
      puStack_58 = puStack_58 + ((((long)puStack_58 - (long)puStack_60) - 0xcU) / 0xc) * -3 + -3;
    }
    if (plStack_68 != (long *)0x0) {
      __ZdlPv();
    }
    return lVar7;
  }
  FUN_109410030();
  if ((long)puStack_58 - (long)puStack_60 != 0) {
    puStack_58 = (undefined4 *)
                 ((long)puStack_58 + ((((long)puStack_58 - (long)puStack_60) - 0xcU) / 0xc) * -0xc +
                 -0xc);
  }
  if (plStack_68 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  uVar3 = (uint)((ulong)(param_4[1] - *param_4) >> 3);
  if ((int)param_5 <= (int)uVar3) {
    uVar3 = param_5;
  }
  FUN_10925b8c4(&puStack_b8,(long)(int)uVar3);
  if (uVar3 != 0) {
    uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
    lVar7 = *param_6;
    plVar1 = (long *)*param_4;
    puVar2 = puStack_b8;
    do {
      *puVar2 = *(undefined4 *)(lVar7 + *plVar1 * 4);
      uVar5 = uVar5 - 8;
      plVar1 = plVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)*param_6;
  *param_6 = (long)puStack_b8;
  lVar7 = param_6[2];
  param_6[2] = lStack_a8;
  param_6[1] = (long)puStack_b0;
  if (puVar2 != (undefined4 *)0x0) {
    puStack_b8 = puVar2;
    puStack_b0 = puVar2;
    lStack_a8 = lVar7;
    __ZdlPv();
  }
  return (long)puVar2;
}



/* Entry: 109410280; end: 1094103db;  */

void FUN_109410280(long *param_1,uint param_2,long *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  long lStack_38;
  
  uVar2 = (uint)((ulong)(param_1[1] - *param_1) >> 3);
  if ((int)param_2 <= (int)uVar2) {
    uVar2 = param_2;
  }
  FUN_10925b8c4(&puStack_48,(long)(int)uVar2);
  if (uVar2 != 0) {
    uVar4 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
    lVar5 = *param_3;
    plVar3 = (long *)*param_1;
    puVar1 = puStack_48;
    do {
      *puVar1 = *(undefined4 *)(lVar5 + *plVar3 * 4);
      uVar4 = uVar4 - 8;
      plVar3 = plVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined4 *)*param_3;
  *param_3 = (long)puStack_48;
  lVar5 = param_3[2];
  param_3[2] = lStack_38;
  param_3[1] = (long)puStack_40;
  if (puVar1 != (undefined4 *)0x0) {
    puStack_48 = puVar1;
    puStack_40 = puVar1;
    lStack_38 = lVar5;
    __ZdlPv();
  }
  return;
}



/* Entry: 1094103dc; end: 10941050b;  */

void FUN_1094103dc(long param_1,long *param_2,long param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (1 < param_3) {
    uVar4 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 3 <= (long)uVar4) {
      uVar5 = (long)param_4 - param_1 >> 2;
      uVar9 = uVar5 | 1;
      puVar8 = (ulong *)(param_1 + uVar9 * 8);
      uVar5 = uVar5 + 2;
      lVar6 = *param_2;
      uVar10 = uVar9;
      if ((long)uVar5 < param_3) {
        fVar11 = *(float *)(lVar6 + *puVar8 * 4);
        fVar12 = *(float *)(lVar6 + puVar8[1] * 4);
        bVar3 = *puVar8 < puVar8[1];
        if (fVar11 != fVar12) {
          bVar3 = fVar11 < fVar12;
        }
        lVar2 = 8;
        if (!bVar3) {
          lVar2 = 0;
        }
        puVar8 = (ulong *)((long)puVar8 + lVar2);
        uVar10 = uVar5;
        if (!bVar3) {
          uVar10 = uVar9;
        }
      }
      uVar9 = *puVar8;
      uVar5 = *param_4;
      fVar12 = *(float *)(lVar6 + uVar9 * 4);
      fVar11 = *(float *)(lVar6 + uVar5 * 4);
      bVar3 = uVar9 < uVar5;
      if (fVar12 != fVar11) {
        bVar3 = fVar12 < fVar11;
      }
      if (!bVar3) {
        do {
          puVar7 = puVar8;
          *param_4 = uVar9;
          if ((long)uVar4 < (long)uVar10) break;
          uVar1 = uVar10 << 1 | 1;
          puVar8 = (ulong *)(param_1 + uVar1 * 8);
          uVar9 = uVar10 * 2 + 2;
          uVar10 = uVar1;
          if ((long)uVar9 < param_3) {
            uVar10 = *(ulong *)(uVar1 * 8 + param_1 + 8);
            fVar12 = *(float *)(lVar6 + *puVar8 * 4);
            fVar13 = *(float *)(lVar6 + uVar10 * 4);
            bVar3 = *puVar8 < uVar10;
            if (fVar12 != fVar13) {
              bVar3 = fVar12 < fVar13;
            }
            lVar2 = 8;
            if (!bVar3) {
              lVar2 = 0;
            }
            puVar8 = (ulong *)((long)puVar8 + lVar2);
            uVar10 = uVar9;
            if (!bVar3) {
              uVar10 = uVar1;
            }
          }
          uVar9 = *puVar8;
          fVar12 = *(float *)(lVar6 + uVar9 * 4);
          bVar3 = uVar9 < uVar5;
          if (fVar12 != fVar11) {
            bVar3 = fVar12 < fVar11;
          }
          param_4 = puVar7;
        } while (!bVar3);
        *puVar7 = uVar5;
      }
    }
  }
  return;
}



/* Entry: 10941050c; end: 10941058b;  */

undefined1  [16] FUN_10941050c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_1091803e4(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x28;
    __Znwm();
    *(undefined8 *)(lVar3 + 0x1c) = *param_3;
    FUN_109180464(param_1,uStack_38,plVar2,lVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10941058c; end: 109410623;  */

undefined8 * FUN_10941058c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109410624(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0xc - 0xcU) / 0xc) * 0xc + 0xc;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 109410624; end: 10941066b;  */

undefined8 * FUN_109410624(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_2 < 0x1555555555555556) {
    puVar1 = param_1;
    FUN_1094100c0();
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = (long)puVar1 + param_2 * 0xc;
    return puVar1;
  }
  FUN_109410030();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1092e9240(param_1);
    lVar2 = param_1[1];
    _bzero(lVar2,param_2 << 3);
    param_1[1] = lVar2 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10941066c; end: 1094106df;  */

undefined8 * FUN_10941066c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1092e9240(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 1094106e0; end: 10941077b;  */

long FUN_1094106e0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10941077c; end: 109410837;  */

void FUN_10941077c(long *param_1,ulong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  float afStack_d4 [3];
  undefined4 uStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 auStack_60 [2];
  
  lVar9 = *param_1;
  if (param_2 <= (ulong)((param_1[2] - lVar9 >> 2) * -0x5555555555555555)) {
    return;
  }
  if (param_2 < 0x1555555555555556) {
    lVar10 = param_1[1];
    plVar7 = param_1;
    FUN_10937ed28();
    lVar9 = (long)plVar7 + (lVar10 - lVar9);
    puVar8 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    lVar10 = (long)puVar8 - (long)puVar4;
    puVar2 = (undefined8 *)(lVar9 + lVar10);
    puVar11 = puVar2;
    if (lVar10 != 0) {
      do {
        uVar12 = *puVar8;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar8 + 1);
        *puVar11 = uVar12;
        puVar8 = (undefined8 *)((long)puVar8 + 0xc);
        puVar11 = (undefined8 *)((long)puVar11 + 0xc);
      } while (puVar8 != puVar4);
      puVar8 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar2;
    param_1[1] = lVar9;
    param_1[2] = (long)plVar7 + param_2 * 0xc;
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  FUN_10937ed14();
  afStack_d4[0] = (float)*(double *)(param_2 + 0x20);
  afStack_d4[2] = (float)*(double *)(param_2 + 0x10);
  afStack_d4[1] = 0.0;
  uStack_c8 = 0;
  fStack_c4 = (float)*(double *)(param_2 + 0x28);
  fStack_c0 = (float)*(double *)(param_2 + 0x18);
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0x3f800000;
  param_1[2] = (long)afStack_d4;
  param_1[7] = 0;
  param_1[8] = (long)(param_1 + 1);
  param_1[0xb] = 4;
  param_1[10] = 0xc;
  param_1[9] = (long)(param_1 + 10);
  param_1[1] = 0x300000003;
  *param_1 = 0x242ff4005;
  param_1[5] = (long)&uStack_b0;
  param_1[6] = 0;
  param_1[3] = (long)afStack_d4;
  param_1[4] = (long)&uStack_b0;
  FUN_109410a78(&uStack_b0);
  if ((long *)&uStack_b0 == param_1) goto LAB_1094109c4;
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (param_1[7] != 0) {
    piVar1 = (int *)(param_1[7] + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (*(int *)((long)param_1 + 4) < 1) {
    *(undefined4 *)param_1 = uStack_b0;
LAB_109410970:
    if (2 < iStack_ac) goto LAB_1094109a4;
    *(int *)((long)param_1 + 4) = iStack_ac;
    param_1[1] = lStack_a8;
    puVar8 = (undefined8 *)param_1[9];
    *puVar8 = *puStack_68;
    puVar8[1] = puStack_68[1];
  }
  else {
    lVar9 = 0;
    lVar10 = param_1[8];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)((long)param_1 + 4));
    *(undefined4 *)param_1 = uStack_b0;
    if (*(int *)((long)param_1 + 4) < 3) goto LAB_109410970;
LAB_1094109a4:
    func_0x000109a84868(param_1,&uStack_b0);
  }
  param_1[3] = lStack_98;
  param_1[2] = lStack_a0;
  param_1[5] = lStack_88;
  param_1[4] = lStack_90;
  param_1[7] = lStack_78;
  param_1[6] = lStack_80;
LAB_1094109c4:
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  if (0 < iStack_ac) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_ac);
  }
  if (puStack_68 != auStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 109410838; end: 109410a77;  */

void FUN_109410838(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  float afStack_b4 [3];
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 auStack_40 [2];
  
  afStack_b4[0] = (float)*(double *)(param_2 + 0x20);
  afStack_b4[2] = (float)*(double *)(param_2 + 0x10);
  afStack_b4[1] = 0.0;
  uStack_a8 = 0;
  fStack_a4 = (float)*(double *)(param_2 + 0x28);
  fStack_a0 = (float)*(double *)(param_2 + 0x18);
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0x3f800000;
  param_1[2] = afStack_b4;
  param_1[7] = 0;
  param_1[8] = param_1 + 1;
  param_1[0xb] = 4;
  param_1[10] = 0xc;
  param_1[9] = param_1 + 10;
  param_1[1] = 0x300000003;
  *param_1 = 0x242ff4005;
  param_1[5] = &uStack_90;
  param_1[6] = 0;
  param_1[3] = afStack_b4;
  param_1[4] = &uStack_90;
  FUN_109410a78(&uStack_90);
  if (&uStack_90 == param_1) goto LAB_1094109c4;
  if (lStack_58 != 0) {
    piVar1 = (int *)(lStack_58 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (param_1[7] != 0) {
    piVar1 = (int *)(param_1[7] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (*(int *)((long)param_1 + 4) < 1) {
    *(undefined4 *)param_1 = (undefined4)uStack_90;
LAB_109410970:
    if (2 < uStack_90._4_4_) goto LAB_1094109a4;
    *(int *)((long)param_1 + 4) = uStack_90._4_4_;
    param_1[1] = uStack_88;
    puVar7 = (undefined8 *)param_1[9];
    *puVar7 = *puStack_48;
    puVar7[1] = puStack_48[1];
  }
  else {
    lVar5 = 0;
    lVar6 = param_1[8];
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 4));
    *(undefined4 *)param_1 = (undefined4)uStack_90;
    if (*(int *)((long)param_1 + 4) < 3) goto LAB_109410970;
LAB_1094109a4:
    func_0x000109a84868(param_1,&uStack_90);
  }
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = lStack_58;
  param_1[6] = uStack_60;
LAB_1094109c4:
  if (lStack_58 != 0) {
    piVar1 = (int *)(lStack_58 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_90);
    }
  }
  lStack_58 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (0 < uStack_90._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_90._4_4_);
  }
  if (puStack_48 != auStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return;
}



/* Entry: 109410a78; end: 109410bbf;  */

void FUN_109410a78(undefined4 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long lStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  uStack_98 = 0x42ff0000;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_94 = 0;
  puStack_30 = &uStack_98;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  lStack_58 = (long)&uStack_94 + 4;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  lStack_60 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auStack_38[0] = 0x2010000;
  uStack_28 = 0;
  puStack_50 = &uStack_48;
  FUN_109a479a0(param_2,auStack_38);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *param_1 = 0x42ff0005;
  FUN_109390e94(param_1,&uStack_98);
  if (lStack_60 != 0) {
    piVar1 = (int *)(lStack_60 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_98);
    }
  }
  lStack_60 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  if (0 < (int)uStack_94) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_58 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_94);
  }
  if (puStack_50 != &uStack_48 && puStack_50 != (undefined8 *)0x0) {
    _free(puStack_50[-1]);
  }
  return;
}



/* Entry: 109410bc0; end: 109410c5b;  */

long FUN_109410bc0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109410c5c; end: 109410cf7;  */

long FUN_109410c5c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109410cf8; end: 109410d43;  */

void FUN_109410cf8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    lVar2 = (long)puVar1 + 0xc;
  }
  else {
    lVar2 = param_1;
    FUN_109410d44();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109410d44; end: 109410ea7;  */

long * FUN_109410d44(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar6 = (lVar9 >> 2) * -0x5555555555555555 + 1;
  if (uVar6 < 0x1555555555555556) {
    lVar5 = param_1[2] - *param_1 >> 2;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0x1555555555555555;
    }
    plVar8 = param_1;
    plStack_38 = param_1;
    FUN_1094100c0();
    puStack_50 = (undefined8 *)((long)plVar8 + lVar9);
    lStack_40 = (long)plVar8 + uVar7 * 0xc;
    *puStack_50 = *param_2;
    *(undefined4 *)(puStack_50 + 1) = *(undefined4 *)(param_2 + 1);
    lStack_48 = (long)puStack_50 + 0xc;
    plStack_58 = plVar8;
    FUN_109410044(param_1,&plStack_58);
    plVar8 = (long *)param_1[1];
    if (lStack_48 - (long)puStack_50 != 0) {
      lStack_48 = lStack_48 + (((lStack_48 - (long)puStack_50) - 0xcU) / 0xc) * -0xc + -0xc;
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar8;
  }
  FUN_109410030();
  if (lStack_48 - (long)puStack_50 != 0) {
    lStack_48 = lStack_48 + (((lStack_48 - (long)puStack_50) - 0xcU) / 0xc) * -0xc + -0xc;
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  if (param_1[0x13] != 0) {
    piVar1 = (int *)(param_1[0x13] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xc);
    }
  }
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  if (0 < *(int *)((long)param_1 + 100)) {
    lVar9 = 0;
    lVar5 = param_1[0x14];
    do {
      *(undefined4 *)(lVar5 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)((long)param_1 + 100));
  }
  plVar8 = (long *)param_1[0x15];
  if (plVar8 != param_1 + 0x16 && plVar8 != (long *)0x0) {
    _free(plVar8[-1]);
  }
  if (param_1[7] != 0) {
    piVar1 = (int *)(param_1[7] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar9 = 0;
    lVar5 = param_1[8];
    do {
      *(undefined4 *)(lVar5 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)((long)param_1 + 4));
  }
  plVar8 = (long *)param_1[9];
  if (plVar8 != param_1 + 10 && plVar8 != (long *)0x0) {
    _free(plVar8[-1]);
  }
  return param_1;
}



/* Entry: 109410ea8; end: 109410fcf;  */

long FUN_109410ea8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109410fd0; end: 109411c2b;  */

void FUN_109410fd0(long *param_1,long param_2,long *param_3,uint *param_4,long param_5)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  ulong uVar6;
  long *plVar7;
  float *pfVar8;
  code *pcVar9;
  float **ppfVar10;
  int *piVar11;
  long lVar12;
  long **pplVar13;
  int *piVar14;
  ulong *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  undefined4 *puVar26;
  long lVar27;
  float *pfVar28;
  ulong uVar29;
  long lVar30;
  float *pfVar31;
  int *piVar32;
  ulong uVar33;
  int *piVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  ulong unaff_x25;
  float *pfVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  float fVar42;
  int iStack_14c;
  long **pplStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  undefined4 uStack_e0;
  float *pfStack_d8;
  float *pfStack_d0;
  float *pfStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  float fStack_a0;
  undefined1 uStack_89;
  int *apiStack_88 [3];
  
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  lStack_c0 = 0;
  fStack_a0 = 1.0;
  lVar27 = *param_3;
  if (param_3[1] != lVar27) {
    uVar36 = 0;
    do {
      uStack_130 = *(ulong *)(lVar27 + uVar36 * 8);
      lVar27 = param_5;
      FUN_109411dd4(param_5,&uStack_130);
      if ((lVar27 == 0) && (lVar27 = param_2, FUN_109405fd4(param_2,&uStack_130), lVar27 != 0)) {
        lVar12 = *(long *)(lVar27 + 0x20);
        for (lVar27 = *(long *)(lVar27 + 0x18); uVar21 = uStack_b8, lVar27 != lVar12;
            lVar27 = lVar27 + 0x28) {
          dVar40 = (double)NEON_ucvtf((ulong)*(byte *)(lVar27 + 0x1c));
          iVar16 = (int)(((float)(int)*param_4 * (float)(dVar40 * 1.40625)) / 360.0) +
                   *param_4 * (int)uVar36;
          uVar29 = (ulong)iVar16;
          if (uStack_b8 != 0) {
            uVar33 = uStack_b8 - 1;
            if ((uStack_b8 & uVar33) == 0) {
              unaff_x25 = uVar33 & uVar29;
            }
            else {
              unaff_x25 = uVar29;
              if (uStack_b8 <= uVar29) {
                uVar20 = 0;
                if (uStack_b8 != 0) {
                  uVar20 = uVar29 / uStack_b8;
                }
                unaff_x25 = uVar29 - uVar20 * uStack_b8;
              }
            }
            puVar19 = *(undefined8 **)(lStack_c0 + unaff_x25 * 8);
            if (puVar19 != (undefined8 *)0x0) {
              for (plVar22 = (long *)*puVar19; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
                uVar20 = plVar22[1];
                if (uVar20 == uVar29) {
                  if ((int)plVar22[2] == iVar16) goto LAB_109411400;
                }
                else {
                  if ((uStack_b8 & uVar33) == 0) {
                    uVar20 = uVar20 & uVar33;
                  }
                  else if (uStack_b8 <= uVar20) {
                    uVar35 = 0;
                    if (uStack_b8 != 0) {
                      uVar35 = uVar20 / uStack_b8;
                    }
                    uVar20 = uVar20 - uVar35 * uStack_b8;
                  }
                  if (uVar20 != unaff_x25) break;
                }
              }
            }
          }
          plVar22 = (long *)0x30;
          __Znwm();
          plStack_f8 = &lStack_c0;
          plStack_f0 = (long *)0x1;
          *plVar22 = 0;
          plVar22[1] = uVar29;
          *(int *)(plVar22 + 2) = iVar16;
          plVar22[4] = 0;
          plVar22[5] = 0;
          plVar22[3] = 0;
          if ((uVar21 == 0) || (fStack_a0 * (float)uVar21 < (float)(uStack_a8 + 1))) {
            uVar33 = 1;
            if (2 < uVar21) {
              uVar33 = (ulong)((uVar21 & uVar21 - 1) != 0);
            }
            uVar33 = uVar33 | uVar21 << 1;
            uVar20 = (ulong)((float)(uStack_a8 + 1) / fStack_a0);
            if (uVar33 <= uVar20) {
              uVar33 = uVar20;
            }
            uVar20 = uVar21;
            plStack_100 = plVar22;
            if (uVar33 - 1 == 0) {
              uVar33 = 2;
            }
            else if ((uVar33 & uVar33 - 1) != 0) {
              __ZNSt3__112__next_primeEm();
              uVar20 = uStack_b8;
            }
            if (uVar20 < uVar33) {
LAB_109411208:
              if (uVar33 >> 0x3d != 0) {
                func_0x000104c4f740();
                goto LAB_109411b64;
              }
              lVar30 = uVar33 << 3;
              __Znwm();
              bVar1 = lStack_c0 != 0;
              lStack_c0 = lVar30;
              if (bVar1) {
                __ZdlPv();
              }
              uVar21 = 0;
              do {
                *(undefined8 *)(lStack_c0 + uVar21 * 8) = 0;
                uVar21 = uVar21 + 1;
              } while (uVar33 != uVar21);
              uVar21 = uVar33;
              uStack_b8 = uVar33;
              if (plStack_b0 != (long *)0x0) {
                uVar20 = plStack_b0[1];
                uVar35 = uVar33 - 1;
                if ((uVar33 & uVar35) == 0) {
                  uVar20 = uVar20 & uVar35;
                }
                else if (uVar33 <= uVar20) {
                  uVar25 = 0;
                  if (uVar33 != 0) {
                    uVar25 = uVar20 / uVar33;
                  }
                  uVar20 = uVar20 - uVar25 * uVar33;
                }
                *(long ***)(lStack_c0 + uVar20 * 8) = &plStack_b0;
                plVar23 = (long *)*plStack_b0;
                plVar7 = plStack_b0;
                while (plVar23 != (long *)0x0) {
                  uVar25 = plVar23[1];
                  if ((uVar33 & uVar35) == 0) {
                    uVar25 = uVar25 & uVar35;
                  }
                  else if (uVar33 <= uVar25) {
                    uVar6 = 0;
                    if (uVar33 != 0) {
                      uVar6 = uVar25 / uVar33;
                    }
                    uVar25 = uVar25 - uVar6 * uVar33;
                  }
                  plVar24 = plVar23;
                  if (uVar25 != uVar20) {
                    if (*(long *)(lStack_c0 + uVar25 * 8) == 0) {
                      *(long **)(lStack_c0 + uVar25 * 8) = plVar7;
                      uVar20 = uVar25;
                    }
                    else {
                      *plVar7 = *plVar23;
                      *plVar23 = **(long **)(lStack_c0 + uVar25 * 8);
                      **(undefined8 **)(lStack_c0 + uVar25 * 8) = plVar23;
                      plVar24 = plVar7;
                    }
                  }
                  plVar7 = plVar24;
                  plVar23 = (long *)*plVar24;
                }
              }
            }
            else {
              uVar21 = uVar20;
              if (uVar33 < uVar20) {
                uVar21 = (ulong)((float)uStack_a8 / fStack_a0);
                if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if (1 < uVar21) {
                  uVar21 = 1L << (-LZCOUNT(uVar21 - 1) & 0x3fU);
                }
                lVar30 = lStack_c0;
                if (uVar33 <= uVar21) {
                  uVar33 = uVar21;
                }
                uVar21 = uStack_b8;
                if (uVar33 < uVar20) {
                  if (uVar33 != 0) goto LAB_109411208;
                  lStack_c0 = 0;
                  if (lVar30 != 0) {
                    __ZdlPv();
                  }
                  uStack_b8 = 0;
                  uVar21 = 0;
                }
              }
            }
            if ((uVar21 & uVar21 - 1) == 0) {
              unaff_x25 = uVar21 - 1 & uVar29;
            }
            else {
              unaff_x25 = uVar29;
              if (uVar21 <= uVar29) {
                uVar33 = 0;
                if (uVar21 != 0) {
                  uVar33 = uVar29 / uVar21;
                }
                unaff_x25 = uVar29 - uVar33 * uVar21;
              }
            }
          }
          plVar23 = *(long **)(lStack_c0 + unaff_x25 * 8);
          if (plVar23 == (long *)0x0) {
            *plVar22 = (long)plStack_b0;
            *(long ***)(lStack_c0 + unaff_x25 * 8) = &plStack_b0;
            plStack_b0 = plVar22;
            if (*plVar22 != 0) {
              uVar29 = *(ulong *)(*plVar22 + 8);
              if ((uVar21 & uVar21 - 1) == 0) {
                uVar29 = uVar29 & uVar21 - 1;
              }
              else if (uVar21 <= uVar29) {
                uVar33 = 0;
                if (uVar21 != 0) {
                  uVar33 = uVar29 / uVar21;
                }
                uVar29 = uVar29 - uVar33 * uVar21;
              }
              *(long **)(lStack_c0 + uVar29 * 8) = plVar22;
            }
          }
          else {
            *plVar22 = *plVar23;
            *plVar23 = (long)plVar22;
          }
          plStack_100 = (long *)0x0;
          uStack_a8 = uStack_a8 + 1;
          FUN_109411eac(&plStack_100);
LAB_109411400:
          puVar26 = (undefined4 *)plVar22[4];
          if (puVar26 < (undefined4 *)plVar22[5]) {
            *puVar26 = *(undefined4 *)(lVar27 + 0x20);
            *(long *)(puVar26 + 2) = lVar27;
            puVar26 = puVar26 + 4;
          }
          else {
            unaff_x25 = plVar22[3];
            uVar21 = ((long)((long)puVar26 - unaff_x25) >> 4) + 1;
            if (uVar21 >> 0x3c != 0) {
              func_0x000109411efc();
              goto LAB_109411b64;
            }
            uVar33 = plVar22[5] - unaff_x25;
            uVar29 = (long)uVar33 >> 3;
            if (uVar29 <= uVar21) {
              uVar29 = uVar21;
            }
            if (0x7fffffffffffffef < uVar33) {
              uVar29 = 0xfffffffffffffff;
            }
            if (uVar29 >> 0x3c != 0) {
              func_0x000104c4f740();
              goto LAB_109411b64;
            }
            lVar30 = uVar29 << 4;
            __Znwm();
            puVar26 = (undefined4 *)(lVar30 + ((long)puVar26 - unaff_x25));
            *puVar26 = *(undefined4 *)(lVar27 + 0x20);
            *(long *)(puVar26 + 2) = lVar27;
            puVar26 = puVar26 + 4;
            _memcpy();
            plVar22[3] = lVar30;
            plVar22[4] = (long)puVar26;
            plVar22[5] = lVar30 + uVar29 * 0x10;
            if (unaff_x25 != 0) {
              __ZdlPv(unaff_x25);
            }
          }
          plVar22[4] = (long)puVar26;
        }
      }
      uVar36 = uVar36 + 1;
      lVar27 = *param_3;
    } while (uVar36 < (ulong)(param_3[1] - lVar27 >> 3));
  }
  uVar18 = *param_4;
  fVar42 = ((float)param_4[4] * (float)(int)uVar18) / 360.0;
  iVar17 = (int)(fVar42 * 2.0 + 1.0);
  iVar16 = uVar18 + (uVar18 & 1) + -2;
  pfStack_c8 = (float *)0x0;
  if (iVar17 <= iVar16) {
    iVar16 = iVar17;
  }
  pfStack_d8 = (float *)0x0;
  pfStack_d0 = (float *)0x0;
  func_0x0001073b504c(&pfStack_d8,(long)iVar16);
  iVar16 = iVar16 / 2;
  iVar17 = -iVar16;
  if (iVar17 <= iVar16) {
    do {
      pfVar38 = pfStack_d0;
      fVar39 = (float)-(iVar17 * iVar17) / (fVar42 * (fVar42 + fVar42));
      _expf();
      if (pfVar38 < pfStack_c8) {
        pfVar28 = pfVar38 + 1;
        *pfVar38 = fVar39;
      }
      else {
        lVar27 = (long)pfVar38 - (long)pfStack_d8;
        uVar36 = (lVar27 >> 2) + 1;
        if (uVar36 >> 0x3e != 0) {
          FUN_1092cc18c();
          goto LAB_109411b64;
        }
        uVar21 = (long)pfStack_c8 - (long)pfStack_d8 >> 1;
        if (uVar21 <= uVar36) {
          uVar21 = uVar36;
        }
        if (0x7ffffffffffffffb < (ulong)((long)pfStack_c8 - (long)pfStack_d8)) {
          uVar21 = 0x3fffffffffffffff;
        }
        ppfVar10 = &pfStack_d8;
        FUN_1092cc1a0();
        pfVar8 = pfStack_d8;
        pfVar38 = (float *)((long)ppfVar10 + lVar27);
        pfVar2 = (float *)((long)ppfVar10 + uVar21 * 4);
        pfVar31 = (float *)((long)pfVar38 - ((long)pfStack_d0 - (long)pfStack_d8));
        pfVar28 = pfVar38 + 1;
        *pfVar38 = fVar39;
        _memcpy(pfVar31,pfVar8);
        bVar1 = pfStack_d8 != (float *)0x0;
        pfStack_d8 = pfVar31;
        pfStack_c8 = pfVar2;
        if (bVar1) {
          pfStack_d0 = pfVar28;
          __ZdlPv();
        }
      }
      iVar17 = iVar17 + 1;
      pfStack_d0 = pfVar28;
    } while (iVar16 + 1 != iVar17);
  }
  uVar36 = uStack_a8;
  if (uStack_a8 == 0) {
    piVar34 = (int *)0x0;
    piVar11 = (int *)0x0;
  }
  else {
    if (uStack_a8 >> 0x3d != 0) {
      func_0x000109411f10();
LAB_109411b64:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x109411b68);
      (*pcVar9)();
    }
    piVar11 = (int *)(uStack_a8 << 3);
    __Znwm();
    piVar34 = piVar11 + uVar36 * 2;
  }
  plStack_f8 = (long *)0x0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_e0 = 0x3f800000;
  piVar14 = piVar11;
  if (plStack_b0 != (long *)0x0) {
    uVar36 = (ulong)&pplStack_148 | 4;
    plVar22 = plStack_b0;
    piVar32 = piVar11;
    do {
      uVar21 = uStack_b8;
      lVar27 = lStack_c0;
      iVar16 = (int)plVar22[2];
      uVar18 = *param_4;
      uVar29 = (ulong)(int)uVar18;
      iVar17 = 0;
      if (uVar18 != 0) {
        iVar17 = iVar16 / (int)uVar18;
      }
      iVar4 = iVar16 - iVar17 * uVar18;
      pplStack_148 = (long **)(CONCAT44(iVar17,iVar4) & 0xffffffff0000ffff);
      iVar37 = 0;
      if ((long)pfStack_d0 - (long)pfStack_d8 != 0) {
        uVar35 = (long)pfStack_d0 - (long)pfStack_d8 >> 2;
        uVar33 = (uVar29 + (long)(short)iVar4) - (uVar35 >> 1);
        uVar20 = 1;
        pfVar38 = pfStack_d8;
        do {
          sVar5 = 0;
          if (uVar29 != 0) {
            sVar5 = (short)(uVar33 / uVar29);
          }
          lVar12 = lVar27;
          FUN_109411c2c(lVar27,uVar21,
                        iVar17 * uVar18 + (int)(short)((short)uVar33 - sVar5 * (short)uVar18));
          if (lVar12 != 0) {
            iVar37 = (int)((float)iVar37 +
                          *pfVar38 *
                          (float)(ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18) >> 4));
          }
          uVar33 = uVar33 + 1;
          pfVar38 = pfVar38 + 1;
          bVar1 = uVar20 < uVar35;
          uVar20 = (ulong)((int)uVar20 + 1);
        } while (bVar1);
      }
      pplVar13 = &plStack_100;
      uStack_130 = uVar36;
      FUN_1093c8fa4(pplVar13,uVar36,&UNK_10dd5b8f9,&uStack_130,apiStack_88);
      iVar17 = *(int *)((long)pplVar13 + 0x14);
      pplVar13 = &plStack_100;
      uStack_130 = uVar36;
      FUN_1093c8fa4(pplVar13,uVar36,&UNK_10dd5b8f9,&uStack_130,apiStack_88);
      if (iVar17 <= iVar37) {
        iVar17 = iVar37;
      }
      *(int *)((long)pplVar13 + 0x14) = iVar17;
      if (piVar11 < piVar34) {
        *piVar11 = iVar16;
        piVar11[1] = iVar37;
        piVar14 = piVar32;
      }
      else {
        uVar21 = ((long)piVar11 - (long)piVar32 >> 3) + 1;
        if (uVar21 >> 0x3d != 0) {
          func_0x000109411f10();
          goto LAB_109411b64;
        }
        uVar29 = (long)piVar34 - (long)piVar32 >> 2;
        if (uVar29 <= uVar21) {
          uVar29 = uVar21;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)piVar34 - (long)piVar32)) {
          uVar29 = 0x1fffffffffffffff;
        }
        if (uVar29 >> 0x3d != 0) {
          func_0x000104c4f740();
          goto LAB_109411b64;
        }
        piVar14 = (int *)(uVar29 << 3);
        __Znwm();
        piVar11 = (int *)((long)piVar14 + ((long)piVar11 - (long)piVar32));
        piVar34 = piVar14 + uVar29 * 2;
        *piVar11 = iVar16;
        piVar11[1] = iVar37;
        _memcpy();
        if (piVar32 != (int *)0x0) {
          __ZdlPv(piVar32);
        }
      }
      piVar11 = piVar11 + 2;
      plVar22 = (long *)*plVar22;
      piVar32 = piVar14;
    } while (plVar22 != (long *)0x0);
  }
  lVar27 = 0;
  if (piVar11 != piVar14) {
    lVar27 = LZCOUNT((long)piVar11 - (long)piVar14 >> 3) * -2 + 0x7e;
  }
  FUN_109411f24(piVar14,piVar11,lVar27,1);
  if (plStack_f0 == (long *)0x0) {
    uVar18 = 0;
  }
  else {
    iVar16 = 0;
    plVar22 = plStack_f0;
    do {
      iVar16 = *(int *)((long)plVar22 + 0x14) + iVar16;
      plVar22 = (long *)*plVar22;
    } while (plVar22 != (long *)0x0);
    dVar40 = 0.0;
    plVar22 = plStack_f0;
    do {
      dVar41 = (double)*(int *)((long)plVar22 + 0x14) - (double)iVar16 / (double)uStack_e8;
      dVar40 = dVar40 + dVar41 * dVar41;
      plVar22 = (long *)*plVar22;
    } while (plVar22 != (long *)0x0);
    uVar18 = 0;
    plVar22 = plStack_f0;
    do {
      if ((double)iVar16 / (double)uStack_e8 + SQRT(dVar40 / (double)(uStack_e8 - 1)) * 0.5 <=
          (double)*(int *)((long)plVar22 + 0x14)) {
        uVar18 = uVar18 + 1;
      }
      plVar22 = (long *)*plVar22;
    } while (plVar22 != (long *)0x0);
  }
  uVar3 = param_4[1];
  if ((int)param_4[1] <= (int)uVar18) {
    uVar3 = uVar18;
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_110 = 0x3f800000;
  pplStack_148 = &plStack_140;
  plStack_140 = (long *)0x0;
  iVar16 = (int)((float)param_4[3] * (float)(int)*param_4);
  uStack_138 = 0;
  if (iVar16 < 2) {
    iVar16 = 1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_109411cc4(param_1,3000);
  piVar34 = piVar14;
  do {
    if (piVar11 == piVar34) {
      func_0x000105340e88(&pplStack_148,plStack_140);
      FUN_1093c8ab0(&uStack_130);
      FUN_1093c8ab0(&plStack_100);
      if (piVar14 != (int *)0x0) {
        __ZdlPv();
      }
      if (pfStack_d8 != (float *)0x0) {
        pfStack_d0 = pfStack_d8;
        __ZdlPv();
      }
      func_0x000109411d70(&lStack_c0);
      return;
    }
    iVar17 = *piVar34;
    iVar4 = piVar34[1];
    iStack_14c = 0;
    if (*param_4 != 0) {
      iStack_14c = iVar17 / (int)*param_4;
    }
    pplVar13 = &plStack_100;
    apiStack_88[0] = &iStack_14c;
    FUN_1093c8fa4(pplVar13,&iStack_14c,&UNK_10dd5b8f9,apiStack_88,&uStack_89);
    if ((float)param_4[2] * (float)*(int *)((long)pplVar13 + 0x14) < (float)iVar4) {
      lVar27 = lStack_c0;
      FUN_109411c2c(lStack_c0,uStack_b8,iVar17);
      plVar22 = plStack_140;
      if (lVar27 == 0) {
        FUN_109262df8(&UNK_10f639994);
        goto LAB_109411b64;
      }
      for (; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        if (*(int *)((long)plVar22 + 0x1c) <= iStack_14c) {
          if (iStack_14c <= *(int *)((long)plVar22 + 0x1c)) goto LAB_1094119e0;
          plVar22 = plVar22 + 1;
        }
      }
      if ((int)uStack_138 < (int)uVar3) {
        func_0x000105341058(&pplStack_148,&iStack_14c,&iStack_14c);
LAB_1094119e0:
        puVar15 = &uStack_130;
        apiStack_88[0] = &iStack_14c;
        FUN_1093c8fa4(puVar15,&iStack_14c,&UNK_10dd5b8f9,apiStack_88,&uStack_89);
        if (*(int *)((long)puVar15 + 0x14) < iVar16) {
          FUN_109411cc4(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 +
                                (*(long *)(lVar27 + 0x20) - *(long *)(lVar27 + 0x18) >> 4));
          lVar12 = *(long *)(lVar27 + 0x18);
          if (*(long *)(lVar27 + 0x20) != lVar12) {
            lVar30 = 0;
            uVar36 = 0;
            do {
              FUN_1093ff1f4(param_1,*(undefined8 *)((undefined4 *)(lVar12 + lVar30) + 2));
              *(undefined4 *)(param_1[1] + -8) = *(undefined4 *)(lVar12 + lVar30);
              uVar36 = uVar36 + 1;
              lVar12 = *(long *)(lVar27 + 0x18);
              lVar30 = lVar30 + 0x10;
            } while (uVar36 < (ulong)(*(long *)(lVar27 + 0x20) - lVar12 >> 4));
          }
          *(int *)((long)puVar15 + 0x14) = *(int *)((long)puVar15 + 0x14) + 1;
        }
      }
    }
    piVar34 = piVar34 + 2;
  } while( true );
}



/* Entry: 109411c2c; end: 109411cc3;  */

long * FUN_109411c2c(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar2 = (ulong)param_3;
    uVar3 = param_2 - 1;
    if ((param_2 & uVar3) == 0) {
      uVar4 = uVar3 & uVar2;
    }
    else {
      uVar4 = uVar2;
      if (param_2 <= uVar2) {
        uVar4 = 0;
        if (param_2 != 0) {
          uVar4 = uVar2 / param_2;
        }
        uVar4 = uVar2 - uVar4 * param_2;
      }
    }
    plVar5 = *(long **)(param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == uVar2) {
          if (*(int *)(plVar5 + 2) == param_3) {
            return plVar5;
          }
        }
        else {
          if ((param_2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (param_2 <= uVar6) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar6 / param_2;
            }
            uVar6 = uVar6 - uVar1 * param_2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109411cc4; end: 109411dd3;  */

long * FUN_109411cc4(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 3) * -0x3333333333333333) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_10940231c();
      plVar1 = (long *)param_1[2];
      while (plVar1 != (long *)0x0) {
        lVar3 = *plVar1;
        if (plVar1[3] != 0) {
          plVar1[4] = plVar1[3];
          __ZdlPv();
        }
        __ZdlPv(plVar1);
        plVar1 = (long *)lVar3;
      }
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar4 = param_1[1];
    plVar1 = param_1;
    FUN_109402330();
    lVar3 = (long)plVar1 + (lVar4 - lVar3);
    lVar4 = lVar3 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    plVar2 = (long *)*param_1;
    *param_1 = lVar4;
    param_1[1] = lVar3;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    param_1 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar2;
    }
  }
  return param_1;
}



/* Entry: 109411dd4; end: 109411eab;  */

long * FUN_109411dd4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109411eac; end: 109411efb;  */

long * FUN_109411eac(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if (((char)param_1[2] == '\x01') && (*(long *)(lVar1 + 0x18) != 0)) {
      *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x18);
      __ZdlPv();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109411efc; end: 109411f23;  */

void FUN_109411efc(undefined8 param_1,undefined1 (*param_2) [16],long param_3,ulong param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  int *piVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  int *piVar26;
  ulong uVar27;
  undefined1 (*pauVar28) [16];
  undefined1 auVar29 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  pauVar8 = (undefined1 (*) [16])&DAT_10f62a4d8;
  func_0x000104c4f6cc();
LAB_109411f50:
  do {
    pauVar28 = pauVar8;
    uVar15 = (long)param_2 - (long)pauVar28 >> 3;
    if (uVar15 - 2 == 0 || (long)uVar15 < 2) {
      if (uVar15 < 2) {
        return;
      }
      if (uVar15 == 2) {
        bVar3 = *(int *)*pauVar28 < *(int *)(param_2[-1] + 8);
        if (*(int *)(param_2[-1] + 0xc) != *(int *)(*pauVar28 + 4)) {
          bVar3 = *(int *)(*pauVar28 + 4) <= *(int *)(param_2[-1] + 0xc);
        }
        if (!bVar3) {
          return;
        }
        uVar12 = *(undefined8 *)*pauVar28;
LAB_1094127c0:
        *(undefined8 *)*pauVar28 = *(undefined8 *)(param_2[-1] + 8);
LAB_1094127c8:
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
        return;
      }
    }
    else {
      if (uVar15 == 3) {
        iVar11 = *(int *)(*pauVar28 + 0xc);
        bVar3 = *(int *)*pauVar28 < *(int *)(*pauVar28 + 8);
        if (iVar11 != *(int *)(*pauVar28 + 4)) {
          bVar3 = *(int *)(*pauVar28 + 4) <= iVar11;
        }
        bVar5 = *(int *)(*pauVar28 + 8) < *(int *)(param_2[-1] + 8);
        if (*(int *)(param_2[-1] + 0xc) != iVar11) {
          bVar5 = iVar11 <= *(int *)(param_2[-1] + 0xc);
        }
        if (!bVar3) {
          if (!bVar5) {
            return;
          }
          uVar12 = *(undefined8 *)(*pauVar28 + 8);
          *(undefined8 *)(*pauVar28 + 8) = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar12;
          bVar3 = *(int *)*pauVar28 < *(int *)(*pauVar28 + 8);
          if (*(int *)(*pauVar28 + 0xc) != *(int *)(*pauVar28 + 4)) {
            bVar3 = *(int *)(*pauVar28 + 4) <= *(int *)(*pauVar28 + 0xc);
          }
          if (!bVar3) {
            return;
          }
          auVar29 = NEON_ext(*pauVar28,*pauVar28,8,1);
          *(long *)(*pauVar28 + 8) = auVar29._8_8_;
          *(long *)*pauVar28 = auVar29._0_8_;
          return;
        }
        uVar12 = *(undefined8 *)*pauVar28;
        if (!bVar5) {
          *(undefined8 *)*pauVar28 = *(undefined8 *)(*pauVar28 + 8);
          *(undefined8 *)(*pauVar28 + 8) = uVar12;
          iVar11 = (int)((ulong)uVar12 >> 0x20);
          bVar3 = (int)uVar12 < *(int *)(param_2[-1] + 8);
          if (*(int *)(param_2[-1] + 0xc) != iVar11) {
            bVar3 = iVar11 <= *(int *)(param_2[-1] + 0xc);
          }
          if (!bVar3) {
            return;
          }
          *(undefined8 *)(*pauVar28 + 8) = *(undefined8 *)(param_2[-1] + 8);
          goto LAB_1094127c8;
        }
        goto LAB_1094127c0;
      }
      if (uVar15 == 4) {
        piVar26 = (int *)(param_2[-1] + 8);
        puVar1 = (ulong *)(*pauVar28 + 8);
        pauVar8 = pauVar28 + 1;
        iVar11 = *(int *)(*pauVar28 + 0xc);
        bVar3 = *(int *)*pauVar28 < (int)*puVar1;
        if (iVar11 != *(int *)(*pauVar28 + 4)) {
          bVar3 = *(int *)(*pauVar28 + 4) <= iVar11;
        }
        uVar15 = (ulong)*(uint *)*pauVar8;
        iVar14 = *(int *)(pauVar28[1] + 4);
        bVar5 = (int)*puVar1 < (int)*(uint *)*pauVar8;
        if (iVar14 != iVar11) {
          bVar5 = iVar11 <= iVar14;
        }
        if (bVar3) {
          uVar18 = *(ulong *)*pauVar28;
          if (!bVar5) {
            *(ulong *)*pauVar28 = *puVar1;
            *puVar1 = uVar18;
            uVar15 = (ulong)*(uint *)*pauVar8;
            iVar14 = *(int *)(pauVar28[1] + 4);
            iVar11 = (int)(uVar18 >> 0x20);
            bVar3 = (int)uVar18 < (int)*(uint *)*pauVar8;
            if (iVar14 != iVar11) {
              bVar3 = iVar11 <= iVar14;
            }
            if (bVar3) {
              *puVar1 = *(ulong *)*pauVar8;
              *(ulong *)*pauVar8 = uVar18;
              uVar15 = uVar18;
              iVar14 = iVar11;
            }
            goto LAB_109412d18;
          }
          *(undefined8 *)*pauVar28 = *(undefined8 *)*pauVar8;
          *(ulong *)*pauVar8 = uVar18;
        }
        else {
          if (!bVar5) goto LAB_109412d18;
          uVar18 = *puVar1;
          *puVar1 = *(ulong *)*pauVar8;
          *(ulong *)*pauVar8 = uVar18;
          bVar3 = *(int *)*pauVar28 < (int)*puVar1;
          if (*(int *)(*pauVar28 + 0xc) != *(int *)(*pauVar28 + 4)) {
            bVar3 = *(int *)(*pauVar28 + 4) <= *(int *)(*pauVar28 + 0xc);
          }
          if (bVar3) {
            uVar15 = *(ulong *)*pauVar28;
            *(ulong *)*pauVar28 = *puVar1;
            *puVar1 = uVar15;
            uVar15 = (ulong)*(uint *)*pauVar8;
            iVar14 = *(int *)(pauVar28[1] + 4);
            goto LAB_109412d18;
          }
        }
        uVar15 = uVar18;
        iVar14 = (int)(uVar18 >> 0x20);
LAB_109412d18:
        bVar3 = (int)uVar15 < *piVar26;
        if (*(int *)(param_2[-1] + 0xc) != iVar14) {
          bVar3 = iVar14 <= *(int *)(param_2[-1] + 0xc);
        }
        if (bVar3) {
          uVar12 = *(undefined8 *)*pauVar8;
          *(undefined8 *)*pauVar8 = *(undefined8 *)piVar26;
          *(undefined8 *)piVar26 = uVar12;
          bVar3 = (int)*puVar1 < *(int *)*pauVar8;
          if (*(int *)(pauVar28[1] + 4) != *(int *)(*pauVar28 + 0xc)) {
            bVar3 = *(int *)(*pauVar28 + 0xc) <= *(int *)(pauVar28[1] + 4);
          }
          if (bVar3) {
            uVar15 = *puVar1;
            *puVar1 = *(ulong *)*pauVar8;
            *(ulong *)*pauVar8 = uVar15;
            bVar3 = *(int *)*pauVar28 < (int)*puVar1;
            if (*(int *)(*pauVar28 + 0xc) != *(int *)(*pauVar28 + 4)) {
              bVar3 = *(int *)(*pauVar28 + 4) <= *(int *)(*pauVar28 + 0xc);
            }
            if (bVar3) {
              uVar15 = *(ulong *)*pauVar28;
              *(ulong *)*pauVar28 = *puVar1;
              *puVar1 = uVar15;
            }
          }
        }
        return;
      }
      if (uVar15 == 5) {
        FUN_109412c24(pauVar28,*pauVar28 + 8,pauVar28 + 1,pauVar28[1] + 8);
        bVar3 = *(int *)(pauVar28[1] + 8) < *(int *)(param_2[-1] + 8);
        if (*(int *)(param_2[-1] + 0xc) != *(int *)(pauVar28[1] + 0xc)) {
          bVar3 = *(int *)(pauVar28[1] + 0xc) <= *(int *)(param_2[-1] + 0xc);
        }
        if (!bVar3) {
          return;
        }
        uVar12 = *(undefined8 *)(pauVar28[1] + 8);
        *(undefined8 *)(pauVar28[1] + 8) = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
        bVar3 = *(int *)pauVar28[1] < *(int *)(pauVar28[1] + 8);
        if (*(int *)(pauVar28[1] + 0xc) != *(int *)(pauVar28[1] + 4)) {
          bVar3 = *(int *)(pauVar28[1] + 4) <= *(int *)(pauVar28[1] + 0xc);
        }
        if (!bVar3) {
          return;
        }
        uVar12 = *(undefined8 *)pauVar28[1];
        uVar16 = *(undefined8 *)(pauVar28[1] + 8);
        *(undefined8 *)pauVar28[1] = uVar16;
        *(undefined8 *)(pauVar28[1] + 8) = uVar12;
        iVar11 = (int)((ulong)uVar16 >> 0x20);
        bVar3 = *(int *)(*pauVar28 + 8) < (int)uVar16;
        if (*(int *)(*pauVar28 + 0xc) != iVar11) {
          bVar3 = *(int *)(*pauVar28 + 0xc) <= iVar11;
        }
        if (!bVar3) {
          return;
        }
        uVar12 = *(undefined8 *)(*pauVar28 + 8);
        *(undefined8 *)(*pauVar28 + 8) = uVar16;
        *(undefined8 *)pauVar28[1] = uVar12;
        bVar3 = *(int *)*pauVar28 < (int)uVar16;
        if (*(int *)(*pauVar28 + 4) != iVar11) {
          bVar3 = *(int *)(*pauVar28 + 4) <= iVar11;
        }
        if (!bVar3) {
          return;
        }
        uVar12 = *(undefined8 *)*pauVar28;
        *(undefined8 *)*pauVar28 = uVar16;
        *(undefined8 *)(*pauVar28 + 8) = uVar12;
        return;
      }
    }
    if ((long)uVar15 < 0x18) {
      pauVar8 = (undefined1 (*) [16])(*pauVar28 + 8);
      if ((param_4 & 1) == 0) {
        if (pauVar28 == param_2 || pauVar8 == param_2) {
          return;
        }
        do {
          pauVar9 = pauVar8;
          bVar3 = *(int *)*pauVar28 < *(int *)(*pauVar28 + 8);
          if (*(int *)(*pauVar28 + 0xc) != *(int *)(*pauVar28 + 4)) {
            bVar3 = *(int *)(*pauVar28 + 4) <= *(int *)(*pauVar28 + 0xc);
          }
          if (bVar3) {
            uVar12 = *(undefined8 *)*pauVar9;
            pauVar8 = pauVar9;
            do {
              pauVar28 = (undefined1 (*) [16])(pauVar8[-1] + 8);
              *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar28;
              iVar11 = (int)((ulong)uVar12 >> 0x20);
              bVar3 = *(int *)pauVar8[-1] < (int)uVar12;
              if (*(int *)(pauVar8[-1] + 4) != iVar11) {
                bVar3 = *(int *)(pauVar8[-1] + 4) <= iVar11;
              }
              pauVar8 = pauVar28;
            } while (bVar3);
            *(undefined8 *)*pauVar28 = uVar12;
          }
          pauVar8 = (undefined1 (*) [16])(*pauVar9 + 8);
          pauVar28 = pauVar9;
        } while ((undefined1 (*) [16])(*pauVar9 + 8) != param_2);
        return;
      }
      if (pauVar28 == param_2 || pauVar8 == param_2) {
        return;
      }
      lVar21 = 0;
      pauVar9 = pauVar28;
      do {
        bVar3 = *(int *)*pauVar9 < *(int *)(*pauVar9 + 8);
        if (*(int *)(*pauVar9 + 0xc) != *(int *)(*pauVar9 + 4)) {
          bVar3 = *(int *)(*pauVar9 + 4) <= *(int *)(*pauVar9 + 0xc);
        }
        if (bVar3) {
          uVar12 = *(undefined8 *)*pauVar8;
          lVar7 = lVar21;
          do {
            lVar22 = lVar7;
            puVar2 = (undefined8 *)(*pauVar28 + lVar22);
            puVar2[1] = *puVar2;
            pauVar9 = pauVar28;
            if (lVar22 == 0) goto LAB_10941288c;
            iVar11 = (int)((ulong)uVar12 >> 0x20);
            bVar3 = *(int *)(puVar2 + -1) < (int)uVar12;
            if (*(int *)((long)puVar2 + -4) != iVar11) {
              bVar3 = *(int *)((long)puVar2 + -4) <= iVar11;
            }
            lVar7 = lVar22 + -8;
          } while (bVar3);
          pauVar9 = (undefined1 (*) [16])(*pauVar28 + lVar22);
LAB_10941288c:
          *(undefined8 *)*pauVar9 = uVar12;
        }
        puVar6 = *pauVar8;
        lVar21 = lVar21 + 8;
        pauVar9 = pauVar8;
        pauVar8 = (undefined1 (*) [16])(puVar6 + 8);
        if ((undefined1 (*) [16])(puVar6 + 8) == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pauVar28 == param_2) {
        return;
      }
      uVar13 = uVar15 - 2 >> 1;
      uVar18 = uVar13;
      do {
        if ((long)uVar18 <= (long)uVar13) {
          uVar27 = uVar18 << 1 | 1;
          piVar26 = (int *)(*pauVar28 + uVar27 * 8);
          uVar23 = uVar18 * 2 + 2;
          if ((long)uVar23 < (long)uVar15) {
            iVar11 = piVar26[2];
            bVar3 = iVar11 < *piVar26;
            if (piVar26[1] != piVar26[3]) {
              bVar3 = piVar26[3] <= piVar26[1];
            }
            piVar20 = piVar26 + 2;
            if (!bVar3) {
              piVar20 = piVar26;
              uVar23 = uVar27;
              iVar11 = *piVar26;
            }
          }
          else {
            piVar20 = piVar26;
            uVar23 = uVar27;
            iVar11 = *piVar26;
          }
          piVar26 = (int *)(*pauVar28 + uVar18 * 8);
          bVar3 = *piVar26 < iVar11;
          if (piVar20[1] != piVar26[1]) {
            bVar3 = piVar26[1] <= piVar20[1];
          }
          if (!bVar3) {
            uVar12 = *(undefined8 *)piVar26;
            do {
              piVar19 = piVar20;
              *(undefined8 *)piVar26 = *(undefined8 *)piVar19;
              if ((long)uVar13 < (long)uVar23) break;
              uVar27 = uVar23 << 1 | 1;
              piVar26 = (int *)(*pauVar28 + uVar27 * 8);
              uVar23 = uVar23 * 2 + 2;
              if ((long)uVar23 < (long)uVar15) {
                iVar11 = piVar26[2];
                bVar3 = iVar11 < *piVar26;
                if (piVar26[1] != piVar26[3]) {
                  bVar3 = piVar26[3] <= piVar26[1];
                }
                piVar20 = piVar26 + 2;
                if (!bVar3) {
                  piVar20 = piVar26;
                  uVar23 = uVar27;
                  iVar11 = *piVar26;
                }
              }
              else {
                piVar20 = piVar26;
                uVar23 = uVar27;
                iVar11 = *piVar26;
              }
              iVar14 = (int)((ulong)uVar12 >> 0x20);
              bVar3 = (int)uVar12 < iVar11;
              if (piVar20[1] != iVar14) {
                bVar3 = iVar14 <= piVar20[1];
              }
              piVar26 = piVar19;
            } while (!bVar3);
            *(undefined8 *)piVar19 = uVar12;
          }
        }
        bVar3 = uVar18 != 0;
        uVar18 = uVar18 - 1;
      } while (bVar3);
      do {
        uVar12 = *(undefined8 *)*pauVar28;
        pauVar8 = pauVar28;
        uVar18 = 0;
        do {
          uVar23 = uVar18 << 1 | 1;
          uVar13 = uVar18 * 2 + 2;
          pauVar9 = (undefined1 (*) [16])(*pauVar8 + uVar18 * 8 + 8);
          uVar27 = uVar23;
          if ((long)uVar13 < (long)uVar15) {
            bVar3 = *(int *)*(undefined1 (*) [16])(pauVar8[1] + uVar18 * 8) <
                    *(int *)(*pauVar8 + uVar18 * 8 + 8);
            if (*(int *)(*pauVar8 + uVar18 * 8 + 0xc) != *(int *)(pauVar8[1] + uVar18 * 8 + 4)) {
              bVar3 = *(int *)(pauVar8[1] + uVar18 * 8 + 4) <= *(int *)(*pauVar8 + uVar18 * 8 + 0xc)
              ;
            }
            pauVar9 = (undefined1 (*) [16])(pauVar8[1] + uVar18 * 8);
            uVar27 = uVar13;
            if (!bVar3) {
              pauVar9 = (undefined1 (*) [16])(*pauVar8 + uVar18 * 8 + 8);
              uVar27 = uVar23;
            }
          }
          *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar9;
          pauVar8 = pauVar9;
          uVar18 = uVar27;
        } while ((long)uVar27 <= (long)(uVar15 - 2 >> 1));
        param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
        if (pauVar9 == param_2) {
          *(undefined8 *)*pauVar9 = uVar12;
        }
        else {
          *(undefined8 *)*pauVar9 = *(undefined8 *)*param_2;
          *(undefined8 *)*param_2 = uVar12;
          lVar21 = (long)((long)pauVar9 + (8 - (long)pauVar28)) >> 3;
          if (1 < lVar21) {
            uVar18 = lVar21 - 2U >> 1;
            pauVar8 = (undefined1 (*) [16])(*pauVar28 + uVar18 * 8);
            bVar3 = *(int *)*pauVar9 < *(int *)*pauVar8;
            if (*(int *)(*pauVar8 + 4) != *(int *)(*pauVar9 + 4)) {
              bVar3 = *(int *)(*pauVar9 + 4) <= *(int *)(*pauVar8 + 4);
            }
            if (bVar3) {
              uVar12 = *(undefined8 *)*pauVar9;
              do {
                pauVar10 = pauVar8;
                *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar10;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1 >> 1;
                pauVar8 = (undefined1 (*) [16])(*pauVar28 + uVar18 * 8);
                iVar11 = (int)((ulong)uVar12 >> 0x20);
                bVar3 = (int)uVar12 < *(int *)*pauVar8;
                if (*(int *)(*pauVar8 + 4) != iVar11) {
                  bVar3 = iVar11 <= *(int *)(*pauVar8 + 4);
                }
                pauVar9 = pauVar10;
              } while (bVar3);
              *(undefined8 *)*pauVar10 = uVar12;
            }
          }
        }
        bVar3 = (long)uVar15 < 3;
        uVar15 = uVar15 - 1;
        if (bVar3) {
          return;
        }
      } while( true );
    }
    piVar26 = (int *)(*pauVar28 + (uVar15 >> 1) * 8);
    iVar11 = *(int *)(param_2[-1] + 0xc);
    if (uVar15 < 0x81) {
      iVar14 = *(int *)(*pauVar28 + 4);
      bVar3 = *piVar26 < *(int *)*pauVar28;
      if (iVar14 != piVar26[1]) {
        bVar3 = piVar26[1] <= iVar14;
      }
      bVar5 = *(int *)*pauVar28 < *(int *)(param_2[-1] + 8);
      if (iVar11 != iVar14) {
        bVar5 = iVar14 <= iVar11;
      }
      if (bVar3) {
        uVar12 = *(undefined8 *)piVar26;
        if (bVar5) {
          *(undefined8 *)piVar26 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *(undefined8 *)piVar26 = *(undefined8 *)*pauVar28;
          *(undefined8 *)*pauVar28 = uVar12;
          iVar11 = (int)((ulong)uVar12 >> 0x20);
          bVar3 = (int)uVar12 < *(int *)(param_2[-1] + 8);
          if (*(int *)(param_2[-1] + 0xc) != iVar11) {
            bVar3 = iVar11 <= *(int *)(param_2[-1] + 0xc);
          }
          if (!bVar3) goto LAB_1094123d0;
          *(undefined8 *)*pauVar28 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
      }
      else if (bVar5) {
        uVar12 = *(undefined8 *)*pauVar28;
        *(undefined8 *)*pauVar28 = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
        bVar3 = *piVar26 < *(int *)*pauVar28;
        if (*(int *)(*pauVar28 + 4) != piVar26[1]) {
          bVar3 = piVar26[1] <= *(int *)(*pauVar28 + 4);
        }
        if (bVar3) {
          uVar12 = *(undefined8 *)piVar26;
          *(undefined8 *)piVar26 = *(undefined8 *)*pauVar28;
          *(undefined8 *)*pauVar28 = uVar12;
        }
      }
    }
    else {
      iVar14 = piVar26[1];
      bVar3 = *(int *)*pauVar28 < *piVar26;
      if (iVar14 != *(int *)(*pauVar28 + 4)) {
        bVar3 = *(int *)(*pauVar28 + 4) <= iVar14;
      }
      bVar5 = *piVar26 < *(int *)(param_2[-1] + 8);
      if (iVar11 != iVar14) {
        bVar5 = iVar14 <= iVar11;
      }
      if (bVar3) {
        uVar12 = *(undefined8 *)*pauVar28;
        if (bVar5) {
          *(undefined8 *)*pauVar28 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *(undefined8 *)*pauVar28 = *(undefined8 *)piVar26;
          *(undefined8 *)piVar26 = uVar12;
          iVar11 = (int)((ulong)uVar12 >> 0x20);
          bVar3 = (int)uVar12 < *(int *)(param_2[-1] + 8);
          if (*(int *)(param_2[-1] + 0xc) != iVar11) {
            bVar3 = iVar11 <= *(int *)(param_2[-1] + 0xc);
          }
          if (!bVar3) goto LAB_109412110;
          *(undefined8 *)piVar26 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
      }
      else if (bVar5) {
        uVar12 = *(undefined8 *)piVar26;
        *(undefined8 *)piVar26 = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
        bVar3 = *(int *)*pauVar28 < *piVar26;
        if (piVar26[1] != *(int *)(*pauVar28 + 4)) {
          bVar3 = *(int *)(*pauVar28 + 4) <= piVar26[1];
        }
        if (bVar3) {
          uVar12 = *(undefined8 *)*pauVar28;
          *(undefined8 *)*pauVar28 = *(undefined8 *)piVar26;
          *(undefined8 *)piVar26 = uVar12;
        }
      }
LAB_109412110:
      iVar11 = piVar26[-1];
      bVar3 = *(int *)(*pauVar28 + 8) < piVar26[-2];
      if (iVar11 != *(int *)(*pauVar28 + 0xc)) {
        bVar3 = *(int *)(*pauVar28 + 0xc) <= iVar11;
      }
      bVar5 = piVar26[-2] < *(int *)param_2[-1];
      if (*(int *)(param_2[-1] + 4) != iVar11) {
        bVar5 = iVar11 <= *(int *)(param_2[-1] + 4);
      }
      if (bVar3) {
        uVar12 = *(undefined8 *)(*pauVar28 + 8);
        if (bVar5) {
          *(undefined8 *)(*pauVar28 + 8) = *(undefined8 *)param_2[-1];
        }
        else {
          *(undefined8 *)(*pauVar28 + 8) = *(undefined8 *)(piVar26 + -2);
          *(undefined8 *)(piVar26 + -2) = uVar12;
          iVar11 = (int)((ulong)uVar12 >> 0x20);
          bVar3 = (int)uVar12 < *(int *)param_2[-1];
          if (*(int *)(param_2[-1] + 4) != iVar11) {
            bVar3 = iVar11 <= *(int *)(param_2[-1] + 4);
          }
          if (!bVar3) goto LAB_109412224;
          *(undefined8 *)(piVar26 + -2) = *(undefined8 *)param_2[-1];
        }
        *(undefined8 *)param_2[-1] = uVar12;
      }
      else if (bVar5) {
        uVar12 = *(undefined8 *)(piVar26 + -2);
        *(undefined8 *)(piVar26 + -2) = *(undefined8 *)param_2[-1];
        *(undefined8 *)param_2[-1] = uVar12;
        bVar3 = *(int *)(*pauVar28 + 8) < piVar26[-2];
        if (piVar26[-1] != *(int *)(*pauVar28 + 0xc)) {
          bVar3 = *(int *)(*pauVar28 + 0xc) <= piVar26[-1];
        }
        if (bVar3) {
          uVar12 = *(undefined8 *)(*pauVar28 + 8);
          *(undefined8 *)(*pauVar28 + 8) = *(undefined8 *)(piVar26 + -2);
          *(undefined8 *)(piVar26 + -2) = uVar12;
        }
      }
LAB_109412224:
      iVar11 = piVar26[3];
      bVar3 = *(int *)pauVar28[1] < piVar26[2];
      if (iVar11 != *(int *)(pauVar28[1] + 4)) {
        bVar3 = *(int *)(pauVar28[1] + 4) <= iVar11;
      }
      bVar5 = piVar26[2] < *(int *)(param_2[-2] + 8);
      if (*(int *)(param_2[-2] + 0xc) != iVar11) {
        bVar5 = iVar11 <= *(int *)(param_2[-2] + 0xc);
      }
      if (bVar3) {
        uVar12 = *(undefined8 *)pauVar28[1];
        if (bVar5) {
          *(undefined8 *)pauVar28[1] = *(undefined8 *)(param_2[-2] + 8);
        }
        else {
          *(undefined8 *)pauVar28[1] = *(undefined8 *)(piVar26 + 2);
          *(undefined8 *)(piVar26 + 2) = uVar12;
          iVar11 = (int)((ulong)uVar12 >> 0x20);
          bVar3 = (int)uVar12 < *(int *)(param_2[-2] + 8);
          if (*(int *)(param_2[-2] + 0xc) != iVar11) {
            bVar3 = iVar11 <= *(int *)(param_2[-2] + 0xc);
          }
          if (!bVar3) goto LAB_1094122f8;
          *(undefined8 *)(piVar26 + 2) = *(undefined8 *)(param_2[-2] + 8);
        }
        *(undefined8 *)(param_2[-2] + 8) = uVar12;
      }
      else if (bVar5) {
        uVar12 = *(undefined8 *)(piVar26 + 2);
        *(undefined8 *)(piVar26 + 2) = *(undefined8 *)(param_2[-2] + 8);
        *(undefined8 *)(param_2[-2] + 8) = uVar12;
        bVar3 = *(int *)pauVar28[1] < piVar26[2];
        if (piVar26[3] != *(int *)(pauVar28[1] + 4)) {
          bVar3 = *(int *)(pauVar28[1] + 4) <= piVar26[3];
        }
        if (bVar3) {
          uVar12 = *(undefined8 *)pauVar28[1];
          *(undefined8 *)pauVar28[1] = *(undefined8 *)(piVar26 + 2);
          *(undefined8 *)(piVar26 + 2) = uVar12;
        }
      }
LAB_1094122f8:
      iVar11 = piVar26[1];
      iVar14 = piVar26[-1];
      bVar3 = piVar26[-2] < *piVar26;
      if (iVar11 != iVar14) {
        bVar3 = iVar14 <= iVar11;
      }
      iVar4 = piVar26[3];
      bVar5 = *piVar26 < piVar26[2];
      if (iVar4 != iVar11) {
        bVar5 = iVar11 <= iVar4;
      }
      if (bVar3) {
        uVar12 = *(undefined8 *)(piVar26 + -2);
        if (bVar5) {
          *(undefined8 *)(piVar26 + -2) = *(undefined8 *)(piVar26 + 2);
          *(undefined8 *)(piVar26 + 2) = uVar12;
          uVar12 = *(undefined8 *)piVar26;
        }
        else {
          *(undefined8 *)(piVar26 + -2) = *(undefined8 *)piVar26;
          *(undefined8 *)piVar26 = uVar12;
          iVar11 = (int)((ulong)uVar12 >> 0x20);
          bVar3 = (int)uVar12 < piVar26[2];
          if (iVar4 != iVar11) {
            bVar3 = iVar11 <= iVar4;
          }
          if (bVar3) {
            uVar16 = *(undefined8 *)(piVar26 + 2);
            *(undefined8 *)piVar26 = uVar16;
            *(undefined8 *)(piVar26 + 2) = uVar12;
            uVar12 = uVar16;
          }
        }
      }
      else {
        uVar16 = *(undefined8 *)piVar26;
        uVar12 = uVar16;
        if (bVar5) {
          uVar12 = *(undefined8 *)(piVar26 + 2);
          *(undefined8 *)piVar26 = uVar12;
          *(undefined8 *)(piVar26 + 2) = uVar16;
          iVar11 = (int)((ulong)uVar12 >> 0x20);
          bVar3 = piVar26[-2] < (int)uVar12;
          if (iVar14 != iVar11) {
            bVar3 = iVar14 <= iVar11;
          }
          if (bVar3) {
            uVar16 = *(undefined8 *)(piVar26 + -2);
            *(undefined8 *)(piVar26 + -2) = uVar12;
            *(undefined8 *)piVar26 = uVar16;
            uVar12 = uVar16;
          }
        }
      }
      uVar16 = *(undefined8 *)*pauVar28;
      *(undefined8 *)*pauVar28 = uVar12;
      *(undefined8 *)piVar26 = uVar16;
    }
LAB_1094123d0:
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      bVar3 = *(int *)*pauVar28 < *(int *)(pauVar28[-1] + 8);
      if (*(int *)(pauVar28[-1] + 0xc) != *(int *)(*pauVar28 + 4)) {
        bVar3 = *(int *)(*pauVar28 + 4) <= *(int *)(pauVar28[-1] + 0xc);
      }
      uVar12 = *(undefined8 *)*pauVar28;
      if (!bVar3) {
        iVar11 = (int)uVar12;
        iVar14 = (int)((ulong)uVar12 >> 0x20);
        bVar3 = *(int *)(param_2[-1] + 8) < iVar11;
        if (*(int *)(param_2[-1] + 0xc) != iVar14) {
          bVar3 = *(int *)(param_2[-1] + 0xc) <= iVar14;
        }
        pauVar9 = pauVar28;
        if (bVar3) {
          do {
            pauVar8 = (undefined1 (*) [16])(*pauVar9 + 8);
            bVar3 = *(int *)*pauVar8 < iVar11;
            if (*(int *)(*pauVar9 + 0xc) != iVar14) {
              bVar3 = *(int *)(*pauVar9 + 0xc) <= iVar14;
            }
            pauVar9 = pauVar8;
          } while (!bVar3);
        }
        else {
          do {
            pauVar8 = (undefined1 (*) [16])(*pauVar9 + 8);
            if (param_2 <= pauVar8) break;
            bVar3 = *(int *)*pauVar8 < iVar11;
            if (*(int *)(*pauVar9 + 0xc) != iVar14) {
              bVar3 = *(int *)(*pauVar9 + 0xc) <= iVar14;
            }
            pauVar9 = pauVar8;
          } while (!bVar3);
        }
        pauVar9 = param_2;
        pauVar10 = param_2;
        if (pauVar8 < param_2) {
          do {
            pauVar9 = (undefined1 (*) [16])(pauVar10[-1] + 8);
            bVar3 = *(int *)*pauVar9 < iVar11;
            if (*(int *)(pauVar10[-1] + 0xc) != iVar14) {
              bVar3 = *(int *)(pauVar10[-1] + 0xc) <= iVar14;
            }
            pauVar10 = pauVar9;
          } while (bVar3);
        }
        while (pauVar8 < pauVar9) {
          uVar16 = *(undefined8 *)*pauVar8;
          *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar9;
          *(undefined8 *)*pauVar9 = uVar16;
          pauVar10 = pauVar8;
          do {
            pauVar8 = (undefined1 (*) [16])(*pauVar10 + 8);
            bVar3 = *(int *)*pauVar8 < iVar11;
            if (*(int *)(*pauVar10 + 0xc) != iVar14) {
              bVar3 = *(int *)(*pauVar10 + 0xc) <= iVar14;
            }
            pauVar17 = pauVar9;
            pauVar10 = pauVar8;
          } while (!bVar3);
          do {
            pauVar9 = (undefined1 (*) [16])(pauVar17[-1] + 8);
            bVar3 = *(int *)*pauVar9 < iVar11;
            if (*(int *)(pauVar17[-1] + 0xc) != iVar14) {
              bVar3 = *(int *)(pauVar17[-1] + 0xc) <= iVar14;
            }
            pauVar17 = pauVar9;
          } while (bVar3);
        }
        pauVar9 = (undefined1 (*) [16])(pauVar8[-1] + 8);
        if (pauVar9 != pauVar28) {
          *(undefined8 *)*pauVar28 = *(undefined8 *)*pauVar9;
        }
        param_4 = 0;
        *(undefined8 *)*pauVar9 = uVar12;
        goto LAB_109411f50;
      }
    }
    else {
      uVar12 = *(undefined8 *)*pauVar28;
    }
    lVar21 = 0;
    do {
      iVar11 = (int)uVar12;
      iVar14 = (int)((ulong)uVar12 >> 0x20);
      bVar3 = iVar11 < *(int *)(*pauVar28 + lVar21 + 8);
      if (*(int *)(*pauVar28 + lVar21 + 0xc) != iVar14) {
        bVar3 = iVar14 <= *(int *)(*pauVar28 + lVar21 + 0xc);
      }
      lVar21 = lVar21 + 8;
    } while (bVar3);
    pauVar9 = (undefined1 (*) [16])(*pauVar28 + lVar21);
    pauVar8 = param_2;
    if (lVar21 == 8) {
      do {
        pauVar10 = pauVar8;
        if (pauVar8 <= pauVar9) break;
        pauVar10 = (undefined1 (*) [16])(pauVar8[-1] + 8);
        bVar3 = iVar11 < *(int *)*pauVar10;
        if (*(int *)(pauVar8[-1] + 0xc) != iVar14) {
          bVar3 = iVar14 <= *(int *)(pauVar8[-1] + 0xc);
        }
        pauVar8 = pauVar10;
      } while (!bVar3);
    }
    else {
      do {
        pauVar10 = (undefined1 (*) [16])(pauVar8[-1] + 8);
        bVar3 = iVar11 < *(int *)*pauVar10;
        if (*(int *)(pauVar8[-1] + 0xc) != iVar14) {
          bVar3 = iVar14 <= *(int *)(pauVar8[-1] + 0xc);
        }
        pauVar8 = pauVar10;
      } while (!bVar3);
    }
    pauVar17 = pauVar9;
    pauVar24 = pauVar10;
    pauVar8 = pauVar9;
    if (pauVar9 < pauVar10) {
      do {
        uVar16 = *(undefined8 *)*pauVar17;
        *(undefined8 *)*pauVar17 = *(undefined8 *)*pauVar24;
        *(undefined8 *)*pauVar24 = uVar16;
        do {
          pauVar8 = (undefined1 (*) [16])(*pauVar17 + 8);
          bVar3 = iVar11 < *(int *)*pauVar8;
          if (*(int *)(*pauVar17 + 0xc) != iVar14) {
            bVar3 = iVar14 <= *(int *)(*pauVar17 + 0xc);
          }
          pauVar17 = pauVar8;
        } while (bVar3);
        do {
          pauVar25 = (undefined1 (*) [16])(pauVar24[-1] + 8);
          bVar3 = iVar11 < *(int *)*pauVar25;
          if (*(int *)(pauVar24[-1] + 0xc) != iVar14) {
            bVar3 = iVar14 <= *(int *)(pauVar24[-1] + 0xc);
          }
          pauVar24 = pauVar25;
        } while (!bVar3);
      } while (pauVar8 < pauVar25);
    }
    pauVar17 = (undefined1 (*) [16])(pauVar8[-1] + 8);
    if (pauVar17 != pauVar28) {
      *(undefined8 *)*pauVar28 = *(undefined8 *)*pauVar17;
    }
    *(undefined8 *)*pauVar17 = uVar12;
    if (pauVar9 < pauVar10) {
LAB_109412540:
      FUN_109411f24(pauVar28,pauVar17,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      pauVar9 = pauVar28;
      FUN_109412db4(pauVar28,pauVar17);
      pauVar10 = pauVar8;
      FUN_109412db4(pauVar8,param_2);
      if ((int)pauVar10 == 0) {
        if (((ulong)pauVar9 & 1) == 0) goto LAB_109412540;
      }
      else {
        pauVar8 = pauVar28;
        param_2 = pauVar17;
        if (((ulong)pauVar9 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109411f24; end: 109412c23;  */

void FUN_109411f24(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3,uint param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  int *piVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  int *piVar26;
  ulong uVar27;
  undefined1 auVar28 [16];
  
LAB_109411f50:
  do {
    pauVar18 = param_1;
    uVar15 = (long)param_2 - (long)pauVar18 >> 3;
    if (uVar15 - 2 == 0 || (long)uVar15 < 2) {
      if (uVar15 < 2) {
        return;
      }
      if (uVar15 == 2) {
        bVar3 = *(int *)*pauVar18 < *(int *)(param_2[-1] + 8);
        if (*(int *)(param_2[-1] + 0xc) != *(int *)(*pauVar18 + 4)) {
          bVar3 = *(int *)(*pauVar18 + 4) <= *(int *)(param_2[-1] + 0xc);
        }
        if (!bVar3) {
          return;
        }
        uVar11 = *(undefined8 *)*pauVar18;
LAB_1094127c0:
        *(undefined8 *)*pauVar18 = *(undefined8 *)(param_2[-1] + 8);
LAB_1094127c8:
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
        return;
      }
    }
    else {
      if (uVar15 == 3) {
        iVar10 = *(int *)(*pauVar18 + 0xc);
        bVar3 = *(int *)*pauVar18 < *(int *)(*pauVar18 + 8);
        if (iVar10 != *(int *)(*pauVar18 + 4)) {
          bVar3 = *(int *)(*pauVar18 + 4) <= iVar10;
        }
        bVar5 = *(int *)(*pauVar18 + 8) < *(int *)(param_2[-1] + 8);
        if (*(int *)(param_2[-1] + 0xc) != iVar10) {
          bVar5 = iVar10 <= *(int *)(param_2[-1] + 0xc);
        }
        if (!bVar3) {
          if (!bVar5) {
            return;
          }
          uVar11 = *(undefined8 *)(*pauVar18 + 8);
          *(undefined8 *)(*pauVar18 + 8) = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar11;
          bVar3 = *(int *)*pauVar18 < *(int *)(*pauVar18 + 8);
          if (*(int *)(*pauVar18 + 0xc) != *(int *)(*pauVar18 + 4)) {
            bVar3 = *(int *)(*pauVar18 + 4) <= *(int *)(*pauVar18 + 0xc);
          }
          if (!bVar3) {
            return;
          }
          auVar28 = NEON_ext(*pauVar18,*pauVar18,8,1);
          *(long *)(*pauVar18 + 8) = auVar28._8_8_;
          *(long *)*pauVar18 = auVar28._0_8_;
          return;
        }
        uVar11 = *(undefined8 *)*pauVar18;
        if (!bVar5) {
          *(undefined8 *)*pauVar18 = *(undefined8 *)(*pauVar18 + 8);
          *(undefined8 *)(*pauVar18 + 8) = uVar11;
          iVar10 = (int)((ulong)uVar11 >> 0x20);
          bVar3 = (int)uVar11 < *(int *)(param_2[-1] + 8);
          if (*(int *)(param_2[-1] + 0xc) != iVar10) {
            bVar3 = iVar10 <= *(int *)(param_2[-1] + 0xc);
          }
          if (!bVar3) {
            return;
          }
          *(undefined8 *)(*pauVar18 + 8) = *(undefined8 *)(param_2[-1] + 8);
          goto LAB_1094127c8;
        }
        goto LAB_1094127c0;
      }
      if (uVar15 == 4) {
        piVar26 = (int *)(param_2[-1] + 8);
        puVar1 = (ulong *)(*pauVar18 + 8);
        pauVar8 = pauVar18 + 1;
        iVar10 = *(int *)(*pauVar18 + 0xc);
        bVar3 = *(int *)*pauVar18 < (int)*puVar1;
        if (iVar10 != *(int *)(*pauVar18 + 4)) {
          bVar3 = *(int *)(*pauVar18 + 4) <= iVar10;
        }
        uVar15 = (ulong)*(uint *)*pauVar8;
        iVar14 = *(int *)(pauVar18[1] + 4);
        bVar5 = (int)*puVar1 < (int)*(uint *)*pauVar8;
        if (iVar14 != iVar10) {
          bVar5 = iVar10 <= iVar14;
        }
        if (bVar3) {
          uVar17 = *(ulong *)*pauVar18;
          if (!bVar5) {
            *(ulong *)*pauVar18 = *puVar1;
            *puVar1 = uVar17;
            uVar15 = (ulong)*(uint *)*pauVar8;
            iVar14 = *(int *)(pauVar18[1] + 4);
            iVar10 = (int)(uVar17 >> 0x20);
            bVar3 = (int)uVar17 < (int)*(uint *)*pauVar8;
            if (iVar14 != iVar10) {
              bVar3 = iVar10 <= iVar14;
            }
            if (bVar3) {
              *puVar1 = *(ulong *)*pauVar8;
              *(ulong *)*pauVar8 = uVar17;
              uVar15 = uVar17;
              iVar14 = iVar10;
            }
            goto LAB_109412d18;
          }
          *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar8;
          *(ulong *)*pauVar8 = uVar17;
        }
        else {
          if (!bVar5) goto LAB_109412d18;
          uVar17 = *puVar1;
          *puVar1 = *(ulong *)*pauVar8;
          *(ulong *)*pauVar8 = uVar17;
          bVar3 = *(int *)*pauVar18 < (int)*puVar1;
          if (*(int *)(*pauVar18 + 0xc) != *(int *)(*pauVar18 + 4)) {
            bVar3 = *(int *)(*pauVar18 + 4) <= *(int *)(*pauVar18 + 0xc);
          }
          if (bVar3) {
            uVar15 = *(ulong *)*pauVar18;
            *(ulong *)*pauVar18 = *puVar1;
            *puVar1 = uVar15;
            uVar15 = (ulong)*(uint *)*pauVar8;
            iVar14 = *(int *)(pauVar18[1] + 4);
            goto LAB_109412d18;
          }
        }
        uVar15 = uVar17;
        iVar14 = (int)(uVar17 >> 0x20);
LAB_109412d18:
        bVar3 = (int)uVar15 < *piVar26;
        if (*(int *)(param_2[-1] + 0xc) != iVar14) {
          bVar3 = iVar14 <= *(int *)(param_2[-1] + 0xc);
        }
        if (bVar3) {
          uVar11 = *(undefined8 *)*pauVar8;
          *(undefined8 *)*pauVar8 = *(undefined8 *)piVar26;
          *(undefined8 *)piVar26 = uVar11;
          bVar3 = (int)*puVar1 < *(int *)*pauVar8;
          if (*(int *)(pauVar18[1] + 4) != *(int *)(*pauVar18 + 0xc)) {
            bVar3 = *(int *)(*pauVar18 + 0xc) <= *(int *)(pauVar18[1] + 4);
          }
          if (bVar3) {
            uVar15 = *puVar1;
            *puVar1 = *(ulong *)*pauVar8;
            *(ulong *)*pauVar8 = uVar15;
            bVar3 = *(int *)*pauVar18 < (int)*puVar1;
            if (*(int *)(*pauVar18 + 0xc) != *(int *)(*pauVar18 + 4)) {
              bVar3 = *(int *)(*pauVar18 + 4) <= *(int *)(*pauVar18 + 0xc);
            }
            if (bVar3) {
              uVar15 = *(ulong *)*pauVar18;
              *(ulong *)*pauVar18 = *puVar1;
              *puVar1 = uVar15;
            }
          }
        }
        return;
      }
      if (uVar15 == 5) {
        FUN_109412c24(pauVar18,*pauVar18 + 8,pauVar18 + 1,pauVar18[1] + 8);
        bVar3 = *(int *)(pauVar18[1] + 8) < *(int *)(param_2[-1] + 8);
        if (*(int *)(param_2[-1] + 0xc) != *(int *)(pauVar18[1] + 0xc)) {
          bVar3 = *(int *)(pauVar18[1] + 0xc) <= *(int *)(param_2[-1] + 0xc);
        }
        if (!bVar3) {
          return;
        }
        uVar11 = *(undefined8 *)(pauVar18[1] + 8);
        *(undefined8 *)(pauVar18[1] + 8) = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
        bVar3 = *(int *)pauVar18[1] < *(int *)(pauVar18[1] + 8);
        if (*(int *)(pauVar18[1] + 0xc) != *(int *)(pauVar18[1] + 4)) {
          bVar3 = *(int *)(pauVar18[1] + 4) <= *(int *)(pauVar18[1] + 0xc);
        }
        if (!bVar3) {
          return;
        }
        uVar11 = *(undefined8 *)pauVar18[1];
        uVar16 = *(undefined8 *)(pauVar18[1] + 8);
        *(undefined8 *)pauVar18[1] = uVar16;
        *(undefined8 *)(pauVar18[1] + 8) = uVar11;
        iVar10 = (int)((ulong)uVar16 >> 0x20);
        bVar3 = *(int *)(*pauVar18 + 8) < (int)uVar16;
        if (*(int *)(*pauVar18 + 0xc) != iVar10) {
          bVar3 = *(int *)(*pauVar18 + 0xc) <= iVar10;
        }
        if (!bVar3) {
          return;
        }
        uVar11 = *(undefined8 *)(*pauVar18 + 8);
        *(undefined8 *)(*pauVar18 + 8) = uVar16;
        *(undefined8 *)pauVar18[1] = uVar11;
        bVar3 = *(int *)*pauVar18 < (int)uVar16;
        if (*(int *)(*pauVar18 + 4) != iVar10) {
          bVar3 = *(int *)(*pauVar18 + 4) <= iVar10;
        }
        if (!bVar3) {
          return;
        }
        uVar11 = *(undefined8 *)*pauVar18;
        *(undefined8 *)*pauVar18 = uVar16;
        *(undefined8 *)(*pauVar18 + 8) = uVar11;
        return;
      }
    }
    if ((long)uVar15 < 0x18) {
      pauVar8 = (undefined1 (*) [16])(*pauVar18 + 8);
      if ((param_4 & 1) == 0) {
        if (pauVar18 == param_2 || pauVar8 == param_2) {
          return;
        }
        do {
          pauVar13 = pauVar8;
          bVar3 = *(int *)*pauVar18 < *(int *)(*pauVar18 + 8);
          if (*(int *)(*pauVar18 + 0xc) != *(int *)(*pauVar18 + 4)) {
            bVar3 = *(int *)(*pauVar18 + 4) <= *(int *)(*pauVar18 + 0xc);
          }
          if (bVar3) {
            uVar11 = *(undefined8 *)*pauVar13;
            pauVar18 = pauVar13;
            do {
              pauVar8 = (undefined1 (*) [16])(pauVar18[-1] + 8);
              *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar8;
              iVar10 = (int)((ulong)uVar11 >> 0x20);
              bVar3 = *(int *)pauVar18[-1] < (int)uVar11;
              if (*(int *)(pauVar18[-1] + 4) != iVar10) {
                bVar3 = *(int *)(pauVar18[-1] + 4) <= iVar10;
              }
              pauVar18 = pauVar8;
            } while (bVar3);
            *(undefined8 *)*pauVar8 = uVar11;
          }
          pauVar8 = (undefined1 (*) [16])(*pauVar13 + 8);
          pauVar18 = pauVar13;
        } while ((undefined1 (*) [16])(*pauVar13 + 8) != param_2);
        return;
      }
      if (pauVar18 == param_2 || pauVar8 == param_2) {
        return;
      }
      lVar21 = 0;
      pauVar13 = pauVar18;
      do {
        bVar3 = *(int *)*pauVar13 < *(int *)(*pauVar13 + 8);
        if (*(int *)(*pauVar13 + 0xc) != *(int *)(*pauVar13 + 4)) {
          bVar3 = *(int *)(*pauVar13 + 4) <= *(int *)(*pauVar13 + 0xc);
        }
        if (bVar3) {
          uVar11 = *(undefined8 *)*pauVar8;
          lVar7 = lVar21;
          do {
            lVar22 = lVar7;
            puVar2 = (undefined8 *)(*pauVar18 + lVar22);
            puVar2[1] = *puVar2;
            pauVar13 = pauVar18;
            if (lVar22 == 0) goto LAB_10941288c;
            iVar10 = (int)((ulong)uVar11 >> 0x20);
            bVar3 = *(int *)(puVar2 + -1) < (int)uVar11;
            if (*(int *)((long)puVar2 + -4) != iVar10) {
              bVar3 = *(int *)((long)puVar2 + -4) <= iVar10;
            }
            lVar7 = lVar22 + -8;
          } while (bVar3);
          pauVar13 = (undefined1 (*) [16])(*pauVar18 + lVar22);
LAB_10941288c:
          *(undefined8 *)*pauVar13 = uVar11;
        }
        puVar6 = *pauVar8;
        lVar21 = lVar21 + 8;
        pauVar13 = pauVar8;
        pauVar8 = (undefined1 (*) [16])(puVar6 + 8);
        if ((undefined1 (*) [16])(puVar6 + 8) == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pauVar18 == param_2) {
        return;
      }
      uVar12 = uVar15 - 2 >> 1;
      uVar17 = uVar12;
      do {
        if ((long)uVar17 <= (long)uVar12) {
          uVar27 = uVar17 << 1 | 1;
          piVar26 = (int *)(*pauVar18 + uVar27 * 8);
          uVar23 = uVar17 * 2 + 2;
          if ((long)uVar23 < (long)uVar15) {
            iVar10 = piVar26[2];
            bVar3 = iVar10 < *piVar26;
            if (piVar26[1] != piVar26[3]) {
              bVar3 = piVar26[3] <= piVar26[1];
            }
            piVar20 = piVar26 + 2;
            if (!bVar3) {
              piVar20 = piVar26;
              uVar23 = uVar27;
              iVar10 = *piVar26;
            }
          }
          else {
            piVar20 = piVar26;
            uVar23 = uVar27;
            iVar10 = *piVar26;
          }
          piVar26 = (int *)(*pauVar18 + uVar17 * 8);
          bVar3 = *piVar26 < iVar10;
          if (piVar20[1] != piVar26[1]) {
            bVar3 = piVar26[1] <= piVar20[1];
          }
          if (!bVar3) {
            uVar11 = *(undefined8 *)piVar26;
            do {
              piVar19 = piVar20;
              *(undefined8 *)piVar26 = *(undefined8 *)piVar19;
              if ((long)uVar12 < (long)uVar23) break;
              uVar27 = uVar23 << 1 | 1;
              piVar26 = (int *)(*pauVar18 + uVar27 * 8);
              uVar23 = uVar23 * 2 + 2;
              if ((long)uVar23 < (long)uVar15) {
                iVar10 = piVar26[2];
                bVar3 = iVar10 < *piVar26;
                if (piVar26[1] != piVar26[3]) {
                  bVar3 = piVar26[3] <= piVar26[1];
                }
                piVar20 = piVar26 + 2;
                if (!bVar3) {
                  piVar20 = piVar26;
                  uVar23 = uVar27;
                  iVar10 = *piVar26;
                }
              }
              else {
                piVar20 = piVar26;
                uVar23 = uVar27;
                iVar10 = *piVar26;
              }
              iVar14 = (int)((ulong)uVar11 >> 0x20);
              bVar3 = (int)uVar11 < iVar10;
              if (piVar20[1] != iVar14) {
                bVar3 = iVar14 <= piVar20[1];
              }
              piVar26 = piVar19;
            } while (!bVar3);
            *(undefined8 *)piVar19 = uVar11;
          }
        }
        bVar3 = uVar17 != 0;
        uVar17 = uVar17 - 1;
      } while (bVar3);
      do {
        uVar11 = *(undefined8 *)*pauVar18;
        pauVar8 = pauVar18;
        uVar17 = 0;
        do {
          uVar23 = uVar17 << 1 | 1;
          uVar12 = uVar17 * 2 + 2;
          pauVar13 = (undefined1 (*) [16])(*pauVar8 + uVar17 * 8 + 8);
          uVar27 = uVar23;
          if ((long)uVar12 < (long)uVar15) {
            bVar3 = *(int *)*(undefined1 (*) [16])(pauVar8[1] + uVar17 * 8) <
                    *(int *)(*pauVar8 + uVar17 * 8 + 8);
            if (*(int *)(*pauVar8 + uVar17 * 8 + 0xc) != *(int *)(pauVar8[1] + uVar17 * 8 + 4)) {
              bVar3 = *(int *)(pauVar8[1] + uVar17 * 8 + 4) <= *(int *)(*pauVar8 + uVar17 * 8 + 0xc)
              ;
            }
            pauVar13 = (undefined1 (*) [16])(pauVar8[1] + uVar17 * 8);
            uVar27 = uVar12;
            if (!bVar3) {
              pauVar13 = (undefined1 (*) [16])(*pauVar8 + uVar17 * 8 + 8);
              uVar27 = uVar23;
            }
          }
          *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar13;
          pauVar8 = pauVar13;
          uVar17 = uVar27;
        } while ((long)uVar27 <= (long)(uVar15 - 2 >> 1));
        param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
        if (pauVar13 == param_2) {
          *(undefined8 *)*pauVar13 = uVar11;
        }
        else {
          *(undefined8 *)*pauVar13 = *(undefined8 *)*param_2;
          *(undefined8 *)*param_2 = uVar11;
          lVar21 = (long)((long)pauVar13 + (8 - (long)pauVar18)) >> 3;
          if (1 < lVar21) {
            uVar17 = lVar21 - 2U >> 1;
            pauVar8 = (undefined1 (*) [16])(*pauVar18 + uVar17 * 8);
            bVar3 = *(int *)*pauVar13 < *(int *)*pauVar8;
            if (*(int *)(*pauVar8 + 4) != *(int *)(*pauVar13 + 4)) {
              bVar3 = *(int *)(*pauVar13 + 4) <= *(int *)(*pauVar8 + 4);
            }
            if (bVar3) {
              uVar11 = *(undefined8 *)*pauVar13;
              do {
                pauVar9 = pauVar8;
                *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar9;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1 >> 1;
                pauVar8 = (undefined1 (*) [16])(*pauVar18 + uVar17 * 8);
                iVar10 = (int)((ulong)uVar11 >> 0x20);
                bVar3 = (int)uVar11 < *(int *)*pauVar8;
                if (*(int *)(*pauVar8 + 4) != iVar10) {
                  bVar3 = iVar10 <= *(int *)(*pauVar8 + 4);
                }
                pauVar13 = pauVar9;
              } while (bVar3);
              *(undefined8 *)*pauVar9 = uVar11;
            }
          }
        }
        bVar3 = (long)uVar15 < 3;
        uVar15 = uVar15 - 1;
        if (bVar3) {
          return;
        }
      } while( true );
    }
    piVar26 = (int *)(*pauVar18 + (uVar15 >> 1) * 8);
    iVar10 = *(int *)(param_2[-1] + 0xc);
    if (uVar15 < 0x81) {
      iVar14 = *(int *)(*pauVar18 + 4);
      bVar3 = *piVar26 < *(int *)*pauVar18;
      if (iVar14 != piVar26[1]) {
        bVar3 = piVar26[1] <= iVar14;
      }
      bVar5 = *(int *)*pauVar18 < *(int *)(param_2[-1] + 8);
      if (iVar10 != iVar14) {
        bVar5 = iVar14 <= iVar10;
      }
      if (bVar3) {
        uVar11 = *(undefined8 *)piVar26;
        if (bVar5) {
          *(undefined8 *)piVar26 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *(undefined8 *)piVar26 = *(undefined8 *)*pauVar18;
          *(undefined8 *)*pauVar18 = uVar11;
          iVar10 = (int)((ulong)uVar11 >> 0x20);
          bVar3 = (int)uVar11 < *(int *)(param_2[-1] + 8);
          if (*(int *)(param_2[-1] + 0xc) != iVar10) {
            bVar3 = iVar10 <= *(int *)(param_2[-1] + 0xc);
          }
          if (!bVar3) goto LAB_1094123d0;
          *(undefined8 *)*pauVar18 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
      }
      else if (bVar5) {
        uVar11 = *(undefined8 *)*pauVar18;
        *(undefined8 *)*pauVar18 = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
        bVar3 = *piVar26 < *(int *)*pauVar18;
        if (*(int *)(*pauVar18 + 4) != piVar26[1]) {
          bVar3 = piVar26[1] <= *(int *)(*pauVar18 + 4);
        }
        if (bVar3) {
          uVar11 = *(undefined8 *)piVar26;
          *(undefined8 *)piVar26 = *(undefined8 *)*pauVar18;
          *(undefined8 *)*pauVar18 = uVar11;
        }
      }
    }
    else {
      iVar14 = piVar26[1];
      bVar3 = *(int *)*pauVar18 < *piVar26;
      if (iVar14 != *(int *)(*pauVar18 + 4)) {
        bVar3 = *(int *)(*pauVar18 + 4) <= iVar14;
      }
      bVar5 = *piVar26 < *(int *)(param_2[-1] + 8);
      if (iVar10 != iVar14) {
        bVar5 = iVar14 <= iVar10;
      }
      if (bVar3) {
        uVar11 = *(undefined8 *)*pauVar18;
        if (bVar5) {
          *(undefined8 *)*pauVar18 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *(undefined8 *)*pauVar18 = *(undefined8 *)piVar26;
          *(undefined8 *)piVar26 = uVar11;
          iVar10 = (int)((ulong)uVar11 >> 0x20);
          bVar3 = (int)uVar11 < *(int *)(param_2[-1] + 8);
          if (*(int *)(param_2[-1] + 0xc) != iVar10) {
            bVar3 = iVar10 <= *(int *)(param_2[-1] + 0xc);
          }
          if (!bVar3) goto LAB_109412110;
          *(undefined8 *)piVar26 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
      }
      else if (bVar5) {
        uVar11 = *(undefined8 *)piVar26;
        *(undefined8 *)piVar26 = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
        bVar3 = *(int *)*pauVar18 < *piVar26;
        if (piVar26[1] != *(int *)(*pauVar18 + 4)) {
          bVar3 = *(int *)(*pauVar18 + 4) <= piVar26[1];
        }
        if (bVar3) {
          uVar11 = *(undefined8 *)*pauVar18;
          *(undefined8 *)*pauVar18 = *(undefined8 *)piVar26;
          *(undefined8 *)piVar26 = uVar11;
        }
      }
LAB_109412110:
      iVar10 = piVar26[-1];
      bVar3 = *(int *)(*pauVar18 + 8) < piVar26[-2];
      if (iVar10 != *(int *)(*pauVar18 + 0xc)) {
        bVar3 = *(int *)(*pauVar18 + 0xc) <= iVar10;
      }
      bVar5 = piVar26[-2] < *(int *)param_2[-1];
      if (*(int *)(param_2[-1] + 4) != iVar10) {
        bVar5 = iVar10 <= *(int *)(param_2[-1] + 4);
      }
      if (bVar3) {
        uVar11 = *(undefined8 *)(*pauVar18 + 8);
        if (bVar5) {
          *(undefined8 *)(*pauVar18 + 8) = *(undefined8 *)param_2[-1];
        }
        else {
          *(undefined8 *)(*pauVar18 + 8) = *(undefined8 *)(piVar26 + -2);
          *(undefined8 *)(piVar26 + -2) = uVar11;
          iVar10 = (int)((ulong)uVar11 >> 0x20);
          bVar3 = (int)uVar11 < *(int *)param_2[-1];
          if (*(int *)(param_2[-1] + 4) != iVar10) {
            bVar3 = iVar10 <= *(int *)(param_2[-1] + 4);
          }
          if (!bVar3) goto LAB_109412224;
          *(undefined8 *)(piVar26 + -2) = *(undefined8 *)param_2[-1];
        }
        *(undefined8 *)param_2[-1] = uVar11;
      }
      else if (bVar5) {
        uVar11 = *(undefined8 *)(piVar26 + -2);
        *(undefined8 *)(piVar26 + -2) = *(undefined8 *)param_2[-1];
        *(undefined8 *)param_2[-1] = uVar11;
        bVar3 = *(int *)(*pauVar18 + 8) < piVar26[-2];
        if (piVar26[-1] != *(int *)(*pauVar18 + 0xc)) {
          bVar3 = *(int *)(*pauVar18 + 0xc) <= piVar26[-1];
        }
        if (bVar3) {
          uVar11 = *(undefined8 *)(*pauVar18 + 8);
          *(undefined8 *)(*pauVar18 + 8) = *(undefined8 *)(piVar26 + -2);
          *(undefined8 *)(piVar26 + -2) = uVar11;
        }
      }
LAB_109412224:
      iVar10 = piVar26[3];
      bVar3 = *(int *)pauVar18[1] < piVar26[2];
      if (iVar10 != *(int *)(pauVar18[1] + 4)) {
        bVar3 = *(int *)(pauVar18[1] + 4) <= iVar10;
      }
      bVar5 = piVar26[2] < *(int *)(param_2[-2] + 8);
      if (*(int *)(param_2[-2] + 0xc) != iVar10) {
        bVar5 = iVar10 <= *(int *)(param_2[-2] + 0xc);
      }
      if (bVar3) {
        uVar11 = *(undefined8 *)pauVar18[1];
        if (bVar5) {
          *(undefined8 *)pauVar18[1] = *(undefined8 *)(param_2[-2] + 8);
        }
        else {
          *(undefined8 *)pauVar18[1] = *(undefined8 *)(piVar26 + 2);
          *(undefined8 *)(piVar26 + 2) = uVar11;
          iVar10 = (int)((ulong)uVar11 >> 0x20);
          bVar3 = (int)uVar11 < *(int *)(param_2[-2] + 8);
          if (*(int *)(param_2[-2] + 0xc) != iVar10) {
            bVar3 = iVar10 <= *(int *)(param_2[-2] + 0xc);
          }
          if (!bVar3) goto LAB_1094122f8;
          *(undefined8 *)(piVar26 + 2) = *(undefined8 *)(param_2[-2] + 8);
        }
        *(undefined8 *)(param_2[-2] + 8) = uVar11;
      }
      else if (bVar5) {
        uVar11 = *(undefined8 *)(piVar26 + 2);
        *(undefined8 *)(piVar26 + 2) = *(undefined8 *)(param_2[-2] + 8);
        *(undefined8 *)(param_2[-2] + 8) = uVar11;
        bVar3 = *(int *)pauVar18[1] < piVar26[2];
        if (piVar26[3] != *(int *)(pauVar18[1] + 4)) {
          bVar3 = *(int *)(pauVar18[1] + 4) <= piVar26[3];
        }
        if (bVar3) {
          uVar11 = *(undefined8 *)pauVar18[1];
          *(undefined8 *)pauVar18[1] = *(undefined8 *)(piVar26 + 2);
          *(undefined8 *)(piVar26 + 2) = uVar11;
        }
      }
LAB_1094122f8:
      iVar10 = piVar26[1];
      iVar14 = piVar26[-1];
      bVar3 = piVar26[-2] < *piVar26;
      if (iVar10 != iVar14) {
        bVar3 = iVar14 <= iVar10;
      }
      iVar4 = piVar26[3];
      bVar5 = *piVar26 < piVar26[2];
      if (iVar4 != iVar10) {
        bVar5 = iVar10 <= iVar4;
      }
      if (bVar3) {
        uVar11 = *(undefined8 *)(piVar26 + -2);
        if (bVar5) {
          *(undefined8 *)(piVar26 + -2) = *(undefined8 *)(piVar26 + 2);
          *(undefined8 *)(piVar26 + 2) = uVar11;
          uVar11 = *(undefined8 *)piVar26;
        }
        else {
          *(undefined8 *)(piVar26 + -2) = *(undefined8 *)piVar26;
          *(undefined8 *)piVar26 = uVar11;
          iVar10 = (int)((ulong)uVar11 >> 0x20);
          bVar3 = (int)uVar11 < piVar26[2];
          if (iVar4 != iVar10) {
            bVar3 = iVar10 <= iVar4;
          }
          if (bVar3) {
            uVar16 = *(undefined8 *)(piVar26 + 2);
            *(undefined8 *)piVar26 = uVar16;
            *(undefined8 *)(piVar26 + 2) = uVar11;
            uVar11 = uVar16;
          }
        }
      }
      else {
        uVar16 = *(undefined8 *)piVar26;
        uVar11 = uVar16;
        if (bVar5) {
          uVar11 = *(undefined8 *)(piVar26 + 2);
          *(undefined8 *)piVar26 = uVar11;
          *(undefined8 *)(piVar26 + 2) = uVar16;
          iVar10 = (int)((ulong)uVar11 >> 0x20);
          bVar3 = piVar26[-2] < (int)uVar11;
          if (iVar14 != iVar10) {
            bVar3 = iVar14 <= iVar10;
          }
          if (bVar3) {
            uVar16 = *(undefined8 *)(piVar26 + -2);
            *(undefined8 *)(piVar26 + -2) = uVar11;
            *(undefined8 *)piVar26 = uVar16;
            uVar11 = uVar16;
          }
        }
      }
      uVar16 = *(undefined8 *)*pauVar18;
      *(undefined8 *)*pauVar18 = uVar11;
      *(undefined8 *)piVar26 = uVar16;
    }
LAB_1094123d0:
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      bVar3 = *(int *)*pauVar18 < *(int *)(pauVar18[-1] + 8);
      if (*(int *)(pauVar18[-1] + 0xc) != *(int *)(*pauVar18 + 4)) {
        bVar3 = *(int *)(*pauVar18 + 4) <= *(int *)(pauVar18[-1] + 0xc);
      }
      uVar11 = *(undefined8 *)*pauVar18;
      if (!bVar3) {
        iVar10 = (int)uVar11;
        iVar14 = (int)((ulong)uVar11 >> 0x20);
        bVar3 = *(int *)(param_2[-1] + 8) < iVar10;
        if (*(int *)(param_2[-1] + 0xc) != iVar14) {
          bVar3 = *(int *)(param_2[-1] + 0xc) <= iVar14;
        }
        pauVar8 = pauVar18;
        if (bVar3) {
          do {
            param_1 = (undefined1 (*) [16])(*pauVar8 + 8);
            bVar3 = *(int *)*param_1 < iVar10;
            if (*(int *)(*pauVar8 + 0xc) != iVar14) {
              bVar3 = *(int *)(*pauVar8 + 0xc) <= iVar14;
            }
            pauVar8 = param_1;
          } while (!bVar3);
        }
        else {
          do {
            param_1 = (undefined1 (*) [16])(*pauVar8 + 8);
            if (param_2 <= param_1) break;
            bVar3 = *(int *)*param_1 < iVar10;
            if (*(int *)(*pauVar8 + 0xc) != iVar14) {
              bVar3 = *(int *)(*pauVar8 + 0xc) <= iVar14;
            }
            pauVar8 = param_1;
          } while (!bVar3);
        }
        pauVar8 = param_2;
        pauVar13 = param_2;
        if (param_1 < param_2) {
          do {
            pauVar8 = (undefined1 (*) [16])(pauVar13[-1] + 8);
            bVar3 = *(int *)*pauVar8 < iVar10;
            if (*(int *)(pauVar13[-1] + 0xc) != iVar14) {
              bVar3 = *(int *)(pauVar13[-1] + 0xc) <= iVar14;
            }
            pauVar13 = pauVar8;
          } while (bVar3);
        }
        while (param_1 < pauVar8) {
          uVar16 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = *(undefined8 *)*pauVar8;
          *(undefined8 *)*pauVar8 = uVar16;
          pauVar13 = param_1;
          do {
            param_1 = (undefined1 (*) [16])(*pauVar13 + 8);
            bVar3 = *(int *)*param_1 < iVar10;
            if (*(int *)(*pauVar13 + 0xc) != iVar14) {
              bVar3 = *(int *)(*pauVar13 + 0xc) <= iVar14;
            }
            pauVar9 = pauVar8;
            pauVar13 = param_1;
          } while (!bVar3);
          do {
            pauVar8 = (undefined1 (*) [16])(pauVar9[-1] + 8);
            bVar3 = *(int *)*pauVar8 < iVar10;
            if (*(int *)(pauVar9[-1] + 0xc) != iVar14) {
              bVar3 = *(int *)(pauVar9[-1] + 0xc) <= iVar14;
            }
            pauVar9 = pauVar8;
          } while (bVar3);
        }
        pauVar8 = (undefined1 (*) [16])(param_1[-1] + 8);
        if (pauVar8 != pauVar18) {
          *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar8;
        }
        param_4 = 0;
        *(undefined8 *)*pauVar8 = uVar11;
        goto LAB_109411f50;
      }
    }
    else {
      uVar11 = *(undefined8 *)*pauVar18;
    }
    lVar21 = 0;
    do {
      iVar10 = (int)uVar11;
      iVar14 = (int)((ulong)uVar11 >> 0x20);
      bVar3 = iVar10 < *(int *)(*pauVar18 + lVar21 + 8);
      if (*(int *)(*pauVar18 + lVar21 + 0xc) != iVar14) {
        bVar3 = iVar14 <= *(int *)(*pauVar18 + lVar21 + 0xc);
      }
      lVar21 = lVar21 + 8;
    } while (bVar3);
    pauVar8 = (undefined1 (*) [16])(*pauVar18 + lVar21);
    pauVar13 = param_2;
    if (lVar21 == 8) {
      do {
        pauVar9 = pauVar13;
        if (pauVar13 <= pauVar8) break;
        pauVar9 = (undefined1 (*) [16])(pauVar13[-1] + 8);
        bVar3 = iVar10 < *(int *)*pauVar9;
        if (*(int *)(pauVar13[-1] + 0xc) != iVar14) {
          bVar3 = iVar14 <= *(int *)(pauVar13[-1] + 0xc);
        }
        pauVar13 = pauVar9;
      } while (!bVar3);
    }
    else {
      do {
        pauVar9 = (undefined1 (*) [16])(pauVar13[-1] + 8);
        bVar3 = iVar10 < *(int *)*pauVar9;
        if (*(int *)(pauVar13[-1] + 0xc) != iVar14) {
          bVar3 = iVar14 <= *(int *)(pauVar13[-1] + 0xc);
        }
        pauVar13 = pauVar9;
      } while (!bVar3);
    }
    pauVar13 = pauVar8;
    pauVar24 = pauVar9;
    param_1 = pauVar8;
    if (pauVar8 < pauVar9) {
      do {
        uVar16 = *(undefined8 *)*pauVar13;
        *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar24;
        *(undefined8 *)*pauVar24 = uVar16;
        do {
          param_1 = (undefined1 (*) [16])(*pauVar13 + 8);
          bVar3 = iVar10 < *(int *)*param_1;
          if (*(int *)(*pauVar13 + 0xc) != iVar14) {
            bVar3 = iVar14 <= *(int *)(*pauVar13 + 0xc);
          }
          pauVar13 = param_1;
        } while (bVar3);
        do {
          pauVar25 = (undefined1 (*) [16])(pauVar24[-1] + 8);
          bVar3 = iVar10 < *(int *)*pauVar25;
          if (*(int *)(pauVar24[-1] + 0xc) != iVar14) {
            bVar3 = iVar14 <= *(int *)(pauVar24[-1] + 0xc);
          }
          pauVar24 = pauVar25;
        } while (!bVar3);
      } while (param_1 < pauVar25);
    }
    pauVar13 = (undefined1 (*) [16])(param_1[-1] + 8);
    if (pauVar13 != pauVar18) {
      *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar13;
    }
    *(undefined8 *)*pauVar13 = uVar11;
    if (pauVar8 < pauVar9) {
LAB_109412540:
      FUN_109411f24(pauVar18,pauVar13,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      pauVar8 = pauVar18;
      FUN_109412db4(pauVar18,pauVar13);
      pauVar9 = param_1;
      FUN_109412db4(param_1,param_2);
      if ((int)pauVar9 == 0) {
        if (((ulong)pauVar8 & 1) == 0) goto LAB_109412540;
      }
      else {
        param_1 = pauVar18;
        param_2 = pauVar13;
        if (((ulong)pauVar8 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109412c24; end: 109412db3;  */

void FUN_109412c24(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)((long)param_2 + 4);
  bVar1 = (int)*param_1 < (int)*param_2;
  if (uVar5 != *(uint *)((long)param_1 + 4)) {
    bVar1 = (int)*(uint *)((long)param_1 + 4) <= (int)uVar5;
  }
  uVar4 = (ulong)(uint)*param_3;
  uVar6 = *(uint *)((long)param_3 + 4);
  bVar2 = (int)*param_2 < (int)(uint)*param_3;
  if (uVar6 != uVar5) {
    bVar2 = (int)uVar5 <= (int)uVar6;
  }
  if (bVar1) {
    uVar3 = *param_1;
    if (!bVar2) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar4 = (ulong)(uint)*param_3;
      uVar6 = *(uint *)((long)param_3 + 4);
      uVar5 = (uint)(uVar3 >> 0x20);
      bVar1 = (int)uVar3 < (int)(uint)*param_3;
      if (uVar6 != uVar5) {
        bVar1 = (int)uVar5 <= (int)uVar6;
      }
      if (bVar1) {
        *param_2 = *param_3;
        *param_3 = uVar3;
        uVar4 = uVar3;
        uVar6 = uVar5;
      }
      goto LAB_109412d18;
    }
    *param_1 = *param_3;
    *param_3 = uVar3;
  }
  else {
    if (!bVar2) goto LAB_109412d18;
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    bVar1 = (int)*param_1 < (int)*param_2;
    if (*(int *)((long)param_2 + 4) != *(int *)((long)param_1 + 4)) {
      bVar1 = *(int *)((long)param_1 + 4) <= *(int *)((long)param_2 + 4);
    }
    if (bVar1) {
      uVar4 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar4;
      uVar4 = (ulong)(uint)*param_3;
      uVar6 = *(uint *)((long)param_3 + 4);
      goto LAB_109412d18;
    }
  }
  uVar4 = uVar3;
  uVar6 = (uint)(uVar3 >> 0x20);
LAB_109412d18:
  bVar1 = (int)uVar4 < (int)*param_4;
  if (*(uint *)((long)param_4 + 4) != uVar6) {
    bVar1 = (int)uVar6 <= (int)*(uint *)((long)param_4 + 4);
  }
  if (bVar1) {
    uVar4 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar4;
    bVar1 = (int)*param_2 < (int)(uint)*param_3;
    if (*(uint *)((long)param_3 + 4) != *(uint *)((long)param_2 + 4)) {
      bVar1 = (int)*(uint *)((long)param_2 + 4) <= (int)*(uint *)((long)param_3 + 4);
    }
    if (bVar1) {
      uVar4 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar4;
      bVar1 = (int)*param_1 < (int)*param_2;
      if (*(int *)((long)param_2 + 4) != *(int *)((long)param_1 + 4)) {
        bVar1 = *(int *)((long)param_1 + 4) <= *(int *)((long)param_2 + 4);
      }
      if (bVar1) {
        uVar4 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar4;
      }
    }
  }
  return;
}



/* Entry: 109412db4; end: 109413167;  */

bool FUN_109412db4(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  int iVar15;
  long lVar16;
  undefined1 auVar17 [16];
  
  uVar9 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar9 < 3) {
    if (uVar9 < 2) {
      return true;
    }
    if (uVar9 != 2) {
LAB_109412f44:
      iVar4 = *(int *)param_1[1];
      iVar15 = *(int *)(*param_1 + 0xc);
      iVar12 = *(int *)*param_1;
      iVar1 = *(int *)(*param_1 + 4);
      bVar5 = iVar12 < *(int *)(*param_1 + 8);
      if (iVar15 != iVar1) {
        bVar5 = iVar1 <= iVar15;
      }
      iVar3 = *(int *)(param_1[1] + 4);
      bVar6 = *(int *)(*param_1 + 8) < iVar4;
      if (iVar3 != iVar15) {
        bVar6 = iVar15 <= iVar3;
      }
      if (bVar5) {
        uVar10 = *(undefined8 *)*param_1;
        if (bVar6) {
          *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
        }
        else {
          *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = uVar10;
          iVar12 = (int)((ulong)uVar10 >> 0x20);
          bVar5 = (int)uVar10 < iVar4;
          if (iVar3 != iVar12) {
            bVar5 = iVar12 <= iVar3;
          }
          if (!bVar5) goto LAB_10941309c;
          *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_1[1];
        }
        *(undefined8 *)param_1[1] = uVar10;
      }
      else if (bVar6) {
        uVar10 = *(undefined8 *)(*param_1 + 8);
        uVar2 = *(undefined8 *)param_1[1];
        *(undefined8 *)(*param_1 + 8) = uVar2;
        *(undefined8 *)param_1[1] = uVar10;
        iVar15 = (int)((ulong)uVar2 >> 0x20);
        bVar5 = iVar12 < (int)uVar2;
        if (iVar1 != iVar15) {
          bVar5 = iVar1 <= iVar15;
        }
        if (bVar5) {
          uVar10 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = uVar2;
          *(undefined8 *)(*param_1 + 8) = uVar10;
        }
      }
LAB_10941309c:
      if ((undefined1 (*) [16])(param_1[1] + 8) == param_2) {
        return true;
      }
      lVar14 = 0;
      iVar12 = 0;
      pauVar11 = param_1 + 1;
      pauVar13 = (undefined1 (*) [16])(param_1[1] + 8);
      do {
        bVar5 = *(int *)*pauVar11 < *(int *)*pauVar13;
        if (*(int *)(*pauVar13 + 4) != *(int *)(*pauVar11 + 4)) {
          bVar5 = *(int *)(*pauVar11 + 4) <= *(int *)(*pauVar13 + 4);
        }
        if (bVar5) {
          uVar10 = *(undefined8 *)*pauVar13;
          lVar8 = lVar14;
          do {
            lVar16 = lVar8;
            *(undefined8 *)(param_1[1] + lVar16 + 8) = *(undefined8 *)(param_1[1] + lVar16);
            pauVar11 = param_1;
            if (lVar16 == -0x10) goto LAB_109413124;
            iVar15 = (int)((ulong)uVar10 >> 0x20);
            bVar5 = *(int *)(*param_1 + lVar16 + 8) < (int)uVar10;
            if (*(int *)(*param_1 + lVar16 + 0xc) != iVar15) {
              bVar5 = *(int *)(*param_1 + lVar16 + 0xc) <= iVar15;
            }
            lVar8 = lVar16 + -8;
          } while (bVar5);
          pauVar11 = (undefined1 (*) [16])(param_1[1] + lVar16);
LAB_109413124:
          *(undefined8 *)*pauVar11 = uVar10;
          iVar12 = iVar12 + 1;
          if (iVar12 == 8) {
            return (undefined1 (*) [16])(*pauVar13 + 8) == param_2;
          }
        }
        puVar7 = *pauVar13;
        lVar14 = lVar14 + 8;
        pauVar11 = pauVar13;
        pauVar13 = (undefined1 (*) [16])(puVar7 + 8);
        if ((undefined1 (*) [16])(puVar7 + 8) == param_2) {
          return true;
        }
      } while( true );
    }
    bVar5 = *(int *)*param_1 < *(int *)(param_2[-1] + 8);
    if (*(int *)(param_2[-1] + 0xc) != *(int *)(*param_1 + 4)) {
      bVar5 = *(int *)(*param_1 + 4) <= *(int *)(param_2[-1] + 0xc);
    }
    if (!bVar5) {
      return true;
    }
    uVar10 = *(undefined8 *)*param_1;
  }
  else {
    if (uVar9 != 3) {
      if (uVar9 == 4) {
        FUN_109412c24(param_1,*param_1 + 8,param_1 + 1,param_2[-1] + 8);
        return true;
      }
      if (uVar9 == 5) {
        FUN_109412c24(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8);
        bVar5 = *(int *)(param_1[1] + 8) < *(int *)(param_2[-1] + 8);
        if (*(int *)(param_2[-1] + 0xc) != *(int *)(param_1[1] + 0xc)) {
          bVar5 = *(int *)(param_1[1] + 0xc) <= *(int *)(param_2[-1] + 0xc);
        }
        if (!bVar5) {
          return true;
        }
        uVar10 = *(undefined8 *)(param_1[1] + 8);
        *(undefined8 *)(param_1[1] + 8) = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar10;
        bVar5 = *(int *)param_1[1] < *(int *)(param_1[1] + 8);
        if (*(int *)(param_1[1] + 0xc) != *(int *)(param_1[1] + 4)) {
          bVar5 = *(int *)(param_1[1] + 4) <= *(int *)(param_1[1] + 0xc);
        }
        if (!bVar5) {
          return true;
        }
        uVar10 = *(undefined8 *)param_1[1];
        uVar2 = *(undefined8 *)(param_1[1] + 8);
        *(undefined8 *)param_1[1] = uVar2;
        *(undefined8 *)(param_1[1] + 8) = uVar10;
        iVar12 = (int)((ulong)uVar2 >> 0x20);
        bVar5 = *(int *)(*param_1 + 8) < (int)uVar2;
        if (*(int *)(*param_1 + 0xc) != iVar12) {
          bVar5 = *(int *)(*param_1 + 0xc) <= iVar12;
        }
        if (!bVar5) {
          return true;
        }
        uVar10 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar2;
        *(undefined8 *)param_1[1] = uVar10;
        bVar5 = *(int *)*param_1 < (int)uVar2;
        if (*(int *)(*param_1 + 4) != iVar12) {
          bVar5 = *(int *)(*param_1 + 4) <= iVar12;
        }
        if (!bVar5) {
          return true;
        }
        uVar10 = *(undefined8 *)*param_1;
        *(undefined8 *)*param_1 = uVar2;
        *(undefined8 *)(*param_1 + 8) = uVar10;
        return true;
      }
      goto LAB_109412f44;
    }
    iVar12 = *(int *)(*param_1 + 0xc);
    bVar5 = *(int *)*param_1 < *(int *)(*param_1 + 8);
    if (iVar12 != *(int *)(*param_1 + 4)) {
      bVar5 = *(int *)(*param_1 + 4) <= iVar12;
    }
    bVar6 = *(int *)(*param_1 + 8) < *(int *)(param_2[-1] + 8);
    if (*(int *)(param_2[-1] + 0xc) != iVar12) {
      bVar6 = iVar12 <= *(int *)(param_2[-1] + 0xc);
    }
    if (!bVar5) {
      if (!bVar6) {
        return true;
      }
      uVar10 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
      *(undefined8 *)(param_2[-1] + 8) = uVar10;
      bVar5 = *(int *)*param_1 < *(int *)(*param_1 + 8);
      if (*(int *)(*param_1 + 0xc) != *(int *)(*param_1 + 4)) {
        bVar5 = *(int *)(*param_1 + 4) <= *(int *)(*param_1 + 0xc);
      }
      if (!bVar5) {
        return true;
      }
      auVar17 = NEON_ext(*param_1,*param_1,8,1);
      *(long *)(*param_1 + 8) = auVar17._8_8_;
      *(long *)*param_1 = auVar17._0_8_;
      return true;
    }
    uVar10 = *(undefined8 *)*param_1;
    if (!bVar6) {
      *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = uVar10;
      iVar12 = (int)((ulong)uVar10 >> 0x20);
      bVar5 = (int)uVar10 < *(int *)(param_2[-1] + 8);
      if (*(int *)(param_2[-1] + 0xc) != iVar12) {
        bVar5 = iVar12 <= *(int *)(param_2[-1] + 0xc);
      }
      if (!bVar5) {
        return true;
      }
      *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
      goto LAB_109412f3c;
    }
  }
  *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
LAB_109412f3c:
  *(undefined8 *)(param_2[-1] + 8) = uVar10;
  return true;
}



/* Entry: 109413168; end: 1094131f7;  */

void FUN_109413168(double *param_1,uint *param_2)

{
  double *pdVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  pdVar1 = *(double **)(param_2 + 4);
  plVar2 = *(long **)(param_2 + 0x12);
  if ((*param_2 & 7) == 5) {
    dVar4 = (double)*(float *)(pdVar1 + 1);
    lVar3 = *plVar2;
    fVar7 = *(float *)((long)pdVar1 + lVar3 + 4);
    dVar5 = (double)*(float *)((long)pdVar1 + lVar3 + 8);
    param_1[2] = dVar4;
    param_1[3] = dVar5;
    dVar6 = (double)*(float *)pdVar1;
    *param_1 = dVar6;
    dVar8 = (double)fVar7;
  }
  else {
    dVar4 = pdVar1[2];
    param_1[2] = dVar4;
    lVar3 = *plVar2;
    dVar5 = *(double *)((long)pdVar1 + lVar3 + 0x10);
    param_1[3] = dVar5;
    dVar6 = *pdVar1;
    *param_1 = dVar6;
    dVar8 = *(double *)((long)pdVar1 + lVar3 + 8);
  }
  param_1[1] = dVar8;
  param_1[4] = 1.0 / dVar6;
  param_1[5] = 1.0 / dVar8;
  param_1[6] = dVar4 / dVar6;
  param_1[7] = dVar5 / dVar8;
  return;
}



/* Entry: 1094131f8; end: 109413a77;  */

void FUN_1094131f8(double *param_1,uint *param_2,uint *param_3,long *param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  double *pdVar20;
  float fVar21;
  
  uVar6 = param_2[2];
  if ((int)param_3[2] <= (int)param_2[2]) {
    uVar6 = param_3[2];
  }
  uVar1 = uVar6;
  if (3 < (int)uVar6) {
    uVar1 = 4;
  }
  param_4[1] = *param_4;
  func_0x000108a851e4(param_4,(long)(int)(uVar1 * 5));
  if (0 < (int)uVar6) {
    uVar17 = 0;
    uVar6 = *param_3;
    uVar7 = param_3[3];
    lVar18 = *(long *)(param_3 + 4);
    piVar2 = *(int **)(param_3 + 0x10);
    plVar4 = *(long **)(param_3 + 0x12);
    uVar8 = *param_2;
    pfVar19 = *(float **)(param_2 + 4);
    pdVar20 = (double *)(*param_4 + 0x10);
    uVar9 = param_2[3];
    piVar3 = *(int **)(param_2 + 0x10);
    plVar5 = *(long **)(param_2 + 0x12);
    lVar11 = lVar18;
    pfVar12 = pfVar19;
    do {
      pfVar13 = (float *)(lVar18 + uVar17 * 8);
      iVar16 = (int)uVar17;
      pfVar14 = pfVar13;
      if (((uVar6 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
        if (piVar2[1] == 1) {
          pfVar14 = (float *)(lVar18 + *plVar4 * uVar17);
        }
        else {
          iVar10 = 0;
          if (uVar7 != 0) {
            iVar10 = iVar16 / (int)uVar7;
          }
          pfVar14 = (float *)(lVar11 + *plVar4 * (long)iVar10 + (long)(int)(iVar10 * uVar7) * -8);
        }
      }
      pdVar20[-2] = param_1[2] + *param_1 * (double)*pfVar14;
      if (((uVar6 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
        if (piVar2[1] == 1) {
          pfVar13 = (float *)(lVar18 + *plVar4 * uVar17);
        }
        else {
          iVar10 = 0;
          if (uVar7 != 0) {
            iVar10 = iVar16 / (int)uVar7;
          }
          pfVar13 = (float *)(lVar11 + *plVar4 * (long)iVar10 + (long)(int)(iVar10 * uVar7) * -8);
        }
      }
      pdVar20[-1] = param_1[3] + param_1[1] * (double)pfVar13[1];
      if (((uVar8 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
        if (piVar3[1] == 1) {
          lVar15 = *plVar5 * uVar17;
          pfVar14 = (float *)((long)pfVar19 + lVar15);
          *pdVar20 = (double)*pfVar14;
          pfVar13 = (float *)((long)pfVar19 + lVar15 + 4);
        }
        else {
          iVar10 = 0;
          if (uVar9 != 0) {
            iVar10 = iVar16 / (int)uVar9;
          }
          lVar15 = *plVar5 * (long)iVar10;
          pfVar14 = (float *)((long)pfVar19 + (long)(int)(iVar16 - iVar10 * uVar9) * 0xc + lVar15);
          *pdVar20 = (double)*(float *)((long)pfVar12 + lVar15 + (long)(int)(iVar10 * uVar9) * -0xc)
          ;
          pfVar13 = pfVar14 + 1;
        }
      }
      else {
        pfVar13 = pfVar12 + 1;
        *pdVar20 = (double)*pfVar12;
        pfVar14 = pfVar12;
      }
      fVar21 = pfVar14[2];
      uVar17 = uVar17 + 1;
      pdVar20[1] = (double)*pfVar13;
      pdVar20[2] = (double)fVar21;
      pfVar12 = pfVar12 + 3;
      lVar11 = lVar11 + 8;
      pdVar20 = pdVar20 + 5;
    } while (uVar1 != uVar17);
  }
  return;
}



/* Entry: 109413a78; end: 109414723;  */

/* WARNING: Type propagation algorithm not settling */

double FUN_109413a78(double param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6,double param_7,double param_8,long param_9,long param_10,
                    double param_11)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  double *pdVar4;
  undefined4 *puVar5;
  ulong uVar6;
  double *pdVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  uint uVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  double *unaff_x19;
  double unaff_x20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double *pdVar34;
  double dVar35;
  double dVar36;
  double *pdVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double *pdVar47;
  double dVar48;
  double dVar49;
  double *pdVar50;
  double *pdVar51;
  double dVar52;
  double *pdVar53;
  double in_stack_00000000;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  undefined4 *puStack_460;
  undefined8 uStack_458;
  double dStack_450;
  double *pdStack_448;
  undefined1 *puStack_440;
  code *pcStack_438;
  double dStack_430;
  double dStack_428;
  double dStack_420;
  double dStack_418;
  double dStack_410;
  double dStack_408;
  double dStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  long lStack_3d8;
  double dStack_3d0;
  double dStack_3c8;
  double dStack_3c0;
  double dStack_3b8;
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  double dStack_378;
  double dStack_370;
  double dStack_368;
  double *pdStack_358;
  double *pdStack_350;
  double *pdStack_348;
  double dStack_338;
  double dStack_330;
  double *pdStack_328;
  double *pdStack_320;
  double *pdStack_318;
  double *pdStack_310;
  double adStack_308 [21];
  double adStack_260 [25];
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double adStack_140 [17];
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar27 = -*(double *)(param_9 + 0x30);
  dVar35 = *(double *)(param_9 + 0x20);
  dVar45 = *(double *)(param_9 + 0x28);
  dVar44 = -*(double *)(param_9 + 0x38);
  dVar28 = dVar27 + param_6 * dVar35;
  dVar30 = dVar27 + param_1 * dVar35;
  dVar25 = dVar44 + param_7 * dVar45;
  dVar44 = dVar44 + param_2 * dVar45;
  dVar24 = dVar27 + in_stack_00000010 * dVar35;
  dVar27 = dVar27 + param_6 * dVar35;
  dVar31 = dVar45 * in_stack_00000018 - *(double *)(param_9 + 0x38);
  auVar39 = NEON_fmov(0x3ff0000000000000,8);
  dVar38 = auVar39._0_8_;
  dVar40 = auVar39._8_8_;
  dVar42 = dVar38 / SQRT(dVar25 * dVar25 + dVar28 * dVar28 + dVar38);
  dVar43 = dVar40 / SQRT(dVar44 * dVar44 + dVar30 * dVar30 + dVar40);
  dVar38 = dVar38 / SQRT(dVar31 * dVar31 + dVar24 * dVar24 + dVar38);
  dVar40 = dVar40 / SQRT(dVar25 * dVar25 + dVar27 * dVar27 + dVar40);
  dVar30 = dVar30 * dVar43;
  dVar44 = dVar44 * dVar43;
  dVar24 = dVar24 * dVar38;
  dVar31 = dVar31 * dVar38;
  dVar45 = dVar31 * dVar44 + dVar24 * dVar30 + dVar38 * dVar43;
  dVar35 = dVar25 * dVar42 * dVar31 + dVar24 * dVar28 * dVar42 + dVar38 * dVar42;
  dVar26 = dVar44 * dVar25 * dVar40 + dVar27 * dVar40 * dVar30 + dVar40 * dVar43;
  dVar45 = dVar45 + dVar45;
  pdVar50 = (double *)(dVar35 + dVar35);
  pdVar51 = (double *)(dVar26 + dVar26);
  dVar46 = (double)pdVar50 * (double)pdVar50;
  dVar52 = dVar45 * dVar45;
  dVar49 = (double)pdVar51 * (double)pdVar51;
  dVar26 = (double)pdVar50 * (double)pdVar51;
  dVar29 = dVar45 * dVar26;
  dVar35 = ((dVar49 + dVar46 + dVar52) - dVar29) + -1.0;
  if (dVar35 != 0.0) {
    dVar35 = SQRT((in_stack_00000000 - in_stack_00000028) * (in_stack_00000000 - in_stack_00000028)
                  + (param_8 - in_stack_00000020) * (param_8 - in_stack_00000020) +
                  (in_stack_00000008 - in_stack_00000030) * (in_stack_00000008 - in_stack_00000030))
    ;
    dVar32 = SQRT((param_4 - in_stack_00000028) * (param_4 - in_stack_00000028) +
                  (param_3 - in_stack_00000020) * (param_3 - in_stack_00000020) +
                  (param_5 - in_stack_00000030) * (param_5 - in_stack_00000030));
    dVar41 = SQRT((param_4 - in_stack_00000000) * (param_4 - in_stack_00000000) +
                  (param_3 - param_8) * (param_3 - param_8) +
                  (param_5 - in_stack_00000008) * (param_5 - in_stack_00000008));
    dVar36 = 1.0 / (dVar41 * dVar41);
    dVar48 = dVar36 * dVar35 * dVar35;
    dVar36 = dVar36 * dVar32 * dVar32;
    pdVar53 = (double *)(dVar48 * dVar48);
    dVar32 = dVar36 * dVar36;
    pdVar47 = (double *)(dVar48 * dVar36);
    pdVar37 = (double *)(dVar48 + dVar48);
    dVar35 = ((double)pdVar53 + dVar32 + dVar36 * -2.0 + 1.0 + (2.0 - dVar49) * (double)pdVar47) -
             (double)pdVar37;
    dStack_3e8 = param_8;
    if ((dVar35 != 0.0) &&
       (dVar33 = (dVar29 + ((dVar48 + -1.0) - dVar36) * dVar49 + (dVar36 + dVar48 + -1.0) * dVar46)
                 - dVar29 * dVar48, pdVar34 = (double *)(dVar33 * dVar36 * dVar33),
       pdStack_328 = pdVar53, pdStack_320 = pdVar47, pdStack_318 = pdVar37, (double)pdVar34 != 0.0))
    {
      dStack_3f0 = dVar48 * 4.0;
      dStack_3e0 = dVar36 - dVar32;
      dStack_420 = (double)pdVar53 - (double)pdVar37;
      unaff_x19 = adStack_260 + 0x14;
      pdVar37 = adStack_260 + 0x14;
      dStack_430 = dVar52;
      dStack_428 = dVar45;
      dStack_418 = dVar36;
      dStack_410 = dVar46;
      dStack_408 = (double)pdVar51 * (double)pdVar51;
      dStack_3f8 = dVar48;
      dStack_3d0 = dVar32;
      dStack_3c8 = 2.0 - dVar49;
      dStack_3c0 = dVar31;
      dStack_3b8 = dVar25 * dVar40;
      dStack_3b0 = dVar24;
      dStack_3a8 = dVar27 * dVar40;
      dStack_3a0 = dVar38;
      dStack_398 = dVar40;
      dStack_390 = dVar25 * dVar42;
      dStack_388 = dVar44;
      dStack_380 = dVar28 * dVar42;
      dStack_378 = dVar30;
      dStack_370 = dVar42;
      dStack_368 = dVar43;
      pdStack_358 = pdVar34;
      pdStack_350 = pdVar50;
      pdStack_348 = pdVar51;
      dStack_338 = dVar49;
      dStack_330 = dVar41;
      pdStack_310 = pdVar51;
      FUN_10941a0d8(dVar35,((double)pdVar47 + dStack_3e0) * dVar26 +
                           (dStack_3f0 +
                           (double)pdVar47 * dVar49 +
                           (((double)pdVar53 + (double)pdVar47 + 1.0) - dVar36) * -2.0) * dVar45,
                    (((dVar52 + (dVar46 + dVar49 + -2.0) * dVar32) - (dVar46 + dVar29) * dVar36) -
                    (dVar49 + dVar29) * (double)pdVar47) + (dVar52 + 2.0) * dStack_420 + 2.0,
                    dVar45 * (dStack_3f0 +
                              ((double)pdVar47 - (double)pdVar53) +
                              ((double)pdVar47 - (double)pdVar53) + dVar36 * (dVar46 + -2.0) + -2.0)
                    + (dVar36 + ((double)pdVar47 - dVar32)) * dVar26,
                    (double)pdVar53 +
                    ((dVar32 + ((dVar36 - dVar48) - (double)pdVar47) * 2.0 + 1.0) - dVar46 * dVar36)
                    ,pdVar37,adStack_260 + 0x15,adStack_260 + 0x16,adStack_260 + 0x17);
      if ((int)pdVar37 == 0) goto LAB_109413c8c;
      lVar11 = 0;
      uVar15 = 0;
      dVar26 = (double)pdStack_350 * dStack_338;
      dVar24 = (double)pdStack_310 * dStack_338;
      dVar27 = dStack_3d0 - (double)pdStack_320;
      dVar25 = (double)pdStack_328 - dStack_3d0;
      dVar44 = dStack_3d0 + (((double)pdStack_320 - dStack_418) - dStack_3f8) * 2.0;
      dVar35 = ((double)pdStack_320 - dStack_3f8) - dStack_418;
      dVar28 = dStack_3d0 + (double)pdStack_328 + dVar35 * 2.0;
      dVar29 = dStack_3d0 +
               (((double)pdStack_328 + dStack_3c8 * (double)pdStack_320) - (double)pdStack_318);
      dVar45 = dStack_3d0 + (double)pdStack_328 + 1.0 + dVar35 * 2.0 + dStack_3e0 * dStack_338;
      dVar30 = dStack_428 * dVar24;
      dStack_3c8 = dStack_388;
      dStack_3d0 = dStack_378;
      do {
        dVar35 = *(double *)((long)unaff_x19 + lVar11);
        if (0.0 < dVar35) {
          dVar31 = dVar35 * dVar35;
          dVar38 = (dStack_418 +
                   (((dStack_428 * dStack_3f8 - dStack_428) * dVar35 +
                     dVar31 * ((1.0 - dStack_3f8) - dStack_418) + 1.0) - dStack_3f8)) *
                   ((((double)pdStack_328 + dVar44 + 1.0) * (double)pdStack_310 * dStack_410 +
                     (((dVar27 * dStack_338 +
                       (dStack_3f8 * -2.0 + 1.0 + (double)pdStack_328) * dStack_430) - dStack_3f0) +
                      dVar25 * 2.0 + 2.0) * dVar24 +
                    ((dStack_3f0 + ((dStack_418 - (double)pdStack_320) - (double)pdStack_328) * 2.0
                     + -2.0) - dStack_418 * dStack_338) * dStack_428 * dVar26) * dVar35 +
                    dVar31 * (dVar26 * dVar45 +
                              (dStack_3f0 + (dStack_418 - (double)pdStack_328) * 2.0 +
                               (dStack_338 + -2.0) * (double)pdStack_320 + -2.0) * dVar30 +
                             dVar35 * dVar24 * (dVar29 + dStack_418 * -2.0 + 1.0)) +
                    ((double)pdStack_320 +
                     (((double)pdStack_318 - dStack_418) - (double)pdStack_328) + -1.0) *
                    (dVar30 + dVar30) +
                    ((dStack_430 - dStack_3f0) + dVar25 * 2.0 + dStack_418 * dStack_338 +
                     dStack_420 * dStack_430 + 2.0) * dVar26 +
                   (((((dStack_418 + (double)pdStack_318) - (double)pdStack_328) -
                     (double)pdStack_320) + -1.0) * (double)pdStack_310 * (dStack_428 + dStack_428)
                   + (dVar28 + 1.0) * (double)pdStack_350) * dStack_410);
          if (0.0 < dVar38) {
            dVar38 = (1.0 / (double)pdStack_358) * dVar38;
            dVar31 = dVar31 + dVar38 * dVar38 + (double)pdStack_310 * -(dVar35 * dVar38);
            if (0.0 < dVar31) {
              dVar31 = dStack_330 / SQRT(dVar31);
              lVar22 = (long)(int)uVar15;
              adStack_308[lVar22 * 3 + 9] = dVar35 * dVar31;
              adStack_308[lVar22 * 3 + 10] = dVar38 * dVar31;
              adStack_308[lVar22 * 3 + 0xb] = dVar31;
              uVar15 = uVar15 + 1;
            }
          }
        }
        dVar35 = 1.0;
        lVar11 = lVar11 + 8;
      } while (((ulong)pdVar37 & 0xffffffff) << 3 != lVar11);
      unaff_x20 = param_11;
      if (0 < (int)uVar15) {
        dStack_3f0 = (double)CONCAT44(dStack_3f0._4_4_,uVar15);
        dStack_3e0 = (double)(ulong)uVar15;
        dVar24 = (param_3 + dStack_3e8 + in_stack_00000020) / 3.0;
        dVar45 = (param_4 + in_stack_00000000 + in_stack_00000028) / 3.0;
        pdVar50 = adStack_260 + 0x15;
        pdStack_310 = adStack_260 + 1;
        pdStack_318 = &dStack_198;
        pdStack_320 = &dStack_190;
        pdStack_328 = adStack_260 + 0x16;
        dVar27 = (param_5 + in_stack_00000008 + in_stack_00000030) / 3.0;
        dVar35 = 0.0;
        pdVar51 = (double *)(param_10 + 8);
        do {
          dStack_330 = param_11;
          pdStack_350 = pdVar51;
          dStack_338 = dVar35;
          lVar11 = 0;
          dVar35 = adStack_308[(long)dStack_338 * 3 + 9];
          dVar25 = adStack_308[(long)dStack_338 * 3 + 10];
          dVar26 = adStack_308[(long)dStack_338 * 3 + 0xb];
          adStack_308[0] = dStack_378 * dVar35;
          adStack_308[1] = dStack_388 * dVar35;
          adStack_308[2] = dStack_368 * dVar35;
          adStack_308[3] = dStack_380 * dVar25;
          adStack_308[4] = dStack_390 * dVar25;
          adStack_308[5] = dStack_370 * dVar25;
          adStack_308[6] = dStack_3b0 * dVar26;
          adStack_308[7] = dStack_3c0 * dVar26;
          adStack_308[8] = dStack_3a0 * dVar26;
          do {
            *(double *)((long)adStack_140 + lVar11 + 0x48) =
                 (*(double *)((long)adStack_308 + lVar11) +
                  *(double *)((long)adStack_308 + lVar11 + 0x18) +
                 *(double *)((long)adStack_308 + lVar11 + 0x30)) / 3.0;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0x18);
          lVar11 = 0;
          do {
            dVar35 = *(double *)((long)adStack_308 + lVar11 + 0x18);
            dVar25 = *(double *)((long)adStack_308 + lVar11);
            dVar26 = *(double *)((long)adStack_308 + lVar11 + 0x30);
            dVar44 = *(double *)((long)adStack_140 + lVar11 + 0x48);
            *(double *)((long)adStack_140 + lVar11) =
                 (dStack_3e8 * dVar35 + dVar25 * param_3 + dVar26 * in_stack_00000020) / 3.0 -
                 dVar24 * dVar44;
            *(double *)((long)adStack_140 + lVar11 + 0x18) =
                 (in_stack_00000000 * dVar35 + dVar25 * param_4 + dVar26 * in_stack_00000028) / 3.0
                 - dVar45 * dVar44;
            *(double *)((long)adStack_140 + lVar11 + 0x30) =
                 (in_stack_00000008 * dVar35 + dVar25 * param_5 + dVar26 * in_stack_00000030) / 3.0
                 - dVar27 * dVar44;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0x18);
          uVar9 = 0;
          pdStack_358 = (double *)(param_10 + (long)dStack_338 * 0x48);
          dVar35 = adStack_140[0] + adStack_140[4] + adStack_140[8];
          dVar25 = (adStack_140[0] - adStack_140[4]) - adStack_140[8];
          dVar26 = (adStack_140[4] - adStack_140[8]) - adStack_140[0];
          dVar44 = (adStack_140[8] - adStack_140[0]) - adStack_140[4];
          adStack_260[0x14] = dVar35;
          adStack_260[0x15] = adStack_140[5] - adStack_140[7];
          dStack_198 = dVar25;
          adStack_260[0x18] = adStack_140[5] - adStack_140[7];
          adStack_260[0x16] = adStack_140[6] - adStack_140[2];
          adStack_260[0x17] = adStack_140[1] - adStack_140[3];
          dStack_180 = adStack_140[6] - adStack_140[2];
          dStack_178 = adStack_140[1] + adStack_140[3];
          dStack_190 = adStack_140[1] + adStack_140[3];
          dStack_188 = adStack_140[6] + adStack_140[2];
          dStack_160 = adStack_140[1] - adStack_140[3];
          dStack_158 = adStack_140[6] + adStack_140[2];
          dStack_170 = dVar26;
          dStack_168 = adStack_140[5] + adStack_140[7];
          dStack_148 = dVar44;
          dStack_150 = adStack_140[5] + adStack_140[7];
          adStack_260[2] = 0.0;
          adStack_260[1] = 0.0;
          adStack_260[4] = 0.0;
          adStack_260[3] = 0.0;
          adStack_260[0] = 1.0;
          adStack_260[5] = 1.0;
          adStack_260[7] = 0.0;
          adStack_260[6] = 0.0;
          adStack_260[9] = 0.0;
          adStack_260[8] = 0.0;
          adStack_260[0xc] = 0.0;
          adStack_260[0xb] = 0.0;
          adStack_260[0xe] = 0.0;
          adStack_260[0xd] = 0.0;
          adStack_260[10] = 1.0;
          adStack_260[0xf] = 1.0;
          adStack_260[0x11] = dVar25;
          adStack_260[0x10] = dVar35;
          adStack_260[0x13] = dVar44;
          adStack_260[0x12] = dVar26;
          adStack_140[0xd] = 0.0;
          adStack_140[0xc] = 0.0;
          adStack_140[0xf] = 0.0;
          adStack_140[0xe] = 0.0;
          do {
            adStack_140[0xf] = 0.0;
            adStack_140[0xe] = 0.0;
            adStack_140[0xd] = 0.0;
            adStack_140[0xc] = 0.0;
            dVar28 = ABS(adStack_260[0x15]) + ABS(adStack_260[0x16]) + ABS(adStack_260[0x17]) +
                     ABS(dStack_190) + ABS(dStack_188) + ABS(dStack_168);
            adStack_260[0x10] = dVar35;
            adStack_260[0x11] = dVar25;
            adStack_260[0x12] = dVar26;
            adStack_260[0x13] = dVar44;
            if (dVar28 == 0.0) break;
            pdVar37 = adStack_260 + 0x14;
            pdVar51 = adStack_260;
            dVar28 = dVar28 * 0.2 * 0.0625;
            if (2 < uVar9) {
              dVar28 = 0.0;
            }
            lVar11 = 2;
            uVar6 = 1;
            pdVar53 = pdStack_318;
            pdVar34 = pdStack_320;
            pdVar7 = pdStack_310;
            pdVar12 = pdStack_328;
            unaff_x19 = pdVar50;
            pdVar47 = pdVar50;
            uVar23 = 0;
            do {
              lVar22 = 0;
              uVar1 = uVar23 + 1;
              pdVar4 = pdVar50 + uVar23 * 5;
              lVar8 = lVar11;
              pdVar14 = pdVar53;
              pdVar16 = pdVar7;
              pdVar18 = pdVar34;
              pdVar19 = pdVar12;
              pdVar20 = pdVar47;
              uVar21 = uVar6;
              do {
                dVar29 = *pdVar4;
                dVar30 = ABS(dVar29) * 100.0;
                if (((uVar9 < 4) ||
                    (dVar30 + ABS(adStack_260[uVar23 + 0x10]) != ABS(adStack_260[uVar23 + 0x10])))
                   || (dVar30 + ABS(adStack_260[uVar21 + 0x10]) != ABS(adStack_260[uVar21 + 0x10])))
                {
                  if (dVar28 < ABS(dVar29)) {
                    dVar40 = adStack_260[uVar23 + 0x10];
                    dVar42 = adStack_260[uVar21 + 0x10] - dVar40;
                    dVar38 = ABS(adStack_260[uVar21 + 0x10] - dVar40);
                    dVar43 = (dVar42 * 0.5) / dVar29;
                    dVar46 = 1.0 / (ABS(dVar43) + SQRT(dVar43 * dVar43 + 1.0));
                    dVar31 = -dVar46;
                    if (0.0 <= dVar43) {
                      dVar31 = dVar46;
                    }
                    if (dVar30 + dVar38 == dVar38) {
                      dVar31 = dVar29 / dVar42;
                    }
                    dVar29 = dVar29 * dVar31;
                    adStack_140[uVar23 + 0xc] = adStack_140[uVar23 + 0xc] - dVar29;
                    adStack_140[uVar21 + 0xc] = dVar29 + adStack_140[uVar21 + 0xc];
                    adStack_260[uVar23 + 0x10] = dVar40 - dVar29;
                    adStack_260[uVar21 + 0x10] = dVar29 + adStack_260[uVar21 + 0x10];
                    *pdVar4 = 0.0;
                    dVar38 = 1.0 / SQRT(dVar31 * dVar31 + 1.0);
                    dVar29 = dVar31 * dVar38;
                    dVar30 = dVar29 / (dVar38 + 1.0);
                    dVar31 = -(dVar31 * dVar38);
                    pdVar13 = pdVar20;
                    pdVar17 = pdVar37;
                    for (uVar2 = uVar23; uVar2 != 0; uVar2 = uVar2 - 1) {
                      dVar38 = *pdVar17;
                      dVar40 = *pdVar13;
                      *pdVar17 = dVar38 + (dVar40 + dVar30 * dVar38) * dVar31;
                      *pdVar13 = dVar40 + (dVar38 - dVar30 * dVar40) * dVar29;
                      pdVar13 = pdVar13 + 4;
                      pdVar17 = pdVar17 + 4;
                    }
                    lVar10 = lVar22;
                    pdVar13 = unaff_x19;
                    pdVar17 = pdVar14;
                    if (uVar1 < uVar21) {
                      do {
                        dVar38 = *pdVar13;
                        dVar40 = *pdVar17;
                        *pdVar13 = dVar38 + (dVar40 + dVar30 * dVar38) * dVar31;
                        *pdVar17 = dVar40 + (dVar38 - dVar30 * dVar40) * dVar29;
                        lVar10 = lVar10 + -1;
                        pdVar13 = pdVar13 + 1;
                        pdVar17 = pdVar17 + 4;
                      } while (lVar10 != 0);
                    }
                    lVar10 = lVar8;
                    pdVar13 = pdVar19;
                    pdVar17 = pdVar18;
                    if (uVar21 < 3) {
                      do {
                        dVar38 = *pdVar13;
                        dVar40 = *pdVar17;
                        *pdVar13 = dVar38 + (dVar40 + dVar30 * dVar38) * dVar31;
                        *pdVar17 = dVar40 + (dVar38 - dVar30 * dVar40) * dVar29;
                        lVar10 = lVar10 + -1;
                        pdVar13 = pdVar13 + 1;
                        pdVar17 = pdVar17 + 1;
                      } while (lVar10 != 0);
                    }
                    lVar10 = 0;
                    do {
                      dVar38 = *(double *)((long)pdVar51 + lVar10);
                      dVar40 = *(double *)((long)pdVar16 + lVar10);
                      *(double *)((long)pdVar51 + lVar10) =
                           dVar38 + (dVar40 + dVar30 * dVar38) * dVar31;
                      *(double *)((long)pdVar16 + lVar10) =
                           dVar40 + (dVar38 - dVar30 * dVar40) * dVar29;
                      lVar10 = lVar10 + 0x20;
                    } while (lVar10 != 0x80);
                  }
                }
                else {
                  *pdVar4 = 0.0;
                }
                uVar21 = uVar21 + 1;
                pdVar4 = pdVar4 + 1;
                pdVar20 = pdVar20 + 1;
                lVar22 = lVar22 + 1;
                pdVar14 = pdVar14 + 1;
                lVar8 = lVar8 + -1;
                pdVar18 = pdVar18 + 5;
                pdVar19 = pdVar19 + 1;
                pdVar16 = pdVar16 + 1;
              } while (uVar21 != 4);
              uVar6 = uVar6 + 1;
              pdVar47 = pdVar47 + 1;
              pdVar37 = pdVar37 + 1;
              pdVar53 = pdVar53 + 5;
              unaff_x19 = unaff_x19 + 5;
              lVar11 = lVar11 + -1;
              pdVar34 = pdVar34 + 5;
              pdVar12 = pdVar12 + 5;
              pdVar7 = pdVar7 + 1;
              pdVar51 = pdVar51 + 1;
              uVar23 = uVar1;
            } while (uVar1 != 3);
            dVar35 = adStack_140[0xc] + dVar35;
            dVar25 = adStack_140[0xd] + dVar25;
            dVar26 = adStack_140[0xe] + dVar26;
            dVar44 = adStack_140[0xf] + dVar44;
            adStack_260[0x11] = dVar25;
            adStack_260[0x10] = dVar35;
            adStack_260[0x13] = dVar44;
            adStack_260[0x12] = dVar26;
            adStack_140[0xd] = 0.0;
            adStack_140[0xc] = 0.0;
            adStack_140[0xf] = 0.0;
            adStack_140[0xe] = 0.0;
            uVar9 = uVar9 + 1;
          } while (uVar9 != 0x32);
          adStack_140[0xf] = 0.0;
          adStack_140[0xe] = 0.0;
          adStack_140[0xd] = 0.0;
          adStack_140[0xc] = 0.0;
          uVar6 = 0;
          lVar11 = 1;
          dVar35 = adStack_260[0x10];
          do {
            uVar9 = (uint)lVar11;
            dVar25 = adStack_260[lVar11 + 0x10];
            if (adStack_260[lVar11 + 0x10] <= dVar35) {
              uVar9 = (uint)uVar6;
              dVar25 = dVar35;
            }
            dVar35 = dVar25;
            uVar6 = (ulong)uVar9;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 4);
          lVar11 = 0;
          uVar6 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
          do {
            *(undefined8 *)((long)adStack_140 + lVar11 + 0x60) =
                 *(undefined8 *)((long)adStack_260 + uVar6);
            uVar6 = uVar6 + 0x20;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0x20);
          lVar11 = 0;
          dVar26 = adStack_140[0xc] * adStack_140[0xc];
          dVar44 = adStack_140[0xd] * adStack_140[0xd];
          dVar28 = adStack_140[0xe] * adStack_140[0xe];
          dVar29 = adStack_140[0xf] * adStack_140[0xf];
          dVar35 = adStack_140[0xd] * adStack_140[0xe] - adStack_140[0xc] * adStack_140[0xf];
          *pdStack_358 = ((dVar26 + dVar44) - dVar28) - dVar29;
          pdStack_358[1] = dVar35 + dVar35;
          dVar25 = adStack_140[0xc] * adStack_140[0xe] + adStack_140[0xd] * adStack_140[0xf];
          dVar35 = adStack_140[0xd] * adStack_140[0xe] + adStack_140[0xc] * adStack_140[0xf];
          pdStack_358[2] = dVar25 + dVar25;
          pdStack_358[3] = dVar35 + dVar35;
          dVar35 = adStack_140[0xe] * adStack_140[0xf] - adStack_140[0xc] * adStack_140[0xd];
          pdStack_358[4] = ((dVar26 + dVar28) - dVar44) - dVar29;
          pdStack_358[5] = dVar35 + dVar35;
          dVar35 = adStack_140[0xd] * adStack_140[0xf] - adStack_140[0xc] * adStack_140[0xe];
          dVar25 = adStack_140[0xc] * adStack_140[0xd] + adStack_140[0xe] * adStack_140[0xf];
          pdStack_358[6] = dVar35 + dVar35;
          pdStack_358[7] = dVar25 + dVar25;
          pdStack_358[8] = ((dVar26 + dVar29) - dVar44) - dVar28;
          pdVar51 = pdStack_350;
          do {
            *(double *)((long)dStack_330 + lVar11) =
                 *(double *)((long)adStack_140 + lVar11 + 0x48) -
                 (dVar45 * *pdVar51 + dVar24 * pdVar51[-1] + dVar27 * pdVar51[1]);
            lVar11 = lVar11 + 8;
            pdVar51 = pdVar51 + 3;
          } while (lVar11 != 0x18);
          param_11 = (double)((long)dStack_330 + 0x18);
          dVar35 = (double)((long)dStack_338 + 1U);
          pdVar51 = pdStack_350 + 9;
        } while ((double)((long)dStack_338 + 1U) != dStack_3e0);
        pdVar37 = (double *)(ulong)uVar15;
        dVar35 = dStack_388;
        lStack_3d8 = param_10;
        goto LAB_109413c8c;
      }
    }
  }
  param_11 = unaff_x20;
  pdVar37 = (double *)0x0;
LAB_109413c8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return dVar35;
  }
  ___stack_chk_fail();
  pcStack_438 = FUN_109414724;
  if ((2 < (int)*(uint *)(pdVar37 + 1) && 2 < (int)*(uint *)((long)pdVar37 + 0xc)) &&
     ((*(uint *)pdVar37 & 7) - 5 < 2)) {
    if ((*(uint *)pdVar37 & 7) == 6) {
      dVar35 = *(double *)pdVar37[2];
    }
    else {
      dVar35 = (double)*(float *)pdVar37[2];
    }
    return dVar35;
  }
  puVar5 = (undefined4 *)0x50;
  dStack_450 = param_11;
  pdStack_448 = unaff_x19;
  puStack_440 = &stack0xfffffffffffffff0;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar5 + 7) = 0x4b28202626203320;
  *(undefined8 *)(puVar5 + 5) = 0x3d3e20736c6f632e;
  *(undefined8 *)(puVar5 + 0xb) = 0x335f5643203d3d20;
  *(undefined8 *)(puVar5 + 9) = 0x292868747065642e;
  *(undefined8 *)(puVar5 + 0xf) = 0x2029286874706564;
  *(undefined8 *)(puVar5 + 0xd) = 0x2e4b207c7c204632;
  *(undefined8 *)((long)puVar5 + 0x46) = 0x294634365f564320;
  *(undefined8 *)((long)puVar5 + 0x3e) = 0x3d3d202928687470;
  *puVar5 = 1;
  puStack_460 = puVar5 + 1;
  uStack_458 = 0x4a;
  *(undefined1 *)((long)puVar5 + 0x4e) = 0;
  *(undefined8 *)(puVar5 + 3) = 0x4b2026262033203d;
  *(undefined8 *)(puVar5 + 1) = 0x3e2073776f722e4b;
  FUN_109ac3188(0xffffff29,&puStack_460,&UNK_10f56d088,&UNK_10f56cd39,0x16);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109414824);
  (*pcVar3)();
}



/* Entry: 109414724; end: 109414853;  */

double FUN_109414724(uint *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((2 < (int)param_1[2] && 2 < (int)param_1[3]) && ((*param_1 & 7) - 5 < 2)) {
    if ((*param_1 & 7) == 6) {
      dVar3 = **(double **)(param_1 + 4);
    }
    else {
      dVar3 = (double)*(float *)*(double **)(param_1 + 4);
    }
    return dVar3;
  }
  puVar2 = (undefined4 *)0x50;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar2 + 7) = 0x4b28202626203320;
  *(undefined8 *)(puVar2 + 5) = 0x3d3e20736c6f632e;
  *(undefined8 *)(puVar2 + 0xb) = 0x335f5643203d3d20;
  *(undefined8 *)(puVar2 + 9) = 0x292868747065642e;
  *(undefined8 *)(puVar2 + 0xf) = 0x2029286874706564;
  *(undefined8 *)(puVar2 + 0xd) = 0x2e4b207c7c204632;
  *(undefined8 *)((long)puVar2 + 0x46) = 0x294634365f564320;
  *(undefined8 *)((long)puVar2 + 0x3e) = 0x3d3d202928687470;
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x4a;
  *(undefined1 *)((long)puVar2 + 0x4e) = 0;
  *(undefined8 *)(puVar2 + 3) = 0x4b2026262033203d;
  *(undefined8 *)(puVar2 + 1) = 0x3e2073776f722e4b;
  FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f56d088,&UNK_10f56cd39,0x16);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109414824);
  (*pcVar1)();
}



/* Entry: 109414854; end: 1094174ef;  */

/* WARNING: Removing unreachable block (ram,0x000109414cb4) */
/* WARNING: Removing unreachable block (ram,0x000109414cb8) */
/* WARNING: Removing unreachable block (ram,0x000109414cc0) */
/* WARNING: Removing unreachable block (ram,0x000109414cc8) */
/* WARNING: Removing unreachable block (ram,0x000109414ccc) */
/* WARNING: Removing unreachable block (ram,0x000109414cf0) */
/* WARNING: Removing unreachable block (ram,0x000109414cf8) */
/* WARNING: Removing unreachable block (ram,0x000109414d0c) */
/* WARNING: Removing unreachable block (ram,0x000109414d1c) */

uint FUN_109414854(float param_1,undefined8 param_2,undefined8 param_3,uint *param_4,uint *param_5,
                  uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                  uint *param_11,char param_12,undefined4 param_13,undefined4 param_14,
                  undefined4 param_15,undefined4 param_16,undefined4 param_17)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined ***pppuVar9;
  undefined4 *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  int *piVar17;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined1 uStack0000000000000048;
  undefined1 uStack0000000000000049;
  uint *in_stack_00000050;
  undefined8 uStack_a90;
  uint *puStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  ulong uStack_a70;
  ulong uStack_a68;
  ulong uStack_a60;
  ulong uStack_a58;
  ulong uStack_a50;
  undefined8 *puStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined4 uStack_a28;
  undefined1 *puStack_a20;
  undefined8 uStack_a18;
  undefined4 uStack_a10;
  undefined4 *puStack_a08;
  undefined8 uStack_a00;
  undefined4 uStack_9f8;
  undefined8 *puStack_9f0;
  undefined8 uStack_9e8;
  undefined4 uStack_9e0;
  undefined8 *puStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  uint *puStack_9c0;
  undefined8 uStack_9b8;
  undefined4 uStack_9b0;
  int iStack_9ac;
  undefined8 uStack_9a8;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  long lStack_978;
  undefined8 *puStack_970;
  undefined8 *puStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  ulong uStack_918;
  ulong uStack_910;
  undefined8 *puStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long lStack_8b8;
  ulong uStack_8b0;
  undefined8 *puStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  long lStack_858;
  ulong uStack_850;
  undefined8 *puStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  undefined8 *puStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  long lStack_798;
  ulong uStack_790;
  undefined8 *puStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  undefined8 *puStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  ulong uStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  uint uStack_6b0;
  int iStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  long lStack_678;
  ulong uStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  uint uStack_650;
  int iStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  long lStack_618;
  ulong uStack_610;
  undefined8 *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  uint uStack_5f0;
  int iStack_5ec;
  int iStack_5e8;
  int iStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  ulong uStack_5b8;
  int *piStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  uint uStack_590;
  int iStack_58c;
  int iStack_588;
  int iStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  ulong uStack_558;
  int *piStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  uint uStack_350;
  int iStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long lStack_318;
  undefined4 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  byte bStack_2ef;
  undefined2 uStack_2ee;
  int iStack_2ec;
  int iStack_2e8;
  int iStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long lStack_2b8;
  int *piStack_2b0;
  long *plStack_2a8;
  long alStack_2a0 [2];
  undefined **ppuStack_290;
  uint *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  int *piStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  char cStack_1c4;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_4 + 2);
    uStack_370 = (ulong)&uStack_3b0 | 8;
    uStack_3a8 = puVar11[1];
    uStack_3b0 = *puVar11;
    uStack_398 = puVar11[3];
    uStack_3a0 = puVar11[2];
    uStack_388 = puVar11[5];
    uStack_390 = puVar11[4];
    uStack_378 = puVar11[7];
    uStack_380 = puVar11[6];
    puStack_368 = &uStack_360;
    uStack_358 = 0;
    uStack_360 = 0;
    if (puVar11[7] != 0) {
      piVar17 = (int *)(puVar11[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = *piVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_360 = *(undefined8 *)puVar11[9];
      uStack_358 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_3b0 = uStack_3b0 & 0xffffffff;
      func_0x000109a84868(&uStack_3b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_3b0,param_4,0xffffffff);
  }
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_5 + 2);
    uStack_3d0 = (ulong)&uStack_410 | 8;
    uStack_408 = puVar11[1];
    uStack_410 = *puVar11;
    uStack_3f8 = puVar11[3];
    uStack_400 = puVar11[2];
    uStack_3e8 = puVar11[5];
    uStack_3f0 = puVar11[4];
    uStack_3d8 = puVar11[7];
    uStack_3e0 = puVar11[6];
    puStack_3c8 = &uStack_3c0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    if (puVar11[7] != 0) {
      piVar17 = (int *)(puVar11[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = *piVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_3c0 = *(undefined8 *)puVar11[9];
      uStack_3b8 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_410 = uStack_410 & 0xffffffff;
      func_0x000109a84868(&uStack_410);
    }
  }
  else {
    FUN_109a8a180(&uStack_410,param_5,0xffffffff);
  }
  if ((*param_6 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_6 + 2);
    uStack_430 = (ulong)&uStack_470 | 8;
    uStack_468 = puVar11[1];
    uStack_470 = *puVar11;
    uStack_458 = puVar11[3];
    uStack_460 = puVar11[2];
    uStack_448 = puVar11[5];
    uStack_450 = puVar11[4];
    uStack_438 = puVar11[7];
    uStack_440 = puVar11[6];
    puStack_428 = &uStack_420;
    uStack_418 = 0;
    uStack_420 = 0;
    if (puVar11[7] != 0) {
      piVar17 = (int *)(puVar11[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = *piVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_420 = *(undefined8 *)puVar11[9];
      uStack_418 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_470 = uStack_470 & 0xffffffff;
      func_0x000109a84868(&uStack_470);
    }
  }
  else {
    FUN_109a8a180(&uStack_470,param_6,0xffffffff);
  }
  if ((*param_7 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_7 + 2);
    uStack_490 = (ulong)&uStack_4d0 | 8;
    uStack_4c8 = puVar11[1];
    uStack_4d0 = *puVar11;
    uStack_4b8 = puVar11[3];
    uStack_4c0 = puVar11[2];
    uStack_4a8 = puVar11[5];
    uStack_4b0 = puVar11[4];
    uStack_498 = puVar11[7];
    uStack_4a0 = puVar11[6];
    puStack_488 = &uStack_480;
    uStack_478 = 0;
    uStack_480 = 0;
    if (puVar11[7] != 0) {
      piVar17 = (int *)(puVar11[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = *piVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_480 = *(undefined8 *)puVar11[9];
      uStack_478 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_4d0 = uStack_4d0 & 0xffffffff;
      func_0x000109a84868(&uStack_4d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_4d0,param_7,0xffffffff);
  }
  if ((*in_stack_00000050 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(in_stack_00000050 + 2);
    uStack_4f0 = (ulong)&uStack_530 | 8;
    uStack_528 = puVar11[1];
    uStack_530 = *puVar11;
    uStack_518 = puVar11[3];
    uStack_520 = puVar11[2];
    uStack_508 = puVar11[5];
    uStack_510 = puVar11[4];
    uStack_4f8 = puVar11[7];
    uStack_500 = puVar11[6];
    puStack_4e8 = &uStack_4e0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    if (puVar11[7] != 0) {
      piVar17 = (int *)(puVar11[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = *piVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_4e0 = *(undefined8 *)puVar11[9];
      uStack_4d8 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_530 = uStack_530 & 0xffffffff;
      func_0x000109a84868(&uStack_530);
    }
  }
  else {
    FUN_109a8a180(&uStack_530,in_stack_00000050,0xffffffff);
  }
  uStack_590 = 0x42ff0000;
  iStack_584 = 0;
  uStack_580 = 0;
  iStack_58c = 0;
  iStack_588 = 0;
  uStack_574 = 0;
  uStack_570 = 0;
  uStack_57c = 0;
  uStack_578 = 0;
  piStack_550 = &iStack_588;
  uStack_564 = 0;
  uStack_56c = 0;
  uStack_568 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_55c = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_5f0 = 0x42ff0000;
  piStack_5b0 = &iStack_5e8;
  iStack_5e4 = 0;
  uStack_5e0 = 0;
  iStack_5ec = 0;
  iStack_5e8 = 0;
  uStack_5d4 = 0;
  uStack_5d0 = 0;
  uStack_5dc = 0;
  uStack_5d8 = 0;
  uStack_5c4 = 0;
  uStack_5cc = 0;
  uStack_5c8 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_5bc = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  puStack_5a8 = &uStack_5a0;
  puStack_548 = &uStack_540;
  if ((((uint)uStack_3b0 & 7) == 6) || (((uint)uStack_3b0 >> 0xe & 1) == 0)) {
    ppuStack_290 = (undefined **)CONCAT44(ppuStack_290._4_4_,0x2010000);
    uStack_280 = 0;
    puStack_288 = &uStack_590;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_3b0,&ppuStack_290,5);
  }
  else {
    if (uStack_378 != 0) {
      piVar17 = (int *)(uStack_378 + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = *piVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_558 = 0;
    uStack_578 = 0;
    uStack_574 = 0;
    uStack_580 = 0;
    uStack_57c = 0;
    uStack_568 = 0;
    uStack_564 = 0;
    uStack_570 = 0;
    uStack_56c = 0;
    uStack_590 = (uint)uStack_3b0;
    if (uStack_3b0._4_4_ < 3) {
      iStack_58c = uStack_3b0._4_4_;
      iStack_588 = (int)uStack_3a8;
      iStack_584 = (int)(uStack_3a8 >> 0x20);
      uStack_540 = *puStack_368;
      uStack_538 = puStack_368[1];
    }
    else {
      func_0x000109a84868(&uStack_590,&uStack_3b0);
    }
    uStack_578 = (undefined4)uStack_398;
    uStack_574 = (undefined4)(uStack_398 >> 0x20);
    uStack_580 = (undefined4)uStack_3a0;
    uStack_57c = (undefined4)(uStack_3a0 >> 0x20);
    uStack_568 = (undefined4)uStack_388;
    uStack_564 = (undefined4)(uStack_388 >> 0x20);
    uStack_570 = (undefined4)uStack_390;
    uStack_56c = (undefined4)(uStack_390 >> 0x20);
    uStack_560 = (undefined4)uStack_380;
    uStack_55c = (undefined4)(uStack_380 >> 0x20);
    uStack_558 = uStack_378;
  }
  if ((((uint)uStack_410 & 7) == 6) || (((uint)uStack_410 >> 0xe & 1) == 0)) {
    ppuStack_290 = (undefined **)CONCAT44(ppuStack_290._4_4_,0x2010000);
    puStack_288 = &uStack_5f0;
    uStack_280 = 0;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_410,&ppuStack_290,5);
  }
  else {
    if (uStack_3d8 != 0) {
      piVar17 = (int *)(uStack_3d8 + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = *piVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (uStack_5b8 != 0) {
      piVar17 = (int *)(uStack_5b8 + 0x14);
      do {
        iVar5 = *piVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_5f0);
      }
    }
    puVar12 = puStack_3c8;
    uStack_5b8 = 0;
    uStack_5d8 = 0;
    uStack_5d4 = 0;
    uStack_5e0 = 0;
    uStack_5dc = 0;
    uStack_5c8 = 0;
    uStack_5c4 = 0;
    uStack_5d0 = 0;
    uStack_5cc = 0;
    if (iStack_5ec < 1) {
LAB_109414e94:
      uStack_5f0 = (uint)uStack_410;
      if (2 < uStack_410._4_4_) goto LAB_109414ec8;
      iStack_5ec = uStack_410._4_4_;
      iStack_5e8 = (int)uStack_408;
      iStack_5e4 = (int)(uStack_408 >> 0x20);
      *puStack_5a8 = *puStack_3c8;
      puStack_5a8[1] = puVar12[1];
    }
    else {
      lVar14 = 0;
      do {
        piStack_5b0[lVar14] = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < iStack_5ec);
      if (iStack_5ec < 3) goto LAB_109414e94;
LAB_109414ec8:
      uStack_5f0 = (uint)uStack_410;
      func_0x000109a84868(&uStack_5f0,&uStack_410);
    }
    uStack_5d8 = (undefined4)uStack_3f8;
    uStack_5d4 = (undefined4)(uStack_3f8 >> 0x20);
    uStack_5e0 = (undefined4)uStack_400;
    uStack_5dc = (undefined4)(uStack_400 >> 0x20);
    uStack_5c8 = (undefined4)uStack_3e8;
    uStack_5c4 = (undefined4)(uStack_3e8 >> 0x20);
    uStack_5d0 = (undefined4)uStack_3f0;
    uStack_5cc = (undefined4)(uStack_3f0 >> 0x20);
    uStack_5b8 = uStack_3d8;
    uStack_5c0 = (undefined4)uStack_3e0;
    uStack_5bc = (undefined4)(uStack_3e0 >> 0x20);
  }
  puVar7 = &uStack_590;
  FUN_109a89cd4(puVar7,3,5,1);
  puVar8 = &uStack_590;
  FUN_109a89cd4(puVar8,3,6,1);
  iVar5 = (int)puVar7;
  if ((int)puVar7 <= (int)puVar8) {
    iVar5 = (int)puVar8;
  }
  if (-1 < iVar5) {
    puVar7 = &uStack_5f0;
    FUN_109a89cd4(puVar7,2,5,1);
    puVar8 = &uStack_5f0;
    FUN_109a89cd4(puVar8,2,6,1);
    iVar1 = (int)puVar7;
    if ((int)puVar7 <= (int)puVar8) {
      iVar1 = (int)puVar8;
    }
    if (iVar5 == iVar1) {
      if ((uStack_590 >> 0xe & 1) == 0) {
        puVar10 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar10 = 1;
        ppuStack_290 = (undefined **)(puVar10 + 1);
        puStack_288 = (uint *)0x16;
        *(undefined1 *)((long)puVar10 + 0x1a) = 0;
        *(undefined8 *)(puVar10 + 3) = 0x6e69746e6f437369;
        *(undefined8 *)(puVar10 + 1) = 0x2e73746e696f706f;
        *(undefined8 *)((long)puVar10 + 0x12) = 0x292873756f756e69;
        FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x13b);
        goto LAB_10941710c;
      }
      if (1 < (uStack_590 & 7) - 5) {
        puVar10 = (undefined4 *)0x3c;
        func_0x000107c2ae8c();
        *puVar10 = 1;
        ppuStack_290 = (undefined **)(puVar10 + 1);
        puStack_288 = (uint *)0x36;
        *(undefined8 *)(puVar10 + 3) = 0x2029286874706564;
        *(undefined8 *)(puVar10 + 1) = 0x2e73746e696f706f;
        *(undefined1 *)((long)puVar10 + 0x3a) = 0;
        *(undefined8 *)(puVar10 + 7) = 0x6f706f207c7c2046;
        *(undefined8 *)(puVar10 + 5) = 0x32335f5643203d3d;
        *(undefined8 *)(puVar10 + 0xb) = 0x203d3d2029286874;
        *(undefined8 *)(puVar10 + 9) = 0x7065642e73746e69;
        *(undefined8 *)((long)puVar10 + 0x32) = 0x4634365f5643203d;
        FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x13c);
        goto LAB_10941710c;
      }
      if ((((uStack_590 & 0xff8) == 0x10) && (iStack_588 == 1)) ||
         (iStack_584 + iStack_584 * (uStack_590 >> 3 & 0x1ff) == 3)) {
        if ((uStack_5f0 >> 0xe & 1) == 0) {
          puVar10 = (undefined4 *)0x1c;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          ppuStack_290 = (undefined **)(puVar10 + 1);
          puStack_288 = (uint *)0x16;
          *(undefined1 *)((long)puVar10 + 0x1a) = 0;
          *(undefined8 *)(puVar10 + 3) = 0x6e69746e6f437369;
          *(undefined8 *)(puVar10 + 1) = 0x2e73746e696f7069;
          *(undefined8 *)((long)puVar10 + 0x12) = 0x292873756f756e69;
          FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x13e);
          goto LAB_10941710c;
        }
        if (1 < (uStack_5f0 & 7) - 5) {
          puVar10 = (undefined4 *)0x3c;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          ppuStack_290 = (undefined **)(puVar10 + 1);
          puStack_288 = (uint *)0x36;
          *(undefined8 *)(puVar10 + 3) = 0x2029286874706564;
          *(undefined8 *)(puVar10 + 1) = 0x2e73746e696f7069;
          *(undefined1 *)((long)puVar10 + 0x3a) = 0;
          *(undefined8 *)(puVar10 + 7) = 0x6f7069207c7c2046;
          *(undefined8 *)(puVar10 + 5) = 0x32335f5643203d3d;
          *(undefined8 *)(puVar10 + 0xb) = 0x203d3d2029286874;
          *(undefined8 *)(puVar10 + 9) = 0x7065642e73746e69;
          *(undefined8 *)((long)puVar10 + 0x32) = 0x4634365f5643203d;
          FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x13f);
          goto LAB_10941710c;
        }
        if ((((uStack_5f0 & 0xff8) != 8) || (iStack_5e8 != 1)) &&
           (iStack_5e4 + iStack_5e4 * (uStack_5f0 >> 3 & 0x1ff) != 2)) {
          puVar10 = (undefined4 *)0x60;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          ppuStack_290 = (undefined **)(puVar10 + 1);
          puStack_288 = (uint *)0x58;
          *(undefined8 *)(puVar10 + 0xb) = 0x7c202932203d3d20;
          *(undefined8 *)(puVar10 + 9) = 0x2928736c656e6e61;
          *(undefined8 *)(puVar10 + 0xf) = 0x2a20736c6f632e73;
          *(undefined8 *)(puVar10 + 0xd) = 0x746e696f7069207c;
          *(undefined8 *)(puVar10 + 0x13) = 0x6c656e6e6168632e;
          *(undefined8 *)(puVar10 + 0x11) = 0x73746e696f706920;
          *(undefined8 *)(puVar10 + 3) = 0x3d3d2073776f722e;
          *(undefined8 *)(puVar10 + 1) = 0x73746e696f706928;
          *(undefined1 *)(puVar10 + 0x17) = 0;
          *(undefined8 *)(puVar10 + 0x15) = 0x32203d3d20292873;
          *(undefined8 *)(puVar10 + 7) = 0x68632e73746e696f;
          *(undefined8 *)(puVar10 + 5) = 0x7069202626203120;
          FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x140);
          goto LAB_10941710c;
        }
        if ((uStack_470._1_1_ >> 6 & 1) == 0) {
          puVar10 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          ppuStack_290 = (undefined **)(puVar10 + 1);
          puStack_288 = (uint *)0x19;
          *(undefined1 *)((long)puVar10 + 0x1d) = 0;
          *(undefined8 *)(puVar10 + 3) = 0x6e6f4373692e7344;
          *(undefined8 *)(puVar10 + 1) = 0x4973746e696f706f;
          *(undefined8 *)((long)puVar10 + 0x15) = 0x292873756f756e69;
          *(undefined8 *)((long)puVar10 + 0xd) = 0x746e6f4373692e73;
          FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x142);
          goto LAB_10941710c;
        }
        if (uStack_468._4_4_ != iStack_584) {
          puVar10 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          ppuStack_290 = (undefined **)(puVar10 + 1);
          puStack_288 = (uint *)0x1f;
          *(undefined1 *)((long)puVar10 + 0x23) = 0;
          *(undefined8 *)(puVar10 + 3) = 0x20736c6f632e7344;
          *(undefined8 *)(puVar10 + 1) = 0x4973746e696f706f;
          *(undefined8 *)((long)puVar10 + 0x1b) = 0x736c6f632e73746e;
          *(undefined8 *)((long)puVar10 + 0x13) = 0x696f706f203d3d20;
          FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x143);
          goto LAB_10941710c;
        }
        if ((uStack_4d0._1_1_ >> 6 & 1) == 0) {
          puVar10 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          ppuStack_290 = (undefined **)(puVar10 + 1);
          puStack_288 = (uint *)0x19;
          *(undefined1 *)((long)puVar10 + 0x1d) = 0;
          *(undefined8 *)(puVar10 + 3) = 0x6e6f4373692e7344;
          *(undefined8 *)(puVar10 + 1) = 0x4973746e696f7069;
          *(undefined8 *)((long)puVar10 + 0x15) = 0x292873756f756e69;
          *(undefined8 *)((long)puVar10 + 0xd) = 0x746e6f4373692e73;
          FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x145);
          goto LAB_10941710c;
        }
        if (uStack_4c8._4_4_ != iStack_5e4) {
          puVar10 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          ppuStack_290 = (undefined **)(puVar10 + 1);
          puStack_288 = (uint *)0x1f;
          *(undefined1 *)((long)puVar10 + 0x23) = 0;
          *(undefined8 *)(puVar10 + 3) = 0x20736c6f632e7344;
          *(undefined8 *)(puVar10 + 1) = 0x4973746e696f7069;
          *(undefined8 *)((long)puVar10 + 0x1b) = 0x736c6f632e73746e;
          *(undefined8 *)((long)puVar10 + 0x13) = 0x696f7069203d3d20;
          FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x146);
          goto LAB_10941710c;
        }
        FUN_109a8f64c(param_10,3,1,6,0xffffffff,0,0);
        FUN_109a8f64c(param_11,3,1,6,0xffffffff,0,0);
        if (param_12 == '\0') {
          uStack_650 = 0x42ff0000;
          uStack_610 = (ulong)&uStack_650 | 8;
          uStack_644 = 0;
          uStack_640 = 0;
          iStack_64c = 0;
          uStack_648 = 0;
          uStack_634 = 0;
          uStack_630 = 0;
          uStack_63c = 0;
          uStack_638 = 0;
          uStack_624 = 0;
          uStack_62c = 0;
          uStack_628 = 0;
          lStack_618 = 0;
          uStack_620 = 0;
          uStack_61c = 0;
          puStack_608 = &uStack_600;
          uStack_5f8 = 0;
          uStack_600 = 0;
          ppuStack_290 = (undefined **)0x100000003;
          FUN_109a83fd0(&uStack_650,2,&ppuStack_290,6);
          uStack_6b0 = 0x42ff0000;
          uStack_670 = (ulong)&uStack_6b0 | 8;
          uStack_6a4 = 0;
          uStack_6a0 = 0;
          iStack_6ac = 0;
          uStack_6a8 = 0;
          uStack_694 = 0;
          uStack_690 = 0;
          uStack_69c = 0;
          uStack_698 = 0;
          uStack_684 = 0;
          uStack_68c = 0;
          uStack_688 = 0;
          lStack_678 = 0;
          uStack_680 = 0;
          uStack_67c = 0;
          puStack_668 = &uStack_660;
          uStack_658 = 0;
          uStack_660 = 0;
          ppuStack_290 = (undefined **)0x100000003;
          FUN_109a83fd0(&uStack_6b0,2,&ppuStack_290,6);
        }
        else {
          if ((*param_10 & 0x1f0000) == 0x10000) {
            puVar12 = *(undefined8 **)(param_10 + 2);
            uStack_610 = (ulong)&uStack_650 | 8;
            uStack_648 = (undefined4)puVar12[1];
            uStack_644 = (undefined4)((ulong)puVar12[1] >> 0x20);
            uStack_650 = (uint)*puVar12;
            iStack_64c = (int)((ulong)*puVar12 >> 0x20);
            uStack_638 = (undefined4)puVar12[3];
            uStack_634 = (undefined4)((ulong)puVar12[3] >> 0x20);
            uStack_640 = (undefined4)puVar12[2];
            uStack_63c = (undefined4)((ulong)puVar12[2] >> 0x20);
            lStack_618 = puVar12[7];
            uStack_628 = (undefined4)puVar12[5];
            uStack_624 = (undefined4)((ulong)puVar12[5] >> 0x20);
            uStack_630 = (undefined4)puVar12[4];
            uStack_62c = (undefined4)((ulong)puVar12[4] >> 0x20);
            uStack_620 = (undefined4)puVar12[6];
            uStack_61c = (undefined4)((ulong)puVar12[6] >> 0x20);
            puStack_608 = &uStack_600;
            uStack_5f8 = 0;
            uStack_600 = 0;
            if (puVar12[7] != 0) {
              piVar17 = (int *)(puVar12[7] + 0x14);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar3) {
                  *piVar17 = *piVar17 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (*(int *)((long)puVar12 + 4) < 3) {
              uStack_600 = *(undefined8 *)puVar12[9];
              uStack_5f8 = ((undefined8 *)puVar12[9])[1];
            }
            else {
              iStack_64c = 0;
              func_0x000109a84868(&uStack_650);
            }
          }
          else {
            FUN_109a8a180(&uStack_650,param_10,0xffffffff);
          }
          if ((*param_11 & 0x1f0000) == 0x10000) {
            puVar12 = *(undefined8 **)(param_11 + 2);
            uStack_670 = (ulong)&uStack_6b0 | 8;
            uStack_6a8 = (undefined4)puVar12[1];
            uStack_6a4 = (undefined4)((ulong)puVar12[1] >> 0x20);
            uStack_6b0 = (uint)*puVar12;
            iStack_6ac = (int)((ulong)*puVar12 >> 0x20);
            uStack_698 = (undefined4)puVar12[3];
            uStack_694 = (undefined4)((ulong)puVar12[3] >> 0x20);
            uStack_6a0 = (undefined4)puVar12[2];
            uStack_69c = (undefined4)((ulong)puVar12[2] >> 0x20);
            lStack_678 = puVar12[7];
            uStack_688 = (undefined4)puVar12[5];
            uStack_684 = (undefined4)((ulong)puVar12[5] >> 0x20);
            uStack_690 = (undefined4)puVar12[4];
            uStack_68c = (undefined4)((ulong)puVar12[4] >> 0x20);
            uStack_680 = (undefined4)puVar12[6];
            uStack_67c = (undefined4)((ulong)puVar12[6] >> 0x20);
            puStack_668 = &uStack_660;
            uStack_658 = 0;
            uStack_660 = 0;
            if (puVar12[7] != 0) {
              piVar17 = (int *)(puVar12[7] + 0x14);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar3) {
                  *piVar17 = *piVar17 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (*(int *)((long)puVar12 + 4) < 3) {
              uStack_660 = *(undefined8 *)puVar12[9];
              uStack_658 = ((undefined8 *)puVar12[9])[1];
            }
            else {
              iStack_6ac = 0;
              func_0x000109a84868(&uStack_6b0);
            }
          }
          else {
            FUN_109a8a180(&uStack_6b0,param_11,0xffffffff);
          }
        }
        if ((*param_8 & 0x1f0000) == 0x10000) {
          puVar12 = *(undefined8 **)(param_8 + 2);
          uStack_6d0 = (ulong)&uStack_710 | 8;
          uStack_708 = puVar12[1];
          uStack_710 = (uint *)*puVar12;
          uStack_6f8 = puVar12[3];
          uStack_700 = puVar12[2];
          uStack_6e8 = puVar12[5];
          uStack_6f0 = puVar12[4];
          lStack_6d8 = puVar12[7];
          uStack_6e0 = puVar12[6];
          puStack_6c8 = &uStack_6c0;
          uStack_6b8 = 0;
          uStack_6c0 = 0;
          if (puVar12[7] != 0) {
            piVar17 = (int *)(puVar12[7] + 0x14);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar3) {
                *piVar17 = *piVar17 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(int *)((long)puVar12 + 4) < 3) {
            uStack_6c0 = *(undefined8 *)puVar12[9];
            uStack_6b8 = ((undefined8 *)puVar12[9])[1];
          }
          else {
            uStack_710 = (uint *)((ulong)uStack_710 & 0xffffffff);
            func_0x000109a84868(&uStack_710);
          }
        }
        else {
          FUN_109a8a180(&uStack_710,param_8,0xffffffff);
        }
        if ((*param_9 & 0x1f0000) == 0x10000) {
          puVar11 = *(ulong **)(param_9 + 2);
          uStack_730 = (ulong)&uStack_770 | 8;
          uStack_768 = puVar11[1];
          uStack_770 = *puVar11;
          uStack_758 = puVar11[3];
          uStack_760 = puVar11[2];
          uStack_748 = puVar11[5];
          uStack_750 = puVar11[4];
          uStack_738 = puVar11[7];
          uStack_740 = puVar11[6];
          puStack_728 = &uStack_720;
          uStack_718 = 0;
          uStack_720 = 0;
          if (puVar11[7] != 0) {
            piVar17 = (int *)(puVar11[7] + 0x14);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar3) {
                *piVar17 = *piVar17 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(int *)((long)puVar11 + 4) < 3) {
            uStack_720 = *(undefined8 *)puVar11[9];
            uStack_718 = ((undefined8 *)puVar11[9])[1];
          }
          else {
            uStack_770 = uStack_770 & 0xffffffff;
            func_0x000109a84868(&uStack_770);
          }
        }
        else {
          FUN_109a8a180(&uStack_770,param_9,0xffffffff);
        }
        uStack_790 = (ulong)&uStack_7d0 | 8;
        uStack_7c8 = uStack_708;
        uStack_7d0 = uStack_710;
        uStack_7b8 = uStack_6f8;
        uStack_7c0 = uStack_700;
        uStack_7a8 = uStack_6e8;
        uStack_7b0 = uStack_6f0;
        lStack_798 = lStack_6d8;
        uStack_7a0 = uStack_6e0;
        uStack_778 = 0;
        uStack_780 = 0;
        if (lStack_6d8 != 0) {
          piVar17 = (int *)(lStack_6d8 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puStack_788 = &uStack_780;
        if (uStack_710._4_4_ < 3) {
          uStack_780 = *puStack_6c8;
          uStack_778 = puStack_6c8[1];
        }
        else {
          uStack_7d0 = (uint *)((ulong)uStack_710 & 0xffffffff);
          func_0x000109a84868(&uStack_7d0,&uStack_710);
        }
        uStack_7f0 = (ulong)&uStack_830 | 8;
        uStack_828 = uStack_768;
        uStack_830 = uStack_770;
        uStack_818 = uStack_758;
        uStack_820 = uStack_760;
        uStack_808 = uStack_748;
        uStack_810 = uStack_750;
        uStack_7f8 = uStack_738;
        uStack_800 = uStack_740;
        uStack_7d8 = 0;
        uStack_7e0 = 0;
        if (uStack_738 != 0) {
          piVar17 = (int *)(uStack_738 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puStack_7e8 = &uStack_7e0;
        if (uStack_770._4_4_ < 3) {
          uStack_7e0 = *puStack_728;
          uStack_7d8 = puStack_728[1];
        }
        else {
          uStack_830 = uStack_770 & 0xffffffff;
          func_0x000109a84868(&uStack_830,&uStack_770);
        }
        uStack_888 = CONCAT44(uStack_644,uStack_648);
        uStack_890 = CONCAT44(iStack_64c,uStack_650);
        uStack_850 = (ulong)&uStack_890 | 8;
        uStack_878 = CONCAT44(uStack_634,uStack_638);
        uStack_880 = CONCAT44(uStack_63c,uStack_640);
        uStack_868 = CONCAT44(uStack_624,uStack_628);
        uStack_870 = CONCAT44(uStack_62c,uStack_630);
        uStack_860 = CONCAT44(uStack_61c,uStack_620);
        lStack_858 = lStack_618;
        uStack_838 = 0;
        uStack_840 = 0;
        if (lStack_618 != 0) {
          piVar17 = (int *)(lStack_618 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puStack_848 = &uStack_840;
        if (iStack_64c < 3) {
          uStack_840 = *puStack_608;
          uStack_838 = puStack_608[1];
        }
        else {
          uStack_890 = (ulong)uStack_650;
          func_0x000109a84868(&uStack_890,&uStack_650);
        }
        uStack_8e8 = CONCAT44(uStack_6a4,uStack_6a8);
        uStack_8f0 = CONCAT44(iStack_6ac,uStack_6b0);
        uStack_8b0 = (ulong)&uStack_8f0 | 8;
        uStack_8d8 = CONCAT44(uStack_694,uStack_698);
        uStack_8e0 = CONCAT44(uStack_69c,uStack_6a0);
        uStack_8c8 = CONCAT44(uStack_684,uStack_688);
        uStack_8d0 = CONCAT44(uStack_68c,uStack_690);
        uStack_8c0 = CONCAT44(uStack_67c,uStack_680);
        lStack_8b8 = lStack_678;
        uStack_898 = 0;
        uStack_8a0 = 0;
        if (lStack_678 != 0) {
          piVar17 = (int *)(lStack_678 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puStack_8a8 = &uStack_8a0;
        if (iStack_6ac < 3) {
          uStack_8a0 = *puStack_668;
          uStack_898 = puStack_668[1];
        }
        else {
          uStack_8f0 = (ulong)uStack_6b0;
          func_0x000109a84868(&uStack_8f0,&uStack_6b0);
        }
        uStack_910 = (ulong)&uStack_950 | 8;
        uStack_948 = uStack_528;
        uStack_950 = uStack_530;
        uStack_938 = uStack_518;
        uStack_940 = uStack_520;
        uStack_928 = uStack_508;
        uStack_930 = uStack_510;
        uStack_918 = uStack_4f8;
        uStack_920 = uStack_500;
        uStack_8f8 = 0;
        uStack_900 = 0;
        if (uStack_4f8 != 0) {
          piVar17 = (int *)(uStack_4f8 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puStack_908 = &uStack_900;
        if (uStack_530._4_4_ < 3) {
          uStack_900 = *puStack_4e8;
          uStack_8f8 = puStack_4e8[1];
        }
        else {
          uStack_950 = uStack_530 & 0xffffffff;
          func_0x000109a84868(&uStack_950,&uStack_530);
        }
        uStack_280 = uStack_7c8;
        puStack_288 = uStack_7d0;
        uStack_270 = uStack_7b8;
        uStack_278 = uStack_7c0;
        puStack_248 = &uStack_280;
        uStack_260 = uStack_7a8;
        uStack_268 = uStack_7b0;
        lStack_250 = lStack_798;
        uStack_258 = uStack_7a0;
        ppuStack_290 = &PTR_FUN_110af5f00;
        puStack_240 = &uStack_238;
        uStack_230 = 0;
        uStack_238 = 0;
        if (lStack_798 != 0) {
          piVar17 = (int *)(lStack_798 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (uStack_7d0._4_4_ < 3) {
          uStack_238 = *puStack_788;
          uStack_230 = puStack_788[1];
        }
        else {
          puStack_288 = (uint *)((ulong)uStack_7d0 & 0xffffffff);
          func_0x000109a84868(&puStack_288,&uStack_7d0);
        }
        uStack_220 = uStack_828;
        uStack_228 = uStack_830;
        uStack_210 = uStack_818;
        uStack_218 = uStack_820;
        piStack_1e8 = (int *)&uStack_220;
        uStack_200 = uStack_808;
        uStack_208 = uStack_810;
        uStack_1f0 = uStack_7f8;
        uStack_1f8 = uStack_800;
        puStack_1e0 = &uStack_1d8;
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        if (uStack_7f8 != 0) {
          piVar17 = (int *)(uStack_7f8 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (uStack_830._4_4_ < 3) {
          uStack_1d8 = *puStack_7e8;
          uStack_1d0 = puStack_7e8[1];
        }
        else {
          uStack_228 = uStack_830 & 0xffffffff;
          func_0x000109a84868(&uStack_228,&uStack_830);
        }
        uStack_1c8 = 1;
        cStack_1c4 = param_12;
        puStack_180 = &uStack_1b8;
        uStack_1b8 = uStack_888;
        uStack_1c0 = uStack_890;
        uStack_1a8 = uStack_878;
        uStack_1b0 = uStack_880;
        uStack_198 = uStack_868;
        uStack_1a0 = uStack_870;
        lStack_188 = lStack_858;
        uStack_190 = uStack_860;
        puStack_178 = &uStack_170;
        uStack_168 = 0;
        uStack_170 = 0;
        if (lStack_858 != 0) {
          piVar17 = (int *)(lStack_858 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (uStack_890._4_4_ < 3) {
          uStack_170 = *puStack_848;
          uStack_168 = puStack_848[1];
        }
        else {
          uStack_1c0 = uStack_890 & 0xffffffff;
          func_0x000109a84868(&uStack_1c0,&uStack_890);
        }
        puStack_120 = &uStack_158;
        uStack_158 = uStack_8e8;
        uStack_160 = uStack_8f0;
        uStack_148 = uStack_8d8;
        uStack_150 = uStack_8e0;
        uStack_138 = uStack_8c8;
        uStack_140 = uStack_8d0;
        lStack_128 = lStack_8b8;
        uStack_130 = uStack_8c0;
        puStack_118 = &uStack_110;
        uStack_108 = 0;
        uStack_110 = 0;
        if (lStack_8b8 != 0) {
          piVar17 = (int *)(lStack_8b8 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (uStack_8f0._4_4_ < 3) {
          uStack_110 = *puStack_8a8;
          uStack_108 = puStack_8a8[1];
        }
        else {
          uStack_160 = uStack_8f0 & 0xffffffff;
          func_0x000109a84868(&uStack_160,&uStack_8f0);
        }
        puStack_c0 = &uStack_f8;
        uStack_f8 = uStack_948;
        uStack_100 = uStack_950;
        uStack_e8 = uStack_938;
        uStack_f0 = uStack_940;
        uStack_d8 = uStack_928;
        uStack_e0 = uStack_930;
        uStack_c8 = uStack_918;
        uStack_d0 = uStack_920;
        puStack_b8 = &uStack_b0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        if (uStack_918 != 0) {
          piVar17 = (int *)(uStack_918 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (uStack_950._4_4_ < 3) {
          uStack_b0 = *puStack_908;
          uStack_a8 = puStack_908[1];
        }
        else {
          uStack_100 = uStack_950 & 0xffffffff;
          func_0x000109a84868(&uStack_100,&uStack_950);
        }
        uStack_a0 = 0;
        if (uStack_218 == 0) {
LAB_1094159c4:
          uStack_a0 = true;
        }
        else {
          uVar15 = (ulong)uStack_228._4_4_;
          if ((int)uStack_228._4_4_ < 3) {
            lVar14 = (long)uStack_220._4_4_ * (long)(int)uStack_220;
          }
          else {
            lVar14 = 1;
            piVar17 = piStack_1e8;
            do {
              lVar14 = lVar14 * *piVar17;
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 1;
            } while (uVar15 != 0);
          }
          if (lVar14 == 0) goto LAB_1094159c4;
          uStack_9a0 = 0;
          uStack_99c = 0;
          uStack_9b0 = 0x1010000;
          iVar5 = (int)&uStack_9b0;
          uStack_9a8 = &uStack_228;
          FUN_109ab7930();
          uStack_a0 = iVar5 == 0;
        }
        if (uStack_918 != 0) {
          piVar17 = (int *)(uStack_918 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_950);
          }
        }
        uStack_918 = 0;
        uStack_938 = 0;
        uStack_940 = 0;
        uStack_928 = 0;
        uStack_930 = 0;
        if (0 < uStack_950._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_910 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_950._4_4_);
        }
        if (puStack_908 != &uStack_900 && puStack_908 != (undefined8 *)0x0) {
          _free(puStack_908[-1]);
        }
        if (lStack_8b8 != 0) {
          piVar17 = (int *)(lStack_8b8 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_8f0);
          }
        }
        lStack_8b8 = 0;
        uStack_8d8 = 0;
        uStack_8e0 = 0;
        uStack_8c8 = 0;
        uStack_8d0 = 0;
        if (0 < uStack_8f0._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_8b0 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_8f0._4_4_);
        }
        if (puStack_8a8 != &uStack_8a0 && puStack_8a8 != (undefined8 *)0x0) {
          _free(puStack_8a8[-1]);
        }
        if (lStack_858 != 0) {
          piVar17 = (int *)(lStack_858 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_890);
          }
        }
        lStack_858 = 0;
        uStack_878 = 0;
        uStack_880 = 0;
        uStack_868 = 0;
        uStack_870 = 0;
        if (0 < uStack_890._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_850 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_890._4_4_);
        }
        if (puStack_848 != &uStack_840 && puStack_848 != (undefined8 *)0x0) {
          _free(puStack_848[-1]);
        }
        if (uStack_7f8 != 0) {
          piVar17 = (int *)(uStack_7f8 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_830);
          }
        }
        uStack_7f8 = 0;
        uStack_818 = 0;
        uStack_820 = 0;
        uStack_808 = 0;
        uStack_810 = 0;
        if (0 < uStack_830._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_7f0 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_830._4_4_);
        }
        if (puStack_7e8 != &uStack_7e0 && puStack_7e8 != (undefined8 *)0x0) {
          _free(puStack_7e8[-1]);
        }
        if (lStack_798 != 0) {
          piVar17 = (int *)(lStack_798 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_7d0);
          }
        }
        lStack_798 = 0;
        uStack_7b8 = 0;
        uStack_7c0 = 0;
        uStack_7a8 = 0;
        uStack_7b0 = 0;
        if (0 < uStack_7d0._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_790 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_7d0._4_4_);
        }
        if (puStack_788 != &uStack_780 && puStack_788 != (undefined8 *)0x0) {
          _free(puStack_788[-1]);
        }
        uStack_9b0 = 0x42ff0000;
        puStack_970 = &uStack_9a8;
        uStack_9a8._4_4_ = 0;
        uStack_9a0 = 0;
        iStack_9ac = 0;
        uStack_9a8._0_4_ = 0;
        uStack_994 = 0;
        uStack_990 = 0;
        uStack_99c = 0;
        uStack_998 = 0;
        uStack_984 = 0;
        uStack_98c = 0;
        uStack_988 = 0;
        lStack_978 = 0;
        uStack_980 = 0;
        uStack_97c = 0;
        uStack_960 = 0;
        uStack_958 = 0;
        uStack_2f0 = 3;
        bStack_2ef = 0;
        uStack_2ee = 0;
        iStack_2ec = 2;
        puStack_968 = &uStack_960;
        FUN_109a83fd0(&uStack_9b0,2,&uStack_2f0,6);
        uStack_2f0 = 0;
        bStack_2ef = 0;
        uStack_2ee = 0x42ff;
        piStack_2b0 = &iStack_2e8;
        iStack_2e4 = 0;
        uStack_2e0 = 0;
        iStack_2ec = 0;
        iStack_2e8 = 0;
        uStack_2d4 = 0;
        uStack_2d0 = 0;
        uStack_2dc = 0;
        uStack_2d8 = 0;
        uStack_2c4 = 0;
        uStack_2cc = 0;
        uStack_2c8 = 0;
        lStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2bc = 0;
        alStack_2a0[1] = 0;
        alStack_2a0[0] = 0;
        uStack_350 = 1;
        iStack_34c = iStack_588;
        plStack_2a8 = alStack_2a0;
        FUN_109a83fd0(&uStack_2f0,2,&uStack_350,0);
        uStack_a80 = 0;
        uStack_a90 = CONCAT44(uStack_a90._4_4_,0x1010000);
        puStack_a88 = &uStack_590;
        uStack_9b8 = 0;
        uStack_9c8 = CONCAT44(uStack_9c8._4_4_,0x1010000);
        puStack_9c0 = &uStack_5f0;
        uStack_9d0 = 0;
        uStack_9e0 = 0x1010000;
        puStack_9d8 = &uStack_470;
        uStack_9e8 = 0;
        uStack_9f8 = 0x1010000;
        puStack_9f0 = &uStack_4d0;
        uStack_a10 = 0x2010000;
        puStack_a08 = &uStack_9b0;
        uStack_a00 = 0;
        uStack_a28 = 0x2010000;
        puStack_a20 = &uStack_2f0;
        uStack_a18 = 0;
        uStack_348 = (undefined4)in_stack_00000028[1];
        uStack_344 = (undefined4)((ulong)in_stack_00000028[1] >> 0x20);
        uStack_350 = (uint)*in_stack_00000028;
        iStack_34c = (int)((ulong)*in_stack_00000028 >> 0x20);
        uStack_338 = (undefined4)in_stack_00000028[3];
        uStack_334 = (undefined4)((ulong)in_stack_00000028[3] >> 0x20);
        uStack_340 = (undefined4)in_stack_00000028[2];
        uStack_33c = (undefined4)((ulong)in_stack_00000028[2] >> 0x20);
        uStack_330 = (undefined4)in_stack_00000028[4];
        uStack_32c = (undefined4)((ulong)in_stack_00000028[4] >> 0x20);
        pppuVar9 = &ppuStack_290;
        FUN_10941a300((double)param_1,param_2,param_3,pppuVar9,3,param_13,param_14,param_15,param_16
                      ,param_17,uStack0000000000000048,uStack0000000000000049);
        uVar6 = 0;
        if (0 < (int)uStack_9a8) {
          uVar6 = (uint)pppuVar9;
        }
        if ((uVar6 & 1) == 0) {
          if ((*param_10 & 0x1f0000) == 0x10000) {
            puVar12 = *(undefined8 **)(param_10 + 2);
            puStack_310 = (undefined4 *)((ulong)&uStack_350 | 8);
            uStack_348 = (undefined4)puVar12[1];
            uStack_344 = (undefined4)((ulong)puVar12[1] >> 0x20);
            uStack_350 = (uint)*puVar12;
            iStack_34c = (int)((ulong)*puVar12 >> 0x20);
            uStack_338 = (undefined4)puVar12[3];
            uStack_334 = (undefined4)((ulong)puVar12[3] >> 0x20);
            uStack_340 = (undefined4)puVar12[2];
            uStack_33c = (undefined4)((ulong)puVar12[2] >> 0x20);
            lStack_318 = puVar12[7];
            uStack_328 = (undefined4)puVar12[5];
            uStack_324 = (undefined4)((ulong)puVar12[5] >> 0x20);
            uStack_330 = (undefined4)puVar12[4];
            uStack_32c = (undefined4)((ulong)puVar12[4] >> 0x20);
            uStack_320 = (undefined4)puVar12[6];
            uStack_31c = (undefined4)((ulong)puVar12[6] >> 0x20);
            puStack_308 = &uStack_300;
            uStack_2f8 = 0;
            uStack_300 = 0;
            if (puVar12[7] != 0) {
              piVar17 = (int *)(puVar12[7] + 0x14);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar3) {
                  *piVar17 = *piVar17 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (*(int *)((long)puVar12 + 4) < 3) {
              uStack_300 = *(undefined8 *)puVar12[9];
              uStack_2f8 = ((undefined8 *)puVar12[9])[1];
            }
            else {
              iStack_34c = 0;
              func_0x000109a84868(&uStack_350);
            }
          }
          else {
            FUN_109a8a180(&uStack_350,param_10,0xffffffff);
          }
          uStack_a90 = CONCAT44(uStack_a90._4_4_,0xc2010000);
          puStack_a88 = &uStack_350;
          uStack_a80 = 0;
          FUN_109a479a0(&uStack_650,&uStack_a90);
          if (lStack_318 != 0) {
            piVar17 = (int *)(lStack_318 + 0x14);
            do {
              iVar5 = *piVar17;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar3) {
                *piVar17 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000109a848d4(&uStack_350);
            }
          }
          lStack_318 = 0;
          uStack_338 = 0;
          uStack_334 = 0;
          uStack_340 = 0;
          uStack_33c = 0;
          uStack_328 = 0;
          uStack_324 = 0;
          uStack_330 = 0;
          uStack_32c = 0;
          if (0 < iStack_34c) {
            lVar14 = 0;
            do {
              puStack_310[lVar14] = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < iStack_34c);
          }
          if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
            _free(puStack_308[-1]);
          }
          if ((*param_10 & 0x1f0000) == 0x10000) {
            puVar12 = *(undefined8 **)(param_10 + 2);
            puStack_310 = (undefined4 *)((ulong)&uStack_350 | 8);
            uStack_348 = (undefined4)puVar12[1];
            uStack_344 = (undefined4)((ulong)puVar12[1] >> 0x20);
            uStack_350 = (uint)*puVar12;
            iStack_34c = (int)((ulong)*puVar12 >> 0x20);
            uStack_338 = (undefined4)puVar12[3];
            uStack_334 = (undefined4)((ulong)puVar12[3] >> 0x20);
            uStack_340 = (undefined4)puVar12[2];
            uStack_33c = (undefined4)((ulong)puVar12[2] >> 0x20);
            lStack_318 = puVar12[7];
            uStack_328 = (undefined4)puVar12[5];
            uStack_324 = (undefined4)((ulong)puVar12[5] >> 0x20);
            uStack_330 = (undefined4)puVar12[4];
            uStack_32c = (undefined4)((ulong)puVar12[4] >> 0x20);
            uStack_320 = (undefined4)puVar12[6];
            uStack_31c = (undefined4)((ulong)puVar12[6] >> 0x20);
            puStack_308 = &uStack_300;
            uStack_2f8 = 0;
            uStack_300 = 0;
            if (puVar12[7] != 0) {
              piVar17 = (int *)(puVar12[7] + 0x14);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar3) {
                  *piVar17 = *piVar17 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (*(int *)((long)puVar12 + 4) < 3) {
              uStack_300 = *(undefined8 *)puVar12[9];
              uStack_2f8 = ((undefined8 *)puVar12[9])[1];
            }
            else {
              iStack_34c = 0;
              func_0x000109a84868(&uStack_350);
            }
          }
          else {
            FUN_109a8a180(&uStack_350,param_10,0xffffffff);
          }
          uStack_a90 = CONCAT44(uStack_a90._4_4_,0xc2010000);
          puStack_a88 = &uStack_350;
          uStack_a80 = 0;
          FUN_109a479a0(&uStack_6b0,&uStack_a90);
          if (lStack_318 != 0) {
            piVar17 = (int *)(lStack_318 + 0x14);
            do {
              iVar5 = *piVar17;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar3) {
                *piVar17 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000109a848d4(&uStack_350);
            }
          }
          lStack_318 = 0;
          uStack_338 = 0;
          uStack_334 = 0;
          uStack_340 = 0;
          uStack_33c = 0;
          uStack_328 = 0;
          uStack_324 = 0;
          uStack_330 = 0;
          uStack_32c = 0;
          if (0 < iStack_34c) {
            lVar14 = 0;
            do {
              puStack_310[lVar14] = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < iStack_34c);
          }
          if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
            _free(puStack_308[-1]);
          }
          if ((*(byte *)(in_stack_00000030 + 2) & 0x1f) != 0) {
            FUN_109a8e944(in_stack_00000030);
          }
        }
        else {
          uStack_a90 = 0x7fffffff80000000;
          uStack_9c8 = 0x100000000;
          FUN_109a84930(&uStack_350,&uStack_9b0,&uStack_a90,&uStack_9c8);
          if ((*param_10 & 0x1f0000) == 0x10000) {
            puVar11 = *(ulong **)(param_10 + 2);
            uStack_a50 = (ulong)&uStack_a90 | 8;
            puStack_a88 = (uint *)puVar11[1];
            uStack_a90 = *puVar11;
            uStack_a78 = puVar11[3];
            uStack_a80 = puVar11[2];
            uStack_a68 = puVar11[5];
            uStack_a70 = puVar11[4];
            uStack_a58 = puVar11[7];
            uStack_a60 = puVar11[6];
            puStack_a48 = &uStack_a40;
            uStack_a40 = 0;
            uStack_a38 = 0;
            if (puVar11[7] != 0) {
              piVar17 = (int *)(puVar11[7] + 0x14);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar3) {
                  *piVar17 = *piVar17 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (*(int *)((long)puVar11 + 4) < 3) {
              uStack_a40 = *(undefined8 *)puVar11[9];
              uStack_a38 = ((undefined8 *)puVar11[9])[1];
            }
            else {
              uStack_a90 = uStack_a90 & 0xffffffff;
              func_0x000109a84868(&uStack_a90);
            }
          }
          else {
            FUN_109a8a180(&uStack_a90,param_10,0xffffffff);
          }
          uStack_9c8 = CONCAT44(uStack_9c8._4_4_,0xc2010000);
          puStack_9c0 = (uint *)&uStack_a90;
          uStack_9b8 = 0;
          FUN_109a479a0(&uStack_350,&uStack_9c8);
          if (uStack_a58 != 0) {
            piVar17 = (int *)(uStack_a58 + 0x14);
            do {
              iVar5 = *piVar17;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar3) {
                *piVar17 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000109a848d4(&uStack_a90);
            }
          }
          uStack_a58 = 0;
          uStack_a78 = 0;
          uStack_a80 = 0;
          uStack_a68 = 0;
          uStack_a70 = 0;
          if (0 < uStack_a90._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(uStack_a50 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_a90._4_4_);
          }
          if (puStack_a48 != &uStack_a40 && puStack_a48 != (undefined8 *)0x0) {
            _free(puStack_a48[-1]);
          }
          if (lStack_318 != 0) {
            piVar17 = (int *)(lStack_318 + 0x14);
            do {
              iVar5 = *piVar17;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar3) {
                *piVar17 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000109a848d4(&uStack_350);
            }
          }
          lStack_318 = 0;
          uStack_338 = 0;
          uStack_334 = 0;
          uStack_340 = 0;
          uStack_33c = 0;
          uStack_328 = 0;
          uStack_324 = 0;
          uStack_330 = 0;
          uStack_32c = 0;
          if (0 < iStack_34c) {
            lVar14 = 0;
            do {
              puStack_310[lVar14] = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < iStack_34c);
          }
          if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
            _free(puStack_308[-1]);
          }
          uStack_a90 = 0x7fffffff80000000;
          uStack_9c8 = 0x200000001;
          FUN_109a84930(&uStack_350,&uStack_9b0,&uStack_a90,&uStack_9c8);
          if ((*param_11 & 0x1f0000) == 0x10000) {
            puVar11 = *(ulong **)(param_11 + 2);
            uStack_a50 = (ulong)&uStack_a90 | 8;
            puStack_a88 = (uint *)puVar11[1];
            uStack_a90 = *puVar11;
            uStack_a78 = puVar11[3];
            uStack_a80 = puVar11[2];
            uStack_a68 = puVar11[5];
            uStack_a70 = puVar11[4];
            uStack_a58 = puVar11[7];
            uStack_a60 = puVar11[6];
            puStack_a48 = &uStack_a40;
            uStack_a40 = 0;
            uStack_a38 = 0;
            if (puVar11[7] != 0) {
              piVar17 = (int *)(puVar11[7] + 0x14);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar3) {
                  *piVar17 = *piVar17 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (*(int *)((long)puVar11 + 4) < 3) {
              uStack_a40 = *(undefined8 *)puVar11[9];
              uStack_a38 = ((undefined8 *)puVar11[9])[1];
            }
            else {
              uStack_a90 = uStack_a90 & 0xffffffff;
              func_0x000109a84868(&uStack_a90);
            }
          }
          else {
            FUN_109a8a180(&uStack_a90,param_11,0xffffffff);
          }
          uStack_9c8 = CONCAT44(uStack_9c8._4_4_,0xc2010000);
          puStack_9c0 = (uint *)&uStack_a90;
          uStack_9b8 = 0;
          FUN_109a479a0(&uStack_350,&uStack_9c8);
          if (uStack_a58 != 0) {
            piVar17 = (int *)(uStack_a58 + 0x14);
            do {
              iVar5 = *piVar17;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar3) {
                *piVar17 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000109a848d4(&uStack_a90);
            }
          }
          uStack_a58 = 0;
          uStack_a78 = 0;
          uStack_a80 = 0;
          uStack_a68 = 0;
          uStack_a70 = 0;
          if (0 < uStack_a90._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(uStack_a50 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_a90._4_4_);
          }
          if (puStack_a48 != &uStack_a40 && puStack_a48 != (undefined8 *)0x0) {
            _free(puStack_a48[-1]);
          }
          if (lStack_318 != 0) {
            piVar17 = (int *)(lStack_318 + 0x14);
            do {
              iVar5 = *piVar17;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar3) {
                *piVar17 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000109a848d4(&uStack_350);
            }
          }
          lStack_318 = 0;
          uStack_338 = 0;
          uStack_334 = 0;
          uStack_340 = 0;
          uStack_33c = 0;
          uStack_328 = 0;
          uStack_324 = 0;
          uStack_330 = 0;
          uStack_32c = 0;
          if (0 < iStack_34c) {
            lVar14 = 0;
            do {
              puStack_310[lVar14] = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < iStack_34c);
          }
          if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
            _free(puStack_308[-1]);
          }
          if ((*(byte *)(in_stack_00000030 + 2) & 0x1f) != 0) {
            uStack_350 = 0x42ff0000;
            puStack_310 = &uStack_348;
            uStack_344 = 0;
            uStack_340 = 0;
            iStack_34c = 0;
            uStack_348 = 0;
            uStack_334 = 0;
            uStack_330 = 0;
            uStack_33c = 0;
            uStack_338 = 0;
            uStack_324 = 0;
            uStack_32c = 0;
            uStack_328 = 0;
            lStack_318 = 0;
            uStack_320 = 0;
            uStack_31c = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            iVar5 = *piStack_2b0;
            uStack_a90 = uStack_a90 & 0xffffffff00000000;
            puStack_308 = &uStack_300;
            if (0 < iVar5) {
              uVar13 = 0;
              do {
                if (((bStack_2ef >> 6 & 1) == 0) && (*piStack_2b0 != 1)) {
                  if (piStack_2b0[1] != 1) {
                    iVar1 = 0;
                    if (iStack_2e4 != 0) {
                      iVar1 = (int)uVar13 / iStack_2e4;
                    }
                    lVar14 = (CONCAT44(uStack_2dc,uStack_2e0) + *plStack_2a8 * (long)iVar1) -
                             (long)(iVar1 * iStack_2e4);
                    goto LAB_1094164a8;
                  }
                  pcVar16 = (char *)(CONCAT44(uStack_2dc,uStack_2e0) +
                                    *plStack_2a8 * (long)(int)uVar13);
                }
                else {
                  lVar14 = CONCAT44(uStack_2dc,uStack_2e0);
LAB_1094164a8:
                  pcVar16 = (char *)(lVar14 + (int)uVar13);
                }
                if (*pcVar16 != '\0') {
                  FUN_1094174f0(&uStack_350,&uStack_a90);
                  uVar13 = (uint)uStack_a90;
                }
                uVar13 = uVar13 + 1;
                uStack_a90 = CONCAT44(uStack_a90._4_4_,uVar13);
              } while ((int)uVar13 < iVar5);
            }
            FUN_109a479a0(&uStack_350,in_stack_00000030);
            if (lStack_318 != 0) {
              piVar17 = (int *)(lStack_318 + 0x14);
              do {
                iVar5 = *piVar17;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar3) {
                  *piVar17 = iVar5 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar5 + -1 == 0) {
                func_0x000109a848d4(&uStack_350);
              }
            }
            lStack_318 = 0;
            uStack_338 = 0;
            uStack_334 = 0;
            uStack_340 = 0;
            uStack_33c = 0;
            uStack_328 = 0;
            uStack_324 = 0;
            uStack_330 = 0;
            uStack_32c = 0;
            if (0 < iStack_34c) {
              lVar14 = 0;
              do {
                puStack_310[lVar14] = 0;
                lVar14 = lVar14 + 1;
              } while (lVar14 < iStack_34c);
            }
            if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
              _free(puStack_308[-1]);
            }
          }
        }
        if (lStack_2b8 != 0) {
          piVar17 = (int *)(lStack_2b8 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_2f0);
          }
        }
        lStack_2b8 = 0;
        uStack_2d8 = 0;
        uStack_2d4 = 0;
        uStack_2e0 = 0;
        uStack_2dc = 0;
        uStack_2c8 = 0;
        uStack_2c4 = 0;
        uStack_2d0 = 0;
        uStack_2cc = 0;
        if (0 < iStack_2ec) {
          lVar14 = 0;
          do {
            piStack_2b0[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_2ec);
        }
        if (plStack_2a8 != alStack_2a0 && plStack_2a8 != (long *)0x0) {
          _free(plStack_2a8[-1]);
        }
        if (lStack_978 != 0) {
          piVar17 = (int *)(lStack_978 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_9b0);
          }
        }
        lStack_978 = 0;
        uStack_998 = 0;
        uStack_994 = 0;
        uStack_9a0 = 0;
        uStack_99c = 0;
        uStack_988 = 0;
        uStack_984 = 0;
        uStack_990 = 0;
        uStack_98c = 0;
        if (0 < iStack_9ac) {
          lVar14 = 0;
          do {
            *(undefined4 *)((long)puStack_970 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_9ac);
        }
        if (puStack_968 != &uStack_960 && puStack_968 != (undefined8 *)0x0) {
          _free(puStack_968[-1]);
        }
        FUN_109419c10(&ppuStack_290);
        if (uStack_738 != 0) {
          piVar17 = (int *)(uStack_738 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_770);
          }
        }
        uStack_738 = 0;
        uStack_758 = 0;
        uStack_760 = 0;
        uStack_748 = 0;
        uStack_750 = 0;
        if (0 < uStack_770._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_730 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_770._4_4_);
        }
        if (puStack_728 != &uStack_720 && puStack_728 != (undefined8 *)0x0) {
          _free(puStack_728[-1]);
        }
        if (lStack_6d8 != 0) {
          piVar17 = (int *)(lStack_6d8 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_710);
          }
        }
        lStack_6d8 = 0;
        uStack_6f8 = 0;
        uStack_700 = 0;
        uStack_6e8 = 0;
        uStack_6f0 = 0;
        if (0 < uStack_710._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_6d0 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_710._4_4_);
        }
        if (puStack_6c8 != &uStack_6c0 && puStack_6c8 != (undefined8 *)0x0) {
          _free(puStack_6c8[-1]);
        }
        if (lStack_678 != 0) {
          piVar17 = (int *)(lStack_678 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_6b0);
          }
        }
        lStack_678 = 0;
        uStack_698 = 0;
        uStack_694 = 0;
        uStack_6a0 = 0;
        uStack_69c = 0;
        uStack_688 = 0;
        uStack_684 = 0;
        uStack_690 = 0;
        uStack_68c = 0;
        if (0 < iStack_6ac) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_670 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_6ac);
        }
        if (puStack_668 != &uStack_660 && puStack_668 != (undefined8 *)0x0) {
          _free(puStack_668[-1]);
        }
        if (lStack_618 != 0) {
          piVar17 = (int *)(lStack_618 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_650);
          }
        }
        lStack_618 = 0;
        uStack_638 = 0;
        uStack_634 = 0;
        uStack_640 = 0;
        uStack_63c = 0;
        uStack_628 = 0;
        uStack_624 = 0;
        uStack_630 = 0;
        uStack_62c = 0;
        if (0 < iStack_64c) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_610 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_64c);
        }
        if (puStack_608 != &uStack_600 && puStack_608 != (undefined8 *)0x0) {
          _free(puStack_608[-1]);
        }
        if (uStack_5b8 != 0) {
          piVar17 = (int *)(uStack_5b8 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_5f0);
          }
        }
        uStack_5b8 = 0;
        uStack_5d8 = 0;
        uStack_5d4 = 0;
        uStack_5e0 = 0;
        uStack_5dc = 0;
        uStack_5c8 = 0;
        uStack_5c4 = 0;
        uStack_5d0 = 0;
        uStack_5cc = 0;
        if (0 < iStack_5ec) {
          lVar14 = 0;
          do {
            piStack_5b0[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_5ec);
        }
        if (puStack_5a8 != &uStack_5a0 && puStack_5a8 != (undefined8 *)0x0) {
          _free(puStack_5a8[-1]);
        }
        if (uStack_558 != 0) {
          piVar17 = (int *)(uStack_558 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_590);
          }
        }
        uStack_558 = 0;
        uStack_578 = 0;
        uStack_574 = 0;
        uStack_580 = 0;
        uStack_57c = 0;
        uStack_568 = 0;
        uStack_564 = 0;
        uStack_570 = 0;
        uStack_56c = 0;
        if (0 < iStack_58c) {
          lVar14 = 0;
          do {
            piStack_550[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_58c);
        }
        if (puStack_548 != &uStack_540 && puStack_548 != (undefined8 *)0x0) {
          _free(puStack_548[-1]);
        }
        if (uStack_4f8 != 0) {
          piVar17 = (int *)(uStack_4f8 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_530);
          }
        }
        uStack_4f8 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        if (0 < uStack_530._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_4f0 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_530._4_4_);
        }
        if (puStack_4e8 != &uStack_4e0 && puStack_4e8 != (undefined8 *)0x0) {
          _free(puStack_4e8[-1]);
        }
        if (uStack_498 != 0) {
          piVar17 = (int *)(uStack_498 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_4d0);
          }
        }
        uStack_498 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        if (0 < uStack_4d0._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_490 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_4d0._4_4_);
        }
        if (puStack_488 != &uStack_480 && puStack_488 != (undefined8 *)0x0) {
          _free(puStack_488[-1]);
        }
        if (uStack_438 != 0) {
          piVar17 = (int *)(uStack_438 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_470);
          }
        }
        uStack_438 = 0;
        uStack_458 = 0;
        uStack_460 = 0;
        uStack_448 = 0;
        uStack_450 = 0;
        if (0 < uStack_470._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_430 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_470._4_4_);
        }
        if (puStack_428 != &uStack_420 && puStack_428 != (undefined8 *)0x0) {
          _free(puStack_428[-1]);
        }
        if (uStack_3d8 != 0) {
          piVar17 = (int *)(uStack_3d8 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_410);
          }
        }
        uStack_3d8 = 0;
        uStack_3f8 = 0;
        uStack_400 = 0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        if (0 < uStack_410._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_3d0 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_410._4_4_);
        }
        if (puStack_3c8 != &uStack_3c0 && puStack_3c8 != (undefined8 *)0x0) {
          _free(puStack_3c8[-1]);
        }
        if (uStack_378 != 0) {
          piVar17 = (int *)(uStack_378 + 0x14);
          do {
            iVar5 = *piVar17;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_3b0);
          }
        }
        uStack_378 = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        uStack_388 = 0;
        uStack_390 = 0;
        if (0 < uStack_3b0._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_370 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_3b0._4_4_);
        }
        if (puStack_368 != &uStack_360 && puStack_368 != (undefined8 *)0x0) {
          _free(puStack_368[-1]);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
          return uVar6;
        }
        ___stack_chk_fail();
      }
      puVar10 = (undefined4 *)0x60;
      func_0x000107c2ae8c();
      *puVar10 = 1;
      ppuStack_290 = (undefined **)(puVar10 + 1);
      puStack_288 = (uint *)0x58;
      *(undefined8 *)(puVar10 + 0xb) = 0x7c202933203d3d20;
      *(undefined8 *)(puVar10 + 9) = 0x2928736c656e6e61;
      *(undefined8 *)(puVar10 + 0xf) = 0x2a20736c6f632e73;
      *(undefined8 *)(puVar10 + 0xd) = 0x746e696f706f207c;
      *(undefined8 *)(puVar10 + 0x13) = 0x6c656e6e6168632e;
      *(undefined8 *)(puVar10 + 0x11) = 0x73746e696f706f20;
      *(undefined8 *)(puVar10 + 3) = 0x3d3d2073776f722e;
      *(undefined8 *)(puVar10 + 1) = 0x73746e696f706f28;
      *(undefined1 *)(puVar10 + 0x17) = 0;
      *(undefined8 *)(puVar10 + 0x15) = 0x33203d3d20292873;
      *(undefined8 *)(puVar10 + 7) = 0x68632e73746e696f;
      *(undefined8 *)(puVar10 + 5) = 0x706f202626203120;
      FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x13d);
      goto LAB_10941710c;
    }
  }
  puVar10 = (undefined4 *)0x68;
  func_0x000107c2ae8c();
  *puVar10 = 1;
  ppuStack_290 = (undefined **)(puVar10 + 1);
  puStack_288 = (uint *)0x63;
  *(undefined4 *)((long)puVar10 + 99) = 0x29294634;
  *(undefined8 *)(puVar10 + 0xb) = 0x636568632e73746e;
  *(undefined8 *)(puVar10 + 9) = 0x696f70692878616d;
  *(undefined8 *)(puVar10 + 0xf) = 0x32335f5643202c32;
  *(undefined8 *)(puVar10 + 0xd) = 0x28726f746365566b;
  *(undefined8 *)(puVar10 + 0x13) = 0x636568632e73746e;
  *(undefined8 *)(puVar10 + 0x11) = 0x696f7069202c2946;
  *(undefined8 *)(puVar10 + 0x17) = 0x34365f5643202c32;
  *(undefined8 *)(puVar10 + 0x15) = 0x28726f746365566b;
  *(undefined8 *)(puVar10 + 3) = 0x2026262030203d3e;
  *(undefined8 *)(puVar10 + 1) = 0x2073746e696f706e;
  *(undefined1 *)((long)puVar10 + 0x67) = 0;
  *(undefined8 *)(puVar10 + 7) = 0x3a3a647473203d3d;
  *(undefined8 *)(puVar10 + 5) = 0x2073746e696f706e;
  FUN_109ac3188(0xffffff29,&ppuStack_290,&UNK_10f56ce6c,&UNK_10f56cd39,0x139);
LAB_10941710c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109417110);
  (*pcVar4)();
}



/* Entry: 1094174f0; end: 10941787b;  */

void FUN_1094174f0(uint *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  ulong *puVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 *puStack_130;
  undefined4 *puStack_128;
  undefined4 *puStack_120;
  undefined4 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_78 [2];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar17 = param_1 + 4;
  lVar10 = *(long *)puVar17;
  if (lVar10 == 0) {
    uStack_100 = (ulong)&uStack_140 | 8;
    uStack_110 = 0;
    lStack_108 = 0;
    uStack_138 = 0x100000001;
    uStack_140 = 0x242ff4004;
    uStack_e8 = 4;
    uStack_f0 = 4;
    puStack_120 = param_2 + 1;
    uStack_e0._0_4_ = 0x42ff0000;
    uVar16 = (ulong)&uStack_e0 | 8;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_e0._4_4_ = 0;
    uStack_d8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_b4 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    auStack_78[0] = 0x2010000;
    uStack_68 = 0;
    puStack_130 = param_2;
    puStack_128 = param_2;
    puStack_118 = puStack_120;
    puStack_f8 = &uStack_f0;
    uStack_a0 = uVar16;
    puStack_98 = &uStack_90;
    puStack_70 = &uStack_e0;
    FUN_109a479a0(&uStack_140,auStack_78);
    if (*(long *)(param_1 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
      do {
        iVar5 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(param_1);
      }
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    puVar17[0] = 0;
    puVar17[1] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    if (0 < (int)param_1[1]) {
      lVar10 = 0;
      lVar13 = *(long *)(param_1 + 0x10);
      do {
        *(undefined4 *)(lVar13 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_1[1]);
    }
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)param_1 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
    *(ulong *)(param_1 + 6) = CONCAT44(uStack_c4,uStack_c8);
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_cc,uStack_d0);
    *(ulong *)(param_1 + 10) = CONCAT44(uStack_b4,uStack_b8);
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_bc,uStack_c0);
    *(undefined8 *)(param_1 + 0xe) = uStack_a8;
    *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_ac,uStack_b0);
    puVar14 = *(uint **)(param_1 + 0x12);
    puVar17 = param_1 + 0x14;
    if (puVar14 != puVar17) {
      if (puVar14 != (uint *)0x0) {
        _free(*(undefined8 *)(puVar14 + -2));
      }
      *(uint **)(param_1 + 0x10) = param_1 + 2;
      *(uint **)(param_1 + 0x12) = puVar17;
      puVar14 = puVar17;
    }
    puVar15 = (undefined8 *)((ulong)&uStack_e0 | 4);
    if (uStack_e0._4_4_ < 3) {
      *(undefined8 *)puVar14 = *puStack_98;
      *(undefined8 *)(puVar14 + 2) = puStack_98[1];
      uStack_e0._0_4_ = 0x42ff0000;
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      if (puStack_98 != &uStack_90) {
        _free(puStack_98[-1]);
      }
    }
    else {
      *(ulong *)(param_1 + 0x10) = uStack_a0;
      *(undefined8 **)(param_1 + 0x12) = puStack_98;
      uStack_e0._0_4_ = 0x42ff0000;
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      uStack_a0 = uVar16;
      puStack_98 = &uStack_90;
    }
    if (lStack_108 != 0) {
      piVar1 = (int *)(lStack_108 + 0x14);
      do {
        iVar5 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_140);
      }
    }
    lStack_108 = 0;
    puStack_128 = (undefined4 *)0x0;
    puStack_130 = (undefined4 *)0x0;
    puStack_118 = (undefined4 *)0x0;
    puStack_120 = (undefined4 *)0x0;
    if (0 < uStack_140._4_4_) {
      lVar10 = 0;
      do {
        *(undefined4 *)(uStack_100 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < uStack_140._4_4_);
    }
    if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
      _free(puStack_f8[-1]);
    }
    return;
  }
  if (((*param_1 & 0xfff) == 4) && (param_1[3] == 1)) {
    if ((*param_1 & 0xc000) == 0x4000) {
      lVar13 = **(long **)(param_1 + 0x12);
      uVar16 = *(long *)(param_1 + 8) + lVar13;
      if (uVar16 <= *(ulong *)(param_1 + 10)) {
        uVar4 = *param_2;
        iVar5 = **(int **)(param_1 + 0x10);
        **(int **)(param_1 + 0x10) = iVar5 + 1;
        *(undefined4 *)(lVar10 + lVar13 * iVar5) = uVar4;
        *(ulong *)(param_1 + 8) = uVar16;
        return;
      }
    }
    iVar5 = **(int **)(param_1 + 0x10);
    if ((*(char *)((long)param_1 + 1) < '\0') ||
       (plVar11 = *(long **)(param_1 + 0x12),
       *(ulong *)(param_1 + 10) < (ulong)(*(long *)(param_1 + 8) + *plVar11))) {
      iVar2 = (iVar5 + 1 + iVar5 * 2) / 2;
      if (iVar2 < iVar5 + 1) {
        iVar2 = iVar5 + 1;
      }
      FUN_109a859f0(param_1,(long)iVar2);
      plVar11 = *(long **)(param_1 + 0x12);
    }
    if ((int)param_1[1] < 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = plVar11[(ulong)param_1[1] - 1];
    }
    _memcpy(*(long *)(param_1 + 4) + *plVar11 * (long)iVar5,param_2,uVar16);
    puVar3 = *(ulong **)(param_1 + 0x12);
    **(int **)(param_1 + 0x10) = iVar5 + 1;
    uVar12 = *puVar3;
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar12;
    if (uVar16 < uVar12) {
      *param_1 = *param_1 & 0xffffbfff;
    }
    return;
  }
  puVar9 = (undefined4 *)0x30;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  uStack_e0 = puVar9 + 1;
  uStack_d8 = 0x2a;
  uStack_d4 = 0;
  *(undefined8 *)(puVar9 + 3) = 0x743a3a3e70545f3c;
  *(undefined8 *)(puVar9 + 1) = 0x6570795461746144;
  *(undefined1 *)((long)puVar9 + 0x2e) = 0;
  *(undefined8 *)(puVar9 + 7) = 0x2626202928657079;
  *(undefined8 *)(puVar9 + 5) = 0x74203d3d20657079;
  *(undefined8 *)((long)puVar9 + 0x26) = 0x31203d3d20736c6f;
  *(undefined8 *)((long)puVar9 + 0x1e) = 0x6320262620292865;
  FUN_109ac3188(0xffffff29,&uStack_e0,&UNK_10f56d106,&UNK_10f566d1b,0x45b);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109417830);
  (*pcVar8)();
}



/* Entry: 10941787c; end: 10941787f;  */

undefined8 * FUN_10941787c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af5f00;
  if (param_1[0x39] != 0) {
    piVar1 = (int *)(param_1[0x39] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x32);
    }
  }
  param_1[0x39] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  if (0 < *(int *)((long)param_1 + 0x194)) {
    lVar5 = 0;
    lVar7 = param_1[0x3a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x194));
  }
  puVar6 = (undefined8 *)param_1[0x3b];
  if (puVar6 != param_1 + 0x3c && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x2d] != 0) {
    piVar1 = (int *)(param_1[0x2d] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x26);
    }
  }
  param_1[0x2d] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  if (0 < *(int *)((long)param_1 + 0x134)) {
    lVar5 = 0;
    lVar7 = param_1[0x2e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x134));
  }
  puVar6 = (undefined8 *)param_1[0x2f];
  if (puVar6 != param_1 + 0x30 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x21] != 0) {
    piVar1 = (int *)(param_1[0x21] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1a);
    }
  }
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  if (0 < *(int *)((long)param_1 + 0xd4)) {
    lVar5 = 0;
    lVar7 = param_1[0x22];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xd4));
  }
  puVar6 = (undefined8 *)param_1[0x23];
  if (puVar6 != param_1 + 0x24 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109417880; end: 109417893;  */

void FUN_109417880(void)

{
  FUN_109419c10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109417894; end: 1094187db;  */

uint * FUN_109417894(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    uint *param_5,uint *param_6,uint *param_7,undefined8 param_8)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uStack_618;
  int iStack_614;
  undefined8 *puStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e0;
  long lStack_5d8;
  undefined1 *puStack_5d0;
  undefined1 auStack_5c8 [16];
  undefined4 auStack_5b8 [2];
  undefined8 *puStack_5b0;
  undefined8 uStack_5a8;
  undefined4 auStack_5a0 [2];
  undefined8 *puStack_598;
  undefined8 uStack_590;
  undefined4 auStack_588 [2];
  undefined8 *puStack_580;
  undefined8 uStack_578;
  undefined4 uStack_570;
  int iStack_56c;
  undefined1 auStack_568 [8];
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_538;
  undefined1 *puStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  uint **ppuStack_500;
  uint **ppuStack_4f8;
  undefined1 *puStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  ulong uStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4a8;
  int iStack_4a4;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  long lStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  ulong uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  uint auStack_3d0 [16];
  uint uStack_390;
  int iStack_38c;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 ****ppppuStack_348;
  undefined8 ***pppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  undefined8 *puStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  int iStack_268;
  int iStack_264;
  undefined8 uStack_260;
  uint *puStack_258;
  uint *puStack_250;
  uint *puStack_248;
  undefined8 ****ppppuStack_240;
  undefined8 ****ppppuStack_238;
  undefined8 uStack_230;
  long lStack_228;
  ulong uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  uint *apuStack_200 [3];
  undefined1 auStack_1e8 [72];
  uint auStack_1a0 [2];
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 ****appppuStack_158 [28];
  long lStack_78;
  
  uVar23 = (undefined4)((ulong)param_2 >> 0x20);
  uVar22 = (undefined4)param_2;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_6 & 0x1f0000) == 0x10000) {
    puVar12 = *(ulong **)(param_6 + 2);
    uStack_290 = (ulong)&uStack_2d0 | 8;
    uStack_2d0 = *puVar12;
    uStack_2c8 = puVar12[1];
    uStack_2b8 = puVar12[3];
    uStack_2c0 = puVar12[2];
    uStack_2b0 = puVar12[4];
    uStack_2a8 = puVar12[5];
    uStack_298 = puVar12[7];
    uStack_2a0 = puVar12[6];
    uVar22 = (undefined4)uStack_2a0;
    uVar23 = (undefined4)(uStack_2a0 >> 0x20);
    puStack_288 = &uStack_280;
    uStack_278 = 0;
    uStack_280 = 0;
    if (puVar12[7] != 0) {
      piVar1 = (int *)(puVar12[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar12 + 4) < 3) {
      uStack_280 = *(undefined8 *)puVar12[9];
      uStack_278 = ((undefined8 *)puVar12[9])[1];
      puVar9 = param_5;
    }
    else {
      uStack_2d0 = uStack_2d0 & 0xffffffff;
      puVar9 = (uint *)&uStack_2d0;
      func_0x000109a84868(puVar9);
    }
  }
  else {
    puVar9 = param_6;
    FUN_109a8a180(&uStack_2d0,param_6,0xffffffff);
  }
  if ((*param_7 & 0x1f0000) == 0x10000) {
    puVar12 = *(ulong **)(param_7 + 2);
    puStack_2f0 = (undefined8 *)((ulong)&uStack_330 | 8);
    uStack_330 = *puVar12;
    uStack_328 = puVar12[1];
    uStack_318 = puVar12[3];
    puStack_320 = (undefined8 *)puVar12[2];
    uStack_310 = puVar12[4];
    uStack_308 = puVar12[5];
    uStack_2f8 = puVar12[7];
    uStack_300 = puVar12[6];
    uVar22 = (undefined4)uStack_300;
    uVar23 = (undefined4)(uStack_300 >> 0x20);
    puStack_2e8 = &uStack_2e0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    if (puVar12[7] != 0) {
      piVar1 = (int *)(puVar12[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar12 + 4) < 3) {
      uStack_2e0 = *(undefined8 *)puVar12[9];
      uStack_2d8 = ((undefined8 *)puVar12[9])[1];
    }
    else {
      uStack_330 = uStack_330 & 0xffffffff;
      puVar9 = (uint *)&uStack_330;
      func_0x000109a84868(puVar9);
    }
  }
  else {
    puVar9 = param_7;
    FUN_109a8a180(&uStack_330,param_7,0xffffffff);
  }
  if ((int)uStack_2c8 == 3) {
    uStack_390 = 0x42ff0000;
    puVar16 = (undefined8 *)((ulong)&uStack_390 | 8);
    uStack_388._4_4_ = 0;
    uStack_380 = 0;
    iStack_38c = 0;
    uStack_388._0_4_ = 0;
    uStack_388 = (uint *)0x0;
    uStack_374 = 0;
    uStack_370 = 0;
    uStack_37c = 0;
    uStack_378 = 0;
    uStack_364 = 0;
    uStack_36c = 0;
    uStack_368 = 0;
    lStack_358 = 0;
    uStack_360 = 0;
    uStack_35c = 0;
    uStack_338 = 0;
    pppuStack_340 = (undefined8 ****)0x0;
    puStack_350 = puVar16;
    ppppuStack_348 = &pppuStack_340;
    if ((char)param_5[0x7c] == '\x01') {
      if (((uint)uStack_330 & 7) != 5) goto LAB_109418650;
      dVar20 = (double)FUN_109414724(param_5 + 2);
      auStack_1a0[0] = 0x42ff0000;
      puStack_160 = (undefined8 *)((ulong)auStack_1a0 | 8);
      uStack_198._4_4_ = 0;
      uStack_190 = 0;
      auStack_1a0[1] = 0;
      uStack_198._0_4_ = 0;
      uStack_184 = 0;
      uStack_180 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_174 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      appppuStack_158[2] = (undefined8 ****)0x0;
      appppuStack_158[1] = (undefined8 ****)0x0;
      apuStack_200[0] = (uint *)*puStack_2f0;
      appppuStack_158[0] = appppuStack_158 + 1;
      FUN_109a83fd0(auStack_1a0,2,apuStack_200,(uint)uStack_330 & 0xfff);
      puVar17 = puStack_320;
      puVar18 = (undefined8 *)CONCAT44(uStack_18c,uStack_190);
      puVar19 = &uStack_330;
      FUN_109a89cd4(puVar19,2,0xffffffff,1);
      if (0 < (int)puVar19) {
        auVar21 = NEON_fmov(0x3ff0000000000000,8);
        uVar13 = (ulong)puVar19 & 0xffffffff;
        do {
          *puVar18 = CONCAT44(((float)((ulong)*puVar17 >> 0x20) - (float)param_4) *
                              (float)(auVar21._8_8_ / (double)CONCAT44(uVar23,uVar22)),
                              ((float)*puVar17 - (float)param_3) * (float)(auVar21._0_8_ / dVar20));
          uVar13 = uVar13 - 1;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar13 != 0);
      }
      if (lStack_358 != 0) {
        piVar1 = (int *)(lStack_358 + 0x14);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          func_0x000109a848d4(&uStack_390);
        }
      }
      if (0 < iStack_38c) {
        lVar14 = 0;
        do {
          *(undefined4 *)((long)puStack_350 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_38c);
      }
      uStack_388._0_4_ = (undefined4)uStack_198;
      uStack_388._4_4_ = uStack_198._4_4_;
      uStack_390 = auStack_1a0[0];
      iStack_38c = auStack_1a0[1];
      uStack_378 = uStack_188;
      uStack_374 = uStack_184;
      uStack_380 = uStack_190;
      uStack_37c = uStack_18c;
      uStack_368 = uStack_178;
      uStack_364 = uStack_174;
      uStack_370 = uStack_180;
      uStack_36c = uStack_17c;
      lStack_358 = lStack_168;
      uStack_360 = uStack_170;
      uStack_35c = uStack_16c;
      puVar19 = puStack_350;
      pppppuVar15 = (undefined8 *****)ppppuStack_348;
      if ((ppppuStack_348 != &pppuStack_340) &&
         (puVar19 = puVar16, pppppuVar15 = (undefined8 *****)&pppuStack_340,
         (undefined8 *****)ppppuStack_348 != (undefined8 *****)0x0)) {
        _free(ppppuStack_348[-1]);
      }
      ppppuStack_348 = pppppuVar15;
      puStack_350 = puVar19;
      ppppuVar5 = appppuStack_158[0];
      if ((int)auStack_1a0[1] < 3) {
        puVar16 = (undefined8 *)((ulong)auStack_1a0 | 4);
        *ppppuStack_348 = *appppuStack_158[0];
        ppppuStack_348[1] = ppppuVar5[1];
        auStack_1a0[0] = 0x42ff0000;
        puVar16[1] = 0;
        *puVar16 = 0;
        puVar16[3] = 0;
        puVar16[2] = 0;
        puVar16[5] = 0;
        puVar16[4] = 0;
        *(undefined8 *)((long)puVar16 + 0x34) = 0;
        *(undefined8 *)((long)puVar16 + 0x2c) = 0;
        uStack_4a0 = (uint *)CONCAT44(uStack_4a0._4_4_,(undefined4)uStack_4a0);
        if ((undefined8 *****)ppppuVar5 != appppuStack_158 + 1) {
          _free(ppppuVar5[-1]);
        }
      }
      else {
        ppppuStack_348 = appppuStack_158[0];
        puStack_350 = puStack_160;
      }
    }
    else {
      uStack_190 = 0;
      uStack_18c = 0;
      auStack_1a0[0] = 0x1010000;
      uStack_198 = (uint *)&uStack_330;
      apuStack_200[0] = (uint *)CONCAT44(apuStack_200[0]._4_4_,0x2010000);
      apuStack_200[2] = (uint *)0x0;
      uStack_4a0 = param_5 + 2;
      uStack_498 = 0;
      uStack_494 = 0;
      uStack_4a8 = 0x1010000;
      puStack_258 = param_5 + 0x1a;
      puStack_250 = (uint *)0x0;
      uStack_260 = CONCAT44(uStack_260._4_4_,0x1010000);
      apuStack_200[1] = &uStack_390;
      FUN_109a91d90();
      puVar10 = puVar9;
      FUN_109a91d90();
      FUN_109b5d5b8(auStack_1a0,apuStack_200,&uStack_4a8,&uStack_260,puVar9,puVar10);
    }
    uStack_430 = *(ulong *)(param_5 + 2);
    uStack_428 = *(undefined8 *)(param_5 + 4);
    uVar3 = param_5[3];
    uStack_3f0 = (ulong)&uStack_430 | 8;
    uStack_418 = *(undefined8 *)(param_5 + 8);
    uStack_420 = *(undefined8 *)(param_5 + 6);
    uStack_408 = *(undefined8 *)(param_5 + 0xc);
    uStack_410 = *(undefined8 *)(param_5 + 10);
    uStack_400 = *(undefined8 *)(param_5 + 0xe);
    lStack_3f8 = *(long *)(param_5 + 0x10);
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    if (*(long *)(param_5 + 0x10) != 0) {
      piVar1 = (int *)(*(long *)(param_5 + 0x10) + 0x14);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar3 = param_5[3];
    }
    puStack_3e8 = &uStack_3e0;
    if ((int)uVar3 < 3) {
      uStack_3e0 = **(undefined8 **)(param_5 + 0x14);
      uStack_3d8 = (*(undefined8 **)(param_5 + 0x14))[1];
    }
    else {
      uStack_430 = uStack_430 & 0xffffffff;
      func_0x000109a84868(&uStack_430);
    }
    FUN_109413168(auStack_3d0,&uStack_430);
    if (lStack_3f8 != 0) {
      piVar1 = (int *)(lStack_3f8 + 0x14);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(&uStack_430);
      }
    }
    lStack_3f8 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    if (0 < uStack_430._4_4_) {
      lVar14 = 0;
      do {
        *(undefined4 *)(uStack_3f0 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_430._4_4_);
    }
    if (puStack_3e8 != &uStack_3e0 && puStack_3e8 != (undefined8 *)0x0) {
      _free(puStack_3e8[-1]);
    }
    puStack_440 = (undefined8 *)0x0;
    puStack_448 = (undefined8 *)0x0;
    uStack_438 = 0;
    uVar3 = (uint)uStack_2d0 & 7;
    if (uVar3 == (uStack_390 & 7)) {
      if (uVar3 == 5) {
        FUN_1094131f8(auStack_3d0,&uStack_2d0,&uStack_390,&puStack_448);
      }
      else {
        func_0x000109413424(auStack_3d0,&uStack_2d0,&uStack_390,&puStack_448);
      }
    }
    else if (uVar3 == 5) {
      func_0x000109413638(auStack_3d0,&uStack_2d0,&uStack_390,&puStack_448);
    }
    else {
      func_0x00010941385c(auStack_3d0,&uStack_2d0,&uStack_390,&puStack_448);
    }
    param_6 = auStack_3d0;
    FUN_109413a78(*puStack_448,(int)puStack_448[1],puStack_448[2],puStack_448[3],puStack_448[4],
                  puStack_448[5],puStack_448[6],puStack_448[7],param_6,auStack_1a0,apuStack_200);
    iVar8 = (int)param_6;
    puVar9 = uStack_4a0;
    if (iVar8 != 0) {
      uStack_4a8 = 0x42ff0000;
      uStack_4a0._4_4_ = 0;
      uStack_498 = 0;
      iStack_4a4 = 0;
      uStack_4a0._0_4_ = 0;
      puStack_468 = &uStack_4a0;
      uStack_48c = 0;
      uStack_488 = 0;
      uStack_494 = 0;
      uStack_490 = 0;
      uStack_47c = 0;
      uStack_484 = 0;
      uStack_480 = 0;
      lStack_470 = 0;
      uStack_478 = 0;
      uStack_474 = 0;
      uStack_450 = 0;
      uStack_458 = 0;
      uStack_260 = CONCAT44(2,iVar8 * 3);
      puVar16 = (undefined8 *)&uStack_4a8;
      puStack_460 = &uStack_458;
      FUN_109a83fd0(puVar16,2,&uStack_260,6);
      if (0 < iVar8) {
        puVar19 = (undefined8 *)((ulong)&uStack_570 | 4);
        uVar13 = 0;
        do {
          puStack_250 = auStack_1a0 + uVar13 * 0x12;
          uStack_230 = 0;
          lStack_228 = 0;
          puStack_258 = (uint *)0x300000003;
          uStack_260 = 0x242ff4006;
          uStack_208 = 8;
          uStack_210 = 0x18;
          ppppuStack_240 = appppuStack_158 + uVar13 * 9;
          ppuStack_500 = apuStack_200 + uVar13 * 3;
          uStack_4e0 = 0;
          lStack_4d8 = 0;
          uStack_508 = 0x100000003;
          uStack_510 = 0x242ff4006;
          uStack_4b8 = 8;
          uStack_4c0 = 8;
          puStack_4f0 = auStack_1e8 + uVar13 * 0x18;
          uStack_570 = 0x42ff0000;
          puVar19[1] = 0;
          *puVar19 = 0;
          puVar19[3] = 0;
          puVar19[2] = 0;
          puVar19[5] = 0;
          puVar19[4] = 0;
          *(undefined8 *)((long)puVar19 + 0x34) = 0;
          *(undefined8 *)((long)puVar19 + 0x2c) = 0;
          uStack_520 = 0;
          uStack_518 = 0;
          uStack_608 = 0;
          uStack_618 = 0x1010000;
          auStack_588[0] = 0x2010000;
          uStack_578 = 0;
          puStack_610 = &uStack_260;
          puStack_580 = (undefined8 *)&uStack_570;
          puStack_530 = auStack_568;
          puStack_528 = &uStack_520;
          ppuStack_4f8 = ppuStack_500;
          puStack_4e8 = puStack_4f0;
          uStack_4d0 = (ulong)&uStack_510 | 8;
          puStack_4c8 = &uStack_4c0;
          puStack_248 = puStack_250;
          ppppuStack_238 = ppppuStack_240;
          uStack_220 = (ulong)&uStack_260 | 8;
          puStack_218 = &uStack_210;
          FUN_109a91d90();
          FUN_109b8d8fc(&uStack_618,auStack_588,puVar16);
          uStack_578 = 0;
          auStack_588[0] = 0x1010000;
          uStack_590 = 0;
          auStack_5a0[0] = 0x1010000;
          uVar2 = uVar13 + 1;
          iStack_268 = (int)uVar13 * 3;
          iStack_264 = (int)uVar2 * 3;
          uStack_270 = 0x7fffffff80000000;
          puStack_598 = &uStack_510;
          puStack_580 = (undefined8 *)&uStack_570;
          FUN_109a84930(&uStack_618,&uStack_4a8,&iStack_268,&uStack_270);
          auStack_5b8[0] = 0xc2010000;
          puStack_5b0 = (undefined8 *)&uStack_618;
          uStack_5a8 = 0;
          puVar16 = (undefined8 *)auStack_588;
          FUN_109a91dec(puVar16,auStack_5a0,auStack_5b8);
          if (lStack_5e0 != 0) {
            piVar1 = (int *)(lStack_5e0 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              puVar16 = (undefined8 *)&uStack_618;
              func_0x000109a848d4();
            }
          }
          lStack_5e0 = 0;
          uStack_600 = 0;
          uStack_608 = 0;
          uStack_5f0 = 0;
          uStack_5f8 = 0;
          if (0 < iStack_614) {
            lVar14 = 0;
            do {
              *(undefined4 *)(lStack_5d8 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < iStack_614);
          }
          if (puStack_5d0 != auStack_5c8 && puStack_5d0 != (undefined1 *)0x0) {
            puVar16 = *(undefined8 **)(puStack_5d0 + -8);
            _free();
          }
          if (lStack_538 != 0) {
            piVar1 = (int *)(lStack_538 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              puVar16 = (undefined8 *)&uStack_570;
              func_0x000109a848d4();
            }
          }
          lStack_538 = 0;
          uStack_558 = 0;
          uStack_560 = 0;
          uStack_548 = 0;
          uStack_550 = 0;
          if (0 < iStack_56c) {
            lVar14 = 0;
            do {
              *(undefined4 *)(puStack_530 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < iStack_56c);
          }
          if (puStack_528 != &uStack_520 && puStack_528 != (undefined8 *)0x0) {
            puVar16 = (undefined8 *)puStack_528[-1];
            _free();
          }
          if (lStack_4d8 != 0) {
            piVar1 = (int *)(lStack_4d8 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              puVar16 = &uStack_510;
              func_0x000109a848d4();
            }
          }
          lStack_4d8 = 0;
          ppuStack_4f8 = (uint **)0x0;
          ppuStack_500 = (uint **)0x0;
          puStack_4e8 = (undefined1 *)0x0;
          puStack_4f0 = (undefined1 *)0x0;
          if (0 < uStack_510._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(uStack_4d0 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_510._4_4_);
          }
          if (puStack_4c8 != &uStack_4c0 && puStack_4c8 != (undefined8 *)0x0) {
            puVar16 = (undefined8 *)puStack_4c8[-1];
            _free();
          }
          if (lStack_228 != 0) {
            piVar1 = (int *)(lStack_228 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              puVar16 = &uStack_260;
              func_0x000109a848d4();
            }
          }
          lStack_228 = 0;
          puStack_248 = (uint *)0x0;
          puStack_250 = (uint *)0x0;
          ppppuStack_238 = (undefined8 ****)0x0;
          ppppuStack_240 = (undefined8 ****)0x0;
          if (0 < uStack_260._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(uStack_220 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_260._4_4_);
          }
          if (puStack_218 != &uStack_210 && puStack_218 != (undefined8 *)0x0) {
            puVar16 = (undefined8 *)puStack_218[-1];
            _free();
          }
          uVar13 = uVar2;
        } while (uVar2 != ((ulong)param_6 & 0xffffffff));
      }
      FUN_109a479a0(&uStack_4a8,param_8);
      param_6 = (uint *)((ulong)param_6 & 0xffffffff);
      puVar16 = (undefined8 *)uStack_198;
      if (lStack_470 != 0) {
        piVar1 = (int *)(lStack_470 + 0x14);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          func_0x000109a848d4(&uStack_4a8);
          puVar16 = (undefined8 *)uStack_198;
        }
      }
      puVar9 = (uint *)CONCAT44(uStack_4a0._4_4_,(undefined4)uStack_4a0);
      lStack_470 = 0;
      uStack_490 = 0;
      uStack_48c = 0;
      uStack_498 = 0;
      uStack_494 = 0;
      uStack_480 = 0;
      uStack_47c = 0;
      uStack_488 = 0;
      uStack_484 = 0;
      if (0 < iStack_4a4) {
        lVar14 = 0;
        do {
          *(undefined4 *)((long)puStack_468 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_4a4);
      }
      uStack_198 = (uint *)puVar16;
      if (puStack_460 != &uStack_458 && puStack_460 != (undefined8 *)0x0) {
        _free(puStack_460[-1]);
        puVar9 = (uint *)CONCAT44(uStack_4a0._4_4_,(undefined4)uStack_4a0);
      }
    }
    uStack_4a0 = puVar9;
    if (puStack_448 != (undefined8 *)0x0) {
      puStack_440 = puStack_448;
      __ZdlPv();
    }
    if (lStack_358 != 0) {
      piVar1 = (int *)(lStack_358 + 0x14);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(&uStack_390);
      }
    }
    lStack_358 = 0;
    uStack_378 = 0;
    uStack_374 = 0;
    uStack_380 = 0;
    uStack_37c = 0;
    uStack_368 = 0;
    uStack_364 = 0;
    uStack_370 = 0;
    uStack_36c = 0;
    if (0 < iStack_38c) {
      lVar14 = 0;
      do {
        *(undefined4 *)((long)puStack_350 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < iStack_38c);
    }
    bVar7 = ppppuStack_348 == &pppuStack_340;
    pppppuVar15 = (undefined8 *****)ppppuStack_348;
    puVar16 = (undefined8 *)uStack_198;
LAB_109418508:
    uStack_198 = (uint *)puVar16;
    if (!bVar7 && pppppuVar15 != (undefined8 *****)0x0) {
      _free(pppppuVar15[-1]);
    }
  }
  else {
    if (2 < (int)uStack_2c8) {
      uStack_190 = 0;
      uStack_18c = 0;
      uStack_198 = param_5 + 2;
      auStack_1a0[0] = 0x1010000;
      uStack_388 = param_5 + 0x1a;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_390 = 0x1010000;
      apuStack_200[0]._0_4_ = 0xc2010000;
      apuStack_200[2] = (uint *)0x0;
      uStack_4a8 = 0xc2010000;
      uStack_498 = 0;
      uStack_494 = 0;
      apuStack_200[1] = param_5 + 0x34;
      uStack_4a0 = param_5 + 0x4c;
      FUN_109ba43b4(param_6,param_7,auStack_1a0,&uStack_390,apuStack_200,&uStack_4a8,
                    (char)param_5[0x33],param_5[0x32]);
      auStack_1a0[0] = 0x42ff0000;
      puStack_160 = &uStack_198;
      uStack_198._4_4_ = 0;
      uStack_190 = 0;
      auStack_1a0[1] = 0;
      uStack_198._0_4_ = 0;
      uStack_184 = 0;
      uStack_180 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_174 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      appppuStack_158[2] = (undefined8 ****)0x0;
      appppuStack_158[1] = (undefined8 ****)0x0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_390 = 0x1010000;
      apuStack_200[2] = (uint *)0x0;
      apuStack_200[0] = (uint *)CONCAT44(apuStack_200[0]._4_4_,0x1010000);
      uStack_4a8 = 0x2010000;
      uStack_498 = 0;
      uStack_494 = 0;
      apuStack_200[1] = param_5 + 0x4c;
      appppuStack_158[0] = appppuStack_158 + 1;
      uStack_388 = param_5 + 0x34;
      uStack_4a0 = auStack_1a0;
      FUN_109a91dec(&uStack_390,apuStack_200,&uStack_4a8);
      FUN_109a479a0(auStack_1a0,param_8);
      if (lStack_168 != 0) {
        piVar1 = (int *)(lStack_168 + 0x14);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          func_0x000109a848d4(auStack_1a0);
        }
      }
      puVar16 = (undefined8 *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
      lStack_168 = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      if (0 < (int)auStack_1a0[1]) {
        lVar14 = 0;
        do {
          *(undefined4 *)((long)puStack_160 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)auStack_1a0[1]);
      }
      bVar7 = (undefined8 *****)appppuStack_158[0] == appppuStack_158 + 1;
      pppppuVar15 = (undefined8 *****)appppuStack_158[0];
      goto LAB_109418508;
    }
    param_6 = (uint *)0x0;
  }
  if (uStack_2f8 != 0) {
    piVar1 = (int *)(uStack_2f8 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_330);
    }
  }
  uStack_2f8 = 0;
  uStack_318 = 0;
  puStack_320 = (undefined8 *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  if (0 < uStack_330._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)((long)puStack_2f0 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_330._4_4_);
  }
  if (puStack_2e8 != &uStack_2e0 && puStack_2e8 != (undefined8 *)0x0) {
    _free(puStack_2e8[-1]);
  }
  if (uStack_298 != 0) {
    piVar1 = (int *)(uStack_298 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d0);
    }
  }
  uStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  if (0 < uStack_2d0._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_290 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_2d0._4_4_);
  }
  if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
    _free(puStack_288[-1]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_6;
  }
  ___stack_chk_fail();
LAB_109418650:
  puVar11 = (undefined4 *)0x20;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  apuStack_200[0] = puVar11 + 1;
  apuStack_200[1] = (uint *)0x18;
  *(undefined1 *)(puVar11 + 7) = 0;
  *(undefined8 *)(puVar11 + 3) = 0x3d20292868747065;
  *(undefined8 *)(puVar11 + 1) = 0x642e736c65786970;
  *(undefined8 *)(puVar11 + 5) = 0x4632335f5643203d;
  FUN_109ac3188(0xffffff29,apuStack_200,&UNK_10f56cd28,&UNK_10f56cd39,0x44);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1094186b4);
  (*pcVar6)();
}



/* Entry: 1094187dc; end: 109419c07;  */

void FUN_1094187dc(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  double *pdVar13;
  long lVar14;
  ulong uVar15;
  double *pdVar16;
  float *pfVar17;
  int *piVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  uint auStack_528 [2];
  undefined8 *puStack_520;
  undefined8 uStack_518;
  uint auStack_510 [2];
  undefined8 *puStack_508;
  undefined8 uStack_500;
  uint auStack_4f8 [2];
  undefined8 *puStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_4e0 [8];
  undefined1 auStack_4d8 [4];
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  long lStack_4a8;
  undefined1 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  double dStack_480;
  double dStack_478;
  double dStack_470;
  double dStack_468;
  double dStack_460;
  double dStack_458;
  double dStack_450;
  double dStack_448;
  double dStack_440;
  undefined4 uStack_430;
  undefined8 uStack_42c;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  long lStack_3f8;
  long lStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_398;
  long lStack_390;
  undefined1 *puStack_388;
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [4];
  int iStack_36c;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_338;
  long lStack_330;
  undefined1 *puStack_328;
  undefined1 auStack_320 [16];
  undefined8 uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  long lStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 auStack_1e8 [2];
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  undefined8 uStack_1a8;
  double dStack_1a0;
  long lStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  byte bStack_16f;
  undefined2 uStack_16e;
  uint uStack_16c;
  undefined8 uStack_168;
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
  long lStack_138;
  int *piStack_130;
  long *plStack_128;
  long alStack_120 [2];
  undefined8 uStack_110;
  undefined8 *puStack_108;
  float *pfStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  if ((*param_6 & 0x1f0000) == 0x10000) {
    puVar9 = *(undefined8 **)(param_6 + 2);
    uStack_210 = (ulong)&uStack_250 | 8;
    puStack_248 = (undefined8 *)puVar9[1];
    uStack_250 = (undefined4 *)*puVar9;
    uStack_238 = puVar9[3];
    lStack_240 = puVar9[2];
    uStack_228 = puVar9[5];
    uStack_230 = puVar9[4];
    lStack_218 = puVar9[7];
    uStack_220 = puVar9[6];
    puStack_208 = &uStack_200;
    uStack_1f8 = 0;
    uStack_200 = 0;
    if (puVar9[7] != 0) {
      piVar18 = (int *)(puVar9[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = *piVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_200 = *(undefined8 *)puVar9[9];
      uStack_1f8 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_250 = (undefined4 *)((ulong)uStack_250 & 0xffffffff);
      func_0x000109a84868(&uStack_250);
    }
  }
  else {
    FUN_109a8a180(&uStack_250,param_6,0xffffffff);
  }
  if ((*param_7 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_7 + 2);
    uStack_270 = (ulong)&uStack_2b0 | 8;
    uStack_2a8 = puVar10[1];
    uStack_2b0 = *puVar10;
    uStack_298 = puVar10[3];
    uStack_2a0 = puVar10[2];
    uStack_288 = puVar10[5];
    uStack_290 = puVar10[4];
    uStack_278 = puVar10[7];
    uStack_280 = puVar10[6];
    puStack_268 = &uStack_260;
    uStack_258 = 0;
    uStack_260 = 0;
    if (puVar10[7] != 0) {
      piVar18 = (int *)(puVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = *piVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_260 = *(undefined8 *)puVar10[9];
      uStack_258 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_2b0 = uStack_2b0 & 0xffffffff;
      func_0x000109a84868(&uStack_2b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_2b0,param_7,0xffffffff);
  }
  if ((*param_8 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_8 + 2);
    uStack_2d0 = (ulong)&uStack_310 | 8;
    uStack_308 = puVar10[1];
    uStack_310 = *puVar10;
    uStack_2f8 = puVar10[3];
    uStack_300 = puVar10[2];
    uStack_2e8 = puVar10[5];
    uStack_2f0 = puVar10[4];
    uStack_2d8 = puVar10[7];
    uStack_2e0 = puVar10[6];
    puStack_2c8 = &uStack_2c0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    if (puVar10[7] != 0) {
      piVar18 = (int *)(puVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = *piVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_2c0 = *(undefined8 *)puVar10[9];
      uStack_2b8 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_310 = uStack_310 & 0xffffffff;
      func_0x000109a84868(&uStack_310);
    }
  }
  else {
    FUN_109a8a180(&uStack_310,param_8,0xffffffff);
  }
  puVar9 = &uStack_250;
  FUN_109a89cd4(puVar9,3,0xffffffff,1);
  uStack_110 = (undefined4 *)0x7fffffff80000000;
  uStack_170 = 0;
  bStack_16f = 0;
  uStack_16e = 0;
  uStack_16c = 1;
  FUN_109a84930(auStack_370,&uStack_310,&uStack_110,&uStack_170);
  uStack_110 = (undefined4 *)0x7fffffff80000000;
  uStack_170 = 1;
  bStack_16f = 0;
  uStack_16e = 0;
  uStack_16c = 2;
  FUN_109a84930(&uStack_3d0,&uStack_310,&uStack_110,&uStack_170);
  FUN_109a8f64c(param_9,puVar9,1,5,0xffffffff,0,0);
  if ((*param_9 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_9 + 2);
    uStack_d0 = (ulong)&uStack_110 | 8;
    puStack_108 = (undefined8 *)puVar10[1];
    uStack_110 = (undefined4 *)*puVar10;
    uStack_f8 = puVar10[3];
    pfStack_100 = (float *)puVar10[2];
    uStack_e8 = puVar10[5];
    uStack_f0 = puVar10[4];
    uStack_d8 = puVar10[7];
    uStack_e0 = puVar10[6];
    puStack_c8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if (puVar10[7] != 0) {
      piVar18 = (int *)(puVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = *piVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_c0 = *(undefined8 *)puVar10[9];
      uStack_b8 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_110 = (undefined4 *)((ulong)uStack_110 & 0xffffffff);
      func_0x000109a84868(&uStack_110);
    }
  }
  else {
    FUN_109a8a180(&uStack_110,param_9,0xffffffff);
  }
  pfVar21 = pfStack_100;
  if (uStack_d8 != 0) {
    piVar18 = (int *)(uStack_d8 + 0x14);
    do {
      iVar1 = *piVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar3) {
        *piVar18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_110);
    }
  }
  uStack_d8 = 0;
  uStack_f8 = 0;
  pfStack_100 = (float *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (0 < uStack_110._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_d0 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_110._4_4_);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  if ((((uint)uStack_250 & 7) != 5) || (((uint)uStack_2b0 & 7) != 5)) {
    puVar8 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    uStack_110 = puVar8 + 1;
    puStack_108 = (undefined8 *)0x36;
    *(undefined8 *)(puVar8 + 3) = 0x2029286874706564;
    *(undefined8 *)(puVar8 + 1) = 0x2e73746e696f706f;
    *(undefined1 *)((long)puVar8 + 0x3a) = 0;
    *(undefined8 *)(puVar8 + 7) = 0x6f70692026262046;
    *(undefined8 *)(puVar8 + 5) = 0x32335f5643203d3d;
    *(undefined8 *)(puVar8 + 0xb) = 0x203d3d2029286874;
    *(undefined8 *)(puVar8 + 9) = 0x7065642e73746e69;
    *(undefined8 *)((long)puVar8 + 0x32) = 0x4632335f5643203d;
    FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f56d0ce,&UNK_10f56cd39,0xee);
    goto LAB_109419a88;
  }
  uStack_430 = 0x42ff0000;
  uStack_424 = 0;
  uStack_420 = 0;
  uStack_42c = 0;
  lStack_3f0 = (long)&uStack_42c + 4;
  uStack_414 = 0;
  uStack_410 = 0;
  uStack_41c = 0;
  uStack_418 = 0;
  uStack_404 = 0;
  uStack_40c = 0;
  uStack_408 = 0;
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3fc = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_110._0_4_ = 0x2010000;
  pfStack_100 = (float *)0x0;
  puVar5 = auStack_370;
  puStack_3e8 = &uStack_3e0;
  puStack_108 = (undefined8 *)&uStack_430;
  FUN_109a41858(0x3ff0000000000000,0,puVar5,&uStack_110,6);
  dStack_440 = 0.0;
  dStack_458 = 0.0;
  dStack_460 = 0.0;
  dStack_448 = 0.0;
  dStack_450 = 0.0;
  dStack_478 = 0.0;
  dStack_480 = 0.0;
  dStack_468 = 0.0;
  dStack_470 = 0.0;
  pfStack_100 = (float *)0x0;
  uStack_110._0_4_ = 0x1010000;
  uStack_170 = 6;
  bStack_16f = 0;
  uStack_16e = 0xc202;
  uStack_168 = &dStack_480;
  uStack_160 = 3;
  uStack_15c = 3;
  puStack_108 = (undefined8 *)&uStack_430;
  FUN_109a91d90();
  puVar6 = &uStack_110;
  FUN_109b8d8fc(puVar6,&uStack_170,puVar5);
  auStack_4e0._0_4_ = 0x42ff0000;
  puStack_508 = (undefined8 *)auStack_4e0;
  puStack_4a0 = auStack_4d8;
  uStack_4d4 = 0;
  uStack_4d0 = 0;
  stack0xfffffffffffffb24 = 0;
  uStack_4c4 = 0;
  uStack_4c0 = 0;
  uStack_4cc = 0;
  uStack_4c8 = 0;
  uStack_4b4 = 0;
  uStack_4bc = 0;
  uStack_4b8 = 0;
  lStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_4ac = 0;
  uStack_490 = 0;
  uStack_488 = 0;
  puStack_498 = &uStack_490;
  if (*(char *)(param_5 + 0x1f0) == '\x01') {
    uStack_4e8 = 0;
    auStack_4f8[0] = 0x1010000;
    puStack_4f0 = &uStack_3d0;
    uStack_500 = 0;
    auStack_510[0] = 0x1010000;
    auStack_528[0] = 0x2010000;
    uStack_518 = 0;
    uStack_d0 = (ulong)&uStack_110 | 8;
    puStack_108 = puStack_248;
    uStack_110 = uStack_250;
    uStack_f8 = uStack_238;
    pfStack_100 = (float *)lStack_240;
    uStack_e8 = uStack_228;
    uStack_f0 = uStack_230;
    uStack_d8 = lStack_218;
    uStack_e0 = uStack_220;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if (lStack_218 != 0) {
      piVar18 = (int *)(lStack_218 + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = *piVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_520 = puStack_508;
    puStack_508 = (undefined8 *)(param_5 + 8);
    puStack_c8 = &uStack_c0;
    if (uStack_250._4_4_ < 3) {
      uStack_c0 = *puStack_208;
      uStack_b8 = puStack_208[1];
    }
    else {
      uStack_110 = (undefined4 *)((ulong)uStack_250 & 0xffffffff);
      func_0x000109a84868(&uStack_110,&uStack_250);
    }
    puVar6 = &uStack_110;
    FUN_109a89cd4(puVar6,3,0xffffffff,1);
    if (((int)puVar6 < 0) || (((uint)uStack_110 & 7) != 5)) {
      puVar7 = (undefined4 *)0x34;
      func_0x000107c2ae8c();
      *puVar7 = 1;
      puVar8 = puVar7 + 1;
      uStack_170 = SUB81(puVar8,0);
      bStack_16f = (byte)((ulong)puVar8 >> 8);
      uStack_16e = (undefined2)((ulong)puVar8 >> 0x10);
      uStack_16c = (uint)((ulong)puVar8 >> 0x20);
      uStack_168._0_4_ = 0x2f;
      uStack_168._4_4_ = 0;
      *(undefined1 *)((long)puVar7 + 0x33) = 0;
      *(undefined8 *)(puVar7 + 3) = 0x626f202626203020;
      *(undefined8 *)(puVar7 + 1) = 0x3d3e20746e756f63;
      *(undefined8 *)(puVar7 + 7) = 0x65642e74614d7374;
      *(undefined8 *)(puVar7 + 5) = 0x6e696f507463656a;
      *(undefined8 *)((long)puVar7 + 0x2b) = 0x4632335f5643203d;
      *(undefined8 *)((long)puVar7 + 0x23) = 0x3d20292868747065;
      FUN_109ac3188(0xffffff29,&uStack_170,&UNK_10f56cdde,&UNK_10f56cd39,0x5c);
LAB_109419a88:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109419a8c);
      (*pcVar4)();
    }
    uStack_170 = 0;
    bStack_16f = 0;
    uStack_16e = 0x42ff;
    piStack_130 = (int *)&uStack_168;
    uStack_168._4_4_ = 0;
    uStack_160 = 0;
    uStack_16c = 0;
    uStack_168._0_4_ = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_144 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    alStack_120[1] = 0;
    alStack_120[0] = 0;
    plStack_128 = alStack_120;
    if ((auStack_4f8[0] & 0x1f0000) == 0x10000) {
      uStack_190 = (ulong)&uStack_1d0 | 8;
      puStack_1c8 = (undefined8 *)puStack_4f0[1];
      uStack_1d0 = (undefined4 *)*puStack_4f0;
      uStack_1b8 = puStack_4f0[3];
      lStack_1c0 = puStack_4f0[2];
      uStack_1a8 = puStack_4f0[5];
      dStack_1b0 = (double)puStack_4f0[4];
      lStack_198 = puStack_4f0[7];
      dStack_1a0 = (double)puStack_4f0[6];
      puStack_188 = &uStack_180;
      uStack_178 = 0;
      uStack_180 = 0;
      if (puStack_4f0[7] != 0) {
        piVar18 = (int *)(puStack_4f0[7] + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar3) {
            *piVar18 = *piVar18 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(int *)((long)puStack_4f0 + 4) < 3) {
        uStack_180 = *(undefined8 *)puStack_4f0[9];
        uStack_178 = ((undefined8 *)puStack_4f0[9])[1];
      }
      else {
        uStack_1d0 = (undefined4 *)((ulong)uStack_1d0 & 0xffffffff);
        func_0x000109a84868(&uStack_1d0);
      }
    }
    else {
      FUN_109a8a180(&uStack_1d0,auStack_4f8,0xffffffff);
    }
    auStack_1e8[0] = 0x2010000;
    puStack_1e0 = &uStack_170;
    uStack_1d8 = 0;
    dVar23 = 0.0;
    FUN_109a41858(0x3ff0000000000000,&uStack_1d0,auStack_1e8,6);
    if (lStack_198 != 0) {
      piVar18 = (int *)(lStack_198 + 0x14);
      do {
        iVar1 = *piVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_1d0);
      }
    }
    lStack_198 = 0;
    dVar22 = 0.0;
    uStack_1b8 = 0;
    lStack_1c0 = 0;
    uStack_1a8 = 0;
    dStack_1b0 = 0.0;
    if (0 < uStack_1d0._4_4_) {
      lVar11 = 0;
      do {
        *(undefined4 *)(uStack_190 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < uStack_1d0._4_4_);
    }
    if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
      _free(puStack_188[-1]);
    }
    uVar12 = (ulong)uStack_16c;
    if ((int)uStack_16c < 3) {
      uVar15 = (long)uStack_168._4_4_ * (long)(int)uStack_168;
    }
    else {
      uVar15 = 1;
      piVar18 = piStack_130;
      do {
        uVar15 = uVar15 * (long)*piVar18;
        uVar12 = uVar12 - 1;
        piVar18 = piVar18 + 1;
      } while (uVar12 != 0);
    }
    if (uVar15 < 3) {
      puVar8 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar8 = 1;
      uStack_1d0 = puVar8 + 1;
      puStack_1c8 = (undefined8 *)0x14;
      *(undefined1 *)(puVar8 + 6) = 0;
      puVar8[5] = 0x33203d3e;
      *(undefined8 *)(puVar8 + 3) = 0x2029286c61746f74;
      *(undefined8 *)(puVar8 + 1) = 0x2e74614d63657674;
      FUN_109ac3188(0xffffff29,&uStack_1d0,&UNK_10f56cdde,&UNK_10f56cd39,0x62);
      goto LAB_109419a88;
    }
    if ((bStack_16f >> 6 & 1) == 0) {
      pdVar13 = (double *)CONCAT44(uStack_15c,uStack_160);
      dVar25 = *pdVar13;
      if (*piStack_130 == 1) goto LAB_109419020;
      if (piStack_130[1] == 1) {
        pdVar16 = (double *)((long)pdVar13 + *plStack_128);
        pdVar13 = (double *)((long)pdVar13 + *plStack_128 * 2);
      }
      else {
        iVar1 = uStack_168._4_4_;
        if (2 < uStack_168._4_4_ + 1U) {
          iVar1 = 0;
        }
        pdVar16 = (double *)
                  ((long)pdVar13 +
                  (long)(1 - iVar1 * uStack_168._4_4_) * 8 + *plStack_128 * (long)iVar1);
        iVar1 = 0;
        if (uStack_168._4_4_ != 0) {
          iVar1 = 2 / uStack_168._4_4_;
        }
        pdVar13 = (double *)
                  ((long)pdVar13 +
                  (long)(2 - iVar1 * uStack_168._4_4_) * 8 + *plStack_128 * (long)iVar1);
      }
    }
    else {
      dVar25 = *(double *)CONCAT44(uStack_15c,uStack_160);
LAB_109419020:
      pdVar16 = (double *)(CONCAT44(uStack_15c,uStack_160) + 8);
      pdVar13 = (double *)(CONCAT44(uStack_15c,uStack_160) + 0x10);
    }
    dVar26 = *pdVar16;
    dVar27 = *pdVar13;
    if ((auStack_510[0] & 0x1f0000) == 0x10000) {
      uStack_190 = (ulong)&uStack_1d0 | 8;
      puStack_1c8 = (undefined8 *)puStack_508[1];
      uStack_1d0 = (undefined4 *)*puStack_508;
      uStack_1b8 = puStack_508[3];
      lStack_1c0 = puStack_508[2];
      uStack_1a8 = puStack_508[5];
      dVar22 = (double)puStack_508[4];
      lStack_198 = puStack_508[7];
      dVar23 = (double)puStack_508[6];
      puStack_188 = &uStack_180;
      uStack_178 = 0;
      uStack_180 = 0;
      if (puStack_508[7] != 0) {
        piVar18 = (int *)(puStack_508[7] + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar3) {
            *piVar18 = *piVar18 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      dStack_1b0 = dVar22;
      dStack_1a0 = dVar23;
      if (*(int *)((long)puStack_508 + 4) < 3) {
        uStack_180 = *(undefined8 *)puStack_508[9];
        uStack_178 = ((undefined8 *)puStack_508[9])[1];
      }
      else {
        uStack_1d0 = (undefined4 *)((ulong)uStack_1d0 & 0xffffffff);
        func_0x000109a84868(&uStack_1d0);
      }
    }
    else {
      FUN_109a8a180(&uStack_1d0,auStack_510,0xffffffff);
    }
    FUN_109414724(&uStack_1d0);
    if (lStack_198 != 0) {
      piVar18 = (int *)(lStack_198 + 0x14);
      do {
        iVar1 = *piVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_1d0);
      }
    }
    lStack_198 = 0;
    uStack_1b8 = 0;
    lStack_1c0 = 0;
    uStack_1a8 = 0;
    dStack_1b0 = 0.0;
    if (0 < uStack_1d0._4_4_) {
      lVar11 = 0;
      do {
        *(undefined4 *)(uStack_190 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < uStack_1d0._4_4_);
    }
    if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
      _free(puStack_188[-1]);
    }
    FUN_109a8f64c(auStack_528,puVar6,1,0xd,0xffffffff,0,0);
    if ((auStack_528[0] & 0x1f0000) == 0x10000) {
      uStack_190 = (ulong)&uStack_1d0 | 8;
      puStack_1c8 = (undefined8 *)puStack_520[1];
      uStack_1d0 = (undefined4 *)*puStack_520;
      uStack_1b8 = puStack_520[3];
      lStack_1c0 = puStack_520[2];
      uStack_1a8 = puStack_520[5];
      dStack_1b0 = (double)puStack_520[4];
      lStack_198 = puStack_520[7];
      dStack_1a0 = (double)puStack_520[6];
      puStack_188 = &uStack_180;
      uStack_178 = 0;
      uStack_180 = 0;
      if (puStack_520[7] != 0) {
        piVar18 = (int *)(puStack_520[7] + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar3) {
            *piVar18 = *piVar18 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(int *)((long)puStack_520 + 4) < 3) {
        uStack_180 = *(undefined8 *)puStack_520[9];
        uStack_178 = ((undefined8 *)puStack_520[9])[1];
      }
      else {
        uStack_1d0 = (undefined4 *)((ulong)uStack_1d0 & 0xffffffff);
        func_0x000109a84868(&uStack_1d0);
      }
    }
    else {
      FUN_109a8a180(&uStack_1d0,auStack_528,0xffffffff);
    }
    lVar11 = lStack_1c0;
    if (lStack_198 != 0) {
      piVar18 = (int *)(lStack_198 + 0x14);
      do {
        iVar1 = *piVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_1d0);
      }
    }
    lStack_198 = 0;
    uStack_1b8 = 0;
    lStack_1c0 = 0;
    uStack_1a8 = 0;
    dStack_1b0 = 0.0;
    if (0 < uStack_1d0._4_4_) {
      lVar14 = 0;
      do {
        *(undefined4 *)(uStack_190 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_1d0._4_4_);
    }
    if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
      _free(puStack_188[-1]);
    }
    if ((int)puVar6 != 0) {
      uVar12 = (ulong)puVar6 & 0xffffffff;
      pfVar17 = (float *)(lVar11 + 4);
      pfVar19 = (float *)((long)pfStack_100 + 8);
      do {
        dVar28 = (double)pfVar19[-2];
        dVar30 = (double)pfVar19[-1];
        dVar32 = (double)*pfVar19;
        dVar29 = dVar27 + dStack_448 * dVar30 + dVar28 * dStack_450 + dVar32 * dStack_440;
        dVar31 = 1.0 / dVar29;
        if (dVar29 == 0.0) {
          dVar31 = 1.0;
        }
        pfVar17[-1] = (float)(param_3 +
                             (dVar25 + dStack_478 * dVar30 + dVar28 * dStack_480 +
                                       dVar32 * dStack_470) * dVar31 * dVar22);
        *pfVar17 = (float)(param_4 +
                          (dVar26 + dStack_460 * dVar30 + dVar28 * dStack_468 + dVar32 * dStack_458)
                          * dVar31 * dVar23);
        pfVar17 = pfVar17 + 2;
        uVar12 = uVar12 - 1;
        pfVar19 = pfVar19 + 3;
      } while (uVar12 != 0);
    }
    if (lStack_138 != 0) {
      piVar18 = (int *)(lStack_138 + 0x14);
      do {
        iVar1 = *piVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_170);
      }
    }
    lStack_138 = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    if (0 < (int)uStack_16c) {
      lVar11 = 0;
      do {
        piStack_130[lVar11] = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)uStack_16c);
    }
    if (plStack_128 != alStack_120 && plStack_128 != (long *)0x0) {
      _free(plStack_128[-1]);
    }
    if (uStack_d8 != 0) {
      piVar18 = (int *)(uStack_d8 + 0x14);
      do {
        iVar1 = *piVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_110);
      }
    }
    uStack_d8 = 0;
    uStack_f8 = 0;
    pfStack_100 = (float *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (0 < uStack_110._4_4_) {
      lVar11 = 0;
      do {
        *(undefined4 *)(uStack_d0 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < uStack_110._4_4_);
    }
    if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
      _free(puStack_c8[-1]);
    }
  }
  else {
    pfStack_100 = (float *)0x0;
    uStack_110 = (undefined4 *)CONCAT44(uStack_110._4_4_,0x1010000);
    puStack_108 = &uStack_250;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_170 = 0;
    bStack_16f = 0;
    uStack_16e = 0x101;
    uStack_168 = (double *)auStack_370;
    lStack_1c0 = 0;
    uStack_1d0 = (undefined4 *)CONCAT44(uStack_1d0._4_4_,0x1010000);
    puStack_1c8 = &uStack_3d0;
    puStack_1e0 = (undefined1 *)(param_5 + 8);
    uStack_1d8 = 0;
    auStack_1e8[0] = 0x1010000;
    puStack_4f0 = (undefined8 *)(param_5 + 0x68);
    uStack_4e8 = 0;
    auStack_4f8[0] = 0x1010000;
    auStack_510[0] = 0x2010000;
    uStack_500 = 0;
    FUN_109a91d90();
    FUN_109b8de28(0,&uStack_110,&uStack_170,&uStack_1d0,auStack_1e8,auStack_4f8,auStack_510,puVar6);
  }
  if (*(long *)(param_5 + 0x1a0) != 0) {
    uVar12 = (ulong)*(uint *)(param_5 + 0x194);
    if ((int)*(uint *)(param_5 + 0x194) < 3) {
      lVar11 = (long)*(int *)(param_5 + 0x19c) * (long)*(int *)(param_5 + 0x198);
    }
    else {
      lVar11 = 1;
      piVar18 = *(int **)(param_5 + 0x1d0);
      do {
        lVar11 = lVar11 * *piVar18;
        uVar12 = uVar12 - 1;
        piVar18 = piVar18 + 1;
      } while (uVar12 != 0);
    }
    if (lVar11 != 0) {
      if (0 < (int)puVar9) {
        uVar12 = (ulong)puVar9 & 0xffffffff;
        pfVar17 = (float *)(*(long *)(param_5 + 0x1a0) + 8);
        pfVar19 = (float *)(CONCAT44(uStack_4cc,uStack_4d0) + 4);
        pfVar20 = (float *)(uStack_2a0 + 4);
        do {
          fVar24 = 100000.0;
          if (dStack_448 * (double)pfVar17[-1] + (double)pfVar17[-2] * dStack_450 +
              (double)*pfVar17 * dStack_440 < 0.0) {
            fVar24 = (*pfVar20 - *pfVar19) * (*pfVar20 - *pfVar19) +
                     (pfVar20[-1] - pfVar19[-1]) * (pfVar20[-1] - pfVar19[-1]);
          }
          pfVar17 = pfVar17 + 3;
          *pfVar21 = fVar24;
          pfVar19 = pfVar19 + 2;
          pfVar20 = pfVar20 + 2;
          uVar12 = uVar12 - 1;
          pfVar21 = pfVar21 + 1;
        } while (uVar12 != 0);
      }
      goto LAB_10941957c;
    }
  }
  if (0 < (int)puVar9) {
    uVar12 = (ulong)puVar9 & 0xffffffff;
    pfVar17 = (float *)(CONCAT44(uStack_4cc,uStack_4d0) + 4);
    pfVar19 = (float *)(uStack_2a0 + 4);
    do {
      *pfVar21 = (*pfVar19 - *pfVar17) * (*pfVar19 - *pfVar17) +
                 (pfVar19[-1] - pfVar17[-1]) * (pfVar19[-1] - pfVar17[-1]);
      pfVar17 = pfVar17 + 2;
      pfVar19 = pfVar19 + 2;
      uVar12 = uVar12 - 1;
      pfVar21 = pfVar21 + 1;
    } while (uVar12 != 0);
  }
LAB_10941957c:
  if (lStack_4a8 != 0) {
    piVar18 = (int *)(lStack_4a8 + 0x14);
    do {
      iVar1 = *piVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar3) {
        *piVar18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(auStack_4e0);
    }
  }
  lStack_4a8 = 0;
  uStack_4c8 = 0;
  uStack_4c4 = 0;
  uStack_4d0 = 0;
  uStack_4cc = 0;
  uStack_4b8 = 0;
  uStack_4b4 = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  if (0 < (int)auStack_4e0._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(puStack_4a0 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)auStack_4e0._4_4_);
  }
  if (puStack_498 != &uStack_490 && puStack_498 != (undefined8 *)0x0) {
    _free(puStack_498[-1]);
  }
  if (lStack_3f8 != 0) {
    piVar18 = (int *)(lStack_3f8 + 0x14);
    do {
      iVar1 = *piVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar3) {
        *piVar18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_430);
    }
  }
  lStack_3f8 = 0;
  uStack_418 = 0;
  uStack_414 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uStack_408 = 0;
  uStack_404 = 0;
  uStack_410 = 0;
  uStack_40c = 0;
  if (0 < (int)uStack_42c) {
    lVar11 = 0;
    do {
      *(undefined4 *)(lStack_3f0 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_42c);
  }
  if (puStack_3e8 != &uStack_3e0 && puStack_3e8 != (undefined8 *)0x0) {
    _free(puStack_3e8[-1]);
  }
  if (lStack_398 != 0) {
    piVar18 = (int *)(lStack_398 + 0x14);
    do {
      iVar1 = *piVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar3) {
        *piVar18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_3d0);
    }
  }
  lStack_398 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  if (0 < uStack_3d0._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(lStack_390 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_3d0._4_4_);
  }
  if (puStack_388 != auStack_380 && puStack_388 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_388 + -8));
  }
  if (lStack_338 != 0) {
    piVar18 = (int *)(lStack_338 + 0x14);
    do {
      iVar1 = *piVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar3) {
        *piVar18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(auStack_370);
    }
  }
  lStack_338 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  if (0 < iStack_36c) {
    lVar11 = 0;
    do {
      *(undefined4 *)(lStack_330 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iStack_36c);
  }
  if (puStack_328 != auStack_320 && puStack_328 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_328 + -8));
  }
  if (uStack_2d8 != 0) {
    piVar18 = (int *)(uStack_2d8 + 0x14);
    do {
      iVar1 = *piVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar3) {
        *piVar18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_310);
    }
  }
  uStack_2d8 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  if (0 < uStack_310._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_2d0 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_310._4_4_);
  }
  if (puStack_2c8 != &uStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
    _free(puStack_2c8[-1]);
  }
  if (uStack_278 != 0) {
    piVar18 = (int *)(uStack_278 + 0x14);
    do {
      iVar1 = *piVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar3) {
        *piVar18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  uStack_278 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  if (0 < uStack_2b0._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_270 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_2b0._4_4_);
  }
  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
    _free(puStack_268[-1]);
  }
  if (lStack_218 != 0) {
    piVar18 = (int *)(lStack_218 + 0x14);
    do {
      iVar1 = *piVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar3) {
        *piVar18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  lStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  if (0 < uStack_250._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_210 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_250._4_4_);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  return;
}



/* Entry: 109419c08; end: 109419c0f;  */

undefined8 FUN_109419c08(void)

{
  return 1;
}



/* Entry: 109419c10; end: 109419eaf;  */

undefined8 * FUN_109419c10(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af5f00;
  if (param_1[0x39] != 0) {
    piVar1 = (int *)(param_1[0x39] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x32);
    }
  }
  param_1[0x39] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  if (0 < *(int *)((long)param_1 + 0x194)) {
    lVar5 = 0;
    lVar7 = param_1[0x3a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x194));
  }
  puVar6 = (undefined8 *)param_1[0x3b];
  if (puVar6 != param_1 + 0x3c && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x2d] != 0) {
    piVar1 = (int *)(param_1[0x2d] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x26);
    }
  }
  param_1[0x2d] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  if (0 < *(int *)((long)param_1 + 0x134)) {
    lVar5 = 0;
    lVar7 = param_1[0x2e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x134));
  }
  puVar6 = (undefined8 *)param_1[0x2f];
  if (puVar6 != param_1 + 0x30 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x21] != 0) {
    piVar1 = (int *)(param_1[0x21] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1a);
    }
  }
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  if (0 < *(int *)((long)param_1 + 0xd4)) {
    lVar5 = 0;
    lVar7 = param_1[0x22];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xd4));
  }
  puVar6 = (undefined8 *)param_1[0x23];
  if (puVar6 != param_1 + 0x24 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109419eb0; end: 10941a0d7;  */

undefined4
FUN_109419eb0(double param_1,double param_2,double param_3,double param_4,double *param_5,
             double *param_6,double *param_7)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_1 != 0.0) {
    param_1 = 1.0 / param_1;
    param_2 = param_1 * param_2;
    dVar2 = (param_1 * param_3 * 3.0 - param_2 * param_2) / 9.0;
    param_3 = (param_1 * param_4 * -27.0 + param_1 * param_3 * param_2 * 9.0 +
              param_2 * param_2 * param_2 * -2.0) / 54.0;
    param_2 = param_2 * 0.3333333333333333;
    if (dVar2 == 0.0) {
      if (param_3 == 0.0) {
        param_2 = -param_2;
        *param_7 = param_2;
        *param_6 = param_2;
        *param_5 = param_2;
        return 3;
      }
      param_3 = param_3 + param_3;
      _pow();
    }
    else {
      dVar3 = dVar2 * dVar2 * dVar2;
      dVar5 = dVar3 + param_3 * param_3;
      if (dVar5 <= 0.0) {
        param_3 = param_3 / SQRT(-dVar3);
        _acos();
        dVar3 = SQRT(-dVar2) + SQRT(-dVar2);
        dVar2 = param_3 / 3.0;
        _cos();
        *param_5 = dVar3 * dVar2 - param_2;
        dVar2 = (param_3 + 6.283185307179586) / 3.0;
        _cos();
        *param_6 = dVar3 * dVar2 - param_2;
        dVar2 = (param_3 + 12.566370614359172) / 3.0;
        _cos();
        *param_7 = dVar3 * dVar2 - param_2;
        return 3;
      }
      dVar3 = ABS(param_3) + SQRT(dVar5);
      _pow();
      dVar5 = 0.0;
      dVar6 = -1.0;
      if (0.0 <= param_3) {
        dVar6 = 0.0;
      }
      dVar4 = 1.0;
      if (param_3 <= 0.0) {
        dVar4 = dVar6;
      }
      dVar4 = dVar4 * dVar3;
      if (dVar4 != 0.0) {
        dVar5 = -dVar2 / dVar4;
      }
      param_3 = dVar4 + dVar5;
    }
    param_3 = param_3 - param_2;
LAB_10941a044:
    *param_5 = param_3;
    return 1;
  }
  if (param_2 == 0.0) {
    if (param_3 != 0.0) {
      param_3 = -param_4 / param_3;
      goto LAB_10941a044;
    }
  }
  else {
    *param_7 = 0.0;
    dVar2 = param_2 * -4.0 * param_4 + param_3 * param_3;
    if (0.0 <= dVar2) {
      param_2 = 0.5 / param_2;
      dVar5 = param_2 * (-param_3 - SQRT(dVar2));
      dVar3 = param_2 * (SQRT(dVar2) - param_3);
      if (dVar2 == 0.0) {
        dVar5 = -(param_3 * param_2);
        dVar3 = -(param_3 * param_2);
      }
      uVar1 = 2;
      if (dVar2 == 0.0) {
        uVar1 = 1;
      }
      *param_5 = dVar3;
      *param_6 = dVar5;
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 10941a0d8; end: 10941a2ff;  */

double * FUN_10941a0d8(double param_1,double param_2,double param_3,double param_4,double param_5,
                      double *param_6,double *param_7,double *param_8,double *param_9)

{
  double *pdVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  double dStack_68;
  
  if (param_1 == 0.0) {
    *param_9 = 0.0;
    if (param_2 != 0.0) {
      param_2 = 1.0 / param_2;
      param_3 = param_2 * param_3;
      dVar3 = (param_2 * param_4 * 3.0 - param_3 * param_3) / 9.0;
      param_4 = (param_2 * param_5 * -27.0 + param_2 * param_4 * param_3 * 9.0 +
                param_3 * param_3 * param_3 * -2.0) / 54.0;
      param_3 = param_3 * 0.3333333333333333;
      if (dVar3 == 0.0) {
        if (param_4 == 0.0) {
          param_3 = -param_3;
          *param_8 = param_3;
          *param_7 = param_3;
          *param_6 = param_3;
          return (double *)0x3;
        }
        param_4 = param_4 + param_4;
        _pow();
      }
      else {
        dVar4 = dVar3 * dVar3 * dVar3;
        dVar6 = dVar4 + param_4 * param_4;
        if (dVar6 <= 0.0) {
          param_4 = param_4 / SQRT(-dVar4);
          _acos();
          dVar4 = SQRT(-dVar3) + SQRT(-dVar3);
          dVar3 = param_4 / 3.0;
          _cos();
          *param_6 = dVar4 * dVar3 - param_3;
          dVar3 = (param_4 + 6.283185307179586) / 3.0;
          _cos();
          *param_7 = dVar4 * dVar3 - param_3;
          dVar3 = (param_4 + 12.566370614359172) / 3.0;
          _cos();
          *param_8 = dVar4 * dVar3 - param_3;
          return (double *)0x3;
        }
        dVar4 = ABS(param_4) + SQRT(dVar6);
        _pow();
        dVar6 = 0.0;
        dVar7 = -1.0;
        if (0.0 <= param_4) {
          dVar7 = 0.0;
        }
        dVar5 = 1.0;
        if (param_4 <= 0.0) {
          dVar5 = dVar7;
        }
        dVar5 = dVar5 * dVar4;
        if (dVar5 != 0.0) {
          dVar6 = -dVar3 / dVar5;
        }
        param_4 = dVar5 + dVar6;
      }
      param_4 = param_4 - param_3;
LAB_10941a044:
      *param_6 = param_4;
      return (double *)0x1;
    }
    if (param_3 == 0.0) {
      if (param_4 != 0.0) {
        param_4 = -param_5 / param_4;
        goto LAB_10941a044;
      }
    }
    else {
      *param_8 = 0.0;
      dVar3 = param_3 * -4.0 * param_5 + param_4 * param_4;
      if (0.0 <= dVar3) {
        param_3 = 0.5 / param_3;
        dVar6 = param_3 * (-param_4 - SQRT(dVar3));
        dVar4 = param_3 * (SQRT(dVar3) - param_4);
        if (dVar3 == 0.0) {
          dVar6 = -(param_4 * param_3);
          dVar4 = -(param_4 * param_3);
        }
        uVar2 = 2;
        if (dVar3 == 0.0) {
          uVar2 = 1;
        }
        *param_6 = dVar4;
        *param_7 = dVar6;
        return (double *)(ulong)uVar2;
      }
    }
    return (double *)0x0;
  }
  param_1 = 1.0 / param_1;
  param_2 = param_1 * param_2;
  dVar4 = param_1 * param_3;
  param_4 = param_1 * param_4;
  param_5 = param_1 * param_5;
  dVar3 = param_2 * param_2;
  pdVar1 = &dStack_68;
  FUN_109419eb0(0x3ff0000000000000,-(param_1 * param_3),param_5 * -4.0 + param_2 * param_4,
                (-(param_4 * param_4) + param_5 * dVar4 * 4.0) - param_5 * dVar3,pdVar1,auStack_70,
                auStack_78);
  if ((int)pdVar1 == 0) {
    return pdVar1;
  }
  dVar6 = -(param_1 * param_3) + dVar3 * 0.25 + dStack_68;
  if (0.0 <= dVar6) {
    dVar7 = SQRT(dVar6);
    if (1e-11 <= dVar7) {
      dVar6 = (dVar4 * -2.0 + dVar3 * 0.75) - dVar6;
      dVar3 = ((param_4 * -8.0 + param_2 * dVar4 * 4.0) - param_2 * dVar3) * (1.0 / dVar7) * 0.25;
      dVar4 = dVar6 + dVar3;
      dVar6 = dVar6 - dVar3;
    }
    else {
      dVar6 = param_5 * -4.0 + dStack_68 * dStack_68;
      if (dVar6 < 0.0) goto LAB_10941a1c4;
      dVar6 = SQRT(dVar6);
      dVar4 = dVar4 * -2.0 + dVar3 * 0.75 + dVar6 * 2.0;
      dVar6 = dVar4 + dVar6 * -4.0;
    }
    if (0.0 <= dVar4) {
      dVar3 = (dVar7 * 0.5 + SQRT(dVar4) * 0.5) - param_2 * 0.25;
      *param_6 = dVar3;
      *param_7 = dVar3 - SQRT(dVar4);
      if (dVar6 < 0.0) {
        return (double *)0x2;
      }
      pdVar1 = (double *)0x4;
    }
    else {
      if (dVar6 < 0.0) goto LAB_10941a1c4;
      pdVar1 = (double *)0x2;
      param_9 = param_7;
      param_8 = param_6;
    }
    dVar3 = (SQRT(dVar6) * 0.5 - dVar7 * 0.5) - param_2 * 0.25;
    *param_8 = dVar3;
    *param_9 = dVar3 - SQRT(dVar6);
  }
  else {
LAB_10941a1c4:
    pdVar1 = (double *)0x0;
  }
  return pdVar1;
}



/* Entry: 10941a300; end: 10941d2db;  */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_10941a300(undefined8 param_1,double param_2,double param_3,uint *param_4,ulong param_5,
             int param_6,int param_7,uint param_8,int param_9,int param_10,int param_11,
             undefined1 param_12,undefined4 param_13,uint *param_14,uint *param_15,uint *param_16,
             uint *param_17,char param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,uint *param_22,ulong param_23,int *param_24,double *param_25)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 *puVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  undefined4 *puVar14;
  long *******ppppppplVar15;
  undefined8 *puVar16;
  uint *puVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined4 *puVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  long *******ppppppplVar26;
  undefined4 *puVar27;
  int iVar28;
  undefined4 *puVar29;
  ulong uVar30;
  ulong uVar31;
  undefined4 *puVar32;
  ulong uVar33;
  undefined8 uVar34;
  uint uVar35;
  int *piVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  undefined8 *puVar42;
  ulong uVar43;
  int iVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  float fVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dStack_1150;
  uint uStack_1100;
  uint uStack_10fc;
  int iStack_10dc;
  ulong uStack_10d0;
  double dStack_10c0;
  uint uStack_1064;
  uint uStack_1034;
  undefined8 uStack_1010;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  long lStack_fd8;
  long lStack_fd0;
  undefined1 *puStack_fc8;
  undefined1 auStack_fc0 [16];
  undefined8 uStack_fb0;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  long lStack_f78;
  long lStack_f70;
  undefined1 *puStack_f68;
  undefined1 auStack_f60 [16];
  undefined1 auStack_f50 [24];
  undefined8 uStack_f38;
  uint *puStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  long lStack_f00;
  long lStack_ef8;
  undefined1 *puStack_ef0;
  undefined1 auStack_ee8 [16];
  undefined4 uStack_ed8;
  int iStack_ed4;
  uint *puStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  long lStack_ea0;
  long lStack_e98;
  undefined1 *puStack_e90;
  undefined1 auStack_e88 [272];
  undefined8 uStack_d78;
  uint *puStack_d70;
  double *pdStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  long lStack_d40;
  uint **ppuStack_d38;
  long *plStack_d30;
  long alStack_d28 [2];
  uint uStack_d18;
  int iStack_d14;
  uint *puStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  long lStack_ce0;
  long lStack_cd8;
  undefined1 *puStack_cd0;
  undefined1 auStack_cc8 [16];
  uint *puStack_cb8;
  uint *puStack_cb0;
  undefined8 uStack_ca8;
  uint uStack_ca0;
  uint uStack_c9c;
  int iStack_c98;
  int iStack_c94;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined4 uStack_c88;
  undefined4 uStack_c84;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined4 uStack_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  long lStack_c68;
  int *piStack_c60;
  undefined8 *puStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  uint uStack_c40;
  uint uStack_c3c;
  int iStack_c38;
  int iStack_c34;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  undefined4 uStack_c28;
  undefined4 uStack_c24;
  undefined4 uStack_c20;
  undefined4 uStack_c1c;
  undefined4 uStack_c18;
  undefined4 uStack_c14;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  long lStack_c08;
  int *piStack_c00;
  undefined8 *puStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  uint uStack_be0;
  undefined8 uStack_bdc;
  int iStack_bd4;
  undefined4 uStack_bd0;
  undefined4 uStack_bcc;
  undefined4 uStack_bc8;
  undefined4 uStack_bc4;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  long lStack_ba8;
  long lStack_ba0;
  undefined8 *puStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  uint uStack_b80;
  undefined8 uStack_b7c;
  int iStack_b74;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined4 uStack_b68;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  long lStack_b48;
  long lStack_b40;
  undefined8 *puStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  uint uStack_b20;
  int iStack_b1c;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  undefined4 uStack_b08;
  undefined4 uStack_b04;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  undefined4 uStack_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  long lStack_ae8;
  ulong uStack_ae0;
  undefined8 *puStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  uint uStack_ac0;
  undefined8 uStack_abc;
  undefined4 uStack_ab4;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined4 uStack_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  long lStack_a88;
  long lStack_a80;
  undefined8 *puStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  uint uStack_a60;
  undefined8 uStack_a5c;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 uStack_a48;
  undefined4 uStack_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  long lStack_a28;
  long lStack_a20;
  undefined8 *puStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  uint uStack_a00;
  undefined8 uStack_9fc;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined4 uStack_9d8;
  undefined4 uStack_9d4;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  long lStack_9c8;
  long lStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined *puStack_9a0;
  undefined8 uStack_998;
  long lStack_990;
  undefined8 uStack_988;
  undefined *puStack_980;
  undefined8 uStack_978;
  long lStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  undefined8 *puStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined8 *puStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  uint uStack_8a0;
  int iStack_89c;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  long lStack_868;
  long lStack_860;
  undefined1 *puStack_858;
  undefined1 auStack_850 [16];
  uint uStack_840;
  int iStack_83c;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long lStack_808;
  long lStack_800;
  undefined1 *puStack_7f8;
  undefined1 auStack_7f0 [16];
  uint uStack_7e0;
  uint uStack_7dc;
  uint uStack_7d4;
  long lStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  long lStack_7a8;
  long lStack_7a0;
  undefined1 *puStack_798;
  undefined1 auStack_790 [16];
  uint uStack_780;
  uint uStack_77c;
  int iStack_774;
  long lStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_748;
  long lStack_740;
  undefined1 *puStack_738;
  undefined1 auStack_730 [16];
  undefined8 uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  undefined8 *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  uint *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  long lStack_618;
  ulong uStack_610;
  undefined8 *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *******ppppppplStack_4e0;
  uint *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  int *piStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_b8;
  
  dVar45 = (double)(*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_14 & 0x1f0000) == 0x10000) {
    puVar18 = *(ulong **)(param_14 + 2);
    uStack_680 = (ulong)&uStack_6c0 | 8;
    uStack_6c0 = *puVar18;
    uStack_6b8 = puVar18[1];
    uStack_6a8 = puVar18[3];
    uStack_6b0 = puVar18[2];
    uStack_6a0 = puVar18[4];
    uStack_698 = puVar18[5];
    uStack_688 = puVar18[7];
    uStack_690 = puVar18[6];
    puStack_678 = &uStack_670;
    uStack_668 = 0;
    uStack_670 = 0;
    if (puVar18[7] != 0) {
      piVar36 = (int *)(puVar18[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar9) {
          *piVar36 = *piVar36 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar18 + 4) < 3) {
      uStack_670 = *(undefined8 *)puVar18[9];
      uStack_668 = ((undefined8 *)puVar18[9])[1];
    }
    else {
      uStack_6c0 = uStack_6c0 & 0xffffffff;
      func_0x000109a84868(&uStack_6c0);
    }
  }
  else {
    FUN_109a8a180(&uStack_6c0,param_14,0xffffffff);
  }
  if ((*param_15 & 0x1f0000) == 0x10000) {
    puVar18 = *(ulong **)(param_15 + 2);
    uStack_6e0 = (ulong)&uStack_720 | 8;
    uStack_720 = *puVar18;
    uStack_718 = puVar18[1];
    uStack_708 = puVar18[3];
    uStack_710 = puVar18[2];
    uStack_700 = puVar18[4];
    uStack_6f8 = puVar18[5];
    uStack_6e8 = puVar18[7];
    uStack_6f0 = puVar18[6];
    puStack_6d8 = &uStack_6d0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    if (puVar18[7] != 0) {
      piVar36 = (int *)(puVar18[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar9) {
          *piVar36 = *piVar36 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar18 + 4) < 3) {
      uStack_6d0 = *(undefined8 *)puVar18[9];
      uStack_6c8 = ((undefined8 *)puVar18[9])[1];
    }
    else {
      uStack_720 = uStack_720 & 0xffffffff;
      func_0x000109a84868(&uStack_720);
    }
  }
  else {
    FUN_109a8a180(&uStack_720,param_15,0xffffffff);
  }
  uStack_1064 = *(uint *)(uStack_680 + 4);
  if ((int)param_8 <= (int)*(uint *)(uStack_680 + 4)) {
    uStack_1064 = param_8;
  }
  uStack_4f0 = (long *******)0x0;
  uStack_4e8 = (uint *)CONCAT44(1,uStack_1064);
  FUN_109a852c8(&uStack_780,&uStack_6c0,&uStack_4f0);
  uStack_4f0 = (long *******)0x0;
  uStack_4e8 = (uint *)CONCAT44(1,uStack_1064);
  FUN_109a852c8(&uStack_7e0,&uStack_720,&uStack_4f0);
  iVar12 = *(int *)(uStack_680 + 4);
  if (param_9 <= *(int *)(uStack_680 + 4)) {
    iVar12 = param_9;
  }
  uStack_4f0 = (long *******)0x0;
  uStack_4e8 = (uint *)CONCAT44(1,iVar12);
  FUN_109a852c8(&uStack_840,&uStack_6c0,&uStack_4f0);
  uStack_4f0 = (long *******)0x0;
  uStack_4e8 = (uint *)CONCAT44(1,iVar12);
  FUN_109a852c8(&uStack_8a0,&uStack_720,&uStack_4f0);
  if ((*param_16 & 0x1f0000) == 0x10000) {
    puVar18 = *(ulong **)(param_16 + 2);
    uStack_8c0 = (ulong)&uStack_900 | 8;
    uStack_900 = *puVar18;
    uStack_8f8 = puVar18[1];
    uStack_8e8 = puVar18[3];
    uStack_8f0 = puVar18[2];
    uStack_8e0 = puVar18[4];
    uStack_8d8 = puVar18[5];
    uStack_8c8 = puVar18[7];
    uStack_8d0 = puVar18[6];
    puStack_8b8 = &uStack_8b0;
    uStack_8a8 = 0;
    uStack_8b0 = 0;
    if (puVar18[7] != 0) {
      piVar36 = (int *)(puVar18[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar9) {
          *piVar36 = *piVar36 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar18 + 4) < 3) {
      uStack_8b0 = *(undefined8 *)puVar18[9];
      uStack_8a8 = ((undefined8 *)puVar18[9])[1];
    }
    else {
      uStack_900 = uStack_900 & 0xffffffff;
      func_0x000109a84868(&uStack_900);
    }
  }
  else {
    FUN_109a8a180(&uStack_900,param_16,0xffffffff);
  }
  if ((*param_17 & 0x1f0000) == 0x10000) {
    puVar18 = *(ulong **)(param_17 + 2);
    uStack_920 = (ulong)&uStack_960 | 8;
    uStack_960 = *puVar18;
    uStack_958 = puVar18[1];
    uStack_948 = puVar18[3];
    uStack_950 = puVar18[2];
    uStack_940 = puVar18[4];
    uStack_938 = puVar18[5];
    uStack_928 = puVar18[7];
    uStack_930 = puVar18[6];
    puStack_918 = &uStack_910;
    uStack_908 = 0;
    uStack_910 = 0;
    if (puVar18[7] != 0) {
      piVar36 = (int *)(puVar18[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar9) {
          *piVar36 = *piVar36 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar18 + 4) < 3) {
      uStack_910 = *(undefined8 *)puVar18[9];
      uStack_908 = ((undefined8 *)puVar18[9])[1];
    }
    else {
      uStack_960 = uStack_960 & 0xffffffff;
      func_0x000109a84868(&uStack_960);
    }
  }
  else {
    FUN_109a8a180(&uStack_960,param_17,0xffffffff);
  }
  puStack_980 = &UNK_10e52b660;
  uStack_978 = 0;
  uStack_968 = 0;
  lStack_970 = 0;
  puStack_9a0 = &UNK_10e52b660;
  uStack_998 = 0;
  uStack_988 = 0;
  lStack_990 = 0;
  uStack_a00 = 0x42ff0000;
  lStack_9c0 = (long)&uStack_9fc + 4;
  uStack_9f4 = 0;
  uStack_9f0 = 0;
  uStack_9fc = 0;
  uStack_9e4 = 0;
  uStack_9e0 = 0;
  uStack_9ec = 0;
  uStack_9e8 = 0;
  uStack_9d4 = 0;
  uStack_9dc = 0;
  uStack_9d8 = 0;
  lStack_9c8 = 0;
  uStack_9d0 = 0;
  uStack_9cc = 0;
  uStack_9a8 = 0;
  uStack_9b0 = 0;
  uStack_a60 = 0x42ff0000;
  lStack_a20 = (long)&uStack_a5c + 4;
  uStack_a54 = 0;
  uStack_a50 = 0;
  uStack_a5c = 0;
  uStack_a44 = 0;
  uStack_a40 = 0;
  uStack_a4c = 0;
  uStack_a48 = 0;
  uStack_a34 = 0;
  uStack_a3c = 0;
  uStack_a38 = 0;
  lStack_a28 = 0;
  uStack_a30 = 0;
  uStack_a2c = 0;
  uStack_a08 = 0;
  uStack_a10 = 0;
  uStack_ac0 = 0x42ff0000;
  lStack_a80 = (long)&uStack_abc + 4;
  uStack_ab4 = 0;
  uStack_ab0 = 0;
  uStack_abc = 0;
  uStack_aa4 = 0;
  uStack_aa0 = 0;
  uStack_aac = 0;
  uStack_aa8 = 0;
  uStack_a94 = 0;
  uStack_a9c = 0;
  uStack_a98 = 0;
  lStack_a88 = 0;
  uStack_a90 = 0;
  uStack_a8c = 0;
  uStack_a68 = 0;
  uStack_a70 = 0;
  uStack_b20 = 0x42ff0000;
  uStack_ae0 = (ulong)&uStack_b20 | 8;
  uStack_b14 = 0;
  uStack_b10 = 0;
  iStack_b1c = 0;
  uStack_b18 = 0;
  uStack_b04 = 0;
  uStack_b00 = 0;
  uStack_b0c = 0;
  uStack_b08 = 0;
  uStack_af4 = 0;
  uStack_afc = 0;
  uStack_af8 = 0;
  lStack_ae8 = 0;
  uStack_af0 = 0;
  uStack_aec = 0;
  uStack_ac8 = 0;
  uStack_ad0 = 0;
  uStack_b80 = 0x42ff0000;
  lStack_b40 = (long)&uStack_b7c + 4;
  iStack_b74 = 0;
  uStack_b70 = 0;
  uStack_b7c = 0;
  uStack_b64 = 0;
  uStack_b60 = 0;
  uStack_b6c = 0;
  uStack_b68 = 0;
  uStack_b54 = 0;
  uStack_b5c = 0;
  uStack_b58 = 0;
  lStack_b48 = 0;
  uStack_b50 = 0;
  uStack_b4c = 0;
  uStack_b28 = 0;
  uStack_b30 = 0;
  uStack_be0 = 0x42ff0000;
  lStack_ba0 = (long)&uStack_bdc + 4;
  iStack_bd4 = 0;
  uStack_bd0 = 0;
  uStack_bdc = 0;
  uStack_bc4 = 0;
  uStack_bc0 = 0;
  uStack_bcc = 0;
  uStack_bc8 = 0;
  uStack_bb4 = 0;
  uStack_bbc = 0;
  uStack_bb8 = 0;
  lStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_bac = 0;
  uVar25 = uStack_780 >> 3 & 0x1ff;
  iVar39 = iStack_774;
  if (uVar25 != 0) {
    iVar39 = uVar25 + 1;
  }
  uStack_b88 = 0;
  uStack_b90 = 0;
  puVar13 = &uStack_780;
  puStack_b98 = &uStack_b90;
  puStack_b38 = &uStack_b30;
  puStack_ad8 = &uStack_ad0;
  puStack_a78 = &uStack_a70;
  puStack_a18 = &uStack_a10;
  puStack_9b8 = &uStack_9b0;
  FUN_109a89cd4(puVar13,iVar39,0xffffffff,1);
  uStack_10d0 = 0xffffffff;
  if (param_23 != 0) {
    uStack_10d0 = param_23;
  }
  if ((param_2 <= 0.0) || (1.0 <= param_2)) {
    puVar14 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar14 = 1;
    uStack_4f0 = (long *******)(puVar14 + 1);
    uStack_4e8 = (uint *)0x20;
    *(undefined1 *)(puVar14 + 9) = 0;
    *(undefined8 *)(puVar14 + 3) = 0x262030203e206563;
    *(undefined8 *)(puVar14 + 1) = 0x6e656469666e6f63;
    *(undefined8 *)(puVar14 + 7) = 0x31203c2065636e65;
    *(undefined8 *)(puVar14 + 5) = 0x6469666e6f632026;
    FUN_109ac3188(0xffffff29,&uStack_4f0,&UNK_10f56d131,&UNK_10f56d138,299);
    goto LAB_10941ceec;
  }
  uVar37 = uStack_7e0 >> 3 & 0x1ff;
  uVar25 = uStack_7d4;
  if (uVar37 != 0) {
    uVar25 = uVar37 + 1;
  }
  puVar17 = &uStack_7e0;
  FUN_109a89cd4(puVar17,uVar25,0xffffffff,1);
  iVar39 = (int)puVar13;
  if ((iVar39 < 0) || ((int)puVar17 != iVar39)) {
    puVar14 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar14 = 1;
    uStack_4f0 = (long *******)(puVar14 + 1);
    uStack_4e8 = (uint *)0x1d;
    *(undefined1 *)((long)puVar14 + 0x21) = 0;
    *(undefined8 *)(puVar14 + 3) = 0x6f63202626203020;
    *(undefined8 *)(puVar14 + 1) = 0x3d3e20746e756f63;
    *(undefined8 *)((long)puVar14 + 0x19) = 0x746e756f63203d3d;
    *(undefined8 *)((long)puVar14 + 0x11) = 0x2032746e756f6320;
    FUN_109ac3188(0xffffff29,&uStack_4f0,&UNK_10f56d131,&UNK_10f56d138,300);
    goto LAB_10941ceec;
  }
  uVar37 = (uint)param_5;
  if (iVar39 < (int)uVar37) {
    uVar34 = 0;
    goto LAB_10941c5b8;
  }
  uStack_c40 = 0x42ff0000;
  piStack_c00 = &iStack_c38;
  iStack_c34 = 0;
  uStack_c30 = 0;
  uStack_c3c = 0;
  iStack_c38 = 0;
  uStack_c24 = 0;
  uStack_c20 = 0;
  uStack_c2c = 0;
  uStack_c28 = 0;
  uStack_c14 = 0;
  uStack_c1c = 0;
  uStack_c18 = 0;
  lStack_c08 = 0;
  uStack_c10 = 0;
  uStack_c0c = 0;
  uStack_be8 = 0;
  uStack_bf0 = 0;
  uStack_ca0 = 0x42ff0000;
  piVar36 = (int *)((ulong)&uStack_ca0 | 8);
  iStack_c94 = 0;
  uStack_c90 = 0;
  uStack_c9c = 0;
  iStack_c98 = 0;
  uStack_c84 = 0;
  uStack_c80 = 0;
  uStack_c8c = 0;
  uStack_c88 = 0;
  uStack_c74 = 0;
  uStack_c7c = 0;
  uStack_c78 = 0;
  lStack_c68 = 0;
  uStack_c70 = 0;
  uStack_c6c = 0;
  uStack_c48 = 0;
  uStack_c50 = 0;
  piStack_c60 = piVar36;
  puStack_c58 = &uStack_c50;
  puStack_bf8 = &uStack_bf0;
  if ((*param_22 & 0x1f0000) == 0) {
    uStack_4f0 = (long *******)CONCAT44(1,uStack_1064);
    FUN_109a83fd0(&uStack_ca0,2,&uStack_4f0,0);
    if (lStack_c68 != 0) {
      piVar36 = (int *)(lStack_c68 + 0x14);
      do {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar9) {
          *piVar36 = *piVar36 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lStack_c08 != 0) {
      piVar36 = (int *)(lStack_c08 + 0x14);
      do {
        iVar39 = *piVar36;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar9) {
          *piVar36 = iVar39 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(&uStack_c40);
      }
    }
    lStack_c08 = 0;
    uStack_c28 = 0;
    uStack_c24 = 0;
    uStack_c30 = 0;
    uStack_c2c = 0;
    uStack_c18 = 0;
    uStack_c14 = 0;
    uStack_c20 = 0;
    uStack_c1c = 0;
    if ((int)uStack_c3c < 1) {
LAB_10941adf8:
      uStack_c40 = uStack_ca0;
      if (2 < (int)uStack_c9c) goto LAB_10941ae2c;
      uStack_c3c = uStack_c9c;
      iStack_c38 = iStack_c98;
      iStack_c34 = iStack_c94;
      *puStack_bf8 = *puStack_c58;
      puStack_bf8[1] = puStack_c58[1];
    }
    else {
      lVar24 = 0;
      do {
        piStack_c00[lVar24] = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)uStack_c3c);
      if ((int)uStack_c3c < 3) goto LAB_10941adf8;
LAB_10941ae2c:
      uStack_c40 = uStack_ca0;
      func_0x000109a84868(&uStack_c40,&uStack_ca0);
    }
    uStack_c28 = uStack_c88;
    uStack_c24 = uStack_c84;
    uStack_c30 = uStack_c90;
    uStack_c2c = uStack_c8c;
    uStack_c18 = uStack_c78;
    uStack_c14 = uStack_c74;
    uStack_c20 = uStack_c80;
    uStack_c1c = uStack_c7c;
    lStack_c08 = lStack_c68;
    uStack_c10 = uStack_c70;
    uStack_c0c = uStack_c6c;
  }
  else {
    FUN_109a8f64c(param_22,uStack_1064,1,0,0xffffffff,1,0);
    if ((*param_22 & 0x1f0000) == 0x10000) {
      puVar19 = *(undefined8 **)(param_22 + 2);
      piStack_4b0 = (int *)((ulong)&uStack_4f0 | 8);
      uStack_4f0 = (long *******)*puVar19;
      uStack_4e8 = (uint *)puVar19[1];
      puStack_4d8 = (uint *)puVar19[3];
      ppppppplStack_4e0 = (long *******)puVar19[2];
      uStack_4d0 = puVar19[4];
      uStack_4c8 = puVar19[5];
      lStack_4b8 = puVar19[7];
      uStack_4c0 = puVar19[6];
      puStack_4a8 = &uStack_4a0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      if (puVar19[7] != 0) {
        piVar1 = (int *)(puVar19[7] + 0x14);
        do {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(int *)((long)puVar19 + 4) < 3) {
        uStack_4a0 = *(undefined8 *)puVar19[9];
        uStack_498 = ((undefined8 *)puVar19[9])[1];
      }
      else {
        uStack_4f0 = (long *******)((ulong)uStack_4f0 & 0xffffffff);
        func_0x000109a84868(&uStack_4f0);
      }
    }
    else {
      FUN_109a8a180(&uStack_4f0,param_22,0xffffffff);
    }
    if (lStack_c68 != 0) {
      piVar1 = (int *)(lStack_c68 + 0x14);
      do {
        iVar39 = *piVar1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar39 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(&uStack_ca0);
      }
    }
    if (0 < (int)uStack_c9c) {
      lVar24 = 0;
      do {
        piStack_c60[lVar24] = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)uStack_c9c);
    }
    iStack_c98 = (int)uStack_4e8;
    iStack_c94 = (int)((ulong)uStack_4e8 >> 0x20);
    uStack_ca0 = (uint)uStack_4f0;
    uStack_c88 = SUB84(puStack_4d8,0);
    uStack_c84 = (undefined4)((ulong)puStack_4d8 >> 0x20);
    uStack_c90 = SUB84(ppppppplStack_4e0,0);
    uStack_c8c = (undefined4)((ulong)ppppppplStack_4e0 >> 0x20);
    uStack_c78 = (undefined4)uStack_4c8;
    uStack_c74 = (undefined4)((ulong)uStack_4c8 >> 0x20);
    uStack_c80 = (undefined4)uStack_4d0;
    uStack_c7c = (undefined4)((ulong)uStack_4d0 >> 0x20);
    lStack_c68 = lStack_4b8;
    uStack_c70 = (undefined4)uStack_4c0;
    uStack_c6c = (undefined4)((ulong)uStack_4c0 >> 0x20);
    uStack_c9c = uStack_4f0._4_4_;
    piVar1 = piStack_c60;
    puVar19 = puStack_c58;
    if ((puStack_c58 != &uStack_c50) &&
       (piVar1 = piVar36, puVar19 = &uStack_c50, puStack_c58 != (undefined8 *)0x0)) {
      _free(puStack_c58[-1]);
    }
    puStack_c58 = puVar19;
    piStack_c60 = piVar1;
    puVar19 = (undefined8 *)((ulong)&uStack_4f0 | 4);
    if ((int)uStack_4f0._4_4_ < 3) {
      *puStack_c58 = *puStack_4a8;
      puStack_c58[1] = puStack_4a8[1];
    }
    else {
      puStack_c58 = puStack_4a8;
      piStack_c60 = piStack_4b0;
      puStack_4a8 = &uStack_4a0;
      piStack_4b0 = (int *)((ulong)&uStack_4f0 | 8);
    }
    uStack_4f0 = (long *******)CONCAT44(uStack_4f0._4_4_,0x42ff0000);
    puVar19[1] = 0;
    *puVar19 = 0;
    puVar19[3] = 0;
    puVar19[2] = 0;
    puVar19[5] = 0;
    puVar19[4] = 0;
    *(undefined8 *)((long)puVar19 + 0x34) = 0;
    *(undefined8 *)((long)puVar19 + 0x2c) = 0;
    if (lStack_c68 != 0) {
      piVar36 = (int *)(lStack_c68 + 0x14);
      do {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar9) {
          *piVar36 = *piVar36 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lStack_c08 != 0) {
      piVar36 = (int *)(lStack_c08 + 0x14);
      do {
        iVar39 = *piVar36;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar9) {
          *piVar36 = iVar39 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(&uStack_c40);
      }
    }
    lStack_c08 = 0;
    uStack_c28 = 0;
    uStack_c24 = 0;
    uStack_c30 = 0;
    uStack_c2c = 0;
    uStack_c18 = 0;
    uStack_c14 = 0;
    uStack_c20 = 0;
    uStack_c1c = 0;
    if ((int)uStack_c3c < 1) {
LAB_10941ac60:
      uStack_c40 = uStack_ca0;
      if (2 < (int)uStack_c9c) goto LAB_10941ac94;
      uStack_c3c = uStack_c9c;
      iStack_c38 = iStack_c98;
      iStack_c34 = iStack_c94;
      *puStack_bf8 = *puStack_c58;
      puStack_bf8[1] = puStack_c58[1];
    }
    else {
      lVar24 = 0;
      do {
        piStack_c00[lVar24] = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)uStack_c3c);
      if ((int)uStack_c3c < 3) goto LAB_10941ac60;
LAB_10941ac94:
      uStack_c40 = uStack_ca0;
      func_0x000109a84868(&uStack_c40,&uStack_ca0);
    }
    uStack_c28 = uStack_c88;
    uStack_c24 = uStack_c84;
    uStack_c30 = uStack_c90;
    uStack_c2c = uStack_c8c;
    uStack_c18 = uStack_c78;
    uStack_c14 = uStack_c74;
    uStack_c20 = uStack_c80;
    uStack_c1c = uStack_c7c;
    lStack_c08 = lStack_c68;
    uStack_c10 = uStack_c70;
    uStack_c0c = uStack_c6c;
    if (lStack_4b8 != 0) {
      piVar36 = (int *)(lStack_4b8 + 0x14);
      do {
        iVar39 = *piVar36;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar9) {
          *piVar36 = iVar39 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(&uStack_4f0);
      }
    }
    lStack_4b8 = 0;
    puStack_4d8 = (uint *)0x0;
    ppppppplStack_4e0 = (long *******)0x0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    if (0 < (int)uStack_4f0._4_4_) {
      lVar24 = 0;
      do {
        piStack_4b0[lVar24] = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)uStack_4f0._4_4_);
    }
    if (puStack_4a8 != &uStack_4a0 && puStack_4a8 != (undefined8 *)0x0) {
      _free(puStack_4a8[-1]);
    }
    if (iStack_c94 != 1 && iStack_c98 != 1) {
LAB_10941ad7c:
      puVar14 = (undefined4 *)0x54;
      func_0x000107c2ae8c();
      *puVar14 = 1;
      uStack_4f0 = (long *******)(puVar14 + 1);
      uStack_4e8 = (uint *)0x4c;
      *(undefined8 *)(puVar14 + 7) = 0x2e6b73614d747365;
      *(undefined8 *)(puVar14 + 5) = 0x62207c7c2031203d;
      *(undefined8 *)(puVar14 + 0xb) = 0x6928202626202931;
      *(undefined8 *)(puVar14 + 9) = 0x203d3d2073776f72;
      *(undefined8 *)(puVar14 + 0xf) = 0x61746f742e6b7361;
      *(undefined8 *)(puVar14 + 0xd) = 0x4d7473656229746e;
      *(undefined8 *)(puVar14 + 0x12) = 0x746e756f63203d3d;
      *(undefined8 *)(puVar14 + 0x10) = 0x2029286c61746f74;
      *(undefined1 *)(puVar14 + 0x14) = 0;
      *(undefined8 *)(puVar14 + 3) = 0x3d20736c6f632e6b;
      *(undefined8 *)(puVar14 + 1) = 0x73614d7473656228;
      FUN_109ac3188(0xffffff29,&uStack_4f0,&UNK_10f56d131,&UNK_10f56d138,0x134);
LAB_10941ceec:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10941cef0);
      (*pcVar7)();
    }
    uVar21 = (ulong)uStack_c9c;
    if ((int)uStack_c9c < 3) {
      uVar25 = iStack_c98 * iStack_c94;
    }
    else {
      uVar25 = 1;
      piVar36 = piStack_c60;
      do {
        uVar25 = *piVar36 * uVar25;
        uVar21 = uVar21 - 1;
        piVar36 = piVar36 + 1;
      } while (uVar21 != 0);
    }
    if (uStack_1064 != uVar25) goto LAB_10941ad7c;
  }
  if (uStack_1064 == uVar37) {
    ppppppplStack_4e0 = (long *******)0x0;
    uStack_4f0 = (long *******)CONCAT44(uStack_4f0._4_4_,0x1010000);
    uStack_4e8 = &uStack_780;
    uStack_640 = 0;
    uStack_650 = (undefined4 *)CONCAT44(uStack_650._4_4_,0x1010000);
    puStack_648 = &uStack_7e0;
    uStack_ed8 = 0x2010000;
    puStack_ed0 = &uStack_b20;
    uStack_ec8 = 0;
    puVar19 = &uStack_4f0;
    (**(code **)(*(long *)param_4 + 0x10))(param_4,puVar19,&uStack_650,&uStack_ed8);
    uVar25 = (uint)puVar19;
    if ((int)param_4 < 1) {
      uVar34 = 0;
    }
    else {
      puVar13 = &uStack_b20;
      FUN_109a479a0(puVar13,param_21);
      auVar49 = NEON_fmov(0x3ff0000000000000,8);
      uStack_4e8 = auVar49._8_8_;
      uStack_4f0 = auVar49._0_8_;
      uStack_650 = (undefined4 *)CONCAT44(uStack_650._4_4_,0xc1020006);
      puStack_648 = (uint *)&uStack_4f0;
      uStack_640 = 0x400000001;
      ppppppplStack_4e0 = uStack_4f0;
      puStack_4d8 = uStack_4e8;
      FUN_109a91d90();
      param_4 = &uStack_ca0;
      puVar19 = &uStack_650;
      FUN_109a48a40(param_4,puVar19,puVar13);
      uVar25 = (uint)puVar19;
      uVar34 = 1;
    }
  }
  else {
    dStack_1150 = (double)param_7;
    uVar21 = param_5;
    uVar25 = uStack_1064;
    if (0 < (int)uVar37) {
      do {
        dStack_1150 = dStack_1150 * ((double)(int)uVar21 / (double)(int)uVar25);
        uVar11 = (int)uVar21 - 1;
        uVar21 = (ulong)uVar11;
        uVar25 = uVar25 - 1;
      } while (uVar11 != 0);
    }
    if (param_7 < 2) {
      param_7 = 1;
    }
    puStack_cb0 = (uint *)0x0;
    puStack_cb8 = (uint *)0x0;
    uStack_ca8 = 0;
    *param_24 = 0;
    ppppppplVar26 =
         (long *******)(-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
    if ((int)uVar37 < 0) {
      ppppppplVar26 = (long *******)0xffffffffffffffff;
    }
    puVar19 = (undefined8 *)((ulong)&uStack_d78 | 4);
    dVar46 = (double)(int)uStack_1064;
    fVar50 = (float)dVar45;
    dVar45 = (double)_log();
    dVar47 = -dVar45;
    dStack_10c0 = 0.0;
    iStack_10dc = 1;
    iVar39 = 1;
    uStack_1100 = uVar37;
    uStack_10fc = uVar37;
    uStack_1034 = uVar37;
    do {
      *param_24 = *param_24 + 1;
      if ((iStack_10dc < iVar39) && ((int)uStack_10fc < (int)uStack_1064)) {
        uStack_10fc = uStack_10fc + 1;
        dVar48 = (dStack_1150 * (double)(int)uStack_10fc) / (double)(int)(uStack_10fc - uVar37);
        iStack_10dc = (int)((double)(long)(dVar48 - dStack_1150) + (double)iStack_10dc);
        dStack_1150 = dVar48;
      }
      ppppppplVar15 = (long *******)&ppppppplStack_4e0;
      if (0x108 < uVar37) {
        ppppppplVar15 = ppppppplVar26;
        uStack_4f0 = (long *******)&ppppppplStack_4e0;
        __Znam();
      }
      uVar11 = uStack_780;
      uVar25 = uStack_7e0;
      if ((int)uStack_77c < 1) {
        uVar35 = 0;
      }
      else {
        uVar35 = (uint)*(undefined8 *)(puStack_738 + (ulong)uStack_77c * 8 + -8);
      }
      if ((int)uStack_7dc < 1) {
        uVar40 = 0;
      }
      else {
        uVar40 = (uint)*(undefined8 *)(puStack_798 + (ulong)uStack_7dc * 8 + -8);
      }
      uVar2 = uStack_780 >> 3 & 0x1ff;
      iVar10 = iStack_774;
      if (uVar2 != 0) {
        iVar10 = uVar2 + 1;
      }
      uVar2 = uStack_7e0 >> 3 & 0x1ff;
      uVar3 = uStack_7d4;
      if (uVar2 != 0) {
        uVar3 = uVar2 + 1;
      }
      puVar42 = (undefined8 *)(ulong)uVar3;
      puVar13 = &uStack_780;
      uStack_4f0 = ppppppplVar15;
      uStack_4e8 = (uint *)(long)(int)uVar37;
      FUN_109a89cd4(puVar13,iVar10,0xffffffff,1);
      puVar17 = &uStack_7e0;
      FUN_109a89cd4(puVar17,puVar42,0xffffffff,1);
      lVar6 = lStack_770;
      lVar24 = lStack_7d0;
      if ((((2 < (int)uStack_b7c) || (uStack_b7c._4_4_ != uVar37)) || (iStack_b74 != 1)) ||
         ((uStack_b80 & 0xfff) != (iVar10 * 8 + 0xff8U & 0xff8 | uVar11 & 7) ||
          CONCAT44(uStack_b6c,uStack_b70) == 0)) {
        uStack_650 = (undefined4 *)CONCAT44(1,uVar37);
        puVar42 = (undefined8 *)0x2;
        FUN_109a83fd0(&uStack_b80,2,&uStack_650);
        uVar25 = uStack_7e0;
      }
      if (((2 < (int)uStack_bdc) || (uStack_bdc._4_4_ != uVar37)) ||
         ((iStack_bd4 != 1 ||
          (((uStack_be0 & 0xfff) != (uVar3 * 8 + 0xff8 & 0xff8 | uVar25 & 7) ||
           (puVar14 = (undefined4 *)CONCAT44(uStack_bcc,uStack_bd0), puVar14 == (undefined4 *)0x0)))
          ))) {
        uStack_650 = (undefined4 *)CONCAT44(1,uVar37);
        puVar42 = (undefined8 *)0x2;
        FUN_109a83fd0(&uStack_be0,2,&uStack_650);
        puVar14 = (undefined4 *)CONCAT44(uStack_bcc,uStack_bd0);
      }
      if (((int)puVar13 < (int)uVar37) || ((int)puVar13 != (int)puVar17)) {
        puVar14 = (undefined4 *)0x2c;
        func_0x000107c2ae8c();
        *puVar14 = 1;
        uStack_650 = puVar14 + 1;
        puStack_648 = (uint *)0x27;
        *(undefined1 *)((long)puVar14 + 0x2b) = 0;
        *(undefined8 *)(puVar14 + 3) = 0x6f506c65646f6d20;
        *(undefined8 *)(puVar14 + 1) = 0x3d3e20746e756f63;
        *(undefined8 *)(puVar14 + 7) = 0x3d3d20746e756f63;
        *(undefined8 *)(puVar14 + 5) = 0x2026262073746e69;
        *(undefined8 *)((long)puVar14 + 0x23) = 0x32746e756f63203d;
        FUN_109ac3188(0xffffff29,&uStack_650,&UNK_10f56d25f,&UNK_10f56d138,0xbd);
        goto LAB_10941ceec;
      }
      if (((uVar35 | uVar40) & 3) != 0) {
        puVar14 = (undefined4 *)0x3c;
        func_0x000107c2ae8c();
        *puVar14 = 1;
        uStack_650 = puVar14 + 1;
        puStack_648 = (uint *)0x36;
        *(undefined8 *)(puVar14 + 3) = 0x6928666f657a6973;
        *(undefined8 *)(puVar14 + 1) = 0x202520317a736528;
        *(undefined1 *)((long)puVar14 + 0x3a) = 0;
        *(undefined8 *)(puVar14 + 7) = 0x7365282026262030;
        *(undefined8 *)(puVar14 + 5) = 0x203d3d202929746e;
        *(undefined8 *)(puVar14 + 0xb) = 0x29746e6928666f65;
        *(undefined8 *)(puVar14 + 9) = 0x7a6973202520327a;
        *(undefined8 *)((long)puVar14 + 0x32) = 0x30203d3d20292974;
        FUN_109ac3188(0xffffff29,&uStack_650,&UNK_10f56d25f,&UNK_10f56d138,0xbe);
        goto LAB_10941ceec;
      }
      puVar5 = (undefined4 *)CONCAT44(uStack_b6c,uStack_b70);
      iVar10 = uVar37 - (iVar39 <= iStack_10dc);
      uVar11 = uStack_10fc - (iVar39 <= iStack_10dc);
      uVar43 = (ulong)(long)(int)uVar40 >> 2 & 0x7fffffff;
      uVar21 = (ulong)(long)(int)uVar35 >> 2 & 0x7fffffff;
      iVar41 = (int)((ulong)(long)(int)uVar35 >> 2);
      iVar38 = (int)((ulong)(long)(int)uVar40 >> 2);
      if (iVar39 <= iStack_10dc) {
        if (0 < iVar41) {
          puVar22 = (undefined4 *)(lVar6 + (long)(int)(uVar11 * iVar41) * 4);
          puVar27 = puVar5 + iVar10 * iVar41;
          uVar23 = uVar21;
          do {
            *puVar27 = *puVar22;
            uVar23 = uVar23 - 1;
            puVar22 = puVar22 + 1;
            puVar27 = puVar27 + 1;
          } while (uVar23 != 0);
        }
        if (0 < iVar38) {
          puVar22 = (undefined4 *)(lVar24 + (long)(int)(uVar11 * iVar38) * 4);
          puVar27 = puVar14 + iVar10 * iVar38;
          uVar23 = uVar43;
          do {
            *puVar27 = *puVar22;
            uVar23 = uVar23 - 1;
            puVar22 = puVar22 + 1;
            puVar27 = puVar27 + 1;
          } while (uVar23 != 0);
        }
        *(uint *)((long)ppppppplVar15 + (long)iVar10 * 4) = uVar11;
      }
      iVar44 = 0;
      do {
        if (0 < iVar10) {
          uVar23 = 0;
          puVar27 = puVar14;
          puVar22 = puVar5;
LAB_10941b3bc:
          do {
            if (uVar11 == 0) {
              iVar28 = 0;
            }
            else {
              uStack_10d0 = (uStack_10d0 >> 0x20) + (uStack_10d0 & 0xffffffff) * 0xf83f630a;
              uVar25 = 0;
              if (uVar11 != 0) {
                uVar25 = (uint)uStack_10d0 / uVar11;
              }
              iVar28 = (uint)uStack_10d0 - uVar25 * uVar11;
            }
            *(int *)((long)ppppppplVar15 + uVar23 * 4) = iVar28;
            uVar30 = 0;
            if (uVar23 != 0) {
              puVar32 = puVar14;
              puVar29 = puVar5;
              while (uVar31 = uVar30, iVar28 != *(int *)((long)ppppppplVar15 + uVar30 * 4)) {
                if (iVar41 < 1) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = 0;
                  while (uVar25 = *(uint *)(lVar6 + (long)(iVar28 * iVar41) * 4 + uVar33 * 4),
                        puVar42 = (undefined8 *)(ulong)uVar25, puVar29[uVar33] == uVar25) {
                    uVar33 = uVar33 + 1;
                    if (uVar21 == uVar33) goto LAB_10941b498;
                  }
                }
                if ((int)uVar33 == iVar41) break;
                if (iVar38 < 1) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = 0;
                  while (uVar25 = *(uint *)(lVar24 + (long)(iVar28 * iVar38) * 4 + uVar33 * 4),
                        puVar42 = (undefined8 *)(ulong)uVar25, puVar32[uVar33] == uVar25) {
                    uVar33 = uVar33 + 1;
                    if (uVar43 == uVar33) goto LAB_10941b498;
                  }
                }
                if ((int)uVar33 == iVar38) break;
                uVar30 = uVar30 + 1;
                puVar29 = (undefined4 *)((long)puVar29 + (long)(int)uVar35);
                puVar32 = (undefined4 *)((long)puVar32 + (long)(int)uVar40);
                uVar31 = uVar23;
                if (uVar30 == uVar23) break;
              }
LAB_10941b498:
              uVar30 = uVar31 & 0xffffffff;
            }
            uVar25 = (uint)puVar42;
            if (uVar30 != uVar23) {
              bVar9 = iVar44 == 0x31;
              iVar44 = iVar44 + 1;
              if (bVar9) {
                bVar9 = false;
                goto LAB_10941b5a8;
              }
              goto LAB_10941b3bc;
            }
            if (0 < iVar41) {
              puVar29 = (undefined4 *)(lVar6 + (long)(iVar28 * iVar41) * 4);
              puVar32 = puVar22;
              uVar30 = uVar21;
              do {
                *puVar32 = *puVar29;
                uVar30 = uVar30 - 1;
                puVar29 = puVar29 + 1;
                puVar32 = puVar32 + 1;
              } while (uVar30 != 0);
            }
            if (0 < iVar38) {
              puVar29 = (undefined4 *)(lVar24 + (long)(iVar28 * iVar38) * 4);
              uVar30 = uVar43;
              puVar32 = puVar27;
              do {
                *puVar32 = *puVar29;
                uVar30 = uVar30 - 1;
                puVar29 = puVar29 + 1;
                puVar32 = puVar32 + 1;
              } while (uVar30 != 0);
            }
            uVar23 = uVar23 + 1;
            if ((long)iVar10 <= (long)uVar23) break;
            puVar22 = (undefined4 *)((long)puVar22 + (long)(int)uVar35);
            puVar27 = (undefined4 *)((long)puVar27 + (long)(int)uVar40);
          } while (iVar44 < 0x32);
          if (0x31 < iVar44) goto LAB_10941bf7c;
        }
        uStack_640 = 0;
        uStack_650 = (undefined4 *)CONCAT44(uStack_650._4_4_,0x1010000);
        puStack_648 = &uStack_b80;
        uStack_ec8 = 0;
        uStack_ed8 = 0x1010000;
        puStack_ed0 = &uStack_be0;
        puVar42 = &uStack_650;
        puVar13 = param_4;
        (**(code **)(*(long *)param_4 + 0x20))(param_4,puVar42,&uStack_ed8,param_5);
        uVar25 = (uint)puVar42;
        if (((ulong)puVar13 & 1) != 0) goto LAB_10941bf7c;
        bVar9 = iVar44 != 0x31;
        iVar44 = iVar44 + 1;
      } while (bVar9);
      iVar44 = 0x32;
LAB_10941bf7c:
      bVar9 = iVar44 < 0x32;
LAB_10941b5a8:
      if (((long ********)uStack_4f0 != &ppppppplStack_4e0) && (uStack_4f0 != (long *******)0x0)) {
        __ZdaPv();
      }
      if (bVar9) {
        ppppppplStack_4e0 = (long *******)0x0;
        uStack_4f0 = (long *******)CONCAT44(uStack_4f0._4_4_,0x1010000);
        uStack_4e8 = &uStack_b80;
        uStack_640 = 0;
        uStack_650 = (undefined4 *)CONCAT44(uStack_650._4_4_,0x1010000);
        puStack_648 = &uStack_be0;
        uStack_ed8 = 0x2010000;
        uStack_ec8 = 0;
        puStack_ed0 = &uStack_ac0;
        puVar42 = &uStack_4f0;
        puVar13 = param_4;
        (**(code **)(*(long *)param_4 + 0x10))(param_4,puVar42,&uStack_650,&uStack_ed8);
        uVar25 = (uint)puVar42;
        iVar10 = (int)puVar13;
        puVar42 = (undefined8 *)(ulong)uStack_1100;
        if (0 < iVar10) {
          iVar38 = 0;
          if (iVar10 != 0) {
            iVar38 = uStack_abc._4_4_ / iVar10;
          }
          if (uStack_abc._4_4_ != iVar38 * iVar10) {
            puVar14 = (undefined4 *)0x20;
            func_0x000107c2ae8c();
            *puVar14 = 1;
            uStack_4f0 = (long *******)(puVar14 + 1);
            uStack_4e8 = (uint *)0x1b;
            *(undefined1 *)((long)puVar14 + 0x1f) = 0;
            *(undefined8 *)(puVar14 + 3) = 0x6d756e2025207377;
            *(undefined8 *)(puVar14 + 1) = 0x6f722e6c65646f6d;
            *(undefined8 *)((long)puVar14 + 0x17) = 0x30203d3d20736c65;
            *(undefined8 *)((long)puVar14 + 0xf) = 0x646f4d6d756e2025;
            FUN_109ac3188(0xffffff29,&uStack_4f0,&UNK_10f56d131,&UNK_10f56d138,0x16d);
            goto LAB_10941ceec;
          }
          iVar41 = 0;
          do {
            iVar44 = iVar41 * iVar38;
            iVar41 = iVar41 + 1;
            uStack_4f0 = (long *******)CONCAT44(iVar41 * iVar38,iVar44);
            uStack_650 = (undefined4 *)0x7fffffff80000000;
            FUN_109a84930(&uStack_d18,&uStack_ac0,&uStack_4f0,&uStack_650);
            if (param_18 == '\0') {
LAB_10941b7cc:
              if (*(char *)(param_25 + 4) == '\x01') {
                uStack_1010 = 0x7fffffff80000000;
                uStack_658 = 0x100000000;
                FUN_109a84930(&uStack_fb0,&uStack_d18,&uStack_1010,&uStack_658);
                FUN_10941d744(auStack_f50,&uStack_fb0);
                FUN_10941d6a0(&uStack_f38,auStack_f50);
                FUN_109a82210(&uStack_ed8,&uStack_f38);
                FUN_109a7d660(&uStack_650,&uStack_ed8);
                uStack_658 = 0x7fffffff80000000;
                uStack_660 = 0x200000001;
                FUN_109a84930(&uStack_1010,&uStack_d18,&uStack_658,&uStack_660);
                FUN_109a7dc0c(&uStack_4f0,&uStack_650,&uStack_1010);
                uStack_d78 = CONCAT44(uStack_d78._4_4_,0x42ff0000);
                *(undefined8 *)((long)puVar19 + 0x34) = 0;
                *(undefined8 *)((long)puVar19 + 0x2c) = 0;
                puVar19[3] = 0;
                puVar19[2] = 0;
                puVar19[5] = 0;
                puVar19[4] = 0;
                puVar19[1] = 0;
                *puVar19 = 0;
                alStack_d28[0] = 0;
                alStack_d28[1] = 0;
                puVar16 = &uStack_4f0;
                ppuStack_d38 = &puStack_d70;
                plStack_d30 = alStack_d28;
                (*(code *)(*uStack_4f0)[3])(uStack_4f0,puVar16,&uStack_d78,0xffffffff);
                uVar25 = (uint)puVar16;
                FUN_10918eb6c(&uStack_4f0);
                if (lStack_fd8 != 0) {
                  piVar36 = (int *)(lStack_fd8 + 0x14);
                  do {
                    iVar44 = *piVar36;
                    cVar4 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                    if (bVar9) {
                      *piVar36 = iVar44 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar44 + -1 == 0) {
                    func_0x000109a848d4(&uStack_1010);
                  }
                }
                lStack_fd8 = 0;
                uStack_ff8 = 0;
                uStack_1000 = 0;
                uStack_fe8 = 0;
                uStack_ff0 = 0;
                if (0 < uStack_1010._4_4_) {
                  lVar24 = 0;
                  do {
                    *(undefined4 *)(lStack_fd0 + lVar24 * 4) = 0;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < uStack_1010._4_4_);
                }
                if (puStack_fc8 != auStack_fc0 && puStack_fc8 != (undefined1 *)0x0) {
                  _free(*(undefined8 *)(puStack_fc8 + -8));
                }
                FUN_10918eb6c(&uStack_650);
                FUN_10918eb6c(&uStack_ed8);
                if (lStack_f00 != 0) {
                  piVar36 = (int *)(lStack_f00 + 0x14);
                  do {
                    iVar44 = *piVar36;
                    cVar4 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                    if (bVar9) {
                      *piVar36 = iVar44 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar44 + -1 == 0) {
                    func_0x000109a848d4(&uStack_f38);
                  }
                }
                lStack_f00 = 0;
                uStack_f20 = 0;
                uStack_f28 = 0;
                uStack_f10 = 0;
                uStack_f18 = 0;
                if (0 < uStack_f38._4_4_) {
                  lVar24 = 0;
                  do {
                    *(undefined4 *)(lStack_ef8 + lVar24 * 4) = 0;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < uStack_f38._4_4_);
                }
                if (puStack_ef0 != auStack_ee8 && puStack_ef0 != (undefined1 *)0x0) {
                  _free(*(undefined8 *)(puStack_ef0 + -8));
                }
                if (lStack_f78 != 0) {
                  piVar36 = (int *)(lStack_f78 + 0x14);
                  do {
                    iVar44 = *piVar36;
                    cVar4 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                    if (bVar9) {
                      *piVar36 = iVar44 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar44 + -1 == 0) {
                    func_0x000109a848d4(&uStack_fb0);
                  }
                }
                lStack_f78 = 0;
                uStack_f98 = 0;
                uStack_fa0 = 0;
                uStack_f88 = 0;
                uStack_f90 = 0;
                if (0 < uStack_fb0._4_4_) {
                  lVar24 = 0;
                  do {
                    *(undefined4 *)(lStack_f70 + lVar24 * 4) = 0;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < uStack_fb0._4_4_);
                }
                if (puStack_f68 != auStack_f60 && puStack_f68 != (undefined1 *)0x0) {
                  _free(*(undefined8 *)(puStack_f68 + -8));
                }
                dVar52 = *param_25;
                dVar51 = *pdStack_d68;
                dVar53 = *(double *)((long)pdStack_d68 + *plStack_d30 * 2);
                dVar48 = param_25[2];
                dVar54 = param_25[3];
                if (lStack_d40 != 0) {
                  piVar36 = (int *)(lStack_d40 + 0x14);
                  do {
                    iVar44 = *piVar36;
                    cVar4 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                    if (bVar9) {
                      *piVar36 = iVar44 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar44 + -1 == 0) {
                    func_0x000109a848d4(&uStack_d78);
                  }
                }
                lStack_d40 = 0;
                uStack_d60 = 0;
                pdStack_d68 = (double *)0x0;
                uStack_d50 = 0;
                uStack_d58 = 0;
                if (0 < uStack_d78._4_4_) {
                  lVar24 = 0;
                  do {
                    *(undefined4 *)((long)ppuStack_d38 + lVar24 * 4) = 0;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < uStack_d78._4_4_);
                }
                if (plStack_d30 != alStack_d28 && plStack_d30 != (long *)0x0) {
                  _free(plStack_d30[-1]);
                }
                dVar48 = dVar48 - dVar53;
                if (dVar54 * 1.5 <
                    (double)(float)SQRT((dVar52 - dVar51) * (dVar52 - dVar51) + dVar48 * dVar48))
                goto LAB_10941bed0;
              }
              puStack_cb0 = puStack_cb8;
              ppppppplStack_4e0 = (long *******)0x0;
              uStack_4f0 = (long *******)CONCAT44(uStack_4f0._4_4_,0x1010000);
              uStack_4e8 = &uStack_780;
              uStack_640 = 0;
              uStack_650 = (undefined4 *)CONCAT44(uStack_650._4_4_,0x1010000);
              puStack_648 = &uStack_7e0;
              uStack_ec8 = 0;
              uStack_ed8 = 0x1010000;
              puStack_ed0 = &uStack_d18;
              uStack_d78 = CONCAT44(uStack_d78._4_4_,0x2010000);
              pdStack_d68 = (double *)0x0;
              puStack_d70 = &uStack_a00;
              (**(code **)(*(long *)param_4 + 0x18))
                        (param_4,&uStack_4f0,&uStack_650,&uStack_ed8,&uStack_d78);
              puVar16 = &uStack_900;
              puVar20 = &uStack_960;
              FUN_10941d980(fVar50,puVar16,puVar20,&uStack_a00,&uStack_a60,&puStack_cb8,&puStack_980
                            ,&puStack_9a0);
              uVar25 = (uint)puVar20;
              uVar11 = (uint)puVar16;
              puVar20 = puVar42;
              if ((param_11 != 0) && ((int)puVar42 < (int)uVar11)) {
                puVar13 = &uStack_780;
                puVar17 = &uStack_7e0;
                FUN_10941de10(fVar50,puVar13,puVar17,&uStack_900,&uStack_960,&uStack_d18,&uStack_a00
                              ,&uStack_a60,&puStack_cb8,param_12);
                uVar25 = (uint)puVar17;
                uVar11 = (uint)puVar13;
                puVar20 = puVar16;
                if (param_18 != '\0') {
                  uStack_d78 = 0x7fffffff80000000;
                  uStack_f38 = 0x100000000;
                  FUN_109a84930(&uStack_650,&uStack_d18,&uStack_d78,&uStack_f38);
                  FUN_10941d744(&uStack_ed8,&uStack_650);
                  FUN_10941d6a0(&uStack_4f0,&uStack_ed8);
                  uVar25 = (uint)&uStack_4f0;
                  dVar48 = (double)FUN_10941d2dc(param_20);
                  if (lStack_4b8 != 0) {
                    piVar36 = (int *)(lStack_4b8 + 0x14);
                    do {
                      iVar44 = *piVar36;
                      cVar4 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                      if (bVar9) {
                        *piVar36 = iVar44 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar44 + -1 == 0) {
                      func_0x000109a848d4(&uStack_4f0);
                    }
                  }
                  lStack_4b8 = 0;
                  puStack_4d8 = (uint *)0x0;
                  ppppppplStack_4e0 = (long *******)0x0;
                  uStack_4c8 = 0;
                  uStack_4d0 = 0;
                  if (0 < (int)uStack_4f0._4_4_) {
                    lVar24 = 0;
                    do {
                      piStack_4b0[lVar24] = 0;
                      lVar24 = lVar24 + 1;
                    } while (lVar24 < (int)uStack_4f0._4_4_);
                  }
                  if (puStack_4a8 != &uStack_4a0 && puStack_4a8 != (undefined8 *)0x0) {
                    _free(puStack_4a8[-1]);
                  }
                  if (lStack_618 != 0) {
                    piVar36 = (int *)(lStack_618 + 0x14);
                    do {
                      iVar44 = *piVar36;
                      cVar4 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                      if (bVar9) {
                        *piVar36 = iVar44 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar44 + -1 == 0) {
                      func_0x000109a848d4(&uStack_650);
                    }
                  }
                  lStack_618 = 0;
                  uStack_638 = 0;
                  uStack_640 = 0;
                  uStack_628 = 0;
                  uStack_630 = 0;
                  if (0 < uStack_650._4_4_) {
                    lVar24 = 0;
                    do {
                      *(undefined4 *)(uStack_610 + lVar24 * 4) = 0;
                      lVar24 = lVar24 + 1;
                    } while (lVar24 < uStack_650._4_4_);
                  }
                  if (puStack_608 != &uStack_600 && puStack_608 != (undefined8 *)0x0) {
                    _free(puStack_608[-1]);
                  }
                  if (dVar48 < 0.984807753012208) goto LAB_10941bed0;
                }
              }
              puVar42 = puVar20;
              if ((int)uStack_1034 < (int)uVar11) {
                FUN_10941e804(&uStack_a60,&uStack_ca0);
                uStack_4f0 = (long *******)CONCAT44(uStack_4f0._4_4_,0x2010000);
                ppppppplStack_4e0 = (long *******)0x0;
                uStack_4e8 = &uStack_b20;
                uVar25 = (uint)&uStack_4f0;
                FUN_109a479a0(&uStack_d18);
                dVar48 = (double)(int)uVar11 / dVar46;
                uVar35 = uStack_1064;
                if (0 < (int)((ulong)((long)puStack_cb0 - (long)puStack_cb8) >> 2)) {
                  uVar21 = (ulong)((long)puStack_cb0 - (long)puStack_cb8) >> 2 & 0x7fffffff;
                  dVar51 = dVar48;
                  do {
                    if ((int)puStack_cb8[uVar21 - 1] < (int)uVar37) break;
                    uVar40 = puStack_cb8[uVar21 - 1] + 1;
                    dVar52 = (double)(int)uVar40;
                    dVar53 = param_3 * dVar52;
                    if ((long)uVar21 <
                        (long)(int)(dVar53 + (double)(int)uVar37 +
                                   SQRT((1.0 - param_3) * dVar53) * 1.64)) break;
                    dVar52 = (double)(uVar21 & 0xffffffff) / dVar52;
                    if (dVar51 <= dVar52) {
                      dVar51 = dVar52;
                      dVar48 = dVar52;
                      uVar35 = uVar40;
                    }
                    bVar9 = 1 < uVar21;
                    uVar21 = uVar21 - 1;
                  } while (bVar9);
                }
                uStack_1034 = uVar11;
                if (dStack_10c0 < dVar48) {
                  dVar51 = 0.0;
                  if (0.0 <= dVar48) {
                    dVar51 = dVar48;
                  }
                  dVar52 = 1.0;
                  if (dVar51 <= 1.0) {
                    dVar52 = dVar51;
                  }
                  dVar51 = (double)_pow(dVar52,(double)(int)uVar37);
                  dVar51 = (double)_log(1.0 - dVar51);
                  dVar52 = -(dVar51 * (double)param_7);
                  bVar9 = false;
                  bVar8 = false;
                  if (dVar51 < 0.0) {
                    bVar9 = false;
                    bVar8 = true;
                    if (!NAN(dVar52) && !NAN(dVar47)) {
                      bVar9 = dVar52 == dVar47;
                      bVar8 = dVar47 <= dVar52;
                    }
                  }
                  if (bVar8 && !bVar9) {
                    param_7 = (int)(long)(double)(long)(dVar45 / dVar51);
                  }
                  dStack_10c0 = dVar48;
                  uStack_1064 = uVar35;
                  if (param_7 <= param_6) {
                    param_7 = param_6;
                  }
                }
              }
            }
            else {
              uStack_d78 = 0x7fffffff80000000;
              uStack_f38 = 0x100000000;
              FUN_109a84930(&uStack_650,&uStack_d18,&uStack_d78,&uStack_f38);
              FUN_10941d744(&uStack_ed8,&uStack_650);
              FUN_10941d6a0(&uStack_4f0,&uStack_ed8);
              uVar25 = (uint)&uStack_4f0;
              dVar48 = (double)FUN_10941d2dc(param_20);
              if (lStack_4b8 != 0) {
                piVar36 = (int *)(lStack_4b8 + 0x14);
                do {
                  iVar44 = *piVar36;
                  cVar4 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                  if (bVar9) {
                    *piVar36 = iVar44 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar44 + -1 == 0) {
                  func_0x000109a848d4(&uStack_4f0);
                }
              }
              lStack_4b8 = 0;
              puStack_4d8 = (uint *)0x0;
              ppppppplStack_4e0 = (long *******)0x0;
              uStack_4c8 = 0;
              uStack_4d0 = 0;
              if (0 < (int)uStack_4f0._4_4_) {
                lVar24 = 0;
                do {
                  piStack_4b0[lVar24] = 0;
                  lVar24 = lVar24 + 1;
                } while (lVar24 < (int)uStack_4f0._4_4_);
              }
              if (puStack_4a8 != &uStack_4a0 && puStack_4a8 != (undefined8 *)0x0) {
                _free(puStack_4a8[-1]);
              }
              if (lStack_618 != 0) {
                piVar36 = (int *)(lStack_618 + 0x14);
                do {
                  iVar44 = *piVar36;
                  cVar4 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                  if (bVar9) {
                    *piVar36 = iVar44 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar44 + -1 == 0) {
                  func_0x000109a848d4(&uStack_650);
                }
              }
              lStack_618 = 0;
              uStack_638 = 0;
              uStack_640 = 0;
              uStack_628 = 0;
              uStack_630 = 0;
              if (0 < uStack_650._4_4_) {
                lVar24 = 0;
                do {
                  *(undefined4 *)(uStack_610 + lVar24 * 4) = 0;
                  lVar24 = lVar24 + 1;
                } while (lVar24 < uStack_650._4_4_);
              }
              if (puStack_608 != &uStack_600 && puStack_608 != (undefined8 *)0x0) {
                _free(puStack_608[-1]);
              }
              if (0.9396926207859084 <= dVar48) goto LAB_10941b7cc;
            }
LAB_10941bed0:
            uStack_1100 = (uint)puVar42;
            if (lStack_ce0 != 0) {
              piVar36 = (int *)(lStack_ce0 + 0x14);
              do {
                iVar44 = *piVar36;
                cVar4 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                if (bVar9) {
                  *piVar36 = iVar44 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar44 + -1 == 0) {
                func_0x000109a848d4(&uStack_d18);
              }
            }
            lStack_ce0 = 0;
            uStack_d00 = 0;
            uStack_d08 = 0;
            uStack_cf0 = 0;
            uStack_cf8 = 0;
            if (0 < iStack_d14) {
              lVar24 = 0;
              do {
                *(undefined4 *)(lStack_cd8 + lVar24 * 4) = 0;
                lVar24 = lVar24 + 1;
              } while (lVar24 < iStack_d14);
            }
            if (puStack_cd0 != auStack_cc8 && puStack_cd0 != (undefined1 *)0x0) {
              _free(*(undefined8 *)(puStack_cd0 + -8));
            }
          } while (iVar41 != iVar10);
        }
      }
      bVar9 = iVar39 < param_7;
      iVar39 = iVar39 + 1;
    } while (bVar9);
    if (((int)uStack_1034 < param_10) || ((int)uStack_1034 <= (int)uVar37)) {
      FUN_109a8e944(param_21);
      uVar34 = 0;
    }
    else {
      FUN_109a8f64c(param_22,iVar12,1,0,0xffffffff,1,0);
      if ((*param_22 & 0x1f0000) == 0x10000) {
        puVar19 = *(undefined8 **)(param_22 + 2);
        piStack_4b0 = (int *)((ulong)&uStack_4f0 | 8);
        uStack_4f0 = (long *******)*puVar19;
        uStack_4e8 = (uint *)puVar19[1];
        puStack_4d8 = (uint *)puVar19[3];
        ppppppplStack_4e0 = (long *******)puVar19[2];
        uStack_4d0 = puVar19[4];
        uStack_4c8 = puVar19[5];
        lStack_4b8 = puVar19[7];
        uStack_4c0 = puVar19[6];
        puStack_4a8 = &uStack_4a0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        if (puVar19[7] != 0) {
          piVar36 = (int *)(puVar19[7] + 0x14);
          do {
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
            if (bVar9) {
              *piVar36 = *piVar36 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (*(int *)((long)puVar19 + 4) < 3) {
          uStack_4a0 = *(undefined8 *)puVar19[9];
          uStack_498 = ((undefined8 *)puVar19[9])[1];
        }
        else {
          uStack_4f0 = (long *******)((ulong)uStack_4f0 & 0xffffffff);
          func_0x000109a84868(&uStack_4f0);
        }
      }
      else {
        FUN_109a8a180(&uStack_4f0,param_22,0xffffffff);
      }
      uStack_650 = (undefined4 *)CONCAT44(iStack_b1c,uStack_b20);
      puStack_648 = (uint *)CONCAT44(uStack_b14,uStack_b18);
      uStack_610 = (ulong)&uStack_650 | 8;
      uStack_638 = CONCAT44(uStack_b04,uStack_b08);
      uStack_640 = CONCAT44(uStack_b0c,uStack_b10);
      uStack_628 = CONCAT44(uStack_af4,uStack_af8);
      uStack_630 = CONCAT44(uStack_afc,uStack_b00);
      uStack_620 = CONCAT44(uStack_aec,uStack_af0);
      lStack_618 = lStack_ae8;
      uStack_5f8 = 0;
      uStack_600 = 0;
      if (lStack_ae8 != 0) {
        piVar36 = (int *)(lStack_ae8 + 0x14);
        do {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar9) {
            *piVar36 = *piVar36 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puStack_608 = &uStack_600;
      if (iStack_b1c < 3) {
        uStack_600 = *puStack_ad8;
        uStack_5f8 = puStack_ad8[1];
      }
      else {
        uStack_650 = (undefined4 *)(ulong)uStack_b20;
        func_0x000109a84868(&uStack_650,&uStack_b20);
      }
      puStack_cb0 = puStack_cb8;
      uStack_ec8 = 0;
      uStack_ed8 = 0x1010000;
      puStack_ed0 = &uStack_840;
      uStack_d08 = 0;
      uStack_d18 = 0x1010000;
      puStack_d10 = &uStack_8a0;
      pdStack_d68 = (double *)0x0;
      uStack_d78 = CONCAT44(uStack_d78._4_4_,0x1010000);
      puStack_d70 = (uint *)&uStack_650;
      uStack_f38 = CONCAT44(uStack_f38._4_4_,0x2010000);
      puStack_f30 = &uStack_a00;
      uStack_f28 = 0;
      (**(code **)(*(long *)param_4 + 0x18))
                (param_4,&uStack_ed8,&uStack_d18,&uStack_d78,&uStack_f38);
      puVar19 = &uStack_900;
      puVar42 = &uStack_960;
      FUN_10941d980(fVar50,puVar19,puVar42,&uStack_a00,&uStack_4f0,&puStack_cb8,&puStack_980,
                    &puStack_9a0);
      uVar25 = (uint)puVar42;
      iVar12 = (int)puVar19;
      if ((param_11 != 0) && ((int)uVar37 <= iVar12)) {
        puVar13 = &uStack_840;
        puVar17 = &uStack_8a0;
        FUN_10941de10(fVar50,puVar13,puVar17,&uStack_900,&uStack_960,&uStack_650,&uStack_a00,
                      &uStack_4f0,&puStack_cb8,param_12);
        uVar25 = (uint)puVar17;
        iVar12 = (int)puVar13;
      }
      if ((param_18 == '\0') || (iVar12 < (int)uStack_1034)) {
        if ((int)uStack_1034 <= iVar12) goto LAB_10941c36c;
LAB_10941c388:
        FUN_109a8e944(param_21);
        uVar34 = 0;
      }
      else {
        uStack_f38 = 0x7fffffff80000000;
        uStack_fb0 = 0x100000000;
        FUN_109a84930(&uStack_d18,&uStack_650,&uStack_f38,&uStack_fb0);
        FUN_10941d744(&uStack_d78,&uStack_d18);
        FUN_10941d6a0(&uStack_ed8,&uStack_d78);
        uVar25 = (uint)&uStack_ed8;
        dVar45 = (double)FUN_10941d2dc(param_20);
        if (lStack_ea0 != 0) {
          piVar36 = (int *)(lStack_ea0 + 0x14);
          do {
            iVar12 = *piVar36;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
            if (bVar9) {
              *piVar36 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4(&uStack_ed8);
          }
        }
        lStack_ea0 = 0;
        uStack_ec0 = 0;
        uStack_ec8 = 0;
        uStack_eb0 = 0;
        uStack_eb8 = 0;
        if (0 < iStack_ed4) {
          lVar24 = 0;
          do {
            *(undefined4 *)(lStack_e98 + lVar24 * 4) = 0;
            lVar24 = lVar24 + 1;
          } while (lVar24 < iStack_ed4);
        }
        if (puStack_e90 != auStack_e88 && puStack_e90 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_e90 + -8));
        }
        if (lStack_ce0 != 0) {
          piVar36 = (int *)(lStack_ce0 + 0x14);
          do {
            iVar12 = *piVar36;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
            if (bVar9) {
              *piVar36 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4(&uStack_d18);
          }
        }
        lStack_ce0 = 0;
        uStack_d00 = 0;
        uStack_d08 = 0;
        uStack_cf0 = 0;
        uStack_cf8 = 0;
        if (0 < iStack_d14) {
          lVar24 = 0;
          do {
            *(undefined4 *)(lStack_cd8 + lVar24 * 4) = 0;
            lVar24 = lVar24 + 1;
          } while (lVar24 < iStack_d14);
        }
        if (puStack_cd0 != auStack_cc8 && puStack_cd0 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_cd0 + -8));
        }
        if (dVar45 < 0.984807753012208) goto LAB_10941c388;
LAB_10941c36c:
        FUN_109a479a0(&uStack_650);
        uVar25 = (uint)param_21;
        uVar34 = 1;
      }
      if (lStack_618 != 0) {
        piVar36 = (int *)(lStack_618 + 0x14);
        do {
          iVar12 = *piVar36;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar9) {
            *piVar36 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(&uStack_650);
        }
      }
      lStack_618 = 0;
      uStack_638 = 0;
      uStack_640 = 0;
      uStack_628 = 0;
      uStack_630 = 0;
      if (0 < uStack_650._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)(uStack_610 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_650._4_4_);
      }
      if (puStack_608 != &uStack_600 && puStack_608 != (undefined8 *)0x0) {
        _free(puStack_608[-1]);
      }
      if (lStack_4b8 != 0) {
        piVar36 = (int *)(lStack_4b8 + 0x14);
        do {
          iVar12 = *piVar36;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar9) {
            *piVar36 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(&uStack_4f0);
        }
      }
      lStack_4b8 = 0;
      puStack_4d8 = (uint *)0x0;
      ppppppplStack_4e0 = (long *******)0x0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      if (0 < (int)uStack_4f0._4_4_) {
        lVar24 = 0;
        do {
          piStack_4b0[lVar24] = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)uStack_4f0._4_4_);
      }
      if (puStack_4a8 != &uStack_4a0 && puStack_4a8 != (undefined8 *)0x0) {
        _free(puStack_4a8[-1]);
      }
    }
    param_4 = puStack_cb8;
    if (puStack_cb8 != (uint *)0x0) {
      puStack_cb0 = puStack_cb8;
      __ZdlPv();
    }
  }
  if (lStack_c68 != 0) {
    piVar36 = (int *)(lStack_c68 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      param_4 = &uStack_ca0;
      func_0x000109a848d4(param_4);
    }
  }
  lStack_c68 = 0;
  uStack_c88 = 0;
  uStack_c84 = 0;
  uStack_c90 = 0;
  uStack_c8c = 0;
  uStack_c78 = 0;
  uStack_c74 = 0;
  uStack_c80 = 0;
  uStack_c7c = 0;
  if (0 < (int)uStack_c9c) {
    lVar24 = 0;
    do {
      piStack_c60[lVar24] = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_c9c);
  }
  puVar17 = param_4;
  if (puStack_c58 != &uStack_c50 && puStack_c58 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_c58[-1];
    _free(puVar17);
  }
  if (lStack_c08 != 0) {
    piVar36 = (int *)(lStack_c08 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_c40;
      func_0x000109a848d4(puVar17);
    }
  }
  lStack_c08 = 0;
  uStack_c28 = 0;
  uStack_c24 = 0;
  uStack_c30 = 0;
  uStack_c2c = 0;
  uStack_c18 = 0;
  uStack_c14 = 0;
  uStack_c20 = 0;
  uStack_c1c = 0;
  if (0 < (int)uStack_c3c) {
    lVar24 = 0;
    do {
      piStack_c00[lVar24] = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_c3c);
  }
  if (puStack_bf8 != &uStack_bf0 && puStack_bf8 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_bf8[-1];
    _free(puVar17);
  }
  if (lStack_ba8 != 0) {
    piVar36 = (int *)(lStack_ba8 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_be0;
      func_0x000109a848d4(puVar17);
    }
  }
LAB_10941c5b8:
  lStack_ba8 = 0;
  uStack_bc8 = 0;
  uStack_bc4 = 0;
  uStack_bd0 = 0;
  uStack_bcc = 0;
  uStack_bb8 = 0;
  uStack_bb4 = 0;
  uStack_bc0 = 0;
  uStack_bbc = 0;
  if (0 < (int)uStack_bdc) {
    lVar24 = 0;
    do {
      *(undefined4 *)(lStack_ba0 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_bdc);
  }
  if (puStack_b98 != &uStack_b90 && puStack_b98 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_b98[-1];
    _free(puVar17);
  }
  if (lStack_b48 != 0) {
    piVar36 = (int *)(lStack_b48 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_b80;
      func_0x000109a848d4(puVar17);
    }
  }
  lStack_b48 = 0;
  uStack_b68 = 0;
  uStack_b64 = 0;
  uStack_b70 = 0;
  uStack_b6c = 0;
  uStack_b58 = 0;
  uStack_b54 = 0;
  uStack_b60 = 0;
  uStack_b5c = 0;
  if (0 < (int)uStack_b7c) {
    lVar24 = 0;
    do {
      *(undefined4 *)(lStack_b40 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_b7c);
  }
  if (puStack_b38 != &uStack_b30 && puStack_b38 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_b38[-1];
    _free(puVar17);
  }
  if (lStack_ae8 != 0) {
    piVar36 = (int *)(lStack_ae8 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_b20;
      func_0x000109a848d4(puVar17);
    }
  }
  lStack_ae8 = 0;
  uStack_b08 = 0;
  uStack_b04 = 0;
  uStack_b10 = 0;
  uStack_b0c = 0;
  uStack_af8 = 0;
  uStack_af4 = 0;
  uStack_b00 = 0;
  uStack_afc = 0;
  if (0 < iStack_b1c) {
    lVar24 = 0;
    do {
      *(undefined4 *)(uStack_ae0 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < iStack_b1c);
  }
  if (puStack_ad8 != &uStack_ad0 && puStack_ad8 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_ad8[-1];
    _free(puVar17);
  }
  if (lStack_a88 != 0) {
    piVar36 = (int *)(lStack_a88 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_ac0;
      func_0x000109a848d4(puVar17);
    }
  }
  lStack_a88 = 0;
  uStack_aa8 = 0;
  uStack_aa4 = 0;
  uStack_ab0 = 0;
  uStack_aac = 0;
  uStack_a98 = 0;
  uStack_a94 = 0;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  if (0 < (int)uStack_abc) {
    lVar24 = 0;
    do {
      *(undefined4 *)(lStack_a80 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_abc);
  }
  if (puStack_a78 != &uStack_a70 && puStack_a78 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_a78[-1];
    _free(puVar17);
  }
  if (lStack_a28 != 0) {
    piVar36 = (int *)(lStack_a28 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_a60;
      func_0x000109a848d4(puVar17);
    }
  }
  lStack_a28 = 0;
  uStack_a48 = 0;
  uStack_a44 = 0;
  uStack_a50 = 0;
  uStack_a4c = 0;
  uStack_a38 = 0;
  uStack_a34 = 0;
  uStack_a40 = 0;
  uStack_a3c = 0;
  if (0 < (int)uStack_a5c) {
    lVar24 = 0;
    do {
      *(undefined4 *)(lStack_a20 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_a5c);
  }
  if (puStack_a18 != &uStack_a10 && puStack_a18 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_a18[-1];
    _free(puVar17);
  }
  if (lStack_9c8 != 0) {
    piVar36 = (int *)(lStack_9c8 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_a00;
      func_0x000109a848d4(puVar17);
    }
  }
  lStack_9c8 = 0;
  uStack_9e8 = 0;
  uStack_9e4 = 0;
  uStack_9f0 = 0;
  uStack_9ec = 0;
  uStack_9d8 = 0;
  uStack_9d4 = 0;
  uStack_9e0 = 0;
  uStack_9dc = 0;
  if (0 < (int)uStack_9fc) {
    lVar24 = 0;
    do {
      *(undefined4 *)(lStack_9c0 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_9fc);
  }
  if (puStack_9b8 != &uStack_9b0 && puStack_9b8 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_9b8[-1];
    _free(puVar17);
  }
  if (lStack_990 != 0) {
    puVar17 = (uint *)(puStack_9a0 + -8);
    __ZdlPv(puVar17);
  }
  if (lStack_970 != 0) {
    puVar17 = (uint *)(puStack_980 + -8);
    __ZdlPv(puVar17);
  }
  if (uStack_928 != 0) {
    piVar36 = (int *)(uStack_928 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = (uint *)&uStack_960;
      func_0x000109a848d4(puVar17);
    }
  }
  uStack_928 = 0;
  uStack_948 = 0;
  uStack_950 = 0;
  uStack_938 = 0;
  uStack_940 = 0;
  if (0 < uStack_960._4_4_) {
    lVar24 = 0;
    do {
      *(undefined4 *)(uStack_920 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < uStack_960._4_4_);
  }
  if (puStack_918 != &uStack_910 && puStack_918 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_918[-1];
    _free(puVar17);
  }
  if (uStack_8c8 != 0) {
    piVar36 = (int *)(uStack_8c8 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = (uint *)&uStack_900;
      func_0x000109a848d4(puVar17);
    }
  }
  uStack_8c8 = 0;
  uStack_8e8 = 0;
  uStack_8f0 = 0;
  uStack_8d8 = 0;
  uStack_8e0 = 0;
  if (0 < uStack_900._4_4_) {
    lVar24 = 0;
    do {
      *(undefined4 *)(uStack_8c0 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < uStack_900._4_4_);
  }
  if (puStack_8b8 != &uStack_8b0 && puStack_8b8 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_8b8[-1];
    _free(puVar17);
  }
  if (lStack_868 != 0) {
    piVar36 = (int *)(lStack_868 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_8a0;
      func_0x000109a848d4(puVar17);
    }
  }
  lStack_868 = 0;
  uStack_888 = 0;
  uStack_890 = 0;
  uStack_878 = 0;
  uStack_880 = 0;
  if (0 < iStack_89c) {
    lVar24 = 0;
    do {
      *(undefined4 *)(lStack_860 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < iStack_89c);
  }
  if (puStack_858 != auStack_850 && puStack_858 != (undefined1 *)0x0) {
    puVar17 = *(uint **)(puStack_858 + -8);
    _free(puVar17);
  }
  if (lStack_808 != 0) {
    piVar36 = (int *)(lStack_808 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_840;
      func_0x000109a848d4(puVar17);
    }
  }
  lStack_808 = 0;
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  if (0 < iStack_83c) {
    lVar24 = 0;
    do {
      *(undefined4 *)(lStack_800 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < iStack_83c);
  }
  if (puStack_7f8 != auStack_7f0 && puStack_7f8 != (undefined1 *)0x0) {
    puVar17 = *(uint **)(puStack_7f8 + -8);
    _free(puVar17);
  }
  if (lStack_7a8 != 0) {
    piVar36 = (int *)(lStack_7a8 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_7e0;
      func_0x000109a848d4(puVar17);
    }
  }
  lStack_7a8 = 0;
  uStack_7c8 = 0;
  lStack_7d0 = 0;
  uStack_7b8 = 0;
  uStack_7c0 = 0;
  if (0 < (int)uStack_7dc) {
    lVar24 = 0;
    do {
      *(undefined4 *)(lStack_7a0 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_7dc);
  }
  if (puStack_798 != auStack_790 && puStack_798 != (undefined1 *)0x0) {
    puVar17 = *(uint **)(puStack_798 + -8);
    _free(puVar17);
  }
  if (lStack_748 != 0) {
    piVar36 = (int *)(lStack_748 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = &uStack_780;
      func_0x000109a848d4(puVar17);
    }
  }
  lStack_748 = 0;
  uStack_768 = 0;
  lStack_770 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  if (0 < (int)uStack_77c) {
    lVar24 = 0;
    do {
      *(undefined4 *)(lStack_740 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_77c);
  }
  if (puStack_738 != auStack_730 && puStack_738 != (undefined1 *)0x0) {
    puVar17 = *(uint **)(puStack_738 + -8);
    _free(puVar17);
  }
  if (uStack_6e8 != 0) {
    piVar36 = (int *)(uStack_6e8 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = (uint *)&uStack_720;
      func_0x000109a848d4(puVar17);
    }
  }
  uStack_6e8 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  if (0 < uStack_720._4_4_) {
    lVar24 = 0;
    do {
      *(undefined4 *)(uStack_6e0 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < uStack_720._4_4_);
  }
  if (puStack_6d8 != &uStack_6d0 && puStack_6d8 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_6d8[-1];
    _free(puVar17);
  }
  if (uStack_688 != 0) {
    piVar36 = (int *)(uStack_688 + 0x14);
    do {
      iVar12 = *piVar36;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar9) {
        *piVar36 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17 = (uint *)&uStack_6c0;
      func_0x000109a848d4(puVar17);
    }
  }
  uStack_688 = 0;
  uStack_6a8 = 0;
  uStack_6b0 = 0;
  uStack_698 = 0;
  uStack_6a0 = 0;
  if (0 < uStack_6c0._4_4_) {
    lVar24 = 0;
    do {
      *(undefined4 *)(uStack_680 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < uStack_6c0._4_4_);
  }
  if (puStack_678 != &uStack_670 && puStack_678 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_678[-1];
    _free(puVar17);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    ___stack_chk_fail();
    if (uVar25 == 0) goto LAB_10941d2cc;
    func_0x000104bd46a0(puVar17);
    func_0x00010567aa40(&uStack_d78);
    FUN_10918eb6c(&uStack_4f0);
    func_0x00010567aa40(&uStack_1010);
    FUN_10918eb6c(&uStack_650);
    FUN_10918eb6c(&uStack_ed8);
    func_0x00010567aa40(&uStack_f38);
    func_0x00010567aa40(&uStack_fb0);
    func_0x00010567aa40(&uStack_d18);
    do {
      if (puStack_cb8 != (uint *)0x0) {
        puStack_cb0 = puStack_cb8;
        __ZdlPv();
      }
      func_0x00010567aa40(&uStack_ca0);
      func_0x00010567aa40(&uStack_c40);
      func_0x00010567aa40(&uStack_be0);
      func_0x00010567aa40(&uStack_b80);
      func_0x00010567aa40(&uStack_b20);
      func_0x00010567aa40(&uStack_ac0);
      func_0x00010567aa40(&uStack_a60);
      func_0x00010567aa40(&uStack_a00);
      if (lStack_990 != 0) {
        __ZdlPv(puStack_9a0 + -8);
      }
      if (lStack_970 != 0) {
        __ZdlPv(puStack_980 + -8);
      }
      func_0x00010567aa40(&uStack_960);
      func_0x00010567aa40(&uStack_900);
      func_0x00010567aa40(&uStack_8a0);
      func_0x00010567aa40(&uStack_840);
      func_0x00010567aa40(&uStack_7e0);
      func_0x00010567aa40(&uStack_780);
      func_0x00010567aa40(&uStack_720);
      func_0x00010567aa40(&uStack_6c0);
LAB_10941d2cc:
      __Unwind_Resume(puVar17);
    } while( true );
  }
  return uVar34;
}



/* Entry: 10941d2dc; end: 10941d69f;  */

undefined8 FUN_10941d2dc(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_320;
  undefined8 uStack_31c;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined1 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_160;
  undefined8 uStack_15c;
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
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [4];
  int iStack_fc;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  
  puStack_2b8 = (undefined1 *)0xbff0000000000000;
  plStack_2c0 = (long *)0x0;
  uStack_2b0 = 0;
  FUN_10941e9ac(auStack_a0,&plStack_2c0);
  plStack_2c0 = (long *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  uStack_2b0 = 0xbff0000000000000;
  FUN_10941e9ac(auStack_100,&plStack_2c0);
  FUN_109a7d740(&plStack_2c0,param_1,auStack_100);
  uStack_160 = 0x42ff0000;
  lStack_120 = (long)&uStack_15c + 4;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  lStack_128 = 0;
  uStack_12c = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puStack_118 = &uStack_110;
  (**(code **)(*plStack_2c0 + 0x18))(plStack_2c0,&plStack_2c0,&uStack_160,0xffffffff);
  FUN_10918eb6c(&plStack_2c0);
  FUN_109a7d740(&plStack_2c0,param_2,auStack_a0);
  uStack_320 = 0x42ff0000;
  lStack_2e0 = (long)&uStack_31c + 4;
  uVar6 = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_31c = 0;
  lStack_2e8 = 0;
  uStack_2ec = 0;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_30c = 0;
  uStack_308 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  puStack_2d8 = &uStack_2d0;
  (**(code **)(*plStack_2c0 + 0x18))(plStack_2c0,&plStack_2c0,&uStack_320,0xffffffff);
  FUN_10918eb6c(&plStack_2c0);
  uStack_2b0 = 0;
  plStack_2c0 = (long *)CONCAT44(plStack_2c0._4_4_,0x1010000);
  puStack_2b8 = (undefined1 *)&uStack_320;
  FUN_109a73394(&uStack_160,&plStack_2c0);
  if (lStack_2e8 != 0) {
    piVar1 = (int *)(lStack_2e8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_320);
    }
  }
  lStack_2e8 = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  if (0 < (int)uStack_31c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_2e0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_31c);
  }
  if (puStack_2d8 != &uStack_2d0 && puStack_2d8 != (undefined8 *)0x0) {
    _free(puStack_2d8[-1]);
  }
  if (lStack_128 != 0) {
    piVar1 = (int *)(lStack_128 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_160);
    }
  }
  lStack_128 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  if (0 < (int)uStack_15c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_120 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_15c);
  }
  if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
    _free(puStack_118[-1]);
  }
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_100);
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < iStack_fc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_fc);
  }
  if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_b8 + -8));
  }
  if (lStack_68 != 0) {
    piVar1 = (int *)(lStack_68 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_a0);
    }
  }
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (0 < iStack_9c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_60 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_9c);
  }
  if (puStack_58 != auStack_50 && puStack_58 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_58 + -8));
  }
  return uVar6;
}



/* Entry: 10941d6a0; end: 10941d743;  */

void FUN_10941d6a0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 auStack_50 [2];
  undefined4 *puStack_48;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  auStack_38[0] = 0xc1020006;
  uStack_28 = 0x300000001;
  auStack_50[0] = 0x2010000;
  uStack_40 = 0;
  puStack_48 = param_1;
  uStack_30 = param_2;
  FUN_109a91d90();
  FUN_109b8d8fc(auStack_38,auStack_50,param_1);
  return;
}



/* Entry: 10941d744; end: 10941d97f;  */

void FUN_10941d744(undefined8 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined4 auStack_98 [2];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  long alStack_30 [2];
  
  lVar10 = *(long *)(param_2 + 4);
  if ((lVar10 != 0) && ((int)param_2[1] < 3)) {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uStack_78 = *(undefined8 *)(param_2 + 2);
    uVar11 = uVar4;
    if (uVar3 != 1) {
      if (uVar4 != 1) goto LAB_10941d8c4;
      uVar11 = 1;
    }
    if ((uVar11 + uVar3 == 4) && ((*param_2 & 0xff8) == 0)) {
      if ((*param_2 & 0x4007) == 0x4006) {
        lVar9 = 0;
        do {
          *(undefined8 *)((long)param_1 + lVar9) = *(undefined8 *)(lVar10 + lVar9);
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0x18);
      }
      else {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        puStack_90 = &uStack_80;
        puStack_40 = &uStack_78;
        uStack_50 = 0;
        lStack_48 = 0;
        alStack_30[0] = (long)(int)uVar4 * 8;
        uStack_80 = (undefined4 *)0x242ff4006;
        alStack_30[1] = 8;
        puStack_60 = (undefined8 *)((long)param_1 + alStack_30[0] * (int)uVar3);
        auStack_98[0] = 0x2010000;
        uStack_88 = 0;
        puStack_70 = param_1;
        puStack_68 = param_1;
        puStack_58 = puStack_60;
        plStack_38 = alStack_30;
        FUN_109a41858(0x3ff0000000000000,0,param_2,auStack_98,6);
        if (lStack_48 != 0) {
          piVar1 = (int *)(lStack_48 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_80);
          }
        }
        lStack_48 = 0;
        puStack_68 = (undefined8 *)0x0;
        puStack_70 = (undefined8 *)0x0;
        puStack_58 = (undefined8 *)0x0;
        puStack_60 = (undefined8 *)0x0;
        if (0 < uStack_80._4_4_) {
          lVar10 = 0;
          do {
            *(undefined4 *)((long)puStack_40 + lVar10 * 4) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < uStack_80._4_4_);
        }
        if (plStack_38 != alStack_30 && plStack_38 != (long *)0x0) {
          _free(plStack_38[-1]);
        }
      }
      return;
    }
  }
LAB_10941d8c4:
  puVar8 = (undefined4 *)0x60;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  uStack_80 = puVar8 + 1;
  uStack_78 = 0x58;
  *(undefined8 *)(puVar8 + 0xb) = 0x2626202931203d3d;
  *(undefined8 *)(puVar8 + 9) = 0x20736c6f63207c7c;
  *(undefined8 *)(puVar8 + 0xf) = 0x31202d20736c6f63;
  *(undefined8 *)(puVar8 + 0xd) = 0x202b2073776f7220;
  *(undefined8 *)(puVar8 + 0x13) = 0x6c656e6e61686320;
  *(undefined8 *)(puVar8 + 0x11) = 0x2626206e203d3d20;
  *(undefined8 *)(puVar8 + 3) = 0x203d3c20736d6964;
  *(undefined8 *)(puVar8 + 1) = 0x2026262061746164;
  *(undefined1 *)(puVar8 + 0x17) = 0;
  *(undefined8 *)(puVar8 + 0x15) = 0x31203d3d20292873;
  *(undefined8 *)(puVar8 + 7) = 0x2031203d3d207377;
  *(undefined8 *)(puVar8 + 5) = 0x6f72282026262032;
  FUN_109ac3188(0xffffff29,&uStack_80,&UNK_10f56d38c,&UNK_10f566d1b,0x43b);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10941d93c);
  (*pcVar7)();
}



/* Entry: 10941d980; end: 10941de0f;  */

uint * FUN_10941d980(ulong param_1,long param_2,long param_3,uint *param_4,uint *param_5,
                    uint *param_6,uint *param_7,uint *param_8,long *param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  int iVar11;
  uint *puVar12;
  undefined4 **ppuVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  char *pcVar18;
  uint *puVar19;
  ulong uVar20;
  int *piVar21;
  uint *puVar22;
  uint uVar23;
  int *unaff_x19;
  undefined8 *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint *puVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  float fVar34;
  ulong uVar35;
  undefined8 uVar36;
  undefined4 *puVar37;
  undefined4 auStack_3e0 [2];
  int *piStack_3d8;
  undefined8 uStack_3d0;
  undefined4 auStack_3c8 [2];
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined4 auStack_3b0 [2];
  undefined4 **ppuStack_3a8;
  undefined8 uStack_3a0;
  undefined4 auStack_398 [2];
  uint *puStack_390;
  undefined8 uStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  undefined8 uStack_368;
  int *piStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_330;
  int **ppiStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  int iStack_308;
  int iStack_304;
  int *piStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d0;
  int **ppiStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_270;
  long lStack_268;
  undefined1 *puStack_260;
  undefined1 auStack_258 [16];
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  long lStack_210;
  undefined4 *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  int iStack_1e8;
  undefined8 uStack_1e4;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  int iStack_188;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long lStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  int iStack_90;
  uint uStack_8c;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = *(uint **)(param_4 + 0x10);
  puVar15 = param_6;
  puVar16 = param_7;
  puVar17 = param_8;
  uVar35 = param_1;
  if (((2 < (int)param_5[1] || param_5[2] != *puVar19) || param_5[3] != puVar19[1]) ||
     (puVar14 = param_5, (*param_5 & 0xfff) != 0 || *(long *)(param_5 + 4) == 0)) {
    puVar14 = (uint *)0x0;
    puStack_88 = *(undefined4 **)puVar19;
    FUN_109a83fd0(param_5,2,&puStack_88);
  }
  if (((*param_4 & 0x4fff) != 0x4005) || ((*param_5 & 0x4fff) != 0x4000)) {
    puVar37 = (undefined4 *)0x60;
    func_0x000107c2ae8c();
    *puVar37 = 1;
    puStack_88 = puVar37 + 1;
    uStack_80 = 0x59;
    *(undefined8 *)(puVar37 + 0xb) = 0x616d202626204632;
    *(undefined8 *)(puVar37 + 9) = 0x335f5643203d3d20;
    *(undefined8 *)(puVar37 + 0xf) = 0x2873756f756e6974;
    *(undefined8 *)(puVar37 + 0xd) = 0x6e6f4373692e6b73;
    *(undefined8 *)(puVar37 + 0x13) = 0x2928657079742e6b;
    *(undefined8 *)(puVar37 + 0x11) = 0x73616d2026262029;
    *(undefined8 *)((long)puVar37 + 0x55) = 0x55385f5643203d3d;
    *(undefined8 *)((long)puVar37 + 0x4d) = 0x202928657079742e;
    *(undefined8 *)(puVar37 + 3) = 0x73756f756e69746e;
    *(undefined8 *)(puVar37 + 1) = 0x6f4373692e727265;
    *(undefined1 *)((long)puVar37 + 0x5d) = 0;
    *(undefined8 *)(puVar37 + 7) = 0x2928657079742e72;
    *(undefined8 *)(puVar37 + 5) = 0x7265202626202928;
    FUN_109ac3188(0xffffff29,&puStack_88,&UNK_10f56d2fa,&UNK_10f56d138,0x54);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10941ddd8);
    (*pcVar10)();
  }
  pcVar18 = *(char **)param_7;
  lVar29 = *(long *)(param_7 + 2);
  cVar5 = *pcVar18;
  if (cVar5 < -1) {
    uVar35 = 0xfefefefefefefefe;
    do {
      uVar36 = *(undefined8 *)pcVar18;
      uVar20 = CONCAT17(-(-2 < (char)((ulong)uVar36 >> 0x38)),
                        CONCAT16(-(-2 < (char)((ulong)uVar36 >> 0x30)),
                                 CONCAT15(-(-2 < (char)((ulong)uVar36 >> 0x28)),
                                          CONCAT14(-(-2 < (char)((ulong)uVar36 >> 0x20)),
                                                   CONCAT13(-(-2 < (char)((ulong)uVar36 >> 0x18)),
                                                            CONCAT12(-(-2 < (char)((ulong)uVar36 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-2 < (char)((ulong)
                                                  uVar36 >> 8)),-(-2 < (char)uVar36))))))));
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20);
      pcVar18 = pcVar18 + (uVar20 >> 3);
      lVar29 = lVar29 + (uVar20 >> 3) * 4;
      cVar5 = *pcVar18;
    } while (cVar5 < -1);
  }
  if (cVar5 == -1) {
    pcVar18 = (char *)0x0;
  }
  FUN_10941eadc(param_7,pcVar18,lVar29);
  ppuVar13 = *(undefined4 ***)param_8;
  puVar19 = *(uint **)(param_8 + 2);
  cVar5 = *(char *)ppuVar13;
  if (cVar5 < -1) {
    uVar35 = 0xfefefefefefefefe;
    do {
      puVar37 = *ppuVar13;
      uVar20 = CONCAT17(-(-2 < (char)((ulong)puVar37 >> 0x38)),
                        CONCAT16(-(-2 < (char)((ulong)puVar37 >> 0x30)),
                                 CONCAT15(-(-2 < (char)((ulong)puVar37 >> 0x28)),
                                          CONCAT14(-(-2 < (char)((ulong)puVar37 >> 0x20)),
                                                   CONCAT13(-(-2 < (char)((ulong)puVar37 >> 0x18)),
                                                            CONCAT12(-(-2 < (char)((ulong)puVar37 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-2 < (char)((ulong)
                                                  puVar37 >> 8)),-(-2 < (char)puVar37))))))));
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20);
      ppuVar13 = (undefined4 **)((long)ppuVar13 + (uVar20 >> 3));
      puVar19 = puVar19 + (uVar20 >> 3);
      cVar5 = *(char *)ppuVar13;
    } while (cVar5 < -1);
  }
  if (cVar5 == -1) {
    ppuVar13 = (undefined4 **)0x0;
  }
  puVar22 = param_8;
  FUN_10941eadc();
  uVar20 = (ulong)param_4[1];
  if ((int)param_4[1] < 3) {
    lVar29 = (long)(int)param_4[3] * (long)(int)param_4[2];
  }
  else {
    lVar29 = 1;
    piVar21 = *(int **)(param_4 + 0x10);
    do {
      lVar29 = lVar29 * *piVar21;
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 1;
    } while (uVar20 != 0);
  }
  if (lVar29 != 0) {
    lVar32 = 0;
    lVar33 = 0;
    lVar28 = *(long *)(param_4 + 4);
    lVar27 = *(long *)(param_5 + 4);
    unaff_x19 = (int *)0x9ddfea08eb382d69;
    do {
      *(undefined1 *)(lVar27 + lVar33) = 0;
      fVar34 = *(float *)(lVar28 + lVar33 * 4);
      uVar35 = (ulong)(uint)fVar34;
      if (fVar34 <= (float)param_1 * (float)param_1) {
        iVar11 = (int)lVar33;
        if (((*(byte *)(param_2 + 1) >> 6 & 1) == 0) && (**(int **)(param_2 + 0x40) != 1)) {
          if ((*(int **)(param_2 + 0x40))[1] == 1) {
            puVar19 = (uint *)(*(long *)(param_2 + 0x10) +
                              **(long **)(param_2 + 0x48) * (lVar32 >> 0x20));
          }
          else {
            iVar6 = *(int *)(param_2 + 0xc);
            iVar31 = 0;
            if (iVar6 != 0) {
              iVar31 = iVar11 / iVar6;
            }
            puVar19 = (uint *)(*(long *)(param_2 + 0x10) +
                               **(long **)(param_2 + 0x48) * (long)iVar31 +
                              (long)(iVar11 - iVar6 * iVar31) * 4);
          }
        }
        else {
          puVar19 = (uint *)(*(long *)(param_2 + 0x10) + (lVar32 >> 0x1e));
        }
        puStack_88 = (undefined4 *)CONCAT44(puStack_88._4_4_,*puVar19);
        if (((*(byte *)(param_3 + 1) >> 6 & 1) == 0) && (**(int **)(param_3 + 0x40) != 1)) {
          if ((*(int **)(param_3 + 0x40))[1] == 1) {
            puVar22 = (uint *)(*(long *)(param_3 + 0x10) +
                              **(long **)(param_3 + 0x48) * (lVar32 >> 0x20));
          }
          else {
            iVar6 = *(int *)(param_3 + 0xc);
            iVar31 = 0;
            if (iVar6 != 0) {
              iVar31 = iVar11 / iVar6;
            }
            puVar22 = (uint *)(*(long *)(param_3 + 0x10) +
                               **(long **)(param_3 + 0x48) * (long)iVar31 +
                              (long)(iVar11 - iVar6 * iVar31) * 4);
          }
        }
        else {
          puVar22 = (uint *)(*(long *)(param_3 + 0x10) + (lVar32 >> 0x1e));
        }
        uStack_8c = *puVar22;
        Hint_Prefetch(*(long *)param_7,0,2,0);
        uVar20 = (long)&PTR_LOOP_110c8acd8 + (ulong)*puVar19;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar20;
        ppuVar13 = &puStack_88;
        puVar19 = (uint *)(SUB168(auVar8 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          uVar20 * -0x622015f714c7d297);
        puVar22 = param_7;
        func_0x00010941ec38();
        if (puVar22 == (uint *)0x0) {
          Hint_Prefetch(*(long *)param_8,0,2,0);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uStack_8c;
          ppuVar13 = (undefined4 **)&uStack_8c;
          puVar19 = (uint *)(SUB168(auVar9 * ZEXT816(0x9ddfea08eb382d69),8) ^
                            ((long)&PTR_LOOP_110c8acd8 + (ulong)uStack_8c) * -0x622015f714c7d297);
          puVar22 = param_8;
          func_0x00010941ec38();
          if (puVar22 == (uint *)0x0) {
            *(undefined1 *)(lVar27 + lVar33) = 1;
            iStack_90 = iVar11;
            FUN_1092d7128(param_6,&iStack_90);
            uVar20 = 0;
            puVar22 = param_7;
            FUN_10941ecc8();
            if ((uVar20 & 1) != 0) {
              *(undefined4 *)(*(long *)(param_7 + 2) + (long)puVar22 * 4) = puStack_88._0_4_;
            }
            ppuVar13 = (undefined4 **)&uStack_8c;
            puVar22 = param_8;
            FUN_10941ecc8();
            if (((ulong)ppuVar13 & 1) != 0) {
              *(uint *)(*(long *)(param_8 + 2) + (long)puVar22 * 4) = uStack_8c;
            }
          }
        }
      }
      lVar33 = lVar33 + 1;
      lVar32 = lVar32 + 0x100000000;
    } while (lVar29 != lVar33);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (uint *)((ulong)(*(long *)(param_6 + 2) - *(long *)param_6) >> 2);
  }
  ___stack_chk_fail();
  puStack_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  do {
    iVar11 = *unaff_x19;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
    if (bVar7) {
      *unaff_x19 = iVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar11 + -1 == 0) {
    _free(*(undefined8 *)(unaff_x19 + -2));
  }
  __Unwind_Resume();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)puVar22[1] < 1) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)*(undefined8 *)(*(long *)(puVar22 + 0x12) + (ulong)puVar22[1] * 8 + -8);
  }
  if ((int)*(uint *)((long)ppuVar13 + 4) < 1) {
    uVar25 = 0;
  }
  else {
    uVar25 = (uint)*(undefined8 *)(ppuVar13[9] + (ulong)*(uint *)((long)ppuVar13 + 4) * 2 + -2);
  }
  if (((uVar23 | uVar25) & 3) != 0) {
    puVar37 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar37 = 1;
    uStack_248 = puVar37 + 1;
    uStack_240 = 0x36;
    uStack_23c = 0;
    *(undefined8 *)(puVar37 + 3) = 0x6928666f657a6973;
    *(undefined8 *)(puVar37 + 1) = 0x202520317a736528;
    *(undefined1 *)((long)puVar37 + 0x3a) = 0;
    *(undefined8 *)(puVar37 + 7) = 0x7365282026262030;
    *(undefined8 *)(puVar37 + 5) = 0x203d3d202929746e;
    *(undefined8 *)(puVar37 + 0xb) = 0x29746e6928666f65;
    *(undefined8 *)(puVar37 + 9) = 0x7a6973202520327a;
    *(undefined8 *)((long)puVar37 + 0x32) = 0x30203d3d20292974;
    FUN_109ac3188(0xffffff29,&uStack_248,&UNK_10f56d306,&UNK_10f56d138,0x7d);
    goto LAB_10941e714;
  }
  lVar29 = *param_9;
  lVar33 = param_9[1];
  puVar30 = (uint *)((ulong)(lVar33 - lVar29) >> 2);
  uVar2 = *puVar22;
  uVar3 = puVar22[3];
  if ((uVar2 & 0xff8) != 0) {
    uVar3 = (uVar2 >> 3) + 1;
  }
  uVar4 = *(uint *)((long)ppuVar13 + 0xc);
  if ((*(uint *)ppuVar13 & 0xff8) != 0) {
    uVar4 = (*(uint *)ppuVar13 >> 3) + 1;
  }
  uStack_248._0_4_ = 0x42ff0000;
  puStack_208 = &uStack_240;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_248._4_4_ = 0;
  uStack_240 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_21c = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  lStack_210 = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_1f0 = 0;
  uStack_1f8 = 0;
  iVar11 = (int)puVar30;
  uStack_184 = CONCAT44(uStack_184._4_4_,1);
  puStack_200 = &uStack_1f8;
  iStack_188 = iVar11;
  FUN_109a83fd0(&uStack_248,2,&iStack_188,uVar3 * 8 + 0xff8 & 0xff8 | uVar2 & 7);
  iStack_188 = 0x42ff0000;
  lStack_148 = (long)&uStack_184 + 4;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_184 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_15c = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  lStack_150 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_1e4 = CONCAT44(uStack_1e4._4_4_,1);
  iStack_1e8 = iVar11;
  puStack_140 = &uStack_138;
  FUN_109a83fd0(&iStack_188,2,&iStack_1e8,uVar4 * 8 + 0xff8 & 0xff8 | *(uint *)ppuVar13 & 7);
  if (0 < iVar11) {
    uVar20 = 0;
    lVar28 = *(long *)(puVar22 + 4);
    puVar37 = ppuVar13[2];
    lVar27 = CONCAT44(uStack_234,uStack_238);
    lVar32 = CONCAT44(uStack_174,uStack_178);
    do {
      iVar11 = *(int *)(*param_9 + uVar20 * 4);
      _memcpy(lVar27,lVar28 + (long)(iVar11 * (int)((ulong)(long)(int)uVar23 >> 2)) * 4,
              (long)(int)uVar23);
      _memcpy(lVar32,puVar37 + iVar11 * (int)((ulong)(long)(int)uVar25 >> 2),(long)(int)uVar25);
      uVar20 = uVar20 + 1;
      lVar32 = lVar32 + (int)uVar25;
      lVar27 = lVar27 + (int)uVar23;
    } while (((ulong)(lVar33 - lVar29) >> 2 & 0x7fffffff) != uVar20);
  }
  iStack_1e8 = 0x42ff0000;
  piStack_360 = &iStack_1e8;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1e4 = 0;
  lStack_1a8 = (long)&uStack_1e4 + 4;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1bc = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  lStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_298 = 0;
  uStack_2a8 = (undefined4 *)CONCAT44(uStack_2a8._4_4_,0x1010000);
  puStack_2a0 = &uStack_248;
  uStack_2f8 = 0;
  iStack_308 = 0x1010000;
  piStack_300 = &iStack_188;
  uStack_368 = CONCAT44(uStack_368._4_4_,0x2010000);
  uStack_358 = 0;
  puVar12 = param_8;
  puStack_1a0 = &uStack_198;
  (**(code **)(*(long *)param_8 + 0x10))(param_8,&uStack_2a8,&iStack_308,&uStack_368);
  puVar37 = puStack_88;
  iVar11 = (int)puVar12;
  if (iVar11 == 0) {
LAB_10941e490:
    if (lStack_1b0 != 0) {
      piVar21 = (int *)(lStack_1b0 + 0x14);
      do {
        iVar11 = *piVar21;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar7) {
          *piVar21 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&iStack_1e8);
      }
    }
    lStack_1b0 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    if (0 < (int)uStack_1e4) {
      lVar29 = 0;
      do {
        *(undefined4 *)(lStack_1a8 + lVar29 * 4) = 0;
        lVar29 = lVar29 + 1;
      } while (lVar29 < (int)uStack_1e4);
    }
    if (puStack_1a0 != &uStack_198 && puStack_1a0 != (undefined8 *)0x0) {
      _free(puStack_1a0[-1]);
    }
    if (lStack_150 != 0) {
      piVar21 = (int *)(lStack_150 + 0x14);
      do {
        iVar11 = *piVar21;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar7) {
          *piVar21 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&iStack_188);
      }
    }
    lStack_150 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    if (0 < (int)uStack_184) {
      lVar29 = 0;
      do {
        *(undefined4 *)(lStack_148 + lVar29 * 4) = 0;
        lVar29 = lVar29 + 1;
      } while (lVar29 < (int)uStack_184);
    }
    if (puStack_140 != &uStack_138 && puStack_140 != (undefined8 *)0x0) {
      _free(puStack_140[-1]);
    }
    if (lStack_210 != 0) {
      piVar21 = (int *)(lStack_210 + 0x14);
      do {
        iVar11 = *piVar21;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar7) {
          *piVar21 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_248);
      }
    }
    lStack_210 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    if (0 < uStack_248._4_4_) {
      lVar29 = 0;
      do {
        puStack_208[lVar29] = 0;
        lVar29 = lVar29 + 1;
      } while (lVar29 < uStack_248._4_4_);
    }
    if (puStack_200 != &uStack_1f8 && puStack_200 != (undefined8 *)0x0) {
      _free(puStack_200[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
      return puVar30;
    }
    ___stack_chk_fail();
  }
  else {
    iVar6 = 0;
    if (iVar11 != 0) {
      iVar6 = uStack_1e4._4_4_ / iVar11;
    }
    if (uStack_1e4._4_4_ == iVar6 * iVar11) {
      if (0 < iVar11) {
        iVar31 = 0;
        uVar36 = CONCAT44(uStack_8c,iStack_90);
        puVar24 = (undefined8 *)((ulong)&iStack_308 | 4);
        puVar26 = (undefined8 *)((ulong)&uStack_368 | 4);
        do {
          iStack_308 = iVar31 * iVar6;
          iVar31 = iVar31 + 1;
          iStack_304 = iVar31 * iVar6;
          uStack_368 = 0x7fffffff80000000;
          FUN_109a84930(&uStack_2a8,&iStack_1e8,&iStack_308,&uStack_368);
          iStack_308 = 0x42ff0000;
          puVar24[1] = 0;
          *puVar24 = 0;
          puVar24[3] = 0;
          puVar24[2] = 0;
          puVar24[5] = 0;
          puVar24[4] = 0;
          *(undefined8 *)((long)puVar24 + 0x34) = 0;
          *(undefined8 *)((long)puVar24 + 0x2c) = 0;
          uStack_2b8 = 0;
          uStack_2b0 = 0;
          uStack_368 = CONCAT44(uStack_368._4_4_,0x42ff0000);
          puVar26[1] = 0;
          *puVar26 = 0;
          puVar26[3] = 0;
          puVar26[2] = 0;
          puVar26[5] = 0;
          puVar26[4] = 0;
          *(undefined8 *)((long)puVar26 + 0x34) = 0;
          *(undefined8 *)((long)puVar26 + 0x2c) = 0;
          uStack_318 = 0;
          uStack_310 = 0;
          lStack_380 = 0;
          lStack_378 = 0;
          lStack_370 = 0;
          uStack_388 = 0;
          auStack_398[0] = 0x1010000;
          uStack_3a0 = 0;
          auStack_3b0[0] = 0x1010000;
          uStack_3b8 = 0;
          auStack_3c8[0] = 0x1010000;
          auStack_3e0[0] = 0x2010000;
          uStack_3d0 = 0;
          piStack_3d8 = &iStack_308;
          puStack_3c0 = &uStack_2a8;
          ppuStack_3a8 = ppuVar13;
          puStack_390 = puVar22;
          ppiStack_328 = &piStack_360;
          puStack_320 = &uStack_318;
          ppiStack_2c8 = &piStack_300;
          puStack_2c0 = &uStack_2b8;
          (**(code **)(*(long *)param_8 + 0x18))
                    (param_8,auStack_398,auStack_3b0,auStack_3c8,auStack_3e0);
          puVar12 = puVar19;
          FUN_10941d980(uVar35,puVar19,puVar14,&iStack_308,&uStack_368,&lStack_380,uVar36,puVar37);
          if ((int)puVar30 < (int)puVar12) {
            auStack_398[0] = 0x2010000;
            uStack_388 = 0;
            puStack_390 = puVar15;
            FUN_109a479a0(&uStack_2a8,auStack_398);
            FUN_10941e804(&iStack_308,puVar16);
            FUN_10941e804(&uStack_368,puVar17);
            lVar32 = param_9[1];
            lVar33 = *param_9;
            param_9[1] = lStack_378;
            *param_9 = lStack_380;
            lVar29 = param_9[2];
            param_9[2] = lStack_370;
            puVar30 = puVar12;
            lStack_380 = lVar33;
            lStack_378 = lVar32;
            lStack_370 = lVar29;
            if (((ulong)param_6 & 1) == 0) {
              puVar30 = puVar22;
              FUN_10941de10(uVar35,puVar22,ppuVar13,puVar19,puVar14,puVar15,puVar16,puVar17,param_9,
                            0);
            }
          }
          if (lStack_380 != 0) {
            lStack_378 = lStack_380;
            __ZdlPv();
          }
          if (lStack_330 != 0) {
            piVar21 = (int *)(lStack_330 + 0x14);
            do {
              iVar1 = *piVar21;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar7) {
                *piVar21 = iVar1 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_368);
            }
          }
          lStack_330 = 0;
          uStack_350 = 0;
          uStack_358 = 0;
          uStack_340 = 0;
          uStack_348 = 0;
          if (0 < uStack_368._4_4_) {
            lVar29 = 0;
            do {
              *(undefined4 *)((long)ppiStack_328 + lVar29 * 4) = 0;
              lVar29 = lVar29 + 1;
            } while (lVar29 < uStack_368._4_4_);
          }
          if (puStack_320 != &uStack_318 && puStack_320 != (undefined8 *)0x0) {
            _free(puStack_320[-1]);
          }
          if (lStack_2d0 != 0) {
            piVar21 = (int *)(lStack_2d0 + 0x14);
            do {
              iVar1 = *piVar21;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar7) {
                *piVar21 = iVar1 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&iStack_308);
            }
          }
          lStack_2d0 = 0;
          uStack_2f0 = 0;
          uStack_2f8 = 0;
          uStack_2e0 = 0;
          uStack_2e8 = 0;
          if (0 < iStack_304) {
            lVar29 = 0;
            do {
              *(undefined4 *)((long)ppiStack_2c8 + lVar29 * 4) = 0;
              lVar29 = lVar29 + 1;
            } while (lVar29 < iStack_304);
          }
          if (puStack_2c0 != &uStack_2b8 && puStack_2c0 != (undefined8 *)0x0) {
            _free(puStack_2c0[-1]);
          }
          if (lStack_270 != 0) {
            piVar21 = (int *)(lStack_270 + 0x14);
            do {
              iVar1 = *piVar21;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar7) {
                *piVar21 = iVar1 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_2a8);
            }
          }
          lStack_270 = 0;
          uStack_290 = 0;
          uStack_298 = 0;
          uStack_280 = 0;
          uStack_288 = 0;
          if (0 < uStack_2a8._4_4_) {
            lVar29 = 0;
            do {
              *(undefined4 *)(lStack_268 + lVar29 * 4) = 0;
              lVar29 = lVar29 + 1;
            } while (lVar29 < uStack_2a8._4_4_);
          }
          if (puStack_260 != auStack_258 && puStack_260 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_260 + -8));
          }
        } while (iVar31 != iVar11);
      }
      goto LAB_10941e490;
    }
  }
  puVar37 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar37 = 1;
  uStack_2a8 = puVar37 + 1;
  puStack_2a0 = (undefined8 *)0x1e;
  *(undefined1 *)((long)puVar37 + 0x22) = 0;
  *(undefined8 *)(puVar37 + 3) = 0x20252073776f722e;
  *(undefined8 *)(puVar37 + 1) = 0x6c65646f4d74706f;
  *(undefined8 *)((long)puVar37 + 0x1a) = 0x30203d3d20736c65;
  *(undefined8 *)((long)puVar37 + 0x12) = 0x646f4d6d756e2025;
  FUN_109ac3188(0xffffff29,&uStack_2a8,&UNK_10f56d306,&UNK_10f56d138,0x8e);
LAB_10941e714:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10941e718);
  (*pcVar10)();
}



/* Entry: 10941de10; end: 10941e803;  */

uint * FUN_10941de10(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,undefined8 param_5
                    ,uint *param_6,undefined8 param_7,undefined8 param_8,long *param_9,byte param_10
                    ,undefined4 param_11,long *param_12,undefined8 param_13,undefined8 param_14)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  int iVar10;
  long *plVar11;
  uint *puVar12;
  undefined4 *puVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  uint *puVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined4 auStack_340 [2];
  int *piStack_338;
  undefined8 uStack_330;
  undefined4 auStack_328 [2];
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined4 auStack_310 [2];
  uint *puStack_308;
  undefined8 uStack_300;
  undefined4 auStack_2f8 [2];
  uint *puStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  int *piStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_290;
  int **ppiStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  int iStack_268;
  int iStack_264;
  int *piStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_230;
  int **ppiStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  long lStack_170;
  undefined4 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  int iStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int iStack_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_2[1] < 1) {
    uVar15 = 0;
  }
  else {
    uVar15 = (uint)*(undefined8 *)(*(long *)(param_2 + 0x12) + (ulong)param_2[1] * 8 + -8);
  }
  if ((int)param_3[1] < 1) {
    uVar17 = 0;
  }
  else {
    uVar17 = (uint)*(undefined8 *)(*(long *)(param_3 + 0x12) + (ulong)param_3[1] * 8 + -8);
  }
  if (((uVar15 | uVar17) & 3) != 0) {
    puVar13 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    uStack_1a8 = puVar13 + 1;
    uStack_1a0 = 0x36;
    uStack_19c = 0;
    *(undefined8 *)(puVar13 + 3) = 0x6928666f657a6973;
    *(undefined8 *)(puVar13 + 1) = 0x202520317a736528;
    *(undefined1 *)((long)puVar13 + 0x3a) = 0;
    *(undefined8 *)(puVar13 + 7) = 0x7365282026262030;
    *(undefined8 *)(puVar13 + 5) = 0x203d3d202929746e;
    *(undefined8 *)(puVar13 + 0xb) = 0x29746e6928666f65;
    *(undefined8 *)(puVar13 + 9) = 0x7a6973202520327a;
    *(undefined8 *)((long)puVar13 + 0x32) = 0x30203d3d20292974;
    FUN_109ac3188(0xffffff29,&uStack_1a8,&UNK_10f56d306,&UNK_10f56d138,0x7d);
    goto LAB_10941e714;
  }
  lVar14 = *param_9;
  lVar25 = param_9[1];
  puVar21 = (uint *)((ulong)(lVar25 - lVar14) >> 2);
  uVar3 = *param_2;
  uVar4 = param_2[3];
  if ((uVar3 & 0xff8) != 0) {
    uVar4 = (uVar3 >> 3) + 1;
  }
  uVar5 = param_3[3];
  if ((*param_3 & 0xff8) != 0) {
    uVar5 = (*param_3 >> 3) + 1;
  }
  uStack_1a8._0_4_ = 0x42ff0000;
  puStack_168 = &uStack_1a0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_1a8._4_4_ = 0;
  uStack_1a0 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_17c = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  lStack_170 = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  iVar10 = (int)puVar21;
  uStack_e4 = CONCAT44(uStack_e4._4_4_,1);
  puStack_160 = &uStack_158;
  iStack_e8 = iVar10;
  FUN_109a83fd0(&uStack_1a8,2,&iStack_e8,uVar4 * 8 + 0xff8 & 0xff8 | uVar3 & 7);
  iStack_e8 = 0x42ff0000;
  lStack_a8 = (long)&uStack_e4 + 4;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_e4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  lStack_b0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_144 = CONCAT44(uStack_144._4_4_,1);
  iStack_148 = iVar10;
  puStack_a0 = &uStack_98;
  FUN_109a83fd0(&iStack_e8,2,&iStack_148,uVar5 * 8 + 0xff8 & 0xff8 | *param_3 & 7);
  if (0 < iVar10) {
    uVar22 = 0;
    lVar20 = *(long *)(param_2 + 4);
    lVar24 = *(long *)(param_3 + 4);
    lVar18 = CONCAT44(uStack_194,uStack_198);
    lVar26 = CONCAT44(uStack_d4,uStack_d8);
    do {
      iVar10 = *(int *)(*param_9 + uVar22 * 4);
      _memcpy(lVar18,lVar20 + (long)(iVar10 * (int)((ulong)(long)(int)uVar15 >> 2)) * 4,
              (long)(int)uVar15);
      _memcpy(lVar26,lVar24 + (long)(iVar10 * (int)((ulong)(long)(int)uVar17 >> 2)) * 4,
              (long)(int)uVar17);
      uVar22 = uVar22 + 1;
      lVar26 = lVar26 + (int)uVar17;
      lVar18 = lVar18 + (int)uVar15;
    } while (((ulong)(lVar25 - lVar14) >> 2 & 0x7fffffff) != uVar22);
  }
  iStack_148 = 0x42ff0000;
  piStack_2c0 = &iStack_148;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_144 = 0;
  lStack_108 = (long)&uStack_144 + 4;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_11c = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  lStack_110 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_1f8 = 0;
  uStack_208 = (undefined4 *)CONCAT44(uStack_208._4_4_,0x1010000);
  puStack_200 = &uStack_1a8;
  uStack_258 = 0;
  iStack_268 = 0x1010000;
  piStack_260 = &iStack_e8;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,0x2010000);
  uStack_2b8 = 0;
  plVar11 = param_12;
  puStack_100 = &uStack_f8;
  (**(code **)(*param_12 + 0x10))(param_12,&uStack_208,&iStack_268,&uStack_2c8);
  iVar10 = (int)plVar11;
  if (iVar10 == 0) {
LAB_10941e490:
    if (lStack_110 != 0) {
      piVar1 = (int *)(lStack_110 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar10 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&iStack_148);
      }
    }
    lStack_110 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    if (0 < (int)uStack_144) {
      lVar14 = 0;
      do {
        *(undefined4 *)(lStack_108 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)uStack_144);
    }
    if (puStack_100 != &uStack_f8 && puStack_100 != (undefined8 *)0x0) {
      _free(puStack_100[-1]);
    }
    if (lStack_b0 != 0) {
      piVar1 = (int *)(lStack_b0 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar10 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&iStack_e8);
      }
    }
    lStack_b0 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    if (0 < (int)uStack_e4) {
      lVar14 = 0;
      do {
        *(undefined4 *)(lStack_a8 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)uStack_e4);
    }
    if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
      _free(puStack_a0[-1]);
    }
    if (lStack_170 != 0) {
      piVar1 = (int *)(lStack_170 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar10 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_1a8);
      }
    }
    lStack_170 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    if (0 < uStack_1a8._4_4_) {
      lVar14 = 0;
      do {
        puStack_168[lVar14] = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_1a8._4_4_);
    }
    if (puStack_160 != &uStack_158 && puStack_160 != (undefined8 *)0x0) {
      _free(puStack_160[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return puVar21;
    }
    ___stack_chk_fail();
  }
  else {
    iVar6 = 0;
    if (iVar10 != 0) {
      iVar6 = uStack_144._4_4_ / iVar10;
    }
    if (uStack_144._4_4_ == iVar6 * iVar10) {
      if (0 < iVar10) {
        iVar23 = 0;
        puVar16 = (undefined8 *)((ulong)&iStack_268 | 4);
        puVar19 = (undefined8 *)((ulong)&uStack_2c8 | 4);
        do {
          iStack_268 = iVar23 * iVar6;
          iVar23 = iVar23 + 1;
          iStack_264 = iVar23 * iVar6;
          uStack_2c8 = 0x7fffffff80000000;
          FUN_109a84930(&uStack_208,&iStack_148,&iStack_268,&uStack_2c8);
          iStack_268 = 0x42ff0000;
          puVar16[1] = 0;
          *puVar16 = 0;
          puVar16[3] = 0;
          puVar16[2] = 0;
          puVar16[5] = 0;
          puVar16[4] = 0;
          *(undefined8 *)((long)puVar16 + 0x34) = 0;
          *(undefined8 *)((long)puVar16 + 0x2c) = 0;
          uStack_218 = 0;
          uStack_210 = 0;
          uStack_2c8 = CONCAT44(uStack_2c8._4_4_,0x42ff0000);
          puVar19[1] = 0;
          *puVar19 = 0;
          puVar19[3] = 0;
          puVar19[2] = 0;
          puVar19[5] = 0;
          puVar19[4] = 0;
          *(undefined8 *)((long)puVar19 + 0x34) = 0;
          *(undefined8 *)((long)puVar19 + 0x2c) = 0;
          uStack_278 = 0;
          uStack_270 = 0;
          lStack_2e0 = 0;
          lStack_2d8 = 0;
          lStack_2d0 = 0;
          uStack_2e8 = 0;
          auStack_2f8[0] = 0x1010000;
          uStack_300 = 0;
          auStack_310[0] = 0x1010000;
          uStack_318 = 0;
          auStack_328[0] = 0x1010000;
          auStack_340[0] = 0x2010000;
          uStack_330 = 0;
          piStack_338 = &iStack_268;
          puStack_320 = &uStack_208;
          puStack_308 = param_3;
          puStack_2f0 = param_2;
          ppiStack_288 = &piStack_2c0;
          puStack_280 = &uStack_278;
          ppiStack_228 = &piStack_260;
          puStack_220 = &uStack_218;
          (**(code **)(*param_12 + 0x18))(param_12,auStack_2f8,auStack_310,auStack_328,auStack_340);
          puVar12 = param_4;
          FUN_10941d980(param_1,param_4,param_5,&iStack_268,&uStack_2c8,&lStack_2e0,param_13,
                        param_14);
          if ((int)puVar21 < (int)puVar12) {
            auStack_2f8[0] = 0x2010000;
            uStack_2e8 = 0;
            puStack_2f0 = param_6;
            FUN_109a479a0(&uStack_208,auStack_2f8);
            FUN_10941e804(&iStack_268,param_7);
            FUN_10941e804(&uStack_2c8,param_8);
            lVar26 = param_9[1];
            lVar25 = *param_9;
            param_9[1] = lStack_2d8;
            *param_9 = lStack_2e0;
            lVar14 = param_9[2];
            param_9[2] = lStack_2d0;
            puVar21 = puVar12;
            lStack_2e0 = lVar25;
            lStack_2d8 = lVar26;
            lStack_2d0 = lVar14;
            if ((param_10 & 1) == 0) {
              puVar21 = param_2;
              FUN_10941de10(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            0);
            }
          }
          if (lStack_2e0 != 0) {
            lStack_2d8 = lStack_2e0;
            __ZdlPv();
          }
          if (lStack_290 != 0) {
            piVar1 = (int *)(lStack_290 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar2 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_2c8);
            }
          }
          lStack_290 = 0;
          uStack_2b0 = 0;
          uStack_2b8 = 0;
          uStack_2a0 = 0;
          uStack_2a8 = 0;
          if (0 < uStack_2c8._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)((long)ppiStack_288 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_2c8._4_4_);
          }
          if (puStack_280 != &uStack_278 && puStack_280 != (undefined8 *)0x0) {
            _free(puStack_280[-1]);
          }
          if (lStack_230 != 0) {
            piVar1 = (int *)(lStack_230 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar2 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&iStack_268);
            }
          }
          lStack_230 = 0;
          uStack_250 = 0;
          uStack_258 = 0;
          uStack_240 = 0;
          uStack_248 = 0;
          if (0 < iStack_264) {
            lVar14 = 0;
            do {
              *(undefined4 *)((long)ppiStack_228 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < iStack_264);
          }
          if (puStack_220 != &uStack_218 && puStack_220 != (undefined8 *)0x0) {
            _free(puStack_220[-1]);
          }
          if (lStack_1d0 != 0) {
            piVar1 = (int *)(lStack_1d0 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar2 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_208);
            }
          }
          lStack_1d0 = 0;
          uStack_1f0 = 0;
          uStack_1f8 = 0;
          uStack_1e0 = 0;
          uStack_1e8 = 0;
          if (0 < uStack_208._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(lStack_1c8 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_208._4_4_);
          }
          if (puStack_1c0 != auStack_1b8 && puStack_1c0 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_1c0 + -8));
          }
        } while (iVar23 != iVar10);
      }
      goto LAB_10941e490;
    }
  }
  puVar13 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar13 = 1;
  uStack_208 = puVar13 + 1;
  puStack_200 = (undefined8 *)0x1e;
  *(undefined1 *)((long)puVar13 + 0x22) = 0;
  *(undefined8 *)(puVar13 + 3) = 0x20252073776f722e;
  *(undefined8 *)(puVar13 + 1) = 0x6c65646f4d74706f;
  *(undefined8 *)((long)puVar13 + 0x1a) = 0x30203d3d20736c65;
  *(undefined8 *)((long)puVar13 + 0x12) = 0x646f4d6d756e2025;
  FUN_109ac3188(0xffffff29,&uStack_208,&UNK_10f56d306,&UNK_10f56d138,0x8e);
LAB_10941e714:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10941e718);
  (*pcVar9)();
}



/* Entry: 10941e804; end: 10941e9ab;  */

void FUN_10941e804(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  piVar2 = (int *)((long)param_1 + 4);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_70 = (ulong)&uStack_b0 | 8;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_68 = (undefined8 *)param_1[9];
  if (*piVar2 < 3) {
    uStack_60 = *puStack_68;
    uStack_58 = puStack_68[1];
    puVar1 = puStack_68;
    puStack_68 = &uStack_60;
  }
  else {
    uStack_70 = param_1[8];
    puVar1 = param_1 + 10;
    param_1[8] = param_1 + 1;
    param_1[9] = puVar1;
  }
  *(undefined4 *)param_1 = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  iVar4 = *(int *)((long)param_2 + 4);
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  param_1[5] = uVar9;
  param_1[4] = uVar8;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  puVar3 = param_1 + 10;
  if (puVar1 != puVar3) {
    _free(puVar1[-1]);
    param_1[8] = param_1 + 1;
    param_1[9] = puVar3;
    iVar4 = *(int *)((long)param_2 + 4);
    puVar1 = puVar3;
  }
  puVar3 = (undefined8 *)param_2[9];
  if (iVar4 < 3) {
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar3;
    puVar3 = param_2 + 10;
    param_2[8] = param_2 + 1;
    param_2[9] = puVar3;
  }
  param_2[1] = uStack_a8;
  *param_2 = uStack_b0;
  param_2[3] = uStack_98;
  param_2[2] = uStack_a0;
  param_2[5] = uStack_88;
  param_2[4] = uStack_90;
  param_2[7] = uStack_78;
  param_2[6] = uStack_80;
  puVar1 = param_2 + 10;
  if (puVar3 != puVar1) {
    _free(puVar3[-1]);
    param_2[8] = param_2 + 1;
    param_2[9] = puVar1;
    puVar3 = puVar1;
  }
  if (uStack_b0._4_4_ < 3) {
    puVar1 = (undefined8 *)((ulong)&uStack_b0 | 4);
    *puVar3 = *puStack_68;
    puVar3[1] = puStack_68[1];
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x42ff0000);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    *(undefined8 *)((long)puVar1 + 0x34) = 0;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0;
    if (puStack_68 != &uStack_60) {
      _free(puStack_68[-1]);
    }
  }
  else {
    param_2[8] = uStack_70;
    param_2[9] = puStack_68;
  }
  return;
}



/* Entry: 10941e9ac; end: 10941eadb;  */

undefined8 * FUN_10941e9ac(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 auStack_a8 [2];
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_1[1] = 0x100000003;
  *param_1 = 0x242ff4006;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  uStack_50 = (ulong)&uStack_90 | 8;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_88 = 0x100000003;
  uStack_90 = 0x242ff4006;
  uStack_38 = 8;
  uStack_40 = 8;
  lStack_70 = param_2 + 0x18;
  auStack_a8[0] = 0x2010000;
  uStack_98 = 0;
  puStack_a0 = param_1;
  lStack_80 = param_2;
  lStack_78 = param_2;
  lStack_68 = lStack_70;
  puStack_48 = &uStack_40;
  FUN_109a479a0(&uStack_90,auStack_a8);
  if (lStack_58 != 0) {
    piVar1 = (int *)(lStack_58 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_90);
    }
  }
  lStack_58 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  if (0 < uStack_90._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_50 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_90._4_4_);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return param_1;
}



/* Entry: 10941eadc; end: 10941ec07;  */

void FUN_10941eadc(long *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_1[3] != 0) {
    pcVar2 = (char *)*param_1;
    cVar1 = *pcVar2;
    pcVar3 = pcVar2;
    while (cVar1 < -1) {
      uVar6 = *(undefined8 *)pcVar3;
      uVar5 = CONCAT17(-(-2 < (char)((ulong)uVar6 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar6 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar6 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar6 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar6 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar6 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar6 >> 8)),-(-2 < (char)uVar6))))))));
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      pcVar3 = pcVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3);
      cVar1 = *pcVar3;
    }
    if (cVar1 == -1) {
      pcVar3 = (char *)0x0;
    }
    if (pcVar3 == param_2) {
      param_1[3] = 0;
      lVar4 = param_1[2];
      _memset(pcVar2,0x80,lVar4 + 8);
      pcVar2[lVar4] = -1;
      uVar5 = param_1[2];
      lVar4 = 6;
      if (uVar5 != 7) {
        lVar4 = uVar5 - (uVar5 >> 3);
      }
      *(long *)(*param_1 + -8) = lVar4 - param_1[3];
    }
    else if (param_2 != (char *)0x0) {
      do {
        pcVar3 = param_2 + 1;
        cVar1 = *pcVar3;
        while (cVar1 < -1) {
          uVar6 = *(undefined8 *)pcVar3;
          uVar5 = CONCAT17(-(-2 < (char)((ulong)uVar6 >> 0x38)),
                           CONCAT16(-(-2 < (char)((ulong)uVar6 >> 0x30)),
                                    CONCAT15(-(-2 < (char)((ulong)uVar6 >> 0x28)),
                                             CONCAT14(-(-2 < (char)((ulong)uVar6 >> 0x20)),
                                                      CONCAT13(-(-2 < (char)((ulong)uVar6 >> 0x18)),
                                                               CONCAT12(-(-2 < (char)((ulong)uVar6
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-2 < (char)((
                                                  ulong)uVar6 >> 8)),-(-2 < (char)uVar6))))))));
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          pcVar3 = pcVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3);
          cVar1 = *pcVar3;
        }
        func_0x00010ae6cb48(param_1,param_2,4);
        param_2 = pcVar3;
      } while (cVar1 != -1);
    }
  }
  return;
}



/* Entry: 10941ec08; end: 10941ecc7;  */

ulong FUN_10941ec08(undefined8 param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
}



/* Entry: 10941ecc8; end: 10941ed9b;  */

undefined1  [16] FUN_10941ecc8(ulong *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar9;
  byte bVar16;
  undefined1 auVar17 [16];
  
  lVar6 = 0;
  uVar7 = *param_1;
  Hint_Prefetch(uVar7,0,2,0);
  uVar3 = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  uVar3 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar3 * -0x622015f714c7d297;
  bVar4 = (byte)uVar3 & 0x7f;
  uVar3 = uVar3 >> 7 ^ uVar7 >> 0xc;
  while( true ) {
    uVar3 = uVar3 & param_1[2];
    uVar9 = *(undefined8 *)(uVar7 + uVar3);
    bVar10 = (byte)((ulong)uVar9 >> 8);
    bVar11 = (byte)((ulong)uVar9 >> 0x10);
    bVar12 = (byte)((ulong)uVar9 >> 0x18);
    bVar13 = (byte)((ulong)uVar9 >> 0x20);
    bVar14 = (byte)((ulong)uVar9 >> 0x28);
    bVar15 = (byte)((ulong)uVar9 >> 0x30);
    bVar16 = (byte)((ulong)uVar9 >> 0x38);
    uVar8 = CONCAT17(-(bVar16 == bVar4),
                     CONCAT16(-(bVar15 == bVar4),
                              CONCAT15(-(bVar14 == bVar4),
                                       CONCAT14(-(bVar13 == bVar4),
                                                CONCAT13(-(bVar12 == bVar4),
                                                         CONCAT12(-(bVar11 == bVar4),
                                                                  CONCAT11(-(bVar10 == bVar4),
                                                                           -((byte)uVar9 == bVar4)))
                                                        ))))) & 0x8080808080808080;
    if (uVar8 != 0) {
      do {
        uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar5 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]
                          );
        if (*(uint *)(param_1[1] + (long)puVar5 * 4) == *param_2) {
          uVar9 = 0;
          goto LAB_10941ed90;
        }
        uVar8 = uVar8 - 1 & uVar8;
      } while (uVar8 != 0);
    }
    if (CONCAT17(-(bVar16 == 0x80),
                 CONCAT16(-(bVar15 == 0x80),
                          CONCAT15(-(bVar14 == 0x80),
                                   CONCAT14(-(bVar13 == 0x80),
                                            CONCAT13(-(bVar12 == 0x80),
                                                     CONCAT12(-(bVar11 == 0x80),
                                                              CONCAT11(-(bVar10 == 0x80),
                                                                       -((byte)uVar9 == 0x80))))))))
        != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  FUN_10941ed9c();
  uVar9 = 1;
  puVar5 = param_1;
LAB_10941ed90:
  auVar17._8_8_ = uVar9;
  auVar17._0_8_ = puVar5;
  return auVar17;
}



/* Entry: 10941ed9c; end: 10941ee8b;  */

void FUN_10941ed9c(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10941ef9c(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10941ee8c; end: 10941ef9b;  */

void FUN_10941ee8c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar13 = param_1[2];
  param_1[2] = param_2;
  func_0x0001089b8c68();
  if (uVar13 != 0) {
    uVar5 = 0;
    uVar6 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar5)) {
        uVar7 = (long)&PTR_LOOP_110c8acd8 + (ulong)*(uint *)(uVar2 + uVar5 * 4);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar7;
        uVar9 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar7 * -0x622015f714c7d297;
        uVar7 = *param_1;
        uVar8 = param_1[2];
        uVar10 = (uVar9 >> 7 ^ uVar7 >> 0xc) & uVar8;
        uVar14 = *(undefined8 *)(uVar7 + uVar10);
        uVar12 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar14 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar14 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar14 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar14 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar14 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar14 >> 8) < -1),-((char)uVar14 < -1))))))));
        if (uVar12 == 0) {
          lVar11 = 8;
          do {
            uVar10 = uVar10 + lVar11 & uVar8;
            uVar14 = *(undefined8 *)(uVar7 + uVar10);
            uVar12 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar14 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar14 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar14 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar14 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) < -1),
                                                           -((char)uVar14 < -1))))))));
            lVar11 = lVar11 + 8;
          } while (uVar12 == 0);
        }
        uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar8;
        bVar3 = (byte)uVar9 & 0x7f;
        *(byte *)(uVar7 + uVar10) = bVar3;
        *(byte *)(uVar7 + (uVar10 - 7 & uVar8) + (uVar8 & 7)) = bVar3;
        *(undefined4 *)(uVar6 + uVar10 * 4) = *(undefined4 *)(uVar2 + uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10941ef9c; end: 10941efef;  */

void FUN_10941ef9c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  uVar5 = param_1[2];
  if ((8 < uVar5) && (param_1[3] << 5 <= uVar5 * 0x19)) {
    func_0x00010ae6c914(param_1,&UNK_110af5f50,&stack0xffffffffffffffec);
    return;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar13 = param_1[2];
  param_1[2] = uVar5 << 1 | 1;
  func_0x0001089b8c68();
  if (uVar13 != 0) {
    uVar5 = 0;
    uVar6 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar5)) {
        uVar7 = (long)&PTR_LOOP_110c8acd8 + (ulong)*(uint *)(uVar2 + uVar5 * 4);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar7;
        uVar9 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar7 * -0x622015f714c7d297;
        uVar7 = *param_1;
        uVar8 = param_1[2];
        uVar10 = (uVar9 >> 7 ^ uVar7 >> 0xc) & uVar8;
        uVar14 = *(undefined8 *)(uVar7 + uVar10);
        uVar12 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar14 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar14 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar14 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar14 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar14 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar14 >> 8) < -1),-((char)uVar14 < -1))))))));
        if (uVar12 == 0) {
          lVar11 = 8;
          do {
            uVar10 = uVar10 + lVar11 & uVar8;
            uVar14 = *(undefined8 *)(uVar7 + uVar10);
            uVar12 = CONCAT17(-((char)((ulong)uVar14 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar14 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar14 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar14 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar14 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) < -1),
                                                           -((char)uVar14 < -1))))))));
            lVar11 = lVar11 + 8;
          } while (uVar12 == 0);
        }
        uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar8;
        bVar3 = (byte)uVar9 & 0x7f;
        *(byte *)(uVar7 + uVar10) = bVar3;
        *(byte *)(uVar7 + (uVar10 - 7 & uVar8) + (uVar8 & 7)) = bVar3;
        *(undefined4 *)(uVar6 + uVar10 * 4) = *(undefined4 *)(uVar2 + uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10941eff0; end: 10941f74f;  */

/* WARNING: Removing unreachable block (ram,0x00010941f178) */
/* WARNING: Removing unreachable block (ram,0x00010941f130) */
/* WARNING: Removing unreachable block (ram,0x00010941f420) */
/* WARNING: Removing unreachable block (ram,0x00010941f434) */
/* WARNING: Removing unreachable block (ram,0x00010941f440) */
/* WARNING: Removing unreachable block (ram,0x00010941f44c) */
/* WARNING: Removing unreachable block (ram,0x00010941f454) */
/* WARNING: Removing unreachable block (ram,0x00010941f45c) */
/* WARNING: Removing unreachable block (ram,0x00010941f464) */
/* WARNING: Removing unreachable block (ram,0x00010941f46c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10941eff0(long *param_1,long *param_2)

{
  long ****pppplVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long ***ppplVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plStack_e8;
  undefined8 ****ppppuStack_e0;
  long ****pppplStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  char cStack_a9;
  long *plStack_78;
  undefined8 *****pppppuStack_70;
  long *plStack_68;
  undefined8 ****ppppuStack_60;
  long ***ppplStack_58;
  long ***ppplStack_50;
  byte bStack_48;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cStack_a9 = '\x10';
  uStack_b8 = 0x6e6e642e6e6f6974;
  uStack_c0 = 0x61746e656d676573;
  uStack_b0 = 0;
  (**(code **)(*param_2 + 0x10))(&plStack_78,param_2,&uStack_c0);
  if (cStack_a9 < '\0') {
    __ZdlPv(uStack_c0);
  }
  plVar8 = plStack_78;
  (**(code **)(*plStack_78 + 0x28))();
  if (((ulong)plVar8 & 1) == 0) {
    func_0x000105688514(&UNK_10f56d399);
LAB_10941f598:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10941f59c);
    (*pcVar5)();
  }
  ppppuStack_60 = (undefined8 ****)0x0;
  ppplStack_58 = (long ***)0x0;
  ppplStack_50 = (long ***)0x0;
  pppplStack_d8 = (long ****)&ppppuStack_60;
  ppppuStack_d0 = (undefined8 ****)((ulong)ppppuStack_d0 & 0xffffffffffffff00);
  ppplVar6 = (long ***)0x18;
  __Znwm();
  ppplStack_58 = ppplVar6 + 3;
  *ppplVar6 = (long **)0x61746164;
  *(undefined1 *)((long)ppplVar6 + 0x17) = 4;
  pppplStack_d8 = (undefined8 ****)0x0;
  ppppuStack_d0 = (undefined8 ****)0x0;
  ppppuStack_c8 = (undefined8 ****)0x0;
  pppppuStack_70 = &pppplStack_d8;
  plStack_68 = (long *)((ulong)plStack_68 & 0xffffffffffffff00);
  ppppuVar7 = (undefined8 ****)0x18;
  ppppuStack_60 = (undefined8 ****)ppplVar6;
  ppplStack_50 = ppplStack_58;
  __Znwm();
  ppppuStack_d0 = ppppuVar7 + 3;
  *ppppuVar7 = (undefined8 ***)0x305f74757074756f;
  ppppuVar7[1] = (undefined8 ***)0x0;
  *(undefined1 *)((long)ppppuVar7 + 0x17) = 8;
  pppplStack_d8 = ppppuVar7;
  ppppuStack_c8 = ppppuStack_d0;
  FUN_10941f750(&uStack_c0,&ppppuStack_60,&pppplStack_d8);
  if (pppplStack_d8 != (undefined8 ****)0x0) {
    for (; ppppuStack_d0 != pppplStack_d8; ppppuStack_d0 = ppppuStack_d0 + -3) {
    }
    ppppuStack_d0 = pppplStack_d8;
    __ZdlPv(pppplStack_d8);
  }
  if (ppppuStack_60 != (undefined8 ****)0x0) {
    for (; (undefined8 ****)ppplStack_58 != ppppuStack_60; ppplStack_58 = ppplStack_58 + -3) {
    }
    ppplStack_58 = (long ***)ppppuStack_60;
    __ZdlPv(ppppuStack_60);
  }
  plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,1);
  (**(code **)(*plStack_78 + 0x20))(&ppppuStack_e0);
  ppppuVar7 = ppppuStack_e0;
  pppplStack_d8 = ppppuStack_e0;
  if (ppppuStack_e0 == (undefined8 ****)0x0) {
    ppppuStack_d0 = (undefined8 ****)0x0;
    ppppuStack_60 = (undefined8 ****)0x0;
    ppplStack_58 = (long ***)0x0;
    bStack_48 = 2;
    uStack_40 = 0;
    uStack_3e = 0;
    FUN_10952d0c4(&UNK_10f5abd4d,&UNK_10f5abcd1,&UNK_10f5abd5a);
    goto LAB_10941f598;
  }
  plVar8 = (long *)0x20;
  __Znwm();
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  *plVar8 = (long)&PTR_DAT_110af5ea0;
  plVar8[2] = 0;
  plVar8[3] = (long)ppppuStack_e0;
  ppppuStack_e0 = (undefined8 ****)0x0;
  ppppuStack_60 = ppppuVar7;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = *plVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bStack_48 = 2;
  uStack_40 = 0;
  uStack_3e = 0;
  do {
    lVar10 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  ppppuStack_d0 = (undefined8 ****)plVar8;
  ppplStack_58 = (long ***)plVar8;
  if (lVar10 == 0) {
    (**(code **)(*plVar8 + 0x10))();
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  ppppuVar7 = (undefined8 ****)0x4;
  __Znwm();
  ppppuStack_d0 = (undefined8 ****)((long)ppppuVar7 + 4);
  *(undefined4 *)ppppuVar7 = 1;
  plVar8 = (long *)0x120;
  pppplStack_d8 = ppppuVar7;
  ppppuStack_c8 = ppppuStack_d0;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110af4c20;
  pppplVar1 = (long ****)(plVar8 + 3);
  FUN_10938d394(pppplVar1,&uStack_c0,&plStack_e8,&ppppuStack_60,&pppplStack_d8);
  pppppuStack_70 = (undefined8 *****)pppplVar1;
  plStack_68 = plVar8;
  if (pppplStack_d8 != (undefined8 ****)0x0) {
    ppppuStack_d0 = pppplStack_d8;
    __ZdlPv();
  }
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_48])(&ppppuStack_60);
  ppppuVar7 = ppppuStack_e0;
  ppppuStack_e0 = (undefined8 ****)0x0;
  if (ppppuVar7 != (undefined8 ****)0x0) {
    (*(code *)(*ppppuVar7)[1])();
  }
  plVar8 = (long *)0x40;
  __Znwm();
  func_0x000109d056f4();
  pppplStack_d8 = (long ****)(plVar8 + 3);
  ppppuStack_d0 = (undefined8 ****)plVar8;
  if (plVar8[4] == 0) {
    plVar9 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = plVar8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8[3] = (long)(plVar8 + 3);
    plVar8[4] = (long)plVar8;
LAB_10941f368:
    plVar9 = plVar8 + 1;
    do {
      lVar10 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  else if (*(long *)(plVar8[4] + 8) == -1) {
    plVar9 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = plVar8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8[3] = (long)(plVar8 + 3);
    plVar8[4] = (long)plVar8;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10941f368;
  }
  func_0x000109d03fe8(&plStack_e8,pppplStack_d8,&pppppuStack_70,0);
  plVar8 = plStack_e8;
  plStack_e8 = (long *)0x0;
  FUN_10938d600(&ppppuStack_60,plVar8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 1;
    do {
      lVar10 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (plStack_e8 != (long *)0x0) {
    plVar9 = plStack_e8 + 1;
    do {
      lVar10 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_e8 + 0x10))();
      *param_1 = (long)ppppuStack_60;
      goto LAB_10941f498;
    }
  }
  *param_1 = (long)ppppuStack_60;
LAB_10941f498:
  ppppuVar7 = ppppuStack_d0;
  ppppuStack_60 = (undefined8 ****)0x0;
  if (ppppuStack_d0 != (undefined8 ****)0x0) {
    plVar9 = (long *)(ppppuStack_d0 + 1);
    do {
      lVar10 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)((long)*ppppuStack_d0 + 0x10))(ppppuStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar7);
    }
  }
  plVar9 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  func_0x00010942075c(&uStack_c0);
  plVar9 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (plStack_e8 != (long *)0x0) {
    plVar8 = plStack_e8 + 1;
    do {
      lVar10 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_e8 + 0x10))();
    }
  }
  func_0x000109d0503c(&pppplStack_d8);
  FUN_10941f934(&pppppuStack_70);
  func_0x00010942075c(&uStack_c0);
  do {
    plVar8 = plStack_78;
    plStack_78 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    __Unwind_Resume(plVar9);
    FUN_10941f8c4(&pppplStack_d8);
    FUN_10941f8c4(&ppppuStack_60);
  } while( true );
}



/* Entry: 10941f750; end: 10941f8c3;  */

/* WARNING: Removing unreachable block (ram,0x00010941f7e8) */
/* WARNING: Removing unreachable block (ram,0x00010941f85c) */

undefined8 FUN_10941f750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  
  FUN_109378d5c(&lStack_48,param_2);
  FUN_109378d5c(&lStack_60,param_3);
  FUN_109379174(param_1,&lStack_48,&lStack_60);
  lVar1 = lStack_60;
  if (lStack_60 != 0) {
    for (; lStack_58 != lVar1; lStack_58 = lStack_58 + -0x58) {
      if ((*(char *)(lStack_58 + -8) == '\x01') && (*(long *)(lStack_58 + -0x20) != 0)) {
        *(long *)(lStack_58 + -0x18) = *(long *)(lStack_58 + -0x20);
        __ZdlPv();
      }
    }
    lStack_58 = lVar1;
    __ZdlPv(lStack_60);
  }
  lVar2 = lStack_48;
  lVar1 = lStack_40;
  if (lStack_48 != 0) {
    for (; lVar1 != lVar2; lVar1 = lVar1 + -0x58) {
      if ((*(char *)(lVar1 + -8) == '\x01') && (*(long *)(lVar1 + -0x20) != 0)) {
        *(long *)(lVar1 + -0x18) = *(long *)(lVar1 + -0x20);
        __ZdlPv();
      }
    }
    lStack_40 = lVar2;
    __ZdlPv(lStack_48);
  }
  return param_1;
}



/* Entry: 10941f8c4; end: 10941f933;  */

/* WARNING: Removing unreachable block (ram,0x00010941f908) */

long * FUN_10941f8c4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10941f934; end: 10941f997;  */

long FUN_10941f934(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10941f998; end: 1094203e7;  */

void FUN_10941f998(undefined4 *param_1,uint *param_2,double *param_3,undefined8 param_4)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  code *pcVar11;
  long **pplVar12;
  long *plVar13;
  undefined4 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  int iVar24;
  float fVar25;
  int iVar30;
  ulong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar34;
  int iVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 auStack_2c0 [2];
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined4 auStack_2a8 [2];
  long *plStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  double dStack_260;
  double dStack_258;
  undefined8 uStack_250;
  undefined4 auStack_248 [2];
  undefined4 *puStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined **ppuStack_208;
  uint *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  long *plStack_1d0;
  char cStack_1c0;
  undefined8 uStack_1b8;
  uint uStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 *puStack_178;
  undefined4 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  undefined4 *puStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  char cStack_90;
  long lStack_88;
  
  puStack_200 = &uStack_1b0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1b0 = 0x42ff0000;
  puStack_170 = &uStack_1a8;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  iStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  puStack_178 = (undefined4 *)0x0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_128 = 0;
  uStack_138._0_4_ = 0x1010000;
  ppuStack_208._0_4_ = 0x2010000;
  uStack_1f8 = 0;
  iVar30 = (int)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
  iVar24 = (int)*(undefined8 *)(param_2 + 2);
  auVar32._0_8_ = (long)iVar24;
  auVar32._8_8_ = (long)iVar30;
  if (iVar24 <= iVar30) {
    iVar24 = iVar30;
  }
  auVar32 = NEON_scvtf(auVar32,8);
  uVar26 = NEON_rev64(CONCAT44((int)(long)(auVar32._8_8_ * (128.0 / (double)iVar24)),
                               (int)(long)(auVar32._0_8_ * (128.0 / (double)iVar24))),4);
  iVar24 = (int)uVar26;
  iVar30 = (int)(uVar26 >> 0x20);
  uVar20 = CONCAT44(iVar30 + (-(uint)((long)uVar26 < 0) >> 0x1d),
                    iVar24 + (-(uint)(iVar24 < 0) >> 0x1d)) & 0xfffffff8fffffff8;
  iVar34 = (int)uVar20;
  iVar35 = (int)(uVar20 >> 0x20);
  ppuStack_d8 = (undefined **)
                (uVar26 ^ (uVar26 ^ CONCAT44(iVar35 + 8,iVar34 + 8)) &
                          ~CONCAT44(-(uint)(iVar30 == iVar35),-(uint)(iVar24 == iVar34)));
  puStack_168 = &uStack_160;
  uStack_130 = param_2;
  FUN_109b0f718(0x4008000000000000,0,&uStack_138,&ppuStack_208,&ppuStack_d8,1);
  if ((uStack_1b0 & 0xff8) == 0) {
    uStack_138._0_4_ = 0x1010000;
    puStack_200 = &uStack_1b0;
    uStack_128 = 0;
    ppuStack_208._0_4_ = 0x2010000;
    uStack_1f8 = 0;
    uStack_130 = puStack_200;
    FUN_109ac9fc8(&uStack_138,&ppuStack_208,8,0);
  }
  dVar28 = param_3[1];
  dVar27 = param_3[3];
  auVar33._0_8_ = -*param_3;
  auVar33[8] = SUB81(dVar28,0);
  auVar33[9] = (char)((ulong)dVar28 >> 8);
  auVar33[10] = (char)((ulong)dVar28 >> 0x10);
  auVar33[0xb] = (char)((ulong)dVar28 >> 0x18);
  auVar33[0xc] = (char)((ulong)dVar28 >> 0x20);
  auVar33[0xd] = (char)((ulong)dVar28 >> 0x28);
  auVar33[0xe] = (char)((ulong)dVar28 >> 0x30);
  auVar33[0xf] = (byte)((ulong)dVar28 >> 0x38) ^ 0x80;
  dVar29 = -param_3[2];
  dVar28 = auVar33._8_8_;
  dVar37 = dVar29 * -0.0 - dVar28;
  dVar38 = auVar33._0_8_ + dVar29 * 0.0;
  dVar36 = dVar28 * -0.0 + auVar33._0_8_ * 0.0;
  dVar37 = dVar37 + dVar37;
  dVar38 = dVar38 + dVar38;
  dVar36 = dVar36 + dVar36;
  dStack_260 = dVar37 * dVar27 + 0.0 + -dVar29 * dVar38 + dVar36 * dVar28;
  dStack_258 = dVar38 * dVar27 + 0.0 + -(auVar33._0_8_ * dVar36) + dVar37 * dVar29;
  dVar27 = ABS(dVar36 * dVar27 + -1.0 + -dVar28 * dVar37 + auVar33._0_8_ * dVar38);
  _acos();
  dVar28 = dStack_258;
  _atan2();
  dVar28 = dVar28 / 0.017453292519943295;
  dVar29 = dVar28 + 360.0;
  if (0.0 <= dVar28) {
    dVar29 = dVar28;
  }
  uVar26 = 3;
  if (10.0 <= dVar27 / 0.017453292519943295) {
    uVar26 = (ulong)((dVar29 * 0.017453292519943295) / 1.5707963267948966);
    uVar3 = 3;
    if ((uVar26 & 3) != 0) {
      uVar3 = ((uint)uVar26 & 3) - 1;
    }
    uVar26 = (ulong)uVar3;
  }
  FUN_1094203e8(&uStack_1b0,uVar26);
  uStack_138 = (undefined *)CONCAT44(uStack_138._4_4_,0x2010000);
  uStack_128 = 0;
  uStack_130 = &uStack_1b0;
  FUN_109a41858(0x3ff0000000000000,0,&uStack_1b0,&uStack_138,5);
  uVar3 = uStack_1b0;
  uVar16 = CONCAT44(uStack_1a4,uStack_1a8);
  uStack_1b8 = 0x100000001;
  uVar9 = CONCAT44(uStack_19c,uStack_1a0);
  ppuStack_d8 = (undefined **)&UNK_109d138c8;
  uStack_d0 = &PTR_DAT_110b3e838;
  puStack_c8 = &UNK_109d0f6a8;
  uStack_138 = &UNK_109d138c8;
  func_0x000109d138d4(&uStack_130,&uStack_d0);
  func_0x000109cde3b8(&plStack_230,uVar9,&uStack_138);
  ppuStack_208 = &PTR_DAT_1108a5c28;
  puStack_200 = (uint *)NEON_rev64(uVar16,4);
  uStack_1f8 = CONCAT44(1,(uVar3 >> 3 & 0x1ff) + 1);
  uStack_1f0 = uStack_1b8;
  plStack_1e0 = plStack_228;
  plStack_1e8 = plStack_230;
  plStack_230 = (long *)0x0;
  plStack_228 = (long *)0x0;
  uStack_1d8 = 0;
  cStack_1c0 = '\0';
  (**(code **)uStack_130)(&uStack_130);
  (*(code *)*uStack_d0)(&uStack_d0);
  func_0x000109cdb2c4(&plStack_230,param_4,&ppuStack_208,1);
  uStack_128 = CONCAT17(8,(undefined7)uStack_128);
  uStack_138 = (undefined *)0x305f74757074756f;
  uStack_130 = (uint *)((ulong)uStack_130 & 0xffffffffffffff00);
  pplVar12 = &plStack_230;
  FUN_10938e710(pplVar12,&uStack_138);
  if (pplVar12 == (long **)0x0) {
    FUN_109262df8(&UNK_10f639994);
  }
  else {
    func_0x000109d0e828(&ppuStack_d8,pplVar12 + 5,&uStack_1b8,0);
    if (uStack_128 < 0) {
      __ZdlPv(uStack_138);
    }
    uVar8 = (int)puStack_c8 * 8 - 3;
    uVar3 = uVar8 & 0xfff;
    uStack_138 = (undefined *)CONCAT44(2,uVar3 | 0x42ff0000);
    puStack_f8 = &uStack_130;
    uStack_130 = (uint *)CONCAT44((int)uStack_d0,uStack_d0._4_4_);
    uStack_128 = lStack_b8;
    lStack_120 = lStack_b8;
    lStack_110 = 0;
    lStack_118 = 0;
    puStack_100 = (undefined4 *)0x0;
    plStack_108 = (long *)0x0;
    plVar23 = &lStack_e8;
    lStack_e8 = 0;
    uStack_e0 = 0;
    plStack_f0 = plVar23;
    if (((long)(int)uStack_d0 * (long)uStack_d0._4_4_ == 0) || (lStack_b8 != 0)) {
      uVar8 = (uVar8 >> 1 & 0x7fc) + 4;
      uStack_e0 = (ulong)uVar8;
      uStack_138 = (undefined *)CONCAT44(2,uVar3 | 0x42ff4000);
      lStack_e8 = (long)(int)uVar8 * (long)(int)uStack_d0;
      lStack_118 = lStack_b8 + lStack_e8 * uStack_d0._4_4_;
      *param_1 = 0x42ff0000;
      *(undefined8 *)(param_1 + 3) = 0;
      *(undefined8 *)(param_1 + 1) = 0;
      *(undefined8 *)(param_1 + 7) = 0;
      *(undefined8 *)(param_1 + 5) = 0;
      *(undefined8 *)(param_1 + 0xb) = 0;
      *(undefined8 *)(param_1 + 9) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
      *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
      *(undefined8 *)(param_1 + 0x16) = 0;
      uStack_150._0_4_ = uStack_d0._4_4_;
      uStack_150._4_4_ = (int)uStack_d0;
      lStack_110 = lStack_118;
      FUN_109a83fd0(param_1,2,&uStack_150,0);
      if (0 < (int)uStack_130) {
        lVar17 = 0;
        uVar20 = (ulong)uStack_130._4_4_;
        do {
          if (0 < (int)uVar20) {
            lVar18 = 0;
            lVar19 = 0xc;
            do {
              lVar21 = uStack_128 + lVar17 * *plStack_f0;
              pfVar2 = (float *)(lVar21 + lVar19);
              fVar25 = pfVar2[-3];
              fVar31 = pfVar2[-2];
              pfVar4 = pfVar2 + -2;
              if (fVar31 <= fVar25) {
                pfVar4 = pfVar2 + -3;
                fVar31 = fVar25;
              }
              fVar25 = pfVar2[-1];
              pfVar5 = pfVar2 + -1;
              if (fVar25 <= fVar31) {
                pfVar5 = pfVar4;
                fVar25 = fVar31;
              }
              pfVar4 = pfVar2;
              fVar31 = *pfVar2;
              if (*pfVar2 <= fVar25) {
                pfVar4 = pfVar5;
                fVar31 = fVar25;
              }
              fVar25 = pfVar2[1];
              pfVar5 = pfVar2 + 1;
              if (fVar25 <= fVar31) {
                pfVar5 = pfVar4;
                fVar25 = fVar31;
              }
              fVar31 = pfVar2[2];
              pfVar4 = pfVar2 + 2;
              if (fVar31 <= fVar25) {
                pfVar4 = pfVar5;
                fVar31 = fVar25;
              }
              pfVar5 = pfVar2 + 3;
              if (pfVar2[3] <= fVar31) {
                pfVar5 = pfVar4;
              }
              lVar21 = lVar19 + (lVar21 - (long)pfVar5);
              *(char *)(*(long *)(param_1 + 4) + lVar17 * **(long **)(param_1 + 0x12) + lVar18) =
                   -(*pfVar5 <= 0.7 || lVar21 != 0 && lVar21 != -8);
              lVar18 = lVar18 + 1;
              uVar20 = (ulong)(int)uStack_130._4_4_;
              lVar19 = lVar19 + 0x1c;
            } while (lVar18 < (long)uVar20);
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_130);
      }
      FUN_1094203e8(param_1,-(int)uVar26 & 3);
      uStack_140 = 0;
      uStack_150 = (undefined4 *)CONCAT44(uStack_150._4_4_,0x1010000);
      auStack_248[0] = 0x2010000;
      uStack_238 = 0;
      uStack_250 = NEON_rev64(*(undefined8 *)(param_2 + 2),4);
      puVar14 = auStack_248;
      puStack_240 = param_1;
      puStack_148 = param_1;
      FUN_109b0f718(0x3ff0000000000000,0,&uStack_150,puVar14,&uStack_250,1);
      if (puStack_100 != (undefined4 *)0x0) {
        piVar1 = puStack_100 + 5;
        do {
          iVar24 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar24 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((iVar24 + -1 == 0) && (puVar14 = puStack_100, puStack_100 != (undefined4 *)0x0)) {
          plVar13 = *(long **)(puStack_100 + 2);
          if ((*(long **)(puStack_100 + 2) == (long *)0x0) &&
             ((plVar13 = plStack_108, plStack_108 == (long *)0x0 &&
              (plVar13 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar13 = plRam000000011382bb80;
          }
          (**(code **)(*plVar13 + 0x30))();
          puVar14 = puStack_100;
        }
      }
      puStack_100 = (undefined4 *)0x0;
      lStack_120 = 0;
      uStack_128 = 0;
      lStack_110 = 0;
      lStack_118 = 0;
      if (0 < uStack_138._4_4_) {
        lVar17 = 0;
        do {
          *(undefined4 *)((long)puStack_f8 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_138._4_4_);
      }
      if (plStack_f0 != plVar23 && plStack_f0 != (long *)0x0) {
        _free(plStack_f0[-1]);
      }
      ppuStack_d8 = &PTR_DAT_1108a5c28;
      if ((cStack_90 == '\x01') && (lStack_a8 != 0)) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      if (plStack_b0 != (long *)0x0) {
        plVar13 = plStack_b0 + 1;
        do {
          lVar17 = *plVar13;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = lVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
        }
      }
      while (plVar13 = plStack_220, plStack_220 != (long *)0x0) {
        while( true ) {
          plVar23 = (long *)*plVar13;
          plVar13[5] = (long)&PTR_DAT_1108a5c28;
          if (((char)plVar13[0xe] == '\x01') && (plVar13[0xb] != 0)) {
            plVar13[0xc] = plVar13[0xb];
            __ZdlPv();
          }
          plVar22 = (long *)plVar13[10];
          if (plVar22 != (long *)0x0) {
            plVar15 = plVar22 + 1;
            do {
              lVar17 = *plVar15;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar7) {
                *plVar15 = lVar17 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
            }
          }
          if (*(char *)((long)plVar13 + 0x27) < '\0') break;
          __ZdlPv(plVar13);
          plVar13 = plVar23;
          if (plVar23 == (long *)0x0) goto LAB_109420124;
        }
        __ZdlPv(plVar13[2]);
        __ZdlPv(plVar13);
        plStack_220 = plVar23;
      }
LAB_109420124:
      plVar13 = plStack_230;
      plStack_230 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        __ZdlPv();
      }
      ppuStack_208 = &PTR_DAT_1108a5c28;
      if ((cStack_1c0 == '\x01') &&
         (plVar13 = (long *)CONCAT71(uStack_1d7,uStack_1d8), plVar13 != (long *)0x0)) {
        plStack_1d0 = plVar13;
        __ZdlPv();
      }
      plVar22 = plStack_1e0;
      puVar10 = puStack_178;
      if (plStack_1e0 != (long *)0x0) {
        plVar15 = plStack_1e0 + 1;
        do {
          lVar17 = *plVar15;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
          plVar13 = plVar22;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          puVar10 = puStack_178;
        }
      }
      puStack_178 = puVar14;
      if (puVar10 != (undefined4 *)0x0) {
        piVar1 = puVar10 + 5;
        do {
          iVar24 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar24 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((iVar24 + -1 == 0) && (puStack_178 = puVar10, puVar10 != (undefined4 *)0x0)) {
          plVar13 = *(long **)(puVar10 + 2);
          if ((*(long **)(puVar10 + 2) == (long *)0x0) &&
             ((plVar13 = (long *)CONCAT44(uStack_17c,uStack_180),
              (long *)CONCAT44(uStack_17c,uStack_180) == (long *)0x0 &&
              (plVar22 = (long *)0x11382b000, plVar13 = plRam000000011382bb80,
              plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar13 = plRam000000011382bb80;
          }
          (**(code **)(*plVar13 + 0x30))();
        }
      }
      iVar24 = (int)puStack_178;
      puStack_178 = (undefined4 *)0x0;
      uStack_198 = 0;
      uStack_194 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      if (0 < iStack_1ac) {
        lVar17 = 0;
        do {
          puStack_170[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_1ac);
      }
      if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
        plVar13 = (long *)puStack_168[-1];
        _free();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
        ___stack_chk_fail();
        if (iVar24 != 0) {
          func_0x000104bd46a0();
          func_0x00010567aa40(&uStack_1b0);
        }
        plVar15 = plVar13;
        __Unwind_Resume();
        pcStack_268 = FUN_1094203e8;
        plStack_2b8 = plVar15;
        plStack_2a0 = plVar15;
        uStack_290 = uVar26;
        plStack_288 = plVar23;
        plStack_280 = plVar13;
        plStack_278 = plVar22;
        puStack_270 = &stack0xfffffffffffffff0;
        if (iVar24 == 1) {
          uStack_298 = 0;
          auStack_2a8[0] = 0x1010000;
          auStack_2c0[0] = 0x2010000;
          uStack_2b0 = 0;
          FUN_109a895d0(auStack_2a8,auStack_2c0);
          uVar16 = 0;
        }
        else if (iVar24 == 2) {
          uVar16 = 0xffffffff;
        }
        else {
          if (iVar24 != 3) {
            return;
          }
          uStack_298 = 0;
          auStack_2a8[0] = 0x1010000;
          auStack_2c0[0] = 0x2010000;
          uStack_2b0 = 0;
          FUN_109a895d0(auStack_2a8,auStack_2c0);
          uVar16 = 1;
        }
        uStack_298 = 0;
        auStack_2a8[0] = 0x1010000;
        uStack_2b0 = 0;
        auStack_2c0[0] = 0x2010000;
        plStack_2b8 = plVar15;
        plStack_2a0 = plVar15;
        FUN_109a491e0(auStack_2a8,auStack_2c0,uVar16);
        return;
      }
      return;
    }
    puVar14 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar14 = 1;
    uStack_150 = puVar14 + 1;
    puStack_148 = (undefined4 *)0x1c;
    *(undefined1 *)(puVar14 + 8) = 0;
    *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1094202f0);
  (*pcVar11)();
}



/* Entry: 1094203e8; end: 1094204ff;  */

void FUN_1094203e8(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = param_1;
  uStack_40 = param_1;
  if (param_2 == 1) {
    uStack_38 = 0;
    auStack_48[0] = 0x1010000;
    auStack_60[0] = 0x2010000;
    uStack_50 = 0;
    FUN_109a895d0(auStack_48,auStack_60);
    uVar1 = 0;
  }
  else if (param_2 == 2) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    uStack_38 = 0;
    auStack_48[0] = 0x1010000;
    auStack_60[0] = 0x2010000;
    uStack_50 = 0;
    FUN_109a895d0(auStack_48,auStack_60);
    uVar1 = 1;
  }
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  uStack_50 = 0;
  auStack_60[0] = 0x2010000;
  uStack_58 = param_1;
  uStack_40 = param_1;
  FUN_109a491e0(auStack_48,auStack_60,uVar1);
  return;
}



/* Entry: 109420500; end: 1094205e3;  */

long * FUN_109420500(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)param_1[2];
  while (plVar5 != (long *)0x0) {
    while( true ) {
      plVar7 = (long *)*plVar5;
      plVar5[5] = (long)&PTR_DAT_1108a5c28;
      if (((char)plVar5[0xe] == '\x01') && (plVar5[0xb] != 0)) {
        plVar5[0xc] = plVar5[0xb];
        __ZdlPv();
      }
      plVar6 = (long *)plVar5[10];
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (*(char *)((long)plVar5 + 0x27) < '\0') break;
      __ZdlPv(plVar5);
      plVar5 = plVar7;
      if (plVar7 == (long *)0x0) goto LAB_1094205bc;
    }
    __ZdlPv(plVar5[2]);
    __ZdlPv(plVar5);
    plVar5 = plVar7;
  }
LAB_1094205bc:
  lVar4 = *param_1;
  *param_1 = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094205e4; end: 10942087b;  */

/* WARNING: Removing unreachable block (ram,0x000109420634) */

long * FUN_1094205e4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    plVar2 = (long *)*param_1;
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar4 = plVar2[1];
      lVar1 = lVar3;
      if (lVar4 != lVar3) {
        do {
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != lVar3);
        lVar1 = *(long *)*param_1;
      }
      plVar2[1] = lVar3;
      __ZdlPv(lVar1);
    }
  }
  return param_1;
}



/* Entry: 10942087c; end: 1094208c3;  */

long * FUN_10942087c(long *param_1)

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



/* Entry: 1094208c4; end: 10942099b;  */

long * FUN_1094208c4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_38;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lStack_38 = (long)(plVar1 + 3);
    lVar2 = *plVar1;
    FUN_10942b9e0(&lStack_38);
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



/* Entry: 10942099c; end: 109420f3f;  */

void FUN_10942099c(undefined4 *param_1,long param_2,long *param_3,long *param_4)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_198 = *(undefined8 *)(param_2 + 0x88);
  uStack_1a0 = *(undefined8 *)(param_2 + 0x80);
  uStack_188 = *(undefined8 *)(param_2 + 0x98);
  uStack_190 = *(undefined8 *)(param_2 + 0x90);
  uStack_178 = *(undefined8 *)(param_2 + 0xa8);
  uStack_180 = *(undefined8 *)(param_2 + 0xa0);
  uStack_170 = *(undefined8 *)(param_2 + 0xb0);
  uStack_138 = *(undefined8 *)(param_2 + 0xe8);
  uStack_140 = *(undefined8 *)(param_2 + 0xe0);
  uStack_128 = *(undefined8 *)(param_2 + 0xf8);
  uStack_130 = *(undefined8 *)(param_2 + 0xf0);
  uStack_120 = *(undefined8 *)(param_2 + 0x100);
  uStack_158 = *(undefined8 *)(param_2 + 200);
  uStack_160 = *(undefined8 *)(param_2 + 0xc0);
  uStack_148 = *(undefined8 *)(param_2 + 0xd8);
  uStack_150 = *(undefined8 *)(param_2 + 0xd0);
  FUN_109388a48(&dStack_110,param_2 + 0x140,&uStack_1a0);
  puVar7 = (undefined4 *)0x470;
  __Znwm();
  *puVar7 = 0;
  FUN_10942c128(puVar7 + 4,param_2);
  *(undefined8 *)(puVar7 + 0xa8) = 0x4000000000000000;
  *(double *)(puVar7 + 0xae) = dStack_108;
  *(double *)(puVar7 + 0xac) = dStack_110;
  *(double *)(puVar7 + 0xb2) = dStack_f8;
  *(double *)(puVar7 + 0xb0) = dStack_100;
  *(double *)(puVar7 + 0xb6) = dStack_e8;
  *(double *)(puVar7 + 0xb4) = dStack_f0;
  *(double *)(puVar7 + 0xb8) = dStack_e0;
  *(undefined8 *)(puVar7 + 0xc6) = uStack_a8;
  *(undefined8 *)(puVar7 + 0xc4) = uStack_b0;
  *(undefined8 *)(puVar7 + 0xca) = uStack_98;
  *(undefined8 *)(puVar7 + 200) = uStack_a0;
  *(undefined8 *)(puVar7 + 0xcc) = uStack_90;
  *(undefined8 *)(puVar7 + 0xbe) = uStack_c8;
  *(undefined8 *)(puVar7 + 0xbc) = uStack_d0;
  *(undefined8 *)(puVar7 + 0xc2) = uStack_b8;
  *(undefined8 *)(puVar7 + 0xc0) = uStack_c0;
  dStack_110 = -dStack_110;
  dStack_108 = -dStack_108;
  dStack_100 = -dStack_100;
  dVar18 = SQRT(dStack_110 * dStack_110 + dStack_100 * dStack_100 +
                dStack_108 * dStack_108 + dStack_f8 * dStack_f8);
  dStack_110 = dStack_110 / dVar18;
  dStack_108 = dStack_108 / dVar18;
  dStack_100 = dStack_100 / dVar18;
  dStack_f8 = dStack_f8 / dVar18;
  dVar18 = -dStack_100 * -dStack_e8 - dStack_e0 * dStack_108;
  dVar19 = dStack_e0 * dStack_110 + -dStack_f0 * dStack_100;
  dVar20 = -dStack_108 * -dStack_f0 + dStack_110 * -dStack_e8;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar20 = dVar20 + dVar20;
  *(double *)(puVar7 + 0xd2) = dStack_108;
  *(double *)(puVar7 + 0xd0) = dStack_110;
  *(double *)(puVar7 + 0xd6) = dStack_f8;
  *(double *)(puVar7 + 0xd4) = dStack_100;
  *(double *)(puVar7 + 0xda) =
       (dVar19 * dStack_f8 - dStack_e8) + -(dStack_110 * dVar20) + dVar18 * dStack_100;
  *(double *)(puVar7 + 0xd8) =
       (dVar18 * dStack_f8 - dStack_f0) + -dStack_100 * dVar19 + dVar20 * dStack_108;
  *(double *)(puVar7 + 0xdc) =
       (dVar20 * dStack_f8 - dStack_e0) + -dStack_108 * dVar18 + dStack_110 * dVar19;
  func_0x00010937fbc4(&uStack_1e8,puVar7 + 0xd0);
  *(undefined8 *)(puVar7 + 0xea) = uStack_1c0;
  *(undefined8 *)(puVar7 + 0xe8) = uStack_1c8;
  *(undefined8 *)(puVar7 + 0xee) = uStack_1b0;
  *(undefined8 *)(puVar7 + 0xec) = uStack_1b8;
  *(undefined8 *)(puVar7 + 0xf0) = uStack_1a8;
  *(undefined8 *)(puVar7 + 0xe2) = uStack_1e0;
  *(undefined8 *)(puVar7 + 0xe0) = uStack_1e8;
  *(undefined8 *)(puVar7 + 0xe6) = uStack_1d0;
  *(undefined8 *)(puVar7 + 0xe4) = uStack_1d8;
  *(undefined1 *)(puVar7 + 0x110) = 0;
  *(undefined8 *)(puVar7 + 0x114) = 0;
  *(undefined8 *)(puVar7 + 0x112) = 0;
  *(undefined8 *)(puVar7 + 0x118) = 0;
  *(undefined8 *)(puVar7 + 0x116) = 0;
  *(undefined8 *)(puVar7 + 0xf6) = 0;
  *(undefined8 *)(puVar7 + 0xf4) = 0;
  *(undefined8 *)(puVar7 + 0xfa) = 0;
  *(undefined8 *)(puVar7 + 0xf8) = 0;
  *(undefined8 *)(puVar7 + 0xfe) = 0;
  *(undefined8 *)(puVar7 + 0xfc) = 0;
  *(undefined8 *)(puVar7 + 0x102) = 0;
  *(undefined8 *)(puVar7 + 0x100) = 0;
  *(undefined8 *)((long)puVar7 + 0x411) = 0;
  *(undefined8 *)((long)puVar7 + 0x409) = 0;
  puVar7[0x11a] = 0x3f800000;
  lVar11 = *(long *)(param_1 + 2);
  lVar13 = *(long *)(param_1 + 0x1e);
  lVar15 = lVar13 + lVar11 * 0x48;
  lVar8 = *(long *)(lVar15 + 8);
  *(undefined4 **)(lVar15 + 8) = puVar7;
  if (lVar8 != 0) {
    FUN_1094305a8();
    __ZdlPv();
    lVar11 = *(long *)(param_1 + 2);
    lVar13 = *(long *)(param_1 + 0x1e);
  }
  lVar8 = lVar13 + lVar11 * 0x48;
  **(undefined4 **)(lVar8 + 8) = 1;
  plVar10 = (long *)(lVar8 + 0x10);
  if (plVar10 == param_3) {
LAB_109420dfc:
    if ((long *)(lVar13 + lVar11 * 0x48 + 0x28) != param_4) {
      FUN_1094281bc();
      lVar11 = *(long *)(param_1 + 2);
      lVar13 = *(long *)(param_1 + 0x1e);
    }
    puVar7 = (undefined4 *)(lVar13 + lVar11 * 0x48);
    *puVar7 = param_1[1];
    *(long *)(puVar7 + 0x10) =
         (param_3[1] - *param_3 >> 6) * -0x5555555555555555 +
         (param_4[1] - *param_4 >> 4) * 0x4ec4ec4ec4ec4ec5;
    if (lVar11 == 0) {
      **(undefined4 **)(lVar13 + 8) = 3;
      *param_1 = 1;
    }
    FUN_109420f7c(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar11 = *param_3;
    lVar15 = param_3[1];
    uVar12 = lVar15 - lVar11;
    lVar13 = *(long *)(lVar8 + 0x10);
    if (uVar12 <= (ulong)(*(long *)(lVar8 + 0x20) - lVar13)) {
      lVar17 = *(long *)(lVar8 + 0x18);
      if ((ulong)(lVar17 - lVar13) < uVar12) {
        lVar2 = lVar11 + (lVar17 - lVar13);
        if (lVar17 != lVar13) {
          do {
            FUN_10939da2c(lVar13,lVar11);
            *(undefined4 *)(lVar13 + 0xb0) = *(undefined4 *)(lVar11 + 0xb0);
            lVar11 = lVar11 + 0xc0;
            lVar13 = lVar13 + 0xc0;
          } while (lVar11 != lVar2);
          lVar17 = *(long *)(lVar8 + 0x18);
        }
        FUN_109427ec8(plVar10,lVar2,lVar15,lVar17);
        goto LAB_109420cec;
      }
      if (lVar11 != lVar15) {
        do {
          FUN_10939da2c(lVar13,lVar11);
          *(undefined4 *)(lVar13 + 0xb0) = *(undefined4 *)(lVar11 + 0xb0);
          lVar11 = lVar11 + 0xc0;
          lVar13 = lVar13 + 0xc0;
        } while (lVar11 != lVar15);
        lVar17 = *(long *)(lVar8 + 0x18);
      }
      for (; lVar17 != lVar13; lVar17 = lVar17 + -0xc0) {
        if (*(long *)(lVar17 + -0x38) != 0) {
          piVar1 = (int *)(*(long *)(lVar17 + -0x38) + 0x14);
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
            if (*(long *)(lVar17 + -0x38) != 0) {
              plVar10 = *(long **)(*(long *)(lVar17 + -0x38) + 8);
              if (((plVar10 == (long *)0x0) &&
                  (plVar10 = *(long **)(lVar17 + -0x40), *(long **)(lVar17 + -0x40) == (long *)0x0))
                 && (plVar10 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)) {
                FUN_109a83e3c();
                plVar10 = plRam000000011382bb80;
              }
              (**(code **)(*plVar10 + 0x30))();
            }
            *(undefined8 *)(lVar17 + -0x38) = 0;
          }
        }
        *(undefined8 *)(lVar17 + -0x38) = 0;
        *(undefined8 *)(lVar17 + -0x58) = 0;
        *(undefined8 *)(lVar17 + -0x60) = 0;
        *(undefined8 *)(lVar17 + -0x48) = 0;
        *(undefined8 *)(lVar17 + -0x50) = 0;
        if (0 < *(int *)(lVar17 + -0x6c)) {
          lVar11 = 0;
          lVar15 = *(long *)(lVar17 + -0x30);
          do {
            *(undefined4 *)(lVar15 + lVar11 * 4) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(lVar17 + -0x6c));
        }
        lVar11 = *(long *)(lVar17 + -0x28);
        if (lVar11 != lVar17 + -0x20 && lVar11 != 0) {
          _free(*(undefined8 *)(lVar11 + -8));
        }
      }
      *(long *)(lVar8 + 0x18) = lVar13;
LAB_109420df4:
      lVar11 = *(long *)(param_1 + 2);
      lVar13 = *(long *)(param_1 + 0x1e);
      goto LAB_109420dfc;
    }
    uVar16 = ((long)uVar12 >> 6) * -0x5555555555555555;
    FUN_109427db4(plVar10);
    if (uVar16 < 0x155555555555556) {
      lVar13 = *(long *)(lVar8 + 0x20) - *(long *)(lVar8 + 0x10) >> 6;
      uVar14 = lVar13 * 0x5555555555555556;
      if (uVar14 < uVar16 || uVar14 + ((long)uVar12 >> 6) * 0x5555555555555555 == 0) {
        uVar14 = uVar16;
      }
      if (0xaaaaaaaaaaaaa9 < (ulong)(lVar13 * -0x5555555555555555)) {
        uVar14 = 0x155555555555555;
      }
      if (0x155555555555555 < uVar14) {
        FUN_109428144();
        goto LAB_109420ee0;
      }
      plVar9 = plVar10;
      FUN_109428158(plVar10,uVar14,0);
      *(long **)(lVar8 + 0x10) = plVar9;
      *(long **)(lVar8 + 0x18) = plVar9;
      *(long **)(lVar8 + 0x20) = plVar9 + uVar14 * 0x18;
      FUN_109427ec8(plVar10,lVar11,lVar15,plVar9);
LAB_109420cec:
      *(long **)(lVar8 + 0x18) = plVar10;
      goto LAB_109420df4;
    }
  }
  FUN_109428144();
LAB_109420ee0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109420ee4);
  (*pcVar6)();
}



/* Entry: 109420f40; end: 109420f7b;  */

long * FUN_109420f40(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1094305a8();
    __ZdlPv();
  }
  return param_1;
}


