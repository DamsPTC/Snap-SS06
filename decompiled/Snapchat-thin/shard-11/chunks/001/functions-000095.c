/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10817df08; end: 10817df83;  */

int * FUN_10817df08(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int extraout_w9;
  int extraout_w9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  int extraout_w11;
  int iVar6;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  int *unaff_x19;
  undefined2 *unaff_x20;
  
  func_0x00010817e0a8();
  piVar4 = param_1;
  func_0x00010817e08c();
  iVar1 = extraout_w9;
  uVar2 = extraout_w10;
  iVar3 = extraout_w12;
  iVar6 = extraout_w11;
  while( true ) {
    if (iVar6 == 0) {
      return param_1;
    }
    param_1 = (int *)(*(long *)(unaff_x19 + 2) + (long)iVar1 * (long)iVar3);
    if (*param_1 == 0) break;
    if (((int)piVar4 == *param_1) && (uVar2 == *(ushort *)(param_1 + 2))) {
      FUN_10815b628();
      *(undefined2 *)(param_1 + 2) = *unaff_x20;
      uVar5 = *(undefined8 *)(unaff_x20 + 4);
      *(undefined8 *)(unaff_x20 + 4) = 0;
      *(undefined8 *)(param_1 + 4) = uVar5;
      *param_1 = (int)piVar4;
      return param_1;
    }
    func_0x00010817e0e0();
    iVar1 = extraout_w9_00;
    uVar2 = extraout_w10_00;
    iVar3 = extraout_w12_00;
    iVar6 = extraout_w11_00;
  }
  FUN_10817dfa0();
  *unaff_x19 = *unaff_x19 + 1;
  return param_1;
}



/* Entry: 10817df84; end: 10817df9f;  */

uint FUN_10817df84(uint param_1)

{
  FUN_10817dfec();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 10817dfa0; end: 10817dfeb;  */

undefined4 * FUN_10817dfa0(undefined4 *param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_10815b628();
  *(undefined2 *)(param_1 + 2) = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *param_1 = param_3;
  return param_1;
}



/* Entry: 10817dfec; end: 10817e02f;  */

void FUN_10817dfec(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x00010817e010(&uStack_11,param_1);
  return;
}



/* Entry: 10817e030; end: 10817e08b;  */

int * FUN_10817e030(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_w9;
  int extraout_w9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  int extraout_w11;
  int iVar4;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  int *piVar5;
  long unaff_x19;
  
  func_0x00010817e0a8();
  func_0x00010817e08c();
  iVar1 = extraout_w9;
  uVar2 = extraout_w10;
  iVar3 = extraout_w12;
  iVar4 = extraout_w11;
  while( true ) {
    if (iVar4 == 0) {
      return (int *)0x0;
    }
    piVar5 = (int *)(*(long *)(unaff_x19 + 8) + (long)iVar1 * (long)iVar3);
    if (*piVar5 == 0) break;
    if (((int)param_1 == *piVar5) && (uVar2 == *(ushort *)(piVar5 + 2))) {
      return piVar5 + 2;
    }
    func_0x00010817e0e0();
    iVar1 = extraout_w9_00;
    uVar2 = extraout_w10_00;
    iVar3 = extraout_w12_00;
    iVar4 = extraout_w11_00;
  }
  return (int *)0x0;
}



/* Entry: 10817e08c; end: 10817e127;  */

void FUN_10817e08c(void)

{
  return;
}



/* Entry: 10817e128; end: 10817e413;  */

void FUN_10817e128(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  
  if (param_2 == 0) {
LAB_10817e18c:
    *param_1 = 0;
    return;
  }
  FUN_108154b58(param_2,"t");
  iVar2 = (int)param_2;
  func_0x00010817e814();
  if (iVar2 != 0) {
    FUN_108159fb8(param_3,0,0,&UNK_10f47d98f);
    goto LAB_10817e18c;
  }
  puVar3 = (undefined4 *)0x24;
  __Znwm();
  puVar4 = puVar3;
  func_0x00010817e80c();
  func_0x00010817e81c();
  func_0x00010817e814();
  uVar1 = (uint)puVar4;
  if ((int)uVar1 < 1) {
    if (uVar1 != 0) goto LAB_10817e1f0;
LAB_10817e1fc:
    cVar8 = '\0';
  }
  else {
    if (2 < uVar1) {
LAB_10817e1f0:
      func_0x00010817e7e4(&DAT_10f39097e);
      goto LAB_10817e1fc;
    }
    cVar8 = (&UNK_10df06b20)[uVar1 - 1];
  }
  func_0x00010817e80c();
  func_0x00010817e81c();
  func_0x00010817e814();
  uVar1 = (uint)puVar4;
  if ((int)uVar1 < 1) {
    if (uVar1 != 0) goto LAB_10817e238;
LAB_10817e244:
    uVar7 = 0;
  }
  else {
    if (4 < uVar1) {
LAB_10817e238:
      func_0x00010817e7e4("domain");
      goto LAB_10817e244;
    }
    uVar7 = (&UNK_10df06b22)[uVar1 - 1];
  }
  func_0x00010817e80c();
  func_0x00010817e81c();
  func_0x00010817e814();
  iVar2 = (int)puVar4;
  if (iVar2 < 1) {
    if (iVar2 != 0) goto LAB_10817e270;
  }
  else if (iVar2 != 1) {
LAB_10817e270:
    func_0x00010817e7e4("mode");
  }
  func_0x00010817e80c();
  func_0x00010817e81c();
  func_0x00010817e814();
  uVar1 = (uint)puVar4;
  if ((int)uVar1 < 1) {
    if (uVar1 != 0) goto LAB_10817e2b4;
LAB_10817e2c0:
    uVar5 = 0;
  }
  else {
    if (6 < uVar1) {
LAB_10817e2b4:
      func_0x00010817e7e4(&DAT_10f2dd06f);
      goto LAB_10817e2c0;
    }
    uVar5 = (&UNK_10df06b26)[uVar1 - 1];
  }
  *puVar3 = 1;
  *(char *)(puVar3 + 1) = cVar8;
  *(undefined1 *)((long)puVar3 + 5) = uVar7;
  *(undefined1 *)((long)puVar3 + 6) = 0;
  *(undefined1 *)((long)puVar3 + 7) = uVar5;
  *(undefined8 *)(puVar3 + 7) = 0x42c8000000000000;
  *(undefined8 *)(puVar3 + 5) = 0x42c80000;
  if (cVar8 == '\0') {
    uVar6 = 0x42c80000;
  }
  else {
    if (cVar8 != '\x01') goto LAB_10817e314;
    uVar6 = 0x7f7fffff;
  }
  puVar3[2] = 0;
  puVar3[3] = uVar6;
  puVar3[4] = 0;
LAB_10817e314:
  *param_1 = puVar3;
  func_0x00010817e80c();
  FUN_108154e4c();
  func_0x00010817e800();
  func_0x00010817e80c();
  FUN_108154e4c();
  func_0x00010817e800();
  func_0x00010817e80c();
  FUN_108154e4c();
  func_0x00010817e800();
  func_0x00010817e80c();
  FUN_108154e4c();
  FUN_108161330(param_4,param_3,puVar4,puVar3 + 5);
  func_0x00010817e80c();
  FUN_108154e4c();
  func_0x00010817e800();
  func_0x00010817e80c();
  FUN_108154e4c();
  func_0x00010817e800();
  if (*(char *)((long)puVar3 + 7) != '\0') {
    return;
  }
  func_0x00010817e80c();
  FUN_108154e4c();
  func_0x00010817e800();
  return;
}



/* Entry: 10817e414; end: 10817e447;  */

float FUN_10817e414(float param_1,undefined8 param_2,float param_3,ulong param_4)

{
  return ((param_1 + param_3) * (float)param_4) / 100.0;
}



/* Entry: 10817e448; end: 10817e6c7;  */

void FUN_10817e448(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_fc [28];
  undefined1 auStack_e0 [28];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  long *plStack_b8;
  code *pcStack_b0;
  ulong uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  ulong uStack_88;
  
  cVar2 = *(char *)(param_1 + 5);
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_88 = (param_3[1] - *param_3) / 0x4c;
  pcStack_b0 = FUN_10817e6c8;
  uStack_a8 = 0;
  pcStack_a0 = (code *)0x0;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x03') {
      param_2 = param_2 + 6;
    }
    else {
      if (cVar2 != '\x02') goto LAB_10817e4e8;
      param_2 = param_2 + 3;
    }
  }
  pcStack_a0 = FUN_10817e6c8;
  pcStack_b0 = FUN_10817e71c;
  uStack_88 = (param_2[1] - *param_2) / 0x18;
  plStack_90 = param_2;
LAB_10817e4e8:
  uVar6 = uStack_88;
  if (uStack_88 != 0) {
    fVar12 = *(float *)(param_1 + 0x14) / 100.0;
    fVar11 = 1.0;
    fVar13 = 1.0;
    if (fVar12 <= 1.0) {
      fVar13 = fVar12;
    }
    fVar14 = *(float *)(param_1 + 0x18) / 100.0;
    fVar12 = 1.0;
    if (fVar14 <= 1.0) {
      fVar12 = fVar14;
    }
    if (fVar12 <= -1.0) {
      fVar12 = -1.0;
    }
    fVar8 = *(float *)(param_1 + 0x1c) / 100.0;
    fVar14 = fVar11;
    if (fVar8 <= 1.0) {
      fVar14 = fVar8;
    }
    if (fVar14 <= -1.0) {
      fVar14 = -1.0;
    }
    pcVar5 = FUN_10817e414;
    if (*(char *)(param_1 + 4) != '\0') {
      pcVar5 = (code *)0x10817e43c;
    }
    fVar9 = *(float *)(param_1 + 8);
    fVar8 = *(float *)(param_1 + 0xc);
    plStack_b8 = param_3;
    (*pcVar5)(fVar9,fVar8,*(undefined4 *)(param_1 + 0x10),uStack_88);
    fVar16 = fVar9;
    if (fVar9 <= fVar8) {
      fVar16 = fVar8;
      fVar8 = fVar9;
    }
    fVar9 = 1.1920929e-07;
    if (1.1920929e-07 <= fVar16 - fVar8) {
      fVar9 = fVar16 - fVar8;
    }
    bVar3 = *(byte *)(param_1 + 7);
    lVar4 = (ulong)bVar3 * 0x1c;
    FUN_108346264(*(undefined4 *)(&UNK_10df06b2c + lVar4),*(undefined4 *)(&UNK_10df06b30 + lVar4),
                  *(undefined4 *)(&UNK_10df06b34 + lVar4),0x3f800000,auStack_fc);
    fVar16 = -fVar12;
    fVar10 = 0.0;
    if (0.0 <= fVar12) {
      fVar16 = 0.0;
      fVar10 = fVar12;
    }
    fVar12 = fVar11;
    if (0.0 <= fVar14) {
      fVar12 = 1.0 - fVar14;
    }
    fVar15 = fVar14 + 1.0;
    if (0.0 <= fVar14) {
      fVar15 = 1.0;
    }
    FUN_108346264(fVar10,fVar16,fVar12,fVar15,auStack_e0);
    fVar12 = *(float *)(&UNK_10df06b3c + lVar4);
    fVar14 = *(float *)(&UNK_10df06b40 + lVar4);
    fVar16 = *(float *)(&UNK_10df06b44 + lVar4);
    if ((ulong)bVar3 == 0) {
      fVar10 = *(float *)(param_1 + 0x20) / 100.0;
      if (fVar10 <= 1.0) {
        fVar11 = fVar10;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar8 = fVar8 + fVar11 * -0.5;
      fVar9 = fVar9 + fVar11;
      fVar16 = fVar16 + fVar11 / fVar9;
    }
    uVar7 = 0;
    if (fVar13 <= -1.0) {
      fVar13 = -1.0;
    }
    fVar11 = (0.5 - fVar8) / fVar9;
    fStack_c4 = fVar12;
    fStack_c0 = fVar14;
    fStack_bc = fVar16;
    for (; uVar7 < uVar6; uVar7 = uVar7 + 1) {
      fVar10 = fVar11 - fVar12;
      fVar8 = fVar14 - fVar11;
      if (fVar10 <= fVar8) {
        fVar8 = fVar10;
      }
      fVar8 = fVar8 / fVar16;
      FUN_108346164(fVar8,auStack_fc);
      FUN_108346164(auStack_e0);
      plVar1 = (long *)((long)&plStack_b8 + ((long)uStack_a8 >> 1));
      pcVar5 = pcStack_b0;
      if ((uStack_a8 & 1) != 0) {
        pcVar5 = *(code **)(*plVar1 + ((ulong)pcStack_b0 & 0xffffffff));
      }
      (*pcVar5)(fVar13 * fVar8,plVar1,uVar7,1);
      fVar11 = 1.0 / fVar9 + fVar11;
      uVar6 = uStack_88;
    }
  }
  return;
}



/* Entry: 10817e6c8; end: 10817e71b;  */

void FUN_10817e6c8(float param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 != 0.0 && param_4 != 0) {
    uVar1 = *(long *)*param_2 + param_3 * 0x4c;
    uVar2 = uVar1 + param_4 * 0x4c;
    for (; uVar1 < uVar2; uVar1 = uVar1 + 0x4c) {
      fVar3 = param_1 + *(float *)(uVar1 + 0x48);
      fVar4 = 1.0;
      if (fVar3 <= 1.0) {
        fVar4 = fVar3;
      }
      if (fVar4 <= -1.0) {
        fVar4 = -1.0;
      }
      *(float *)(uVar1 + 0x48) = fVar4;
    }
  }
  return;
}



/* Entry: 10817e71c; end: 10817e79b;  */

void FUN_10817e71c(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  
  uVar1 = param_4 + param_3;
  lVar5 = param_3 * 0x18;
  for (; param_3 < uVar1; param_3 = param_3 + 1) {
    pcVar4 = *(code **)(param_2 + 0x18);
    plVar2 = (long *)(param_2 + ((long)*(ulong *)(param_2 + 0x20) >> 1));
    if ((*(ulong *)(param_2 + 0x20) & 1) != 0) {
      pcVar4 = *(code **)(*plVar2 + ((ulong)pcVar4 & 0xffffffff));
    }
    puVar3 = (undefined8 *)(**(long **)(param_2 + 0x28) + lVar5);
    (*pcVar4)(param_1,plVar2,*puVar3,puVar3[1]);
    lVar5 = lVar5 + 0x18;
  }
  return;
}



/* Entry: 10817e79c; end: 10817e7c7;  */

long * FUN_10817e79c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10817e7c8();
  }
  return param_1;
}



/* Entry: 10817e7c8; end: 10817e827;  */

void FUN_10817e7c8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10817e828; end: 10817ef27;  */

void FUN_10817e828(long *param_1,ulong *param_2,long param_3,undefined8 *param_4,undefined8 *param_5
                  ,undefined8 *param_6,undefined8 *param_7)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  undefined *puVar14;
  ulong *puVar15;
  undefined8 ****ppppuVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 ***pppuStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 ***pppuStack_70;
  ulong *puStack_68;
  ulong *puVar9;
  
  puVar15 = param_2;
  FUN_108154b58(param_2,"t");
  FUN_108154e4c();
  if (puVar15 == (ulong *)0x0) {
LAB_10817e8f0:
    FUN_108159fb8(param_3,1,param_2,&UNK_10f47d9e5);
    *param_1 = 0;
    return;
  }
  puVar7 = puVar15;
  FUN_108154b58();
  FUN_108154e4c();
  if (puVar7 == (ulong *)0x0) goto LAB_10817e8f0;
  puVar8 = puVar15;
  FUN_108154b58(puVar15,&DAT_10f321b20);
  FUN_108154e4c();
  if (puVar8 == (ulong *)0x0) {
    uVar18 = 0;
  }
  else {
    puVar9 = puVar8;
    FUN_108154b58(puVar8,"g");
    iVar6 = (int)puVar9;
    pppuStack_88 = (undefined8 ***)CONCAT44(pppuStack_88._4_4_,1);
    func_0x000108155f24();
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    if (3 < iVar6) {
      iVar6 = 4;
    }
    uVar18 = (ulong)(iVar6 - 1);
  }
  puVar10 = (undefined8 *)0x1e8;
  __Znwm();
  uStack_90 = *param_4;
  *param_4 = 0;
  uStack_98 = *param_5;
  *param_5 = 0;
  uStack_a0 = *param_6;
  *param_6 = 0;
  uStack_a8 = *param_7;
  *param_7 = 0;
  uVar3 = (&UNK_10df06bd4)[uVar18];
  *(undefined4 *)(puVar10 + 1) = 1;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[2] = 0;
  *(undefined2 *)(puVar10 + 5) = 0;
  *puVar10 = &PTR_FUN_110a2b088;
  uVar11 = 0x50;
  __Znwm();
  pppuStack_88 = (undefined8 ****)0x0;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  FUN_108189544();
  puVar10[6] = uVar11;
  FUN_10815640c(&pppuStack_88);
  uVar11 = uStack_98;
  puVar10[10] = uStack_a8;
  puVar10[7] = uStack_90;
  uStack_98 = 0;
  uStack_90 = 0;
  puVar10[8] = uVar11;
  puVar10[9] = uStack_a0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  *(undefined1 *)(puVar10 + 0xb) = uVar3;
  puVar10[0xd] = 0;
  puVar10[0xc] = 0;
  puVar10[0xf] = 0;
  puVar10[0xe] = 0;
  puVar10[0x11] = 0;
  puVar10[0x10] = 0;
  puVar10[0x13] = 0;
  puVar10[0x12] = 0;
  puVar10[0x15] = 0;
  puVar10[0x14] = 0;
  puVar10[0x17] = 0;
  puVar10[0x16] = 0;
  puVar10[0x19] = 0;
  puVar10[0x18] = 0;
  puVar10[0x1a] = 0;
  FUN_1081628b0(puVar10 + 0x1b);
  FUN_1081628b0(puVar10 + 0x2a);
  puVar10[0x39] = 0;
  *(undefined4 *)(puVar10 + 0x3a) = 0x3f800000;
  puVar10[0x3b] = 0;
  *(byte *)(puVar10 + 0x3c) = *(byte *)(puVar10 + 0x3c) & 0xf8;
  *param_1 = (long)puVar10;
  func_0x000108143710(&uStack_a8);
  FUN_10815bd74(&uStack_a0);
  FUN_10815b900(&uStack_98);
  FUN_10812cc0c(&uStack_90);
  FUN_108161d20(*param_1,param_3,puVar7,*param_1 + 0xd8);
  if (puVar8 != (ulong *)0x0) {
    lVar17 = *param_1;
    FUN_108154b58(puVar8,&DAT_10f3dc16b);
    FUN_108154e4c();
    FUN_108162b98(lVar17,param_3,puVar8,*param_1 + 0x1c8);
  }
  puVar14 = &DAT_10f3dc16b;
  FUN_108154b58();
  func_0x000108155f00();
  ppppuVar12 = (undefined8 ****)0x0;
  if (puVar15 != (ulong *)0x0) {
    lVar17 = *param_1;
    plVar20 = (long *)(*puVar15 & 0xfffffffffffffff8);
    lVar19 = *(long *)(lVar17 + 0x60);
    ppppuVar12 = (undefined8 ****)*plVar20;
    if ((undefined8 ****)((long)(*(ulong *)(lVar17 + 0x70) - lVar19) >> 3) < ppppuVar12) {
      if ((ulong)ppppuVar12 >> 0x3d != 0) {
        FUN_108180c9c();
LAB_10817ee30:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10817ee34);
        (*pcVar5)();
      }
      lVar21 = *(long *)(lVar17 + 0x68);
      puStack_68 = (ulong *)(lVar17 + 0x70);
      FUN_108180d5c();
      plStack_80 = (long *)((long)ppppuVar12 + (lVar21 - lVar19));
      pppuStack_70 = ppppuVar12 + (long)puVar14;
      pppuStack_88 = ppppuVar12;
      plStack_78 = plStack_80;
      FUN_108180ca8((long *)(lVar17 + 0x60),&pppuStack_88);
      ppppuVar12 = &pppuStack_88;
      func_0x000108180d90();
      plVar20 = (long *)(*puVar15 & 0xfffffffffffffff8);
    }
    for (lVar17 = *plVar20 << 3; lVar17 != 0; lVar17 = lVar17 + -8) {
      plVar20 = plVar20 + 1;
      FUN_108154e4c(plVar20);
      lVar19 = param_3;
      FUN_108181748(&ppuStack_b0);
      ppuVar4 = ppuStack_b0;
      if ((undefined8 ***)ppuStack_b0 != (undefined8 ***)0x0) {
        *(byte *)(*param_1 + 0x1e0) =
             *(byte *)(*param_1 + 0x1e0) | *(byte *)(ppuStack_b0 + 0x16) >> 5 & 1;
        bVar2 = *(byte *)(*param_1 + 0x1e0);
        bVar1 = bVar2 & 2;
        if (((ulong)ppuStack_b0[0x16] & 0x40) != 0) {
          bVar1 = 2;
        }
        *(byte *)(*param_1 + 0x1e0) = bVar1 | bVar2 & 0xfd;
        bVar2 = *(byte *)(*param_1 + 0x1e0);
        bVar1 = 4;
        if (-1 < *(char *)(ppuStack_b0 + 0x16)) {
          bVar1 = bVar2 & 4;
        }
        *(byte *)(*param_1 + 0x1e0) = bVar1 | bVar2 & 0xfb;
        lVar21 = *param_1;
        plVar22 = *(long **)(lVar21 + 0x68);
        puVar15 = (ulong *)(lVar21 + 0x70);
        if (plVar22 < (long *)*puVar15) {
          ppuStack_b0 = (undefined8 ***)0x0;
          plVar24 = plVar22 + 1;
          *plVar22 = (long)ppuVar4;
        }
        else {
          lVar23 = (long)plVar22 - *(long *)(lVar21 + 0x60);
          ppppuVar12 = (undefined8 ****)((lVar23 >> 3) + 1);
          if ((ulong)ppppuVar12 >> 0x3d != 0) {
            FUN_108180c9c();
            goto LAB_10817ee30;
          }
          uVar18 = (long)*puVar15 - *(long *)(lVar21 + 0x60);
          ppppuVar16 = (undefined8 ****)((long)uVar18 >> 2);
          if (ppppuVar16 <= ppppuVar12) {
            ppppuVar16 = ppppuVar12;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            ppppuVar16 = (undefined8 ****)0x1fffffffffffffff;
          }
          puStack_68 = puVar15;
          if (ppppuVar16 == (undefined8 ****)0x0) {
            lVar19 = 0;
          }
          else {
            FUN_108180d5c();
          }
          plStack_80 = (long *)((long)ppppuVar16 + lVar23);
          pppuStack_70 = ppppuVar16 + lVar19;
          ppuStack_b0 = (undefined8 ***)0x0;
          plStack_78 = plStack_80 + 1;
          *plStack_80 = (long)ppuVar4;
          pppuStack_88 = ppppuVar16;
          FUN_108180ca8(lVar21 + 0x60,&pppuStack_88);
          plVar24 = *(long **)(lVar21 + 0x68);
          func_0x000108180d90(&pppuStack_88);
        }
        *(long **)(lVar21 + 0x68) = plVar24;
      }
      ppppuVar12 = (undefined8 ****)&ppuStack_b0;
      func_0x000108180dd8();
    }
  }
  func_0x0001081815e0();
  FUN_108154e4c();
  if (ppppuVar12 != (undefined8 ****)0x0) {
    func_0x000108181608();
    pppuStack_88 = (undefined8 ****)0xffffffffffffffff;
    FUN_108154b1c();
    FUN_108154b58(param_2,&UNK_10f47d027);
    func_0x000108155f00();
    if ((param_2 != (ulong *)0x0) &&
       (ppppuVar12 < *(undefined8 *****)(*param_2 & 0xfffffffffffffff8))) {
      puVar10 = (undefined8 *)(*param_2 & 0xfffffffffffffff8) + (long)ppppuVar12 + 1;
      FUN_108154e4c();
      if (puVar10 != (undefined8 *)0x0) {
        pppuVar13 = (undefined8 ***)0x50;
        __Znwm();
        pppuVar13[7] = (undefined8 **)0x0;
        pppuVar13[6] = (undefined8 **)0x0;
        pppuVar13[9] = (undefined8 **)0x0;
        pppuVar13[8] = (undefined8 **)0x0;
        pppuVar13[3] = (undefined8 **)0x0;
        pppuVar13[2] = (undefined8 **)0x0;
        pppuVar13[5] = (undefined8 **)0x0;
        pppuVar13[4] = (undefined8 **)0x0;
        pppuVar13[1] = (undefined8 **)0x0;
        *pppuVar13 = (undefined8 **)0x0;
        lVar17 = *param_1;
        ppuStack_b0 = pppuVar13;
        FUN_108154b58(puVar10,"pt");
        FUN_108154e4c();
        FUN_108161998(lVar17,param_3,puVar10,pppuVar13);
        func_0x000108181608();
        FUN_108154e4c();
        func_0x0001081815c8();
        func_0x000108181608();
        FUN_108154e4c();
        func_0x0001081815c8();
        func_0x0001081815e0();
        FUN_108154e4c();
        func_0x0001081815c8();
        func_0x000108181608();
        FUN_108154e4c();
        func_0x0001081815c8();
        func_0x0001081815e0();
        FUN_10815c694();
        func_0x000108181608();
        FUN_10815c694();
        *(byte *)(*param_1 + 0x1e0) = *(byte *)(*param_1 + 0x1e0) | 2;
        goto LAB_10817eddc;
      }
    }
  }
  pppuVar13 = (undefined8 ***)0x0;
LAB_10817eddc:
  ppuStack_b0 = (undefined8 ***)0x0;
  func_0x000108180f14(*param_1 + 0x1d8,pppuVar13);
  func_0x000108180ef0(&ppuStack_b0);
  FUN_10815a3a0(param_3,param_1,puVar7);
  return;
}



/* Entry: 10817ef28; end: 10817ef9f;  */

undefined8 * FUN_10817ef28(undefined8 *param_1)

{
  func_0x000108180ef0(param_1 + 0x3b);
  FUN_108162460(param_1 + 0x2a);
  FUN_108162460(param_1 + 0x1b);
  FUN_10818095c(param_1 + 0x12);
  func_0x000108180f9c(param_1 + 0xf);
  func_0x000108180f54(param_1 + 0xc);
  func_0x000108143710(param_1 + 10);
  FUN_10815bd74(param_1 + 9);
  FUN_10815b900(param_1 + 8);
  FUN_10812cc0c(param_1 + 7);
  FUN_1081564a4(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817efa0; end: 10817efa3;  */

undefined8 * FUN_10817efa0(undefined8 *param_1)

{
  func_0x000108180ef0(param_1 + 0x3b);
  FUN_108162460(param_1 + 0x2a);
  FUN_108162460(param_1 + 0x1b);
  FUN_10818095c(param_1 + 0x12);
  func_0x000108180f9c(param_1 + 0xf);
  func_0x000108180f54(param_1 + 0xc);
  func_0x000108143710(param_1 + 10);
  FUN_10815bd74(param_1 + 9);
  FUN_10815b900(param_1 + 8);
  FUN_10812cc0c(param_1 + 7);
  FUN_1081564a4(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817efa4; end: 10817efb7;  */

void FUN_10817efa4(void)

{
  FUN_10817ef28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817efb8; end: 10817efbb;  */

void FUN_10817efb8(undefined8 *param_1,float param_2,float param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_10810c9b4();
  bVar1 = false;
  if ((param_3 == 0.0) && (bVar1 = false, !NAN(param_2))) {
    bVar1 = param_2 == 0.0;
  }
  *param_1 = 0x3f800000;
  *(float *)(param_1 + 1) = param_2;
  *(undefined8 *)((long)param_1 + 0xc) = 0x3f80000000000000;
  uVar2 = 0x10;
  if (!bVar1) {
    uVar2 = 0x11;
  }
  *(float *)((long)param_1 + 0x14) = param_3;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x24) = uVar2;
  return;
}



/* Entry: 10817efbc; end: 10817f0af;  */

void FUN_10817efbc(long *param_1)

{
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_28;
  
  if (*(char *)(*param_1 + 0x136) == '\x01') {
    FUN_10818b15c(&uStack_28,*(undefined4 *)(*param_1 + 300));
    uVar1 = uStack_28;
    uStack_28 = 0;
    func_0x0001081809d8(param_1[1] + 0x18,uVar1);
    func_0x00010818165c();
    uStack_28 = CONCAT71(uStack_28._1_7_,1);
    FUN_108158df4(*(undefined8 *)(param_1[1] + 0x18),&uStack_28);
    if (*(long *)param_1[3] != 0) {
      do {
        func_0x0001081815a4();
      } while (extraout_w11 != 0);
    }
    if (*(long *)(param_1[1] + 0x18) != 0) {
      do {
        func_0x0001081815a4();
      } while (extraout_w11_00 != 0);
    }
    func_0x0001081816a4();
    func_0x00010818171c();
    func_0x000108181654();
    func_0x000108181694();
    func_0x00010818168c();
    func_0x00010818169c();
  }
  return;
}



/* Entry: 10817f0b0; end: 10817f1d7;  */

void FUN_10817f0b0(long *param_1)

{
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x137) == '\x01') {
    FUN_10818b15c(&uStack_38,*(undefined4 *)(lVar2 + 0x130));
    uVar1 = uStack_38;
    uStack_38 = 0;
    func_0x0001081809d8(param_1[1] + 0x20,uVar1);
    func_0x00010818165c();
    func_0x000108181728();
    uStack_38._0_1_ = 1;
    FUN_108158df4();
    func_0x000108181728();
    uStack_38 = CONCAT71(uStack_38._1_7_,1);
    FUN_108178390();
    func_0x000108181728();
    func_0x000108180940(*(float *)(lVar2 + 0xf4) * *(float *)(lVar2 + 0x1d0));
    func_0x000108181728();
    func_0x0001081783b0();
    if (*(long *)param_1[3] != 0) {
      do {
        func_0x0001081815a4();
      } while (extraout_w11 != 0);
    }
    if (*(long *)(param_1[1] + 0x20) != 0) {
      do {
        func_0x0001081815a4();
      } while (extraout_w11_00 != 0);
    }
    func_0x0001081816a4();
    func_0x00010818171c();
    func_0x000108181654();
    func_0x000108181694();
    func_0x00010818168c();
    func_0x00010818169c();
  }
  return;
}



/* Entry: 10817f1d8; end: 10817f21f;  */

void FUN_10817f1d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x000108181624();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 10817f220; end: 1081808ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10817f220(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  int iVar6;
  byte bVar7;
  ulong uVar8;
  char cVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  long **pplVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  code *pcVar18;
  undefined1 uVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *plVar23;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  code *extraout_x9;
  code *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x9_04;
  long *plVar24;
  undefined8 uVar25;
  undefined8 extraout_x9_05;
  float *pfVar26;
  ulong uVar27;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w13;
  int extraout_w13_00;
  int extraout_w13_01;
  int extraout_w13_02;
  int extraout_w13_03;
  byte bVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  ulong *puVar32;
  undefined8 *puVar33;
  long lVar34;
  int iVar35;
  ulong uVar36;
  float fVar37;
  undefined8 uVar38;
  long lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  ulong uVar44;
  undefined8 extraout_d1;
  ulong extraout_d1_00;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  uint uVar56;
  long lStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  float fStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  uint uStack_360;
  undefined4 uStack_35c;
  int *piStack_358;
  int *piStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_338;
  long alStack_330 [5];
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined8 uStack_2e4;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c4;
  undefined8 uStack_2bc;
  undefined4 uStack_2b4;
  long alStack_2b0 [8];
  long *aplStack_270 [8];
  long *plStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  long lStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  uint uStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_170;
  undefined8 **ppuStack_168;
  long **pplStack_160;
  long **pplStack_158;
  undefined8 *puStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long **pplStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  
  if (((*(byte *)(param_1 + 0x136) & 1) == 0) && (*(char *)(param_1 + 0x137) != '\x01')) {
    return;
  }
  puVar33 = (undefined8 *)(param_1 + 0xd8);
  puVar22 = puVar33;
  FUN_10815ccb4(puVar33,param_1 + 0x150);
  if ((int)puVar22 == 0) goto LAB_10817fe08;
  FUN_1081625c4(param_1 + 0x150,puVar33);
  uVar44 = *(ulong *)(param_1 + 0xe8);
  uVar38 = NEON_fmaxnm((uVar44 ^ 0x44a2000044a20000) &
                       ~CONCAT44(-(uint)(1296.0 < (float)(uVar44 >> 0x20)),
                                 -(uint)(1296.0 < (float)uVar44)) ^ 0x44a2000044a20000,
                       0x3dcccccd3dcccccd,4);
  uStack_390 = (undefined4)uVar38;
  uStack_38c = (undefined4)((ulong)uVar38 >> 0x20);
  fStack_388 = 1296.0;
  if (*(float *)(param_1 + 0xf0) <= 1296.0) {
    fStack_388 = *(float *)(param_1 + 0xf0);
  }
  if (fStack_388 <= 0.1) {
    fStack_388 = 0.1;
  }
  uStack_384 = (undefined4)*(undefined8 *)(param_1 + 0xf8);
  uStack_380 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xf8) >> 0x20);
  uStack_37c = *(undefined4 *)(param_1 + 0x100);
  lStack_368 = *(long *)(param_1 + 0x108);
  lStack_378 = *(long *)(param_1 + 0x110);
  lStack_370 = CONCAT44(lStack_370._4_4_,*(undefined4 *)(param_1 + 0x118));
  if ((((*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) &&
       (*(long *)(param_1 + 0x1d8) == 0)) && (lStack_368 == 0)) && (*(long *)(param_1 + 0x138) == 0)
     ) {
    uStack_360 = 0;
LAB_10817f330:
    uStack_360 = uStack_360 | *(byte *)(param_1 + 0x1e0) & 2;
  }
  else {
    if (*(long *)(param_1 + 0x138) == 0) {
      uStack_360 = 1;
      goto LAB_10817f330;
    }
    uStack_360 = 7;
  }
  piStack_358 = (int *)0x0;
  if (**(int **)(param_1 + 0x140) != 0) {
    piStack_358 = *(int **)(param_1 + 0x140) + 2;
  }
  piStack_350 = (int *)0x0;
  if (**(int **)(param_1 + 0x148) != 0) {
    piStack_350 = *(int **)(param_1 + 0x148) + 2;
  }
  uStack_398 = puVar33;
  FUN_108183134(&uStack_1f0,param_1 + 0xe0,&uStack_398,param_1 + 0x11c,param_1 + 0x38,param_1 + 0x50
               );
  if (*(long *)(param_1 + 0x48) != 0) {
    if ((CONCAT44(uStack_1ec,uStack_1f0) == lStack_1e8) && (**(int **)(param_1 + 0xe0) != 0)) {
      FUN_1083a3c34(&uStack_f0,&UNK_10f47d9f9);
      func_0x000108181734();
      (*extraout_x9)();
      func_0x0001081816ec();
      func_0x0001081816e4();
    }
    if (lStack_1d8 != 0) {
      FUN_1083a3c34(&uStack_f0,&UNK_10f47da16);
      func_0x000108181734();
      (*extraout_x9_00)();
      func_0x0001081816ec();
      func_0x0001081816e4();
    }
  }
  *(undefined4 *)(param_1 + 0x1d0) = uStack_1d0;
  FUN_108189690(*(undefined8 *)(param_1 + 0x30));
  FUN_1081808ac(param_1 + 0x78);
  puStack_3c0 = *(undefined8 **)(param_1 + 0x30);
  puStack_3a0 = (undefined8 *)0x0;
  lVar29 = *(long *)(param_1 + 0x138);
  if (lVar29 == 0) {
    puStack_3c8 = (undefined8 *)0x0;
  }
  else {
    puStack_3c8 = (undefined8 *)0x78;
    __Znwm();
    piVar1 = (int *)(lVar29 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    uStack_f0 = (undefined4)lVar29;
    uStack_ec = (undefined4)((ulong)lVar29 >> 0x20);
    uVar51 = *(undefined4 *)(param_1 + 0x1d0);
    FUN_108189518(puStack_3c8);
    *puStack_3c8 = &PTR_DAT_110a2b140;
    uStack_f0 = 0;
    uStack_ec = 0;
    puStack_3c8[10] = lVar29;
    *(undefined4 *)(puStack_3c8 + 0xb) = uVar51;
    puStack_3c8[0xc] = 0;
    puStack_3c8[0xd] = 0;
    FUN_10815cda0(&uStack_f0);
    puStack_130 = (undefined8 *)0x0;
    puStack_3a0 = puStack_3c8;
    FUN_1081812b4(&puStack_130);
    puStack_3c0 = puStack_3c8;
  }
  for (uVar44 = 0; uVar44 < (ulong)((lStack_1e8 - CONCAT44(uStack_1ec,uStack_1f0)) / 0x78);
      uVar44 = uVar44 + 1) {
    puVar33 = (undefined8 *)(CONCAT44(uStack_1ec,uStack_1f0) + uVar44 * 0x78);
    lStack_108 = 0;
    lStack_110 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    plStack_128 = (long *)0x0;
    puStack_130 = (undefined8 *)puVar33[0xc];
    lStack_100 = puVar33[0xd];
    uStack_e8._4_4_ = 0;
    uStack_e0._0_4_ = 0.0;
    uStack_ec = 0;
    uStack_e8._0_4_ = 0;
    uStack_f0 = 0x3f800000;
    uStack_e0._4_4_ = 1.0;
    pplStack_d8 = (long **)0x0;
    uStack_d0 = 0;
    uStack_c8 = 0x3f800000;
    uStack_c0 = SUB84(puStack_130,0);
    uStack_bc = (undefined4)((ulong)puStack_130 >> 0x20);
    uStack_b8 = 0x3f80000000000000;
    FUN_108155228(&lStack_170,&uStack_f0);
    uVar38 = uStack_120;
    uStack_120 = lStack_170;
    lStack_170 = 0;
    func_0x000108180c78(uVar38);
    FUN_1081554f0(&lStack_170);
    uStack_220 = 0;
    plStack_230 = (long *)0x0;
    lStack_228 = 0;
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar29 = 0;
      puVar4 = (undefined8 *)puVar33[1];
      for (puVar22 = (undefined8 *)*puVar33; puVar22 != puVar4; puVar22 = puVar22 + 4) {
        for (uVar36 = 0; uVar36 < (ulong)puVar22[3]; uVar36 = uVar36 + 1) {
          lVar34 = uVar36 + lVar29;
          func_0x00010817de44(alStack_2b0,*(undefined8 *)(param_1 + 0x40),*puVar22,
                              *(undefined2 *)(puVar33[3] + lVar34 * 2));
          if (alStack_2b0[0] != 0) {
            FUN_10817efb8(&lStack_170,*(undefined4 *)(puVar33[6] + lVar34 * 8));
            fVar37 = *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0x1d0);
            func_0x00010815f6c0(&plStack_1b0,fVar37,fVar37);
            FUN_1081600e0(&uStack_f0,&lStack_170,&plStack_1b0);
            lStack_170 = alStack_2b0[0];
            alStack_2b0[0] = 0;
            puStack_3b8 = (undefined8 *)0x0;
            FUN_10815f414(aplStack_270,&uStack_f0);
            plStack_1b0 = aplStack_270[0];
            aplStack_270[0] = (long *)0x0;
            FUN_108158594(alStack_330,&lStack_170,&plStack_1b0);
            FUN_108155404(&plStack_1b0);
            FUN_108160198(aplStack_270);
            FUN_108154cb4(&lStack_170);
            lVar21 = alStack_330[0];
            alStack_330[0] = 0;
            uStack_2f0 = (undefined4)lVar21;
            uStack_2ec = (undefined4)((ulong)lVar21 >> 0x20);
            func_0x000108156e9c(&plStack_230,&uStack_2f0);
            func_0x000108181640();
            FUN_1081596a8(alStack_330);
            FUN_108154cb4(&puStack_3b8);
            lVar21 = puVar33[3] + lVar34 * 2;
            lVar30 = puVar33[4] - (lVar21 + 2);
            if (lVar30 != 0) {
              func_0x000108181648();
            }
            puVar33[4] = lVar21 + lVar30;
            lVar21 = puVar33[6] + lVar34 * 8;
            lVar30 = puVar33[7] - (lVar21 + 8);
            if (lVar30 != 0) {
              func_0x000108181648();
            }
            puVar33[7] = lVar21 + lVar30;
            if (puVar33[9] != puVar33[10]) {
              lVar34 = puVar33[9] + lVar34 * 8;
              lVar21 = puVar33[10] - (lVar34 + 8);
              if (lVar21 != 0) {
                func_0x000108181648();
              }
              puVar33[10] = lVar34 + lVar21;
            }
            uVar36 = uVar36 - 1;
            puVar22[3] = puVar22[3] + -1;
          }
          func_0x000108181674();
        }
        lVar29 = puVar22[3] + lVar29;
      }
    }
    plVar20 = (long *)0x90;
    __Znwm();
    FUN_108188e38();
    *plVar20 = (long)&PTR_FUN_110a2b0d8;
    plVar31 = plVar20 + 6;
    func_0x000108181108(plVar31,puVar33);
    aplStack_270[0] = plVar20;
    plStack_128 = plVar31;
    FUN_1081561e8(&plStack_230,
                  (ulong)*(byte *)(param_1 + 0x136) + (lStack_228 - (long)plStack_230 >> 3) +
                  (ulong)*(byte *)(param_1 + 0x137));
    ppuStack_168 = &puStack_130;
    uStack_f0 = (undefined4)param_1;
    uStack_ec = (undefined4)((ulong)param_1 >> 0x20);
    pplStack_160 = &plStack_230;
    pplStack_158 = aplStack_270;
    lStack_170 = param_1;
    pplStack_d8 = pplStack_158;
    uStack_e8 = ppuStack_168;
    uStack_e0 = pplStack_160;
    if (*(char *)(param_1 + 0x134) == '\0') {
      FUN_10817efbc(&uStack_f0);
      FUN_10817f0b0(&lStack_170);
    }
    else {
      FUN_10817f0b0(&lStack_170);
      FUN_10817efbc(&uStack_f0);
    }
    FUN_108156254(&plStack_230);
    if ((ulong)(lStack_228 - (long)plStack_230) < 9) {
      lVar29 = *plStack_230;
      *plStack_230 = 0;
      alStack_2b0[0] = lVar29;
    }
    else {
      plStack_1b0 = plStack_230;
      lStack_1a8 = lStack_228;
      uStack_1a0 = uStack_220;
      uStack_220 = 0;
      lStack_228 = 0;
      plStack_230 = (long *)0x0;
      FUN_1081562f4(&uStack_2f0,&plStack_1b0);
      lVar29 = CONCAT44(uStack_2ec,uStack_2f0);
      uStack_2f0 = 0;
      uStack_2ec = 0;
      alStack_2b0[0] = lVar29;
      FUN_1081564a4(&uStack_2f0);
      FUN_10815640c(&plStack_1b0);
    }
    if ((*(byte *)(param_1 + 0x1e0) & 1) != 0) {
      FUN_10818c15c(&uStack_2f0);
      lVar29 = lStack_108;
      lStack_108 = CONCAT44(uStack_2ec,uStack_2f0);
      uStack_2f0 = 0;
      uStack_2ec = 0;
      FUN_108180fd0(lVar29);
      FUN_108158f6c(&uStack_2f0);
      alStack_330[0] = alStack_2b0[0];
      alStack_2b0[0] = 0;
      puVar33 = (undefined8 *)0x0;
      if (lStack_108 != 0) {
        do {
          func_0x0001081815a4();
          puVar33 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      puStack_3b8 = puVar33;
      FUN_10818bb98(&uStack_2f0,alStack_330,&puStack_3b8);
      lVar29 = alStack_2b0[0];
      alStack_2b0[0] = CONCAT44(uStack_2ec,uStack_2f0);
      uStack_2f0 = 0;
      uStack_2ec = 0;
      func_0x000108180c54(lVar29);
      func_0x000108181640();
      FUN_108159600(&puStack_3b8);
      FUN_108154cb4(alStack_330);
      lVar29 = alStack_2b0[0];
    }
    alStack_2b0[0] = 0;
    uVar38 = 0;
    lStack_340 = lVar29;
    if (uStack_120 != 0) {
      do {
        func_0x0001081815a4();
        uVar38 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    uStack_348 = uVar38;
    FUN_108158594(&uStack_338,&lStack_340,&uStack_348);
    uVar38 = uStack_338;
    uStack_338 = 0;
    uStack_2f0 = (undefined4)uVar38;
    uStack_2ec = (undefined4)((ulong)uVar38 >> 0x20);
    FUN_108189704(puStack_3c0,&uStack_2f0);
    func_0x000108181640();
    FUN_1081596a8(&uStack_338);
    FUN_108155404(&uStack_348);
    FUN_108154cb4(&lStack_340);
    lVar30 = lStack_108;
    lVar21 = lStack_110;
    lVar34 = lStack_118;
    lVar29 = uStack_120;
    plVar31 = *(long **)(param_1 + 0x80);
    if (plVar31 < *(long **)(param_1 + 0x88)) {
      plVar31[1] = (long)plStack_128;
      *plVar31 = (long)puStack_130;
      lStack_118 = 0;
      uStack_120 = 0;
      plVar31[3] = lVar34;
      plVar31[2] = lVar29;
      lStack_108 = 0;
      lStack_110 = 0;
      plVar31[5] = lVar30;
      plVar31[4] = lVar21;
      plVar31[6] = lStack_100;
      plVar31 = plVar31 + 7;
    }
    else {
      plVar20 = *(long **)(param_1 + 0x78);
      lVar29 = (long)plVar31 - (long)plVar20;
      uVar36 = lVar29 / 0x38 + 1;
      if (0x492492492492492 < uVar36) {
        FUN_10818118c();
        goto LAB_1081806a0;
      }
      uVar8 = ((long)*(long **)(param_1 + 0x88) - (long)plVar20) / 0x38;
      uVar27 = uVar8 * 2;
      if (uVar27 < uVar36 || uVar27 - uVar36 == 0) {
        uVar27 = uVar36;
      }
      if (0x249249249249248 < uVar8) {
        uVar27 = 0x492492492492492;
      }
      if (uVar27 == 0) {
        lVar34 = 0;
      }
      else {
        if (0x492492492492492 < uVar27) {
          func_0x000104bd35f4();
          goto LAB_1081806a0;
        }
        lVar34 = uVar27 * 0x38;
        __Znwm();
      }
      lVar30 = lStack_108;
      lVar21 = lStack_110;
      plVar2 = (long *)(lVar34 + lVar29);
      plVar2[1] = (long)plStack_128;
      *plVar2 = (long)puStack_130;
      plVar2[3] = lStack_118;
      plVar2[2] = uStack_120;
      lStack_118 = 0;
      uStack_120 = 0;
      lStack_108 = 0;
      lStack_110 = 0;
      plVar2[5] = lVar30;
      plVar2[4] = lVar21;
      plVar2[6] = lStack_100;
      plVar23 = plVar2 + (lVar29 / -0x38) * 7;
      for (plVar24 = plVar20; plVar24 != plVar31; plVar24 = plVar24 + 7) {
        lVar21 = *plVar24;
        plVar23[1] = plVar24[1];
        *plVar23 = lVar21;
        lVar21 = 0;
        if (plVar24[2] != 0) {
          do {
            func_0x0001081815f0();
            plVar23 = extraout_x8_01;
            plVar24 = extraout_x9_01;
            lVar21 = extraout_x10;
          } while (extraout_w13 != 0);
        }
        plVar23[2] = lVar21;
        lVar21 = 0;
        if (plVar24[3] != 0) {
          do {
            func_0x0001081815f0();
            plVar23 = extraout_x8_02;
            plVar24 = extraout_x9_02;
            lVar21 = extraout_x10_00;
          } while (extraout_w13_00 != 0);
        }
        plVar23[3] = lVar21;
        lVar21 = 0;
        if (plVar24[4] != 0) {
          do {
            func_0x0001081815f0();
            plVar23 = extraout_x8_03;
            plVar24 = extraout_x9_03;
            lVar21 = extraout_x10_01;
          } while (extraout_w13_01 != 0);
        }
        plVar23[4] = lVar21;
        lVar21 = 0;
        if (plVar24[5] != 0) {
          do {
            func_0x0001081815f0();
            plVar23 = extraout_x8_04;
            plVar24 = extraout_x9_04;
            lVar21 = extraout_x10_02;
          } while (extraout_w13_02 != 0);
        }
        plVar23[5] = lVar21;
        plVar23[6] = plVar24[6];
        plVar23 = plVar23 + 7;
      }
      for (; plVar20 != plVar31; plVar20 = plVar20 + 7) {
        FUN_1081809e8(plVar20);
      }
      plVar31 = plVar2 + 7;
      lVar21 = *(long *)(param_1 + 0x78);
      *(long **)(param_1 + 0x78) = plVar2 + (lVar29 / -0x38) * 7;
      *(long **)(param_1 + 0x80) = plVar31;
      *(ulong *)(param_1 + 0x88) = lVar34 + uVar27 * 0x38;
      if (lVar21 != 0) {
        __ZdlPv();
      }
    }
    *(long **)(param_1 + 0x80) = plVar31;
    func_0x000108181674();
    FUN_10817f1d8(aplStack_270);
    FUN_10815640c(&plStack_230);
    FUN_1081809e8(&puStack_130);
  }
  if (puStack_3c8 != (undefined8 *)0x0) {
    lVar29 = *(long *)(param_1 + 0x78);
    lVar34 = *(long *)(param_1 + 0x80);
    uVar44 = (lVar34 - lVar29) / 0x38;
    puStack_3c8[0xe] = uVar44;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar44;
    uVar36 = uVar44 * 0x18;
    puVar33 = (undefined8 *)(uVar36 + 0x10);
    if (0xffffffffffffffef < uVar36 || SUB168(auVar45 * ZEXT816(0x18),8) != 0) {
      puVar33 = (undefined8 *)0xffffffffffffffff;
    }
    __Znam();
    *puVar33 = 0x18;
    puVar33[1] = uVar44;
    if (lVar34 != lVar29) {
      _bzero(puVar33 + 2,((uVar36 - 0x18) / 0x18) * 0x18 + 0x18);
    }
    uStack_f0 = 0;
    uStack_ec = 0;
    lVar29 = puStack_3c8[0xc];
    puStack_3c8[0xc] = puVar33 + 2;
    if (lVar29 != 0) {
      func_0x000108180a24();
    }
    func_0x000108180a70(&uStack_f0);
    uVar44 = 0;
    pplVar12 = uStack_e0;
    while( true ) {
      uStack_e0._4_4_ = (float)((ulong)pplVar12 >> 0x20);
      lVar29 = *(long *)(param_1 + 0x78);
      lVar34 = *(long *)(param_1 + 0x80);
      uVar36 = (lVar34 - lVar29) / 0x38;
      if (uVar36 <= uVar44) break;
      lVar29 = lVar29 + uVar44 * 0x38;
      uVar25 = *(undefined8 *)(lVar29 + 8);
      uStack_f0 = (undefined4)uVar25;
      uStack_ec = (undefined4)((ulong)uVar25 >> 0x20);
      uVar38 = 0;
      if (*(long *)(lVar29 + 0x10) != 0) {
        do {
          uStack_e0 = pplVar12;
          func_0x0001081815f0();
          uVar38 = extraout_x8_05;
          uVar25 = extraout_x9_05;
          lVar29 = extraout_x10_03;
          pplVar12 = uStack_e0;
        } while (extraout_w13_03 != 0);
      }
      uStack_e0._0_4_ = *(float *)(lVar29 + 0x30);
      puVar33 = (undefined8 *)(puStack_3c8[0xc] + uVar44 * 0x18);
      *puVar33 = uVar25;
      uStack_e8._0_4_ = 0;
      uStack_e8._4_4_ = 0;
      uVar25 = puVar33[1];
      puVar33[1] = uVar38;
      func_0x000108180c78(uVar25);
      *(float *)(puVar33 + 2) = (float)uStack_e0;
      FUN_1081554f0(&uStack_e8);
      pplVar12 = (long **)CONCAT44(uStack_e0._4_4_,(float)uStack_e0);
      uVar44 = uVar44 + 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar36;
    lVar30 = uVar36 * 0x48;
    lVar21 = lVar30;
    if (SUB168(auVar11 * ZEXT816(0x48),8) != 0) {
      lVar21 = -1;
    }
    uStack_e0 = pplVar12;
    __Znam();
    if (lVar34 != lVar29) {
      puVar33 = (undefined8 *)(lVar21 + 0x10);
      do {
        puVar33[6] = 0;
        puVar33[3] = 0;
        puVar33[2] = 0;
        puVar33[5] = 0;
        puVar33[4] = 0;
        puVar33[-1] = 0;
        puVar33[-2] = 0;
        puVar33[1] = 0;
        *puVar33 = 0;
        FUN_10810c9b4();
        puVar33 = puVar33 + 9;
        lVar30 = lVar30 + -0x48;
      } while (lVar30 != 0);
    }
    uStack_f0 = 0;
    uStack_ec = 0;
    lVar29 = puStack_3c8[0xd];
    puStack_3c8[0xd] = lVar21;
    if (lVar29 != 0) {
      __ZdaPv();
    }
    func_0x000108180a98(&uStack_f0);
    puStack_130 = puStack_3a0;
    puStack_3a0 = (undefined8 *)0x0;
    FUN_108189704(*(undefined8 *)(param_1 + 0x30),&puStack_130);
    FUN_108154cb4(&puStack_130);
  }
  if ((*(long *)(param_1 + 0x60) != *(long *)(param_1 + 0x68)) || (*(long *)(param_1 + 0x1d8) != 0))
  {
    lVar29 = 0;
    uVar27 = 0;
    uVar36 = 0;
    bVar28 = 0;
    iVar35 = 0;
    uVar44 = 0;
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
    fVar37 = 0.0;
    fVar47 = 0.0;
    fVar55 = 0.0;
    fVar53 = 0.0;
    while( true ) {
      uVar15 = uStack_ec;
      uVar51 = uStack_f0;
      lVar34 = CONCAT44(uStack_1ec,uStack_1f0);
      uStack_f0 = (undefined4)uVar36;
      uVar13 = uStack_f0;
      uStack_ec = (undefined4)(uVar36 >> 0x20);
      uVar16 = uStack_ec;
      uStack_f0 = (undefined4)uVar27;
      uVar14 = uStack_f0;
      uStack_ec = (undefined4)(uVar27 >> 0x20);
      uVar17 = uStack_ec;
      uStack_f0 = uVar51;
      uStack_ec = uVar15;
      uStack_e0._0_4_ = fVar55;
      uStack_e0._4_4_ = fVar37;
      if ((ulong)((lStack_1e8 - lVar34) / 0x78) <= uVar44) break;
      lVar21 = lVar34 + lVar29;
      iVar6 = *(int *)(lVar21 + 0x70);
      bVar7 = *(byte *)(lVar21 + 0x74);
      bVar3 = bVar7;
      if (iVar35 != iVar6) {
        bVar3 = 1;
      }
      if ((bVar3 & bVar28) == 1) {
        uStack_e8 = (undefined8 **)(uVar44 - uVar36);
        uStack_f0 = uVar13;
        uStack_ec = uVar16;
        func_0x000108181710();
        bVar28 = 0;
        bVar7 = *(byte *)(lVar21 + 0x74);
      }
      if ((bVar7 & 1) == 0) {
        uStack_f0 = (undefined4)uVar44;
        uStack_ec = (undefined4)(uVar44 >> 0x20);
        uStack_e8._0_4_ = 1;
        uStack_e8._4_4_ = 0;
        uStack_e0._0_4_ = 0.0;
        uStack_e0._4_4_ = 0.0;
        FUN_108181198((undefined8 *)(param_1 + 0x90),&uStack_f0);
        fVar40 = fVar37;
        if (bVar28 == 0) {
          fVar55 = 0.0;
          uVar36 = uVar44;
          fVar40 = 0.0;
        }
        fVar37 = *(float *)(lVar34 + lVar29 + 0x6c);
        fVar55 = fVar55 + *(float *)(lVar34 + lVar29 + 0x68);
        if (fVar40 <= fVar37) {
          fVar37 = fVar40;
        }
        bVar28 = 1;
      }
      if (iVar35 != iVar6) {
        uStack_e8 = (undefined8 **)(uVar44 - uVar27);
        uStack_f0 = uVar14;
        uStack_ec = uVar17;
        uStack_e0._0_4_ = fVar53;
        uStack_e0._4_4_ = fVar47;
        func_0x000108181704();
        iVar35 = *(int *)(lVar21 + 0x70);
        fVar47 = 0.0;
        fVar53 = 0.0;
        uVar27 = uVar44;
      }
      fVar40 = *(float *)(lVar34 + lVar29 + 0x6c);
      fVar53 = fVar53 + *(float *)(lVar34 + lVar29 + 0x68);
      if (fVar47 <= fVar40) {
        fVar40 = fVar47;
      }
      fVar47 = fVar40;
      uVar44 = uVar44 + 1;
      lVar29 = lVar29 + 0x78;
    }
    if (uVar36 <= uVar44 && (undefined8 **)(uVar44 - uVar36) != (undefined8 **)0x0) {
      uStack_f0 = uVar13;
      uStack_ec = uVar16;
      uStack_e8 = (undefined8 **)(uVar44 - uVar36);
      func_0x000108181710();
    }
    if (uVar27 <= uVar44 && (undefined8 **)(uVar44 - uVar27) != (undefined8 **)0x0) {
      uStack_f0 = uVar14;
      uStack_ec = uVar17;
      uStack_e0._0_4_ = fVar53;
      uStack_e0._4_4_ = fVar47;
      uStack_e8 = (undefined8 **)(uVar44 - uVar27);
      func_0x000108181704();
    }
  }
  FUN_1081812b4(&puStack_3a0);
  func_0x000108180ac0(&uStack_1f0);
LAB_10817fe08:
  lVar29 = *(long *)(param_1 + 0x78);
  lVar34 = *(long *)(param_1 + 0x80);
  if (lVar29 != lVar34) {
    lVar21 = *(long *)(param_1 + 0x1d8);
    if (lVar21 != 0) {
      fVar37 = *(float *)(lVar21 + 0x24);
      lVar29 = lVar21;
      func_0x0001073c73e4(lVar21,lVar21 + 0x28);
      if (((int)lVar29 == 0) || ((bool)*(char *)(lVar21 + 0x48) != (fVar37 != 0.0))) {
        FUN_1081617f8(&uStack_398,lVar21);
        if (fVar37 != 0.0) {
          FUN_108376ad8(&uStack_f0);
          FUN_108379514();
          FUN_108376b90(&uStack_398,&uStack_f0);
          FUN_10837ca5c(CONCAT44(uStack_ec,uStack_f0));
        }
        FUN_108345058(0x3f800000,&uStack_f0,&uStack_398,0);
        FUN_108345194(&puStack_130);
        puVar33 = puStack_130;
        puStack_130 = (undefined8 *)0x0;
        func_0x00010816378c(lVar21 + 0x40,puVar33);
        func_0x0001081428c0(&puStack_130);
        uVar19 = SUB81(&uStack_398,0);
        FUN_108377324();
        *(undefined1 *)(lVar21 + 0x49) = uVar19;
        *(bool *)(lVar21 + 0x48) = fVar37 != 0.0;
        func_0x00010815da54(lVar21 + 0x28,lVar21);
        FUN_1083456f8(&uStack_f0);
        FUN_10837ca5c(uStack_398);
      }
      lVar29 = *(long *)(param_1 + 0x78);
      lVar34 = *(long *)(param_1 + 0x80);
    }
    uVar38 = *(undefined8 *)(param_1 + 300);
    uVar51 = *(undefined4 *)(param_1 + 0xf4);
    puStack_3b8 = (undefined8 *)0x0;
    lStack_3b0 = 0;
    lStack_3a8 = 0;
    if (lVar34 - lVar29 != 0) {
      uVar44 = (lVar34 - lVar29) / 0x38;
      if (0x35e50d79435e50d < uVar44) {
        FUN_10818158c();
LAB_1081806a0:
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1081806a4);
        (*pcVar18)();
      }
      puVar22 = (undefined8 *)(uVar44 * 0x4c);
      __Znwm();
      lVar29 = uVar44 * 0x4c;
      lStack_3a8 = (long)puVar22 + lVar29;
      puVar33 = puVar22;
      for (; puStack_3b8 = puVar22, lVar29 != 0; lVar29 = lVar29 + -0x4c) {
        puVar33[1] = 0x3f80000000000000;
        *puVar33 = 0;
        puVar33[3] = 0;
        puVar33[2] = 0x3f8000003f800000;
        puVar33[4] = 0x3f80000000000000;
        *(undefined4 *)(puVar33 + 5) = 0;
        *(undefined4 *)((long)puVar33 + 0x2c) = uVar51;
        puVar33[6] = uVar38;
        puVar33[7] = 0;
        puVar33[8] = 0;
        *(undefined4 *)(puVar33 + 9) = 0;
        puVar33 = (undefined8 *)((long)puVar33 + 0x4c);
      }
    }
    puVar22 = *(undefined8 **)(param_1 + 0x68);
    lStack_3b0 = lStack_3a8;
    for (puVar33 = *(undefined8 **)(param_1 + 0x60); puVar33 != puVar22; puVar33 = puVar33 + 1) {
      FUN_108181924(*puVar33,param_1 + 0x90,&puStack_3b8);
    }
    if (*(char *)(param_1 + 0x58) == '\x01') {
      plVar31 = (long *)(param_1 + 0xa8);
    }
    else if (*(char *)(param_1 + 0x58) == '\x02') {
      plVar31 = (long *)(param_1 + 0xc0);
    }
    else {
      plVar31 = (long *)0x0;
    }
    lStack_3d0 = 0;
    puVar32 = *(ulong **)(param_1 + 0xc0);
    puVar5 = *(ulong **)(param_1 + 200);
    fVar37 = 0.0;
    fVar47 = 0.0;
    auVar45 = NEON_fmov(0x3fe0000000000000,8);
    for (; puVar32 != puVar5; puVar32 = puVar32 + 3) {
      fVar40 = 0.0;
      fVar52 = 0.0;
      fVar55 = 0.0;
      fVar53 = fVar37;
      if (((*(byte *)(param_1 + 0x1e0) >> 2 & 1) != 0) && (fVar55 = 0.0, puVar32[1] != 0)) {
        uVar27 = *puVar32;
        uVar36 = uVar27 + puVar32[1];
        fVar53 = 0.0;
        pfVar26 = (float *)((long)puStack_3b8 + uVar27 * 0x4c + 0x28);
        for (uVar44 = uVar27; uVar44 < uVar36; uVar44 = uVar44 + 1) {
          fVar40 = fVar40 + (float)*(undefined8 *)(pfVar26 + 6);
          fVar52 = fVar52 + (float)((ulong)*(undefined8 *)(pfVar26 + 6) >> 0x20);
          fVar53 = fVar53 + *pfVar26;
          pfVar26 = pfVar26 + 0x13;
        }
        fVar55 = fVar53 + (*(float *)((long)puStack_3b8 + uVar27 * 0x4c + 0x28) +
                          *(float *)((long)puStack_3b8 + uVar36 * 0x4c + -0x24)) * -0.5;
      }
      FUN_1081808e0(*(undefined4 *)(param_1 + 0x110));
      if (puVar32 != *(ulong **)(param_1 + 0xc0)) {
        fVar41 = (float)puVar32[1];
        if (puVar32[1] != 0) {
          fVar37 = fVar37 + fVar40 / fVar41;
          fVar47 = fVar47 + fVar52 / fVar41;
        }
      }
      uVar36 = *puVar32;
      fVar40 = 0.0;
      lVar29 = uVar36 * 0x4c;
      lVar34 = uVar36 * 0x38;
      for (uVar44 = uVar36; puVar33 = puStack_3b8, uVar44 < puVar32[1] + uVar36; uVar44 = uVar44 + 1
          ) {
        if ((plVar31 != (long *)0x0) &&
           (plVar20 = (long *)(*plVar31 + lStack_3d0 * 0x18),
           (ulong)(plVar20[1] + *plVar20) <= uVar44)) {
          lStack_3d0 = lStack_3d0 + 1;
        }
        fVar41 = *(float *)((long)puStack_3b8 + lVar29 + 0x28) * 0.5;
        fVar52 = fVar41;
        if (uVar44 <= uVar36) {
          fVar52 = 0.0;
        }
        if ((puVar32[1] + uVar36) - 1 <= uVar44) {
          fVar41 = 0.0;
        }
        if (plVar31 == (long *)0x0) {
          plVar20 = (long *)0x0;
        }
        else {
          plVar20 = (long *)(*plVar31 + lStack_3d0 * 0x18);
        }
        lVar21 = *(long *)(param_1 + 0x78);
        bVar28 = *(byte *)(param_1 + 0x58);
        if (bVar28 - 1 < 2) {
          pfVar26 = (float *)(lVar21 + *plVar20 * 0x38);
          fVar46 = *(float *)(plVar20 + 2);
          fVar48 = *(float *)((long)plVar20 + 0x14);
          fVar42 = *pfVar26;
          fVar50 = pfVar26[1];
LAB_1081801f4:
          fVar46 = fVar46 + fVar42;
          fVar49 = (fVar48 + fVar50) - (fVar48 + fVar48);
          uVar38 = CONCAT44(fVar48 + fVar50,fVar42);
        }
        else {
          if (bVar28 != 3) {
            if (bVar28 == 0) {
              pfVar26 = (float *)(lVar21 + lVar34);
              fVar46 = pfVar26[0xc];
              fVar48 = pfVar26[0xd];
              fVar42 = *pfVar26;
              fVar50 = pfVar26[1];
              goto LAB_1081801f4;
            }
            goto LAB_1081806a0;
          }
          uVar38 = *(undefined8 *)(param_1 + 0x11c);
          fVar46 = (float)*(undefined8 *)(param_1 + 0x124);
          fVar49 = (float)((ulong)*(undefined8 *)(param_1 + 0x124) >> 0x20);
        }
        fVar42 = (float)((ulong)uVar38 >> 0x20);
        uVar25 = *(undefined8 *)(lVar21 + lVar34);
        fVar48 = (float)uVar25;
        fVar50 = ((float)(((double)(float)uVar38 + (double)fVar46) * auVar45._0_8_) +
                 (float)*(undefined8 *)(param_1 + 0x1c8) * 0.01 * (fVar46 - (float)uVar38) * 0.5) -
                 fVar48;
        fVar46 = (float)((ulong)uVar25 >> 0x20);
        fVar49 = ((float)(((double)fVar42 + (double)fVar49) * auVar45._8_8_) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x1c8) >> 0x20) * 0.01 *
                 (fVar49 - fVar42) * 0.5) - fVar46;
        uVar25 = ((undefined8 *)(lVar21 + lVar34))[2];
        uVar38 = *(undefined8 *)((long)puStack_3b8 + lVar29);
        fVar48 = fVar48 + (float)uVar38;
        fVar42 = fVar37 + (fVar40 - fVar55 * fVar53) + fVar52 + fVar50 + fVar48;
        uVar56 = *(uint *)((undefined8 *)((long)puStack_3b8 + lVar29) + 1);
        lVar30 = *(long *)(param_1 + 0x1d8);
        if (lVar30 == 0) {
          func_0x0001081816c4(&uStack_1f0);
          *(undefined8 *)(extraout_x8_06 + 0x18) = 0;
          *(undefined8 *)(extraout_x8_06 + 0x20) = 0;
          uStack_1c8 = 0x3f800000;
          uStack_1c0 = extraout_d1;
          uStack_1b8 = uVar56;
        }
        else {
          iVar35 = *(int *)(param_1 + 0x110);
          FUN_1081808e0(iVar35);
          uVar36 = *(ulong *)(lVar30 + 0x40);
          if (uVar36 == 0) {
            fVar43 = 0.0;
          }
          else {
            fVar43 = *(float *)(uVar36 + 0x40);
          }
          fVar54 = *(float *)(param_1 + 0x120);
          if (uVar36 == 0) {
LAB_108180424:
            plStack_128 = (long *)0x0;
            puStack_130 = (undefined8 *)0x3f800000;
            lStack_118 = 0;
            uStack_120 = 0x3f80000000000000;
            lStack_108 = 0x3f800000;
            lStack_110 = 0;
            lStack_100 = 0;
            uStack_f8 = 0x3f80000000000000;
          }
          else {
            fVar42 = (fVar42 - *(float *)(param_1 + 0x11c)) +
                     fVar48 * (fVar43 - (*(float *)(param_1 + 0x124) - *(float *)(param_1 + 0x11c)))
            ;
            if (iVar35 == 2) {
              fVar48 = *(float *)(lVar30 + 0x1c);
LAB_10818033c:
              fVar42 = fVar42 + fVar48;
            }
            else {
              if (iVar35 == 1) {
                fVar48 = *(float *)(lVar30 + 0x18) + *(float *)(lVar30 + 0x1c);
                goto LAB_10818033c;
              }
              if (iVar35 == 0) {
                fVar48 = *(float *)(lVar30 + 0x18);
                goto LAB_10818033c;
              }
            }
            uVar27 = (ulong)(uint)fVar42;
            fVar42 = *(float *)(uVar36 + 0x40);
            if (*(char *)(lVar30 + 0x49) == '\x01') {
              _fmodf(uVar27,fVar42);
              if ((float)uVar27 < 0.0) {
                uVar27 = (ulong)(uint)(fVar42 + (float)uVar27);
              }
            }
            FUN_10834533c(uVar27,uVar36,&lStack_170,&plStack_1b0);
            if ((uVar36 & 1) == 0) goto LAB_108180424;
            fVar48 = (float)NEON_fminnm((float)uVar27,0);
            fVar42 = (float)uVar27 - fVar42;
            if (fVar42 <= 0.0) {
              fVar42 = 0.0;
            }
            lVar39 = CONCAT44((float)((ulong)plStack_1b0 >> 0x20) * (fVar48 + fVar42) +
                              (float)((ulong)lStack_170 >> 0x20),
                              SUB84(plStack_1b0,0) * (fVar48 + fVar42) + (float)lStack_170);
            lStack_170 = lVar39;
            func_0x0001081816c4(&puStack_130);
            puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,extraout_w9);
            uStack_120 = CONCAT44(extraout_w9,(undefined4)uStack_120);
            *(undefined8 *)(extraout_x8_07 + 0x18) = 0;
            *(undefined8 *)(extraout_x8_07 + 0x20) = 0;
            lStack_108 = 0x3f800000;
            uStack_f8 = 0x3f80000000000000;
            lStack_100 = lVar39;
            if (*(float *)(lVar30 + 0x20) != 0.0) {
              _atan2f(extraout_d1_00 >> 0x20);
              func_0x00010818167c(&uStack_f0);
              FUN_10835e5d0(&uStack_398,&puStack_130,&uStack_f0);
              plStack_128 = (long *)CONCAT44(uStack_38c,uStack_390);
              puStack_130 = uStack_398;
              uStack_120 = CONCAT44(uStack_384,fStack_388);
              lStack_118 = CONCAT44(uStack_37c,uStack_380);
              uStack_f8 = CONCAT44(uStack_35c,uStack_360);
              lStack_110 = lStack_378;
              lStack_108 = lStack_370;
              lStack_100 = lStack_368;
            }
          }
          uStack_38c = 0;
          fStack_388 = 0.0;
          uStack_398._4_4_ = 0.0;
          uStack_390 = 0;
          uStack_398._0_4_ = 1.0;
          uStack_384 = 0x3f800000;
          uStack_380 = 0;
          uStack_37c = 0;
          lStack_378 = 0;
          lStack_370 = 0x3f800000;
          lStack_368 = (ulong)(uint)((fVar47 + 0.0 + fVar49 +
                                     fVar46 + (float)((ulong)uVar38 >> 0x20)) - fVar54) << 0x20;
          uStack_35c = 0x3f800000;
          uStack_360 = uVar56;
          FUN_10835e5d0(&uStack_1f0,&puStack_130,&uStack_398);
        }
        FUN_10835edc4(0x3f800000,0,0,*(float *)((long)puVar33 + lVar29 + 0x18) * 0.017453292,
                      &plStack_230);
        FUN_10835e5d0(&plStack_1b0,&uStack_1f0,&plStack_230);
        FUN_10835edc4(0,0x3f800000,0,*(float *)((long)puVar33 + lVar29 + 0x1c) * 0.017453292,
                      aplStack_270);
        FUN_10835e5d0(&lStack_170,&plStack_1b0,aplStack_270);
        func_0x00010818167c(alStack_2b0);
        FUN_10835e5d0(&puStack_130,&lStack_170,alStack_2b0);
        uStack_2f0 = *(undefined4 *)((long)puVar33 + lVar29 + 0xc);
        uStack_2dc = *(undefined4 *)((long)puVar33 + lVar29 + 0x10);
        uStack_2c8 = *(undefined4 *)((long)puVar33 + lVar29 + 0x14);
        uStack_2e4 = 0;
        uStack_2ec = 0;
        uStack_2e8 = 0;
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        uStack_2bc = 0;
        uStack_2c4 = 0;
        uStack_2b4 = 0x3f800000;
        FUN_10835e5d0(&uStack_f0,&puStack_130,&uStack_2f0);
        uVar38 = CONCAT44(-fVar49,-fVar50);
        func_0x0001081816c4(alStack_330);
        alStack_330[0] = CONCAT44(alStack_330[0]._4_4_,extraout_w9_00);
        *(undefined8 *)(extraout_x8_08 + 0x18) = 0;
        *(undefined8 *)(extraout_x8_08 + 0x20) = 0;
        uStack_308 = 0x3f800000;
        uStack_2f8 = 0x3f80000000000000;
        uStack_300 = uVar38;
        FUN_10835e5d0(&uStack_398,&uStack_f0,alStack_330);
        func_0x00010815fcd0(uVar25,&uStack_398);
        lVar30 = lVar21 + lVar34;
        if (*(long *)(lVar30 + 0x18) != 0) {
          uVar51 = *(undefined4 *)((long)puVar33 + lVar29 + 0x30);
          func_0x0001081808fc(*(undefined4 *)((long)puVar33 + lVar29 + 0x24));
          uStack_398._0_4_ = (float)uVar51;
          func_0x0001081816f8();
        }
        if (*(long *)(lVar30 + 0x20) != 0) {
          uVar51 = *(undefined4 *)((long)puVar33 + lVar29 + 0x34);
          func_0x0001081808fc(*(undefined4 *)((long)puVar33 + lVar29 + 0x24));
          uStack_398._0_4_ = (float)uVar51;
          func_0x0001081816f8();
          func_0x000108180940(*(float *)((long)puVar33 + lVar29 + 0x2c) *
                              *(float *)(param_1 + 0x1d0),*(undefined8 *)(lVar30 + 0x20));
        }
        lVar21 = *(long *)(lVar21 + lVar34 + 0x28);
        if (lVar21 != 0) {
          uVar38 = *(undefined8 *)((long)puVar33 + lVar29 + 0x38);
          uStack_398._0_4_ = (float)uVar38 * 0.3;
          uStack_398._4_4_ = (float)((ulong)uVar38 >> 0x20) * 0.3;
          func_0x000108158fec(lVar21,&uStack_398);
        }
        fVar40 = fVar40 + fVar52 + fVar41;
        uVar36 = *puVar32;
        lVar29 = lVar29 + 0x4c;
        lVar34 = lVar34 + 0x38;
      }
    }
    func_0x000108181564(&puStack_3b8);
  }
  return;
}



/* Entry: 1081808ac; end: 1081808df;  */

void FUN_1081808ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x38;
    FUN_1081809e8();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 1081808e0; end: 10818095b;  */

undefined4 FUN_1081808e0(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 3) {
    return *(undefined4 *)(&UNK_10df06cb8 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1081808fc);
  (*pcVar1)();
}



/* Entry: 10818095c; end: 1081809b3;  */

/* WARNING: Possible PIC construction at 0x000108180970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108180974) */

long FUN_10818095c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  func_0x000108181624();
  if (lVar1 != 0) {
    *(long *)(param_1 + 8) = lVar1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081809b4; end: 1081809e7;  */

void FUN_1081809b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081815a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081809e8; end: 108180b17;  */

long FUN_1081809e8(long param_1)

{
  FUN_108158f6c(param_1 + 0x28);
  FUN_108158f04(param_1 + 0x20);
  FUN_108158f04(param_1 + 0x18);
  FUN_1081554f0(param_1 + 0x10);
  return param_1;
}



/* Entry: 108180b18; end: 108180b1f;  */

void FUN_108180b18(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001081816d4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xf;
    func_0x000108180b50();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108180b20; end: 108180bab;  */

void FUN_108180b20(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081816d4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x78;
    func_0x000108180b50();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108180bac; end: 108180bc3;  */

void FUN_108180bac(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108180bc4; end: 108180c1b;  */

void FUN_108180bc4(void)

{
  func_0x000108181630();
  func_0x000108180be8();
  return;
}



/* Entry: 108180c1c; end: 108180c23;  */

void FUN_108180c1c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001081816d4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -4;
    func_0x0001081298a0();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108180c24; end: 108180c53;  */

void FUN_108180c24(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081816d4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x0001081298a0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108180c54; end: 108180c9b;  */

void FUN_108180c54(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081815a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108180c9c; end: 108180ca7;  */

void FUN_108180c9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  
  func_0x0001081815bc();
  puVar5 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
  puVar6 = puVar1;
  for (puVar8 = puVar5; puVar8 != puVar2; puVar8 = puVar8 + 1) {
    piVar9 = (int *)*puVar8;
    if (piVar9 != (int *)0x0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *puVar6 = piVar9;
    puVar6 = puVar6 + 1;
  }
  for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
    func_0x000108180dd8();
  }
  param_2[1] = puVar1;
  uVar7 = *param_1;
  *param_1 = puVar1;
  param_1[1] = uVar7;
  param_2[1] = uVar7;
  uVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar7;
  uVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar7;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108180ca8; end: 108180d5b;  */

void FUN_108180ca8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  
  puVar5 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
  puVar6 = puVar1;
  for (puVar8 = puVar5; puVar8 != puVar2; puVar8 = puVar8 + 1) {
    piVar9 = (int *)*puVar8;
    if (piVar9 != (int *)0x0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *puVar6 = piVar9;
    puVar6 = puVar6 + 1;
  }
  for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
    func_0x000108180dd8();
  }
  param_2[1] = puVar1;
  uVar7 = *param_1;
  *param_1 = puVar1;
  param_1[1] = uVar7;
  param_2[1] = uVar7;
  uVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar7;
  uVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar7;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108180d5c; end: 108180eb7;  */

undefined1  [16] FUN_108180d5c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x000108180dd8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108180eb8; end: 108180ebf;  */

void FUN_108180eb8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001081816d4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -1;
    FUN_10817e79c();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108180ec0; end: 108180fcf;  */

void FUN_108180ec0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081816d4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -8;
    FUN_10817e79c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108180fd0; end: 108180ff3;  */

void FUN_108180fd0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081815a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108180ff4; end: 10818101b;  */

undefined8 * FUN_108180ff4(undefined8 *param_1)

{
  func_0x000108180b50(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818101c; end: 10818102f;  */

void FUN_10818101c(void)

{
  FUN_108180ff4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108181030; end: 10818103b;  */

void FUN_108181030(ulong param_1,ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  uint *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long alStack_168 [33];
  int iStack_60;
  undefined8 uStack_58;
  
  plVar6 = (long *)(param_5 + 0x30);
  uVar9 = 1;
  lVar11 = 0;
  func_0x0001081857bc();
  uStack_178 = 0;
  uStack_170 = 0;
  alStack_168[0] = 0;
  iStack_60 = 0;
  lVar10 = *plVar6;
  lVar2 = plVar6[1];
  uStack_58 = extraout_x8;
  do {
    uVar5 = lVar10 == lVar2;
    if ((bool)uVar5) {
      FUN_1081856f4();
      func_0x0001081857a8(uStack_58,uStack_178 & 0xffffffff,uStack_178._4_4_,uStack_170 & 0xffffffff
                          ,uStack_170._4_4_);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      plVar6 = alStack_168;
      FUN_1081856f4();
      func_0x000108185774();
      plVar7 = (long *)*plVar6;
      iVar8 = (int)uVar9;
      if ((int)plVar6[0x21] != iVar8) {
        if (0x10 < (int)plVar6[0x21]) {
          _free();
        }
        if (iVar8 < 0x11) {
          plVar7 = plVar6 + 1;
          if (iVar8 < 1) {
            plVar7 = (long *)0x0;
          }
        }
        else {
          plVar7 = (long *)(uVar9 & 0xffffffff);
          FUN_10840ffdc(plVar7,0x10);
        }
        *plVar6 = (long)plVar7;
        *(int *)(plVar6 + 0x21) = iVar8;
      }
      plVar6 = plVar7 + (long)iVar8 * 2;
      for (; plVar7 < plVar6; plVar7 = plVar7 + 2) {
        *plVar7 = 0;
        plVar7[1] = 0;
      }
      return;
    }
    uVar15 = param_2;
    if ((int)uVar9 == 1) {
LAB_10818352c:
      uVar16 = param_3;
      FUN_108183664(alStack_168,*(undefined4 *)(lVar10 + 0x18));
      FUN_1081836dc(lVar10,*(long *)(param_5 + 0x48) + lVar11 * 2,*(undefined4 *)(lVar10 + 0x18),
                    alStack_168[0],0);
      lVar12 = lVar11 << 3;
      for (uVar9 = 0; uVar9 < *(ulong *)(lVar10 + 0x18); uVar9 = uVar9 + 1) {
        if (iStack_60 <= (int)uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x108183644);
          (*pcVar3)();
        }
        puVar1 = (uint *)(*(long *)(param_5 + 0x60) + lVar12);
        param_1 = (ulong)*puVar1;
        uVar15 = (ulong)puVar1[1];
        func_0x0001081836ec(alStack_168[0] + (uVar9 & 0x7fffffff) * 0x10);
        uStack_190 = CONCAT44((int)uVar15,(int)param_1);
        uStack_188 = CONCAT44((int)param_4,(int)uVar16);
        func_0x000108185820();
        lVar12 = lVar12 + 8;
      }
      uVar9 = 1;
    }
    else {
      uVar16 = param_3;
      if ((int)uVar9 == 0) {
        uVar16 = param_4;
        FUN_108350a34(lVar10);
        fVar13 = (float)param_1;
        bVar4 = false;
        fVar14 = (float)param_2;
        fVar17 = (float)uVar16;
        if ((fVar13 < (float)param_3) && (bVar4 = false, !NAN(fVar14) && !NAN(fVar17))) {
          bVar4 = fVar14 < fVar17;
        }
        uVar15 = param_2;
        param_4 = uVar16;
        if (!bVar4) goto LAB_10818352c;
        uStack_190 = 0;
        uStack_188 = 0;
        FUN_10838eb84(&uStack_190,*(long *)(param_5 + 0x60) + lVar11 * 8,
                      *(undefined4 *)(lVar10 + 0x18));
        uVar15 = CONCAT44(fVar14,fVar13);
        param_1 = CONCAT44(fVar14 + (float)(uStack_190 >> 0x20),fVar13 + (float)uStack_190);
        uStack_188 = CONCAT44(fVar17 + (float)((ulong)uStack_188 >> 0x20),
                              (float)param_3 + (float)uStack_188);
        uStack_190 = param_1;
        func_0x000108185820();
        uVar9 = 0;
        param_4 = param_2;
      }
    }
    lVar11 = *(long *)(lVar10 + 0x18) + lVar11;
    lVar10 = lVar10 + 0x20;
    param_2 = uVar15;
    param_3 = uVar16;
  } while( true );
}



/* Entry: 10818103c; end: 108181087;  */

void FUN_10818103c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [16];
  
  func_0x0001081816b4();
  FUN_108110420(param_2,auStack_30,param_3);
  func_0x000108181664();
  return;
}



/* Entry: 108181088; end: 1081810b3;  */

void FUN_108181088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_1081836f0(param_1 + 0x30,param_2,&uStack_18,param_3);
  return;
}



/* Entry: 1081810b4; end: 1081810ff;  */

undefined1 * FUN_1081810b4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x0001081816b4();
  FUN_10837a610(*param_2,param_2[1],auStack_30);
  func_0x000108181664();
  return puVar1;
}



/* Entry: 108181100; end: 10818118b;  */

undefined8 * FUN_108181100(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte extraout_w8;
  
  puVar1 = param_1;
  FUN_10837e150();
  *param_1 = puVar1;
  func_0x00010837cd40();
  *(undefined1 *)((long)param_1 + 0xc) = 2;
  *(undefined1 *)((long)param_1 + 0xd) = 2;
  *(byte *)((long)param_1 + 0xe) = extraout_w8 & 0xf8;
  return param_1;
}



/* Entry: 10818118c; end: 108181197;  */

long * FUN_10818118c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x0001081815bc();
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar10[2] = param_2[2];
    puVar10[1] = uVar12;
    *puVar10 = uVar11;
    puVar10 = puVar10 + 3;
    plVar5 = param_1;
LAB_108181288:
    param_1[1] = (long)puVar10;
    return plVar5;
  }
  plVar7 = (long *)*param_1;
  lVar9 = (long)puVar10 - (long)plVar7;
  uVar1 = lVar9 / 0x18 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    uVar3 = (param_1[2] - (long)plVar7) / 0x18;
    uVar6 = uVar3 * 2;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x555555555555554 < uVar3) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar6 < 0xaaaaaaaaaaaaaab) {
      lVar4 = uVar6 * 0x18;
      __Znwm();
      puVar2 = (undefined8 *)(lVar4 + lVar9);
      uVar11 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar11;
      puVar2[2] = param_2[2];
      puVar10 = puVar2 + 3;
      plVar8 = puVar2 + (lVar9 / -0x18) * 3;
      plVar5 = plVar8;
      _memcpy(plVar8,plVar7,lVar9);
      *param_1 = (long)plVar8;
      param_1[1] = (long)puVar10;
      param_1[2] = lVar4 + uVar6 * 0x18;
      if (plVar7 != (long *)0x0) {
        __ZdlPv(plVar7);
        plVar5 = plVar7;
      }
      goto LAB_108181288;
    }
  }
  else {
    FUN_1081812a8();
  }
  func_0x000104bd35f4();
  func_0x0001081815bc();
  func_0x000108181624();
  FUN_1081812d8();
  return param_1;
}



/* Entry: 108181198; end: 1081812a7;  */

long * FUN_108181198(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar10[2] = param_2[2];
    puVar10[1] = uVar12;
    *puVar10 = uVar11;
    puVar10 = puVar10 + 3;
    plVar5 = param_1;
LAB_108181288:
    param_1[1] = (long)puVar10;
    return plVar5;
  }
  plVar7 = (long *)*param_1;
  lVar9 = (long)puVar10 - (long)plVar7;
  uVar1 = lVar9 / 0x18 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    uVar3 = (param_1[2] - (long)plVar7) / 0x18;
    uVar6 = uVar3 * 2;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x555555555555554 < uVar3) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar6 < 0xaaaaaaaaaaaaaab) {
      lVar4 = uVar6 * 0x18;
      __Znwm();
      puVar2 = (undefined8 *)(lVar4 + lVar9);
      uVar11 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar11;
      puVar2[2] = param_2[2];
      puVar10 = puVar2 + 3;
      plVar8 = puVar2 + (lVar9 / -0x18) * 3;
      plVar5 = plVar8;
      _memcpy(plVar8,plVar7,lVar9);
      *param_1 = (long)plVar8;
      param_1[1] = (long)puVar10;
      param_1[2] = lVar4 + uVar6 * 0x18;
      if (plVar7 != (long *)0x0) {
        __ZdlPv(plVar7);
        plVar5 = plVar7;
      }
      goto LAB_108181288;
    }
  }
  else {
    FUN_1081812a8();
  }
  func_0x000104bd35f4();
  func_0x0001081815bc();
  func_0x000108181624();
  FUN_1081812d8();
  return param_1;
}



/* Entry: 1081812a8; end: 1081812b3;  */

void FUN_1081812a8(void)

{
  func_0x0001081815bc();
  func_0x000108181624();
  FUN_1081812d8();
  return;
}



/* Entry: 1081812b4; end: 1081812d7;  */

void FUN_1081812b4(void)

{
  func_0x000108181624();
  FUN_1081812d8();
  return;
}



/* Entry: 1081812d8; end: 1081812ff;  */

void FUN_1081812d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081815a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108181300; end: 108181313;  */

void FUN_108181300(void)

{
  FUN_10818152c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108181314; end: 10818145b;  */

ulong FUN_108181314(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar12;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uVar11;
  
  FUN_10818989c();
  uVar8 = 0;
  uVar11 = param_1;
  while( true ) {
    uVar12 = (undefined4)param_2;
    uVar9 = (undefined4)uVar11;
    if (*(ulong *)(param_5 + 0x70) <= uVar8) break;
    lVar7 = *(long *)(*(long *)(param_5 + 0x60) + uVar8 * 0x18);
    FUN_1081834c8(lVar7,1);
    lVar5 = *(long *)(param_5 + 0x60);
    puVar4 = (undefined4 *)(*(long *)(param_5 + 0x68) + uVar8 * 0x48);
    *puVar4 = uVar9;
    puVar4[1] = uVar12;
    puVar4[2] = (int)param_3;
    puVar4[3] = (int)param_4;
    plStack_90 = *(long **)(lVar5 + uVar8 * 0x18 + 8);
    if (plStack_90 != (long *)0x0) {
      plVar1 = plStack_90 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plStack_90 + 0x28))(&uStack_88);
    lVar5 = *(long *)(param_5 + 0x68) + uVar8 * 0x48;
    *(undefined8 *)(lVar5 + 0x30) = uStack_68;
    *(undefined8 *)(lVar5 + 0x18) = uStack_80;
    *(undefined8 *)(lVar5 + 0x10) = uStack_88;
    *(undefined8 *)(lVar5 + 0x28) = uStack_70;
    *(undefined8 *)(lVar5 + 0x20) = uStack_78;
    param_2 = uStack_78;
    FUN_108155404(&plStack_90);
    if (*(undefined8 **)(lVar7 + 0x48) == *(undefined8 **)(lVar7 + 0x50)) {
      uVar6 = 0;
    }
    else {
      uVar6 = **(undefined8 **)(lVar7 + 0x48);
    }
    lVar5 = *(long *)(param_5 + 0x60);
    lVar7 = *(long *)(param_5 + 0x68) + uVar8 * 0x48;
    *(undefined8 *)(lVar7 + 0x38) = uVar6;
    uVar10 = *(uint *)(lVar5 + uVar8 * 0x18 + 0x10);
    uVar11 = (ulong)uVar10;
    *(uint *)(lVar7 + 0x40) = uVar10;
    uVar8 = uVar8 + 1;
  }
  return param_1;
}



/* Entry: 10818145c; end: 10818152b;  */

void FUN_10818145c(long param_1,undefined8 param_2)

{
  undefined1 auStack_178 [40];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [136];
  
  FUN_10818ccbc(&uStack_150);
  func_0x00010833b800(auStack_178,param_2);
  FUN_10818d01c(&uStack_150,param_1 + 0x18,auStack_178,1);
  FUN_1081660c4(auStack_c0,&uStack_150);
  FUN_10818cd40(&uStack_150);
  FUN_108189790(param_1,param_2,auStack_b8);
  uStack_150 = *(undefined8 *)(param_1 + 0x68);
  uStack_148 = *(undefined8 *)(param_1 + 0x70);
  uStack_140 = *(undefined4 *)(param_1 + 0x58);
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),param_2,&uStack_150);
  FUN_10818cd40(auStack_c0);
  return;
}



/* Entry: 10818152c; end: 10818158b;  */

void FUN_10818152c(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  long *plVar4;
  undefined8 uStack_38;
  
  func_0x000108180a98(param_1 + 0x68);
  func_0x000108180a70(param_1 + 0x60);
  FUN_10815cda0(param_1 + 0x50);
  lVar1 = param_1;
  func_0x000108189984();
  plVar4 = *(long **)(lVar1 + 0x38);
  for (plVar3 = *(long **)(lVar1 + 0x30); plVar3 != plVar4; plVar3 = plVar3 + 1) {
    uVar2 = 0;
    if (*plVar3 != 0) {
      do {
        func_0x000108189954();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar2;
    FUN_10818a6d4(param_1,&uStack_38);
    func_0x00010818994c();
  }
  FUN_10815640c((undefined8 *)(lVar1 + 0x30));
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818158c; end: 108181597;  */

void FUN_10818158c(long *param_1)

{
  func_0x0001081815bc();
                    /* WARNING: Could not recover jumptable at 0x0001081815a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 108181598; end: 108181747;  */

void FUN_108181598(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081815a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 108181748; end: 1081818af;  */

void FUN_108181748(undefined8 *param_1,ulong *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 != (ulong *)0x0) {
    FUN_108154b58(param_2,&UNK_10f47da33);
    FUN_108154e4c();
    if (param_2 != (ulong *)0x0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010818246c();
      FUN_108155f00();
      if (param_2 == (ulong *)0x0) {
        func_0x00010818246c();
        FUN_108154e4c();
        func_0x00010818247c();
        if (lStack_60 != 0) {
          FUN_1081818b0(&uStack_58,1);
          func_0x0001081824e0();
        }
        func_0x0001081824c8();
      }
      else {
        FUN_1081818b0(&uStack_58,*(undefined8 *)(*param_2 & 0xfffffffffffffff8));
        plVar2 = (long *)(*param_2 & 0xfffffffffffffff8);
        for (lVar3 = *plVar2 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
          plVar2 = plVar2 + 1;
          FUN_108154e4c(plVar2);
          FUN_108154e4c();
          func_0x00010818247c();
          if (lStack_60 != 0) {
            func_0x0001081824e0();
          }
          func_0x0001081824c8();
        }
      }
      uVar1 = 0xb8;
      __Znwm();
      FUN_108181c94();
      *param_1 = uVar1;
      func_0x000108180e60(&uStack_58);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1081818b0; end: 108181923;  */

void FUN_1081818b0(long *param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [72];
  
  plVar3 = param_1 + 2;
  if ((ulong)(*plVar3 - *param_1 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_1081820e8();
      func_0x00010818249c();
      func_0x0001081824d0();
      puVar5 = (undefined8 *)plVar3[1];
      puVar1 = (undefined8 *)plVar3[2];
      uVar6 = 0x3f800000;
      if (puVar5 != puVar1) {
        uVar6 = 0;
      }
      lVar2 = param_3[1];
      for (lVar4 = *param_3; lVar4 != lVar2; lVar4 = lVar4 + 0x4c) {
        *(undefined4 *)(lVar4 + 0x48) = uVar6;
      }
      for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        FUN_10817e448(*puVar5,param_2,param_3);
      }
      lVar2 = param_3[1];
      for (lVar4 = *param_3; lVar4 != lVar2; lVar4 = lVar4 + 0x4c) {
        FUN_1081819dc(auStack_d8,*(undefined4 *)(lVar4 + 0x48),plVar3,lVar4);
        _memcpy(lVar4,auStack_d8,0x48);
      }
      return;
    }
    FUN_10818217c();
    func_0x0001081824bc();
    func_0x00010818249c();
  }
  return;
}



/* Entry: 108181924; end: 1081819db;  */

void FUN_108181924(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [72];
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar5 = 0x3f800000;
  if (puVar4 != puVar1) {
    uVar5 = 0;
  }
  lVar2 = param_3[1];
  for (lVar3 = *param_3; lVar3 != lVar2; lVar3 = lVar3 + 0x4c) {
    *(undefined4 *)(lVar3 + 0x48) = uVar5;
  }
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    FUN_10817e448(*puVar4,param_2,param_3);
  }
  lVar2 = param_3[1];
  for (lVar3 = *param_3; lVar3 != lVar2; lVar3 = lVar3 + 0x4c) {
    FUN_1081819dc(auStack_88,*(undefined4 *)(lVar3 + 0x48),param_1,lVar3);
    _memcpy(lVar3,auStack_88,0x48);
  }
  return;
}



/* Entry: 1081819dc; end: 108181bb3;  */

void FUN_1081819dc(long param_1,float param_2,float param_3,float param_4,long param_5,long param_6)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  fVar3 = param_2;
  _memcpy(param_1,param_6,0x48);
  func_0x0001081637ec(param_5 + 0x20);
  param_3 = param_2 * param_3;
  param_4 = param_2 * param_4;
  FUN_108181bb4(param_2 * fVar3,param_1);
  fVar3 = param_2;
  FUN_108172504(param_5 + 0x80);
  FUN_108181bb4(param_1 + 0x18);
  func_0x0001081637ec(param_5 + 0x38);
  uVar5 = NEON_fmov(0xbf800000,4);
  uVar6 = NEON_fmov(0x3f800000,4);
  *(ulong *)(param_1 + 0xc) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) *
                (param_2 * (param_3 * 0.01 + (float)((ulong)uVar5 >> 0x20)) +
                (float)((ulong)uVar6 >> 0x20)),
                (float)*(undefined8 *)(param_1 + 0xc) *
                (param_2 * (fVar3 * 0.01 + (float)uVar5) + (float)uVar6));
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) * (param_2 * (param_4 * 0.01 + -1.0) + 1.0);
  uVar5 = *(undefined8 *)(param_5 + 0x8c);
  *(ulong *)(param_1 + 0x40) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x94) >> 0x20) * param_2 +
                (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),
                (float)*(undefined8 *)(param_5 + 0x94) * param_2 +
                (float)*(undefined8 *)(param_1 + 0x40));
  *(ulong *)(param_1 + 0x38) =
       CONCAT44((float)((ulong)uVar5 >> 0x20) * param_2 +
                (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                (float)uVar5 * param_2 + (float)*(undefined8 *)(param_1 + 0x38));
  *(ulong *)(param_1 + 0x28) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
                param_2 * (float)((ulong)*(undefined8 *)(param_5 + 0xa8) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x28) +
                param_2 * (float)*(undefined8 *)(param_5 + 0xa8));
  fVar3 = 0.0;
  if (0.0 <= param_2) {
    fVar3 = param_2;
  }
  bVar1 = *(byte *)(param_5 + 0xb0);
  if ((bVar1 & 1) != 0) {
    iVar2 = (int)param_5 + 0x50;
    FUN_108163830();
    func_0x00010818248c();
    *(int *)(param_1 + 0x30) = iVar2;
    bVar1 = *(byte *)(param_5 + 0xb0);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    iVar2 = (int)param_5 + 0x68;
    FUN_108163830();
    func_0x00010818248c();
    *(int *)(param_1 + 0x34) = iVar2;
    bVar1 = *(byte *)(param_5 + 0xb0);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    fVar4 = (float)NEON_ucvtf((uint)*(byte *)(param_6 + 0x33));
    *(char *)(param_1 + 0x33) =
         (char)(int)(fVar4 + fVar3 * (*(float *)(param_5 + 0xa0) * 2.55 - fVar4));
  }
  if ((bVar1 >> 3 & 1) != 0) {
    fVar4 = (float)NEON_ucvtf((uint)*(byte *)(param_6 + 0x37));
    *(char *)(param_1 + 0x37) =
         (char)(int)(fVar4 + fVar3 * (*(float *)(param_5 + 0xa4) * 2.55 - fVar4));
  }
  if ((bVar1 >> 4 & 1) != 0) {
    *(float *)(param_1 + 0x24) =
         *(float *)(param_6 + 0x24) +
         fVar3 * (*(float *)(param_5 + 0x9c) * 0.01 - *(float *)(param_6 + 0x24));
  }
  return;
}



/* Entry: 108181bb4; end: 108181bd3;  */

void FUN_108181bb4(float param_1,float param_2,float param_3,undefined8 *param_4)

{
  *param_4 = CONCAT44(param_2 + (float)((ulong)*param_4 >> 0x20),param_1 + (float)*param_4);
  *(float *)(param_4 + 1) = param_3 + *(float *)(param_4 + 1);
  return;
}



/* Entry: 108181bd4; end: 108181c93;  */

undefined4
FUN_108181bd4(undefined8 param_1,undefined8 param_2,float param_3,float param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  uVar2 = param_1;
  FUN_108182044();
  func_0x000108182440();
  uVar1 = uVar2;
  FUN_108182044(param_6);
  func_0x000108182440();
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  uVar1 = CONCAT44((float)((ulong)uVar1 >> 0x20) - fVar3,(float)uVar1 - (float)uVar2);
  func_0x000108182064(uVar1,param_1);
  func_0x000108182440();
  uVar2 = CONCAT44(fVar3 + (float)((ulong)uVar1 >> 0x20),(float)uVar2 + (float)uVar1);
  func_0x000108182064(uVar2,0x437f0000);
  fVar3 = (float)uVar2;
  func_0x000108182440();
  fStack_3c = fVar3 + 0.5;
  uStack_48 = 0x437f0000437f0000;
  uStack_50 = 0x437f0000437f0000;
  fStack_40 = (float)-(uint)(255.0 < fStack_3c);
  func_0x000108182078(&uStack_50);
  uVar2 = CONCAT44(-(uint)(0.0 < fStack_3c),-(uint)(0.0 < fStack_40));
  fVar3 = (float)-(uint)(0.0 < param_3);
  fVar4 = (float)-(uint)(0.0 < param_4);
  fStack_38 = param_3;
  fStack_34 = param_4;
  func_0x000108182078(uVar2,&fStack_40);
  func_0x000108182440();
  return CONCAT13((char)(int)fVar4,
                  CONCAT12((char)(int)fVar3,
                           CONCAT11((char)(int)(float)((ulong)uVar2 >> 0x20),(char)(int)(float)uVar2
                                   )));
}



/* Entry: 108181c94; end: 108182043;  */

undefined4 * FUN_108181c94(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined4 *puVar2;
  byte extraout_w8;
  byte extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  uint extraout_w8_05;
  byte extraout_w9;
  byte extraout_w9_00;
  byte extraout_w10;
  byte extraout_w10_00;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  undefined4 uVar8;
  undefined6 uVar9;
  undefined7 uVar10;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 1;
  puVar3 = (undefined8 *)(param_1 + 2);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 4) = param_2[1];
  *puVar3 = uVar1;
  *(undefined8 *)(param_1 + 6) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  uStack_78 = 0x42c8000042c80000;
  uStack_70 = 0x42c80000;
  puVar2 = param_1 + 0xe;
  func_0x0001072f8f08(puVar2,&uStack_78,3);
  *(undefined8 *)(param_1 + 0x29) = 0x42c80000;
  *(undefined8 *)(param_1 + 0x27) = 0x42c8000042c80000;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x2b] = 0;
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0x3f;
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182450();
  FUN_108163d6c();
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182418();
  func_0x0001081824f4();
  bVar4 = extraout_w10;
  if ((bool)in_ZR) {
    bVar4 = extraout_w9;
  }
  *(byte *)(param_1 + 0x2c) = bVar4 & 0x80 | extraout_w8 & 0x7f;
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182450();
  FUN_108162b98();
  func_0x0001081824f4();
  bVar4 = extraout_w10_00;
  if ((bool)in_ZR) {
    bVar4 = extraout_w9_00;
  }
  *(byte *)(param_1 + 0x2c) = bVar4 & 0x80 | extraout_w8_00 & 0x7f;
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182450();
  FUN_108163d6c();
  func_0x000108182424();
  func_0x00010818245c();
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182418();
  func_0x000108182424();
  func_0x00010818245c();
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182418();
  func_0x000108182424();
  func_0x00010818245c();
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182418();
  func_0x000108182424();
  func_0x00010818245c();
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182450();
  FUN_108163f1c();
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe | (byte)puVar2;
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182450();
  FUN_108163f1c();
  func_0x0001081824b0();
  func_0x0001081824a4(extraout_w8_01 & 0xfffffffd);
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182418();
  func_0x0001081824b0();
  func_0x0001081824a4(extraout_w8_02 & 0xfffffffb);
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182418();
  func_0x0001081824b0();
  func_0x0001081824a4(extraout_w8_03 & 0xfffffff7);
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182450();
  FUN_108161330();
  func_0x0001081824b0();
  func_0x0001081824a4(extraout_w8_04 & 0xffffffef);
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182450();
  FUN_108162b98();
  func_0x0001081824b0();
  func_0x0001081824a4(extraout_w8_05 & 0xffffffdf);
  func_0x000108182438();
  FUN_108154e4c();
  func_0x000108182450();
  FUN_108161330();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056d1ce4(param_1 + 8);
  func_0x000108180e60(puVar3);
  __Unwind_Resume(puVar2);
  uVar11 = (ulong)puVar2 & 0xffffffff;
  bVar4 = (byte)(uVar11 >> 8);
  uVar5 = (undefined1)(uVar11 >> 0x10);
  uVar6 = (undefined1)(uVar11 >> 0x18);
  uVar10 = CONCAT16(uVar6,(uint6)CONCAT14(uVar5,(uint)bVar4 << 0x10));
  uVar7 = CONCAT11((char)uVar11,(char)uVar11);
  uVar8 = CONCAT13(bVar4,(int3)CONCAT52((int5)((uint7)uVar10 >> 0x10),uVar7));
  uVar9 = CONCAT15(uVar5,(int5)CONCAT34((int3)((uint7)uVar10 >> 0x20),uVar8));
  uVar11 = CONCAT26((short)(CONCAT17(uVar6,CONCAT16(uVar6,uVar9)) >> 0x30),
                    CONCAT24((short)((uint6)uVar9 >> 0x20),
                             CONCAT22((short)((uint)uVar8 >> 0x10),uVar7))) & 0xff00ff00ff00ff;
  auVar12._2_2_ = 0;
  auVar12._0_2_ = (ushort)uVar11;
  auVar12._4_2_ = (short)(uVar11 >> 0x10);
  auVar12._6_2_ = 0;
  auVar12._8_2_ = (short)(uVar11 >> 0x20);
  auVar12._10_2_ = 0;
  auVar12._12_2_ = (short)(uVar11 >> 0x30);
  auVar12._14_2_ = 0;
  NEON_ucvtf(auVar12,4);
  return puVar2;
}



/* Entry: 108182044; end: 1081820e7;  */

void FUN_108182044(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined4 uVar5;
  undefined6 uVar6;
  undefined7 uVar7;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  uVar2 = (undefined1)((uint)param_1 >> 0x10);
  uVar3 = (undefined1)((uint)param_1 >> 0x18);
  uVar7 = CONCAT16(uVar3,(uint6)CONCAT14(uVar2,(uint)bVar1 << 0x10));
  uVar4 = CONCAT11((char)param_1,(char)param_1);
  uVar5 = CONCAT13(bVar1,(int3)CONCAT52((int5)((uint7)uVar7 >> 0x10),uVar4));
  uVar6 = CONCAT15(uVar2,(int5)CONCAT34((int3)((uint7)uVar7 >> 0x20),uVar5));
  uVar8 = CONCAT26((short)(CONCAT17(uVar3,CONCAT16(uVar3,uVar6)) >> 0x30),
                   CONCAT24((short)((uint6)uVar6 >> 0x20),
                            CONCAT22((short)((uint)uVar5 >> 0x10),uVar4))) & 0xff00ff00ff00ff;
  auVar9._2_2_ = 0;
  auVar9._0_2_ = (ushort)uVar8;
  auVar9._4_2_ = (short)(uVar8 >> 0x10);
  auVar9._6_2_ = 0;
  auVar9._8_2_ = (short)(uVar8 >> 0x20);
  auVar9._10_2_ = 0;
  auVar9._12_2_ = (short)(uVar8 >> 0x30);
  auVar9._14_2_ = 0;
  NEON_ucvtf(auVar9,4);
  return;
}



/* Entry: 1081820e8; end: 1081820fb;  */

void FUN_1081820e8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f47da40;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + (*plVar1 - plVar1[1]);
  FUN_1081821bc(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1081820fc; end: 10818217b;  */

void FUN_1081820fc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_1081821bc(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10818217c; end: 10818219f;  */

void FUN_10818217c(void)

{
  FUN_1081821a0();
  return;
}



/* Entry: 1081821a0; end: 1081821bb;  */

void FUN_1081821a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    ppuStack_58 = &puStack_40;
    ppuStack_50 = &puStack_38;
    puStack_38 = param_4;
    for (puVar3 = param_2; puVar3 != param_3; puVar3 = puVar3 + 1) {
      piVar4 = (int *)*puVar3;
      if (piVar4 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *puStack_38 = piVar4;
      puStack_38 = puStack_38 + 1;
    }
    uStack_48 = 1;
    uStack_60 = param_1;
    puStack_40 = param_4;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      FUN_10817e79c(param_2);
    }
    func_0x000108182260(&uStack_60);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 1081821bc; end: 1081822cf;  */

void FUN_1081821bc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar3 = param_2; puVar3 != param_3; puVar3 = puVar3 + 1) {
    piVar4 = (int *)*puVar3;
    if (piVar4 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *puStack_28 = piVar4;
    puStack_28 = puStack_28 + 1;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_10817e79c(param_2);
  }
  func_0x000108182260(&uStack_50);
  return;
}



/* Entry: 1081822d0; end: 1081822d7;  */

void FUN_1081822d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    FUN_10817e79c();
  }
  return;
}



/* Entry: 1081822d8; end: 10818235b;  */

void FUN_1081822d8(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    FUN_10817e79c();
  }
  return;
}



/* Entry: 10818235c; end: 108182417;  */

long FUN_10818235c(long *param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  
  lVar10 = param_1[1] - *param_1;
  uVar2 = (lVar10 >> 3) + 1;
  if (uVar2 >> 0x3d == 0) {
    plVar5 = param_1 + 2;
    uVar7 = *plVar5 - *param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      FUN_10818217c();
    }
    uVar9 = *param_2;
    *param_2 = 0;
    *(undefined8 *)((long)plVar5 + lVar10) = uVar9;
    func_0x0001081824bc();
    lVar10 = param_1[1];
    func_0x00010818249c();
    return lVar10;
  }
  FUN_1081820e8();
  func_0x00010818249c();
  func_0x0001081824d0();
  FUN_10815ca50();
  if (param_3 != (ulong *)0x0) {
    *(undefined1 *)(unaff_x22 + 0x29) = 1;
    uVar9 = *(undefined8 *)(lVar10 + 0x48);
    if ((*param_3 & 7) == 0) {
      pbVar6 = (byte *)((long)param_3 + 1);
    }
    else {
      pbVar6 = (byte *)((*param_3 & 0xfffffffffffffff8) + 8);
    }
    FUN_1083a3348(&ppuStack_100,pbVar6);
    piVar1 = (int *)(unaff_x22 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_10815d1d4(uVar9,&ppuStack_100,param_4,&stack0xffffffffffffff58);
    FUN_10815db6c(&stack0xffffffffffffff58);
    FUN_1083a3ca0(ppuStack_100);
  }
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_c8 = 1;
  uStack_bc = 0;
  uStack_c4 = 0;
  ppuStack_100 = &PTR_FUN_110a28a48;
  uStack_b0 = param_4;
  FUN_1081604c8();
  FUN_108160a4c(&ppuStack_100);
  return unaff_x22;
}



/* Entry: 108182418; end: 108182507;  */

long FUN_108182418(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  
  FUN_10815ca50();
  if (param_3 != (ulong *)0x0) {
    *(undefined1 *)(unaff_x22 + 0x29) = 1;
    uVar5 = *(undefined8 *)(unaff_x21 + 0x48);
    if ((*param_3 & 7) == 0) {
      pbVar4 = (byte *)((long)param_3 + 1);
    }
    else {
      pbVar4 = (byte *)((*param_3 & 0xfffffffffffffff8) + 8);
    }
    FUN_1083a3348(&ppuStack_a0,pbVar4);
    piVar1 = (int *)(unaff_x22 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10815d1d4(uVar5,&ppuStack_a0,param_4,&stack0xffffffffffffffb8);
    FUN_10815db6c(&stack0xffffffffffffffb8);
    FUN_1083a3ca0(ppuStack_a0);
  }
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_68 = 1;
  uStack_5c = 0;
  uStack_64 = 0;
  ppuStack_a0 = &PTR_FUN_110a28a48;
  uStack_50 = param_4;
  FUN_1081604c8();
  FUN_108160a4c(&ppuStack_a0);
  return unaff_x22;
}



/* Entry: 108182508; end: 108182a93;  */

void FUN_108182508(ulong *param_1,ulong param_2,long param_3)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined2 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  byte *pbVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  FUN_108154e4c();
  if (param_1 == (ulong *)0x0) {
    return;
  }
  FUN_108154b58();
  FUN_108158a5c();
  puVar2 = param_1;
  func_0x000108182b14();
  FUN_108158a5c();
  puVar3 = puVar2;
  func_0x000108182b14();
  func_0x00010815c6f8();
  puVar4 = puVar3;
  func_0x000108182b14();
  func_0x00010815c6f8();
  if (param_1 == (ulong *)0x0) {
    return;
  }
  if (puVar2 == (ulong *)0x0) {
    return;
  }
  if (puVar3 == (ulong *)0x0) {
    return;
  }
  if (puVar4 == (ulong *)0x0) {
    return;
  }
  if ((*param_1 & 7) == 0) {
    pbVar10 = (byte *)((long)param_1 + 1);
  }
  else {
    pbVar10 = (byte *)((*param_1 & 0xfffffffffffffff8) + 8);
  }
  FUN_108158a80(param_1);
  FUN_1083a3394(&uStack_68,pbVar10,param_1);
  lVar5 = param_2 + 0x98;
  FUN_108176d2c(lVar5,&uStack_68);
  FUN_1083a3ca0(CONCAT44(uStack_64,uStack_68));
  if (lVar5 == 0) {
    FUN_108159fb8(param_2,1,0,&UNK_10f47da4a);
    return;
  }
  if ((*puVar2 & 7) == 0) {
    pbVar10 = (byte *)((long)puVar2 + 1);
  }
  else {
    pbVar10 = (byte *)((*puVar2 & 0xfffffffffffffff8) + 8);
  }
  FUN_108158a80(puVar2);
  FUN_1083a36b8(param_3 + 8,pbVar10,puVar2);
  if ((*puVar3 & 7) == 3) {
    fVar11 = (float)*(int *)((long)puVar3 + 4);
  }
  else {
    fVar11 = *(float *)((long)puVar3 + 4);
  }
  *(float *)(param_3 + 0x10) = fVar11;
  if ((*puVar4 & 7) == 3) {
    fVar11 = (float)*(int *)((long)puVar4 + 4);
  }
  else {
    fVar11 = *(float *)((long)puVar4 + 4);
  }
  *(float *)(param_3 + 0x20) = fVar11;
  func_0x000108162618(param_3,lVar5 + 0x20);
  uVar6 = param_3 + 0x70;
  func_0x0001083a34dc(uVar6,lVar5);
  fVar11 = *(float *)(lVar5 + 0x18) * -0.01 * *(float *)(param_3 + 0x10);
  uVar14 = (ulong)(uint)fVar11;
  *(float *)(param_3 + 0x28) = fVar11;
  func_0x000108182b14();
  uStack_68 = 0;
  func_0x000108182b34();
  *(int *)(param_3 + 0x24) = (int)uVar14;
  func_0x000108182b14();
  func_0x000108182b08();
  uVar1 = uVar6 == 2;
  uVar9 = uVar6;
  if (1 < uVar6) {
    uVar9 = 2;
  }
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(&UNK_10df06ce0 + uVar9 * 4);
  func_0x000108182b14();
  FUN_108155f00();
  uVar9 = uVar14;
  if ((uVar6 != 0) && (func_0x000108182b3c(), uVar9 = uVar14, (bool)uVar1)) {
    uStack_68 = 0;
    uVar6 = extraout_x8 + 8;
    func_0x000108182b34();
    uVar9 = uVar14;
    func_0x000108182b1c();
    *(undefined4 *)(param_3 + 0x44) = 0;
    *(undefined4 *)(param_3 + 0x48) = 0;
    *(int *)(param_3 + 0x4c) = (int)uVar14;
    *(int *)(param_3 + 0x50) = (int)uVar9;
  }
  func_0x000108182b14();
  FUN_108155f00();
  if (uVar6 != 0) {
    func_0x000108182b3c();
    fVar11 = (float)uVar9;
    if ((bool)uVar1) {
      uStack_68 = 0;
      uVar6 = extraout_x8_00 + 8;
      func_0x000108182b34();
      fVar12 = fVar11;
      func_0x000108182b1c();
      uVar9 = CONCAT44(fVar12 + (float)((ulong)*(undefined8 *)(param_3 + 0x44) >> 0x20),
                       fVar11 + (float)*(undefined8 *)(param_3 + 0x44));
      *(ulong *)(param_3 + 0x4c) =
           CONCAT44(fVar12 + (float)((ulong)*(undefined8 *)(param_3 + 0x4c) >> 0x20),
                    fVar11 + (float)*(undefined8 *)(param_3 + 0x4c));
      *(ulong *)(param_3 + 0x44) = uVar9;
    }
  }
  uVar13 = (undefined4)uVar9;
  func_0x000108182b14();
  func_0x000108182b08();
  puVar7 = &UNK_10df06cec;
  if (uVar6 != 0) {
    puVar7 = &UNK_10df06ced;
  }
  *(undefined *)(param_3 + 0x3f) = *puVar7;
  func_0x000108182b14();
  func_0x000108182b08();
  uVar9 = uVar6;
  func_0x000108182b14();
  FUN_108154b1c();
  if (uVar6 <= uVar9) {
    uVar6 = uVar9;
  }
  if (1 < uVar6) {
    uVar6 = 2;
  }
  *(undefined *)(param_3 + 0x3d) = (&UNK_10df06cfe)[uVar6];
  func_0x000108182b14();
  uStack_68 = 0;
  func_0x000108182b34();
  *(undefined4 *)(param_3 + 0x14) = uVar13;
  func_0x000108182b14();
  uStack_68 = 0x7f7fffff;
  func_0x000108182b34();
  *(undefined4 *)(param_3 + 0x18) = uVar13;
  func_0x000108182b14();
  func_0x000108182b08();
  *(ulong *)(param_3 + 0x30) = uVar9;
  if (*(float *)(param_3 + 0x4c) <= *(float *)(param_3 + 0x44)) {
    uVar1 = 1;
  }
  else {
    func_0x000108182b54();
    uVar1 = extraout_w8;
  }
  *(undefined1 *)(param_3 + 0x3e) = uVar1;
  func_0x000108182b14();
  uStack_68 = 0xffffffff;
  func_0x000108155f24();
  if (-1 < (int)uVar9) {
    *(bool *)(param_3 + 0x3e) = (int)uVar9 == 0;
  }
  func_0x000108182b14();
  func_0x000108182b08();
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(&UNK_10df06cf0 + (ulong)(uVar9 != 0) * 4);
  fVar11 = *(float *)(param_3 + 0x44);
  if (*(float *)(param_3 + 0x4c) <= fVar11) {
    uVar1 = 1;
  }
  else {
    func_0x000108182b54();
    uVar1 = extraout_w8_00;
  }
  *(undefined1 *)(param_3 + 0x3c) = uVar1;
  func_0x000108182b14();
  func_0x00010815c80c();
  if ((int)uVar9 == 0) {
    func_0x000108182b14();
    func_0x00010815c80c();
    if ((int)uVar9 == 0) goto LAB_108182954;
    uVar6 = CONCAT44(uStack_64,uStack_68);
    if (2 < uVar6) {
      if (uVar6 == 3) {
        uVar8 = 0x103;
      }
      else {
        if (uVar6 != 4) {
          puVar7 = &UNK_10f47daa3;
          goto LAB_10818290c;
        }
        uVar8 = 0x203;
      }
      *(undefined2 *)(param_3 + 0x3c) = uVar8;
      goto LAB_108182954;
    }
  }
  else {
    uVar6 = CONCAT44(uStack_64,uStack_68);
    if (5 < uVar6) {
      puVar7 = &UNK_10f47da7c;
LAB_10818290c:
      FUN_108159fb8(param_2,0,0,puVar7);
      uVar9 = param_2;
      goto LAB_108182954;
    }
  }
  *(undefined *)(param_3 + 0x3c) = (&UNK_10df06cf8)[uVar6];
LAB_108182954:
  func_0x000108182b14();
  FUN_108155f00();
  FUN_108182a94();
  *(char *)(param_3 + 0x5e) = (char)uVar9;
  func_0x000108182b14();
  FUN_108155f00();
  FUN_108182a94();
  *(char *)(param_3 + 0x5f) = (char)uVar9;
  if ((int)uVar9 != 0) {
    func_0x000108182b14();
    FUN_1081572c0();
    *(float *)(param_3 + 0x1c) = fVar11;
    func_0x000108182b14();
    FUN_108158ab4();
    *(byte *)(param_3 + 0x5c) = (byte)uVar9 ^ 1;
    func_0x000108182b14();
    FUN_108154b1c();
    uVar9 = uVar9 - 1;
    if (1 < uVar9) {
      uVar9 = 2;
    }
    *(undefined *)(param_3 + 0x5d) = (&UNK_10df06cfe)[uVar9];
  }
  return;
}



/* Entry: 108182a94; end: 108182b07;  */

ulong FUN_108182a94(ulong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_10815c9b4(param_1,&uStack_38);
    if ((param_1 & 1) != 0) {
      uVar1 = SUB84(&uStack_38,0);
      FUN_108163830();
      *param_2 = uVar1;
    }
    func_0x0001056d1ce4(&uStack_38);
  }
  return param_1;
}



/* Entry: 108182b08; end: 108182b67;  */

undefined8 FUN_108182b08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack0000000000000028;
  undefined8 uStack_28;
  
  uStack0000000000000028 = 0;
  func_0x00010815c80c(param_1,&uStack_28);
  puVar1 = &uStack_28;
  if ((int)param_1 == 0) {
    puVar1 = &stack0x00000028;
  }
  return *puVar1;
}



/* Entry: 108182b68; end: 108182c0f;  */

long * FUN_108182b68(long *param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if ((param_4 != (long *)0x0) && (*(int *)(param_3 + 0x28) == 1)) {
    (**(code **)(*param_4 + 0x18))(&lStack_28,param_4);
    plVar1 = param_1;
    FUN_108183770();
    lVar2 = *plVar1;
    if (lVar2 != lStack_28) {
      *plVar1 = lStack_28;
      lStack_28 = lVar2;
    }
    FUN_1083a3ca0(lStack_28);
  }
  return param_1;
}



/* Entry: 108182c10; end: 10818310f;  */

ulong FUN_108182c10(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long *param_5
                   ,long *param_6,ulong *param_7)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  bool bVar11;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar12;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  float *pfVar13;
  float fVar14;
  ulong uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float *pfStack_820;
  undefined8 uStack_818;
  long *aplStack_810 [2];
  undefined8 uStack_800;
  float fStack_7f8;
  float fStack_7f4;
  byte bStack_7f0;
  undefined **ppuStack_7e8;
  undefined8 *puStack_7e0;
  long lStack_7d8;
  undefined4 uStack_7d0;
  undefined1 auStack_7c8 [20];
  byte bStack_7b4;
  undefined2 uStack_7b3;
  long lStack_7b0;
  long lStack_7a8;
  long *plStack_7a0;
  undefined1 *puStack_798;
  undefined1 auStack_790 [128];
  undefined1 *puStack_710;
  undefined1 auStack_708 [512];
  undefined1 *puStack_508;
  undefined1 auStack_500 [256];
  undefined1 auStack_400 [512];
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [256];
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  func_0x0001081857bc();
  pfVar10 = (float *)((uint *)*param_2 + 2);
  uVar2 = *(uint *)*param_2;
  ppuStack_7e8 = &PTR_FUN_110a2b1b0;
  uVar16 = 0xbf000000;
  if (*(int *)(param_3 + 4) != 1) {
    uVar16 = 0;
  }
  uStack_7d0 = 0xbf800000;
  if (*(int *)(param_3 + 4) != 2) {
    uStack_7d0 = uVar16;
  }
  uStack_800 = 0;
  pfStack_820 = pfVar10;
  puStack_7e0 = param_3;
  lStack_7d8 = param_4;
  uStack_78 = extraout_x8;
  if (*(long *)*param_3 != 0) {
    do {
      func_0x00010818573c();
      uStack_800 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_1083501dc(*(undefined4 *)(puStack_7e0 + 1),auStack_7c8,&uStack_800);
  func_0x0001081298a0(&uStack_800);
  lStack_7b0 = 0;
  if (*param_5 != 0) {
    do {
      func_0x00010818573c();
      lStack_7b0 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  lStack_7a8 = 0;
  param_6 = (long *)*param_6;
  if (param_6 != (long *)0x0) {
    plVar1 = param_6 + 1;
    do {
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_798 = auStack_790;
  puStack_710 = auStack_708;
  puStack_508 = auStack_500;
  puStack_200 = auStack_400;
  uStack_1f8 = 0x2000000000;
  uStack_1f0 = 0;
  puStack_e8 = auStack_1e8;
  uStack_e0 = 0x8000000000;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  uStack_80 = 0x3f800000;
  uStack_818 = 0;
  plStack_7a0 = param_6;
  if (lStack_7b0 != 0) {
    do {
      func_0x00010818573c();
      uStack_818 = extraout_x8_02;
    } while (extraout_w11_01 != 0);
  }
  (**(code **)(*param_6 + 0x18))(aplStack_810);
  func_0x00010818582c();
  if (param_6 != (long *)0x0) {
    func_0x00010818571c();
    plVar1 = aplStack_810[0];
    aplStack_810[0] = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      func_0x00010818571c();
    }
  }
  puVar8 = &uStack_818;
  FUN_10812cc0c();
  if (lStack_7a8 == 0) {
    FUN_1081fdeb4(aplStack_810);
    func_0x00010818582c();
    if (puVar8 != (undefined8 *)0x0) {
      func_0x00010818571c();
      plVar1 = aplStack_810[0];
      aplStack_810[0] = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        func_0x00010818571c();
      }
    }
    FUN_1081fd994(aplStack_810);
    plVar1 = plStack_7a0;
    plStack_7a0 = aplStack_810[0];
    aplStack_810[0] = (long *)0x0;
    FUN_1081842a8(plVar1);
    func_0x000108143710(aplStack_810);
  }
  pfVar9 = (float *)((long)pfVar10 + (ulong)uVar2);
  bStack_7b4 = bStack_7b4 & 0xdf | 0xc;
  uStack_7b3 = 1;
  pfVar13 = pfVar10;
  while (pfVar10 < pfVar9) {
    iVar7 = (int)&pfStack_820;
    FUN_10841051c(&pfStack_820,pfVar9);
    pfVar10 = pfStack_820;
    if (iVar7 == 0xd) {
      func_0x0001081857ec();
      pfVar10 = pfStack_820;
      pfVar13 = pfStack_820;
    }
  }
  func_0x0001081857ec();
  bVar11 = false;
  fVar17 = *(float *)(puStack_7e0 + 3);
  fVar14 = *(float *)((long)puStack_7e0 + 0x1c);
  if (*(float *)((long)puStack_7e0 + 0x1c) == 0.0) {
    fVar14 = uStack_c0._4_4_;
  }
  uVar15 = (ulong)(uint)fVar14;
  uStack_818 = CONCAT44(uStack_818._4_4_,fVar14);
  uStack_800 = uStack_800 & 0xffffffffffffff00;
  bStack_7f0 = 0;
  fVar18 = -fVar17;
  switch(*(undefined1 *)((long)puStack_7e0 + 0x24)) {
  case 0:
    bVar11 = false;
    fVar18 = fVar18 - fVar14;
    if (param_7 == (ulong *)0x0) goto LAB_108182fc0;
    goto code_r0x000108182f8c;
  default:
    goto LAB_108182f88;
  case 2:
  case 5:
    func_0x000108185790();
    func_0x0001081857cc();
    func_0x000108185768();
    if ((bStack_7f0 & 1) == 0) goto LAB_10818305c;
    fVar14 = *(float *)(lStack_7d8 + 4);
    fVar18 = uStack_800._4_4_;
    break;
  case 3:
  case 6:
    func_0x000108185790();
    func_0x0001081857cc();
    func_0x000108185768();
    if (bStack_7f0 != 1) goto LAB_10818305c;
    fVar14 = (*(float *)(lStack_7d8 + 4) + *(float *)(lStack_7d8 + 0xc)) * 0.5;
    fVar18 = (uStack_800._4_4_ + fStack_7f4) * 0.5;
    break;
  case 4:
  case 7:
    func_0x000108185790();
    func_0x0001081857cc();
    func_0x000108185768();
    if (bStack_7f0 != 1) goto LAB_10818305c;
    fVar14 = *(float *)(lStack_7d8 + 0xc);
    fVar18 = fStack_7f4;
  }
  uVar15 = (ulong)(uint)(fVar14 - fVar18);
  fVar18 = (fVar14 - fVar18) - fVar17;
  bVar11 = true;
LAB_108182f88:
  if (param_7 != (ulong *)0x0) {
code_r0x000108182f8c:
    if (!bVar11) {
      FUN_108185260(&ppuStack_7e8,&uStack_818,1);
      func_0x0001081857cc();
      func_0x000108185768();
      if (bStack_7f0 != 1) {
LAB_10818305c:
        func_0x000104bdc2c8();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x108183064);
        (*pcVar5)();
      }
    }
    uVar15 = CONCAT44(fStack_7f4 - (float)(uStack_800 >> 0x20),fStack_7f8 - (float)uStack_800);
    *param_7 = uVar15;
  }
LAB_108182fc0:
  lVar4 = lStack_90;
  lVar12 = lStack_a0;
  if (fVar18 == 0.0) {
    uVar6 = true;
  }
  else {
    for (; uVar6 = lVar12 == lStack_98, !(bool)uVar6; lVar12 = lVar12 + 0x78) {
      fVar14 = fVar18 + *(float *)(lVar12 + 100);
      uVar15 = (ulong)(uint)fVar14;
      *(float *)(lVar12 + 100) = fVar14;
    }
  }
  *param_1 = lStack_a0;
  param_1[1] = lStack_98;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_a0 = 0;
  param_1[2] = lVar4;
  param_1[3] = lStack_88;
  *(undefined4 *)(param_1 + 4) = uStack_80;
  FUN_108183c08(&ppuStack_7e8);
  func_0x0001081857a8(uStack_78);
  if ((bool)uVar6) {
    return uVar15;
  }
  ___stack_chk_fail();
  fVar14 = (float)uVar15;
  func_0x000108143710(aplStack_810);
  func_0x000108180ac0(&lStack_a0);
  FUN_1081842d4(pfVar13 + 0x1c0);
  func_0x0001081842fc(pfVar13 + 0x17a);
  func_0x000108184360(pfVar13 + 0xb8);
  func_0x000108184384(pfVar13 + 0x36);
  func_0x0001081843a8(pfVar13 + 0x14);
  func_0x000108143710(&plStack_7a0);
  lVar4 = lStack_7a8;
  lStack_7a8 = 0;
  if (lVar4 != 0) {
    func_0x00010818571c();
  }
  FUN_10812cc0c(&lStack_7b0);
  func_0x0001081298a0();
  func_0x000108185774();
  return (ulong)(uint)(fVar14 + *pfVar9);
}



/* Entry: 108183110; end: 108183133;  */

float FUN_108183110(float param_1,float *param_2)

{
  return param_1 + *param_2;
}



/* Entry: 108183134; end: 10818325f;  */

void FUN_108183134(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  char cVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [8];
  undefined8 auStack_58 [3];
  
  plVar3 = (long *)*param_6;
  (**(code **)(*plVar3 + 0x30))();
  FUN_108182b68(auStack_58,param_2,param_3,plVar3);
  cVar1 = *(char *)(param_3 + 0x25);
  if (cVar1 == '\x02') {
    func_0x000108185754(auStack_88,auStack_58[0]);
    FUN_108182c10();
    puVar4 = auStack_88;
    FUN_108183468(puVar4,auStack_60,param_4,param_3);
    if ((int)puVar4 == 0) {
      func_0x000108185754(param_1,auStack_58[0]);
      FUN_108183260();
    }
    else {
      FUN_108185354(param_1,auStack_88);
    }
    func_0x000108180ac0(auStack_88);
  }
  else if (cVar1 == '\x01') {
    func_0x000108185754(param_1,auStack_58[0]);
    FUN_108183260();
  }
  else {
    if (cVar1 != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108183240);
      (*pcVar2)();
    }
    func_0x000108185754(param_1,auStack_58[0]);
    FUN_108182c10();
  }
  func_0x0001081857d8();
  return;
}



/* Entry: 108183260; end: 108183467;  */

void FUN_108183260(long *param_1,undefined8 param_2,long param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 uStack_bc;
  float fStack_b4;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (((*param_4 < param_4[2]) && (param_4[1] < param_4[3])) && (0.0 < *(float *)(param_3 + 8))) {
    _memcpy(auStack_d0,param_3,0x50);
    fVar1 = 0.0;
    if (0.0 <= fStack_c4 / fStack_c8) {
      fVar1 = fStack_c4 / fStack_c8;
    }
    fVar2 = fVar1;
    if (fVar1 <= fStack_c0 / fStack_c8) {
      fVar2 = fStack_c0 / fStack_c8;
    }
    fVar9 = (float)NEON_fminnm(fVar2,0x3f800000);
    if (fVar9 <= fVar1) {
      fVar9 = fVar1;
    }
    lVar8 = 0x11;
    fVar11 = fVar1;
    fVar10 = fVar2;
    do {
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) {
        return;
      }
      fStack_c8 = fVar9 * *(float *)(param_3 + 8);
      uStack_bc = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) * fVar9,
                           (float)*(undefined8 *)(param_3 + 0x14) * fVar9);
      fStack_b4 = fVar9 * *(float *)(param_3 + 0x1c);
      uStack_d8 = 0;
      FUN_108182c10(&lStack_100,param_2,auStack_d0,param_4,param_5,param_6,&uStack_d8);
      plVar7 = &lStack_100;
      FUN_108183468(plVar7,&uStack_d8,param_4,auStack_d0);
      if (((ulong)plVar7 & 1) == 0) {
        fVar3 = fVar9 * 0.5;
        if (fVar9 * 0.5 <= fVar1) {
          fVar3 = fVar1;
        }
        fVar4 = (fVar11 + fVar9) * 0.5;
        fVar10 = fVar9;
        if (fVar11 == fVar1) {
          fVar4 = fVar3;
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_108180b18(param_1);
          __ZdlPv(*param_1);
        }
        lVar5 = lStack_f0;
        param_1[1] = lStack_f8;
        *param_1 = lStack_100;
        lStack_f8 = 0;
        lStack_f0 = 0;
        lStack_100 = 0;
        param_1[2] = lVar5;
        param_1[3] = lStack_e8;
        *(float *)(param_1 + 4) = fVar9;
        fVar3 = fVar9 + fVar9;
        if (fVar2 <= fVar9 + fVar9) {
          fVar3 = fVar2;
        }
        fVar4 = (fVar10 + fVar9) * 0.5;
        fVar11 = fVar9;
        if (fVar10 == fVar2) {
          fVar4 = fVar3;
        }
      }
      func_0x000108180ac0(&lStack_100);
      bVar6 = fVar4 != fVar9;
      fVar9 = fVar4;
    } while (bVar6);
  }
  return;
}



/* Entry: 108183468; end: 1081834c7;  */

bool FUN_108183468(long *param_1,float *param_2,float *param_3,long param_4)

{
  if ((((*(ulong *)(param_4 + 0x30) == 0) || (*param_1 == param_1[1])) ||
      ((ulong)(*(int *)(param_1[1] + -8) + 1) <= *(ulong *)(param_4 + 0x30))) &&
     (*param_2 <= param_3[2] - *param_3)) {
    return param_2[1] <= param_3[3] - param_3[1];
  }
  return false;
}



/* Entry: 1081834c8; end: 108183663;  */

void FUN_1081834c8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,long *param_5,
                  ulong param_6)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long alStack_168 [33];
  int iStack_60;
  undefined8 uStack_58;
  
  lVar9 = 0;
  plVar5 = param_5;
  func_0x0001081857bc();
  uStack_178 = 0;
  uStack_170 = 0;
  alStack_168[0] = 0;
  iStack_60 = 0;
  lVar8 = *plVar5;
  lVar1 = plVar5[1];
  uStack_58 = extraout_x8;
  do {
    uVar4 = lVar8 == lVar1;
    if ((bool)uVar4) {
      FUN_1081856f4();
      func_0x0001081857a8(uStack_58,uStack_178 & 0xffffffff,uStack_178._4_4_,uStack_170 & 0xffffffff
                          ,uStack_170._4_4_);
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      plVar5 = alStack_168;
      FUN_1081856f4();
      func_0x000108185774();
      plVar6 = (long *)*plVar5;
      iVar7 = (int)param_6;
      if ((int)plVar5[0x21] != iVar7) {
        if (0x10 < (int)plVar5[0x21]) {
          _free();
        }
        if (iVar7 < 0x11) {
          plVar6 = plVar5 + 1;
          if (iVar7 < 1) {
            plVar6 = (long *)0x0;
          }
        }
        else {
          plVar6 = (long *)(param_6 & 0xffffffff);
          FUN_10840ffdc(plVar6,0x10);
        }
        *plVar5 = (long)plVar6;
        *(int *)(plVar5 + 0x21) = iVar7;
      }
      plVar5 = plVar6 + (long)iVar7 * 2;
      for (; plVar6 < plVar5; plVar6 = plVar6 + 2) {
        *plVar6 = 0;
        plVar6[1] = 0;
      }
      return;
    }
    uVar14 = param_2;
    if ((int)param_6 == 1) {
LAB_10818352c:
      uVar15 = param_3;
      FUN_108183664(alStack_168,*(undefined4 *)(lVar8 + 0x18));
      FUN_1081836dc(lVar8,param_5[3] + lVar9 * 2,*(undefined4 *)(lVar8 + 0x18),alStack_168[0],0);
      lVar11 = lVar9 << 3;
      for (uVar10 = 0; uVar10 < *(ulong *)(lVar8 + 0x18); uVar10 = uVar10 + 1) {
        if (iStack_60 <= (int)uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x108183644);
          (*pcVar2)();
        }
        param_1 = (ulong)*(uint *)(param_5[6] + lVar11);
        uVar14 = (ulong)((uint *)(param_5[6] + lVar11))[1];
        func_0x0001081836ec(alStack_168[0] + (uVar10 & 0x7fffffff) * 0x10);
        uStack_190 = CONCAT44((int)uVar14,(int)param_1);
        uStack_188 = CONCAT44((int)param_4,(int)uVar15);
        func_0x000108185820();
        lVar11 = lVar11 + 8;
      }
      param_6 = 1;
    }
    else {
      uVar15 = param_3;
      if ((int)param_6 == 0) {
        uVar15 = param_4;
        FUN_108350a34(lVar8);
        fVar12 = (float)param_1;
        bVar3 = false;
        fVar13 = (float)param_2;
        fVar16 = (float)uVar15;
        if ((fVar12 < (float)param_3) && (bVar3 = false, !NAN(fVar13) && !NAN(fVar16))) {
          bVar3 = fVar13 < fVar16;
        }
        uVar14 = param_2;
        param_4 = uVar15;
        if (!bVar3) goto LAB_10818352c;
        uStack_190 = 0;
        uStack_188 = 0;
        FUN_10838eb84(&uStack_190,param_5[6] + lVar9 * 8,*(undefined4 *)(lVar8 + 0x18));
        uVar14 = CONCAT44(fVar13,fVar12);
        param_1 = CONCAT44(fVar13 + (float)(uStack_190 >> 0x20),fVar12 + (float)uStack_190);
        uStack_188 = CONCAT44(fVar16 + (float)((ulong)uStack_188 >> 0x20),
                              (float)param_3 + (float)uStack_188);
        uStack_190 = param_1;
        func_0x000108185820();
        param_6 = 0;
        param_4 = param_2;
      }
    }
    lVar9 = *(long *)(lVar8 + 0x18) + lVar9;
    lVar8 = lVar8 + 0x20;
    param_2 = uVar14;
    param_3 = uVar15;
  } while( true );
}



/* Entry: 108183664; end: 1081836db;  */

void FUN_108183664(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (*(uint *)(param_1 + 0x21) != param_2) {
    if (0x10 < (int)*(uint *)(param_1 + 0x21)) {
      _free();
    }
    if ((int)param_2 < 0x11) {
      puVar2 = param_1 + 1;
      if ((int)param_2 < 1) {
        puVar2 = (undefined8 *)0x0;
      }
    }
    else {
      puVar2 = (undefined8 *)(ulong)param_2;
      FUN_10840ffdc(puVar2,0x10);
    }
    *param_1 = puVar2;
    *(uint *)(param_1 + 0x21) = param_2;
  }
  puVar1 = puVar2 + (long)(int)param_2 * 2;
  for (; puVar2 < puVar1; puVar2 = puVar2 + 2) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  return;
}



/* Entry: 1081836dc; end: 1081836ef;  */

/* WARNING: Removing unreachable block (ram,0x0001083506f0) */
/* WARNING: Removing unreachable block (ram,0x0001083506f8) */

ulong FUN_1081836dc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 *param_6,int param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar15;
  float fVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long lStack_538;
  undefined8 auStack_530 [8];
  undefined1 auStack_4f0 [160];
  float fStack_450;
  undefined8 uStack_448;
  undefined8 auStack_3e8 [5];
  long lStack_3c0;
  float fStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  byte bStack_3ac;
  char cStack_3ab;
  undefined1 uStack_3aa;
  long alStack_3a8 [24];
  undefined1 auStack_2e8 [160];
  undefined8 uStack_248;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 auStack_1e8 [40];
  undefined8 auStack_1c0 [24];
  long alStack_100 [20];
  uint uStack_60;
  undefined8 uStack_58;
  
  pcVar13 = (code *)0x0;
  puVar14 = param_8;
  func_0x000108350c64();
  uStack_58 = extraout_x8;
  FUN_1083a27f8(alStack_100);
  FUN_1083a2c80(auStack_1c0,alStack_100);
  lVar11 = (long)param_7;
  puVar7 = auStack_1c0;
  FUN_1083a2cd4(puVar7,param_6,lVar11);
  iVar10 = (int)lVar11;
  lVar11 = (long)param_6 << 3;
  if (param_8 != (undefined8 *)0x0) {
    param_1 = (ulong)uStack_60;
    uVar17 = param_1;
    func_0x00010815f6c0(auStack_1e8);
    for (; lVar11 != 0; lVar11 = lVar11 + -8) {
      FUN_10835060c(*puVar7);
      puVar1 = param_8 + 2;
      uStack_1f8 = (undefined4)param_1;
      uStack_1f4 = (undefined4)uVar17;
      uStack_1f0 = (undefined4)param_3;
      uStack_1ec = (undefined4)param_4;
      puVar12 = &uStack_1f8;
      FUN_108364ec0(auStack_1e8,param_8,puVar12);
      iVar10 = (int)puVar12;
      puVar7 = puVar7 + 1;
      param_6 = param_8;
      param_8 = puVar1;
    }
  }
  FUN_1083a2cb4(auStack_1c0);
  func_0x0001083a261c();
  func_0x000108350c50(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1083a2cb4(auStack_1c0);
  plVar8 = alStack_100;
  func_0x0001083a261c();
  func_0x000108350c74();
  func_0x000108350c64();
  lStack_3c0 = *plVar8;
  if (lStack_3c0 != 0) {
    piVar2 = (int *)(lStack_3c0 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar15 = *(undefined8 *)((long)plVar8 + 0xf);
  uStack_3b0 = (undefined4)((ulong)uVar15 >> 8);
  bStack_3ac = (byte)((ulong)uVar15 >> 0x28);
  cStack_3ab = (char)((ulong)uVar15 >> 0x30);
  fStack_3b8 = (float)plVar8[1];
  fVar16 = fStack_3b8;
  uStack_3b4 = (undefined4)((ulong)plVar8[1] >> 0x20);
  bStack_3ac = bStack_3ac & 0xf8 | 4;
  uStack_3aa = 0;
  uVar6 = cStack_3ab == '\x02';
  if ((bool)uVar6) {
    cStack_3ab = '\x01';
  }
  fStack_3b8 = 64.0;
  uVar17 = (ulong)(uint)(fVar16 * 0.015625);
  uStack_248 = extraout_x8_00;
  func_0x00010815f6c0(auStack_3e8,uVar17,uVar17);
  FUN_1083a2a5c(auStack_2e8,&lStack_3c0,0);
  FUN_1083a2d64(alStack_3a8,auStack_2e8);
  plVar8 = alStack_3a8;
  FUN_1083a2db8(plVar8,param_6,(long)iVar10);
  for (lVar11 = (long)param_6 << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
    lVar3 = *(long *)(*plVar8 + 0x10) + 8;
    uVar6 = *(char *)(*(long *)(*plVar8 + 0x10) + 0x18) == '\0';
    if ((bool)uVar6) {
      lVar3 = 0;
    }
    param_6 = auStack_3e8;
    (*pcVar13)(lVar3,param_6,puVar14);
    plVar8 = plVar8 + 1;
  }
  FUN_1083a2d98(alStack_3a8);
  func_0x0001083a261c(auStack_2e8);
  func_0x0001081298a0();
  func_0x000108350c50(uStack_248);
  if ((bool)uVar6) {
    return uVar17;
  }
  ___stack_chk_fail();
  FUN_1083a2d98(alStack_3a8);
  func_0x0001083a261c(auStack_2e8);
  func_0x0001081298a0(&lStack_3c0);
  func_0x000108350c74();
  func_0x000108350c64();
  uStack_448 = extraout_x8_01;
  FUN_1083a27f8(auStack_4f0);
  puVar7 = auStack_530;
  if (param_6 != (undefined8 *)0x0) {
    puVar7 = param_6;
  }
  FUN_1083a2c54(&lStack_538,auStack_4f0);
  uVar18 = *(undefined8 *)(lStack_538 + 0x24);
  uVar15 = *(undefined8 *)(lStack_538 + 0x1c);
  uVar19 = *(undefined8 *)(lStack_538 + 0x2c);
  uVar21 = *(undefined8 *)(lStack_538 + 0x44);
  uVar20 = *(undefined8 *)(lStack_538 + 0x3c);
  uVar23 = *(undefined8 *)(lStack_538 + 0x14);
  uVar22 = *(undefined8 *)(lStack_538 + 0xc);
  puVar7[5] = *(undefined8 *)(lStack_538 + 0x34);
  puVar7[4] = uVar19;
  puVar7[7] = uVar21;
  puVar7[6] = uVar20;
  puVar7[1] = uVar23;
  *puVar7 = uVar22;
  puVar7[3] = uVar18;
  puVar7[2] = uVar15;
  fVar16 = fStack_450;
  if (fStack_450 != 1.0) {
    FUN_1083509f0(puVar7);
  }
  uVar6 = param_6 == (undefined8 *)0x0;
  puVar7 = auStack_530;
  if (!(bool)uVar6) {
    puVar7 = param_6;
  }
  fVar25 = *(float *)(puVar7 + 1);
  fVar24 = *(float *)((long)puVar7 + 0xc);
  fVar26 = *(float *)((long)puVar7 + 0x14);
  FUN_1083145d8(&lStack_538);
  func_0x0001083a261c(auStack_4f0);
  func_0x000108350c50(uStack_448);
  if ((bool)uVar6) {
    return (ulong)(uint)((fVar24 - fVar25) + fVar26);
  }
  ___stack_chk_fail();
  puVar9 = auStack_4f0;
  func_0x0001083a261c();
  func_0x000108350c74();
  *(ulong *)(puVar9 + 0xc) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar9 + 0xc) >> 0x20) * fVar16,
                (float)*(undefined8 *)(puVar9 + 0xc) * fVar16);
  *(ulong *)(puVar9 + 4) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar9 + 4) >> 0x20) * fVar16,
                (float)*(undefined8 *)(puVar9 + 4) * fVar16);
  *(ulong *)(puVar9 + 0x1c) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar9 + 0x1c) >> 0x20) * fVar16,
                (float)*(undefined8 *)(puVar9 + 0x1c) * fVar16);
  *(ulong *)(puVar9 + 0x14) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar9 + 0x14) >> 0x20) * fVar16,
                (float)*(undefined8 *)(puVar9 + 0x14) * fVar16);
  *(ulong *)(puVar9 + 0x2c) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar9 + 0x2c) >> 0x20) * fVar16,
                (float)*(undefined8 *)(puVar9 + 0x2c) * fVar16);
  *(ulong *)(puVar9 + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar9 + 0x24) >> 0x20) * fVar16,
                (float)*(undefined8 *)(puVar9 + 0x24) * fVar16);
  *(ulong *)(puVar9 + 0x34) =
       CONCAT44(fVar16 * (float)((ulong)*(undefined8 *)(puVar9 + 0x34) >> 0x20),
                fVar16 * (float)*(undefined8 *)(puVar9 + 0x34));
  fVar24 = *(float *)(puVar9 + 0x3c);
  *(float *)(puVar9 + 0x3c) = fVar16 * fVar24;
  return (ulong)(uint)(fVar16 * fVar24);
}



/* Entry: 1081836f0; end: 10818376f;  */

void FUN_1081836f0(long *param_1)

{
  long lVar1;
  undefined4 *unaff_x20;
  long lVar2;
  
  func_0x000100b56a58();
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_108340284(*unaff_x20,unaff_x20[1]);
  }
  return;
}



/* Entry: 108183770; end: 10818380f;  */

void FUN_108183770(long *param_1)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    func_0x0001081837b0(param_1 + 1,*param_1);
    plVar1 = param_1 + 1;
    FUN_108183810();
    *param_1 = (long)plVar1;
  }
  plVar1 = param_1 + 1;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((char)plVar1[1] == '\x01') {
    FUN_1083a3c7c();
  }
  return;
}



/* Entry: 108183810; end: 108183847;  */

void FUN_108183810(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1083a3c7c();
  }
  return;
}



/* Entry: 108183848; end: 108183c07;  */

void FUN_108183848(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int extraout_w11;
  undefined8 uVar7;
  float fVar8;
  long *plStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  long *plStack_e8;
  long *plStack_e0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined1 uStack_6c;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  if (param_2 == param_3) {
    FUN_108183c88(param_1);
    FUN_108184084(param_1);
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x38) & 1) == 0) {
      return;
    }
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    plStack_e0 = (long *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_80 = **(undefined8 **)(param_1 + 0x10);
    uStack_78 = 0;
    iStack_70 = *(int *)(param_1 + 0x728) + -1;
    uStack_6c = 0;
    FUN_108184d0c(param_1 + 0x748,&plStack_e0);
    func_0x000108180b50(&plStack_e0);
    return;
  }
  lVar6 = *(long *)(param_1 + 8);
  if (*(char *)(lVar6 + 0x24) == '\0') {
    fVar8 = *(float *)(lVar6 + 0x1c);
    if (fVar8 == 0.0) {
      fVar8 = *(float *)(param_1 + 0x72c);
    }
    if ((*(float *)(*(long *)(param_1 + 0x10) + 0xc) - *(float *)(*(long *)(param_1 + 0x10) + 4)) +
        fVar8 < *(float *)(param_1 + 0x71c)) {
      return;
    }
  }
  if (*(char *)(lVar6 + 0x26) == '\x01') {
    fVar8 = 3.4028235e+38;
  }
  else {
    fVar8 = (*(float **)(param_1 + 0x10))[2] - **(float **)(param_1 + 0x10);
  }
  cVar1 = *(char *)(lVar6 + 0x27);
  param_3 = param_3 - param_2;
  if (*(long *)(lVar6 + 0x40) == 0) {
    FUN_1081fd3e8(&plStack_e0,param_2,param_3);
  }
  else {
    plVar3 = (long *)0x20;
    __Znwm();
    FUN_108185138();
    plStack_e0 = plVar3;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    FUN_108350e94(auStack_f0);
  }
  else {
    do {
      func_0x00010818573c();
    } while (extraout_w11 != 0);
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x48);
  plVar4 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar4 + 0x28))();
  plVar3 = plStack_e0;
  FUN_1081fd2dc(&plStack_e8,param_2,param_3,param_1 + 0x20,auStack_f0,uVar7,
                (ulong)plVar4 & 0xffffffff,plStack_e0);
  bVar2 = cVar1 != '\0';
  FUN_10812cc0c(auStack_f0);
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
            (&puStack_f8,*(long **)(param_1 + 0x48),param_2,param_3,bVar2);
  if (puStack_f8 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x18;
    __Znwm();
    *(undefined1 *)(puVar5 + 2) = 0;
    *puVar5 = &PTR_FUN_110a2b2b0;
    puVar5[1] = param_3;
    *(bool *)((long)puVar5 + 0x11) = bVar2;
    puStack_f8 = puVar5;
  }
  (**(code **)(**(long **)(param_1 + 0x48) + 0x28))
            (&plStack_100,*(long **)(param_1 + 0x48),param_2,param_3,0x5a7a7a7a);
  if (plStack_100 == (long *)0x0) {
    plVar4 = (long *)0x18;
    __Znwm();
    *(undefined1 *)(plVar4 + 2) = 0;
    *plVar4 = (long)&PTR_DAT_110a2b348;
    plVar4[1] = param_3;
    *(undefined4 *)((long)plVar4 + 0x14) = 0x5a7a7a7a;
    plStack_100 = plVar4;
  }
  plVar4 = plStack_100;
  if (((plStack_e8 != (long *)0x0) && (puStack_f8 != (undefined8 *)0x0)) && (plVar3 != (long *)0x0))
  {
    *(long *)(param_1 + 0x738) = param_2;
    *(undefined8 *)(param_1 + 0x740) = param_4;
    (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
              (fVar8,*(long **)(param_1 + 0x40),param_2,param_3,plStack_e8,puStack_f8,plStack_100,
               plVar3,0,0,param_1);
    plVar4 = plStack_100;
    *(undefined8 *)(param_1 + 0x738) = 0;
    plStack_100 = (long *)0x0;
    if (plVar4 == (long *)0x0) goto LAB_108183b18;
  }
  plStack_100 = (long *)0x0;
  (**(code **)(*plVar4 + 8))(plVar4);
LAB_108183b18:
  puVar5 = puStack_f8;
  puStack_f8 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    func_0x00010818571c();
  }
  if (plStack_e8 != (long *)0x0) {
    (**(code **)(*plStack_e8 + 8))(plStack_e8);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}



/* Entry: 108183c08; end: 108183c73;  */

long FUN_108183c08(long param_1)

{
  func_0x000108180ac0(param_1 + 0x748);
  FUN_1081842d4(param_1 + 0x700);
  func_0x0001081842fc(param_1 + 0x5e8);
  func_0x000108184360(param_1 + 0x2e0);
  func_0x000108184384(param_1 + 0xd8);
  func_0x0001081843a8(param_1 + 0x50);
  func_0x000108143710(param_1 + 0x48);
  FUN_10818427c(param_1 + 0x40);
  FUN_10812cc0c(param_1 + 0x38);
  func_0x0001081298a0(param_1 + 0x20);
  return param_1;
}



/* Entry: 108183c74; end: 108183c87;  */

void FUN_108183c74(void)

{
  FUN_108183c08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108183c88; end: 108183d4b;  */

void FUN_108183c88(long param_1)

{
  func_0x0001081843cc(param_1 + 0x50);
  func_0x0001081843f0(param_1 + 0xd8);
  func_0x000108184414(param_1 + 0x2e0);
  func_0x000108184328(param_1 + 0x5e8);
  *(undefined4 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5f8) = 0;
  *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)(param_1 + 0x718);
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  return;
}



/* Entry: 108183d4c; end: 108183d4f;  */

void FUN_108183d4c(void)

{
  return;
}



/* Entry: 108183d50; end: 10818406f;  */

void FUN_108183d50(long *param_1,long param_2,undefined8 *param_3)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long lStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar13 = *(long *)(param_2 + 0x5f8);
  uVar10 = param_3[3] + lVar13;
  *(ulong *)(param_2 + 0x5f8) = uVar10;
  if (uVar10 < 0x41) {
    if (uVar10 == 0) {
      func_0x0001081843cc(param_2 + 0x50);
    }
    else {
      lVar7 = *(long *)(param_2 + 0x50);
      if (lVar7 != param_2 + 0x58) goto LAB_108183dd0;
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x50);
    if (lVar7 == param_2 + 0x58) {
      FUN_10840ffdc(uVar10,2);
      *(ulong *)(param_2 + 0x50) = uVar10;
      _memcpy();
    }
    else {
LAB_108183dd0:
      FUN_10840fff4(lVar7,uVar10,2);
      *(long *)(param_2 + 0x50) = lVar7;
    }
  }
  uVar10 = *(ulong *)(param_2 + 0x5f8);
  if (uVar10 < 0x41) {
    if (uVar10 == 0) {
      func_0x0001081843f0(param_2 + 0xd8);
    }
    else {
      lVar7 = *(long *)(param_2 + 0xd8);
      if (lVar7 != param_2 + 0xe0) goto LAB_108183e38;
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0xd8);
    if (lVar7 == param_2 + 0xe0) {
      FUN_10840ffdc(uVar10,8);
      *(ulong *)(param_2 + 0xd8) = uVar10;
      _memcpy();
    }
    else {
LAB_108183e38:
      FUN_10840fff4(lVar7,uVar10,8);
      *(long *)(param_2 + 0xd8) = lVar7;
    }
  }
  puVar1 = (ulong *)(param_2 + 0x2e0);
  uVar10 = *(ulong *)(param_2 + 0x5f8);
  if (uVar10 < 0x41) {
    if (uVar10 == 0) {
      func_0x000108184414(puVar1);
      goto LAB_108183ebc;
    }
    uVar8 = *(ulong *)(param_2 + 0x2e0);
    if (uVar8 == param_2 + 0x2e8U) goto LAB_108183ebc;
  }
  else {
    uVar8 = *(ulong *)(param_2 + 0x2e0);
    if (uVar8 == param_2 + 0x2e8U) {
      FUN_10840ffdc(uVar10,4);
      *puVar1 = uVar10;
      _memcpy();
      goto LAB_108183ebc;
    }
  }
  FUN_10840fff4(uVar8,uVar10,4);
  *puVar1 = uVar8;
LAB_108183ebc:
  plVar11 = (long *)*param_3;
  lVar7 = *plVar11;
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar12 = *(undefined8 *)((long)plVar11 + 0xf);
  uStack_68 = (undefined7)plVar11[1];
  uStack_61 = (undefined1)uVar12;
  uStack_60 = (undefined7)((ulong)uVar12 >> 8);
  lStack_58 = param_3[3];
  iVar3 = *(int *)(param_2 + 0x5f0);
  if (iVar3 < (int)(*(uint *)(param_2 + 0x5f4) >> 1)) {
    plVar11 = (long *)(*(long *)(param_2 + 0x5e8) + (long)iVar3 * 0x20);
    lStack_70 = 0;
    *plVar11 = lVar7;
    *(undefined8 *)((long)plVar11 + 0xf) = uVar12;
    plVar11[1] = CONCAT17(uStack_61,uStack_68);
    plVar11[3] = lStack_58;
  }
  else {
    lStack_70 = lVar7;
    if (iVar3 == 0x7fffffff) {
      func_0x00010bdb1a68();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x108184060);
      (*pcVar6)();
    }
    uStack_48 = 0x7fffffff;
    uStack_50 = 0x20;
    puVar9 = &uStack_50;
    uVar10 = (ulong)(iVar3 + 1);
    FUN_10840fe24(0x3ff8000000000000);
    lVar7 = lStack_70;
    plVar11 = puVar9 + (long)*(int *)(param_2 + 0x5f0) * 4;
    lStack_70 = 0;
    *plVar11 = lVar7;
    *(ulong *)((long)plVar11 + 0xf) = CONCAT71(uStack_60,uStack_61);
    plVar11[1] = CONCAT17(uStack_61,uStack_68);
    plVar11[3] = lStack_58;
    if (*(int *)(param_2 + 0x5f0) != 0) {
      _memcpy(puVar9,*(undefined8 *)(param_2 + 0x5e8),(long)*(int *)(param_2 + 0x5f0) << 5);
    }
    if ((*(byte *)(param_2 + 0x5f4) & 1) != 0) {
      _free(*(undefined8 *)(param_2 + 0x5e8));
    }
    uVar10 = uVar10 >> 5;
    if (0x7ffffffe < uVar10) {
      uVar10 = 0x7fffffff;
    }
    *(undefined8 **)(param_2 + 0x5e8) = puVar9;
    *(uint *)(param_2 + 0x5f4) = (int)uVar10 << 1 | 1;
  }
  *(int *)(param_2 + 0x5f0) = *(int *)(param_2 + 0x5f0) + 1;
  func_0x0001081298a0(&lStack_70);
  fVar14 = *(float *)(param_2 + 0x18);
  fVar15 = *(float *)(param_2 + 0x720);
  fVar16 = (*(float **)(param_2 + 0x10))[2];
  fVar17 = **(float **)(param_2 + 0x10);
  lVar7 = *(long *)(param_2 + 0xd8);
  *param_1 = *(long *)(param_2 + 0x50) + lVar13 * 2;
  param_1[1] = lVar7 + lVar13 * 8;
  lVar7 = *(long *)(param_2 + 0x2e0);
  param_1[2] = 0;
  param_1[3] = lVar7 + lVar13 * 4;
  param_1[4] = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x710) >> 0x20) + 0.0,
                        fVar14 * (fVar15 - (fVar16 - fVar17)) +
                        (float)*(undefined8 *)(param_2 + 0x710));
  return;
}



/* Entry: 108184070; end: 108184083;  */

void FUN_108184070(long param_1,long param_2)

{
  *(ulong *)(param_1 + 0x710) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x710) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0xc) + (float)*(undefined8 *)(param_1 + 0x710));
  return;
}



/* Entry: 108184084; end: 10818424b;  */

void FUN_108184084(long param_1)

{
  uint uVar1;
  byte bVar2;
  float *pfVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  lVar5 = *(long *)(param_1 + 8);
  *(float *)(param_1 + 0x71c) = *(float *)(lVar5 + 0x14) + *(float *)(param_1 + 0x71c);
  uVar1 = *(uint *)(param_1 + 0x5f0);
  uVar6 = (ulong)uVar1;
  if ((uVar1 != 0) && (*(int *)(lVar5 + 0x20) != 0)) {
    lVar7 = 0;
    lVar8 = *(long *)(*(long *)(param_1 + 0x5e8) + (long)(int)uVar1 * 0x20 + -8);
    while ((lVar9 = lVar8, lVar7 != lVar8 &&
           (uVar1 = *(int *)(param_1 + 0x5f8) + ~(uint)lVar7,
           bVar2 = *(byte *)(*(long *)(param_1 + 0x738) +
                            (ulong)*(uint *)(*(long *)(param_1 + 0x2e0) +
                                            (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 |
                                            (ulong)uVar1 << 2))), lVar9 = lVar7,
           bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0))) {
      lVar7 = lVar7 + 1;
    }
    if (lVar9 != 0) {
      FUN_108184b60(param_1 + 0x700,lVar9);
      if (*(int *)(param_1 + 0x5f0) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10818424c);
        (*pcVar4)();
      }
      func_0x00010812f174(*(long *)(param_1 + 0x5e8) + (long)*(int *)(param_1 + 0x5f0) * 0x20 +
                          -0x20,*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x5f8) * 2 +
                                lVar9 * -2,lVar9,*(undefined8 *)(param_1 + 0x700));
      fVar10 = 0.0;
      pfVar3 = *(float **)(param_1 + 0x700);
      for (lVar5 = (long)*(int *)(param_1 + 0x708) << 2; lVar5 != 0; lVar5 = lVar5 + -4) {
        fVar10 = fVar10 + *pfVar3;
        pfVar3 = pfVar3 + 1;
      }
      fVar11 = *(float *)(param_1 + 0x18);
      pfVar3 = *(float **)(param_1 + 0xd8);
      for (lVar5 = *(long *)(param_1 + 0x5f8) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
        *pfVar3 = *pfVar3 - fVar10 * fVar11;
        pfVar3 = pfVar3 + 2;
      }
      lVar5 = *(long *)(param_1 + 8);
      uVar6 = (ulong)*(uint *)(param_1 + 0x5f0);
    }
  }
  lVar8 = 0;
  lVar7 = *(long *)(param_1 + 0x5e8);
  pcVar4 = FUN_10818478c;
  if ((*(byte *)(lVar5 + 0x38) & 1) != 0) {
    pcVar4 = FUN_108184438;
  }
  for (uVar6 = -(uVar6 >> 0x1f) & 0xffffffe000000000 | uVar6 << 5; uVar6 != 0; uVar6 = uVar6 - 0x20)
  {
    (*pcVar4)(param_1,lVar7,*(long *)(param_1 + 0x50) + lVar8 * 2,
              *(long *)(param_1 + 0xd8) + lVar8 * 8,*(long *)(param_1 + 0x2e0) + lVar8 * 4,
              *(undefined4 *)(param_1 + 0x728));
    lVar8 = *(long *)(lVar7 + 0x18) + lVar8;
    lVar7 = lVar7 + 0x20;
  }
  *(int *)(param_1 + 0x728) = *(int *)(param_1 + 0x728) + 1;
  return;
}



/* Entry: 10818424c; end: 10818427b;  */

void FUN_10818424c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 4;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 10818427c; end: 1081842a7;  */

long * FUN_10818427c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10818571c();
  }
  return param_1;
}


