/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108a3ee9c; end: 108a3eeaf;  */

void FUN_108a3ee9c(void)

{
  FUN_108a3ee54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108a3eeb0; end: 108a3f0ab;  */

undefined8 * FUN_108a3eeb0(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  plVar4 = &lStack_b0;
  if (*(long *)(param_2 + 0xa8) == 0) {
    plVar4 = (long *)(param_2 + 0x68);
  }
  else {
    if ((*(char *)(param_3 + 1) == '\x01') && ((*(byte *)(param_3 + 3) & 1) != 0)) {
      lVar2 = *(long *)(param_2 + 0x18);
      func_0x00010894b400();
      if (*(char *)(param_2 + 0x58) != '\x01') {
        uStack_98 = *param_3;
        uStack_94 = param_3[2];
LAB_108a3ef8c:
        FUN_108a3f50c(&lStack_b0,param_2 + 0x68);
        puVar1 = PTR___ZSt7nothrow_1103469d8;
        puStack_88 = &uStack_98;
        lVar5 = lStack_a8 - lStack_b0;
        uVar7 = lVar5 >> 3;
        uStack_70 = 0;
        uStack_68 = 0;
        uVar8 = uVar7;
        lStack_90 = param_2;
        if ((long)uVar7 < 0x81) {
          uVar8 = 0;
        }
        else {
          for (; uVar8 != 0; uVar8 = uVar8 >> 1) {
            lVar3 = uVar8 << 3;
            __ZnwmRKSt9nothrow_t(lVar3,puVar1);
            if (lVar3 != 0) goto LAB_108a3eff8;
          }
          lVar3 = 0;
LAB_108a3eff8:
          uStack_80 = 0;
          uStack_78 = uVar8;
          FUN_108a3f808(&uStack_70,lVar3);
          uStack_68 = uVar8;
          FUN_108a3f820(&uStack_80);
        }
        FUN_108a3f5f8(lStack_b0,lStack_a8,&lStack_90,uVar7,uStack_70,uVar8);
        FUN_108a3f820(&uStack_70);
        plVar6 = (long *)(param_2 + 0x80);
        lVar3 = *plVar6;
        if ((*(long *)(param_2 + 0x88) - lVar3 != lVar5) ||
           (_memcmp(lVar3,lStack_b0,lVar5), (int)lVar3 != 0)) {
          FUN_108a3ed60(plVar6,&lStack_b0);
          *(long *)(param_2 + 0x50) = lVar2;
          *(undefined1 *)(param_2 + 0x58) = 1;
          *(ulong *)(param_2 + 0x60) = CONCAT44(uStack_94,uStack_98);
        }
        FUN_108a3f50c(param_1,plVar6);
        func_0x000108a3dec4(&lStack_b0);
        return plVar4;
      }
      if ((long)*(int *)(param_2 + 0x30) <= lVar2 - *(long *)(param_2 + 0x50)) {
        uStack_98 = *param_3;
        uStack_94 = param_3[2];
        fVar9 = *(float *)(param_2 + 100);
        FUN_108a3f0ac(*(undefined4 *)(param_2 + 0x60));
        if (*(float *)(param_2 + 0x34) <= fVar9) goto LAB_108a3ef8c;
      }
    }
    plVar4 = (long *)(param_2 + 0x80);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = plVar4[1] - *plVar4;
  if (lVar2 != 0) {
    func_0x000108a3f4d0(param_1,lVar2 >> 3);
    lVar5 = param_1[1];
    func_0x000108a40028(lVar5);
    param_1[1] = lVar5 + lVar2;
  }
  return param_1;
}



/* Entry: 108a3f0ac; end: 108a3f137;  */

float FUN_108a3f0ac(float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  uVar4 = NEON_smax(CONCAT44(param_3,param_4),0,4);
  uVar4 = NEON_smin(uVar4,0x1d4c00001d4c0,4);
  uVar4 = NEON_ucvtf(uVar4,4);
  fVar3 = (float)uVar4 / 120000.0 - (float)((ulong)uVar4 >> 0x20) / 120000.0;
  fVar2 = 1.0;
  if (param_2 * 3.3333 <= 1.0) {
    fVar2 = param_2 * 3.3333;
  }
  fVar1 = 1.0;
  if (param_1 * 3.3333 <= 1.0) {
    fVar1 = param_1 * 3.3333;
  }
  return fVar3 * fVar3 + (fVar2 - fVar1) * (fVar2 - fVar1);
}



/* Entry: 108a3f138; end: 108a3f1b7;  */

void FUN_108a3f138(float param_1,float param_2,float param_3,float param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fStack_8 = param_1;
  fStack_4 = param_2;
  fStack_10 = param_3;
  fStack_c = param_4;
  uVar1 = CONCAT44(param_4,param_3);
  if (param_1 != param_3) {
    uVar1 = CONCAT44(param_2,param_1);
  }
  fVar4 = (float)((ulong)uVar1 >> 0x20);
  pfVar2 = &fStack_8;
  if (param_2 != param_4) {
    pfVar2 = &fStack_10;
  }
  pfVar3 = &fStack_10;
  if (param_1 != param_3) {
    pfVar3 = pfVar2;
  }
  uVar5 = *(undefined8 *)pfVar3;
  *param_5 = uVar1;
  param_5[1] = uVar5;
  fVar6 = (float)uVar5 - (float)uVar1;
  fVar7 = 0.0;
  if (fVar6 != 0.0) {
    fVar7 = ((float)((ulong)uVar5 >> 0x20) - fVar4) / fVar6;
  }
  *(float *)(param_5 + 2) = fVar7;
  *(float *)((long)param_5 + 0x14) = fVar4 - (float)uVar1 * fVar7;
  return;
}



/* Entry: 108a3f1b8; end: 108a3f24b;  */

void FUN_108a3f1b8(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_108a3f264(param_1,&uStack_48,param_2);
  if (*plVar2 == 0) {
    uVar4 = *param_2;
    uVar1 = *(undefined4 *)(param_2 + 1);
    lVar3 = 0x28;
    __Znwm();
    uStack_50 = 1;
    *(undefined8 *)(lVar3 + 0x1c) = uVar4;
    *(undefined4 *)(lVar3 + 0x24) = uVar1;
    plStack_58 = param_1 + 1;
    FUN_108a3f2e0(param_1,uStack_48,plVar2,lVar3);
    uStack_60 = 0;
    func_0x000108a3f330(&uStack_60);
  }
  return;
}



/* Entry: 108a3f24c; end: 108a3f263;  */

void FUN_108a3f24c(void)

{
  FUN_108a3f3cc();
  return;
}



/* Entry: 108a3f264; end: 108a3f2df;  */

long * FUN_108a3f264(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar4 = (long *)(param_1 + 8);
  while (plVar5 = plVar4, plVar3 != (long *)0x0) {
    while (plVar5 = plVar3, uVar1 = param_3, func_0x000108a40ad8(param_3,(long)plVar5 + 0x1c),
          (int)uVar1 == 0) {
      lVar2 = (long)plVar5 + 0x1c;
      func_0x000108a40ad8(lVar2,param_3);
      if ((int)lVar2 == 0) goto LAB_108a3f2d0;
      plVar4 = plVar5 + 1;
      plVar3 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_108a3f2d0;
    }
    plVar4 = plVar5;
    plVar3 = (long *)*plVar5;
  }
LAB_108a3f2d0:
  *param_2 = plVar5;
  return plVar4;
}



/* Entry: 108a3f2e0; end: 108a3f353;  */

void FUN_108a3f2e0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x0001089ad0fc(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 108a3f354; end: 108a3f36b;  */

void FUN_108a3f354(long *param_1,long param_2)

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



/* Entry: 108a3f36c; end: 108a3f3cb;  */

long FUN_108a3f36c(long param_1)

{
  func_0x000108a3f390(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 108a3f3cc; end: 108a3f3ff;  */

void FUN_108a3f3cc(void)

{
  func_0x000108a3f3e4();
  return;
}



/* Entry: 108a3f400; end: 108a3f45b;  */

undefined8 * FUN_108a3f400(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    while (plVar3 != plVar2) {
      plVar3 = plVar3 + -1;
      plVar1 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    param_1[1] = plVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 108a3f45c; end: 108a3f49b;  */

/* WARNING: Possible PIC construction at 0x000108a3f53c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a3f540) */

undefined1  [16] FUN_108a3f45c(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0x1fffffffffffffff;
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = plVar3;
    return auVar6;
  }
  func_0x00010bdb1f78();
  pcStack_18 = FUN_108a3f49c;
  ppuVar4 = &puStack_20;
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar2 = (long)param_1 << 3;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar2);
    auVar7._8_8_ = param_1;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  uVar5 = 0x108a3f4d0;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104bfe188();
  puVar1 = &stack0xffffffffffffffd0;
  while( true ) {
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar4;
    *(undefined8 *)(puVar1 + -8) = uVar5;
    if ((ulong)param_2 >> 0x3d == 0) {
      plVar3 = param_2;
      FUN_108a3f49c();
      *param_1 = (long)param_2;
      param_1[1] = (long)param_2;
      param_1[2] = (long)(param_2 + (long)plVar3);
      auVar8._8_8_ = plVar3;
      auVar8._0_8_ = param_2;
      return auVar8;
    }
    func_0x00010bdb1f78();
    *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
    *(long *)(puVar1 + -0x48) = unaff_x21;
    *(long *)(puVar1 + -0x40) = unaff_x20;
    *(long **)(puVar1 + -0x38) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x28) = FUN_108a3f50c;
    ppuVar4 = (undefined1 **)(puVar1 + -0x30);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    unaff_x21 = *param_2;
    unaff_x20 = param_2[1] - unaff_x21;
    if (unaff_x20 == 0) break;
    param_2 = (long *)(unaff_x20 >> 3);
    uVar5 = 0x108a3f540;
    puVar1 = puVar1 + -0x50;
    unaff_x19 = param_1;
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 108a3f49c; end: 108a3f50b;  */

/* WARNING: Possible PIC construction at 0x000108a3f53c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a3f540) */

undefined1  [16] FUN_108a3f49c(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &stack0xfffffffffffffff0;
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar2 = (long)param_1 << 3;
    __Znwm(lVar2);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  uVar5 = 0x108a3f4d0;
  func_0x000104bfe188();
  puVar1 = &stack0xffffffffffffffe0;
  while( true ) {
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar4;
    *(undefined8 *)(puVar1 + -8) = uVar5;
    if ((ulong)param_2 >> 0x3d == 0) {
      plVar3 = param_2;
      FUN_108a3f49c();
      *param_1 = param_2;
      param_1[1] = param_2;
      param_1[2] = param_2 + (long)plVar3;
      auVar7._8_8_ = plVar3;
      auVar7._0_8_ = param_2;
      return auVar7;
    }
    func_0x00010bdb1f78();
    *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
    *(long *)(puVar1 + -0x48) = unaff_x21;
    *(long *)(puVar1 + -0x40) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x38) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x28) = FUN_108a3f50c;
    puVar4 = puVar1 + -0x30;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    unaff_x21 = *param_2;
    unaff_x20 = param_2[1] - unaff_x21;
    if (unaff_x20 == 0) break;
    param_2 = (long *)(unaff_x20 >> 3);
    uVar5 = 0x108a3f540;
    puVar1 = puVar1 + -0x50;
    unaff_x19 = param_1;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 108a3f50c; end: 108a3f55f;  */

undefined8 * FUN_108a3f50c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = param_2[1] - *param_2;
  if (lVar1 != 0) {
    func_0x000108a3f4d0(param_1,lVar1 >> 3);
    lVar2 = param_1[1];
    func_0x000108a40028(lVar2);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 108a3f560; end: 108a3f5f7;  */

void FUN_108a3f560(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_108a3f560(*param_1);
    FUN_108a3f560(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 108a3f5f8; end: 108a3f807;  */

/* WARNING: Possible PIC construction at 0x000108a3fdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a3fdc4) */

void FUN_108a3f5f8(undefined8 *param_1,undefined8 *param_2,ulong *param_3,ulong param_4,
                  undefined8 *param_5,long param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar16;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar17;
  ulong uVar18;
  long unaff_x23;
  undefined8 uVar19;
  ulong unaff_x24;
  ulong uVar20;
  long unaff_x25;
  long lVar21;
  ulong uVar22;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_4 < 2) {
    return;
  }
  if (param_4 == 2) {
    uVar17 = param_2[-1];
    uVar19 = *param_1;
    uVar18 = *param_3;
    FUN_108a3f844(uVar18,param_3[1],uVar17,uVar19);
    if ((int)uVar18 == 0) {
      return;
    }
    *param_1 = uVar17;
    param_2[-1] = uVar19;
    return;
  }
  if ((long)param_4 < 0x81) {
    if (param_1 == param_2) {
      return;
    }
    lVar21 = 0;
    uVar18 = *param_3;
    puVar10 = param_1;
    do {
      if (puVar10 + 1 == param_2) {
        return;
      }
      uVar17 = *puVar10;
      uVar19 = puVar10[1];
      uVar20 = uVar18;
      func_0x000108a3ffd0(uVar18,param_3[1]);
      lVar16 = lVar21;
      if ((int)uVar20 != 0) {
        do {
          lVar12 = lVar16;
          *(undefined8 *)((long)param_1 + lVar12 + 8) = uVar17;
          puVar5 = param_1;
          if (lVar12 == 0) goto LAB_108a3f6e8;
          uVar17 = *(undefined8 *)((long)param_1 + lVar12 + -8);
          uVar20 = uVar18;
          func_0x000108a3ffd0(uVar18,param_3[1]);
          lVar16 = lVar12 + -8;
        } while ((uVar20 & 1) != 0);
        puVar5 = (undefined8 *)((long)param_1 + lVar12);
LAB_108a3f6e8:
        *puVar5 = uVar19;
      }
      lVar21 = lVar21 + 8;
      puVar10 = puVar10 + 1;
    } while( true );
  }
  uVar18 = param_4 >> 1;
  puVar10 = param_1 + uVar18;
  lVar21 = param_4 - (param_4 >> 1);
  if ((long)param_4 <= param_6) {
    func_0x000108a3f8e8(param_1,puVar10,param_3,uVar18);
    puVar10 = param_5 + uVar18;
    func_0x000108a40048();
    func_0x000108a3f8e8();
    puVar5 = param_5 + param_4;
    uVar18 = *param_3;
    puVar7 = puVar10;
    while( true ) {
      if (param_5 == puVar10) {
        for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
          *param_1 = *puVar7;
          param_1 = param_1 + 1;
        }
        return;
      }
      if (puVar7 == puVar5) break;
      uVar17 = *puVar7;
      uVar19 = *param_5;
      uVar20 = uVar18;
      func_0x000108a3ffe8(uVar18,param_3[1]);
      bVar4 = (int)uVar20 == 0;
      lVar21 = 0;
      if (bVar4) {
        lVar21 = 8;
      }
      param_5 = (undefined8 *)((long)param_5 + lVar21);
      lVar21 = 8;
      if (bVar4) {
        lVar21 = 0;
      }
      puVar7 = (undefined8 *)((long)puVar7 + lVar21);
      if (bVar4) {
        uVar17 = uVar19;
      }
      *param_1 = uVar17;
      param_1 = param_1 + 1;
    }
    for (; param_5 != puVar10; param_5 = param_5 + 1) {
      *param_1 = *param_5;
      param_1 = param_1 + 1;
    }
    return;
  }
  FUN_108a3f5f8();
  func_0x000108a40048();
  FUN_108a3f5f8();
  puVar2 = (undefined1 *)register0x00000008;
SUB_108a3faec:
  *(undefined8 **)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 **)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 **)(puVar2 + -0x50) = unaff_x26;
  *(long *)(puVar2 + -0x48) = unaff_x25;
  *(ulong *)(puVar2 + -0x40) = unaff_x24;
  *(long *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 **)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 **)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  unaff_x29 = puVar2 + -0x10;
  *(long *)(puVar2 + -0x78) = param_6;
  *(ulong **)(puVar2 + -0x70) = param_3;
  *(undefined8 **)(puVar2 + -0x80) = param_2;
  unaff_x21 = param_1;
  puVar5 = puVar10;
  do {
    *(long *)(puVar2 + -0x68) = lVar21;
    if (lVar21 == 0) {
      return;
    }
    if (*(long *)(puVar2 + -0x68) <= *(long *)(puVar2 + -0x78) ||
        (long)uVar18 <= *(long *)(puVar2 + -0x78)) {
      if ((long)uVar18 <= *(long *)(puVar2 + -0x68)) {
        lVar21 = -(long)param_5;
        puVar7 = param_5;
        for (puVar10 = unaff_x21; puVar10 != puVar5; puVar10 = puVar10 + 1) {
          *puVar7 = *puVar10;
          lVar21 = lVar21 + -8;
          puVar7 = puVar7 + 1;
        }
        while( true ) {
          if (puVar7 == param_5) {
            return;
          }
          if (puVar5 == *(undefined8 **)(puVar2 + -0x80)) break;
          uVar17 = *puVar5;
          uVar19 = *param_5;
          func_0x000108a3fff4();
          bVar4 = (int)param_1 == 0;
          lVar16 = 8;
          if (bVar4) {
            lVar16 = 0;
          }
          puVar5 = (undefined8 *)((long)puVar5 + lVar16);
          lVar16 = 0;
          if (bVar4) {
            lVar16 = 8;
          }
          param_5 = (undefined8 *)((long)param_5 + lVar16);
          if (bVar4) {
            uVar17 = uVar19;
          }
          *unaff_x21 = uVar17;
          unaff_x21 = unaff_x21 + 1;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(unaff_x21,param_5,-((long)param_5 + lVar21));
        return;
      }
      puVar10 = *(undefined8 **)(puVar2 + -0x80);
      for (lVar21 = 0; (undefined8 *)((long)puVar5 + lVar21) != puVar10; lVar21 = lVar21 + 8) {
        *(undefined8 *)((long)param_5 + lVar21) = *(undefined8 *)((long)puVar5 + lVar21);
      }
      puVar7 = (undefined8 *)((long)param_5 + lVar21);
      while( true ) {
        puVar10 = puVar10 + -1;
        if (puVar7 == param_5) {
          return;
        }
        if (puVar5 == unaff_x21) break;
        uVar19 = puVar7[-1];
        uVar17 = puVar5[-1];
        func_0x000108a3fff4();
        puVar8 = puVar5 + -1;
        if ((int)param_1 == 0) {
          uVar17 = uVar19;
          puVar7 = puVar7 + -1;
          puVar8 = puVar5;
        }
        puVar5 = puVar8;
        *puVar10 = uVar17;
      }
      while (puVar7 != param_5) {
        puVar7 = puVar7 + -1;
        *puVar10 = *puVar7;
        puVar10 = puVar10 + -1;
      }
      return;
    }
    uVar20 = **(ulong **)(puVar2 + -0x70);
    uVar1 = (*(ulong **)(puVar2 + -0x70))[1];
    uVar22 = uVar18;
    while( true ) {
      if (uVar22 == 0) {
        return;
      }
      uVar17 = *puVar5;
      uVar19 = *unaff_x21;
      uVar18 = uVar20;
      FUN_108a3f844(uVar20,uVar1,uVar17,uVar19);
      if ((uVar18 & 1) != 0) break;
      unaff_x21 = unaff_x21 + 1;
      uVar22 = uVar22 - 1;
    }
    uVar18 = *(ulong *)(puVar2 + -0x68);
    uVar3 = uVar22 == uVar18;
    *(undefined8 **)(puVar2 + -0x88) = param_5;
    if ((long)uVar22 < (long)uVar18) {
      *(long *)(puVar2 + -0x98) = (long)uVar18 / 2;
      unaff_x22 = puVar5 + (long)uVar18 / 2;
      uVar18 = (long)puVar5 - (long)unaff_x21 >> 3;
      puVar10 = unaff_x21;
      while (uVar18 != 0) {
        uVar18 = uVar18 >> 1;
        unaff_x28 = puVar10 + uVar18 + 1;
        func_0x000108a4003c();
        func_0x000108a4007c();
        if ((bool)uVar3) {
          uVar18 = extraout_x8;
          puVar10 = unaff_x28;
        }
      }
      *(long *)(puVar2 + -0x90) = (long)puVar10 - (long)unaff_x21 >> 3;
      lVar21 = *(long *)(puVar2 + -0x98);
    }
    else {
      if (uVar22 == 1) {
        *unaff_x21 = uVar17;
        *puVar5 = uVar19;
        return;
      }
      *(long *)(puVar2 + -0x90) = (long)uVar22 / 2;
      puVar10 = unaff_x21 + (long)uVar22 / 2;
      uVar3 = 0;
      uVar18 = *(long *)(puVar2 + -0x80) - (long)puVar5 >> 3;
      puVar7 = puVar5;
      while (unaff_x22 = puVar7, uVar18 != 0) {
        uVar20 = uVar18 >> 1;
        unaff_x28 = unaff_x22 + uVar20 + 1;
        func_0x000108a4003c();
        func_0x000108a4007c();
        uVar18 = extraout_x8_00;
        puVar7 = unaff_x28;
        if ((bool)uVar3) {
          uVar18 = uVar20;
          puVar7 = unaff_x22;
        }
      }
      lVar21 = (long)unaff_x22 - (long)puVar5 >> 3;
    }
    param_5 = *(undefined8 **)(puVar2 + -0x88);
    lVar16 = *(long *)(puVar2 + -0x68);
    param_2 = unaff_x22;
    if ((puVar10 != puVar5) && (param_2 = puVar10, puVar5 != unaff_x22)) {
      if (puVar10 + 1 == puVar5) {
        uVar17 = *puVar10;
        _memmove(puVar10,puVar10 + 1,(long)unaff_x22 - (long)puVar5);
        param_2 = (undefined8 *)((long)puVar10 + ((long)unaff_x22 - (long)puVar5));
        *param_2 = uVar17;
      }
      else {
        if (puVar5 + 1 != unaff_x22) {
          lVar6 = (long)puVar5 - (long)puVar10;
          lVar9 = lVar6 >> 3;
          lVar12 = (long)unaff_x22 - (long)puVar5 >> 3;
          puVar7 = puVar5;
          puVar8 = puVar10;
          lVar13 = lVar9;
          if (lVar9 == lVar12) {
            for (; param_2 = puVar5, puVar8 != puVar5 && puVar7 != unaff_x22; puVar8 = puVar8 + 1) {
              uVar17 = *puVar8;
              *puVar8 = *puVar7;
              *puVar7 = uVar17;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            do {
              lVar11 = lVar12;
              lVar12 = 0;
              if (lVar11 != 0) {
                lVar12 = lVar13 / lVar11;
              }
              lVar12 = lVar13 - lVar12 * lVar11;
              lVar13 = lVar11;
            } while (lVar12 != 0);
            puVar7 = puVar10 + lVar11;
            while (puVar7 != puVar10) {
              puVar7 = puVar7 + -1;
              uVar17 = *puVar7;
              puVar8 = (undefined8 *)(lVar6 + (long)puVar7);
              puVar15 = puVar7;
              do {
                puVar14 = puVar8;
                *puVar15 = *puVar14;
                lVar12 = (long)unaff_x22 - (long)puVar14 >> 3;
                puVar8 = (undefined8 *)((long)puVar14 + lVar6);
                if (lVar12 <= lVar9) {
                  puVar8 = puVar10 + (lVar9 - lVar12);
                }
                puVar15 = puVar14;
              } while (puVar8 != puVar7);
              *puVar14 = uVar17;
            }
            param_2 = (undefined8 *)(((long)unaff_x22 - (long)puVar5) + (long)puVar10);
          }
          goto LAB_108a3fd80;
        }
        puVar5 = unaff_x22 + -1;
        uVar17 = *puVar5;
        param_2 = (undefined8 *)((long)unaff_x22 - ((long)puVar5 - (long)puVar10));
        if ((long)puVar5 - (long)puVar10 != 0) {
          _memmove(param_2,puVar10,(long)puVar5 - (long)puVar10);
        }
        *puVar10 = uVar17;
      }
      lVar16 = *(long *)(puVar2 + -0x68);
    }
LAB_108a3fd80:
    uVar18 = *(ulong *)(puVar2 + -0x90);
    unaff_x25 = uVar22 - uVar18;
    unaff_x20 = lVar16 - lVar21;
    if ((long)(uVar18 + lVar21) < unaff_x25 + unaff_x20) break;
    param_1 = param_2;
    func_0x000108a3faec(param_2,unaff_x22,*(undefined8 *)(puVar2 + -0x80),
                        *(undefined8 *)(puVar2 + -0x70),unaff_x25,unaff_x20,param_5,
                        *(undefined8 *)(puVar2 + -0x78));
    *(undefined8 **)(puVar2 + -0x80) = param_2;
    puVar5 = puVar10;
  } while( true );
  param_6 = *(long *)(puVar2 + -0x78);
  param_3 = *(ulong **)(puVar2 + -0x70);
  unaff_x30 = 0x108a3fdc4;
  puVar2 = puVar2 + -0xa0;
  param_1 = unaff_x21;
  unaff_x19 = param_2;
  unaff_x23 = lVar21;
  unaff_x24 = uVar18;
  unaff_x26 = puVar10;
  unaff_x27 = param_5;
  goto SUB_108a3faec;
}



/* Entry: 108a3f808; end: 108a3f81f;  */

void FUN_108a3f808(long *param_1,long param_2)

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



/* Entry: 108a3f820; end: 108a3f843;  */

undefined8 FUN_108a3f820(undefined8 param_1)

{
  FUN_108a3f808(param_1,0);
  return param_1;
}



/* Entry: 108a3f844; end: 108a3f8e7;  */

bool FUN_108a3f844(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = param_1 + 0x98;
  FUN_108a3ff58(lVar2,param_3);
  lVar3 = param_1 + 0x98;
  FUN_108a3ff58(lVar3,param_4);
  if (param_1 + 0xa0 == lVar2) {
    bVar1 = false;
  }
  else if (param_1 + 0xa0 == lVar3) {
    bVar1 = true;
  }
  else {
    fVar4 = *(float *)(lVar2 + 0x2c);
    func_0x000108a4001c(*(undefined4 *)(lVar2 + 0x28));
    fVar5 = *(float *)(lVar3 + 0x2c);
    func_0x000108a4001c(*(undefined4 *)(lVar3 + 0x28));
    bVar1 = fVar4 < fVar5;
  }
  return bVar1;
}



/* Entry: 108a3f8e8; end: 108a3ff57;  */

void FUN_108a3f8e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      uVar5 = param_2[-1];
      uVar4 = *param_1;
      uVar3 = *param_3;
      func_0x000108a3ffd0(uVar3,param_3[1]);
      if ((int)uVar3 == 0) {
        *param_5 = uVar4;
        uVar3 = param_2[-1];
      }
      else {
        *param_5 = uVar5;
        uVar3 = *param_1;
      }
      param_5[1] = uVar3;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        lVar8 = 0;
        *param_5 = *param_1;
        uVar3 = *param_3;
        puVar2 = param_5;
        while (param_1 = param_1 + 1, param_1 != param_2) {
          puVar9 = puVar2 + 1;
          uVar4 = *param_1;
          uVar6 = *puVar2;
          uVar5 = uVar3;
          func_0x000108a3ffe8(uVar3,param_3[1]);
          if ((int)uVar5 == 0) {
            *puVar9 = uVar4;
          }
          else {
            *puVar9 = uVar6;
            for (lVar10 = lVar8; uVar5 = *param_1, puVar2 = param_5, lVar10 != 0;
                lVar10 = lVar10 + -8) {
              uVar6 = ((undefined8 *)((long)param_5 + lVar10))[-1];
              uVar4 = uVar3;
              func_0x000108a3ffe8(uVar3,param_3[1]);
              puVar2 = (undefined8 *)((long)param_5 + lVar10);
              if ((int)uVar4 == 0) break;
              *(undefined8 *)((long)param_5 + lVar10) = uVar6;
            }
            *puVar2 = uVar5;
          }
          lVar8 = lVar8 + 8;
          puVar2 = puVar9;
        }
      }
    }
    else {
      uVar7 = param_4 >> 1;
      puVar2 = param_1 + uVar7;
      FUN_108a3f5f8(param_1,puVar2,param_3,uVar7,param_5,uVar7);
      lVar8 = param_4 - (param_4 >> 1);
      FUN_108a3f5f8(puVar2,param_2,param_3,lVar8,param_5 + uVar7,lVar8);
      uVar3 = *param_3;
      puVar9 = puVar2;
      while (param_1 != puVar2) {
        if (puVar9 == param_2) {
          for (; param_1 != puVar2; param_1 = param_1 + 1) {
            *param_5 = *param_1;
            param_5 = param_5 + 1;
          }
          return;
        }
        uVar5 = *puVar9;
        uVar6 = *param_1;
        uVar4 = uVar3;
        FUN_108a3f844(uVar3,param_3[1],uVar5,uVar6);
        bVar1 = (int)uVar4 == 0;
        lVar8 = 8;
        if (bVar1) {
          lVar8 = 0;
        }
        puVar9 = (undefined8 *)((long)puVar9 + lVar8);
        lVar8 = 0;
        if (bVar1) {
          lVar8 = 8;
        }
        param_1 = (undefined8 *)((long)param_1 + lVar8);
        if (bVar1) {
          uVar5 = uVar6;
        }
        *param_5 = uVar5;
        param_5 = param_5 + 1;
      }
      for (; puVar9 != param_2; puVar9 = puVar9 + 1) {
        *param_5 = *puVar9;
        param_5 = param_5 + 1;
      }
    }
  }
  return;
}



/* Entry: 108a3ff58; end: 108a4008f;  */

long * FUN_108a3ff58(long param_1,ulong param_2)

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
    if (param_2 <= (ulong)plVar5[4]) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= (ulong)plVar5[4]) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < (ulong)plVar3[4])) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 108a40090; end: 108a57907;  */

void FUN_108a40090(void)

{
  return;
}



/* Entry: 108a57908; end: 108a579ab;  */

void FUN_108a57908(long *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lStack_30;
  int iStack_24;
  
  if ((param_3 == 2) || (param_3 - 5U < 5)) {
    *param_1 = 0;
  }
  else {
    iStack_24 = param_3;
    FUN_108a579ac(&lStack_30,param_2,&iStack_24);
    *(undefined4 *)(lStack_30 + 0xc) = 6;
    lVar1 = lStack_30;
    FUN_108a579f8(lStack_30,param_2);
    if ((int)lVar1 == -1) {
      *param_1 = 0;
      if (lStack_30 != 0) {
        func_0x000108a5891c();
      }
    }
    else {
      (**(code **)(**(long **)(lStack_30 + 0x1f8) + 0x1e0))
                (*(long **)(lStack_30 + 0x1f8),lStack_30 + 0x18);
      *param_1 = lStack_30;
    }
  }
  return;
}



/* Entry: 108a579ac; end: 108a579f7;  */

void FUN_108a579ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x208;
  __Znwm();
  FUN_108a587bc();
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000108a579f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 108a579f8; end: 108a57af3;  */

int FUN_108a579f8(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) == 10) {
    puVar4 = (undefined8 *)0x8;
    __Znwm();
    iVar2 = 0;
    *puVar4 = &PTR_FUN_110aac908;
    *(undefined8 **)(param_1 + 0x1f8) = puVar4;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    uStack_29 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_108a57af4(&lStack_28,param_2,&uStack_29,&uStack_38,&uStack_40);
    lVar1 = lStack_28;
    lStack_28 = 0;
    lVar3 = *(long *)(param_1 + 0x1f8);
    *(long *)(param_1 + 0x1f8) = lVar1;
    if (lVar3 != 0) {
      func_0x000108a588fc();
      lVar1 = lStack_28;
      lStack_28 = 0;
      if (lVar1 != 0) {
        func_0x000108a588fc();
      }
    }
    iVar2 = -(uint)(*(long *)(param_1 + 0x1f8) == 0);
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



/* Entry: 108a57af4; end: 108a57b3f;  */

void FUN_108a57af4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1a8;
  __Znwm();
  FUN_108b65260();
  *param_1 = uVar1;
  return;
}



/* Entry: 108a57b40; end: 108a57c57;  */

void FUN_108a57b40(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000108a58934();
  lVar1 = *(long *)(param_1 + 0x1f8);
  *(undefined8 *)(unaff_x19 + 0x1f8) = 0;
  if (lVar1 != 0) {
    func_0x000108a588fc();
  }
  func_0x000108a568c0(unaff_x19 + 0x18);
  return;
}



/* Entry: 108a57c58; end: 108a57c9f;  */

undefined1 FUN_108a57c58(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 108a57ca0; end: 108a57cdf;  */

long FUN_108a57ca0(long param_1)

{
  long extraout_x8;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000108a58870();
    func_0x000108a588cc(*(undefined8 *)(extraout_x8 + 0xe0));
    if ((int)param_1 != -1) {
      func_0x000108a58890();
    }
    return param_1;
  }
  return 0xffffffff;
}



/* Entry: 108a57ce0; end: 108a57cff;  */

long * FUN_108a57ce0(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a57cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xe8))();
    return plVar1;
  }
  return (long *)0xffffffff;
}



/* Entry: 108a57d00; end: 108a57d3f;  */

long FUN_108a57d00(long param_1)

{
  long extraout_x8;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000108a588a0();
    func_0x000108a588f4(*(undefined8 *)(extraout_x8 + 0xf0));
    if ((int)param_1 != -1) {
      func_0x000108a588bc();
    }
    return param_1;
  }
  return 0xffffffff;
}



/* Entry: 108a57d40; end: 108a57d7f;  */

long * FUN_108a57d40(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a57d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 200))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 108a57d80; end: 108a57e3f;  */

long FUN_108a57d80(long param_1)

{
  long extraout_x8;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000108a588a0();
    func_0x000108a588f4(*(undefined8 *)(extraout_x8 + 0xf8));
    if ((int)param_1 != -1) {
      func_0x000108a588bc();
    }
    return param_1;
  }
  return 0xffffffff;
}



/* Entry: 108a57e40; end: 108a57e5f;  */

long * FUN_108a57e40(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a57e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x138))();
    return plVar1;
  }
  return (long *)0xffffffff;
}



/* Entry: 108a57e60; end: 108a57edf;  */

long FUN_108a57e60(long param_1)

{
  long extraout_x8;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000108a58870();
    func_0x000108a588cc(*(undefined8 *)(extraout_x8 + 0x140));
    if ((int)param_1 != -1) {
      func_0x000108a58890();
    }
    return param_1;
  }
  return 0xffffffff;
}



/* Entry: 108a57ee0; end: 108a57eff;  */

long * FUN_108a57ee0(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a57ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x150))();
    return plVar1;
  }
  return (long *)0xffffffff;
}



/* Entry: 108a57f00; end: 108a57f7f;  */

long FUN_108a57f00(long param_1)

{
  long extraout_x8;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000108a58870();
    func_0x000108a588cc(*(undefined8 *)(extraout_x8 + 0x158));
    if ((int)param_1 != -1) {
      func_0x000108a58890();
    }
    return param_1;
  }
  return 0xffffffff;
}



/* Entry: 108a57f80; end: 108a57f9f;  */

long * FUN_108a57f80(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a57f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x110))();
    return plVar1;
  }
  return (long *)0xffffffff;
}



/* Entry: 108a57fa0; end: 108a582b7;  */

long FUN_108a57fa0(long param_1)

{
  long extraout_x8;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000108a588a0();
    func_0x000108a588f4(*(undefined8 *)(extraout_x8 + 0x118));
    if ((int)param_1 != -1) {
      func_0x000108a588bc();
    }
    return param_1;
  }
  return 0xffffffff;
}



/* Entry: 108a582b8; end: 108a58317;  */

long * FUN_108a582b8(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a582d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return plVar1;
  }
  return (long *)0xffffffff;
}



/* Entry: 108a58318; end: 108a5838f;  */

int FUN_108a58318(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = -1;
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    plVar2 = *(long **)(param_1 + 0x1f8);
    (**(code **)(*plVar2 + 0x30))();
    iVar1 = -(uint)((int)plVar2 == -1);
  }
  return iVar1;
}



/* Entry: 108a58390; end: 108a583ef;  */

long * FUN_108a58390(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a583a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return plVar1;
  }
  return (long *)0xffffffff;
}



/* Entry: 108a583f0; end: 108a58487;  */

ulong FUN_108a583f0(ulong param_1)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x8_00;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000108a58928();
    (**(code **)(extraout_x8 + 0x98))();
    if ((param_1 & 1) == 0) {
      func_0x000108a58910();
                    /* WARNING: Could not recover jumptable at 0x000108a5890c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0x68))();
      return param_1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 108a58488; end: 108a584c7;  */

long * FUN_108a58488(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a584a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 108a584c8; end: 108a5855b;  */

long FUN_108a584c8(ulong param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000108a58928();
    (**(code **)(extraout_x8 + 200))();
    if ((param_1 & 1) == 0) {
      lVar1 = unaff_x19 + 0x18;
      func_0x000108a56950(lVar1);
      func_0x000108a58910();
                    /* WARNING: Could not recover jumptable at 0x000108a5890c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0x90))();
      return lVar1;
    }
    lVar1 = 0;
  }
  else {
    lVar1 = 0xffffffff;
  }
  return lVar1;
}



/* Entry: 108a5855c; end: 108a5857b;  */

long * FUN_108a5855c(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a58574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa0))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 108a5857c; end: 108a5860f;  */

long FUN_108a5857c(ulong param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000108a58928();
    (**(code **)(extraout_x8 + 0xe0))();
    if ((param_1 & 1) == 0) {
      lVar1 = unaff_x19 + 0x18;
      func_0x000108a569dc(lVar1);
      func_0x000108a58910();
                    /* WARNING: Could not recover jumptable at 0x000108a5890c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0xa8))();
      return lVar1;
    }
    lVar1 = 0;
  }
  else {
    lVar1 = 0xffffffff;
  }
  return lVar1;
}



/* Entry: 108a58610; end: 108a58653;  */

long * FUN_108a58610(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a58628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb8))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 108a58654; end: 108a586ab;  */

long * FUN_108a58654(long param_1,undefined2 *param_2)

{
  long *plVar1;
  undefined2 uStack_22;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uStack_22 = 0;
    plVar1 = *(long **)(param_1 + 0x1f8);
    (**(code **)(*plVar1 + 400))(plVar1,&uStack_22);
    if ((int)plVar1 != -1) {
      plVar1 = (long *)0x0;
      *param_2 = uStack_22;
    }
    return plVar1;
  }
  return (long *)0xffffffff;
}



/* Entry: 108a586ac; end: 108a587bb;  */

long * FUN_108a586ac(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000108a586c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x198))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 108a587bc; end: 108a587e3;  */

void FUN_108a587bc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  func_0x000108a57ac0(param_1,param_2,*param_3);
  *param_1 = &PTR_FUN_110aac6c0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 108a587e4; end: 108a587fb;  */

void FUN_108a587e4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x200);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 108a587fc; end: 108a58843;  */

bool FUN_108a587fc(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  plVar1 = param_1 + 0x40;
  do {
    iVar2 = (int)*plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((param_1 != (long *)0x0) && (iVar2 == 1)) {
    (**(code **)(*param_1 + 0x18))();
  }
  return iVar2 != 1;
}



/* Entry: 108a58844; end: 108a58847;  */

void FUN_108a58844(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000108a58934();
  lVar1 = *(long *)(param_1 + 0x1f8);
  *(undefined8 *)(unaff_x19 + 0x1f8) = 0;
  if (lVar1 != 0) {
    func_0x000108a588fc();
  }
  func_0x000108a568c0(unaff_x19 + 0x18);
  return;
}



/* Entry: 108a58848; end: 108a5885b;  */

void FUN_108a58848(void)

{
  FUN_108a57b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108a5885c; end: 108a58947;  */

bool FUN_108a5885c(long param_1)

{
  return *(int *)(param_1 + 0x200) == 1;
}



/* Entry: 108a58948; end: 108b3144f;  */

undefined8 FUN_108a58948(void)

{
  return 0xffffffff;
}



/* Entry: 108b31450; end: 108b314b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108b31450(long param_1,long param_2)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
  }
  func_0x000108b33bd8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108b314b4; end: 108b314d7;  */

undefined8 FUN_108b314b4(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b314d8; end: 108b314db;  */

undefined8 FUN_108b314d8(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b314dc; end: 108b314ef;  */

void FUN_108b314dc(void)

{
  FUN_108b314b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b314f0; end: 108b3151f;  */

undefined ** FUN_108b314f0(void)

{
  return &PTR_DAT_110ab2c90;
}



/* Entry: 108b31520; end: 108b315b7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_108b31520(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  FUN_108b33914();
  if ((unaff_w21 & 1) != 0) {
    func_0x000108b33944();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x000108b33960();
    func_0x000108b339dc();
    func_0x000108b33ba4();
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    func_0x000108b339d0();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    func_0x000108b33960();
    func_0x000108b33acc();
    func_0x000108b33bb0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108b33a30();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108b315b8; end: 108b3164b;  */

ulong FUN_108b315b8(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar3 + 5;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 & 8) != 0) {
      uVar3 = uVar3 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    uVar3 = lVar2 + uVar3;
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  return uVar3;
}



/* Entry: 108b3164c; end: 108b3168f;  */

long FUN_108b3164c(long param_1)

{
  func_0x000108b339f8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_108b314b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_108b314b4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108b31690; end: 108b31693;  */

long FUN_108b31690(long param_1)

{
  func_0x000108b339f8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_108b314b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_108b314b4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108b31694; end: 108b316a7;  */

void FUN_108b31694(void)

{
  FUN_108b3164c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b316a8; end: 108b316b3;  */

undefined ** FUN_108b316a8(void)

{
  return &PTR_DAT_110ab2cf0;
}



/* Entry: 108b316b4; end: 108b3170b;  */

void FUN_108b316b4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108b314fc(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108b314fc(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 108b3170c; end: 108b3183b;  */

long * FUN_108b3170c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  FUN_108b33914();
  if ((unaff_w21 & 1) != 0) {
    func_0x000108b33990();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_1 = (long *)0x2;
    func_0x000108b33a3c();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    func_0x000108b339d0();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108b33a30();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar3 = (int)param_3;
    uVar1 = iVar3 - iVar4;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 108b3183c; end: 108b31857;  */

long FUN_108b3183c(long param_1)

{
  long extraout_x8;
  
  FUN_108b315b8();
  func_0x000108b33978();
  return param_1 + extraout_x8;
}



/* Entry: 108b31858; end: 108b3185b;  */

void FUN_108b31858(ulong *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108b33a44();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_108b33514();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_108b31450();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_108b33514();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_108b31450();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    }
  }
  func_0x000108b33af4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x000108b33b04();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108b3185c; end: 108b31913;  */

void FUN_108b3185c(ulong *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108b33a44();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_108b33514();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_108b31450();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_108b33514();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_108b31450();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    }
  }
  func_0x000108b33af4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x000108b33b04();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108b31914; end: 108b31977;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108b31914(long param_1,long param_2)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
  }
  func_0x000108b33bd8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108b31978; end: 108b3199b;  */

undefined8 FUN_108b31978(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b3199c; end: 108b3199f;  */

undefined8 FUN_108b3199c(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b319a0; end: 108b319b3;  */

void FUN_108b319a0(void)

{
  FUN_108b31978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b319b4; end: 108b319e3;  */

undefined ** FUN_108b319b4(void)

{
  return &PTR_DAT_110ab2d48;
}



/* Entry: 108b319e4; end: 108b31a7b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_108b319e4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  FUN_108b33914();
  if ((unaff_w21 & 1) != 0) {
    func_0x000108b33944();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x000108b33960();
    func_0x000108b339dc();
    func_0x000108b33ba4();
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    func_0x000108b339d0();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    func_0x000108b33960();
    func_0x000108b33acc();
    func_0x000108b33bb0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108b33a30();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108b31a7c; end: 108b31b0f;  */

ulong FUN_108b31a7c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar3 + 5;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 & 8) != 0) {
      uVar3 = uVar3 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    uVar3 = lVar2 + uVar3;
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  return uVar3;
}



/* Entry: 108b31b10; end: 108b31b53;  */

long FUN_108b31b10(long param_1)

{
  func_0x000108b339f8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_108b31978();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_108b31978();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108b31b54; end: 108b31b57;  */

long FUN_108b31b54(long param_1)

{
  func_0x000108b339f8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_108b31978();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_108b31978();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108b31b58; end: 108b31b6b;  */

void FUN_108b31b58(void)

{
  FUN_108b31b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b31b6c; end: 108b31b77;  */

undefined ** FUN_108b31b6c(void)

{
  return &PTR_DAT_110ab2db0;
}



/* Entry: 108b31b78; end: 108b31bcb;  */

void FUN_108b31b78(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108b319c0(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108b319c0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 108b31bcc; end: 108b31cbb;  */

long * FUN_108b31bcc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  FUN_108b33914();
  if ((unaff_w21 & 1) != 0) {
    func_0x000108b33990();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)0x2;
    func_0x000108b33a3c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108b33a30();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108b31cbc; end: 108b31cd7;  */

long FUN_108b31cbc(long param_1)

{
  long extraout_x8;
  
  FUN_108b31a7c();
  func_0x000108b33978();
  return param_1 + extraout_x8;
}



/* Entry: 108b31cd8; end: 108b31cdb;  */

void FUN_108b31cd8(ulong *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108b33a44();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_108b33570();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_108b31914();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_108b33570();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_108b31914();
      }
    }
  }
  func_0x000108b33af4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x000108b33b04();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108b31cdc; end: 108b31d77;  */

void FUN_108b31cdc(ulong *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108b33a44();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_108b33570();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_108b31914();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_108b33570();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_108b31914();
      }
    }
  }
  func_0x000108b33af4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x000108b33b04();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108b31d78; end: 108b31e63;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108b31d78(long param_1,long param_2)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  if ((uVar1 & 0xf00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    }
  }
  func_0x000108b33bd8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108b31e64; end: 108b31e87;  */

undefined8 FUN_108b31e64(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b31e88; end: 108b31e8b;  */

undefined8 FUN_108b31e88(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b31e8c; end: 108b31e9f;  */

void FUN_108b31e8c(void)

{
  FUN_108b31e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b31ea0; end: 108b31ee3;  */

undefined ** FUN_108b31ea0(void)

{
  return &PTR_DAT_110ab2e10;
}



/* Entry: 108b31ee4; end: 108b3204f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_108b31ee4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar4;
  int iVar5;
  
  FUN_108b33914();
  if ((unaff_w21 & 1) != 0) {
    func_0x000108b33960();
    plVar2 = (long *)0xd;
    func_0x000107c280a8(0xd,param_1);
    func_0x000108b33ba4();
    param_1 = plVar2;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x000108b33960();
    func_0x000108b339dc();
    func_0x000108b33ba4();
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    func_0x000108b339d0();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    func_0x000108b339d0();
    FUN_1088bdd44();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 4 & 1) != 0) {
    func_0x000108b339d0();
    FUN_1088b96ec();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 5 & 1) != 0) {
    func_0x000108b339d0();
    func_0x0001089f53c8();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 6 & 1) != 0) {
    func_0x000108b339d0();
    func_0x00010598f468();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 7 & 1) != 0) {
    func_0x000108b339d0();
    func_0x000108b32050();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 8 & 1) != 0) {
    func_0x000108b339d0();
    func_0x000108b3207c();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 9 & 1) != 0) {
    func_0x000108b339d0();
    func_0x0001089f53f0();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 10 & 1) != 0) {
    func_0x000108b339d0();
    func_0x0001089f5418();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 0xb & 1) != 0) {
    func_0x000108b339d0();
    func_0x000108b320a8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108b33a30();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108b32050; end: 108b320d3;  */

void FUN_108b32050(undefined8 param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int unaff_w19;
  
  func_0x000108b33a78();
  pbVar2 = (byte *)0x40;
  func_0x000107c280a8(0x40,param_1);
  for (uVar1 = (ulong)unaff_w19; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  return;
}



/* Entry: 108b320d4; end: 108b32267;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_108b320d4(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  int iVar2;
  int iVar3;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w9_07;
  long lVar4;
  uint uVar5;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  ulong uVar6;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  
  iVar3 = -9;
  iVar2 = -9;
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar6 = (ulong)uVar5;
  if ((uVar5 & 0xff) == 0) {
    lVar1 = 0;
    goto LAB_108b32194;
  }
  lVar1 = 0;
  if ((uVar5 & 1) != 0) {
    lVar1 = 5;
  }
  if ((uVar5 & 2) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((uVar5 >> 2 & 1) == 0) {
    if ((uVar5 >> 3 & 1) != 0) goto LAB_108b32134;
LAB_108b32104:
    if (((uint)uVar6 >> 4 & 1) != 0) goto LAB_108b32148;
LAB_108b32108:
    if (((uint)uVar6 >> 5 & 1) != 0) goto LAB_108b3215c;
LAB_108b3210c:
    if (((uint)uVar6 >> 6 & 1) != 0) goto LAB_108b32170;
LAB_108b32110:
    uVar5 = (uint)uVar6;
    iVar2 = iVar3;
  }
  else {
    func_0x000108b33ab4();
    lVar1 = extraout_x8;
    uVar6 = extraout_x10;
    iVar3 = extraout_w9;
    if (((uint)extraout_x10 >> 3 & 1) == 0) goto LAB_108b32104;
LAB_108b32134:
    func_0x000108b33ab4();
    lVar1 = extraout_x8_00;
    uVar6 = extraout_x10_00;
    iVar3 = extraout_w9_00;
    if (((uint)extraout_x10_00 >> 4 & 1) == 0) goto LAB_108b32108;
LAB_108b32148:
    func_0x000108b33ab4();
    lVar1 = extraout_x8_01;
    uVar6 = extraout_x10_01;
    iVar3 = extraout_w9_01;
    if (((uint)extraout_x10_01 >> 5 & 1) == 0) goto LAB_108b3210c;
LAB_108b3215c:
    func_0x000108b33ab4();
    lVar1 = extraout_x8_02;
    uVar6 = extraout_x10_02;
    iVar3 = extraout_w9_02;
    if (((uint)extraout_x10_02 >> 6 & 1) == 0) goto LAB_108b32110;
LAB_108b32170:
    func_0x000108b33ab4();
    uVar5 = (uint)extraout_x10_03;
    lVar1 = extraout_x8_03;
    uVar6 = extraout_x10_03;
    iVar2 = extraout_w9_03;
  }
  if ((uVar5 >> 7 & 1) != 0) {
    func_0x000108b33ab4();
    lVar1 = extraout_x8_04;
    uVar6 = extraout_x10_04;
    iVar2 = extraout_w9_04;
  }
LAB_108b32194:
  uVar5 = (uint)uVar6;
  if ((uVar6 & 0xf00) != 0) {
    if ((uVar5 >> 8 & 1) != 0) {
      func_0x000108b33ab4();
      lVar1 = extraout_x8_05;
      uVar5 = extraout_w10;
      iVar2 = extraout_w9_05;
    }
    if ((uVar5 >> 9 & 1) != 0) {
      func_0x000108b33ab4();
      lVar1 = extraout_x8_06;
      uVar5 = extraout_w10_00;
      iVar2 = extraout_w9_06;
    }
    if ((uVar5 >> 10 & 1) != 0) {
      func_0x000108b33ab4();
      lVar1 = extraout_x8_07;
      iVar2 = extraout_w9_07;
      uVar5 = extraout_w10_01;
    }
    if ((uVar5 >> 0xb & 1) != 0) {
      lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x44)) * iVar2 + 0x2c0U >> 6) + lVar1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar6 + 0x10);
    }
    lVar1 = lVar4 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 108b32268; end: 108b3228b;  */

undefined8 FUN_108b32268(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b3228c; end: 108b3228f;  */

undefined8 FUN_108b3228c(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}


