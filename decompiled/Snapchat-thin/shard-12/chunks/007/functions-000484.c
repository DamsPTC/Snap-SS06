/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096a8dcc; end: 1096a909b;  */

void FUN_1096a8dcc(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  bool bVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  bool bVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  long unaff_x26;
  float *unaff_x27;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uStack_88;
  float fStack_80;
  undefined8 uStack_7c;
  float fStack_74;
  undefined8 uStack_70;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)(param_2[1] + 8);
  (**(code **)(*plVar2 + 0x20))();
  plVar3 = (long *)(param_2[1] + 8);
  (**(code **)(*plVar3 + 0x28))();
  lVar14 = 0;
  lVar17 = param_2[1];
  fVar31 = *(float *)(lVar17 + 0x20);
  fVar29 = *(float *)(lVar17 + 0x2c);
  fStack_80 = fVar29;
  fVar35 = (float)*(undefined8 *)(lVar17 + 0x24);
  fVar32 = -fVar35;
  fVar36 = (float)((ulong)*(undefined8 *)(lVar17 + 0x24) >> 0x20);
  fVar33 = (float)*(undefined8 *)(lVar17 + 0x18);
  fVar34 = (float)((ulong)*(undefined8 *)(lVar17 + 0x18) >> 0x20);
  uVar30 = NEON_rev64(CONCAT44(fVar31 * -fVar34,fVar29 * -fVar33),4);
  uStack_88 = NEON_rev64(CONCAT44((float)((ulong)uVar30 >> 0x20) + fVar36 * fVar34,
                                  (float)uVar30 + fVar35 * fVar33),4);
  uStack_7c = CONCAT44(-fVar36,fVar32);
  fStack_74 = fVar31;
  do {
    *(float *)((long)&uStack_88 + lVar14) =
         (1.0 / (fVar32 * fVar36 + fVar29 * fVar31)) * *(float *)((long)&uStack_88 + lVar14);
    lVar14 = lVar14 + 4;
  } while (lVar14 != 0x18);
  iVar20 = 0;
  iVar26 = (int)plVar3;
  iVar25 = (int)plVar2;
  fVar29 = 3.4028235e+38;
  bVar1 = true;
  do {
    bVar23 = bVar1;
    iVar22 = 0;
    fVar31 = (float)(iVar20 * (iVar26 + -1));
    bVar1 = true;
    do {
      bVar19 = bVar1;
      fVar35 = (float)(iVar22 * (iVar25 + -1));
      fVar36 = (float)uStack_88 + fStack_80 * fVar31 + uStack_7c._4_4_ * fVar35;
      fVar35 = uStack_88._4_4_ + (float)uStack_7c * fVar31 + fStack_74 * fVar35;
      fVar35 = fVar35 * fVar35 + fVar36 * fVar36;
      if (fVar29 <= fVar35) {
        fVar35 = fVar29;
      }
      fVar29 = fVar35;
      iVar22 = 1;
      bVar1 = false;
    } while (bVar19);
    iVar20 = 1;
    bVar1 = false;
  } while (bVar23);
  _logf();
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  (**(code **)(*plVar4 + 0x30))();
  *(undefined4 *)param_1 = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = (long)(param_1 + 1);
  param_1[9] = (long)(param_1 + 10);
  param_1[0xb] = 0;
  uStack_70 = CONCAT44(iVar26,iVar25);
  FUN_109a83fd0(param_1,2,&uStack_70,(int)plVar4 * 8 + 0xffaU & 0xffe);
  fStack_5c = 6.2831855 / (float)iVar25;
  fStack_68 = (fVar29 * 0.5) / (float)iVar26;
  uStack_70 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  lVar14 = param_1[2];
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  (**(code **)(*plVar4 + 0x30))();
  uVar12 = (ulong)(uint)(iVar26 * iVar25 * (int)plVar4);
  pfVar11 = (float *)&uStack_70;
  FUN_1096a909c(param_2,plVar2,plVar3,pfVar11,uVar12);
  uStack_70 = CONCAT44(uStack_70._4_4_,0x2010000);
  fStack_68 = SUB84(param_1,0);
  uStack_64 = (undefined4)((ulong)param_1 >> 0x20);
  uStack_60 = 0;
  fStack_5c = 0.0;
  (**(code **)(*param_2 + 0x58))();
  (**(code **)(*param_2 + 0x30))();
  uVar10 = (ulong)((int)param_2 * 8 - 8);
  puVar7 = &uStack_70;
  uVar30 = 0;
  FUN_109a41858(0x3ff0000000000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uVar28 = (uint)puVar7;
  uVar27 = (uint)uVar10;
  if ((pfVar11[4] != 0.0) && (pfVar11[3] != 0.0)) {
    FUN_1096a5c58(&stack0xffffffffffffff18,(long)(int)(uVar27 * uVar28));
    if (0 < (int)uVar28) {
      uVar13 = 0;
      pfVar9 = unaff_x27;
      do {
        if (0 < (int)uVar27) {
          uVar16 = 0;
          pfVar8 = pfVar9;
          do {
            pfVar9 = pfVar8 + 2;
            *pfVar8 = (float)uVar16;
            pfVar8[1] = (float)uVar13;
            uVar16 = uVar16 + 1;
            pfVar8 = pfVar9;
          } while (uVar27 != uVar16);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar28);
    }
    (**(code **)(*param_1 + 0x40))
              (param_1,(ulong)(unaff_x26 - (long)unaff_x27) >> 3 & 0xffffffff,unaff_x27,pfVar11,
               uVar12 & 0xffffffff,lVar14);
    if (unaff_x27 != (float *)0x0) {
      __ZdlPv();
    }
    return;
  }
  uVar5 = -((ulong)puVar7 >> 0x1f & 1) & 0xfffffff800000000 | ((ulong)puVar7 & 0xffffffff) << 3;
  _malloc();
  uVar6 = -(uVar10 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar10 & 0xffffffff) << 2;
  _malloc();
  if (0 < (int)uVar28) {
    uVar24 = 0;
    fVar29 = pfVar11[5];
    fVar31 = pfVar11[1];
    pfVar9 = (float *)(uVar5 + 4);
    do {
      fVar35 = fVar31 + fVar29 * (float)(uVar24 & 0xffffffff);
      ___sincosf_stret();
      pfVar9[-1] = (float)uVar30;
      *pfVar9 = fVar35;
      uVar24 = uVar24 + 1;
      pfVar9 = pfVar9 + 2;
    } while (((ulong)puVar7 & 0xffffffff) != uVar24);
  }
  if (0 < (int)uVar27) {
    uVar24 = 0;
    fVar29 = pfVar11[2];
    fVar31 = *pfVar11;
    do {
      fVar35 = fVar31 + fVar29 * (float)(uVar24 & 0xffffffff);
      _expf();
      *(float *)(uVar6 + uVar24 * 4) = fVar35;
      uVar24 = uVar24 + 1;
    } while ((uVar10 & 0xffffffff) != uVar24);
  }
  uVar13 = uVar27 * uVar28;
  uVar24 = -(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3;
  _malloc();
  if (0 < (int)uVar28) {
    uVar15 = 0;
    uVar18 = uVar24;
    do {
      if (0 < (int)uVar27) {
        uVar21 = 0;
        uVar30 = *(undefined8 *)(uVar5 + uVar15 * 8);
        do {
          fVar29 = *(float *)(uVar6 + uVar21 * 4);
          *(ulong *)(uVar18 + uVar21 * 8) =
               CONCAT44((float)((ulong)uVar30 >> 0x20) * fVar29,(float)uVar30 * fVar29);
          uVar21 = uVar21 + 1;
        } while ((uVar10 & 0xffffffff) != uVar21);
      }
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + (long)(int)uVar27 * 8;
    } while (uVar15 != ((ulong)puVar7 & 0xffffffff));
  }
  plVar2 = (long *)(param_1[1] + 8);
  (**(code **)(*plVar2 + 0x40))
            (plVar2,(ulong)uVar13,uVar24,param_1[1] + 0x18,uVar12 & 0xffffffff,lVar14);
  if (uVar24 != 0) {
    _free(uVar24);
  }
  if (uVar6 != 0) {
    _free(uVar6);
  }
  if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(uVar5);
    return;
  }
  return;
}



/* Entry: 1096a909c; end: 1096a92d7;  */

void FUN_1096a909c(undefined8 param_1,float param_2,long *param_3,ulong param_4,ulong param_5,
                  float *param_6,undefined4 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long unaff_x26;
  float *unaff_x27;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  
  uVar13 = (uint)param_4;
  uVar12 = (uint)param_5;
  if ((param_6[4] != 0.0) && (param_6[3] != 0.0)) {
    FUN_1096a5c58(&stack0xffffffffffffffa8,(long)(int)(uVar12 * uVar13));
    if (0 < (int)uVar13) {
      uVar6 = 0;
      pfVar5 = unaff_x27;
      do {
        if (0 < (int)uVar12) {
          uVar8 = 0;
          pfVar4 = pfVar5;
          do {
            pfVar5 = pfVar4 + 2;
            *pfVar4 = (float)uVar8;
            pfVar4[1] = (float)uVar6;
            uVar8 = uVar8 + 1;
            pfVar4 = pfVar5;
          } while (uVar12 != uVar8);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar13);
    }
    (**(code **)(*param_3 + 0x40))
              (param_3,(ulong)(unaff_x26 - (long)unaff_x27) >> 3 & 0xffffffff,unaff_x27,param_6,
               param_7,param_8);
    if (unaff_x27 != (float *)0x0) {
      __ZdlPv();
    }
    return;
  }
  uVar1 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
  _malloc();
  uVar2 = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
  _malloc();
  if (0 < (int)uVar13) {
    uVar11 = 0;
    fVar16 = param_6[5];
    fVar17 = param_6[1];
    pfVar5 = (float *)(uVar1 + 4);
    do {
      fVar14 = fVar17 + fVar16 * (float)(uVar11 & 0xffffffff);
      ___sincosf_stret();
      pfVar5[-1] = param_2;
      *pfVar5 = fVar14;
      uVar11 = uVar11 + 1;
      pfVar5 = pfVar5 + 2;
    } while ((param_4 & 0xffffffff) != uVar11);
  }
  if (0 < (int)uVar12) {
    uVar11 = 0;
    fVar16 = param_6[2];
    fVar17 = *param_6;
    do {
      fVar14 = fVar17 + fVar16 * (float)(uVar11 & 0xffffffff);
      _expf();
      *(float *)(uVar2 + uVar11 * 4) = fVar14;
      uVar11 = uVar11 + 1;
    } while ((param_5 & 0xffffffff) != uVar11);
  }
  uVar6 = uVar12 * uVar13;
  uVar11 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3;
  _malloc();
  if (0 < (int)uVar13) {
    uVar7 = 0;
    uVar9 = uVar11;
    do {
      if (0 < (int)uVar12) {
        uVar10 = 0;
        uVar15 = *(undefined8 *)(uVar1 + uVar7 * 8);
        do {
          fVar16 = *(float *)(uVar2 + uVar10 * 4);
          *(ulong *)(uVar9 + uVar10 * 8) =
               CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar16,(float)uVar15 * fVar16);
          uVar10 = uVar10 + 1;
        } while ((param_5 & 0xffffffff) != uVar10);
      }
      uVar7 = uVar7 + 1;
      uVar9 = uVar9 + (long)(int)uVar12 * 8;
    } while (uVar7 != (param_4 & 0xffffffff));
  }
  plVar3 = (long *)(param_3[1] + 8);
  (**(code **)(*plVar3 + 0x40))(plVar3,(ulong)uVar6,uVar11,param_3[1] + 0x18,param_7,param_8);
  if (uVar11 != 0) {
    _free(uVar11);
  }
  if (uVar2 != 0) {
    _free(uVar2);
  }
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(uVar1);
    return;
  }
  return;
}



/* Entry: 1096a92d8; end: 1096a92e3;  */

long FUN_1096a92d8(long param_1)

{
  return *(long *)(param_1 + 8) + 8;
}



/* Entry: 1096a92e4; end: 1096a9317;  */

undefined8 * FUN_1096a92e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096a9318; end: 1096a934b;  */

void FUN_1096a9318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096a934c; end: 1096a9367;  */

void FUN_1096a934c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096a9368; end: 1096a93af;  */

void FUN_1096a9368(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096a93b0; end: 1096a9407;  */

undefined8 * FUN_1096a93b0(undefined8 *param_1)

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



/* Entry: 1096a9408; end: 1096a945f;  */

void FUN_1096a9408(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b03268;
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



/* Entry: 1096a9460; end: 1096a948f;  */

bool FUN_1096a9460(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b03268,0);
  return param_1 != 0;
}



/* Entry: 1096a9490; end: 1096a94c3;  */

long FUN_1096a9490(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096a94c4; end: 1096a94f7;  */

void FUN_1096a94c4(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096a94f8; end: 1096a9573;  */

undefined8 * FUN_1096a94f8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b033c0;
  param_1[1] = puVar1;
  FUN_1096a9574(param_1);
  return param_1;
}



/* Entry: 1096a9574; end: 1096a95d3;  */

void FUN_1096a9574(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x000107c2acd0(param_1,0x38);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  param_1[1] = 0;
  uVar1 = 0;
  func_0x000109699314(0,0x10);
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_110b03560;
  return;
}



/* Entry: 1096a95d4; end: 1096a95eb;  */

undefined4 FUN_1096a95d4(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
}



/* Entry: 1096a95ec; end: 1096a9667;  */

void FUN_1096a95ec(long param_1,undefined4 param_2,undefined8 param_3,int param_4,float *param_5)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  
  FUN_1096a9668(param_4,param_5,*(undefined4 *)(*(long *)(param_1 + 8) + 8),
                *(undefined8 *)(*(long *)(param_1 + 8) + 0x10),param_2,param_3);
  if (0 < param_4) {
    lVar2 = (long)param_4;
    pfVar1 = *(float **)(*(long *)(param_1 + 8) + 0x18);
    pfVar3 = param_5;
    do {
      *param_5 = *pfVar3 + *pfVar1;
      lVar2 = lVar2 + -1;
      pfVar1 = pfVar1 + 1;
      param_5 = param_5 + 1;
      pfVar3 = pfVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 1096a9668; end: 1096a9767;  */

void FUN_1096a9668(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_98 [88];
  
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = 1;
  uStack_ec = param_3;
  FUN_109c0ffb0(auStack_98,&uStack_f0,param_2,0);
  uStack_13c = 0;
  uStack_134 = 0;
  uStack_148 = 2;
  uStack_144 = param_3;
  uStack_140 = param_5;
  FUN_109c0ffb0(&uStack_f0,&uStack_148,param_4,0);
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 1;
  uStack_15c = param_5;
  FUN_109c0ffb0(&uStack_148,&uStack_160,param_6,0);
  FUN_10968f8d4(&uStack_f0,&uStack_148,auStack_98);
  FUN_109c10e9c(&uStack_148);
  FUN_109c10e9c(&uStack_f0);
  FUN_109c10e9c(auStack_98);
  return;
}



/* Entry: 1096a9768; end: 1096a9813;  */

void FUN_1096a9768(long *param_1,undefined4 param_2,undefined8 param_3,ulong param_4,float *param_5,
                  int param_6)

{
  long *plVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x20))();
  FUN_1096a9668(param_4 & 0xffffffff,param_5,param_4,
                *(long *)(param_1[1] + 0x10) + (long)((int)plVar1 * param_6) * 4,param_2,param_3);
  if (0 < (int)param_4) {
    lVar3 = (long)(int)param_4;
    pfVar2 = (float *)(*(long *)(param_1[1] + 0x18) + (long)param_6 * 4);
    pfVar4 = param_5;
    do {
      *param_5 = *pfVar4 + *pfVar2;
      lVar3 = lVar3 + -1;
      pfVar2 = pfVar2 + 1;
      param_5 = param_5 + 1;
      pfVar4 = pfVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1096a9814; end: 1096a9fa3;  */

void FUN_1096a9814(long param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  undefined2 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  uint *puVar21;
  uint *puVar22;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  ulong uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_b8;
  ulong *puStack_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  
  puStack_90 = (ulong *)CONCAT71(puStack_90._1_7_,2);
  (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
  uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x30);
  uVar19 = (ulong)uVar3;
  uVar23 = uVar19;
  if (0x7f < uVar3) {
    do {
      puStack_90 = (ulong *)(CONCAT71(puStack_90._1_7_,(char)uVar23) | 0x80);
      (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
      uVar19 = uVar23 >> 7;
      uVar12 = uVar23 >> 0xe;
      uVar23 = uVar19;
    } while (uVar12 != 0);
  }
  puStack_90 = (ulong *)CONCAT71(puStack_90._1_7_,(char)uVar19);
  (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
  lVar24 = *(long *)(param_1 + 8);
  if (*(int *)(lVar24 + 0x30) == 1) {
    lVar15 = 0;
    puVar20 = *(undefined4 **)(lVar24 + 0x18);
    lVar1 = *(long *)(lVar24 + 0x20);
    do {
      uVar3 = *(uint *)(lVar24 + 8 + lVar15);
      uVar19 = (ulong)(int)uVar3;
      uVar23 = uVar19;
      if (0x7f < uVar3) {
        do {
          puStack_90 = (ulong *)(CONCAT71(puStack_90._1_7_,(char)uVar23) | 0x80);
          (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
          uVar19 = uVar23 >> 7;
          uVar12 = uVar23 >> 0xe;
          uVar23 = uVar19;
        } while (uVar12 != 0);
      }
      puStack_90 = (ulong *)CONCAT71(puStack_90._1_7_,(char)uVar19);
      puVar10 = param_2;
      (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
      lVar15 = lVar15 + 4;
    } while (lVar15 != 8);
    uVar23 = lVar1 - (long)puVar20;
    iVar5 = *(int *)(lVar24 + 0xc) * *(int *)(lVar24 + 8);
    if (iVar5 != 0) {
      lVar15 = (long)iVar5 << 2;
      puVar25 = *(undefined4 **)(lVar24 + 0x10);
      do {
        uVar9 = SUB82(puVar10,0);
        FUN_10969a6e8(*puVar25);
        puStack_90 = (ulong *)CONCAT62(puStack_90._2_6_,uVar9);
        puVar10 = param_2;
        (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,2,1);
        lVar15 = lVar15 + -4;
        puVar25 = puVar25 + 1;
      } while (lVar15 != 0);
    }
    if ((uVar23 & 0x3fffffffc) != 0) {
      lVar24 = ((long)(uVar23 * 0x40000000) >> 0x20) << 2;
      do {
        uVar9 = SUB82(puVar10,0);
        FUN_10969a6e8(*puVar20);
        puStack_90 = (ulong *)CONCAT62(puStack_90._2_6_,uVar9);
        puVar10 = param_2;
        (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,2,1);
        lVar24 = lVar24 + -4;
        puVar20 = puVar20 + 1;
      } while (lVar24 != 0);
    }
  }
  else if (*(int *)(lVar24 + 0x30) == 2) {
    uVar3 = *(uint *)(lVar24 + 8);
    uVar23 = (ulong)(int)uVar3;
    uVar27 = *(uint *)(lVar24 + 0xc);
    uVar19 = (ulong)(int)uVar27;
    uVar26 = (ulong)uVar27;
    uVar12 = uVar23;
    uVar17 = uVar23;
    if (0x7f < uVar3) {
      do {
        puStack_90 = (ulong *)(CONCAT71(puStack_90._1_7_,(char)uVar17) | 0x80);
        (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
        uVar12 = uVar17 >> 7;
        uVar13 = uVar17 >> 0xe;
        uVar17 = uVar12;
      } while (uVar13 != 0);
    }
    puStack_90 = (ulong *)CONCAT71(puStack_90._1_7_,(char)uVar12);
    (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
    uVar12 = uVar19;
    uVar17 = uVar19;
    if (0x7f < uVar27) {
      do {
        puStack_90 = (ulong *)(CONCAT71(puStack_90._1_7_,(char)uVar17) | 0x80);
        (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
        uVar12 = uVar17 >> 7;
        uVar13 = uVar17 >> 0xe;
        uVar17 = uVar12;
      } while (uVar13 != 0);
    }
    puStack_90 = (ulong *)CONCAT71(puStack_90._1_7_,(char)uVar12);
    (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
    puStack_90 = (ulong *)0x0;
    puStack_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    puStack_a8 = (uint *)0x0;
    puStack_a0 = (uint *)0x0;
    uStack_98 = 0;
    if (uVar27 == 0) {
      puStack_88 = (ulong *)0x0;
    }
    else {
      if ((int)uVar27 < 0) {
        FUN_1094d2b78();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1096a9f5c);
        (*pcVar8)();
      }
      FUN_1096aabe0(&puStack_90,uVar19);
      puVar10 = puStack_88 + uVar19;
      lVar15 = uVar19 << 3;
      puVar11 = puStack_88;
      do {
        *puVar11 = 0xff7fffff00000000;
        lVar15 = lVar15 + -8;
        puVar11 = puVar11 + 1;
        puStack_88 = puVar10;
      } while (lVar15 != 0);
    }
    if (0 < (int)uVar3) {
      uVar12 = 0;
      pfVar14 = *(float **)(lVar24 + 0x10);
      iVar5 = *(int *)(lVar24 + 0xc);
      do {
        pfVar16 = pfVar14;
        puVar10 = puStack_90;
        uVar17 = uVar26;
        if (uVar27 != 0) {
          do {
            fVar28 = *pfVar16;
            uVar13 = *puVar10;
            *puVar10 = uVar13 ^ (uVar13 ^ CONCAT44(fVar28,fVar28)) &
                                CONCAT44(-(uint)((float)(uVar13 >> 0x20) < fVar28),
                                         -(uint)(fVar28 < (float)uVar13));
            uVar17 = uVar17 - 1;
            pfVar16 = pfVar16 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar17 != 0);
        }
        uVar12 = uVar12 + 1;
        pfVar14 = pfVar14 + iVar5;
      } while (uVar12 != uVar23);
    }
    func_0x0001074287b0(&puStack_a8,uVar19);
    if (0 < (int)uVar27) {
      pfVar14 = (float *)((long)puStack_90 + 4);
      uVar23 = uVar26;
      puVar21 = puStack_a8;
      do {
        fVar29 = *pfVar14 - pfVar14[-1];
        _log2f();
        fVar29 = fVar29 + 8.0;
        fVar28 = 12.0;
        if (fVar29 <= 12.0) {
          fVar28 = fVar29;
        }
        fVar30 = 8.0;
        if (8.0 <= fVar29) {
          fVar30 = fVar28;
        }
        *puVar21 = (int)fVar30;
        pfVar14 = pfVar14 + 2;
        uVar23 = uVar23 - 1;
        puVar21 = puVar21 + 1;
      } while (uVar23 != 0);
    }
    if (((long)puStack_88 - (long)puStack_90 & 0x7fffffff8U) != 0) {
      lVar15 = (((long)puStack_88 - (long)puStack_90) * 0x20000000 >> 0x20) << 3;
      puVar10 = puStack_90;
      do {
        (**(code **)(*param_2 + 0x48))(param_2,puVar10,8,1);
        puVar10 = puVar10 + 1;
        lVar15 = lVar15 + -8;
      } while (lVar15 != 0);
    }
    if (((long)puStack_a0 - (long)puStack_a8 & 0x3fffffffcU) != 0) {
      puVar21 = puStack_a8 + (int)((ulong)((long)puStack_a0 - (long)puStack_a8) >> 2);
      puVar22 = puStack_a8;
      do {
        uVar19 = (ulong)*puVar22;
        uVar23 = uVar19;
        if (0x7f < *puVar22) {
          do {
            uStack_b8 = CONCAT71(uStack_b8._1_7_,(char)uVar23) | 0x80;
            (**(code **)(*param_2 + 0x48))(param_2,&uStack_b8,1,1);
            uVar19 = uVar23 >> 7;
            uVar12 = uVar23 >> 0xe;
            uVar23 = uVar19;
          } while (uVar12 != 0);
        }
        uStack_b8 = CONCAT71(uStack_b8._1_7_,(char)uVar19);
        (**(code **)(*param_2 + 0x48))(param_2,&uStack_b8,1,1);
        puVar22 = puVar22 + 1;
      } while (puVar22 != puVar21);
    }
    uStack_b8._0_4_ = 0;
    uStack_b8._4_4_ = 0;
    puStack_b0 = param_2;
    if (0 < (int)uVar27) {
      uVar23 = 0;
      do {
        if (0 < (int)uVar3) {
          uVar27 = 0;
          fVar29 = *(float *)(puStack_90 + uVar23);
          fVar28 = *(float *)((long)(puStack_90 + uVar23) + 4);
          uVar4 = puStack_a8[uVar23];
          uVar6 = ~(-1 << (ulong)(uVar4 & 0x1f));
          do {
            uVar7 = uStack_b8._4_4_;
            if (uVar4 != 0) {
              uVar18 = (uint)(long)((*(float *)(*(long *)(lVar24 + 0x10) +
                                               (long)(int)((int)uVar23 +
                                                          *(int *)(lVar24 + 0xc) * uVar27) * 4) -
                                    fVar29) / ((fVar28 - fVar29) / (float)uVar6));
              if (uVar4 == 0x20) {
                uStack_74 = uVar18;
                if (uStack_b8._4_4_ == 0) {
                  (**(code **)(*puStack_b0 + 0x48))(puStack_b0,&uStack_74,4,1);
                }
                else {
                  uStack_78 = (uint)uStack_b8 | uVar18 << (ulong)(uStack_b8._4_4_ & 0x1f);
                  (**(code **)(*puStack_b0 + 0x48))(puStack_b0,&uStack_78,4,1);
                  uStack_b8._0_4_ = uVar18 >> (ulong)(-uStack_b8._4_4_ & 0x1f);
                }
              }
              else {
                uVar18 = uVar18 & uVar6;
                uStack_b8._0_4_ = (uint)uStack_b8 | uVar18 << (ulong)(uStack_b8._4_4_ & 0x1f);
                uStack_b8._4_4_ = uStack_b8._4_4_ + uVar4;
                if (0x1f < (int)uStack_b8._4_4_) {
                  (**(code **)(*puStack_b0 + 0x48))(puStack_b0,&uStack_b8,4,1);
                  uStack_b8._0_4_ = uVar18 >> (ulong)(-uVar7 & 0x1f);
                  uStack_b8._4_4_ = uStack_b8._4_4_ - 0x20;
                }
              }
            }
            uVar27 = uVar27 + 1;
          } while (uVar3 != uVar27);
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar26);
    }
    FUN_1096aac18(&uStack_b8);
    if (puStack_a8 != (uint *)0x0) {
      puStack_a0 = puStack_a8;
      __ZdlPv();
    }
    puVar10 = puStack_90;
    if (puStack_90 != (ulong *)0x0) {
      puStack_88 = puStack_90;
      __ZdlPv();
    }
    puVar20 = *(undefined4 **)(*(long *)(param_1 + 8) + 0x18);
    uVar23 = *(long *)(*(long *)(param_1 + 8) + 0x20) - (long)puVar20;
    if ((uVar23 & 0x3fffffffc) != 0) {
      lVar24 = ((long)(uVar23 * 0x40000000) >> 0x20) << 2;
      do {
        uVar9 = SUB82(puVar10,0);
        FUN_10969a6e8(*puVar20);
        puStack_90 = (ulong *)CONCAT62(puStack_90._2_6_,uVar9);
        puVar10 = param_2;
        (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,2,1);
        lVar24 = lVar24 + -4;
        puVar20 = puVar20 + 1;
      } while (lVar24 != 0);
    }
  }
  else {
    lVar15 = 0;
    lVar1 = *(long *)(lVar24 + 0x18);
    lVar2 = *(long *)(lVar24 + 0x20);
    do {
      uVar3 = *(uint *)(lVar24 + 8 + lVar15);
      uVar19 = (ulong)(int)uVar3;
      uVar23 = uVar19;
      if (0x7f < uVar3) {
        do {
          puStack_90 = (ulong *)(CONCAT71(puStack_90._1_7_,(char)uVar23) | 0x80);
          (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
          uVar19 = uVar23 >> 7;
          uVar12 = uVar23 >> 0xe;
          uVar23 = uVar19;
        } while (uVar12 != 0);
      }
      puStack_90 = (ulong *)CONCAT71(puStack_90._1_7_,(char)uVar19);
      (**(code **)(*param_2 + 0x48))(param_2,&puStack_90,1,1);
      lVar15 = lVar15 + 4;
    } while (lVar15 != 8);
    (**(code **)(*param_2 + 0x48))
              (param_2,*(undefined8 *)(lVar24 + 0x10),4,
               (long)*(int *)(lVar24 + 0xc) * (long)*(int *)(lVar24 + 8));
    (**(code **)(*param_2 + 0x48))(param_2,lVar1,4,(lVar2 - lVar1) * 0x40000000 >> 0x20);
  }
  return;
}



/* Entry: 1096a9fa4; end: 1096aa88b;  */

long * FUN_1096a9fa4(long param_1,long *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  undefined4 *unaff_x26;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uStack_154;
  int *piStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined4 *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long *plStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 *puStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  long *plStack_b0;
  byte bStack_a8;
  undefined7 uStack_a7;
  long lStack_a0;
  int iStack_90;
  int iStack_8c;
  long lStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 1;
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&bStack_a8,1,1);
  if ((int)plVar15 == 1) {
    uVar24 = 0;
    uVar14 = 0;
    do {
      uVar24 = ((ulong)bStack_a8 & 0x7f) << (uVar14 & 0x3f) | uVar24;
      if (-1 < (char)bStack_a8) {
        lVar10 = *(long *)(param_1 + 8);
        lVar8 = 1;
        plVar15 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&bStack_a8,1,1);
        if ((int)plVar15 == 1) {
          uVar19 = 0;
          uVar14 = 0;
          goto LAB_1096aa088;
        }
        break;
      }
      lVar8 = 1;
      plVar15 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&bStack_a8,1,1);
      uVar14 = uVar14 + 7;
    } while ((int)plVar15 == 1);
  }
  else {
    uVar24 = 0;
  }
  goto LAB_1096aa0c4;
  while( true ) {
    uVar14 = 0;
    unaff_x26 = (undefined4 *)0x0;
    while( true ) {
      uVar14 = ((ulong)(byte)iStack_90 & 0x7f) << ((ulong)unaff_x26 & 0x3f) | uVar14;
      if (-1 < (char)(byte)iStack_90) break;
      lVar8 = 1;
      plVar15 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&iStack_90,1,1);
      unaff_x26 = (undefined4 *)((long)unaff_x26 + 7);
      if ((int)plVar15 != 1) goto LAB_1096aa454;
    }
    *(int *)(&bStack_a8 + lVar25) = (int)uVar14;
    lVar25 = lVar25 + 4;
    if (lVar25 == 8) break;
LAB_1096aa344:
    lVar8 = 1;
    plVar15 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&iStack_90,1,1);
    if ((int)plVar15 != 1) {
LAB_1096aa454:
      plVar15 = (long *)0x0;
      goto LAB_1096aa458;
    }
  }
  plVar15 = (long *)0x1;
LAB_1096aa458:
  uVar2 = CONCAT71(uStack_a7,bStack_a8);
  uVar3 = (int)uVar2 * (int)((uint7)uStack_a7 >> 0x18);
  lVar25 = ((-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2) - 4 | 0xc) + 4;
  func_0x000109699314(lVar25,0x10);
  lVar20 = *(long *)(lVar10 + 0x10);
  *(undefined8 *)(lVar10 + 8) = uVar2;
  *(long *)(lVar10 + 0x10) = lVar25;
  if (lVar20 != 0) {
    _free(*(undefined8 *)(lVar20 + -8));
  }
  if ((int)plVar15 != 0) {
    iVar26 = *(int *)(lVar10 + 0xc) * *(int *)(lVar10 + 8);
    if (iVar26 == 0) {
      plVar15 = (long *)0x1;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x10);
      lVar25 = (long)iVar26 * 4;
      do {
        lVar25 = lVar25 + -4;
        plVar15 = param_2;
        FUN_10969a850(param_2,lVar10);
        lVar10 = lVar10 + 4;
        uVar3 = 0;
        if (lVar25 != 0) {
          uVar3 = (uint)plVar15;
        }
      } while ((uVar3 & 1) != 0);
    }
  }
  goto LAB_1096aa5c0;
  while( true ) {
    unaff_x26 = (undefined4 *)0x0;
    uVar19 = 0;
    while( true ) {
      unaff_x26 = (undefined4 *)
                  (((ulong)(byte)iStack_90 & 0x7f) << (uVar19 & 0x3f) | (ulong)unaff_x26);
      if (-1 < (char)(byte)iStack_90) break;
      lVar8 = 1;
      plVar15 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&iStack_90,1,1);
      uVar19 = uVar19 + 7;
      if ((int)plVar15 != 1) goto LAB_1096aa4d8;
    }
    *(int *)(&bStack_a8 + lVar25) = (int)unaff_x26;
    lVar25 = lVar25 + 4;
    if (lVar25 == 8) break;
LAB_1096aa3d0:
    lVar8 = 1;
    plVar15 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&iStack_90,1,1);
    if ((int)plVar15 != 1) {
LAB_1096aa4d8:
      plVar15 = (long *)0x0;
      goto LAB_1096aa4dc;
    }
  }
  plVar15 = (long *)0x1;
LAB_1096aa4dc:
  uVar2 = CONCAT71(uStack_a7,bStack_a8);
  uVar3 = (int)uVar2 * (int)((uint7)uStack_a7 >> 0x18);
  lVar25 = ((-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2) - 4 | 0xc) + 4;
  func_0x000109699314(lVar25,0x10);
  lVar20 = *(long *)(lVar10 + 0x10);
  *(undefined8 *)(lVar10 + 8) = uVar2;
  *(long *)(lVar10 + 0x10) = lVar25;
  if (lVar20 != 0) {
    _free(*(undefined8 *)(lVar20 + -8));
  }
  if ((int)plVar15 != 0) {
    lVar25 = (long)*(int *)(lVar10 + 0xc) * (long)*(int *)(lVar10 + 8);
    lVar8 = 4;
    plVar15 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,*(undefined8 *)(lVar10 + 0x10),4,lVar25);
    plVar15 = (long *)(ulong)((int)lVar25 == (int)plVar15);
  }
  goto LAB_1096aa0dc;
  while( true ) {
    lVar8 = 1;
    plVar15 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&bStack_a8,1,1);
    uVar14 = uVar14 + 7;
    if ((int)plVar15 != 1) break;
LAB_1096aa2b8:
    uVar19 = ((ulong)bStack_a8 & 0x7f) << (uVar14 & 0x3f) | uVar19;
    if (-1 < (char)bStack_a8) {
      lVar8 = 1;
      plVar15 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&bStack_a8,1,1);
      if ((int)plVar15 == 1) {
        uVar28 = 0;
        uVar14 = 0;
        goto LAB_1096aa574;
      }
      break;
    }
  }
  goto LAB_1096aa5b0;
  while( true ) {
    lVar8 = 1;
    plVar15 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&bStack_a8,1,1);
    uVar14 = uVar14 + 7;
    if ((int)plVar15 != 1) break;
LAB_1096aa574:
    uVar28 = ((ulong)bStack_a8 & 0x7f) << (uVar14 & 0x3f) | uVar28;
    if (-1 < (char)bStack_a8) {
      iVar26 = (int)uVar19;
      iVar27 = (int)uVar28;
      lVar8 = 2;
      iStack_90 = iVar26;
      iStack_8c = iVar27;
      FUN_1096aac64(&bStack_a8,&iStack_90);
      *(ulong *)(lVar10 + 8) = CONCAT71(uStack_a7,bStack_a8);
      lVar25 = *(long *)(lVar10 + 0x10);
      *(long *)(lVar10 + 0x10) = lStack_a0;
      if (lVar25 != 0) {
        _free(*(undefined8 *)(lVar25 + -8));
      }
      FUN_1096aacc4(&bStack_a8,(long)iVar27);
      FUN_109265eec(&iStack_90,(long)iVar27);
      lVar25 = CONCAT71(uStack_a7,bStack_a8);
      if ((lStack_a0 - lVar25 & 0x7fffffff8U) == 0) goto LAB_1096aa660;
      unaff_x26 = (undefined4 *)(((lStack_a0 - lVar25) * 0x20000000 >> 0x20) << 3);
      goto LAB_1096aa630;
    }
  }
LAB_1096aa5b0:
  uVar14 = 0;
  plVar15 = (long *)0x0;
  goto LAB_1096aa0dc;
  while( true ) {
    lVar25 = lVar25 + 8;
    unaff_x26 = unaff_x26 + -2;
    if (unaff_x26 == (undefined4 *)0x0) break;
LAB_1096aa630:
    lVar8 = 8;
    plVar15 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,lVar25,8,1);
    if ((int)plVar15 != 1) goto LAB_1096aa6f8;
  }
LAB_1096aa660:
  puVar13 = (undefined4 *)CONCAT44(iStack_8c,iStack_90);
  if ((lStack_88 - (long)puVar13 & 0x3fffffffcU) != 0) {
    unaff_x26 = puVar13 + (int)((ulong)(lStack_88 - (long)puVar13) >> 2);
    do {
      lVar8 = 1;
      plVar15 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&uStack_b8,1,1);
      if ((int)plVar15 != 1) goto LAB_1096aa6f8;
      uVar19 = 0;
      uVar14 = 0;
      while( true ) {
        uVar19 = (uStack_b8 & 0x7f) << (uVar14 & 0x3f) | uVar19;
        if (-1 < (char)uStack_b8) break;
        lVar8 = 1;
        plVar15 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&uStack_b8,1,1);
        uVar14 = uVar14 + 7;
        if ((int)plVar15 != 1) goto LAB_1096aa6f8;
      }
      puVar17 = puVar13 + 1;
      *puVar13 = (int)uVar19;
      puVar13 = puVar17;
    } while (puVar17 != unaff_x26);
  }
  plVar15 = (long *)0x1;
LAB_1096aa6fc:
  uStack_b8 = 0;
  plStack_b0 = param_2;
  if (0 < iVar27) {
    unaff_x26 = (undefined4 *)0x0;
    puStack_c8 = (undefined4 *)(uVar28 & 0x7fffffff);
    do {
      if (0 < iVar26) {
        iVar27 = 0;
        pfVar1 = (float *)(CONCAT71(uStack_a7,bStack_a8) + (long)unaff_x26 * 8);
        fVar32 = *pfVar1;
        fVar30 = pfVar1[1];
        uVar3 = *(uint *)(CONCAT44(iStack_8c,iStack_90) + (long)unaff_x26 * 4);
        uStack_bc = ~(-1 << (ulong)(uVar3 & 0x1f));
        uVar14 = (ulong)uStack_bc;
        uStack_c0 = 0xffffffff >> (ulong)(-uVar3 & 0x1f);
        do {
          if ((int)plVar15 == 0) {
            plVar15 = (long *)0x0;
            fVar31 = 0.0;
          }
          else {
            uVar29 = (uint)uStack_b8;
            iVar9 = uStack_b8._4_4_ - uVar3;
            if ((int)uStack_b8._4_4_ < (int)uVar3) {
              lVar8 = 4;
              plVar15 = plStack_b0;
              (**(code **)(*plStack_b0 + 0x40))(plStack_b0,&uStack_b8,4,1);
              if ((int)plVar15 == 1) {
                uVar29 = (uint)uStack_b8 << (ulong)(uStack_b8._4_4_ & 0x1f) | uVar29;
                iVar9 = 0x20 - (uVar3 - uStack_b8._4_4_);
                uVar12 = uStack_c0;
                uVar11 = 0;
                if (iVar9 != 0) {
                  uVar11 = (uint)uStack_b8 >> (ulong)(uVar3 - uStack_b8._4_4_ & 0x1f);
                }
                goto LAB_1096aa7d4;
              }
              plVar15 = (long *)0x0;
            }
            else {
              uVar12 = uStack_bc;
              uVar11 = (uint)uStack_b8 >> (ulong)(uVar3 & 0x1f);
LAB_1096aa7d4:
              uStack_b8 = CONCAT44(iVar9,uVar11);
              uVar29 = uVar12 & uVar29;
              plVar15 = (long *)0x1;
            }
            fVar31 = (float)uVar29;
          }
          *(float *)(*(long *)(lVar10 + 0x10) +
                    (long)((int)unaff_x26 + *(int *)(lVar10 + 0xc) * iVar27) * 4) =
               fVar32 + ((fVar30 - fVar32) / (float)uVar14) * fVar31;
          iVar27 = iVar27 + 1;
        } while (iVar26 != iVar27);
      }
      unaff_x26 = (undefined4 *)((long)unaff_x26 + 1);
    } while (unaff_x26 != puStack_c8);
  }
  if (CONCAT44(iStack_8c,iStack_90) != 0) {
    lStack_88 = CONCAT44(iStack_8c,iStack_90);
    __ZdlPv();
  }
  if (CONCAT71(uStack_a7,bStack_a8) != 0) {
    __ZdlPv();
  }
LAB_1096aa5c0:
  uVar14 = 0;
  goto LAB_1096aa0dc;
LAB_1096aa6f8:
  plVar15 = (long *)0x0;
  goto LAB_1096aa6fc;
  while( true ) {
    lVar8 = 1;
    plVar15 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&bStack_a8,1,1);
    uVar14 = uVar14 + 7;
    if ((int)plVar15 != 1) break;
LAB_1096aa088:
    uVar19 = ((ulong)bStack_a8 & 0x7f) << (uVar14 & 0x3f) | uVar19;
    if (-1 < (char)bStack_a8) {
      *(int *)(lVar10 + 0x30) = (int)uVar19;
      lVar10 = *(long *)(param_1 + 8);
      iVar26 = *(int *)(lVar10 + 0x30);
      uVar14 = (ulong)(iVar26 == 0);
      if (iVar26 == 1) {
        lVar25 = 0;
        goto LAB_1096aa344;
      }
      if (iVar26 != 2) {
        lVar25 = 0;
        goto LAB_1096aa3d0;
      }
      lVar8 = 1;
      plVar15 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&bStack_a8,1,1);
      if ((int)plVar15 != 1) goto LAB_1096aa5b0;
      uVar19 = 0;
      uVar14 = 0;
      goto LAB_1096aa2b8;
    }
  }
LAB_1096aa0c4:
  plVar15 = (long *)0x0;
  uVar14 = (ulong)(*(int *)(*(long *)(param_1 + 8) + 0x30) == 0);
LAB_1096aa0dc:
  plVar21 = (long *)(param_1 + 8);
  lVar10 = *plVar21;
  uVar3 = *(uint *)(lVar10 + 8);
  uVar29 = *(uint *)(lVar10 + 0xc);
  uVar28 = (ulong)uVar29;
  uVar19 = (ulong)(int)uVar3;
  plVar18 = (long *)(lVar10 + 0x18);
  uVar5 = uVar19;
  FUN_1096aa88c();
  if (uVar24 == 0) {
    lVar10 = *plVar21;
    if ((int)uVar3 < 1) {
      uVar19 = *(ulong *)(lVar10 + 0x10);
      uVar24 = (ulong)(uVar29 - 1);
    }
    else {
      uVar24 = (ulong)(uVar29 - 1);
      uVar14 = -(ulong)(uVar29 - 1 >> 0x1f) & 0xfffffffc00000000 | uVar24 << 2;
      iVar26 = *(int *)(lVar10 + 0xc);
      uVar19 = *(ulong *)(lVar10 + 0x10);
      puVar13 = *(undefined4 **)(lVar10 + 0x18);
      uVar5 = (ulong)uVar3;
      do {
        *puVar13 = *(undefined4 *)(uVar19 + uVar14);
        uVar14 = uVar14 + (long)iVar26 * 4;
        uVar5 = uVar5 - 1;
        puVar13 = puVar13 + 1;
      } while (uVar5 != 0);
    }
    uVar14 = (ulong)(0 < (int)uVar3);
    uVar11 = (int)uVar24 * uVar3;
    plVar18 = (long *)(((-(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2) - 4 |
                       0xc) + 4);
    uVar5 = 0x10;
    func_0x000109699314();
    if (0 < (int)uVar3) {
      uVar11 = 0;
      plVar4 = plVar18;
      do {
        if (1 < (int)uVar29) {
          lVar10 = 0;
          uVar16 = uVar28;
          do {
            *(undefined4 *)((long)plVar4 + lVar10) = *(undefined4 *)(uVar19 + lVar10);
            uVar12 = (int)uVar16 - 1;
            uVar16 = (ulong)uVar12;
            lVar10 = lVar10 + 4;
          } while (1 < uVar12);
        }
        uVar11 = uVar11 + 1;
        plVar4 = (long *)((long)plVar4 + (-(uVar24 >> 0x1f) & 0xfffffffc00000000 | uVar24 << 2));
        uVar19 = uVar19 + (long)(int)uVar29 * 4;
      } while (uVar11 != uVar3);
    }
    lVar25 = *plVar21;
    lVar10 = *(long *)(lVar25 + 0x10);
    *(ulong *)(lVar25 + 8) = (ulong)uVar3 | uVar24 << 0x20;
    *(long **)(lVar25 + 0x10) = plVar18;
    if (lVar10 != 0) {
      plVar18 = *(long **)(lVar10 + -8);
      _free();
    }
  }
  else {
    if ((int)uVar14 == 0) {
      if (((ulong)plVar15 & 1) != 0) {
        uVar19 = *(ulong *)(*plVar21 + 0x18);
        uVar16 = *(long *)(*plVar21 + 0x20) - uVar19;
        if ((uVar16 & 0x3fffffffc) == 0) {
          plVar15 = (long *)0x1;
        }
        else {
          plVar21 = (long *)(((long)(uVar16 * 0x40000000) >> 0x20) * 4 + -4);
          do {
            plVar18 = param_2;
            uVar5 = uVar19;
            FUN_10969a850();
            uVar19 = uVar19 + 4;
            uVar3 = 0;
            if (plVar21 != (long *)0x0) {
              uVar3 = (uint)plVar18;
            }
            plVar21 = (long *)((long)plVar21 + -4);
            plVar15 = plVar18;
          } while ((uVar3 & 1) != 0);
        }
        goto LAB_1096aa2fc;
      }
    }
    else if (((ulong)plVar15 & 1) != 0) {
      uVar5 = *(ulong *)(*plVar21 + 0x18);
      uVar16 = *(long *)(*plVar21 + 0x20) - uVar5;
      lVar8 = 4;
      (**(code **)(*param_2 + 0x40))();
      plVar18 = param_2;
      plVar15 = (long *)(ulong)((int)(uVar16 >> 2) == (int)param_2);
      goto LAB_1096aa2fc;
    }
    plVar15 = (long *)0x0;
  }
LAB_1096aa2fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (long *)(ulong)((uint)plVar15 & 1);
  }
  ___stack_chk_fail();
  if (CONCAT44(iStack_8c,iStack_90) != 0) {
    lStack_88 = CONCAT44(iStack_8c,iStack_90);
    __ZdlPv();
  }
  if (CONCAT71(uStack_a7,bStack_a8) != 0) {
    __ZdlPv();
  }
  plVar4 = plVar18;
  __Unwind_Resume();
  uVar16 = plVar4[1] - *plVar4 >> 2;
  if (uVar5 <= uVar16) {
    if (uVar5 < uVar16) {
      plVar4[1] = *plVar4 + uVar5 * 4;
    }
    return plVar4;
  }
  piVar6 = (int *)(uVar5 - uVar16);
  pcStack_d8 = FUN_1096aa88c;
  plVar22 = (long *)plVar4[1];
  puStack_120 = unaff_x26;
  uStack_118 = uVar28;
  uStack_110 = uVar14;
  uStack_108 = uVar24;
  plStack_100 = plVar21;
  uStack_f8 = uVar19;
  plStack_f0 = plVar15;
  plStack_e8 = plVar18;
  puStack_e0 = &stack0xfffffffffffffff0;
  if ((int *)(plVar4[2] - (long)plVar22 >> 2) < piVar6) {
    lVar20 = *plVar4;
    lVar25 = (long)plVar22 - lVar20;
    lVar10 = lVar25 >> 2;
    uVar24 = (long)piVar6 + lVar10;
    if (uVar24 >> 0x3e != 0) {
      piVar7 = piVar6;
      FUN_1096aae64();
      pcStack_128 = FUN_1096aae64;
      plVar15 = (long *)&DAT_10f62a4d8;
      ppuStack_130 = &puStack_e0;
      func_0x000104c4f6cc();
      pcStack_138 = FUN_1096aae78;
      if (lVar8 != 0) {
        lVar8 = lVar8 << 2;
        plVar18 = plVar15;
        do {
          *(int *)plVar18 = *piVar7;
          lVar8 = lVar8 + -4;
          piVar7 = piVar7 + 1;
          plVar18 = (long *)((long)plVar18 + 4);
        } while (lVar8 != 0);
      }
      uStack_154 = 0;
      piStack_150 = piVar6;
      plStack_148 = plVar4;
      puStack_140 = (undefined1 *)&ppuStack_130;
      FUN_1096aaed4(plVar15 + 1,*(int *)((long)plVar15 + 4) * (int)*plVar15,&uStack_154);
      return plVar15;
    }
    uVar19 = plVar4[2] - lVar20;
    uVar14 = (long)uVar19 >> 1;
    if (uVar14 <= uVar24) {
      uVar14 = uVar24;
    }
    if (0x7ffffffffffffffb < uVar19) {
      uVar14 = 0x3fffffffffffffff;
    }
    if (uVar14 == 0) {
      lVar8 = 0;
      lVar23 = lVar25;
    }
    else {
      lVar8 = (uVar14 * 4 - 4 | 0xc) + 4;
      func_0x000109699314(lVar8,0x10);
      lVar20 = *plVar4;
      lVar10 = plVar4[1] - lVar20 >> 2;
      lVar23 = plVar4[1] - lVar20;
    }
    lVar25 = lVar8 + lVar25;
    _bzero(lVar25,(long)piVar6 * 4);
    plVar18 = (long *)(lVar25 + lVar10 * -4);
    plVar15 = plVar18;
    _memcpy(plVar18,lVar20,lVar23);
    lVar10 = *plVar4;
    *plVar4 = (long)plVar18;
    plVar4[1] = lVar25 + (long)piVar6 * 4;
    plVar4[2] = lVar8 + uVar14 * 4;
    if (lVar10 != 0) {
      plVar15 = *(long **)(lVar10 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar15);
      return plVar15;
    }
  }
  else {
    plVar15 = plVar4;
    if (piVar6 != (int *)0x0) {
      plVar15 = plVar22;
      _bzero(plVar22,(long)piVar6 * 4);
      plVar22 = (long *)((long)plVar22 + (long)piVar6 * 4);
    }
    plVar4[1] = (long)plVar22;
  }
  return plVar15;
}



/* Entry: 1096aa88c; end: 1096aa8bb;  */

long * FUN_1096aa88c(long *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 uStack_84;
  int *piStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  uVar6 = param_1[1] - *param_1 >> 2;
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      param_1[1] = *param_1 + param_2 * 4;
    }
    return param_1;
  }
  piVar3 = (int *)(param_2 - uVar6);
  plVar8 = (long *)param_1[1];
  if ((int *)(param_1[2] - (long)plVar8 >> 2) < piVar3) {
    lVar9 = *param_1;
    lVar11 = (long)plVar8 - lVar9;
    lVar12 = lVar11 >> 2;
    uVar6 = (long)piVar3 + lVar12;
    if (uVar6 >> 0x3e != 0) {
      piVar4 = piVar3;
      FUN_1096aae64();
      pcStack_58 = FUN_1096aae64;
      plVar8 = (long *)&DAT_10f62a4d8;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_68 = FUN_1096aae78;
      if (param_3 != 0) {
        param_3 = param_3 << 2;
        plVar1 = plVar8;
        do {
          *(int *)plVar1 = *piVar4;
          param_3 = param_3 + -4;
          piVar4 = piVar4 + 1;
          plVar1 = (long *)((long)plVar1 + 4);
        } while (param_3 != 0);
      }
      uStack_84 = 0;
      piStack_80 = piVar3;
      plStack_78 = param_1;
      puStack_70 = (undefined1 *)&puStack_60;
      FUN_1096aaed4(plVar8 + 1,*(int *)((long)plVar8 + 4) * (int)*plVar8,&uStack_84);
      return plVar8;
    }
    uVar5 = param_1[2] - lVar9;
    uVar7 = (long)uVar5 >> 1;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar7 = 0x3fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar2 = 0;
      lVar10 = lVar11;
    }
    else {
      lVar2 = (uVar7 * 4 - 4 | 0xc) + 4;
      func_0x000109699314(lVar2,0x10);
      lVar9 = *param_1;
      lVar12 = param_1[1] - lVar9 >> 2;
      lVar10 = param_1[1] - lVar9;
    }
    lVar11 = lVar2 + lVar11;
    _bzero(lVar11,(long)piVar3 * 4);
    plVar8 = (long *)(lVar11 + lVar12 * -4);
    plVar1 = plVar8;
    _memcpy(plVar8,lVar9,lVar10);
    lVar12 = *param_1;
    *param_1 = (long)plVar8;
    param_1[1] = lVar11 + (long)piVar3 * 4;
    param_1[2] = lVar2 + uVar7 * 4;
    if (lVar12 != 0) {
      plVar8 = *(long **)(lVar12 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar8);
      return plVar8;
    }
  }
  else {
    plVar1 = param_1;
    if (piVar3 != (int *)0x0) {
      plVar1 = plVar8;
      _bzero(plVar8,(long)piVar3 * 4);
      plVar8 = (long *)((long)plVar8 + (long)piVar3 * 4);
    }
    param_1[1] = (long)plVar8;
  }
  return plVar1;
}



/* Entry: 1096aa8bc; end: 1096aa9df;  */

undefined8 * FUN_1096aa8bc(undefined8 *param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  long lStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110b01d60;
  puVar2 = (undefined8 *)0x28;
  _malloc();
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 3) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b03410;
  param_1[1] = puVar2;
  FUN_1096aa9e0(param_1);
  iStack_40 = param_3;
  uStack_3c = param_2;
  FUN_1096aae78(&uStack_50,&iStack_40,2);
  lVar1 = lStack_48;
  lVar5 = param_1[1];
  *(undefined8 *)(lVar5 + 8) = uStack_50;
  lStack_48 = 0;
  lVar4 = *(long *)(lVar5 + 0x10);
  *(long *)(lVar5 + 0x10) = lVar1;
  if (lVar4 != 0) {
    _free(*(undefined8 *)(lVar4 + -8));
    lVar1 = lStack_48;
    lStack_48 = 0;
    if (lVar1 != 0) {
      _free(*(undefined8 *)(lVar1 + -8));
    }
  }
  puVar2 = (undefined8 *)(param_1[1] + 0x18);
  FUN_1096aa88c(puVar2,(long)param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_109696618(param_1);
  __Unwind_Resume();
  func_0x000107c2acd0();
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[6] = 0;
  *puVar2 = &PTR_DAT_110b00de0;
  puVar2[1] = 0;
  puVar3 = (undefined8 *)0x0;
  func_0x000109699314(0,0x10);
  puVar2[2] = puVar3;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *puVar2 = &PTR_DAT_110b035c8;
  return puVar3;
}



/* Entry: 1096aa9e0; end: 1096aaa3f;  */

void FUN_1096aa9e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x000107c2acd0(param_1,0x38);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  param_1[1] = 0;
  uVar1 = 0;
  func_0x000109699314(0,0x10);
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_DAT_110b035c8;
  return;
}



/* Entry: 1096aaa40; end: 1096aab0f;  */

void FUN_1096aaa40(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined **ppuStack_40;
  long lStack_38;
  
  FUN_1096a94f8(&ppuStack_40);
  lVar3 = lStack_38;
  lVar5 = *(long *)(param_2 + 8);
  *(undefined4 *)(lStack_38 + 8) = *(undefined4 *)(lVar5 + 8);
  *(undefined4 *)(lStack_38 + 0xc) = *(undefined4 *)(lVar5 + 0xc);
  func_0x0001096aaf40(lStack_38 + 0x10);
  if (lVar3 != lVar5) {
    FUN_1096aafbc(lVar3 + 0x18,*(long *)(lVar5 + 0x18),*(long *)(lVar5 + 0x20),
                  *(long *)(lVar5 + 0x20) - *(long *)(lVar5 + 0x18) >> 2);
  }
  *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar5 + 0x30);
  param_1[1] = lStack_38;
  *param_1 = ppuStack_40;
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
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  return;
}



/* Entry: 1096aab10; end: 1096aab43;  */

undefined8 * FUN_1096aab10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096aab44; end: 1096aab77;  */

void FUN_1096aab44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096aab78; end: 1096aabab;  */

undefined8 * FUN_1096aab78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096aabac; end: 1096aabdf;  */

void FUN_1096aabac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096aabe0; end: 1096aac17;  */

undefined8 * FUN_1096aabe0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3d == 0) {
    puVar1 = param_1;
    FUN_1094d2b8c();
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = puVar1 + param_2;
    return puVar1;
  }
  FUN_1094d2b78();
  if (*(int *)((long)param_1 + 4) != 0) {
    (**(code **)(*(long *)param_1[1] + 0x48))((long *)param_1[1],param_1,4,1);
    *param_1 = 0;
  }
  return param_1;
}



/* Entry: 1096aac18; end: 1096aac63;  */

undefined8 * FUN_1096aac18(undefined8 *param_1)

{
  if (*(int *)((long)param_1 + 4) != 0) {
    (**(code **)(*(long *)param_1[1] + 0x48))((long *)param_1[1],param_1,4,1);
    *param_1 = 0;
  }
  return param_1;
}



/* Entry: 1096aac64; end: 1096aacc3;  */

int * FUN_1096aac64(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    piVar2 = param_1;
    do {
      *piVar2 = *param_2;
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
      piVar2 = piVar2 + 1;
    } while (param_3 != 0);
  }
  lVar1 = ((-(ulong)((uint)(param_1[1] * *param_1) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)(param_1[1] * *param_1) << 2) - 4 | 0xc) + 4;
  func_0x000109699314(lVar1,0x10);
  *(long *)(param_1 + 2) = lVar1;
  return param_1;
}



/* Entry: 1096aacc4; end: 1096aad37;  */

undefined8 * FUN_1096aacc4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1096aabe0(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 1096aad38; end: 1096aae63;  */

long * FUN_1096aad38(long *param_1,int *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uStack_84;
  int *piStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar7 = (long *)param_1[1];
  if ((int *)(param_1[2] - (long)plVar7 >> 2) < param_2) {
    lVar8 = *param_1;
    lVar10 = (long)plVar7 - lVar8;
    lVar11 = lVar10 >> 2;
    uVar1 = (long)param_2 + lVar11;
    if (uVar1 >> 0x3e != 0) {
      piVar4 = param_2;
      FUN_1096aae64();
      pcStack_58 = FUN_1096aae64;
      plVar7 = (long *)&DAT_10f62a4d8;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_68 = FUN_1096aae78;
      if (param_3 != 0) {
        param_3 = param_3 << 2;
        plVar2 = plVar7;
        do {
          *(int *)plVar2 = *piVar4;
          param_3 = param_3 + -4;
          piVar4 = piVar4 + 1;
          plVar2 = (long *)((long)plVar2 + 4);
        } while (param_3 != 0);
      }
      uStack_84 = 0;
      piStack_80 = param_2;
      plStack_78 = param_1;
      puStack_70 = (undefined1 *)&puStack_60;
      FUN_1096aaed4(plVar7 + 1,*(int *)((long)plVar7 + 4) * (int)*plVar7,&uStack_84);
      return plVar7;
    }
    uVar5 = param_1[2] - lVar8;
    uVar6 = (long)uVar5 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
      lVar9 = lVar10;
    }
    else {
      lVar3 = (uVar6 * 4 - 4 | 0xc) + 4;
      func_0x000109699314(lVar3,0x10);
      lVar8 = *param_1;
      lVar11 = param_1[1] - lVar8 >> 2;
      lVar9 = param_1[1] - lVar8;
    }
    lVar10 = lVar3 + lVar10;
    _bzero(lVar10,(long)param_2 << 2);
    plVar7 = (long *)(lVar10 + lVar11 * -4);
    plVar2 = plVar7;
    _memcpy(plVar7,lVar8,lVar9);
    lVar11 = *param_1;
    *param_1 = (long)plVar7;
    param_1[1] = lVar10 + (long)param_2 * 4;
    param_1[2] = lVar3 + uVar6 * 4;
    if (lVar11 != 0) {
      plVar7 = *(long **)(lVar11 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar7);
      return plVar7;
    }
  }
  else {
    plVar2 = param_1;
    if (param_2 != (int *)0x0) {
      plVar2 = plVar7;
      _bzero(plVar7,(long)param_2 << 2);
      plVar7 = (long *)((long)plVar7 + (long)param_2 * 4);
    }
    param_1[1] = (long)plVar7;
  }
  return plVar2;
}



/* Entry: 1096aae64; end: 1096aae77;  */

int * FUN_1096aae64(undefined8 param_1,int *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uStack_34;
  
  piVar1 = (int *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    piVar2 = piVar1;
    do {
      *piVar2 = *param_2;
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
      piVar2 = piVar2 + 1;
    } while (param_3 != 0);
  }
  uStack_34 = 0;
  FUN_1096aaed4(piVar1 + 2,piVar1[1] * *piVar1,&uStack_34);
  return piVar1;
}



/* Entry: 1096aae78; end: 1096aaed3;  */

int * FUN_1096aae78(int *param_1,int *param_2,long param_3)

{
  int *piVar1;
  undefined4 uStack_24;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    piVar1 = param_1;
    do {
      *piVar1 = *param_2;
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 1;
    } while (param_3 != 0);
  }
  uStack_24 = 0;
  FUN_1096aaed4(param_1 + 2,param_1[1] * *param_1,&uStack_24);
  return param_1;
}



/* Entry: 1096aaed4; end: 1096aafbb;  */

long * FUN_1096aaed4(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)
           (((-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2) - 4 | 0xc)
           + 4);
  func_0x000109699314(puVar1,0x10);
  *param_1 = (long)puVar1;
  if (0 < (int)param_2) {
    uVar3 = *param_3;
    uVar2 = (int)param_2 + 1;
    do {
      *puVar1 = uVar3;
      uVar2 = uVar2 - 1;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
  }
  return param_1;
}



/* Entry: 1096aafbc; end: 1096ab0e3;  */

void FUN_1096aafbc(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = param_1[2];
  lVar6 = *param_1;
  if ((ulong)((long)(uVar4 - lVar6) >> 2) < param_4) {
    plVar2 = param_1;
    uVar3 = param_2;
    if (lVar6 != 0) {
      param_1[1] = lVar6;
      plVar2 = *(long **)(lVar6 + -8);
      _free();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3e != 0) {
      FUN_1096aae64();
      if (uVar3 >> 0x3e == 0) {
        lVar6 = (uVar3 * 4 - 4 | 0xc) + 4;
        func_0x000109699314(lVar6,0x10);
        *plVar2 = lVar6;
        plVar2[1] = lVar6;
        plVar2[2] = lVar6 + uVar3 * 4;
        return;
      }
      FUN_1096aae64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__malloc_11034c5e8)(1);
      return;
    }
    uVar3 = (long)uVar4 >> 1;
    if ((ulong)((long)uVar4 >> 1) <= param_4) {
      uVar3 = param_4;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar3 = 0x3fffffffffffffff;
    }
    FUN_1096ab0e4(param_1,uVar3);
    lVar5 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar5,param_2,param_3);
    }
    lVar5 = lVar5 + param_3;
  }
  else {
    lVar5 = param_1[1];
    if ((ulong)(lVar5 - lVar6 >> 2) < param_4) {
      lVar1 = param_2 + (lVar5 - lVar6);
      if (lVar5 != lVar6) {
        _memmove(lVar6,param_2);
        lVar5 = param_1[1];
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar5,lVar1,param_3);
      }
      lVar5 = lVar5 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memmove(lVar6,param_2,param_3);
      }
      lVar5 = lVar6 + param_3;
    }
  }
  param_1[1] = lVar5;
  return;
}



/* Entry: 1096ab0e4; end: 1096ab133;  */

void FUN_1096ab0e4(long *param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3e == 0) {
    lVar1 = (param_2 * 4 - 4 | 0xc) + 4;
    func_0x000109699314(lVar1,0x10);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 4;
    return;
  }
  FUN_1096aae64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096ab134; end: 1096ab14f;  */

void FUN_1096ab134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096ab150; end: 1096ab197;  */

void FUN_1096ab150(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096ab198; end: 1096ab1ef;  */

undefined8 * FUN_1096ab198(undefined8 *param_1)

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



/* Entry: 1096ab1f0; end: 1096ab247;  */

void FUN_1096ab1f0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b03458;
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



/* Entry: 1096ab248; end: 1096ab293;  */

void FUN_1096ab248(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096a94f8(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096ab294; end: 1096ab2c3;  */

bool FUN_1096ab294(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b03458,0);
  return param_1 != 0;
}



/* Entry: 1096ab2c4; end: 1096ab3e3;  */

long FUN_1096ab2c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x20) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    _free(*(undefined8 *)(lVar1 + -8));
  }
  return param_1;
}



/* Entry: 1096ab3e4; end: 1096ab47f;  */

undefined8 * FUN_1096ab3e4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b03638;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x30);
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110b03a60;
  return param_1;
}



/* Entry: 1096ab480; end: 1096ab5df;  */

void FUN_1096ab480(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar3 = *(int *)(param_1[1] + 0x28);
  uVar10 = (ulong)iVar3;
  lVar4 = (uVar10 * 4 - 4 | 0xc) + 4;
  func_0x000109699314(lVar4,0x10);
  if (param_2 << 0x20 != 0) {
    _memmove(lVar4,param_3,(param_2 << 0x20) >> 0x1e);
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x20))();
  lVar6 = uVar10 - (long)(int)plVar5;
  if (0 < lVar6) {
    _bzero(lVar4 + (long)(int)plVar5 * 4,lVar6 * 4);
  }
  uVar2 = *(uint *)(param_1[1] + 0x20);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    lVar6 = *(long *)(param_1[1] + 8);
    do {
      if (iVar3 < 1) {
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar25 = 0;
        uVar26 = 0;
      }
      else {
        lVar8 = 0;
        uVar9 = 0;
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar25 = 0;
        uVar26 = 0;
        do {
          uVar29 = ((undefined8 *)(lVar6 + lVar8))[1];
          uVar28 = *(undefined8 *)(lVar6 + lVar8);
          uVar31 = ((undefined8 *)(lVar4 + lVar8))[1];
          uVar30 = *(undefined8 *)(lVar4 + lVar8);
          fVar27 = (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))) +
                   (float)uVar30 * (float)uVar28;
          uVar11 = SUB41(fVar27,0);
          uVar12 = (undefined1)((uint)fVar27 >> 8);
          uVar13 = (undefined1)((uint)fVar27 >> 0x10);
          uVar14 = (undefined1)((uint)fVar27 >> 0x18);
          fVar27 = (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) +
                   (float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar28 >> 0x20);
          uVar15 = SUB41(fVar27,0);
          uVar16 = (undefined1)((uint)fVar27 >> 8);
          uVar17 = (undefined1)((uint)fVar27 >> 0x10);
          uVar18 = (undefined1)((uint)fVar27 >> 0x18);
          fVar27 = (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) +
                   (float)uVar31 * (float)uVar29;
          uVar19 = SUB41(fVar27,0);
          uVar20 = (undefined1)((uint)fVar27 >> 8);
          uVar21 = (undefined1)((uint)fVar27 >> 0x10);
          uVar22 = (undefined1)((uint)fVar27 >> 0x18);
          fVar27 = (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))) +
                   (float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar29 >> 0x20);
          uVar23 = SUB41(fVar27,0);
          uVar24 = (undefined1)((uint)fVar27 >> 8);
          uVar25 = (undefined1)((uint)fVar27 >> 0x10);
          uVar26 = (undefined1)((uint)fVar27 >> 0x18);
          uVar9 = uVar9 + 4;
          lVar8 = lVar8 + 0x10;
        } while (uVar9 < uVar10);
      }
      uVar9 = 1;
      fVar27 = (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)));
      do {
        uStack_58 = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,
                                                  CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))));
        uStack_60 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
        fVar27 = fVar27 + *(float *)((ulong)&uStack_60 | (uVar9 & 3) << 2);
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
      } while (uVar1 != 4);
      *(float *)(param_5 + uVar7 * 4) = fVar27;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + uVar10 * 4;
    } while (uVar7 != uVar2);
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar4 + -8));
  return;
}



/* Entry: 1096ab5e0; end: 1096ab5f7;  */

undefined4 FUN_1096ab5e0(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x24);
}



/* Entry: 1096ab5f8; end: 1096ab6c7;  */

void FUN_1096ab5f8(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_34 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x24);
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_34,4,1);
  uStack_38 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x20);
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_38,4,1);
  lVar1 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar1 + 0x20)) {
    iVar2 = 0;
    do {
      (**(code **)(*param_2 + 0x48))
                (param_2,*(long *)(lVar1 + 8) + (long)(*(int *)(lVar1 + 0x28) * iVar2) * 4,4,
                 (long)*(int *)(lVar1 + 0x24));
      iVar2 = iVar2 + 1;
      lVar1 = *(long *)(param_1 + 8);
    } while (iVar2 < *(int *)(lVar1 + 0x20));
  }
  return;
}



/* Entry: 1096ab6c8; end: 1096ab933;  */

undefined8 FUN_1096ab6c8(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iStack_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  (**(code **)(*param_2 + 0x40))(param_2,&iStack_74,4,1);
  (**(code **)(*param_2 + 0x40))(param_2,&iStack_78,4,1);
  uVar1 = iStack_74 + 6;
  if (-4 < iStack_74) {
    uVar1 = iStack_74 + 3;
  }
  FUN_1096ac994(&uStack_70,(long)(int)((uVar1 & 0xfffffffc) * iStack_78));
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(lVar4 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar4 + 0x10) = lVar2;
    _free(*(undefined8 *)(lVar2 + -8));
  }
  *(undefined8 *)(lVar4 + 0x10) = uStack_68;
  *(undefined8 *)(lVar4 + 8) = uStack_70;
  *(undefined8 *)(lVar4 + 0x18) = uStack_60;
  *(int *)(lVar4 + 0x20) = iStack_78;
  *(int *)(lVar4 + 0x24) = iStack_74;
  *(uint *)(lVar4 + 0x28) = uVar1 & 0xfffffffc;
  lVar2 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar2 + 0x20)) {
    iVar3 = 0;
    do {
      (**(code **)(*param_2 + 0x40))
                (param_2,*(long *)(lVar2 + 8) + (long)(*(int *)(lVar2 + 0x28) * iVar3) * 4,4,
                 (long)*(int *)(lVar2 + 0x24));
      iVar3 = iVar3 + 1;
      lVar2 = *(long *)(param_1 + 8);
    } while (iVar3 < *(int *)(lVar2 + 0x20));
  }
  return 1;
}



/* Entry: 1096ab934; end: 1096ab94b;  */

undefined4 FUN_1096ab934(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x24);
}



/* Entry: 1096ab94c; end: 1096aba1b;  */

void FUN_1096ab94c(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_34 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x24);
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_34,4,1);
  uStack_38 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x20);
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_38,4,1);
  lVar1 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar1 + 0x20)) {
    iVar2 = 0;
    do {
      (**(code **)(*param_2 + 0x48))
                (param_2,*(long *)(lVar1 + 8) + (long)(*(int *)(lVar1 + 0x28) * iVar2) * 8,8,
                 (long)*(int *)(lVar1 + 0x24));
      iVar2 = iVar2 + 1;
      lVar1 = *(long *)(param_1 + 8);
    } while (iVar2 < *(int *)(lVar1 + 0x20));
  }
  return;
}



/* Entry: 1096aba1c; end: 1096abb2b;  */

undefined8 FUN_1096aba1c(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  (**(code **)(*param_2 + 0x40))(param_2,&iStack_64,4,1);
  (**(code **)(*param_2 + 0x40))(param_2,&iStack_68,4,1);
  FUN_1096aca74(&uStack_60,(long)(iStack_64 * iStack_68));
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(lVar3 + 8);
  if (lVar1 != 0) {
    *(long *)(lVar3 + 0x10) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  *(undefined8 *)(lVar3 + 0x10) = uStack_58;
  *(undefined8 *)(lVar3 + 8) = uStack_60;
  *(undefined8 *)(lVar3 + 0x18) = uStack_50;
  *(int *)(lVar3 + 0x20) = iStack_68;
  *(int *)(lVar3 + 0x24) = iStack_64;
  *(int *)(lVar3 + 0x28) = iStack_64;
  lVar1 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar1 + 0x20)) {
    iVar2 = 0;
    do {
      (**(code **)(*param_2 + 0x40))
                (param_2,*(long *)(lVar1 + 8) + (long)(*(int *)(lVar1 + 0x28) * iVar2) * 8,8,
                 (long)*(int *)(lVar1 + 0x24));
      iVar2 = iVar2 + 1;
      lVar1 = *(long *)(param_1 + 8);
    } while (iVar2 < *(int *)(lVar1 + 0x20));
  }
  return 1;
}



/* Entry: 1096abb2c; end: 1096abb5f;  */

undefined8 * FUN_1096abb2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096abb60; end: 1096abb93;  */

void FUN_1096abb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096abb94; end: 1096abc67;  */

void FUN_1096abb94(long *param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                  undefined4 *param_5,int param_6)

{
  long *plVar1;
  undefined4 *puVar2;
  long lStack_58;
  long lStack_50;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  FUN_109367d10(&lStack_58,(long)(int)plVar1);
  (**(code **)(*param_1 + 0x30))
            (param_1,param_2,param_3,(ulong)(lStack_50 - lStack_58) >> 2 & 0xffffffff);
  if ((int)param_4 < 1) {
    if (lStack_58 == 0) {
      return;
    }
  }
  else {
    param_4 = param_4 & 0x7fffffff;
    puVar2 = (undefined4 *)(lStack_58 + (long)param_6 * 4);
    do {
      *param_5 = *puVar2;
      param_4 = param_4 - 1;
      puVar2 = puVar2 + 1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  lStack_50 = lStack_58;
  __ZdlPv();
  return;
}



/* Entry: 1096abc68; end: 1096abc9b;  */

undefined8 * FUN_1096abc68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096abc9c; end: 1096abccf;  */

void FUN_1096abc9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096abcd0; end: 1096abda3;  */

void FUN_1096abcd0(long *param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5,int param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  long lStack_58;
  long lStack_50;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  FUN_1096a5c58(&lStack_58,(long)(int)plVar1);
  (**(code **)(*param_1 + 0x30))
            (param_1,param_2,param_3,(ulong)(lStack_50 - lStack_58) >> 3 & 0xffffffff);
  if ((int)param_4 < 1) {
    if (lStack_58 == 0) {
      return;
    }
  }
  else {
    param_4 = param_4 & 0x7fffffff;
    puVar2 = (undefined8 *)(lStack_58 + (long)param_6 * 8);
    do {
      *param_5 = *puVar2;
      param_4 = param_4 - 1;
      puVar2 = puVar2 + 1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  lStack_50 = lStack_58;
  __ZdlPv();
  return;
}



/* Entry: 1096abda4; end: 1096abde7;  */

void FUN_1096abda4(long *param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    func_0x000109699314(lVar1,4);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 8;
    return;
  }
  FUN_1096abde8();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096abde8; end: 1096abdfb;  */

void FUN_1096abde8(void)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096abdfc; end: 1096abe17;  */

void FUN_1096abdfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096abe18; end: 1096abe5f;  */

void FUN_1096abe18(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096abe60; end: 1096abeb7;  */

undefined8 * FUN_1096abe60(undefined8 *param_1)

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



/* Entry: 1096abeb8; end: 1096abf0f;  */

void FUN_1096abeb8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b03728;
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



/* Entry: 1096abf10; end: 1096abfcf;  */

void FUN_1096abf10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  *(undefined4 *)(puVar1 + 3) = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = &PTR_DAT_110b00de0;
  ppuStack_40 = &PTR_FUN_110b03818;
  func_0x000107c2acac();
  func_0x000107c34ef0();
  _realloc();
  *(undefined4 *)(puVar1 + 3) = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[4] = &PTR_FUN_110b03868;
  param_1[1] = puVar1 + 4;
  *param_1 = ppuStack_40;
  ppuStack_40 = &PTR_FUN_110b01d60;
  uStack_38 = 0;
  func_0x000107c2acd4(&ppuStack_40);
  return;
}



/* Entry: 1096abfd0; end: 1096ac003;  */

undefined8 * FUN_1096abfd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096ac004; end: 1096ac037;  */

void FUN_1096ac004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096ac038; end: 1096ac107;  */

void FUN_1096ac038(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_34 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x24);
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_34,4,1);
  uStack_38 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x20);
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_38,4,1);
  lVar1 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar1 + 0x20)) {
    iVar2 = 0;
    do {
      (**(code **)(*param_2 + 0x48))
                (param_2,*(long *)(lVar1 + 8) + (long)(*(int *)(lVar1 + 0x28) * iVar2) * 8,8,
                 (long)*(int *)(lVar1 + 0x24));
      iVar2 = iVar2 + 1;
      lVar1 = *(long *)(param_1 + 8);
    } while (iVar2 < *(int *)(lVar1 + 0x20));
  }
  return;
}



/* Entry: 1096ac108; end: 1096ac25b;  */

undefined4 FUN_1096ac108(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iStack_68;
  int iStack_64;
  
  (**(code **)(*param_2 + 0x40))(param_2,&iStack_64,4,1);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&iStack_68,4,1);
  uVar1 = (iStack_64 + 1) - (iStack_64 + 1 >> 0x1f) & 0xfffffffe;
  iVar5 = uVar1 * iStack_68;
  if (iVar5 == 0) {
    lVar4 = 0;
    lVar6 = 0;
  }
  else {
    if (iVar5 < 0) {
      FUN_1096ac4e0();
      return *(undefined4 *)(plVar2[1] + 0x24);
    }
    lVar6 = (long)iVar5 << 3;
    func_0x000109699314(lVar6,0x10);
    lVar4 = lVar6 + (long)iVar5 * 8;
    _bzero();
  }
  lVar7 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(lVar7 + 8);
  if (lVar3 != 0) {
    *(long *)(lVar7 + 0x10) = lVar3;
    _free(*(undefined8 *)(lVar3 + -8));
  }
  *(long *)(lVar7 + 8) = lVar6;
  *(long *)(lVar7 + 0x10) = lVar4;
  *(long *)(lVar7 + 0x18) = lVar4;
  *(int *)(lVar7 + 0x20) = iStack_68;
  *(int *)(lVar7 + 0x24) = iStack_64;
  *(uint *)(lVar7 + 0x28) = uVar1;
  lVar4 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar4 + 0x20)) {
    iVar5 = 0;
    do {
      (**(code **)(*param_2 + 0x40))
                (param_2,*(long *)(lVar4 + 8) + (long)(*(int *)(lVar4 + 0x28) * iVar5) * 8,8,
                 (long)*(int *)(lVar4 + 0x24));
      iVar5 = iVar5 + 1;
      lVar4 = *(long *)(param_1 + 8);
    } while (iVar5 < *(int *)(lVar4 + 0x20));
  }
  return 1;
}



/* Entry: 1096ac25c; end: 1096ac273;  */

undefined4 FUN_1096ac25c(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x24);
}



/* Entry: 1096ac274; end: 1096ac3a3;  */

void FUN_1096ac274(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  
  iVar2 = *(int *)(param_1[1] + 0x28);
  uVar9 = (ulong)iVar2;
  lVar3 = (uVar9 * 8 - 8 | 8) + 8;
  func_0x000109699314(lVar3,0x10);
  if (param_2 << 0x20 != 0) {
    _memmove(lVar3,param_3,(param_2 << 0x20) >> 0x1d);
  }
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x20))();
  lVar5 = uVar9 - (long)(int)plVar4;
  if (0 < lVar5) {
    _bzero(lVar3 + (long)(int)plVar4 * 8,lVar5 * 8);
  }
  uVar1 = *(uint *)(param_1[1] + 0x20);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    lVar5 = *(long *)(param_1[1] + 8);
    do {
      if (iVar2 < 1) {
        dVar10 = 0.0;
        dVar11 = 0.0;
      }
      else {
        lVar7 = 0;
        uVar8 = 0;
        dVar10 = 0.0;
        dVar11 = 0.0;
        do {
          dVar10 = dVar10 + *(double *)(lVar3 + lVar7) * *(double *)(lVar5 + lVar7);
          dVar11 = dVar11 + ((double *)(lVar3 + lVar7))[1] * ((double *)(lVar5 + lVar7))[1];
          uVar8 = uVar8 + 2;
          lVar7 = lVar7 + 0x10;
        } while (uVar8 < uVar9);
      }
      *(double *)(param_5 + uVar6 * 8) = dVar10 + dVar11;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + uVar9 * 8;
    } while (uVar6 != uVar1);
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar3 + -8));
  return;
}



/* Entry: 1096ac3a4; end: 1096ac477;  */

void FUN_1096ac3a4(long *param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5,int param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  long lStack_58;
  long lStack_50;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  FUN_1096ac4f4(&lStack_58,(long)(int)plVar1);
  (**(code **)(*param_1 + 0x30))
            (param_1,param_2,param_3,(ulong)(lStack_50 - lStack_58) >> 3 & 0xffffffff);
  if ((int)param_4 < 1) {
    if (lStack_58 == 0) {
      return;
    }
  }
  else {
    param_4 = param_4 & 0x7fffffff;
    puVar2 = (undefined8 *)(lStack_58 + (long)param_6 * 8);
    do {
      *param_5 = *puVar2;
      param_4 = param_4 - 1;
      puVar2 = puVar2 + 1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  lStack_50 = lStack_58;
  __ZdlPv();
  return;
}



/* Entry: 1096ac478; end: 1096ac4df;  */

long FUN_1096ac478(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x10) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  return param_1;
}



/* Entry: 1096ac4e0; end: 1096ac4f3;  */

undefined8 * FUN_1096ac4e0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (param_2 != 0) {
    FUN_1092d4d38(puVar1);
    lVar2 = puVar1[1];
    _bzero(lVar2,param_2 << 3);
    puVar1[1] = lVar2 + param_2 * 8;
  }
  return puVar1;
}



/* Entry: 1096ac4f4; end: 1096ac567;  */

undefined8 * FUN_1096ac4f4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1092d4d38(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 1096ac568; end: 1096ac597;  */

bool FUN_1096ac568(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b03728,0);
  return param_1 != 0;
}



/* Entry: 1096ac598; end: 1096ac5b3;  */

void FUN_1096ac598(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096ac5b4; end: 1096ac5fb;  */

void FUN_1096ac5b4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096ac5fc; end: 1096ac653;  */

undefined8 * FUN_1096ac5fc(undefined8 *param_1)

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



/* Entry: 1096ac654; end: 1096ac6ab;  */

void FUN_1096ac654(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b036c8;
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



/* Entry: 1096ac6ac; end: 1096ac6f7;  */

void FUN_1096ac6ac(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096ab3e4(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096ac6f8; end: 1096ac727;  */

bool FUN_1096ac6f8(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b036c8,0);
  return param_1 != 0;
}



/* Entry: 1096ac728; end: 1096ac743;  */

void FUN_1096ac728(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096ac744; end: 1096ac78b;  */

void FUN_1096ac744(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096ac78c; end: 1096ac7e3;  */

undefined8 * FUN_1096ac78c(undefined8 *param_1)

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



/* Entry: 1096ac7e4; end: 1096ac83b;  */

void FUN_1096ac7e4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b036f8;
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



/* Entry: 1096ac83c; end: 1096ac8fb;  */

void FUN_1096ac83c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  *(undefined4 *)(puVar1 + 3) = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = &PTR_DAT_110b00de0;
  ppuStack_40 = &PTR_FUN_110b03688;
  func_0x000107c2acac();
  func_0x000107c34ef0();
  _realloc();
  *(undefined4 *)(puVar1 + 3) = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[4] = &PTR_FUN_110b03ac8;
  param_1[1] = puVar1 + 4;
  *param_1 = ppuStack_40;
  ppuStack_40 = &PTR_FUN_110b01d60;
  uStack_38 = 0;
  func_0x000107c2acd4(&ppuStack_40);
  return;
}



/* Entry: 1096ac8fc; end: 1096ac92b;  */

bool FUN_1096ac8fc(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b036f8,0);
  return param_1 != 0;
}



/* Entry: 1096ac92c; end: 1096ac993;  */

long FUN_1096ac92c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x10) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  return param_1;
}



/* Entry: 1096ac994; end: 1096aca0b;  */

undefined8 * FUN_1096ac994(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1096ab0e4(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 2);
    param_1[1] = lVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 1096aca0c; end: 1096aca73;  */

long FUN_1096aca0c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x10) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  return param_1;
}



/* Entry: 1096aca74; end: 1096acaeb;  */

undefined8 * FUN_1096aca74(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1096abda4(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 1096acaec; end: 1096acb67;  */

undefined8 * FUN_1096acaec(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b03b30;
  param_1[1] = puVar1;
  FUN_1096acb68(param_1);
  return param_1;
}



/* Entry: 1096acb68; end: 1096acc03;  */

void FUN_1096acb68(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  func_0x000107c2acd0(param_1,0x78);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
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
  *param_1 = &PTR_DAT_110b00de0;
  uStack_24 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_1092d1c20(param_1 + 2,&uStack_24,&stack0xffffffffffffffe0,1);
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_110b03c60;
  return;
}



/* Entry: 1096acc04; end: 1096accbb;  */

undefined4 FUN_1096acc04(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 8);
}



/* Entry: 1096accbc; end: 1096ad01b;  */

void FUN_1096accbc(long param_1,long *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined2 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  byte bStack_3d;
  undefined1 uStack_3c;
  byte bStack_3b;
  undefined1 uStack_3a;
  byte bStack_39;
  undefined1 uStack_38;
  byte bStack_37;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined1 uStack_32;
  byte bStack_31;
  
  lVar7 = *(long *)(param_1 + 8);
  uStack_3f = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_3f,1,1);
  uVar3 = *(uint *)(lVar7 + 8);
  uVar8 = (ulong)(int)uVar3;
  uVar9 = uVar8;
  if (0x7f < uVar3) {
    do {
      bStack_3d = (byte)uVar9 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_3d,1,1);
      uVar8 = uVar9 >> 7;
      uVar6 = uVar9 >> 0xe;
      uVar9 = uVar8;
    } while (uVar6 != 0);
  }
  uStack_3e = (undefined1)uVar8;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_3e,1,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x70,1,1);
  lVar7 = *(long *)(param_1 + 8);
  cVar2 = *(char *)(lVar7 + 0x70);
  FUN_1096ad574(param_2,lVar7 + 0x10,lVar7 + 0x28);
  uVar9 = *(long *)(lVar7 + 0x48) - *(long *)(lVar7 + 0x40) >> 2;
  if (cVar2 == '\x01') {
    uVar8 = uVar9;
    if (0x7f < uVar9) {
      do {
        bStack_37 = (byte)uVar8 | 0x80;
        (**(code **)(*param_2 + 0x48))(param_2,&bStack_37,1,1);
        uVar9 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        uVar8 = uVar9;
      } while (uVar6 != 0);
    }
    uStack_38 = (undefined1)uVar9;
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x48))(param_2,&uStack_38,1,1);
    puVar1 = *(undefined4 **)(lVar7 + 0x48);
    for (puVar10 = *(undefined4 **)(lVar7 + 0x40); puVar10 != puVar1; puVar10 = puVar10 + 1) {
      uVar4 = (short)plVar5;
      FUN_10969a6e8(*puVar10);
      uStack_36 = uVar4;
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x48))(param_2,&uStack_36,2,1);
    }
    uVar8 = *(long *)(lVar7 + 0x60) - *(long *)(lVar7 + 0x58) >> 2;
    uVar9 = uVar8;
    if (0x7f < uVar8) {
      do {
        bStack_3b = (byte)uVar9 | 0x80;
        (**(code **)(*param_2 + 0x48))(param_2,&bStack_3b,1,1);
        uVar8 = uVar9 >> 7;
        uVar6 = uVar9 >> 0xe;
        uVar9 = uVar8;
      } while (uVar6 != 0);
    }
    uStack_3c = (undefined1)uVar8;
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x48))(param_2,&uStack_3c,1,1);
    puVar1 = *(undefined4 **)(lVar7 + 0x60);
    for (puVar10 = *(undefined4 **)(lVar7 + 0x58); puVar10 != puVar1; puVar10 = puVar10 + 1) {
      uVar4 = (short)plVar5;
      FUN_10969a6e8(*puVar10);
      uStack_34 = uVar4;
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x48))(param_2,&uStack_34,2,1);
    }
  }
  else {
    uVar8 = uVar9;
    if (0x7f < uVar9) {
      do {
        bStack_31 = (byte)uVar8 | 0x80;
        (**(code **)(*param_2 + 0x48))(param_2,&bStack_31,1,1);
        uVar9 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        uVar8 = uVar9;
      } while (uVar6 != 0);
    }
    uStack_32 = (undefined1)uVar9;
    (**(code **)(*param_2 + 0x48))(param_2,&uStack_32,1,1);
    (**(code **)(*param_2 + 0x48))
              (param_2,*(long *)(lVar7 + 0x40),4,
               (*(long *)(lVar7 + 0x48) - *(long *)(lVar7 + 0x40)) * 0x40000000 >> 0x20);
    uVar8 = *(long *)(lVar7 + 0x60) - *(long *)(lVar7 + 0x58) >> 2;
    uVar9 = uVar8;
    if (0x7f < uVar8) {
      do {
        bStack_39 = (byte)uVar9 | 0x80;
        (**(code **)(*param_2 + 0x48))(param_2,&bStack_39,1,1);
        uVar8 = uVar9 >> 7;
        uVar6 = uVar9 >> 0xe;
        uVar9 = uVar8;
      } while (uVar6 != 0);
    }
    uStack_3a = (undefined1)uVar8;
    (**(code **)(*param_2 + 0x48))(param_2,&uStack_3a,1,1);
    (**(code **)(*param_2 + 0x48))
              (param_2,*(long *)(lVar7 + 0x58),4,
               (*(long *)(lVar7 + 0x60) - *(long *)(lVar7 + 0x58)) * 0x40000000 >> 0x20);
  }
  return;
}



/* Entry: 1096ad01c; end: 1096ad2b3;  */

void FUN_1096ad01c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char cStack_44;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *param_2;
  while( true ) {
    plVar1 = param_2;
    (**(code **)(lVar2 + 0x40))(param_2,&cStack_44,1,1);
    if ((int)plVar1 != 1) {
      return;
    }
    if (-1 < cStack_44) break;
    lVar2 = *param_2;
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&bStack_43,1,1);
  if ((int)plVar1 != 1) {
    return;
  }
  uVar4 = 0;
  uVar5 = 0;
  while (uVar4 = ((ulong)bStack_43 & 0x7f) << (uVar5 & 0x3f) | uVar4, (char)bStack_43 < '\0') {
    uVar5 = uVar5 + 7;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&bStack_43,1,1);
    if ((int)plVar1 != 1) {
      return;
    }
  }
  *(int *)(lVar3 + 8) = (int)uVar4;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 0x70,1,1);
  lVar2 = *(long *)(param_1 + 8);
  if (*(char *)(lVar2 + 0x70) == '\x01') {
    if (((ulong)plVar1 & 0xffffffff) != 1) {
      return;
    }
    plVar1 = param_2;
    FUN_1096ad788(param_2,lVar2 + 0x10);
    if ((int)plVar1 == 0) {
      return;
    }
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&bStack_42,1,1);
    if ((int)plVar1 != 1) {
      return;
    }
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((ulong)bStack_42 & 0x7f) << (uVar5 & 0x3f) | uVar4;
      if (-1 < (char)bStack_42) {
        FUN_1096aa88c(lVar2 + 0x58,uVar4);
        lVar3 = *(long *)(lVar2 + 0x58);
        lVar2 = *(long *)(lVar2 + 0x60);
        while( true ) {
          if (lVar3 == lVar2) {
            return;
          }
          plVar1 = param_2;
          FUN_10969a850(param_2,lVar3);
          if ((int)plVar1 == 0) break;
          lVar3 = lVar3 + 4;
        }
        return;
      }
      uVar5 = uVar5 + 7;
      plVar1 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&bStack_42,1,1);
    } while ((int)plVar1 == 1);
    return;
  }
  if (((ulong)plVar1 & 0xffffffff) != 1) {
    return;
  }
  plVar1 = param_2;
  FUN_1096adaa0(param_2,lVar2 + 0x10);
  if ((int)plVar1 == 0) {
    return;
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&bStack_41,1,1);
  if ((int)plVar1 != 1) {
    return;
  }
  uVar4 = 0;
  uVar5 = 0;
  do {
    uVar4 = ((ulong)bStack_41 & 0x7f) << (uVar5 & 0x3f) | uVar4;
    if (-1 < (char)bStack_41) {
      FUN_1096aa88c(lVar2 + 0x58,uVar4);
      (**(code **)(*param_2 + 0x40))
                (param_2,*(long *)(lVar2 + 0x58),4,
                 (*(long *)(lVar2 + 0x60) - *(long *)(lVar2 + 0x58)) * 0x40000000 >> 0x20);
      return;
    }
    uVar5 = uVar5 + 7;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&bStack_41,1,1);
  } while ((int)plVar1 == 1);
  return;
}



/* Entry: 1096ad2b4; end: 1096ad2e7;  */

undefined8 * FUN_1096ad2b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096ad2e8; end: 1096ad31b;  */

void FUN_1096ad2e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


