/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096bf63c; end: 1096bf79f;  */

long * FUN_1096bf63c(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *param_1;
  plVar3 = (long *)param_1[1];
  lVar6 = (long)plVar3 - lVar9 >> 2;
  bVar2 = (ulong)(lVar6 * -0x3333333333333333) <= param_2;
  uVar1 = param_2 + lVar6 * 0x3333333333333333;
  if (bVar2 && uVar1 != 0) {
    if ((ulong)((param_1[2] - (long)plVar3 >> 2) * -0x3333333333333333) < uVar1) {
      if (0xccccccccccccccc < param_2) {
        FUN_1096bd304();
        *param_1 = (long)&PTR_FUN_110b01d60;
        puVar5 = (undefined8 *)0x28;
        _malloc();
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar5 + 3) = 1;
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5 = puVar5 + 4;
          *puVar5 = &PTR_DAT_110b00de0;
        }
        *param_1 = (long)&PTR_FUN_110b05ca8;
        param_1[1] = (long)puVar5;
        plVar3 = param_1;
        func_0x000107c2acd0(param_1,0x18);
        plVar3[2] = 0;
        plVar3[1] = 0;
        *plVar3 = (long)&PTR_DAT_110b00de0;
        FUN_1096ab3e4();
        *plVar3 = (long)&PTR_FUN_110b05e10;
        return param_1;
      }
      lVar6 = param_1[2] - lVar9 >> 2;
      uVar7 = lVar6 * -0x6666666666666666;
      if (uVar7 < param_2 || uVar7 - param_2 == 0) {
        uVar7 = param_2;
      }
      if (0x666666666666665 < (ulong)(lVar6 * -0x3333333333333333)) {
        uVar7 = 0xccccccccccccccc;
      }
      plVar4 = param_1;
      FUN_1096bd318();
      lVar9 = (long)plVar4 + ((long)plVar3 - lVar9);
      lVar8 = ((uVar1 * 0x14 - 0x14) / 0x14) * 0x14 + 0x14;
      _bzero(lVar9,lVar8);
      lVar6 = lVar9 - (param_1[1] - *param_1);
      _memcpy(lVar6);
      plVar3 = (long *)*param_1;
      *param_1 = lVar6;
      param_1[1] = lVar9 + lVar8;
      param_1[2] = (long)plVar4 + uVar7 * 0x14;
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
    lVar9 = ((uVar1 * 0x14 - 0x14) / 0x14) * 0x14 + 0x14;
    plVar4 = plVar3;
    _bzero(plVar3,lVar9);
    lVar9 = (long)plVar3 + lVar9;
  }
  else {
    if (bVar2) {
      return param_1;
    }
    lVar9 = lVar9 + param_2 * 0x14;
    plVar4 = param_1;
  }
  param_1[1] = lVar9;
  return plVar4;
}



/* Entry: 1096bf7a0; end: 1096bf847;  */

undefined8 * FUN_1096bf7a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b05ca8;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x18);
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_DAT_110b00de0;
  FUN_1096ab3e4();
  *puVar1 = &PTR_FUN_110b05e10;
  return param_1;
}



/* Entry: 1096bf848; end: 1096bf95f;  */

void FUN_1096bf848(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  float fVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  float fStack_34;
  
  FUN_1096bf960(param_1,param_2,param_3);
  lVar4 = *(long *)(param_1 + 8);
  FUN_1096ba1fc(&lStack_50,param_2);
  FUN_1096ab480(lVar4 + 8,(ulong)(lStack_48 - lStack_50) >> 2 & 0xffffffff,lStack_50,1,&fStack_34);
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  fVar5 = fStack_34 + 1.0;
  fVar2 = 2.0;
  if (fVar5 <= 2.0) {
    fVar2 = fVar5;
  }
  fStack_34 = 0.5;
  if (0.5 <= fVar5) {
    fStack_34 = fVar2;
  }
  FUN_1096b9f58(param_2);
  uVar6 = *(undefined8 *)(*(long *)(param_2 + 8) + 8);
  *(ulong *)(*(long *)(param_2 + 8) + 8) =
       CONCAT44((float)((ulong)uVar6 >> 0x20) * fStack_34,(float)uVar6 * fStack_34);
  fStack_34 = 1.0 / fStack_34;
  FUN_1096b9f58(param_2);
  puVar3 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x18);
  uVar1 = (*(long *)(*(long *)(param_2 + 8) + 0x20) - (long)puVar3) * 0x20000000 &
          0xffffffff00000000;
  if (uVar1 != 0) {
    lVar4 = (long)uVar1 >> 0x1d;
    do {
      *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) * fStack_34,(float)*puVar3 * fStack_34);
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 1096bf960; end: 1096bfaf3;  */

void FUN_1096bf960(undefined8 param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  long param_6,ulong param_7,long param_8)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fStack_c0;
  float fStack_b0;
  float fStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  fStack_b0 = 0.0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  iVar1 = (int)((ulong)(*(long *)(*(long *)(param_6 + 8) + 0x20) -
                       *(long *)(*(long *)(param_6 + 8) + 0x18)) >> 3);
  iVar5 = (int)param_7;
  if (iVar5 <= iVar1) {
    iVar1 = iVar5;
  }
  fStack_c0 = param_4;
  fStack_a0 = param_3;
  FUN_1096b9f58(param_6);
  FUN_1096bfd8c(param_5,&uStack_90,iVar1,*(undefined8 *)(*(long *)(param_6 + 8) + 0x18),iVar1,
                param_8);
  FUN_1096bfe18(&uStack_90,1);
  FUN_1096b9f58(param_6);
  lVar2 = *(long *)(param_6 + 8);
  *(float *)(lVar2 + 8) = fStack_b0;
  *(float *)(lVar2 + 0xc) = param_2;
  *(float *)(lVar2 + 0x10) = fStack_a0;
  *(float *)(lVar2 + 0x14) = fStack_c0;
  if ((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) != iVar5) {
    FUN_1096b9f58(param_6);
    FUN_1096b9118(*(long *)(param_6 + 8) + 0x18,(long)iVar5);
    lVar2 = *(long *)(param_6 + 8);
    fStack_b0 = *(float *)(lVar2 + 8);
    param_2 = *(float *)(lVar2 + 0xc);
    fStack_a0 = *(float *)(lVar2 + 0x10);
    fStack_c0 = *(float *)(lVar2 + 0x14);
  }
  FUN_1096b9f58(param_6);
  if (0 < iVar5) {
    fVar6 = 1.0 / (param_2 * param_2 + fStack_b0 * fStack_b0);
    fStack_b0 = fStack_b0 * fVar6;
    fVar6 = -param_2 * fVar6;
    uVar7 = NEON_ext(CONCAT44(fVar6,fStack_b0),CONCAT44(-fVar6,-fStack_b0),4,1);
    param_7 = param_7 & 0x7fffffff;
    pfVar4 = (float *)(param_8 + 4);
    puVar3 = *(undefined8 **)(*(long *)(param_6 + 8) + 0x18);
    do {
      fVar8 = (float)*(undefined8 *)(pfVar4 + -1);
      *puVar3 = CONCAT44(((float)((ulong)uVar7 >> 0x20) * fStack_c0 - fVar6 * fStack_a0) +
                         fVar8 * fVar6 +
                         (float)((ulong)*(undefined8 *)(pfVar4 + -1) >> 0x20) * fStack_b0,
                         ((float)uVar7 * fStack_c0 - fStack_b0 * fStack_a0) +
                         -*pfVar4 * fVar6 + fVar8 * fStack_b0);
      pfVar4 = pfVar4 + 2;
      param_7 = param_7 - 1;
      puVar3 = puVar3 + 1;
    } while (param_7 != 0);
  }
  return;
}



/* Entry: 1096bfaf4; end: 1096bfb27;  */

void FUN_1096bfaf4(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001096bfb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 8);
  return;
}



/* Entry: 1096bfb28; end: 1096bfb5b;  */

undefined8 * FUN_1096bfb28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096bfb5c; end: 1096bfb8f;  */

void FUN_1096bfb5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096bfb90; end: 1096bfbaf;  */

void FUN_1096bfb90(void)

{
  return;
}



/* Entry: 1096bfbb0; end: 1096bfbf7;  */

void FUN_1096bfbb0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096bfbf8; end: 1096bfc4f;  */

undefined8 * FUN_1096bfbf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096bfc50; end: 1096bfca7;  */

void FUN_1096bfc50(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b05d20;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096bfca8; end: 1096bfcf3;  */

void FUN_1096bfca8(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096bf7a0(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096bfcf4; end: 1096bfd23;  */

bool FUN_1096bfcf4(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b05d20,0);
  return param_1 != 0;
}



/* Entry: 1096bfd24; end: 1096bfd57;  */

long FUN_1096bfd24(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096bfd58; end: 1096bfd8b;  */

void FUN_1096bfd58(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096bfd8c; end: 1096bfe17;  */

void FUN_1096bfd8c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  float *pfVar1;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  if (0 < (int)param_3) {
    param_3 = param_3 & 0x7fffffff;
    pfVar1 = (float *)(param_6 + 4);
    do {
      if (!NAN(pfVar1[-1])) {
        dStack_40 = (double)(float)*param_4;
        dStack_38 = (double)(float)((ulong)*param_4 >> 0x20);
        dStack_50 = (double)pfVar1[-1];
        dStack_48 = (double)*pfVar1;
        func_0x0001096bfea8(0x3ff0000000000000,param_2,&dStack_40,&dStack_50);
      }
      param_4 = param_4 + 1;
      pfVar1 = pfVar1 + 2;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 1096bfe18; end: 1096bff1f;  */

float FUN_1096bfe18(double *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1[2];
  dVar2 = param_1[3];
  return (float)((1.0 / (*param_1 * param_1[1] - (dVar2 * dVar2 + dVar1 * dVar1))) *
                (*param_1 * param_1[6] - (dVar2 * param_1[5] + param_1[4] * dVar1)));
}



/* Entry: 1096bff20; end: 1096c003f;  */

undefined8 * FUN_1096bff20(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int *piVar9;
  undefined **appuStack_60 [2];
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  undefined8 uVar8;
  
  pppuVar3 = appuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x28))(appuStack_60,param_2,param_1);
  ___dynamic_cast(appuStack_60,&PTR_DAT_110b01d40,&PTR_DAT_110b036c8,0);
  if (pppuVar3 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  lVar4 = *(long *)((long)pppuVar3 + 8);
  if (lVar4 != 0) {
    piVar9 = (int *)(lVar4 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_48 = param_3[1];
  param_3[1] = lVar4;
  *param_3 = &PTR_FUN_110b03638;
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  appuStack_60[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_60);
  lVar4 = param_2[1] + -0x20;
  uVar8 = uRam000000011382aa08;
  func_0x0001096966c0();
  iVar7 = (int)uVar8;
  puVar5 = (undefined8 *)(ulong)(lVar4 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (iVar7 != 0) {
      func_0x000104bd46a0();
    }
    __Unwind_Resume();
    *puVar5 = &PTR_FUN_110b01d60;
    puVar6 = (undefined8 *)0x28;
    _malloc();
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar6 + 3) = 1;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      puVar6 = puVar6 + 4;
      *puVar6 = &PTR_DAT_110b00de0;
    }
    *puVar5 = &PTR_FUN_110b05e78;
    puVar5[1] = puVar6;
    puVar6 = puVar5;
    func_0x000107c2acd0(puVar5,0x18);
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = &PTR_DAT_110b00de0;
    FUN_1096b6920();
    *puVar6 = &PTR_FUN_110b05ee8;
    return puVar5;
  }
  return puVar5;
}



/* Entry: 1096c0040; end: 1096c00e7;  */

undefined8 * FUN_1096c0040(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b05e78;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x18);
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_DAT_110b00de0;
  FUN_1096b6920();
  *puVar1 = &PTR_FUN_110b05ee8;
  return param_1;
}



/* Entry: 1096c00e8; end: 1096c01b7;  */

bool FUN_1096c00e8(long param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  undefined **ppuStack_40;
  long lStack_38;
  
  FUN_1096b5094(param_1,0x113735c08);
  func_0x000107c2acdc();
  FUN_1096b5c80(&ppuStack_40);
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(lVar4 + 0x10) != lStack_38) {
    func_0x000107c2acd4(lVar4 + 8);
    *(long *)(lVar4 + 0x10) = lStack_38;
    *(undefined ***)(lVar4 + 8) = ppuStack_40;
    if (*(long *)(lVar4 + 0x10) != 0) {
      piVar3 = (int *)(*(long *)(lVar4 + 0x10) + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  return *(long *)(*(long *)(param_1 + 8) + 0x10) != 0;
}



/* Entry: 1096c01b8; end: 1096c032b;  */

undefined8 FUN_1096c01b8(uint *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  long lVar8;
  int *piVar9;
  undefined **ppuStack_70;
  long lStack_68;
  
  puVar7 = param_1;
  FUN_1096ae760(param_1,0x11382aad0);
  uVar3 = *puVar7;
  puVar7 = param_1;
  FUN_1096ae760(param_1,0x11382aad8);
  uVar4 = *puVar7;
  FUN_1096e4e0c(param_2,0x11382aac8);
  lVar2 = param_2[1];
  for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x50) {
    if ((((int)uVar3 < 0) ||
        (lVar8 = *(long *)(*(long *)(lVar1 + 0x10) + 8),
        (int)((ulong)(*(long *)(*(long *)(lVar1 + 0x10) + 0x10) - lVar8) >> 4) <= (int)uVar3)) ||
       (lVar8 = lVar8 + (ulong)uVar3 * 0x10, *(long *)(lVar8 + 8) == 0)) {
      FUN_1096ba870(&ppuStack_70);
    }
    else {
      ___dynamic_cast(lVar8,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0);
      if (lVar8 == 0) {
        func_0x000107c2acdc();
      }
      lStack_68 = *(long *)(lVar8 + 8);
      if (lStack_68 != 0) {
        piVar9 = (int *)(lStack_68 + -8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar6) {
            *piVar9 = *piVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppuStack_70 = &PTR_FUN_110b05358;
    }
    FUN_1096ba9b0(&ppuStack_70,*(long *)(param_1 + 2) + 8);
    FUN_1096e4d6c(lVar1,uVar4,&ppuStack_70);
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
  }
  return 1;
}



/* Entry: 1096c032c; end: 1096c035f;  */

undefined8 * FUN_1096c032c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096c0360; end: 1096c0393;  */

void FUN_1096c0360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096c0394; end: 1096c03c7;  */

long FUN_1096c0394(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096c03c8; end: 1096c03fb;  */

void FUN_1096c03c8(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096c03fc; end: 1096c040b;  */

void FUN_1096c03fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096c040c; end: 1096c043b;  */

void FUN_1096c040c(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096c043c; end: 1096c044b;  */

void FUN_1096c043c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
  if (param_3 == (undefined8 *)0x0) {
    func_0x000107c2acdc();
  }
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 1096c044c; end: 1096c04ab;  */

undefined8 FUN_1096c044c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 1096c04ac; end: 1096c04bf;  */

undefined8 FUN_1096c04ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096c04c0; end: 1096c04eb;  */

void FUN_1096c04c0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b05ec0;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096c04ec; end: 1096c05d3;  */

void FUN_1096c04ec(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 *extraout_x8;
  undefined8 uVar3;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b01d40;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    FUN_109694d40("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b01d40;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4();
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
  pcStack_58 = FUN_1096c05d4;
  puStack_70 = param_2;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_1096c0040(&ppuStack_80);
  extraout_x8[1] = uStack_78;
  *extraout_x8 = ppuStack_80;
  ppuStack_80 = &PTR_FUN_110b01d60;
  uStack_78 = 0;
  func_0x000107c2acd4(&ppuStack_80);
  return;
}



/* Entry: 1096c05d4; end: 1096c061f;  */

void FUN_1096c05d4(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096c0040(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096c0620; end: 1096c064f;  */

bool FUN_1096c0620(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b05ec0,0);
  return param_1 != 0;
}



/* Entry: 1096c0650; end: 1096c07df;  */

void FUN_1096c0650(long param_1,double param_2,double param_3,double param_4,double param_5)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  double dStack_48;
  
  FUN_1096b9ea0(param_1);
  auVar8 = NEON_fmov(0xbfe0000000000000,8);
  dVar3 = auVar8._0_8_;
  dVar9 = auVar8._8_8_;
  param_5 = param_3 + param_5;
  param_4 = param_2 + param_4;
  auVar8 = NEON_fmov(0x3fe0000000000000,8);
  dVar11 = auVar8._0_8_;
  dVar12 = auVar8._8_8_;
  dVar6 = param_5 + param_5 + param_3 + param_3 + 0.0;
  uStack_80 = 0x4010000000000000;
  uStack_60 = 0;
  uStack_58 = 0;
  dVar5 = param_5 * dVar11 + dVar3 * param_2 +
          param_3 * dVar3 + dVar11 * param_4 + param_3 * dVar3 + dVar3 * param_2 + 0.0;
  dStack_78 = param_5 * param_5 + param_4 * param_4 +
              param_5 * param_5 + param_2 * param_2 +
              param_3 * param_3 + param_4 * param_4 + param_3 * param_3 + param_2 * param_2;
  dVar7 = param_4 + param_2 + param_4 + param_2 + 0.0;
  dVar3 = param_5 * dVar11 + dVar11 * param_4 + dVar5;
  dStack_48 = param_4 * dVar12 + dVar12 * -param_5 +
              param_2 * dVar12 + dVar9 * -param_5 +
              param_4 * dVar9 + dVar12 * -param_3 + param_2 * dVar9 + dVar9 * -param_3 + 0.0;
  dStack_70 = dVar7;
  dStack_68 = dVar6;
  dStack_50 = dVar3;
  FUN_1096bfe18(&uStack_80,1);
  FUN_1096b9f58(param_1);
  lVar1 = *(long *)(param_1 + 8);
  fVar10 = SUB84(dVar5,0);
  fVar4 = SUB84(dVar3,0);
  fVar2 = 1.0 / (fVar10 * fVar10 + fVar4 * fVar4);
  fVar4 = fVar4 * fVar2;
  fVar2 = -(fVar10 * fVar2);
  *(float *)(lVar1 + 8) = fVar4;
  *(float *)(lVar1 + 0xc) = fVar2;
  *(float *)(lVar1 + 0x10) = SUB84(dVar7,0) * fVar2 - SUB84(dVar6,0) * fVar4;
  *(float *)(lVar1 + 0x14) = -(fVar4 * SUB84(dVar7,0)) - SUB84(dVar6,0) * fVar2;
  return;
}



/* Entry: 1096c07e0; end: 1096c0b5f;  */

void FUN_1096c07e0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  float *pfVar11;
  undefined8 *puVar12;
  float *pfVar13;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float *pfStack_b0;
  float *pfStack_a8;
  float *pfStack_98;
  float *pfStack_90;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_61;
  float *pfVar14;
  
  puVar12 = *(undefined8 **)(*(long *)(param_2 + 8) + 8);
  if ((*(long *)(*(long *)(param_2 + 8) + 0x10) - (long)puVar12 & 0xffffffff0U) == 0x10) {
    uVar21 = *puVar12;
    param_1[1] = puVar12[1];
    *param_1 = uVar21;
    if (param_1[1] != 0) {
      piVar9 = (int *)(param_1[1] + -8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *param_1 = &PTR_FUN_110b051b8;
  }
  else {
    FUN_1096a5c58(&lStack_80,
                  (*(long *)(puVar12[1] + 0x20) - *(long *)(puVar12[1] + 0x18)) * 0x20000000 >> 0x20
                 );
    FUN_109367d10(&pfStack_98,
                  (*(long *)(*(long *)(param_2 + 8) + 0x10) - *(long *)(*(long *)(param_2 + 8) + 8))
                  * 0x10000000 >> 0x20);
    FUN_109367d10(&pfStack_b0,
                  (*(long *)(*(long *)(param_2 + 8) + 0x10) - *(long *)(*(long *)(param_2 + 8) + 8))
                  * 0x10000000 >> 0x20);
    lVar16 = lStack_78;
    if (lStack_78 != lStack_80) {
      uVar17 = 0;
      iVar8 = (int)((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x10) -
                           *(long *)(*(long *)(param_2 + 8) + 8)) >> 4);
      iVar5 = iVar8 + -1;
      uVar1 = iVar5 / 2;
      uVar6 = iVar8 - uVar1;
      lVar2 = (long)((ulong)(uint)(iVar5 - (iVar5 >> 0x1f)) << 0x20) >> 0x21;
      uVar18 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      uVar19 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
      fVar7 = 1.0 / (float)(int)(uVar6 - uVar1);
      do {
        lVar16 = *(long *)(*(long *)(param_2 + 8) + 8);
        lVar10 = (*(long *)(*(long *)(param_2 + 8) + 0x10) - lVar16) * 0x10000000 >> 0x20;
        if (0 < lVar10) {
          pfVar11 = pfStack_b0;
          plVar15 = (long *)(lVar16 + 8);
          pfVar13 = pfStack_98;
          do {
            lVar16 = *plVar15;
            pfVar14 = (float *)(*(long *)(lVar16 + 0x18) +
                               (-(uVar17 >> 0x1f & 1) & 0xfffffff800000000 |
                               (uVar17 & 0xffffffff) << 3));
            fVar20 = *pfVar14;
            fVar22 = pfVar14[1];
            fVar23 = *(float *)(lVar16 + 8);
            fVar25 = *(float *)(lVar16 + 0xc);
            fVar24 = *(float *)(lVar16 + 0x14);
            *pfVar13 = *(float *)(lVar16 + 0x10) + -(fVar22 * fVar25) + fVar23 * fVar20;
            *pfVar11 = fVar20 * fVar25 + fVar23 * fVar22 + fVar24;
            lVar10 = lVar10 + -1;
            pfVar11 = pfVar11 + 1;
            plVar15 = plVar15 + 2;
            pfVar13 = pfVar13 + 1;
          } while (lVar10 != 0);
        }
        if (uVar6 - uVar1 == 1) {
          if ((float *)(uVar18 + (long)pfStack_98) != pfStack_90) {
            FUN_109530e44();
          }
          if ((float *)(uVar18 + (long)pfStack_b0) != pfStack_a8) {
            FUN_109530e44();
          }
          fVar20 = pfStack_b0[lVar2];
          pfVar11 = (float *)(lStack_80 + uVar17 * 8);
          *pfVar11 = pfStack_98[lVar2];
          pfVar11[1] = fVar20;
        }
        else {
          __ZNSt3__16__sortIRNS_6__lessIffEEPfEEvT0_S5_T_(pfStack_98,pfStack_90,&uStack_61);
          __ZNSt3__16__sortIRNS_6__lessIffEEPfEEvT0_S5_T_(pfStack_b0,pfStack_a8,&uStack_61);
          if (uVar18 == uVar19) {
            pfVar11 = (float *)(lStack_80 + uVar17 * 8);
            *pfVar11 = 0.0;
            fVar20 = 0.0;
            fVar22 = 0.0;
          }
          else {
            fVar20 = 0.0;
            pfVar11 = (float *)(uVar18 + (long)pfStack_98);
            do {
              pfVar13 = pfVar11 + 1;
              fVar20 = fVar20 + *pfVar11;
              pfVar11 = pfVar13;
            } while (pfVar13 != (float *)((long)pfStack_98 + uVar19));
            pfVar11 = (float *)(lStack_80 + uVar17 * 8);
            *pfVar11 = fVar20;
            fVar22 = 0.0;
            pfVar13 = (float *)(uVar18 + (long)pfStack_b0);
            do {
              pfVar14 = pfVar13 + 1;
              fVar22 = fVar22 + *pfVar13;
              pfVar13 = pfVar14;
            } while (pfVar14 != (float *)((long)pfStack_b0 + uVar19));
          }
          *pfVar11 = fVar20 * fVar7;
          pfVar11[1] = fVar22 * fVar7;
        }
        uVar17 = uVar17 + 1;
        lVar16 = lStack_80;
      } while (uVar17 < (ulong)(lStack_78 - lStack_80 >> 3));
    }
    puVar12 = *(undefined8 **)(*(long *)(param_2 + 8) + 8);
    uVar21 = *puVar12;
    param_1[1] = puVar12[1];
    *param_1 = uVar21;
    if (param_1[1] != 0) {
      piVar9 = (int *)(param_1[1] + -8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        lVar16 = lStack_80;
      } while (cVar3 != '\0');
    }
    *param_1 = &PTR_FUN_110b051b8;
    FUN_1096c0b60(param_1,(ulong)(lStack_78 - lVar16) >> 3 & 0xffffffff);
    if (pfStack_b0 != (float *)0x0) {
      pfStack_a8 = pfStack_b0;
      __ZdlPv();
    }
    if (pfStack_98 != (float *)0x0) {
      pfStack_90 = pfStack_98;
      __ZdlPv();
    }
    if (lStack_80 != 0) {
      lStack_78 = lStack_80;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1096c0b60; end: 1096c0c0f;  */

void FUN_1096c0b60(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined **ppuStack_40;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  ppuStack_40 = &PTR_FUN_110b06018;
  puStack_38 = puVar1;
  func_0x000107c2acdc();
  FUN_1096bf960(&ppuStack_40,param_1,param_2,param_3,puVar1);
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  return;
}



/* Entry: 1096c0c10; end: 1096c0c43;  */

undefined8 * FUN_1096c0c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096c0c44; end: 1096c0deb;  */

void FUN_1096c0c44(undefined8 param_1,double param_2,undefined8 param_3,float param_4,long param_5,
                  ulong param_6,undefined8 *param_7,undefined8 *param_8)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  puVar3 = *(undefined8 **)(*(long *)(param_5 + 8) + 0x18);
  uVar4 = (uint)((ulong)(*(long *)(*(long *)(param_5 + 8) + 0x20) - (long)puVar3) >> 3);
  uVar1 = (uint)param_6;
  if ((int)uVar4 <= (int)(uint)param_6) {
    uVar1 = uVar4;
  }
  uVar5 = (ulong)uVar1;
  dStack_38 = 0.0;
  dVar8 = 0.0;
  dVar9 = 0.0;
  dStack_40 = 0.0;
  dStack_48 = 0.0;
  dStack_50 = 0.0;
  dStack_58 = 0.0;
  dStack_60 = 0.0;
  dStack_68 = 0.0;
  if ((int)uVar1 < 1) {
    dVar12 = 0.0;
  }
  else {
    pfVar6 = (float *)((long)param_7 + 4);
    param_2 = 0.0;
    param_4 = 0.0;
    dStack_50 = 0.0;
    dStack_68 = 0.0;
    dVar12 = 0.0;
    dStack_40 = 0.0;
    dStack_38 = 0.0;
    do {
      if (!NAN(pfVar6[-1])) {
        dVar18 = (double)(float)*puVar3;
        dVar20 = (double)(float)((ulong)*puVar3 >> 0x20);
        dVar16 = (double)pfVar6[-1];
        dVar21 = (double)*pfVar6;
        dVar12 = dVar12 + 1.0;
        dStack_68 = dStack_68 + dVar20 * dVar20 + dVar18 * dVar18;
        dVar8 = dVar8 + dVar18;
        dVar9 = dVar9 + dVar20;
        dStack_50 = dStack_50 + dVar16;
        param_2 = param_2 + dVar21;
        dVar19 = dVar18 * dVar21 + -dVar20 * dVar16;
        dVar16 = dVar20 * dVar21 + dVar18 * dVar16;
        auVar17._8_8_ = dVar16;
        auVar17._0_8_ = dVar19;
        auVar2._8_8_ = dVar16;
        auVar2._0_8_ = dVar19;
        auVar17 = NEON_ext(auVar17,auVar2,8,1);
        dStack_40 = dStack_40 + auVar17._0_8_;
        dStack_38 = dStack_38 + auVar17._8_8_;
      }
      puVar3 = puVar3 + 1;
      pfVar6 = pfVar6 + 2;
      uVar5 = uVar5 - 1;
      dStack_60 = dVar8;
      dStack_58 = dVar9;
      dStack_48 = param_2;
    } while (uVar5 != 0);
  }
  fVar7 = SUB84(dStack_60,0);
  fVar13 = SUB84(param_2,0);
  dStack_70 = dVar12;
  FUN_1096bfe18(&dStack_70,1);
  fVar15 = (float)((ulong)*param_8 >> 0x20);
  fVar14 = (float)*param_8;
  fVar11 = SUB84(dVar12,0);
  *param_8 = CONCAT44(fVar14 * fVar13 + fVar15 * fVar7,-fVar15 * fVar13 + fVar14 * fVar7);
  param_8[1] = CONCAT44((float)((ulong)param_8[1] >> 0x20) + fVar14 * param_4 + fVar15 * fVar11,
                        (float)param_8[1] + -fVar15 * param_4 + fVar14 * fVar11);
  if ((param_6 & 0xffffffff) != 0) {
    fVar14 = 1.0 / (fVar13 * fVar13 + fVar7 * fVar7);
    fVar7 = fVar7 * fVar14;
    fVar14 = -fVar13 * fVar14;
    uVar10 = NEON_ext(CONCAT44(fVar14,fVar7),CONCAT44(-fVar14,-fVar7),4,1);
    uVar5 = -(param_6 >> 0x1f & 1) & 0xfffffff800000000 | (param_6 & 0xffffffff) << 3;
    do {
      fVar13 = (float)*param_7;
      *param_7 = CONCAT44(((float)((ulong)uVar10 >> 0x20) * param_4 - fVar14 * fVar11) +
                          fVar13 * fVar14 + (float)((ulong)*param_7 >> 0x20) * fVar7,
                          ((float)uVar10 * param_4 - fVar7 * fVar11) +
                          -*(float *)((long)param_7 + 4) * fVar14 + fVar13 * fVar7);
      uVar5 = uVar5 - 8;
      param_7 = param_7 + 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 1096c0dec; end: 1096c0f63;  */

ulong FUN_1096c0dec(ulong param_1,float param_2,long param_3,long param_4,long *param_5)

{
  undefined1 auVar1 [16];
  int *piVar2;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar11;
  undefined1 auVar10 [16];
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  int *piVar3;
  
  if ((int *)*param_5 == (int *)param_5[1]) {
    return param_1;
  }
  dVar6 = 0.0;
  dStack_58 = 0.0;
  dVar4 = 0.0;
  dStack_70 = 0.0;
  dStack_50 = 0.0;
  dStack_48 = 0.0;
  dStack_40 = 0.0;
  dStack_38 = 0.0;
  piVar2 = (int *)*param_5;
  do {
    piVar3 = piVar2 + 1;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 8) + 0x18) + (long)*piVar2 * 8);
    dVar9 = (double)(float)uVar8;
    dVar11 = (double)(float)((ulong)uVar8 >> 0x20);
    uVar8 = *(undefined8 *)(param_4 + (long)*piVar2 * 8);
    dVar12 = (double)(float)uVar8;
    dVar13 = (double)(float)((ulong)uVar8 >> 0x20);
    dStack_70 = dStack_70 + 1.0;
    dVar6 = dVar6 + dVar9;
    dStack_58 = dStack_58 + dVar11;
    dStack_50 = dStack_50 + dVar12;
    dStack_48 = dStack_48 + dVar13;
    dVar4 = dVar4 + dVar11 * dVar11 + dVar9 * dVar9;
    dVar15 = dVar9 * dVar13 + -dVar11 * dVar12;
    dVar9 = dVar11 * dVar13 + dVar9 * dVar12;
    auVar10._8_8_ = dVar9;
    auVar10._0_8_ = dVar15;
    auVar1._8_8_ = dVar9;
    auVar1._0_8_ = dVar15;
    auVar10 = NEON_ext(auVar10,auVar1,8,1);
    dStack_40 = dStack_40 + auVar10._0_8_;
    dStack_38 = dStack_38 + auVar10._8_8_;
    piVar2 = piVar3;
  } while (piVar3 != (int *)param_5[1]);
  dStack_68 = dVar4;
  dStack_60 = dVar6;
  FUN_1096bfe18(&dStack_70,1);
  _atan2f(dVar6,dVar4);
  fVar14 = SUB84(dVar6,0) - (float)param_1;
  fVar5 = fVar14 / 3.1415927;
  if (-1.0 <= fVar5) {
    if (1.0 <= fVar5) {
      fVar5 = fVar5 * 0.5;
      fVar7 = -6.2831855;
      goto LAB_1096c0f04;
    }
  }
  else {
    fVar5 = fVar5 * -0.5;
    fVar7 = 6.2831855;
LAB_1096c0f04:
    fVar14 = fVar14 + fVar7 * (float)(int)fVar5;
  }
  if (-3.1415927 <= fVar14) {
    if (fVar14 <= 3.1415927) goto LAB_1096c0f34;
    fVar5 = -6.2831855;
  }
  else {
    fVar5 = 6.2831855;
  }
  fVar14 = fVar14 + fVar5;
LAB_1096c0f34:
  _cosf();
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  return (ulong)(uint)((float)param_1 + param_2 * param_2 * fVar14);
}



/* Entry: 1096c0f64; end: 1096c100b;  */

void FUN_1096c0f64(float param_1,long param_2,undefined8 param_3,long param_4)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 uVar6;
  
  FUN_1096b9f58();
  lVar2 = *(long *)(param_2 + 8);
  *(float *)(lVar2 + 0xc) = -*(float *)(lVar2 + 0xc);
  *(float *)(lVar2 + 0x10) = param_1 * 2.0 - *(float *)(lVar2 + 0x10);
  FUN_1096b9f58(param_2);
  pfVar1 = *(float **)(*(long *)(param_2 + 8) + 0x18);
  uVar4 = *(long *)(*(long *)(param_2 + 8) + 0x20) - (long)pfVar1;
  if (0 < (int)(uVar4 >> 3)) {
    uVar3 = 0;
    pfVar5 = pfVar1;
    do {
      lVar2 = (long)*(int *)(param_4 + uVar3 * 4);
      if ((long)uVar3 < lVar2) {
        uVar6 = *(undefined8 *)pfVar5;
        *(undefined8 *)pfVar5 = *(undefined8 *)(pfVar1 + lVar2 * 2);
        *(undefined8 *)(pfVar1 + lVar2 * 2) = uVar6;
      }
      *pfVar5 = -*pfVar5;
      uVar3 = uVar3 + 1;
      pfVar5 = pfVar5 + 2;
    } while ((uVar4 >> 3 & 0x7fffffff) != uVar3);
  }
  return;
}



/* Entry: 1096c100c; end: 1096c1137;  */

void FUN_1096c100c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_48;
  long lStack_40;
  
  FUN_1096b9358(param_1);
  FUN_1096bad98(&lStack_48,param_2);
  FUN_1096b9614(param_1,(int)((ulong)(lStack_40 - lStack_48) >> 2) * -0x55555555);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x10);
  FUN_1096b9498(param_1);
  lVar5 = *(long *)(param_1 + 8);
  if (*(long *)(lVar5 + 0x10) != *(long *)(lVar4 + 0x48)) {
    func_0x000107c2acd4(lVar5 + 8);
    uVar6 = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar5 + 8) = uVar6;
    if (*(long *)(lVar5 + 0x10) != 0) {
      piVar3 = (int *)(*(long *)(lVar5 + 0x10) + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  lVar5 = *(long *)(param_2 + 8);
  FUN_1096b9498(param_1);
  lVar4 = *(long *)(param_1 + 8);
  uVar10 = *(undefined8 *)(lVar5 + 0x40);
  uVar7 = *(undefined8 *)(lVar5 + 0x58);
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  uVar9 = *(undefined8 *)(lVar5 + 0x38);
  uVar8 = *(undefined8 *)(lVar5 + 0x30);
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar5 + 0x48);
  *(undefined8 *)(lVar4 + 0x40) = uVar10;
  *(undefined8 *)(lVar4 + 0x58) = uVar7;
  *(undefined8 *)(lVar4 + 0x50) = uVar6;
  *(undefined8 *)(lVar4 + 0x38) = uVar9;
  *(undefined8 *)(lVar4 + 0x30) = uVar8;
  lVar5 = *(long *)(param_2 + 8);
  FUN_1096b9498(param_1);
  lVar4 = *(long *)(param_1 + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar5 + 0x68);
  *(undefined8 *)(lVar4 + 0x60) = uVar6;
  return;
}



/* Entry: 1096c1138; end: 1096c151b;  */

void FUN_1096c1138(long *param_1,int param_2,long param_3,int param_4,long param_5)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  float *pfVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  int *piStack_a0;
  int *piStack_98;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  int *piVar13;
  
  FUN_10925b8c4(&piStack_a0,(long)param_2);
  if (piStack_a0 != piStack_98) {
    iVar11 = 0;
    piVar12 = piStack_a0;
    do {
      piVar13 = piVar12 + 1;
      *piVar12 = iVar11;
      iVar11 = iVar11 + 1;
      piVar12 = piVar13;
    } while (piVar13 != piStack_98);
  }
  uVar7 = (long)piStack_98 - (long)piStack_a0;
  iVar11 = (int)(uVar7 >> 2);
  if (param_4 == 0) {
    plVar16 = (long *)0x0;
    lStack_88 = 0;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    if (1 < iVar11) {
      plVar16 = (long *)0x0;
      uVar15 = 1;
      do {
        piVar12 = piStack_a0;
        uVar18 = 0;
        pfVar9 = (float *)(param_3 + (long)piStack_a0[uVar15] * 0xc);
        do {
          pfVar8 = (float *)(param_3 + (long)piStack_a0[uVar18] * 0xc);
          if (((ABS(*pfVar8 - *pfVar9) < 0.001) && (ABS(pfVar8[1] - pfVar9[1]) < 0.001)) &&
             (ABS(pfVar8[2] - pfVar9[2]) < 0.001)) {
            if (plVar16 < plStack_78) {
              *(int *)plVar16 = piStack_a0[uVar18];
              *(int *)((long)plVar16 + 4) = piVar12[uVar15];
              plVar16 = plVar16 + 1;
              plStack_80 = plVar16;
            }
            else {
              lVar17 = (long)plVar16 - lStack_88;
              uVar1 = (lVar17 >> 3) + 1;
              if (uVar1 >> 0x3d != 0) {
                FUN_1093c3bcc();
                goto LAB_1096c14e0;
              }
              uVar10 = (long)plStack_78 - lStack_88 >> 2;
              if (uVar10 <= uVar1) {
                uVar10 = uVar1;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plStack_78 - lStack_88)) {
                uVar10 = 0x1fffffffffffffff;
              }
              plVar5 = &lStack_88;
              FUN_1093c3be0();
              lVar3 = lStack_88;
              lVar6 = (long)plStack_80 - lStack_88;
              piVar13 = (int *)((long)plVar5 + lVar17);
              *piVar13 = piVar12[uVar18];
              piVar13[1] = piVar12[uVar15];
              plVar16 = (long *)(piVar13 + 2);
              lVar6 = (long)piVar13 - lVar6;
              _memcpy(lVar6,lVar3);
              bVar2 = lStack_88 != 0;
              lStack_88 = lVar6;
              plStack_80 = plVar16;
              plStack_78 = plVar5 + uVar10;
              if (bVar2) {
                __ZdlPv();
                plStack_80 = plVar16;
              }
            }
            break;
          }
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
        uVar15 = uVar15 + 1;
      } while (uVar15 != (uVar7 >> 2 & 0x7fffffff));
    }
    *param_1 = lStack_88;
    param_1[1] = (long)plVar16;
  }
  else {
    plVar16 = (long *)0x0;
    lStack_88 = 0;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    if (1 < iVar11) {
      plVar16 = (long *)0x0;
      uVar15 = 1;
      do {
        piVar12 = piStack_a0;
        uVar18 = 0;
        pfVar8 = (float *)(param_3 + (long)piStack_a0[uVar15] * 0xc);
        pfVar9 = (float *)(param_5 + (long)piStack_a0[uVar15] * 8);
        do {
          iVar11 = piStack_a0[uVar18];
          pfVar14 = (float *)(param_3 + (long)iVar11 * 0xc);
          if (((ABS(*pfVar14 - *pfVar8) < 0.001) && (ABS(pfVar14[1] - pfVar8[1]) < 0.001)) &&
             ((ABS(pfVar14[2] - pfVar8[2]) < 0.001 &&
              ((pfVar14 = (float *)(param_5 + (long)iVar11 * 8), ABS(*pfVar14 - *pfVar9) < 0.001 &&
               (ABS(pfVar14[1] - pfVar9[1]) < 0.001)))))) {
            if (plVar16 < plStack_78) {
              *(int *)plVar16 = iVar11;
              *(int *)((long)plVar16 + 4) = piVar12[uVar15];
              plVar16 = plVar16 + 1;
              plStack_80 = plVar16;
            }
            else {
              lVar17 = (long)plVar16 - lStack_88;
              uVar1 = (lVar17 >> 3) + 1;
              if (uVar1 >> 0x3d != 0) {
                FUN_1093c3bcc();
LAB_1096c14e0:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1096c14e4);
                (*pcVar4)();
              }
              uVar10 = (long)plStack_78 - lStack_88 >> 2;
              if (uVar10 <= uVar1) {
                uVar10 = uVar1;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plStack_78 - lStack_88)) {
                uVar10 = 0x1fffffffffffffff;
              }
              plVar5 = &lStack_88;
              FUN_1093c3be0();
              lVar3 = lStack_88;
              lVar6 = (long)plStack_80 - lStack_88;
              piVar13 = (int *)((long)plVar5 + lVar17);
              *piVar13 = piVar12[uVar18];
              piVar13[1] = piVar12[uVar15];
              plVar16 = (long *)(piVar13 + 2);
              lVar6 = (long)piVar13 - lVar6;
              _memcpy(lVar6,lVar3);
              bVar2 = lStack_88 != 0;
              lStack_88 = lVar6;
              plStack_80 = plVar16;
              plStack_78 = plVar5 + uVar10;
              if (bVar2) {
                __ZdlPv();
                plStack_80 = plVar16;
              }
            }
            break;
          }
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
        uVar15 = uVar15 + 1;
      } while (uVar15 != (uVar7 >> 2 & 0x7fffffff));
    }
    *param_1 = lStack_88;
    param_1[1] = (long)plVar16;
  }
  param_1[2] = (long)plStack_78;
  if (piStack_a0 != (int *)0x0) {
    piStack_98 = piStack_a0;
    __ZdlPv();
  }
  return;
}



/* Entry: 1096c151c; end: 1096c154f;  */

void FUN_1096c151c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096c1550; end: 1096c1557;  */

undefined8 FUN_1096c1550(void)

{
  return 1;
}



/* Entry: 1096c1558; end: 1096c1e13;  */

undefined8 FUN_1096c1558(double *param_1,double *param_2)

{
  long *plVar1;
  uint uVar2;
  float *pfVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  double *pdVar12;
  undefined ***pppuVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 *puVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  double dVar25;
  double *pdVar26;
  undefined ***pppuVar27;
  int iVar28;
  long *plVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  double dVar42;
  long lStack_1b8;
  long lStack_1b0;
  undefined **ppuStack_1a0;
  long lStack_198;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [4];
  uint uStack_154;
  int iStack_150;
  int iStack_14c;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_120;
  int *piStack_118;
  long *plStack_110;
  long alStack_108 [2];
  undefined **ppuStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined *apuStack_b0 [2];
  
  pdVar26 = param_2;
  FUN_1096e4e0c(param_2,0x11382aac8);
  pdVar12 = param_1;
  FUN_1096ae760(param_1,0x11382aa48);
  iVar24 = *(int *)pdVar12;
  pdVar12 = param_1;
  FUN_1096ae760(param_1,0x11382aa50);
  uVar5 = *(undefined4 *)pdVar12;
  pdVar12 = param_1;
  FUN_1096ae760(param_1,0x11382aad0);
  iVar6 = *(int *)pdVar12;
  pdVar12 = param_1;
  FUN_1096ae760(param_1,0x11382aad8);
  iVar7 = *(int *)pdVar12;
  lVar15 = (long)iVar7;
  if ((iVar24 < 0) ||
     ((int)((ulong)(*(long *)(*(long *)((long)param_2[1] + 0x28) + 0x10) -
                   *(long *)(*(long *)((long)param_2[1] + 0x28) + 8)) >> 4) <= iVar24)) {
    func_0x000107c2acdc();
  }
  FUN_1096a57ec(&ppuStack_f8);
  FUN_1096ae410(auStack_158,param_2,uVar5);
  if (lStack_148 != 0) {
    uVar16 = (ulong)uStack_154;
    if ((int)uStack_154 < 3) {
      lVar23 = (long)iStack_14c * (long)iStack_150;
    }
    else {
      lVar23 = 1;
      piVar17 = piStack_118;
      do {
        lVar23 = lVar23 * *piVar17;
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 1;
      } while (uVar16 != 0);
    }
    if (lVar23 != 0 && lStack_f0 != 0) {
      iVar24 = piStack_118[1];
      pppuVar27 = &ppuStack_f8;
      (*(code *)ppuStack_f8[5])();
      lVar23 = (long)param_2[1] + -0x20;
      uVar16 = 0x11382aa80;
      func_0x0001096966c0(lVar23,uRam000000011382aa80);
      pdVar12 = param_1;
      if (lVar23 != 0) {
        pdVar12 = param_2;
      }
      FUN_1096c1e14(pdVar12,0x11382aa80);
      dVar40 = *pdVar12;
      pdVar12 = param_1;
      func_0x0001096c1e64(param_1,0x113735c20);
      dVar42 = *pdVar12;
      pdVar12 = param_1;
      func_0x0001096c1e64(param_1,0x113735c10);
      dVar34 = *pdVar12;
      pdVar12 = param_1;
      func_0x0001096c1e64(param_1,0x113735c18);
      dVar31 = *pdVar12;
      pppuVar13 = &ppuStack_f8;
      FUN_1096a5b40(pppuVar13,0x11382aa18);
      fVar35 = *(float *)pppuVar13;
      fVar36 = *(float *)((long)pppuVar13 + 4);
      fVar37 = *(float *)(pppuVar13 + 1);
      fVar38 = *(float *)((long)pppuVar13 + 0xc);
      lStack_170 = 0;
      lStack_168 = 0;
      uStack_160 = 0;
      lStack_188 = 0;
      lStack_180 = 0;
      uStack_178 = 0;
      dVar25 = *pdVar26;
      dVar4 = pdVar26[1];
      if (dVar25 != dVar4) {
        fVar39 = (float)iVar24 / (float)(int)pppuVar27;
        fVar41 = (fVar39 + -1.0) * 0.5;
        do {
          lVar23 = *(long *)(*(long *)((long)dVar25 + 0x10) + 8);
          if ((iVar6 < (int)((ulong)(*(long *)(*(long *)((long)dVar25 + 0x10) + 0x10) - lVar23) >> 4
                            )) && (lVar23 = lVar23 + (long)iVar6 * 0x10, *(long *)(lVar23 + 8) != 0)
             ) {
            ___dynamic_cast(lVar23,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0);
            if (lVar23 == 0) {
              puStack_d8 = &UNK_10f57d0c1;
              plStack_d0 = (long *)&UNK_10f57d0c5;
              plStack_c8 = (long *)0x55;
              FUN_109699380(&puStack_d8);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1096c1d54);
              (*pcVar9)();
            }
            lStack_198 = *(long *)(lVar23 + 8);
            piVar17 = (int *)(lStack_198 + -8);
            do {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar11) {
                *piVar17 = *piVar17 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            ppuStack_1a0 = &PTR_FUN_110b05358;
            iVar24 = *(int *)(*(long *)(lStack_198 + 0x10) + 0xc);
            lVar23 = *(long *)(*(long *)(lStack_198 + 0x10) + 0x48);
            if (lVar23 == 0) {
              iVar28 = 0;
            }
            else {
              iVar28 = (int)((ulong)(*(long *)(lVar23 + 0x10) - *(long *)(lVar23 + 8)) >> 2);
            }
            FUN_1096baba8(&lStack_1b8,&ppuStack_1a0);
            uVar2 = iVar28 + iVar24;
            FUN_1096b5198(&lStack_188,(long)(int)uVar2);
            uVar16 = (ulong)(uint)((int)((ulong)(lStack_180 - lStack_188) >> 2) * -0x55555555) |
                     uVar16 & 0xffffffff00000000;
            lVar18 = *(long *)(*(long *)(lStack_198 + 0x10) + 0x48);
            lVar23 = *(long *)(lVar18 + 0x20);
            pdVar26 = (double *)
                      ((ulong)(uint)((int)((ulong)(lStack_1b0 - lStack_1b8) >> 2) * -0x55555555) |
                      (ulong)pdVar26 & 0xffffffff00000000);
            pppuVar27 = (undefined ***)((ulong)pppuVar27 & 0xffffffff00000000);
            FUN_109699628(uVar16,lStack_188,
                          (ulong)(*(long *)(lVar18 + 0x28) - lVar23) >> 2 & 0xffffffff,lVar23,
                          pdVar26,lStack_1b8,pppuVar27,0);
            lStack_168 = lStack_170;
            func_0x0001073b504c(&lStack_170,(long)(int)uVar2);
            if (0 < (int)uVar2) {
              lVar23 = 0;
              do {
                pfVar3 = (float *)(lStack_1b8 + lVar23);
                fVar33 = *pfVar3;
                fVar32 = pfVar3[1];
                fVar30 = pfVar3[2];
                pfVar3 = (float *)(lStack_188 + lVar23);
                if ((float)dVar34 <=
                    -(fVar33 * *pfVar3 + fVar32 * pfVar3[1] + fVar30 * pfVar3[2]) /
                    SQRT(fVar33 * fVar33 + fVar32 * fVar32 + fVar30 * fVar30)) {
                  uVar14 = (uint)(fVar41 + fVar39 * (fVar37 - fVar35 * fVar33 * (1.0 / fVar30)) +
                                 0.5);
                  if ((-1 < (int)uVar14) && ((int)uVar14 < iStack_14c)) {
                    uVar22 = (uint)(fVar41 + fVar39 * (fVar38 + fVar36 * fVar32 * (1.0 / fVar30)) +
                                   0.5);
                    if ((-1 < (int)uVar22) && ((int)uVar22 < iStack_150)) {
                      fVar32 = *(float *)(lStack_148 + *plStack_110 * (ulong)uVar22 +
                                         (ulong)uVar14 * 4) * (float)dVar40;
                      bVar11 = true;
                      if ((fVar32 <= 200.0) && (bVar11 = true, !NAN(fVar32))) {
                        bVar11 = false;
                      }
                      bVar10 = true;
                      if ((!bVar11) && (bVar10 = false, !NAN(fVar32))) {
                        bVar10 = fVar32 < 5.0;
                      }
                      if (!bVar10) {
                        puStack_d8 = (undefined *)CONCAT44(puStack_d8._4_4_,fVar32 / -fVar30);
                        FUN_1092c9a40(&lStack_170,&puStack_d8);
                      }
                    }
                  }
                }
                lVar23 = lVar23 + 0xc;
              } while ((ulong)uVar2 * 0xc - lVar23 != 0);
            }
            apuStack_b0[0] = (undefined *)param_1[1];
            lVar23 = (long)dVar25 + 0x28;
            FUN_1096bd5b4(lVar23,apuStack_b0);
            if (lVar23 == 0) {
              plVar29 = (long *)0x30;
              __Znwm();
              plVar19 = plVar29 + 1;
              *plVar19 = 0;
              plVar29[2] = 0;
              *plVar29 = (long)&PTR_FUN_110b06190;
              plStack_d0 = plVar29 + 3;
              *plStack_d0 = 0;
              plVar29[4] = 0;
              plVar29[5] = 0;
              do {
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar11) {
                  *plVar19 = *plVar19 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              puStack_d8 = apuStack_b0[0];
              uStack_e8 = 0;
              plStack_e0 = (long *)0x0;
              plStack_c8 = plVar29;
              plStack_c0 = plStack_d0;
              plStack_b8 = plVar29;
              FUN_1096bd704((long)dVar25 + 0x28,&puStack_d8,&puStack_d8);
              plVar29 = plStack_c8;
              if (plStack_c8 != (long *)0x0) {
                plVar19 = plStack_c8 + 1;
                do {
                  lVar23 = *plVar19;
                  cVar8 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar11) {
                    *plVar19 = lVar23 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
                }
              }
              plVar29 = plStack_e0;
              if (plStack_e0 != (long *)0x0) {
                plVar19 = plStack_e0 + 1;
                do {
                  lVar23 = *plVar19;
                  cVar8 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar11) {
                    *plVar19 = lVar23 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
                }
              }
              plVar19 = plStack_b8;
              plVar29 = plStack_c0;
              if (plStack_b8 != (long *)0x0) {
                plVar1 = plStack_b8 + 1;
                do {
                  lVar23 = *plVar1;
                  cVar8 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar11) {
                    *plVar1 = lVar23 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
                }
              }
            }
            else {
              plVar29 = *(long **)(lVar23 + 0x18);
            }
            if ((int)((ulong)(plVar29[1] - *plVar29) >> 2) <= iVar7) {
              puStack_d8 = (undefined *)CONCAT44(puStack_d8._4_4_,0x3f800000);
              func_0x00010817850c(plVar29,lVar15 + 1,&puStack_d8);
            }
            uVar20 = lStack_168 - lStack_170 >> 2;
            if ((int)uVar2 / 10 < (int)uVar20) {
              iVar24 = (int)(dVar31 * (double)uVar20);
              if (lStack_170 + (long)iVar24 * 4 != lStack_168) {
                FUN_109530e44();
              }
              *(float *)(*plVar29 + lVar15 * 4) =
                   (1.0 - (float)dVar42) * *(float *)(lStack_170 + (long)iVar24 * 4) +
                   (float)dVar42 * *(float *)(*plVar29 + lVar15 * 4);
            }
            FUN_1096baa30(&ppuStack_1a0);
            fVar30 = *(float *)(*plVar29 + lVar15 * 4);
            uVar20 = 0xfffffffffffffffc;
            puVar21 = (undefined8 *)(lStack_198 + 0x30);
            do {
              puVar21[1] = CONCAT44((float)((ulong)puVar21[1] >> 0x20) * fVar30,
                                    (float)puVar21[1] * fVar30);
              *puVar21 = CONCAT44((float)((ulong)*puVar21 >> 0x20) * fVar30,(float)*puVar21 * fVar30
                                 );
              uVar20 = uVar20 + 4;
              puVar21 = puVar21 + 2;
            } while (uVar20 < 8);
            FUN_1096e4d6c(dVar25,lVar15,&ppuStack_1a0);
            if (lStack_1b8 != 0) {
              lStack_1b0 = lStack_1b8;
              __ZdlPv();
            }
            ppuStack_1a0 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_1a0);
          }
          dVar25 = (double)((long)dVar25 + 0x50);
        } while (dVar25 != dVar4);
        if (lStack_188 != 0) {
          lStack_180 = lStack_188;
          __ZdlPv();
        }
      }
      if (lStack_170 != 0) {
        lStack_168 = lStack_170;
        __ZdlPv();
      }
    }
  }
  if (lStack_120 != 0) {
    piVar17 = (int *)(lStack_120 + 0x14);
    do {
      iVar24 = *piVar17;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar11) {
        *piVar17 = iVar24 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar24 + -1 == 0) {
      func_0x000109a848d4(auStack_158);
    }
  }
  lStack_120 = 0;
  uStack_140 = 0;
  lStack_148 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  if (0 < (int)uStack_154) {
    lVar15 = 0;
    do {
      piStack_118[lVar15] = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uStack_154);
  }
  if (plStack_110 != alStack_108 && plStack_110 != (long *)0x0) {
    _free(plStack_110[-1]);
  }
  ppuStack_f8 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_f8);
  return 1;
}



/* Entry: 1096c1e14; end: 1096c1eb3;  */

void FUN_1096c1e14(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096c1e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096c1eb4; end: 1096c1f33;  */

void FUN_1096c1eb4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 == 0) || (puVar2 = *(undefined8 **)(lVar1 + 8), puVar2 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar1 = *(long *)(param_1 + 8) + -0x20;
    puVar2 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar1,param_2);
    *(undefined8 **)(lVar1 + 8) = puVar2;
  }
  *puVar2 = *param_3;
  return;
}



/* Entry: 1096c1f34; end: 1096c1f67;  */

undefined8 * FUN_1096c1f34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096c1f68; end: 1096c1f9b;  */

void FUN_1096c1f68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096c1f9c; end: 1096c1fbb;  */

void FUN_1096c1f9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(8);
  return;
}



/* Entry: 1096c1fbc; end: 1096c1fff;  */

bool FUN_1096c1fbc(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c058);
  return (int)plVar1 == 1;
}



/* Entry: 1096c2000; end: 1096c201f;  */

undefined8 FUN_1096c2000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096c2020; end: 1096c2077;  */

void FUN_1096c2020(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b060a0;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096c2078; end: 1096c20ef;  */

void FUN_1096c2078(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  param_1[1] = puVar1;
  *param_1 = &PTR_FUN_110b06058;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096c20f0; end: 1096c211f;  */

bool FUN_1096c20f0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b060a0,0);
  return param_1 != 0;
}



/* Entry: 1096c2120; end: 1096c2133;  */

void FUN_1096c2120(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1096c2134; end: 1096c218b;  */

long FUN_1096c2134(long param_1)

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



/* Entry: 1096c218c; end: 1096c219b;  */

void FUN_1096c218c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b06190;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096c219c; end: 1096c21bb;  */

void FUN_1096c219c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b06190;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096c21bc; end: 1096c21d7;  */

void FUN_1096c21bc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1096c21d8; end: 1096c2287;  */

undefined8 * FUN_1096c21d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b061e0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0xa0);
  puVar1[1] = &PTR_FUN_110b01d60;
  puVar1[2] = 0;
  puVar1[3] = 0x2ffffffff;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110b064b8;
  return param_1;
}



/* Entry: 1096c2288; end: 1096c2397;  */

long * FUN_1096c2288(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  byte *pbVar4;
  bool bVar5;
  long lVar6;
  undefined ***pppuVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  byte *pbVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_38;
  
  pppuVar7 = &ppuStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *(long *)(param_1 + 8);
  lVar6 = lVar18 + -0x20;
  plVar9 = plRam0000000113735c28;
  func_0x0001096966c0();
  if ((lVar6 == 0) || (plVar17 = *(long **)(lVar6 + 8), plVar17 == (long *)0x0)) {
    plVar17 = plRam0000000113735c28;
    (**(code **)(*plRam0000000113735c28 + 0x30))();
  }
  ppuStack_60 = &PTR_FUN_110b01d60;
  lStack_58 = 0;
  if (plVar17[1] != 0) {
    func_0x000107c2acd4(&ppuStack_60);
    lStack_58 = plVar17[1];
    ppuStack_60 = (undefined **)*plVar17;
    if (lStack_58 != 0) {
      piVar11 = (int *)(lStack_58 + -8);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = *piVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  uVar25 = *(undefined8 *)(lVar18 + 0x10);
  *(long *)(lVar18 + 0x10) = lStack_58;
  *(undefined ***)(lVar18 + 8) = ppuStack_60;
  ppuStack_60 = &PTR_FUN_110b01d60;
  lStack_58 = uVar25;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (long *)0x1;
  }
  ___stack_chk_fail();
  FUN_10969664c(&ppuStack_60);
  __Unwind_Resume(pppuVar7);
  func_0x000104bd46a0();
  lVar6 = *(long *)(*(long *)((long)pppuVar7 + 0x10) + 8);
  if ((int)((ulong)(*(long *)(*(long *)((long)pppuVar7 + 0x10) + 0x10) - lVar6) >> 4) < 1) {
    func_0x000107c2acdc();
  }
  ___dynamic_cast();
  if (lVar6 == 0) {
    func_0x000107c2acdc();
  }
  lVar6 = *(long *)(lVar6 + 8);
  if (lVar6 != 0) {
    piVar11 = (int *)(lVar6 + -8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = *piVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_110 = &PTR_FUN_110b01d60;
  lStack_108 = lVar6;
  func_0x000107c2acd4(&ppuStack_110);
  plVar15 = plVar9 + 1;
  plVar17 = (long *)*plVar9;
  if (plVar17 == plVar15) {
    lVar6 = 0;
  }
  else {
    fVar26 = *(float *)(lVar6 + 8);
    uVar27 = *(undefined4 *)(lVar6 + 0xc);
    fVar21 = *(float *)(lVar6 + 0x10);
    fVar29 = *(float *)(lVar6 + 0x14);
    fVar10 = 3.4028235e+38;
    plVar12 = plVar17;
    iVar19 = 0;
    do {
      iVar2 = *(int *)((long)plVar12 + 0x1c);
      iVar20 = iVar19;
      if (param_4 <= iVar2) break;
      fVar22 = fVar26;
      _hypotf(fVar26,uVar27);
      fVar23 = *(float *)(plVar12 + 4);
      _hypotf(fVar23,*(undefined4 *)((long)plVar12 + 0x24));
      fVar24 = fVar22 / fVar23;
      fVar28 = 1.0 / fVar24;
      if (1.0 / fVar24 <= fVar24) {
        fVar28 = fVar24;
      }
      fVar24 = fVar10;
      if (fVar28 < 2.0) {
        fVar24 = fVar21 - *(float *)(plVar12 + 5);
        _hypotf(fVar24,fVar29 - *(float *)((long)plVar12 + 0x2c));
        fVar24 = fVar28 * fVar24;
        if (fVar22 <= fVar23) {
          fVar23 = fVar22;
        }
        iVar20 = iVar2;
        if (fVar23 + fVar23 <= fVar24 || fVar10 <= fVar24) {
          fVar24 = fVar10;
          iVar20 = iVar19;
        }
      }
      fVar10 = fVar24;
      plVar16 = (long *)plVar12[1];
      plVar8 = plVar12;
      if ((long *)plVar12[1] == (long *)0x0) {
        do {
          plVar12 = (long *)plVar8[2];
          bVar5 = (long *)*plVar12 != plVar8;
          plVar8 = plVar12;
        } while (bVar5);
      }
      else {
        do {
          plVar12 = plVar16;
          plVar16 = (long *)*plVar12;
        } while ((long *)*plVar12 != (long *)0x0);
      }
      iVar19 = iVar20;
    } while (plVar12 != plVar15);
    lVar6 = (long)iVar20;
  }
  iVar19 = (int)lVar6 + -1;
  pbVar4 = (byte *)(param_3 + lVar6);
  do {
    pbVar14 = pbVar4;
    iVar19 = iVar19 + 1;
    pbVar4 = pbVar14 + 1;
  } while ((*pbVar14 & 1) != 0);
  *(int *)((long)pppuVar7 + 0x20) = iVar19;
  *pbVar14 = 1;
  plVar8 = (long *)*plVar15;
  plVar16 = plVar8;
  plVar12 = plVar15;
  if (plVar8 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (iVar19 <= *(int *)((long)plVar16 + 0x1c)) {
        lVar6 = 0;
        plVar12 = plVar16;
      }
      puVar1 = (undefined8 *)((long)plVar16 + lVar6);
      plVar16 = (long *)*puVar1;
    } while ((long *)*puVar1 != (long *)0x0);
    if ((plVar12 != plVar15) && (*(int *)((long)plVar12 + 0x1c) <= iVar19)) {
      plVar15 = plVar12;
      plVar16 = (long *)plVar12[1];
      if ((long *)plVar12[1] == (long *)0x0) {
        do {
          plVar13 = (long *)plVar15[2];
          bVar5 = (long *)*plVar13 != plVar15;
          plVar15 = plVar13;
        } while (bVar5);
      }
      else {
        do {
          plVar13 = plVar16;
          plVar16 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
      if (plVar17 == plVar12) {
        *plVar9 = (long)plVar13;
      }
      plVar9[2] = plVar9[2] + -1;
      func_0x000104c611f0(plVar8,plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar12);
      return plVar12;
    }
  }
  return plVar8;
}



/* Entry: 1096c2398; end: 1096c265b;  */

void FUN_1096c2398(long param_1,undefined8 *param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  byte *pbVar4;
  bool bVar5;
  long *plVar6;
  float fVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined **ppuStack_b0;
  long lStack_a8;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  if ((int)((ulong)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) - lVar11) >> 4) < 1) {
    func_0x000107c2acdc();
  }
  ___dynamic_cast();
  if (lVar11 == 0) {
    func_0x000107c2acdc();
  }
  lVar11 = *(long *)(lVar11 + 8);
  if (lVar11 != 0) {
    piVar8 = (int *)(lVar11 + -8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = *piVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_b0 = &PTR_FUN_110b01d60;
  lStack_a8 = lVar11;
  func_0x000107c2acd4(&ppuStack_b0);
  plVar13 = param_2 + 1;
  plVar15 = (long *)*param_2;
  if (plVar15 == plVar13) {
    lVar11 = 0;
  }
  else {
    fVar22 = *(float *)(lVar11 + 8);
    uVar23 = *(undefined4 *)(lVar11 + 0xc);
    fVar18 = *(float *)(lVar11 + 0x10);
    fVar25 = *(float *)(lVar11 + 0x14);
    fVar7 = 3.4028235e+38;
    plVar9 = plVar15;
    iVar16 = 0;
    do {
      iVar2 = *(int *)((long)plVar9 + 0x1c);
      iVar17 = iVar16;
      if (param_4 <= iVar2) break;
      fVar19 = fVar22;
      _hypotf(fVar22,uVar23);
      fVar20 = *(float *)(plVar9 + 4);
      _hypotf(fVar20,*(undefined4 *)((long)plVar9 + 0x24));
      fVar21 = fVar19 / fVar20;
      fVar24 = 1.0 / fVar21;
      if (1.0 / fVar21 <= fVar21) {
        fVar24 = fVar21;
      }
      fVar21 = fVar7;
      if (fVar24 < 2.0) {
        fVar21 = fVar18 - *(float *)(plVar9 + 5);
        _hypotf(fVar21,fVar25 - *(float *)((long)plVar9 + 0x2c));
        fVar21 = fVar24 * fVar21;
        if (fVar19 <= fVar20) {
          fVar20 = fVar19;
        }
        iVar17 = iVar2;
        if (fVar20 + fVar20 <= fVar21 || fVar7 <= fVar21) {
          fVar21 = fVar7;
          iVar17 = iVar16;
        }
      }
      fVar7 = fVar21;
      plVar14 = (long *)plVar9[1];
      plVar6 = plVar9;
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar9 = (long *)plVar6[2];
          bVar5 = (long *)*plVar9 != plVar6;
          plVar6 = plVar9;
        } while (bVar5);
      }
      else {
        do {
          plVar9 = plVar14;
          plVar14 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      iVar16 = iVar17;
    } while (plVar9 != plVar13);
    lVar11 = (long)iVar17;
  }
  iVar16 = (int)lVar11 + -1;
  pbVar4 = (byte *)(param_3 + lVar11);
  do {
    pbVar12 = pbVar4;
    iVar16 = iVar16 + 1;
    pbVar4 = pbVar12 + 1;
  } while ((*pbVar12 & 1) != 0);
  *(int *)(param_1 + 0x20) = iVar16;
  *pbVar12 = 1;
  plVar6 = (long *)*plVar13;
  plVar14 = plVar6;
  plVar9 = plVar13;
  if (plVar6 != (long *)0x0) {
    do {
      lVar11 = 8;
      if (iVar16 <= *(int *)((long)plVar14 + 0x1c)) {
        lVar11 = 0;
        plVar9 = plVar14;
      }
      puVar1 = (undefined8 *)((long)plVar14 + lVar11);
      plVar14 = (long *)*puVar1;
    } while ((long *)*puVar1 != (long *)0x0);
    if ((plVar9 != plVar13) && (*(int *)((long)plVar9 + 0x1c) <= iVar16)) {
      plVar13 = plVar9;
      plVar14 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar13[2];
          bVar5 = (long *)*plVar10 != plVar13;
          plVar13 = plVar10;
        } while (bVar5);
      }
      else {
        do {
          plVar10 = plVar14;
          plVar14 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      if (plVar15 == plVar9) {
        *param_2 = plVar10;
      }
      param_2[2] = param_2[2] + -1;
      func_0x000104c611f0(plVar6,plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar9);
      return;
    }
  }
  return;
}



/* Entry: 1096c265c; end: 1096c3367;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1096c265c(int *param_1,undefined **param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *******pppppppuVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined8 *******pppppppuVar10;
  code *pcVar11;
  bool bVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 *******pppppppuVar23;
  undefined8 ******ppppppuVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  int *piVar28;
  undefined *puVar29;
  undefined4 *puVar30;
  undefined8 *******pppppppuVar31;
  undefined8 *******pppppppuVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  int iVar36;
  undefined8 *puVar37;
  undefined8 *******pppppppuVar38;
  undefined **ppuVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  int iStack_18c;
  undefined **ppuStack_180;
  undefined8 ******ppppppuStack_178;
  undefined8 ******ppppppuStack_170;
  undefined8 *******pppppppuStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 *******pppppppuStack_150;
  undefined **ppuStack_140;
  undefined4 **ppuStack_138;
  undefined4 **ppuStack_130;
  undefined1 uStack_128;
  undefined4 *puStack_120;
  undefined4 *puStack_118;
  undefined8 uStack_110;
  undefined8 *******pppppppuStack_108;
  undefined8 *******pppppppuStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar19 = param_1;
  FUN_10969e0b4(param_1,0x113735c38);
  ppuVar13 = param_2;
  if ((char)*piVar19 == '\x01') {
    FUN_1096e4f30();
  }
  else {
    FUN_1096e4e0c(param_2,0x11382aac8);
  }
  ppuVar39 = param_2;
  func_0x000109693cdc(param_2,0x11382aa88);
  cVar6 = *(char *)ppuVar39;
  FUN_1096c3368(param_3,0x11382aa90);
  ppuVar39 = param_2;
  FUN_1096ae760(param_2,0x11382aaa0);
  iVar36 = *(int *)ppuVar39;
  if (iVar36 == -1) {
    iVar36 = *(int *)(*(long *)(param_1 + 2) + 0x1c);
  }
  uVar17 = ((long)ppuVar13[1] - (long)*ppuVar13 >> 4) * -0x3333333333333333;
  iStack_18c = 0;
  if ((uVar17 & 0xffffffff) != 0) {
    lVar18 = (long)(int)uVar17 * 0x50;
    piVar19 = (int *)(*ppuVar13 + 0x18);
    do {
      if (*piVar19 == 0) {
        iStack_18c = iStack_18c + 1;
      }
      lVar18 = lVar18 + -0x50;
      piVar19 = piVar19 + 0x14;
    } while (lVar18 != 0);
  }
  piVar19 = param_1;
  FUN_1096ae760(param_1,0x11382aa48);
  iVar4 = *piVar19;
  pppppppuStack_160 = (undefined8 *******)0x0;
  pppppppuStack_158 = (undefined8 *******)0x0;
  pppppppuStack_150 = (undefined8 *******)0x0;
  puVar14 = param_2[1] + -0x20;
  func_0x0001096966c0(puVar14,uRam000000011382aa98);
  if (puVar14 == (undefined *)0x0) {
    lVar18 = *(long *)(param_1 + 2);
    if (*(long *)(lVar18 + 0x10) != 0 && iStack_18c < iVar36) {
      if ((*ppuVar13 == ppuVar13[1]) ||
         (*(int *)(lVar18 + 0x18) !=
          (int)((ulong)((long)ppuVar13[1] - (long)*ppuVar13) >> 4) * -0x33333333)) {
        FUN_1096ae410(&uStack_110,param_2,iVar4);
        pppppppuVar15 = (undefined8 *******)(lVar18 + 8);
        (**(code **)(*(long *)(lVar18 + 8) + 0x20))(&ppuStack_140,pppppppuVar15,&uStack_110);
        if (lStack_d8 != 0) {
          piVar19 = (int *)(lStack_d8 + 0x14);
          do {
            iVar7 = *piVar19;
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar12) {
              *piVar19 = iVar7 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar7 + -1 == 0) {
            pppppppuVar15 = (undefined8 *******)&uStack_110;
            func_0x000109a848d4();
          }
        }
        lStack_d8 = 0;
        pppppppuStack_f8 = (undefined8 *******)0x0;
        pppppppuStack_100 = (undefined8 *******)0x0;
        uStack_e8 = 0;
        pppppppuStack_f0 = (undefined8 *******)0x0;
        if (0 < uStack_110._4_4_) {
          lVar18 = 0;
          do {
            *(undefined4 *)(lStack_d0 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < uStack_110._4_4_);
        }
        puVar9 = (undefined1 *)CONCAT44(uStack_c4,uStack_c8);
        if (puVar9 != auStack_c0 && puVar9 != (undefined1 *)0x0) {
          pppppppuVar15 = *(undefined8 ********)(puVar9 + -8);
          _free();
        }
        puVar16 = (undefined8 *)ppuStack_138[1];
        uVar17 = ((long)ppuStack_138[2] - (long)puVar16) * 0x10000000 >> 0x1c & 0xfffffffffffffff0;
        if (uVar17 != 0) {
          puVar34 = (undefined8 *)((long)puVar16 + uVar17);
          do {
            pppppppuVar31 = pppppppuStack_158;
            if (pppppppuStack_158 < pppppppuStack_150) {
              *pppppppuStack_158 = (undefined8 ******)0x0;
              pppppppuStack_158[1] = (undefined8 ******)0x0;
              pppppppuStack_158[2] = (undefined8 ******)0x0;
              func_0x000107c2acdc();
              *pppppppuVar31 = (undefined8 ******)&PTR_FUN_110b01d60;
              ppppppuVar24 = *pppppppuVar15;
              pppppppuVar31[1] = pppppppuVar15[1];
              *pppppppuVar31 = ppppppuVar24;
              if (pppppppuVar31[1] != (undefined8 ******)0x0) {
                ppppppuVar24 = pppppppuVar31[1] + -1;
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(ppppppuVar24,0x10);
                  if (bVar12) {
                    *(int *)ppppppuVar24 = *(int *)ppppppuVar24 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              *pppppppuVar31 = (undefined8 ******)&PTR_FUN_110b051b8;
              pppppppuVar31[2] = (undefined8 ******)0xffffffff;
              pppppppuVar31 = pppppppuVar31 + 3;
            }
            else {
              lVar18 = (long)pppppppuStack_158 - (long)pppppppuStack_160;
              uVar17 = (lVar18 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar17) {
                FUN_1096c3bd8();
                goto LAB_1096c32b8;
              }
              lVar20 = (long)pppppppuStack_150 - (long)pppppppuStack_160 >> 3;
              uVar26 = lVar20 * 0x5555555555555556;
              if (uVar26 < uVar17 || uVar26 - uVar17 == 0) {
                uVar26 = uVar17;
              }
              if (0x555555555555554 < (ulong)(lVar20 * -0x5555555555555555)) {
                uVar26 = 0xaaaaaaaaaaaaaaa;
              }
              pppppppuStack_f0 = &pppppppuStack_160;
              if (uVar26 == 0) {
                pppppppuVar15 = (undefined8 *******)0x0;
              }
              else {
                pppppppuVar15 = &pppppppuStack_160;
                FUN_1096c3bec();
              }
              pppppppuVar38 = pppppppuVar15 + uVar26 * 3;
              puVar35 = (undefined8 *)((long)pppppppuVar15 + lVar18);
              pppppppuStack_f8 = pppppppuVar38;
              *puVar35 = 0;
              puVar35[1] = 0;
              puVar35[2] = 0;
              func_0x000107c2acdc();
              *puVar35 = &PTR_FUN_110b01d60;
              ppppppuVar24 = *pppppppuVar15;
              puVar35[1] = pppppppuVar15[1];
              *puVar35 = ppppppuVar24;
              if (puVar35[1] != 0) {
                piVar19 = (int *)(puVar35[1] + -8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar12) {
                    *piVar19 = *piVar19 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              *puVar35 = &PTR_FUN_110b051b8;
              pppppppuVar10 = pppppppuStack_158;
              pppppppuVar32 = pppppppuStack_160;
              puVar35[2] = 0xffffffff;
              pppppppuStack_100 = (undefined8 *******)(puVar35 + 3);
              pppppppuVar2 = (undefined8 *******)
                             ((long)puVar35 + ((long)pppppppuStack_160 - (long)pppppppuStack_158));
              pppppppuVar15 = pppppppuStack_160;
              pppppppuVar23 = pppppppuVar2;
              pppppppuVar31 = pppppppuStack_100;
              if ((long)pppppppuStack_160 - (long)pppppppuStack_158 != 0) {
                do {
                  *pppppppuVar23 = (undefined8 ******)&PTR_FUN_110b01d60;
                  ppppppuVar24 = *pppppppuVar15;
                  pppppppuVar23[1] = pppppppuVar15[1];
                  *pppppppuVar23 = ppppppuVar24;
                  pppppppuVar15[1] = (undefined8 ******)0x0;
                  *pppppppuVar23 = (undefined8 ******)&PTR_FUN_110b051b8;
                  pppppppuVar23[2] = pppppppuVar15[2];
                  pppppppuVar15 = pppppppuVar15 + 3;
                  pppppppuVar23 = pppppppuVar23 + 3;
                } while (pppppppuVar15 != pppppppuVar10);
                do {
                  *pppppppuVar32 = (undefined8 ******)&PTR_FUN_110b01d60;
                  func_0x000107c2acd4(pppppppuVar32);
                  pppppppuVar32 = pppppppuVar32 + 3;
                  pppppppuVar31 = pppppppuStack_100;
                  pppppppuVar38 = pppppppuStack_f8;
                } while (pppppppuVar32 != pppppppuVar10);
              }
              pppppppuStack_f8 = pppppppuStack_150;
              pppppppuVar15 = (undefined8 *******)&uStack_110;
              uStack_110 = (undefined **)pppppppuStack_160;
              pppppppuStack_160 = pppppppuVar2;
              pppppppuStack_158 = pppppppuVar31;
              pppppppuStack_150 = pppppppuVar38;
              pppppppuStack_108 = (undefined8 *******)uStack_110;
              pppppppuStack_100 = (undefined8 *******)uStack_110;
              FUN_1096c3c30();
            }
            pppppppuStack_158 = pppppppuVar31;
            if (pppppppuVar31[-2] != (undefined8 ******)puVar16[1]) {
              pppppppuVar15 = pppppppuVar31 + -3;
              func_0x000107c2acd4();
              ppppppuVar24 = (undefined8 ******)*puVar16;
              pppppppuVar31[-2] = (undefined8 ******)puVar16[1];
              pppppppuVar31[-3] = ppppppuVar24;
              if (pppppppuVar31[-2] != (undefined8 ******)0x0) {
                ppppppuVar24 = pppppppuVar31[-2] + -1;
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(ppppppuVar24,0x10);
                  if (bVar12) {
                    *(int *)ppppppuVar24 = *(int *)ppppppuVar24 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
            }
            puVar16 = puVar16 + 2;
          } while (puVar16 != puVar34);
        }
        ppuStack_140 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_140);
      }
    }
  }
  else {
    FUN_1096c33fc(&uStack_110,param_2);
    FUN_1096c3b60(&pppppppuStack_160);
    pppppppuStack_158 = pppppppuStack_108;
    pppppppuStack_160 = (undefined8 *******)uStack_110;
    pppppppuStack_150 = pppppppuStack_100;
    pppppppuStack_108 = (undefined8 *******)0x0;
    pppppppuStack_100 = (undefined8 *******)0x0;
    uStack_110 = (undefined **)0x0;
    ppuStack_140 = (undefined **)&uStack_110;
    func_0x000107c2ad04(&ppuStack_140);
  }
  piVar19 = param_1;
  FUN_1096ae760(param_1,0x11382aad8);
  iVar7 = *piVar19;
  lVar18 = (long)iVar7;
  pppppppuVar15 = pppppppuStack_160;
  pppppppuVar31 = pppppppuStack_160;
  pppppppuVar38 = pppppppuStack_158;
  if (cVar6 != '\0') {
    lVar20 = *(long *)(param_1 + 2);
    *(undefined8 *)(lVar20 + 0x28) = 0;
    *(undefined8 *)(lVar20 + 0x20) = 0;
    *(undefined8 *)(lVar20 + 0x88) = 0;
    *(undefined8 *)(lVar20 + 0x80) = 0;
    *(undefined8 *)(lVar20 + 0x98) = 0;
    *(undefined8 *)(lVar20 + 0x90) = 0;
    *(undefined8 *)(lVar20 + 0x68) = 0;
    *(undefined8 *)(lVar20 + 0x60) = 0;
    *(undefined8 *)(lVar20 + 0x78) = 0;
    *(undefined8 *)(lVar20 + 0x70) = 0;
    *(undefined8 *)(lVar20 + 0x48) = 0;
    *(undefined8 *)(lVar20 + 0x40) = 0;
    *(undefined8 *)(lVar20 + 0x58) = 0;
    *(undefined8 *)(lVar20 + 0x50) = 0;
    *(undefined8 *)(lVar20 + 0x38) = 0;
    *(undefined8 *)(lVar20 + 0x30) = 0;
    puVar33 = *ppuVar13;
    puVar29 = ppuVar13[1];
    puVar14 = puVar33;
    if (puVar33 != puVar29) {
      do {
        if (((*(int *)(puVar14 + 0x18) == 0) && (uVar5 = *(uint *)(puVar14 + 0x20), -1 < (int)uVar5)
            ) && ((int)uVar5 < iVar36)) {
          *(undefined1 *)(lVar20 + 0x20 + (ulong)uVar5) = 1;
        }
        puVar14 = puVar14 + 0x50;
      } while (puVar14 != puVar29);
      do {
        if ((*(int *)(puVar33 + 0x18) == 0) &&
           (*(int *)(puVar33 + 0x20) == -1 || iVar36 <= *(int *)(puVar33 + 0x20))) {
          FUN_1096c2398(puVar33,param_3,*(long *)(param_1 + 2) + 0x20,iVar36);
        }
        puVar33 = puVar33 + 0x50;
        pppppppuVar15 = pppppppuStack_160;
        pppppppuVar31 = pppppppuStack_160;
        pppppppuVar38 = pppppppuStack_158;
      } while (puVar33 != puVar29);
    }
  }
  for (; pppppppuVar32 = pppppppuStack_158, pppppppuVar15 != pppppppuStack_158;
      pppppppuVar15 = pppppppuVar15 + 3) {
    iVar22 = *(int *)((long)pppppppuVar15 + 0x14);
    piVar19 = (int *)*ppuVar13;
    uVar17 = ((long)ppuVar13[1] - (long)piVar19 >> 4) * -0x3333333333333333;
    if (iVar22 == 1) {
      pppppppuStack_160 = pppppppuVar31;
      pppppppuStack_158 = pppppppuVar38;
      if ((uVar17 & 0xffffffff) != 0) {
        lVar20 = (long)(int)uVar17 * 0x50;
        do {
          if ((piVar19[6] == 1) && (piVar19[8] == *(int *)(pppppppuVar15 + 2))) {
            FUN_1096e4d6c(piVar19,lVar18,pppppppuVar15);
            goto LAB_1096c307c;
          }
          piVar19 = piVar19 + 0x14;
          lVar20 = lVar20 + -0x50;
        } while (lVar20 != 0);
      }
LAB_1096c2d8c:
      ppppppuStack_178 = pppppppuVar15[1];
      if (ppppppuStack_178 != (undefined8 ******)0x0) {
        ppppppuVar24 = ppppppuStack_178 + -1;
        do {
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppuVar24,0x10);
          if (bVar12) {
            *(int *)ppppppuVar24 = *(int *)ppppppuVar24 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      ppppppuStack_170 = pppppppuVar15[2];
      ppuStack_180 = &PTR_FUN_110b051b8;
      func_0x000107c2acec(&pppppppuStack_108);
      pppppppuStack_108 = (undefined8 *******)&PTR_FUN_110afd8b8;
      pppppppuStack_f8 = (undefined8 *******)0x0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      lStack_d0 = 0;
      lStack_d8 = 0;
      pppppppuStack_f0._0_4_ = 0xffffffff;
      uStack_c8 = 0x3f800000;
      uStack_110 = (undefined **)CONCAT44(uStack_110._4_4_,iVar4);
      FUN_1096e4d6c(&uStack_110,lVar18,&ppuStack_180);
      pppppppuStack_f8 = (undefined8 *******)((ulong)ppppppuStack_170 >> 0x20);
      pppppppuStack_f0 = (undefined8 *******)CONCAT44(pppppppuStack_f0._4_4_,ppppppuStack_170._0_4_)
      ;
      puVar30 = (undefined4 *)ppuVar13[1];
      if (puVar30 < ppuVar13[2]) {
        *puVar30 = (undefined4)uStack_110;
        *(undefined ***)(puVar30 + 2) = &PTR_FUN_110b01d60;
        *(undefined8 ********)(puVar30 + 4) = pppppppuStack_100;
        *(undefined8 ********)(puVar30 + 2) = pppppppuStack_108;
        pppppppuStack_100 = (undefined8 *******)0x0;
        *(undefined ***)(puVar30 + 2) = &PTR_FUN_110afd8b8;
        *(undefined8 ********)(puVar30 + 6) = pppppppuStack_f8;
        puVar30[8] = ppppppuStack_170._0_4_;
        FUN_1096c3c94(puVar30 + 10,&uStack_e8);
        puVar30 = puVar30 + 0x14;
      }
      else {
        lVar20 = (long)puVar30 - (long)*ppuVar13;
        uVar17 = (lVar20 >> 4) * -0x3333333333333333 + 1;
        if (0x333333333333333 < uVar17) {
          FUN_1096c3d00();
LAB_1096c32b8:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1096c32bc);
          (*pcVar11)();
        }
        lVar21 = (long)ppuVar13[2] - (long)*ppuVar13 >> 4;
        uVar26 = lVar21 * -0x6666666666666666;
        if (uVar26 < uVar17 || uVar26 - uVar17 == 0) {
          uVar26 = uVar17;
        }
        if (0x199999999999998 < (ulong)(lVar21 * -0x3333333333333333)) {
          uVar26 = 0x333333333333333;
        }
        if (uVar26 == 0) {
          ppuVar39 = (undefined **)0x0;
          uVar26 = 0;
        }
        else {
          ppuVar39 = ppuVar13;
          FUN_1096c3d14();
        }
        puVar30 = (undefined4 *)((long)ppuVar39 + lVar20);
        *puVar30 = (undefined4)uStack_110;
        *(undefined ***)(puVar30 + 2) = &PTR_FUN_110b01d60;
        *(undefined8 ********)(puVar30 + 4) = pppppppuStack_100;
        *(undefined8 ********)(puVar30 + 2) = pppppppuStack_108;
        pppppppuStack_100 = (undefined8 *******)0x0;
        *(undefined ***)(puVar30 + 2) = &PTR_FUN_110afd8b8;
        puVar30[8] = pppppppuStack_f0._0_4_;
        *(undefined8 ********)(puVar30 + 6) = pppppppuStack_f8;
        FUN_1096c3c94(puVar30 + 10,&uStack_e8);
        puVar14 = *ppuVar13;
        puVar33 = ppuVar13[1];
        puVar3 = (undefined4 *)((long)puVar30 + ((long)puVar14 - (long)puVar33));
        ppuStack_138 = &puStack_120;
        ppuStack_130 = &puStack_118;
        puStack_118 = puVar3;
        ppuStack_140 = ppuVar13;
        puStack_120 = puVar3;
        if (puVar33 == puVar14) {
          uStack_128 = 1;
        }
        else {
          puVar29 = puVar14 + 0x28;
          do {
            *puStack_118 = *(undefined4 *)(puVar29 + -0x28);
            *(undefined ***)(puStack_118 + 2) = &PTR_FUN_110b01d60;
            uVar27 = *(undefined8 *)(puVar29 + -0x20);
            *(undefined8 *)(puStack_118 + 4) = *(undefined8 *)(puVar29 + -0x18);
            *(undefined8 *)(puStack_118 + 2) = uVar27;
            *(undefined8 *)(puVar29 + -0x18) = 0;
            *(undefined ***)(puStack_118 + 2) = &PTR_FUN_110afd8b8;
            uVar27 = *(undefined8 *)(puVar29 + -0x10);
            puStack_118[8] = *(undefined4 *)(puVar29 + -8);
            *(undefined8 *)(puStack_118 + 6) = uVar27;
            FUN_1096c3c94(puStack_118 + 10,puVar29);
            puStack_118 = puStack_118 + 0x14;
            puVar1 = puVar29 + 0x28;
            puVar29 = puVar29 + 0x50;
          } while (puVar1 != puVar33);
          uStack_128 = 1;
          do {
            FUN_10959a998(puVar14 + 0x28);
            *(undefined ***)(puVar14 + 8) = &PTR_FUN_110b01d60;
            func_0x000107c2acd4();
            puVar14 = puVar14 + 0x50;
          } while (puVar14 != puVar33);
        }
        puVar30 = puVar30 + 0x14;
        FUN_1096c3d58(&ppuStack_140);
        puVar14 = *ppuVar13;
        *ppuVar13 = (undefined *)puVar3;
        ppuVar13[1] = (undefined *)puVar30;
        ppuVar13[2] = (undefined *)(ppuVar39 + uVar26 * 10);
        if (puVar14 != (undefined *)0x0) {
          __ZdlPv();
        }
      }
      ppuVar13[1] = (undefined *)puVar30;
      FUN_10959a998(&uStack_e8);
      pppppppuStack_108 = (undefined8 *******)&PTR_FUN_110b01d60;
      func_0x000107c2acd4(&pppppppuStack_108);
      ppuStack_180 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_180);
      if (*(int *)((long)pppppppuVar15 + 0x14) == 0) {
        if (cVar6 != '\0') {
          FUN_1096c2398(ppuVar13[1] + -0x50,param_3,*(long *)(param_1 + 2) + 0x20,iVar36);
        }
        iStack_18c = iStack_18c + 1;
      }
    }
    else {
      pppppppuStack_160 = pppppppuVar31;
      pppppppuStack_158 = pppppppuVar38;
      if ((uVar17 & 0xffffffff) != 0) {
        ppppppuVar24 = pppppppuVar15[1];
        fVar40 = *(float *)(ppppppuVar24 + 1);
        fVar41 = *(float *)((long)ppppppuVar24 + 0xc);
        fVar43 = 1.0 / (fVar41 * fVar41 + fVar40 * fVar40);
        fVar40 = fVar40 * fVar43;
        fVar44 = -(fVar41 * fVar43);
        fVar41 = *(float *)(ppppppuVar24 + 2);
        fVar43 = *(float *)((long)ppppppuVar24 + 0x14);
        piVar28 = piVar19 + (long)(int)uVar17 * 0x14;
        do {
          if (((piVar19[6] == 0) && (*piVar19 == iVar4)) &&
             ((lVar20 = *(long *)(*(long *)(piVar19 + 4) + 8),
              iVar7 < (int)((ulong)(*(long *)(*(long *)(piVar19 + 4) + 0x10) - lVar20) >> 4) &&
              (lVar20 = lVar20 + lVar18 * 0x10, *(long *)(lVar20 + 8) != 0)))) {
            ___dynamic_cast(lVar20,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
            if (lVar20 == 0) {
              func_0x000107c2acdc();
            }
            pppppppuStack_108 = *(undefined8 ********)(lVar20 + 8);
            if (pppppppuStack_108 != (undefined8 *******)0x0) {
              pppppppuVar31 = pppppppuStack_108 + -1;
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
                if (bVar12) {
                  *(int *)pppppppuVar31 = *(int *)pppppppuVar31 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            fVar45 = *(float *)(pppppppuStack_108 + 2);
            fVar46 = *(float *)((long)pppppppuStack_108 + 0x14);
            uStack_110 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&uStack_110);
            fVar42 = ABS((-(fVar40 * fVar43) - fVar41 * fVar44) + fVar44 * fVar45 + fVar40 * fVar46)
            ;
            bVar12 = false;
            if ((ABS((fVar43 * fVar44 - fVar41 * fVar40) + -(fVar46 * fVar44) + fVar40 * fVar45) <
                 0.75) && (bVar12 = false, !NAN(fVar42))) {
              bVar12 = fVar42 < 0.75;
            }
            if (bVar12) goto LAB_1096c307c;
          }
          piVar19 = piVar19 + 0x14;
        } while (piVar19 != piVar28);
        iVar22 = *(int *)((long)pppppppuVar15 + 0x14);
      }
      if (iVar22 != 0 || iStack_18c < iVar36) goto LAB_1096c2d8c;
    }
LAB_1096c307c:
    pppppppuVar31 = pppppppuStack_160;
    pppppppuStack_160 = pppppppuStack_158;
    pppppppuVar38 = pppppppuStack_158;
    pppppppuStack_158 = pppppppuVar32;
  }
  iVar36 = (int)((long)pppppppuStack_160 - (long)pppppppuVar31 >> 3) * -0x55555555;
  puVar16 = (undefined8 *)*ppuVar13;
  puVar34 = (undefined8 *)ppuVar13[1];
  puVar35 = puVar34;
  if (puVar16 == puVar34) {
LAB_1096c3138:
    pppppppuStack_160 = pppppppuVar31;
    pppppppuStack_158 = pppppppuVar38;
    if ((puVar16 != puVar34) && (puVar35 = puVar16, puVar16 + 10 != puVar34)) {
      lVar18 = (long)iVar36 * 2 + (long)iVar36;
      puVar35 = puVar16 + 10;
      puVar37 = puVar16;
      do {
        puVar25 = puVar35;
        if (*(int *)(puVar37 + 0xd) == 1) {
          pppppppuVar15 = pppppppuVar31;
          if (iVar36 == 0) {
LAB_1096c31b8:
            if (pppppppuVar15 != pppppppuVar31 + lVar18) goto LAB_1096c31c0;
          }
          else {
            lVar20 = lVar18 * 8;
            do {
              if ((*(int *)((long)pppppppuVar15 + 0x14) == 1) &&
                 (*(int *)(pppppppuVar15 + 2) == *(int *)(puVar37 + 0xe))) goto LAB_1096c31b8;
              pppppppuVar15 = pppppppuVar15 + 3;
              lVar20 = lVar20 + -0x18;
            } while (lVar20 != 0);
          }
        }
        else {
LAB_1096c31c0:
          *(undefined4 *)puVar16 = *(undefined4 *)puVar25;
          pppppppuStack_108 = (undefined8 *******)puVar37[0xc];
          uStack_110 = (undefined **)puVar37[0xb];
          uVar27 = puVar16[1];
          puVar37[0xc] = puVar16[2];
          puVar37[0xb] = uVar27;
          puVar16[2] = pppppppuStack_108;
          puVar16[1] = uStack_110;
          uVar27 = puVar37[0xd];
          *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(puVar37 + 0xe);
          puVar16[3] = uVar27;
          FUN_1096c3a6c(puVar16 + 5,puVar37 + 0xf);
          puVar16 = puVar16 + 10;
        }
        puVar35 = puVar25 + 10;
        puVar37 = puVar25;
      } while (puVar25 + 10 != puVar34);
      puVar34 = (undefined8 *)ppuVar13[1];
      puVar35 = puVar16;
    }
  }
  else {
    lVar18 = (long)iVar36 * 2 + (long)iVar36;
    do {
      if (*(int *)(puVar16 + 3) == 1) {
        pppppppuVar15 = pppppppuVar31;
        if (iVar36 != 0) {
          lVar20 = lVar18 * 8;
          while ((*(int *)((long)pppppppuVar15 + 0x14) != 1 ||
                 (*(int *)(pppppppuVar15 + 2) != *(int *)(puVar16 + 4)))) {
            pppppppuVar15 = pppppppuVar15 + 3;
            lVar20 = lVar20 + -0x18;
            if (lVar20 == 0) goto LAB_1096c3138;
          }
        }
        if (pppppppuVar15 == pppppppuVar31 + lVar18) goto LAB_1096c3138;
      }
      puVar16 = puVar16 + 10;
      pppppppuStack_160 = pppppppuVar31;
      pppppppuStack_158 = pppppppuVar38;
    } while (puVar16 != puVar34);
  }
  FUN_1096c38f0(ppuVar13,puVar35,puVar34);
  *(int *)(*(long *)(param_1 + 2) + 0x18) =
       (int)((ulong)((long)ppuVar13[1] - (long)*ppuVar13) >> 4) * -0x33333333;
  uStack_110 = (undefined **)&pppppppuStack_160;
  puVar16 = &uStack_110;
  func_0x000107c2ad04();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return (undefined8 *)0x1;
  }
  ___stack_chk_fail();
  if ((int)puVar35 == 0) {
    __Unwind_Resume(puVar16);
  }
  func_0x000104bd46a0();
  lVar18 = puVar16[1] + -0x20;
  func_0x0001096966c0(lVar18,*puVar35);
  if ((lVar18 == 0) || (puVar34 = *(undefined8 **)(lVar18 + 8), puVar34 == (undefined8 *)0x0)) {
    puVar35 = (undefined8 *)*puVar35;
    lVar18 = puVar16[1] + -0x20;
    puVar34 = puVar35;
    (**(code **)*puVar35)();
    FUN_109696718(lVar18,puVar35);
    *(undefined8 **)(lVar18 + 8) = puVar34;
    puVar34[2] = 0;
    puVar34[1] = 0;
    *puVar34 = puVar34 + 1;
  }
  return puVar34;
}



/* Entry: 1096c3368; end: 1096c33ef;  */

undefined8 * FUN_1096c3368(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 == 0) || (puVar2 = *(undefined8 **)(lVar1 + 8), puVar2 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar1 = *(long *)(param_1 + 8) + -0x20;
    puVar2 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar1,param_2);
    *(undefined8 **)(lVar1 + 8) = puVar2;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = puVar2 + 1;
  }
  return puVar2;
}



/* Entry: 1096c33f0; end: 1096c33fb;  */

undefined4 FUN_1096c33f0(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x1c);
}



/* Entry: 1096c33fc; end: 1096c3447;  */

void FUN_1096c33fc(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  
  FUN_1096c3454(param_2,0x11382aa98);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  lVar5 = ((long)puVar2 - (long)puVar1 >> 3) * -0x5555555555555555;
  if (lVar5 != 0) {
    func_0x000107c2ad0c(param_1,lVar5);
    puVar6 = (undefined8 *)param_1[1];
    for (; puVar1 != puVar2; puVar1 = puVar1 + 3) {
      *puVar6 = &PTR_FUN_110b01d60;
      uVar8 = *puVar1;
      puVar6[1] = puVar1[1];
      *puVar6 = uVar8;
      if (puVar6[1] != 0) {
        piVar7 = (int *)(puVar6[1] + -8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = *piVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *puVar6 = &PTR_FUN_110b051b8;
      puVar6[2] = puVar1[2];
      puVar6 = puVar6 + 3;
    }
    param_1[1] = puVar6;
  }
  return;
}



/* Entry: 1096c3448; end: 1096c3453;  */

void FUN_1096c3448(long param_1,undefined4 param_2)

{
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x1c) = param_2;
  return;
}



/* Entry: 1096c3454; end: 1096c34a3;  */

void FUN_1096c3454(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096c34a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096c34a4; end: 1096c35c3;  */

void FUN_1096c34a4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_58;
  
  FUN_1096c4080(&lStack_70,
                (*(long *)(*(long *)(param_2 + 8) + 0x10) - *(long *)(*(long *)(param_2 + 8) + 8)) *
                0x10000000 >> 0x20);
  if (lStack_68 != lStack_70) {
    uVar7 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(*(long *)(param_2 + 8) + 8) + uVar7 * 0x10);
      puVar6 = (undefined8 *)(lStack_70 + uVar7 * 0x18);
      if (puVar6[1] != puVar1[1]) {
        func_0x000107c2acd4(puVar6);
        uVar8 = *puVar1;
        puVar6[1] = puVar1[1];
        *puVar6 = uVar8;
        if (puVar6[1] != 0) {
          piVar4 = (int *)(puVar6[1] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar3) {
              *piVar4 = *piVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      uVar7 = uVar7 + 1;
      uVar5 = (lStack_68 - lStack_70 >> 3) * -0x5555555555555555;
    } while (uVar7 <= uVar5 && uVar5 - uVar7 != 0);
  }
  FUN_1096c35c4(param_1,0x11382aa98,&lStack_70);
  puStack_58 = (undefined1 *)&lStack_70;
  func_0x000107c2ad04(&puStack_58);
  return;
}



/* Entry: 1096c35c4; end: 1096c377b;  */

undefined1  [16] FUN_1096c35c4(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar8 = *param_2;
  lVar5 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar5,uVar8);
  if ((lVar5 == 0) || (auVar21._0_8_ = *(long **)(lVar5 + 8), auVar21._0_8_ == (long *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar5 = *(long *)(param_1 + 8) + -0x20;
    puVar6 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar5,param_2);
    *(undefined8 **)(lVar5 + 8) = puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar10 = (undefined8 *)*param_3;
    puVar12 = (undefined8 *)param_3[1];
    puVar11 = (undefined8 *)(((long)puVar12 - (long)puVar10 >> 3) * -0x5555555555555555);
    puVar4 = puVar6;
    if (puVar11 != (undefined8 *)0x0) {
      func_0x000107c2ad0c(puVar6,puVar11);
      puVar13 = (undefined8 *)puVar6[1];
      for (; puVar10 != puVar12; puVar10 = puVar10 + 3) {
        *puVar13 = &PTR_FUN_110b01d60;
        uVar8 = *puVar10;
        puVar13[1] = puVar10[1];
        *puVar13 = uVar8;
        if (puVar13[1] != 0) {
          piVar17 = (int *)(puVar13[1] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar3) {
              *piVar17 = *piVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *puVar13 = &PTR_FUN_110b051b8;
        puVar13[2] = puVar10[2];
        puVar13 = puVar13 + 3;
      }
      puVar6[1] = puVar13;
      puVar10 = puVar11;
    }
    auVar20._8_8_ = puVar10;
    auVar20._0_8_ = puVar4;
    return auVar20;
  }
  if (auVar21._0_8_ == param_3) {
    auVar21._8_8_ = uVar8;
    return auVar21;
  }
  plVar9 = (long *)*param_3;
  plVar19 = (long *)param_3[1];
  lVar5 = (long)plVar19 - (long)plVar9 >> 3;
  puVar10 = (undefined8 *)(lVar5 * -0x5555555555555555);
  plVar18 = (long *)*auVar21._0_8_;
  plVar7 = auVar21._0_8_;
  if ((undefined8 *)((auVar21._0_8_[2] - (long)plVar18 >> 3) * -0x5555555555555555) < puVar10) {
    plVar18 = auVar21._0_8_;
    plVar15 = plVar9;
    puVar12 = puVar10;
    FUN_1096c3b60();
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar10) {
      FUN_1096c3bd8();
      func_0x000104bd46a0();
      plVar9 = plVar18 + 1;
      plVar19 = plVar9;
      if ((long *)*plVar9 != (long *)0x0) {
        plVar7 = (long *)*plVar9;
        do {
          while (plVar9 = plVar7, *(int *)((long)plVar9 + 0x1c) <= *(int *)plVar15) {
            if (*(int *)plVar15 <= *(int *)((long)plVar9 + 0x1c)) {
              uVar8 = 0;
              goto LAB_1096c4e80;
            }
            plVar7 = (long *)plVar9[1];
            if ((long *)plVar9[1] == (long *)0x0) {
              plVar19 = plVar9 + 1;
              goto LAB_1096c4e38;
            }
          }
          plVar7 = (long *)*plVar9;
          plVar19 = plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
LAB_1096c4e38:
      plVar7 = (long *)0x30;
      __Znwm();
      *(undefined4 *)((long)plVar7 + 0x1c) = *(undefined4 *)*puVar12;
      plVar7[5] = 0;
      plVar7[4] = 0x3f800000;
      FUN_1096c4518(plVar18,plVar9,plVar19,plVar7);
      uVar8 = 1;
      plVar9 = plVar7;
LAB_1096c4e80:
      auVar23._8_8_ = uVar8;
      auVar23._0_8_ = plVar9;
      return auVar23;
    }
    lVar14 = auVar21._0_8_[2] - *auVar21._0_8_ >> 3;
    plVar16 = (long *)(lVar14 * 0x5555555555555556);
    if (plVar16 < puVar10 || (long)plVar16 + lVar5 * 0x5555555555555555 == 0) {
      plVar16 = puVar10;
    }
    if (0x555555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
      plVar16 = (undefined8 *)0xaaaaaaaaaaaaaaa;
    }
    FUN_1096c4038(auVar21._0_8_,plVar16);
    plVar15 = (long *)auVar21._0_8_[1];
    for (; plVar9 != plVar19; plVar9 = plVar9 + 3) {
      *plVar15 = (long)&PTR_FUN_110b01d60;
      lVar5 = *plVar9;
      plVar15[1] = plVar9[1];
      *plVar15 = lVar5;
      if (plVar15[1] != 0) {
        piVar17 = (int *)(plVar15[1] + -8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar3) {
            *piVar17 = *piVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *plVar15 = (long)&PTR_FUN_110b051b8;
      plVar15[2] = plVar9[2];
      plVar15 = plVar15 + 3;
    }
  }
  else {
    plVar15 = (long *)auVar21._0_8_[1];
    plVar16 = plVar9;
    if (puVar10 <= (undefined8 *)(((long)plVar15 - (long)plVar18 >> 3) * -0x5555555555555555)) {
      if (plVar9 != plVar19) {
        do {
          if (plVar18[1] != plVar16[1]) {
            plVar7 = plVar18;
            func_0x000107c2acd4(plVar18);
            lVar5 = *plVar16;
            plVar18[1] = plVar16[1];
            *plVar18 = lVar5;
            if (plVar18[1] != 0) {
              piVar17 = (int *)(plVar18[1] + -8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar3) {
                  *piVar17 = *piVar17 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          plVar18[2] = plVar16[2];
          plVar16 = plVar16 + 3;
          plVar18 = plVar18 + 3;
        } while (plVar16 != plVar19);
        plVar15 = (long *)auVar21._0_8_[1];
        plVar16 = plVar9;
      }
      while (plVar15 != plVar18) {
        plVar15 = plVar15 + -3;
        *plVar15 = (long)&PTR_FUN_110b01d60;
        plVar7 = plVar15;
        func_0x000107c2acd4(plVar15);
      }
      auVar21._0_8_[1] = (long)plVar18;
      goto LAB_1096c4db4;
    }
    plVar1 = (long *)((long)plVar9 + ((long)plVar15 - (long)plVar18));
    if (plVar15 != plVar18) {
      do {
        if (plVar18[1] != plVar16[1]) {
          plVar7 = plVar18;
          func_0x000107c2acd4(plVar18);
          lVar5 = *plVar16;
          plVar18[1] = plVar16[1];
          *plVar18 = lVar5;
          if (plVar18[1] != 0) {
            piVar17 = (int *)(plVar18[1] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar3) {
                *piVar17 = *piVar17 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        plVar18[2] = plVar16[2];
        plVar16 = plVar16 + 3;
        plVar18 = plVar18 + 3;
      } while (plVar16 != plVar1);
      plVar15 = (long *)auVar21._0_8_[1];
      plVar16 = plVar9;
    }
    for (; plVar1 != plVar19; plVar1 = plVar1 + 3) {
      *plVar15 = (long)&PTR_FUN_110b01d60;
      lVar5 = *plVar1;
      plVar15[1] = plVar1[1];
      *plVar15 = lVar5;
      if (plVar15[1] != 0) {
        piVar17 = (int *)(plVar15[1] + -8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar3) {
            *piVar17 = *piVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *plVar15 = (long)&PTR_FUN_110b051b8;
      plVar15[2] = plVar1[2];
      plVar15 = plVar15 + 3;
    }
  }
  auVar21._0_8_[1] = (long)plVar15;
LAB_1096c4db4:
  auVar22._8_8_ = plVar16;
  auVar22._0_8_ = plVar7;
  return auVar22;
}



/* Entry: 1096c377c; end: 1096c3887;  */

void FUN_1096c377c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuStack_50;
  long lStack_48;
  undefined1 uStack_39;
  int *piStack_38;
  
  piVar4 = (int *)(param_2 + 0x20);
  if (*piVar4 != -1) {
    FUN_1096c3368(param_1,0x11382aa90);
    lVar6 = *(long *)(*(long *)(param_2 + 0x10) + 8);
    if ((int)((ulong)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) - lVar6) >> 4) < 1) {
      func_0x000107c2acdc();
    }
    ___dynamic_cast();
    if (lVar6 == 0) {
      func_0x000107c2acdc();
    }
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 != 0) {
      piVar3 = (int *)(lVar6 + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_50 = &PTR_FUN_110b051b8;
    lStack_48 = lVar6;
    piStack_38 = piVar4;
    FUN_1096c4dd0(param_1,piVar4,&UNK_10dd5b8f9,&piStack_38,&uStack_39);
    uVar5 = *(undefined8 *)(lVar6 + 8);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar6 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    ppuStack_50 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_50);
  }
  return;
}



/* Entry: 1096c3888; end: 1096c38bb;  */

undefined8 * FUN_1096c3888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096c38bc; end: 1096c38ef;  */

void FUN_1096c38bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096c38f0; end: 1096c3943;  */

long FUN_1096c38f0(long param_1,long param_2,long param_3)

{
  undefined1 uStack_21;
  
  if (param_3 != param_2) {
    FUN_1096c39b0(&uStack_21,param_3,*(undefined8 *)(param_1 + 8),param_2);
    FUN_1096c3944(param_1);
  }
  return param_2;
}



/* Entry: 1096c3944; end: 1096c39af;  */

void FUN_1096c3944(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 8) != param_2) {
    puVar2 = *(undefined8 **)(param_1 + 8) + -9;
    do {
      FUN_10959a998(puVar2 + 4);
      *puVar2 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(puVar2);
      puVar1 = puVar2 + -1;
      puVar2 = puVar2 + -10;
    } while (puVar1 != param_2);
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1096c39b0; end: 1096c3a6b;  */

undefined1  [16] FUN_1096c39b0(long *param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_2;
  plVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 10) {
    *param_4 = (int)*param_2;
    lVar7 = param_2[2];
    lVar5 = param_2[1];
    lVar9 = *(long *)(param_4 + 2);
    param_2[2] = *(long *)(param_4 + 4);
    param_2[1] = lVar9;
    *(long *)(param_4 + 4) = lVar7;
    *(long *)(param_4 + 2) = lVar5;
    lVar5 = param_2[3];
    param_4[8] = (int)param_2[4];
    *(long *)(param_4 + 6) = lVar5;
    param_1 = (long *)(param_4 + 10);
    plVar2 = param_2 + 5;
    FUN_1096c3a6c();
    param_4 = param_4 + 0x14;
    plVar3 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    auVar10._8_8_ = param_4;
    auVar10._0_8_ = plVar3;
    return auVar10;
  }
  ___stack_chk_fail();
  plVar3 = plVar2;
  func_0x0001096c3b0c();
  lVar5 = *plVar2;
  *plVar2 = 0;
  lVar4 = *param_1;
  *param_1 = lVar5;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  lVar5 = plVar2[2];
  lVar7 = plVar2[1];
  param_1[2] = lVar5;
  param_1[1] = lVar7;
  plVar2[1] = 0;
  lVar7 = plVar2[3];
  param_1[3] = lVar7;
  *(int *)(param_1 + 4) = (int)plVar2[4];
  if (lVar7 != 0) {
    uVar6 = *(ulong *)(lVar5 + 8);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar6 = uVar8 - 1 & uVar6;
    }
    else if (uVar8 <= uVar6) {
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar6 / uVar8;
      }
      uVar6 = uVar6 - uVar1 * uVar8;
    }
    *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
    plVar2[2] = 0;
    plVar2[3] = 0;
  }
  auVar11._8_8_ = plVar3;
  auVar11._0_8_ = lVar4;
  return auVar11;
}



/* Entry: 1096c3a6c; end: 1096c3b5f;  */

void FUN_1096c3a6c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x0001096c3b0c();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1096c3b60; end: 1096c3bd7;  */

void FUN_1096c3b60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -3;
        *puVar2 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar3;
    __ZdlPv(puVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1096c3bd8; end: 1096c3beb;  */

undefined1  [16] FUN_1096c3bd8(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f57d1ac;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    *(undefined8 *)(lVar3 + -0x18) = &PTR_FUN_110b01d60;
    plVar1[2] = lVar3 + -0x18;
    func_0x000107c2acd4();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 1096c3bec; end: 1096c3c2f;  */

undefined1  [16] FUN_1096c3bec(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    *(undefined8 *)(lVar2 + -0x18) = &PTR_FUN_110b01d60;
    param_1[2] = lVar2 + -0x18;
    func_0x000107c2acd4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1096c3c30; end: 1096c3c93;  */

long * FUN_1096c3c30(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    *(undefined8 *)(lVar2 + -0x18) = &PTR_FUN_110b01d60;
    param_1[2] = lVar2 + -0x18;
    func_0x000107c2acd4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096c3c94; end: 1096c3cff;  */

void FUN_1096c3c94(long *param_1,long *param_2)

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



/* Entry: 1096c3d00; end: 1096c3d13;  */

undefined1  [16] FUN_1096c3d00(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &UNK_10f57d1ac;
  func_0x000104c4f6cc();
  if (param_2 < 0x333333333333334) {
    lVar2 = param_2 * 0x50;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  if ((puVar1[0x18] & 1) == 0) {
    FUN_1096c3d8c(puVar1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 1096c3d14; end: 1096c3d57;  */

undefined1  [16] FUN_1096c3d14(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0x333333333333334) {
    lVar1 = param_2 * 0x50;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1096c3d8c(param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1096c3d58; end: 1096c3d8b;  */

long FUN_1096c3d58(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1096c3d8c(param_1);
  }
  return param_1;
}



/* Entry: 1096c3d8c; end: 1096c3df3;  */

void FUN_1096c3d8c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  if ((undefined8 *)**(undefined8 **)(param_1 + 0x10) != puVar3) {
    puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x10) + -9;
    do {
      FUN_10959a998(puVar2 + 4);
      *puVar2 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(puVar2);
      puVar1 = puVar2 + -1;
      puVar2 = puVar2 + -10;
    } while (puVar1 != puVar3);
  }
  return;
}



/* Entry: 1096c3df4; end: 1096c3e07;  */

undefined8 FUN_1096c3df4(void)

{
  return 0;
}



/* Entry: 1096c3e08; end: 1096c3e3f;  */

void FUN_1096c3e08(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int *piVar8;
  code *pcVar9;
  undefined8 unaff_x20;
  undefined8 ***pppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  long lStack_68;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  pcVar9 = *(code **)(param_3 + 0x18);
  plVar6 = (long *)(param_4 + ((long)*(ulong *)(param_3 + 0x20) >> 1));
  if ((*(ulong *)(param_3 + 0x20) & 1) != 0) {
    pcVar9 = *(code **)(*plVar6 + ((ulong)pcVar9 & 0xffffffff));
  }
  (*pcVar9)();
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_40 = plVar6;
  _sprintf(auStack_38,&UNK_10f57c051);
  puVar4 = auStack_38;
  _strlen(puVar4);
  FUN_109697928(param_1,auStack_38,puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_48 = 0x1096964e8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = param_2;
  uStack_58 = param_1;
  puStack_50 = (undefined8 *)&stack0xfffffffffffffff0;
  _sprintf(auStack_88,&UNK_10f57c054);
  puVar4 = auStack_88;
  _strlen(puVar4);
  puVar7 = auStack_88;
  plVar6 = extraout_x8;
  FUN_109697928(extraout_x8,puVar7,puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_b0;
  uStack_98 = 0x109696564;
  pppuVar10 = &ppuStack_a0;
  plVar5 = plVar6;
  uStack_b0 = unaff_x20;
  plStack_a8 = extraout_x8;
  ppuStack_a0 = &puStack_50;
  func_0x000107c2accc();
  if (plVar6 == (long *)0x0) {
    uVar11 = 0x10969659c;
    ___cxa_bad_typeid();
    uStack_b0 = 0;
    plVar6 = extraout_x8_01;
    plStack_a8 = extraout_x8_00;
  }
  else {
    puVar7 = *(undefined1 **)(*plVar6 + -8);
    puVar3 = &uStack_90;
    plVar6 = extraout_x8_00;
    pppuVar10 = (undefined8 ***)ppuStack_a0;
    uVar11 = uStack_98;
  }
  *(undefined8 *)((long)puVar3 + -0x20) = uStack_b0;
  *(long **)((long)puVar3 + -0x18) = plStack_a8;
  *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar10;
  *(undefined8 *)((long)puVar3 + -8) = uVar11;
  *(undefined1 **)((long)puVar3 + -0x28) = puVar7;
  plVar5 = plVar5 + 5;
  FUN_109698fb4(plVar5,(undefined1 *)((long)puVar3 + -0x28));
  if (plVar5 == (long *)0x0) {
    FUN_1096978cc();
    plVar5 = (long *)0x11382a968;
  }
  else {
    plVar5 = plVar5 + 3;
  }
  lVar12 = *plVar5;
  plVar6[1] = plVar5[1];
  *plVar6 = lVar12;
  if (plVar6[1] != 0) {
    piVar8 = (int *)(plVar6[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *plVar6 = (long)&PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096c3e40; end: 1096c3e47;  */

undefined8 FUN_1096c3e40(void)

{
  return 0;
}



/* Entry: 1096c3e48; end: 1096c3ecf;  */

bool FUN_1096c3e48(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 uStack_34;
  
  plVar2 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  _sscanf(plVar2,&UNK_10f57c051);
  if ((int)plVar2 == 1) {
    pcVar3 = *(code **)(param_1 + 0x28);
    plVar1 = (long *)(param_3 + ((long)*(ulong *)(param_1 + 0x30) >> 1));
    if ((*(ulong *)(param_1 + 0x30) & 1) != 0) {
      pcVar3 = *(code **)(*plVar1 + ((ulong)pcVar3 & 0xffffffff));
    }
    (*pcVar3)(plVar1,uStack_34);
  }
  return (int)plVar2 == 1;
}



/* Entry: 1096c3ed0; end: 1096c3f0f;  */

undefined8 FUN_1096c3ed0(void)

{
  return 0;
}



/* Entry: 1096c3f10; end: 1096c3f47;  */

void FUN_1096c3f10(long param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1 + 0x18);
  plVar1 = (long *)(param_2 + ((long)*(ulong *)(param_1 + 0x20) >> 1));
  if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  (*pcVar2)();
  *param_3 = (int)plVar1;
  return;
}



/* Entry: 1096c3f48; end: 1096c3f63;  */

void FUN_1096c3f48(long param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x28);
  plVar1 = (long *)(param_2 + ((long)*(ulong *)(param_1 + 0x30) >> 1));
  if ((*(ulong *)(param_1 + 0x30) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001096c3f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_3);
  return;
}



/* Entry: 1096c3f64; end: 1096c3fbb;  */

void FUN_1096c3f64(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b06228;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096c3fbc; end: 1096c4007;  */

void FUN_1096c3fbc(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096c21d8(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096c4008; end: 1096c4037;  */

bool FUN_1096c4008(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b06228,0);
  return param_1 != 0;
}



/* Entry: 1096c4038; end: 1096c407f;  */

undefined8 * FUN_1096c4038(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    puVar1 = param_1;
    FUN_1096c3bec();
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = puVar1 + param_2 * 3;
    return puVar1;
  }
  FUN_1096c3bd8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1096c4038(param_1);
    FUN_1096c40e8(param_1,param_2);
  }
  return param_1;
}



/* Entry: 1096c4080; end: 1096c40e7;  */

undefined8 * FUN_1096c4080(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1096c4038(param_1);
    FUN_1096c40e8(param_1,param_2);
  }
  return param_1;
}


