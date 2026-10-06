/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109503e64; end: 109503e83;  */

void FUN_109503e64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9a98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109503e84; end: 109503e8f;  */

long FUN_109503e84(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xb8;
  func_0x000104c607c8(&lStack_28);
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  return param_1 + 0x18;
}



/* Entry: 109503e90; end: 109503f3f;  */

long FUN_109503e90(long param_1)

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



/* Entry: 109503f40; end: 109503f97;  */

void FUN_109503f40(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x260;
  __Znwm();
  FUN_109503f98();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109503f98; end: 109503fdf;  */

undefined8 * FUN_109503f98(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af9ae8;
  FUN_1094fdd28(param_1 + 3);
  return param_1;
}



/* Entry: 109503fe0; end: 109503fef;  */

void FUN_109503fe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9ae8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109503ff0; end: 10950400f;  */

void FUN_109503ff0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9ae8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109504010; end: 10950401b;  */

long FUN_109504010(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  FUN_1094e0cc0(param_1 + 0x230);
  if (*(long *)(param_1 + 0x1b8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1b8) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x180);
    }
  }
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (0 < *(int *)(param_1 + 0x184)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x1c0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x184));
  }
  lVar5 = *(long *)(param_1 + 0x1c8);
  if (lVar5 != param_1 + 0x1d0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x158) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x120);
    }
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (0 < *(int *)(param_1 + 0x124)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x160);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x124));
  }
  lVar5 = *(long *)(param_1 + 0x168);
  if (lVar5 != param_1 + 0x170 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  FUN_1094e073c(param_1 + 0xf8);
  func_0x0001094d8004(param_1 + 0xd0);
  FUN_1094dda24(param_1 + 0xa8);
  FUN_1094dda24(param_1 + 0x80);
  func_0x0001094cffd4(param_1 + 0x58);
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  return param_1 + 0x18;
}



/* Entry: 10950401c; end: 109504073;  */

long FUN_10950401c(long param_1)

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



/* Entry: 109504074; end: 1095040c3;  */

void FUN_109504074(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_1095040c4();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110af9b28,FUN_1095040e4);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *puVar2 = &PTR_FUN_110af9b50;
  return;
}



/* Entry: 1095040c4; end: 1095040e3;  */

void FUN_1095040c4(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110af9b50;
  return;
}



/* Entry: 1095040e4; end: 1095040e7;  */

void FUN_1095040e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1095040e8; end: 1095040fb;  */

void FUN_1095040e8(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095040fc; end: 10950410b;  */

void FUN_1095040fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9b78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10950410c; end: 10950412b;  */

void FUN_10950410c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9b78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10950412c; end: 10950413b;  */

void FUN_10950412c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109504134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10950413c; end: 10950424b;  */

undefined8 * FUN_10950413c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9bc8;
  FUN_109503c64(param_1 + 1);
  return param_1;
}



/* Entry: 10950424c; end: 10950454b;  */

float * FUN_10950424c(float *param_1,long param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined4 auStack_6c [3];
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  *(undefined1 *)(param_1 + 0xc) = param_3;
  pfVar10 = param_1 + 0x16;
  param_1[0x18] = 0.0;
  param_1[0x19] = 0.0;
  pfVar10[0] = 0.0;
  pfVar10[1] = 0.0;
  param_1[0x14] = 0.0;
  param_1[0x15] = 0.0;
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  param_1[0x1c] = 0.0;
  param_1[0x1d] = 0.0;
  param_1[0x1a] = 0.0;
  param_1[0x1b] = 0.0;
  param_1[0x20] = 0.0;
  param_1[0x21] = 0.0;
  param_1[0x1e] = 0.0;
  param_1[0x1f] = 0.0;
  param_1[0x24] = 0.0;
  param_1[0x25] = 0.0;
  param_1[0x22] = 0.0;
  param_1[0x23] = 0.0;
  param_1[0x26] = 0.0;
  param_1[0x27] = 0.0;
  fVar19 = *(float *)(param_2 + 0x2c);
  fVar2 = *(float *)(param_2 + 0x30);
  param_1[1] = fVar19;
  param_1[2] = fVar2;
  fVar3 = *(float *)(param_2 + 0x214);
  *param_1 = fVar3;
  lVar8 = *(long *)(param_2 + 0x1b8);
  lVar16 = *(long *)(param_2 + 0x1c0);
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  *(long *)(param_1 + 0x10) = (lVar16 - lVar8 >> 3) * -0x5555555555555555;
  fVar18 = *(float *)(param_2 + 0x210);
  param_1[4] = *(float *)(param_2 + 0x218);
  param_1[5] = fVar18;
  param_1[3] = *(float *)(param_2 + 0x21c);
  uVar17 = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 6) = uVar17;
  fVar19 = (float)(int)fVar19;
  param_1[10] = (float)(int)fVar2 / fVar19;
  param_1[0xb] = fVar3 / fVar19;
  lVar16 = *(long *)(param_2 + 0x238) - *(long *)(param_2 + 0x230);
  lVar8 = param_2;
  if (lVar16 != 0) {
    uVar6 = (lVar16 >> 3) * -0x5555555555555555;
    if (0x1555555555555555 < uVar6) {
      FUN_109504eec();
LAB_1095044fc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109504500);
      (*pcVar5)();
    }
    lVar16 = param_2;
    FUN_109504f00();
    lVar8 = *(long *)(param_1 + 0x22);
    lVar12 = uVar6 - (*(long *)(param_1 + 0x24) - lVar8);
    _memcpy(lVar12);
    lVar7 = *(long *)(param_1 + 0x22);
    *(long *)(param_1 + 0x22) = lVar12;
    *(ulong *)(param_1 + 0x24) = uVar6;
    *(ulong *)(param_1 + 0x26) = uVar6 + lVar16 * 0xc;
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  plVar13 = *(long **)(param_2 + 0x230);
  plVar14 = *(long **)(param_2 + 0x238);
  if (plVar13 != plVar14) {
    puVar15 = *(undefined8 **)(param_1 + 0x24);
    do {
      puVar11 = (undefined8 *)*plVar13;
      if (puVar15 < *(undefined8 **)(param_1 + 0x26)) {
        uVar4 = *(undefined4 *)(puVar11 + 1);
        *puVar15 = CONCAT44((int)(float)((ulong)*puVar11 >> 0x20),(int)(float)*puVar11);
        *(undefined4 *)(puVar15 + 1) = uVar4;
        puVar15 = (undefined8 *)((long)puVar15 + 0xc);
        lVar7 = lVar8;
      }
      else {
        lVar16 = (long)puVar15 - *(long *)(param_1 + 0x22);
        uVar6 = (lVar16 >> 2) * -0x5555555555555555 + 1;
        if (0x1555555555555555 < uVar6) {
          FUN_109504eec();
          goto LAB_1095044fc;
        }
        lVar7 = (long)*(undefined8 **)(param_1 + 0x26) - *(long *)(param_1 + 0x22) >> 2;
        uVar9 = lVar7 * 0x5555555555555556;
        if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
          uVar9 = uVar6;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
          uVar9 = 0x1555555555555555;
        }
        FUN_109504f00();
        lVar7 = *(long *)(param_1 + 0x22);
        lVar12 = *(long *)(param_1 + 0x24);
        puVar1 = (undefined8 *)(uVar9 + lVar16);
        uVar4 = *(undefined4 *)(puVar11 + 1);
        *puVar1 = CONCAT44((int)(float)((ulong)*puVar11 >> 0x20),(int)(float)*puVar11);
        *(undefined4 *)(puVar1 + 1) = uVar4;
        puVar15 = (undefined8 *)((long)puVar1 + 0xc);
        lVar12 = (long)puVar1 - (lVar12 - lVar7);
        _memcpy(lVar12);
        lVar16 = *(long *)(param_1 + 0x22);
        *(long *)(param_1 + 0x22) = lVar12;
        *(undefined8 **)(param_1 + 0x24) = puVar15;
        *(ulong *)(param_1 + 0x26) = uVar9 + lVar8 * 0xc;
        if (lVar16 != 0) {
          __ZdlPv();
        }
      }
      *(undefined8 **)(param_1 + 0x24) = puVar15;
      plVar13 = plVar13 + 3;
      lVar8 = lVar7;
    } while (plVar13 != plVar14);
  }
  if (param_1 + 0x1c != (float *)(param_2 + 0x1b8)) {
    FUN_1094dbea4(param_1 + 0x1c,*(long *)(param_2 + 0x1b8),*(long *)(param_2 + 0x1c0),
                  (*(long *)(param_2 + 0x1c0) - *(long *)(param_2 + 0x1b8) >> 3) *
                  -0x5555555555555555);
  }
  if (pfVar10 != (float *)(param_2 + 0x248)) {
    FUN_10942bf40(pfVar10,*(long *)(param_2 + 0x248),*(long *)(param_2 + 0x250),
                  *(long *)(param_2 + 0x250) - *(long *)(param_2 + 0x248) >> 2);
  }
  if (*(long *)(param_1 + 0x16) == *(long *)(param_1 + 0x18)) {
    auStack_6c[0] = 0x3f800000;
    FUN_10939f5b4(pfVar10,auStack_6c);
  }
  return param_1;
}



/* Entry: 10950454c; end: 1095049a7;  */

void FUN_10950454c(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  int iVar23;
  undefined8 uVar24;
  int iVar26;
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  ushort uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined1 auVar35 [16];
  int iStack_3b0;
  int iStack_3ac;
  undefined4 auStack_3a8 [2];
  undefined4 *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_328;
  long lStack_320;
  undefined8 *puStack_318;
  undefined4 uStack_200;
  int iStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long lStack_1c8;
  undefined4 *puStack_1c0;
  long *plStack_1b8;
  long alStack_1b0 [2];
  undefined4 uStack_1a0;
  int iStack_19c;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  float *pfStack_98;
  float *pfStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  long lStack_78;
  
  if ((param_2[1] - *param_2 >> 2) * -0x3333333333333333 - *(long *)(param_1 + 0x40) != 0) {
    puVar8 = &UNK_10f5715dd;
    func_0x000105688514();
    if (pfStack_98 != (float *)0x0) {
      pfStack_90 = pfStack_98;
      __ZdlPv();
    }
    __Unwind_Resume();
    lVar13 = *(long *)(param_3 + 0x20);
    if (((*(long *)(param_3 + 0x48) == 0) ||
        (fVar21 = *(float *)(lVar13 + 0x1e8), fVar21 < *(float *)(puVar8 + 0x18))) ||
       (*(float *)(puVar8 + 0x1c) < fVar21)) {
      puVar12 = (undefined8 *)param_2[8];
      fVar27 = *(float *)(puVar8 + 0x28);
      fVar22 = *(float *)(puVar8 + 0x2c);
      lVar14 = *(long *)(puVar8 + 0x58);
      uVar19 = *(long *)(puVar8 + 0x60) - lVar14 >> 2;
      uVar15 = 0;
      if (uVar19 != 0) {
        uVar15 = *(ulong *)(puVar8 + 0x38) / uVar19;
      }
      lVar17 = *(ulong *)(puVar8 + 0x38) - uVar15 * uVar19;
      *(long *)(puVar8 + 0x38) = lVar17 + 1;
      uVar24 = *puVar12;
      uVar18 = NEON_scvtf(uVar24,4);
      fVar28 = (float)((ulong)uVar18 >> 0x20);
      fVar31 = (float)uVar18;
      fVar21 = fVar31;
      if (fVar28 / fVar27 <= fVar31) {
        fVar21 = fVar28 / fVar27;
      }
      *(float *)(lVar13 + 0x1e8) = fVar22 * fVar21;
      fVar21 = fVar22 * fVar21 * *(float *)(lVar14 + lVar17 * 4);
      *(float *)(lVar13 + 0x1e8) = fVar21;
      uVar18 = NEON_rev64(CONCAT44(fVar28 * 0.5,fVar31 * 0.5),4);
      *(undefined8 *)(puVar8 + 0x50) = uVar18;
      if (puVar8[0x30] == '\x01') {
        auVar20._0_8_ = (long)(int)uVar24;
        auVar20._8_8_ = (long)(int)((ulong)uVar24 >> 0x20);
        auVar20 = NEON_scvtf(auVar20,8);
        auVar20 = NEON_ext(auVar20,auVar20,8,1);
        uVar24 = param_5[1];
        auVar35 = NEON_fmov(0x3fe0000000000000,8);
        uVar18 = CONCAT44((float)(((double)(float)((ulong)*param_5 >> 0x20) +
                                  auVar35._8_8_ * (double)(float)((ulong)uVar24 >> 0x20)) *
                                 auVar20._8_8_),
                          (float)(((double)(float)*param_5 + auVar35._0_8_ * (double)(float)uVar24)
                                 * auVar20._0_8_));
        *(undefined8 *)(puVar8 + 0x50) = uVar18;
        uVar24 = NEON_rev64(uVar24,4);
        fVar31 = (float)uVar24 * fVar31;
        fVar21 = (float)((ulong)uVar24 >> 0x20) * fVar28;
        if (fVar21 <= fVar31) {
          fVar21 = fVar31;
        }
        *(float *)(lVar13 + 0x1e8) = fVar21;
      }
    }
    else {
      fVar27 = *(float *)(puVar8 + 0x28);
      fVar22 = *(float *)(puVar8 + 0x2c);
      uVar18 = *(undefined8 *)(puVar8 + 0x50);
    }
    fVar21 = fVar21 / fVar22;
    fVar27 = fVar21 * fVar27;
    fVar22 = (float)uVar18 + fVar27 * -0.5;
    fVar31 = (float)((ulong)uVar18 >> 0x20) + fVar21 * -0.5;
    uVar18 = NEON_scvtf(param_2[1],4);
    uVar15 = NEON_rev64(uVar18,4);
    iVar23 = -(uint)(fVar22 < 0.0);
    iVar26 = -(uint)(fVar31 < 0.0);
    fVar28 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                             CONCAT12((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                      CONCAT11((byte)((uint)fVar22 >> 8) &
                                               ~(byte)((uint)iVar23 >> 8),
                                               SUB41(fVar22,0) & ~(byte)iVar23)));
    uVar19 = CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                      CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                               CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                        CONCAT14(SUB41(fVar31,0) & ~(byte)iVar26,fVar28))));
    uVar15 = uVar15 ^ (uVar15 ^ CONCAT44(fVar21 + fVar31,fVar27 + fVar22)) &
                      ~CONCAT44(-(uint)((float)(uVar15 >> 0x20) < fVar21 + fVar31),
                                -(uint)((float)uVar15 < fVar27 + fVar22));
    fVar28 = (float)uVar15 - fVar28;
    fVar29 = (float)(uVar15 >> 0x20) - (float)(uVar19 >> 0x20);
    fVar32 = (float)NEON_fminnm(fVar28,fVar29);
    iVar23 = -(uint)(fVar32 <= 0.0);
    uVar33 = CONCAT13(~(byte)((uint)iVar23 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar23 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar23 >> 8),~(byte)iVar23)));
    uVar15 = CONCAT44(uVar33,uVar33);
    uVar19 = uVar15 & uVar19;
    uVar15 = uVar15 & CONCAT44(fVar29,fVar28);
    fVar32 = (float)uVar19;
    fVar34 = (float)(uVar19 >> 0x20);
    fVar28 = (float)uVar15;
    fVar29 = (float)(uVar15 >> 0x20);
    uVar30 = NEON_uminv(CONCAT26(-(ushort)(fVar29 == fVar21),
                                 CONCAT24(-(ushort)(fVar28 == fVar27),
                                          CONCAT22(-(ushort)(fVar31 == fVar34),
                                                   -(ushort)(fVar22 == fVar32)))),2);
    if ((uVar30 & 1) == 0) {
      uStack_360 = (long *)CONCAT44((int)(long)(float)(int)fVar34,(int)(long)(float)(int)fVar32);
      uStack_358 = CONCAT44((int)(long)(float)(int)fVar29,(int)(long)(float)(int)fVar28);
      FUN_109a852c8(&uStack_1a0);
      fVar27 = *(float *)(puVar8 + 0x50);
      fVar22 = *(float *)(puVar8 + 0x54);
      iVar23 = *(int *)(puVar8 + 4);
      FUN_109a8261c(&uStack_360,2,3,5);
      uStack_200 = 0x42ff0000;
      puStack_1c0 = &uStack_1f8;
      uStack_1f4 = 0;
      uStack_1f0 = 0;
      iStack_1fc = 0;
      uStack_1f8 = 0;
      lStack_1c8 = 0;
      uStack_1cc = 0;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      alStack_1b0[1] = 0;
      alStack_1b0[0] = 0;
      plStack_1b8 = alStack_1b0;
      (**(code **)(*uStack_360 + 0x18))(uStack_360,&uStack_360,&uStack_200,0xffffffff);
      fVar21 = (float)iVar23 / fVar21;
      FUN_10918eb6c(&uStack_360);
      pfVar3 = (float *)CONCAT44(uStack_1ec,uStack_1f0);
      *pfVar3 = fVar21;
      lVar13 = *plStack_1b8;
      *(float *)((long)pfVar3 + lVar13 + 4) = fVar21;
      iStack_3b0 = *(int *)(puVar8 + 8);
      pfVar3[2] = (float)iStack_3b0 / 2.0 - (fVar27 - fVar32) * fVar21;
      iStack_3ac = *(int *)(puVar8 + 4);
      *(float *)((long)pfVar3 + lVar13 + 8) = (float)iStack_3ac / 2.0 - (fVar22 - fVar34) * fVar21;
      uStack_368 = 0;
      uStack_378 = 0x1010000;
      puStack_370 = (undefined8 *)&uStack_1a0;
      uStack_390 = CONCAT44(uStack_390._4_4_,0x2010000);
      uStack_380 = 0;
      uStack_398 = 0;
      auStack_3a8[0] = 0x1010000;
      uStack_358 = 0;
      uStack_360 = (long *)0x0;
      uStack_348 = 0;
      uStack_350 = 0;
      puStack_3a0 = &uStack_200;
      uStack_388 = param_4;
      FUN_109b1e030(&uStack_378,&uStack_390,auStack_3a8,&iStack_3b0,1,0,&uStack_360);
      if (lStack_1c8 != 0) {
        piVar2 = (int *)(lStack_1c8 + 0x14);
        do {
          iVar23 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_200);
        }
      }
      lStack_1c8 = 0;
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      uStack_1f0 = 0;
      uStack_1ec = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      if (0 < iStack_1fc) {
        lVar13 = 0;
        do {
          puStack_1c0[lVar13] = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iStack_1fc);
      }
      if (plStack_1b8 != alStack_1b0 && plStack_1b8 != (long *)0x0) {
        _free(plStack_1b8[-1]);
      }
      if (lStack_168 != 0) {
        piVar2 = (int *)(lStack_168 + 0x14);
        do {
          iVar23 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_1a0);
        }
      }
      lStack_168 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      if (0 < iStack_19c) {
        lVar13 = 0;
        do {
          *(undefined4 *)(lStack_160 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iStack_19c);
      }
      puVar12 = (undefined8 *)&uStack_1a0;
    }
    else {
      uStack_378 = (undefined4)(long)(float)(int)fVar22;
      uStack_374 = (undefined4)(long)(float)(int)fVar31;
      puStack_370 = (undefined8 *)
                    CONCAT44((int)(long)(float)(int)fVar21,(int)(long)(float)(int)fVar27);
      FUN_109a852c8(&uStack_360);
      uStack_190 = 0;
      uStack_1a0 = 0x1010000;
      uStack_200 = 0x2010000;
      uStack_1f8 = (undefined4)param_4;
      uStack_1f4 = (undefined4)((ulong)param_4 >> 0x20);
      uStack_1f0 = 0;
      uStack_1ec = 0;
      uStack_390 = NEON_rev64(*(undefined8 *)(puVar8 + 4),4);
      puStack_198 = &uStack_360;
      FUN_109b0f718(0,0,&uStack_1a0,&uStack_200,&uStack_390,1);
      if (lStack_328 != 0) {
        piVar2 = (int *)(lStack_328 + 0x14);
        do {
          iVar23 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_360);
        }
      }
      lStack_328 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      if (0 < uStack_360._4_4_) {
        lVar13 = 0;
        do {
          *(undefined4 *)(lStack_320 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < uStack_360._4_4_);
      }
      puVar12 = &uStack_360;
      puStack_158 = puStack_318;
    }
    if (puStack_158 != puVar12 + 10 && puStack_158 != (undefined8 *)0x0) {
      _free(puStack_158[-1]);
    }
    return;
  }
  lVar13 = *(long *)(param_3 + 0x20);
  fVar21 = *(float *)(lVar13 + 0x1e8) / *(float *)(param_1 + 0x2c);
  fVar27 = fVar21 * *(float *)(param_1 + 0x28);
  if (param_2[1] == *param_2) {
    uVar18 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    lVar14 = 0;
    lVar13 = 0;
    uVar15 = 0;
    auVar20 = NEON_fmov(0xbfe0000000000000,8);
    do {
      pfStack_98 = (float *)(*(long *)(param_1 + 0x70) + lVar14);
      lVar17 = *(long *)(param_3 + 0x20) + 0x40;
      FUN_1094e1a28(lVar17,pfStack_98,&UNK_10dd5b8f9,&pfStack_98,&lStack_78);
      lVar10 = *param_2;
      uVar18 = *(undefined8 *)(param_1 + 0x50);
      uVar24 = *(undefined8 *)(lVar10 + lVar13);
      *(ulong *)(lVar17 + 0x28) =
           CONCAT44((float)((ulong)uVar18 >> 0x20) +
                    (float)(((double)(float)((ulong)uVar24 >> 0x20) + auVar20._8_8_) *
                           (double)fVar21),
                    (float)uVar18 +
                    (float)(((double)(float)uVar24 + auVar20._0_8_) * (double)fVar27));
      fVar22 = *(float *)((undefined8 *)(lVar10 + lVar13) + 1);
      *(float *)(lVar17 + 0x30) = fVar22;
      uVar33 = 0x3f800000;
      if (fVar22 <= *(float *)(param_1 + 0x14)) {
        uVar33 = 0;
      }
      *(undefined4 *)(lVar17 + 0x34) = uVar33;
      uVar15 = uVar15 + 1;
      lVar13 = lVar13 + 0x14;
      lVar14 = lVar14 + 0x18;
    } while (uVar15 < *(ulong *)(param_1 + 0x40));
    lVar13 = *(long *)(param_3 + 0x20);
  }
  auVar35._0_8_ = *(undefined8 *)(param_1 + 0x48);
  auVar35._8_8_ = auVar35._0_8_;
  auVar20 = NEON_scvtf(auVar35,4);
  *(float *)(lVar13 + 0x28) = fVar27 / auVar20._8_4_;
  *(float *)(lVar13 + 0x2c) = fVar21 / auVar20._12_4_;
  *(float *)(lVar13 + 0x20) = ((float)uVar18 + fVar27 * -0.5) / auVar20._0_4_;
  *(float *)(lVar13 + 0x24) = ((float)((ulong)uVar18 >> 0x20) + fVar21 * -0.5) / auVar20._4_4_;
  plVar11 = *(long **)(lVar13 + 0x50);
  if (plVar11 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar9 = 0;
    auVar20 = ZEXT816(0);
    do {
      auVar25 = auVar20;
      if (*(float *)(param_1 + 0x14) < *(float *)(plVar11 + 6)) {
        uVar9 = uVar9 + 1;
        auVar25._0_4_ = auVar20._0_4_ + (float)plVar11[5];
        auVar25._4_4_ = auVar20._4_4_ + (float)((ulong)plVar11[5] >> 0x20);
        auVar25._8_8_ = 0;
      }
      uVar15 = auVar25._0_8_;
      plVar11 = (long *)*plVar11;
      auVar20 = auVar25;
    } while (plVar11 != (long *)0x0);
    if (0 < (int)uVar9) {
      uVar15 = CONCAT44(auVar25._4_4_ / (float)uVar9,auVar25._0_4_ / (float)uVar9);
    }
  }
  uVar19 = NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) + -1,
                               (int)*(undefined8 *)(param_1 + 0x48) + -1),4);
  fVar21 = (float)(uVar15 >> 0x20);
  uVar19 = uVar19 ^ (uVar19 ^ uVar15) &
                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < fVar21),
                              -(uint)((float)uVar19 < (float)uVar15));
  iVar23 = -(uint)((float)uVar15 < 0.0);
  iVar26 = -(uint)(fVar21 < 0.0);
  fVar21 = (float)CONCAT13((byte)(uVar19 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                           CONCAT12((byte)(uVar19 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                    CONCAT11((byte)(uVar19 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                             (byte)uVar19 & ~(byte)iVar23)));
  uVar18 = CONCAT17((byte)(uVar19 >> 0x38) & ~(byte)((uint)iVar26 >> 0x18),
                    CONCAT16((byte)(uVar19 >> 0x30) & ~(byte)((uint)iVar26 >> 0x10),
                             CONCAT15((byte)(uVar19 >> 0x28) & ~(byte)((uint)iVar26 >> 8),
                                      CONCAT14((byte)(uVar19 >> 0x20) & ~(byte)iVar26,fVar21))));
  fVar21 = fVar21 - *(float *)(param_1 + 0x50);
  fVar27 = (float)((ulong)uVar18 >> 0x20) - *(float *)(param_1 + 0x54);
  if (*(float *)(param_1 + 0x24) < SQRT(fVar27 * fVar27 + fVar21 * fVar21)) {
    *(undefined8 *)(param_1 + 0x50) = uVar18;
  }
  pfStack_98 = (float *)0x0;
  pfStack_90 = (float *)0x0;
  uStack_88 = 0;
  pfVar3 = *(float **)(param_1 + 0x90);
  if (*(float **)(param_1 + 0x88) == pfVar3) {
    if (*(int *)(param_1 + 0xc) < 1) {
      lVar14 = 0;
      goto LAB_109504878;
    }
  }
  else {
    pfVar16 = *(float **)(param_1 + 0x88) + 2;
    do {
      fVar21 = pfVar16[-1];
      lVar17 = *(long *)(param_1 + 0x70);
      lStack_78 = lVar17 + (long)(int)pfVar16[-2] * 0x18;
      lVar14 = lVar13 + 0x40;
      FUN_1094e1a28(lVar14,lStack_78,&UNK_10dd5b8f9,&lStack_78,&uStack_79);
      lStack_78 = lVar17 + (long)(int)fVar21 * 0x18;
      lVar17 = lVar13 + 0x40;
      FUN_1094e1a28(lVar17,lStack_78,&UNK_10dd5b8f9,&lStack_78,&uStack_79);
      fVar21 = *(float *)(param_1 + 0x14);
      fVar27 = *(float *)(lVar17 + 0x30);
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      if (fVar21 < *(float *)(lVar14 + 0x30)) {
        bVar5 = false;
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar27) && !NAN(fVar21)) {
          bVar5 = fVar27 < fVar21;
          bVar6 = fVar27 == fVar21;
          bVar7 = false;
        }
      }
      if (!bVar6 && bVar5 == bVar7) {
        fVar21 = *(float *)(lVar14 + 0x28) - *(float *)(lVar17 + 0x28);
        fVar27 = *(float *)(lVar14 + 0x2c) - *(float *)(lVar17 + 0x2c);
        lStack_78 = CONCAT44(lStack_78._4_4_,SQRT(fVar27 * fVar27 + fVar21 * fVar21) * *pfVar16);
        FUN_1092c9a40(&pfStack_98,&lStack_78);
      }
      pfVar1 = pfVar16 + 1;
      pfVar16 = pfVar16 + 3;
    } while (pfVar1 != pfVar3);
    lVar14 = (long)pfStack_90 - (long)pfStack_98 >> 2;
    if ((int)lVar14 < *(int *)(param_1 + 0xc)) {
      if (pfStack_98 == (float *)0x0) goto LAB_10950491c;
    }
    else {
LAB_109504878:
      lVar17 = 0;
      if (pfStack_90 != pfStack_98) {
        lVar17 = LZCOUNT(lVar14) * -2 + 0x7e;
      }
      FUN_109504f44(pfStack_98,pfStack_90,lVar17,1);
      if (((long)pfStack_90 - (long)pfStack_98 == 4) || (*(int *)(param_1 + 0xc) == 1)) {
        fVar21 = *pfStack_98;
      }
      else {
        fVar21 = (pfStack_98[1] + *pfStack_98) * 0.5;
      }
      fVar27 = *(float *)(lVar13 + 0x1e8);
      if (*(float *)(param_1 + 0x20) < ABS(*(float *)(lVar13 + 0x1e8) - fVar21)) {
        *(float *)(lVar13 + 0x1e8) = fVar21;
        fVar27 = fVar21;
      }
      if ((float)*(int *)(param_1 + 0xc) <= fVar27) {
        iVar23 = *(int *)(param_1 + 0x48);
        if (*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x4c)) {
          iVar23 = *(int *)(param_1 + 0x4c);
        }
        if (fVar27 <= *(float *)(param_1 + 0x10) * (float)iVar23) {
          pfStack_90 = pfStack_98;
          __ZdlPv();
          goto LAB_109504920;
        }
      }
    }
    pfStack_90 = pfStack_98;
    __ZdlPv();
  }
LAB_10950491c:
  *(undefined4 *)(param_3 + 8) = 0;
LAB_109504920:
  plVar11 = *(long **)(*(long *)(param_3 + 0x20) + 0x50);
  if (plVar11 != (long *)0x0) {
    uVar18 = NEON_scvtf(*(undefined8 *)(param_1 + 0x48),4);
    do {
      plVar11[5] = CONCAT44((float)((ulong)plVar11[5] >> 0x20) / (float)((ulong)uVar18 >> 0x20),
                            (float)plVar11[5] / (float)uVar18);
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  return;
}



/* Entry: 1095049a8; end: 109504eeb;  */

void FUN_1095049a8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar15;
  undefined1 auVar14 [16];
  ushort uVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  float fVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  int iStack_2d0;
  int iStack_2cc;
  undefined4 auStack_2c8 [2];
  undefined4 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_248;
  long lStack_240;
  undefined8 *puStack_238;
  undefined4 uStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  undefined4 *puStack_e0;
  long *plStack_d8;
  long alStack_d0 [2];
  undefined4 uStack_c0;
  int iStack_bc;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  
  lVar6 = *(long *)(param_3 + 0x20);
  if (((*(long *)(param_3 + 0x48) == 0) ||
      (fVar17 = *(float *)(lVar6 + 0x1e8), fVar17 < *(float *)(param_1 + 0x18))) ||
     (*(float *)(param_1 + 0x1c) < fVar17)) {
    puVar7 = *(undefined8 **)(param_2 + 0x40);
    fVar10 = *(float *)(param_1 + 0x28);
    fVar11 = *(float *)(param_1 + 0x2c);
    lVar2 = *(long *)(param_1 + 0x58);
    uVar9 = *(long *)(param_1 + 0x60) - lVar2 >> 2;
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = *(ulong *)(param_1 + 0x38) / uVar9;
    }
    lVar8 = *(ulong *)(param_1 + 0x38) - uVar13 * uVar9;
    *(long *)(param_1 + 0x38) = lVar8 + 1;
    uVar24 = *puVar7;
    uVar20 = NEON_scvtf(uVar24,4);
    fVar12 = (float)((ulong)uVar20 >> 0x20);
    fVar18 = (float)uVar20;
    fVar17 = fVar18;
    if (fVar12 / fVar10 <= fVar18) {
      fVar17 = fVar12 / fVar10;
    }
    *(float *)(lVar6 + 0x1e8) = fVar11 * fVar17;
    fVar17 = fVar11 * fVar17 * *(float *)(lVar2 + lVar8 * 4);
    *(float *)(lVar6 + 0x1e8) = fVar17;
    uVar20 = NEON_rev64(CONCAT44(fVar12 * 0.5,fVar18 * 0.5),4);
    *(undefined8 *)(param_1 + 0x50) = uVar20;
    if (*(char *)(param_1 + 0x30) == '\x01') {
      auVar14._0_8_ = (long)(int)uVar24;
      auVar14._8_8_ = (long)(int)((ulong)uVar24 >> 0x20);
      auVar14 = NEON_scvtf(auVar14,8);
      auVar14 = NEON_ext(auVar14,auVar14,8,1);
      uVar24 = param_5[1];
      auVar26 = NEON_fmov(0x3fe0000000000000,8);
      uVar20 = CONCAT44((float)(((double)(float)((ulong)*param_5 >> 0x20) +
                                auVar26._8_8_ * (double)(float)((ulong)uVar24 >> 0x20)) *
                               auVar14._8_8_),
                        (float)(((double)(float)*param_5 + auVar26._0_8_ * (double)(float)uVar24) *
                               auVar14._0_8_));
      *(undefined8 *)(param_1 + 0x50) = uVar20;
      uVar24 = NEON_rev64(uVar24,4);
      fVar18 = (float)uVar24 * fVar18;
      fVar17 = (float)((ulong)uVar24 >> 0x20) * fVar12;
      if (fVar17 <= fVar18) {
        fVar17 = fVar18;
      }
      *(float *)(lVar6 + 0x1e8) = fVar17;
    }
  }
  else {
    fVar10 = *(float *)(param_1 + 0x28);
    fVar11 = *(float *)(param_1 + 0x2c);
    uVar20 = *(undefined8 *)(param_1 + 0x50);
  }
  fVar17 = fVar17 / fVar11;
  fVar10 = fVar17 * fVar10;
  fVar11 = (float)uVar20 + fVar10 * -0.5;
  fVar18 = (float)((ulong)uVar20 >> 0x20) + fVar17 * -0.5;
  uVar20 = NEON_scvtf(*(undefined8 *)(param_2 + 8),4);
  uVar13 = NEON_rev64(uVar20,4);
  iVar19 = -(uint)(fVar11 < 0.0);
  iVar21 = -(uint)(fVar18 < 0.0);
  fVar12 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                           CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                    CONCAT11((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                             SUB41(fVar11,0) & ~(byte)iVar19)));
  uVar9 = CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                   CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                            CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                     CONCAT14(SUB41(fVar18,0) & ~(byte)iVar21,fVar12))));
  uVar13 = uVar13 ^ (uVar13 ^ CONCAT44(fVar17 + fVar18,fVar10 + fVar11)) &
                    ~CONCAT44(-(uint)((float)(uVar13 >> 0x20) < fVar17 + fVar18),
                              -(uint)((float)uVar13 < fVar10 + fVar11));
  fVar12 = (float)uVar13 - fVar12;
  fVar15 = (float)(uVar13 >> 0x20) - (float)(uVar9 >> 0x20);
  fVar22 = (float)NEON_fminnm(fVar12,fVar15);
  iVar19 = -(uint)(fVar22 <= 0.0);
  uVar23 = CONCAT13(~(byte)((uint)iVar19 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar19 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar19 >> 8),~(byte)iVar19)));
  uVar13 = CONCAT44(uVar23,uVar23);
  uVar9 = uVar13 & uVar9;
  uVar13 = uVar13 & CONCAT44(fVar15,fVar12);
  fVar22 = (float)uVar9;
  fVar25 = (float)(uVar9 >> 0x20);
  fVar12 = (float)uVar13;
  fVar15 = (float)(uVar13 >> 0x20);
  uVar16 = NEON_uminv(CONCAT26(-(ushort)(fVar15 == fVar17),
                               CONCAT24(-(ushort)(fVar12 == fVar10),
                                        CONCAT22(-(ushort)(fVar18 == fVar25),
                                                 -(ushort)(fVar11 == fVar22)))),2);
  if ((uVar16 & 1) == 0) {
    uStack_280 = (long *)CONCAT44((int)(long)(float)(int)fVar25,(int)(long)(float)(int)fVar22);
    uStack_278 = CONCAT44((int)(long)(float)(int)fVar15,(int)(long)(float)(int)fVar12);
    FUN_109a852c8(&uStack_c0,param_2,&uStack_280);
    fVar10 = *(float *)(param_1 + 0x50);
    fVar11 = *(float *)(param_1 + 0x54);
    iVar19 = *(int *)(param_1 + 4);
    FUN_109a8261c(&uStack_280,2,3,5);
    uStack_120 = 0x42ff0000;
    puStack_e0 = &uStack_118;
    uStack_114 = 0;
    uStack_110 = 0;
    iStack_11c = 0;
    uStack_118 = 0;
    lStack_e8 = 0;
    uStack_ec = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    alStack_d0[1] = 0;
    alStack_d0[0] = 0;
    plStack_d8 = alStack_d0;
    (**(code **)(*uStack_280 + 0x18))(uStack_280,&uStack_280,&uStack_120,0xffffffff);
    fVar17 = (float)iVar19 / fVar17;
    FUN_10918eb6c(&uStack_280);
    pfVar5 = (float *)CONCAT44(uStack_10c,uStack_110);
    *pfVar5 = fVar17;
    lVar6 = *plStack_d8;
    *(float *)((long)pfVar5 + lVar6 + 4) = fVar17;
    iStack_2d0 = *(int *)(param_1 + 8);
    pfVar5[2] = (float)iStack_2d0 / 2.0 - (fVar10 - fVar22) * fVar17;
    iStack_2cc = *(int *)(param_1 + 4);
    *(float *)((long)pfVar5 + lVar6 + 8) = (float)iStack_2cc / 2.0 - (fVar11 - fVar25) * fVar17;
    uStack_288 = 0;
    uStack_298 = 0x1010000;
    puStack_290 = (undefined8 *)&uStack_c0;
    uStack_2b0 = CONCAT44(uStack_2b0._4_4_,0x2010000);
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    auStack_2c8[0] = 0x1010000;
    uStack_278 = 0;
    uStack_280 = (long *)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    puStack_2c0 = &uStack_120;
    uStack_2a8 = param_4;
    FUN_109b1e030(&uStack_298,&uStack_2b0,auStack_2c8,&iStack_2d0,1,0,&uStack_280);
    if (lStack_e8 != 0) {
      piVar1 = (int *)(lStack_e8 + 0x14);
      do {
        iVar19 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(&uStack_120);
      }
    }
    lStack_e8 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    if (0 < iStack_11c) {
      lVar6 = 0;
      do {
        puStack_e0[lVar6] = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_11c);
    }
    if (plStack_d8 != alStack_d0 && plStack_d8 != (long *)0x0) {
      _free(plStack_d8[-1]);
    }
    if (lStack_88 != 0) {
      piVar1 = (int *)(lStack_88 + 0x14);
      do {
        iVar19 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(&uStack_c0);
      }
    }
    lStack_88 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    if (0 < iStack_bc) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lStack_80 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_bc);
    }
    puVar7 = (undefined8 *)&uStack_c0;
  }
  else {
    uStack_298 = (undefined4)(long)(float)(int)fVar11;
    uStack_294 = (undefined4)(long)(float)(int)fVar18;
    puStack_290 = (undefined8 *)
                  CONCAT44((int)(long)(float)(int)fVar17,(int)(long)(float)(int)fVar10);
    FUN_109a852c8(&uStack_280,param_2,&uStack_298);
    uStack_b0 = 0;
    uStack_c0 = 0x1010000;
    uStack_120 = 0x2010000;
    uStack_118 = (undefined4)param_4;
    uStack_114 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_2b0 = NEON_rev64(*(undefined8 *)(param_1 + 4),4);
    puStack_b8 = &uStack_280;
    FUN_109b0f718(0,0,&uStack_c0,&uStack_120,&uStack_2b0,1);
    if (lStack_248 != 0) {
      piVar1 = (int *)(lStack_248 + 0x14);
      do {
        iVar19 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(&uStack_280);
      }
    }
    lStack_248 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    if (0 < uStack_280._4_4_) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lStack_240 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < uStack_280._4_4_);
    }
    puVar7 = &uStack_280;
    puStack_78 = puStack_238;
  }
  if (puStack_78 != puVar7 + 10 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  return;
}



/* Entry: 109504eec; end: 109504eff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109504eec(undefined8 param_1,float *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  byte bVar44;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  float fVar45;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  long lVar54;
  byte bVar61;
  long lVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uStack_94;
  
  pfVar10 = (float *)&DAT_10f62a4d8;
  uStack_94 = param_4;
  func_0x000104c4f6cc();
  if (pfVar10 < (float *)0x1555555555555556) {
    __Znwm((long)pfVar10 * 0xc);
    return;
  }
  func_0x000104c4f740();
LAB_109504f9c:
  do {
    pfVar23 = pfVar10;
    uVar13 = (long)param_2 - (long)pfVar23 >> 2;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return;
      }
      if (uVar13 == 2) {
        fVar24 = *pfVar23;
        if (param_2[-1] <= fVar24) {
          return;
        }
        *pfVar23 = param_2[-1];
        param_2[-1] = fVar24;
        return;
      }
    }
    else {
      if (uVar13 == 3) {
        fVar24 = pfVar23[1];
        fVar26 = param_2[-1];
        uVar28 = SUB41(fVar26,0);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        if (fVar26 < fVar24) {
          uVar28 = SUB41(fVar24,0);
          uVar29 = (undefined1)((uint)fVar24 >> 8);
          uVar30 = (undefined1)((uint)fVar24 >> 0x10);
          uVar31 = (undefined1)((uint)fVar24 >> 0x18);
          fVar24 = fVar26;
        }
        param_2[-1] = fVar24;
        pfVar23[1] = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        fVar24 = param_2[-1];
        fVar26 = *pfVar23;
        uVar28 = SUB41(fVar26,0);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        if (fVar26 < fVar24) {
          uVar28 = SUB41(fVar24,0);
          uVar29 = (undefined1)((uint)fVar24 >> 8);
          uVar30 = (undefined1)((uint)fVar24 >> 0x10);
          uVar31 = (undefined1)((uint)fVar24 >> 0x18);
          fVar24 = fVar26;
        }
        param_2[-1] = fVar24;
        fVar26 = pfVar23[1];
        bVar8 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) != fVar26;
        bVar9 = fVar26 <= (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        fVar24 = fVar26;
        if (bVar8 && bVar9) {
          fVar24 = *pfVar23;
        }
        fVar27 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        if (bVar8 && bVar9) {
          fVar27 = fVar26;
        }
        *pfVar23 = fVar24;
        pfVar23[1] = fVar27;
        return;
      }
      if (uVar13 == 4) {
        fVar24 = pfVar23[1];
        fVar26 = pfVar23[2];
        fVar45 = *pfVar23;
        fVar27 = fVar45;
        if (fVar26 < fVar45) {
          fVar27 = fVar26;
          fVar26 = fVar45;
        }
        pfVar23[2] = fVar27;
        *pfVar23 = fVar26;
        fVar26 = param_2[-1];
        fVar27 = fVar24;
        if (fVar26 < fVar24) {
          fVar27 = fVar26;
          fVar26 = fVar24;
        }
        param_2[-1] = fVar27;
        fVar24 = *pfVar23;
        uVar28 = SUB41(fVar26,0);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        if (fVar26 < fVar24) {
          uVar28 = SUB41(fVar24,0);
          uVar29 = (undefined1)((uint)fVar24 >> 8);
          uVar30 = (undefined1)((uint)fVar24 >> 0x10);
          uVar31 = (undefined1)((uint)fVar24 >> 0x18);
          fVar24 = fVar26;
        }
        *pfVar23 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        pfVar23[1] = fVar24;
        fVar24 = pfVar23[2];
        fVar26 = param_2[-1];
        uVar28 = SUB41(fVar26,0);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        if (fVar26 < fVar24) {
          uVar28 = SUB41(fVar24,0);
          uVar29 = (undefined1)((uint)fVar24 >> 8);
          uVar30 = (undefined1)((uint)fVar24 >> 0x10);
          uVar31 = (undefined1)((uint)fVar24 >> 0x18);
          fVar24 = fVar26;
        }
        param_2[-1] = fVar24;
        fVar24 = pfVar23[1];
        bVar8 = fVar24 != (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        bVar9 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) <= fVar24;
        fVar26 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        if (bVar8 && bVar9) {
          fVar26 = fVar24;
        }
        if (bVar8 && bVar9) {
          fVar24 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        }
        pfVar23[1] = fVar26;
        pfVar23[2] = fVar24;
        return;
      }
      if (uVar13 == 5) {
        fVar24 = *pfVar23;
        fVar26 = pfVar23[1];
        uVar28 = SUB41(fVar26,0);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        if (fVar26 < fVar24) {
          uVar28 = SUB41(fVar24,0);
          uVar29 = (undefined1)((uint)fVar24 >> 8);
          uVar30 = (undefined1)((uint)fVar24 >> 0x10);
          uVar31 = (undefined1)((uint)fVar24 >> 0x18);
          fVar24 = fVar26;
        }
        *pfVar23 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        pfVar23[1] = fVar24;
        fVar24 = pfVar23[3];
        fVar26 = param_2[-1];
        uVar28 = SUB41(fVar26,0);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        if (fVar26 < fVar24) {
          uVar28 = SUB41(fVar24,0);
          uVar29 = (undefined1)((uint)fVar24 >> 8);
          uVar30 = (undefined1)((uint)fVar24 >> 0x10);
          uVar31 = (undefined1)((uint)fVar24 >> 0x18);
          fVar24 = fVar26;
        }
        param_2[-1] = fVar24;
        pfVar23[3] = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        fVar24 = param_2[-1];
        fVar26 = pfVar23[2];
        uVar28 = SUB41(fVar26,0);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        if (fVar26 < fVar24) {
          uVar28 = SUB41(fVar24,0);
          uVar29 = (undefined1)((uint)fVar24 >> 8);
          uVar30 = (undefined1)((uint)fVar24 >> 0x10);
          uVar31 = (undefined1)((uint)fVar24 >> 0x18);
          fVar24 = fVar26;
        }
        param_2[-1] = fVar24;
        fVar26 = pfVar23[3];
        bVar8 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) != fVar26;
        bVar9 = fVar26 <= (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        fVar27 = pfVar23[1];
        fVar24 = fVar26;
        if (bVar8 && bVar9) {
          fVar24 = pfVar23[2];
        }
        fVar45 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        if (bVar8 && bVar9) {
          fVar45 = fVar26;
        }
        pfVar23[2] = fVar24;
        pfVar23[3] = fVar45;
        fVar24 = param_2[-1];
        fVar26 = fVar27;
        if (fVar24 < fVar27) {
          fVar26 = fVar24;
          fVar24 = fVar27;
        }
        param_2[-1] = fVar26;
        fVar25 = *pfVar23;
        fVar45 = pfVar23[2];
        fVar26 = pfVar23[3];
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar28 = SUB41(fVar26,0);
        fVar27 = fVar25;
        if (fVar25 < fVar26) {
          uVar28 = SUB41(fVar25,0);
          uVar29 = (undefined1)((uint)fVar25 >> 8);
          uVar30 = (undefined1)((uint)fVar25 >> 0x10);
          uVar31 = (undefined1)((uint)fVar25 >> 0x18);
          fVar27 = fVar26;
        }
        if (fVar45 < fVar27) {
          fVar27 = fVar45;
          fVar45 = fVar25;
        }
        fVar26 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        fVar25 = fVar24;
        if ((float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) != fVar24 &&
            fVar24 <= (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)))) {
          uVar28 = SUB41(fVar24,0);
          uVar29 = (undefined1)((uint)fVar24 >> 8);
          uVar30 = (undefined1)((uint)fVar24 >> 0x10);
          uVar31 = (undefined1)((uint)fVar24 >> 0x18);
          fVar25 = fVar26;
        }
        fVar26 = fVar27;
        if (fVar27 < fVar25) {
          fVar26 = fVar24;
        }
        *pfVar23 = fVar45;
        pfVar23[1] = fVar26;
        if (fVar27 < fVar25) {
          fVar25 = fVar27;
        }
        pfVar23[2] = fVar25;
        pfVar23[3] = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
        return;
      }
    }
    if ((long)uVar13 < 0x18) {
      pfVar10 = pfVar23 + 1;
      if ((uStack_94 & 1) == 0) {
        if (pfVar23 == param_2 || pfVar10 == param_2) {
          return;
        }
        do {
          pfVar11 = pfVar10;
          fVar26 = *pfVar23;
          fVar24 = pfVar23[1];
          pfVar10 = pfVar11;
          if (fVar26 < fVar24) {
            do {
              *pfVar10 = fVar26;
              fVar26 = pfVar10[-2];
              pfVar10 = pfVar10 + -1;
            } while (fVar26 < fVar24);
            *pfVar10 = fVar24;
          }
          pfVar10 = pfVar11 + 1;
          pfVar23 = pfVar11;
        } while (pfVar11 + 1 != param_2);
        return;
      }
      if (pfVar23 == param_2 || pfVar10 == param_2) {
        return;
      }
      lVar17 = 4;
      pfVar11 = pfVar23;
      do {
        pfVar12 = pfVar10;
        fVar26 = *pfVar11;
        fVar24 = pfVar11[1];
        lVar15 = lVar17;
        if (fVar26 < fVar24) {
          do {
            *(float *)((long)pfVar23 + lVar15) = fVar26;
            lVar62 = lVar15 + -4;
            pfVar10 = pfVar23;
            if (lVar62 == 0) goto LAB_109505870;
            fVar26 = *(float *)((long)pfVar23 + lVar15 + -8);
            lVar15 = lVar62;
          } while (fVar26 < fVar24);
          pfVar10 = (float *)((long)pfVar23 + lVar62);
LAB_109505870:
          *pfVar10 = fVar24;
        }
        pfVar10 = pfVar12 + 1;
        lVar17 = lVar17 + 4;
        pfVar11 = pfVar12;
        if (pfVar10 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pfVar23 == param_2) {
        return;
      }
      uVar21 = uVar13 - 2 >> 1;
      uVar16 = uVar21;
      do {
        if ((long)uVar16 <= (long)uVar21) {
          uVar20 = uVar16 << 1 | 1;
          pfVar10 = pfVar23 + uVar20;
          uVar18 = uVar16 * 2 + 2;
          if (((long)uVar18 < (long)uVar13) && (pfVar10[1] < *pfVar10)) {
            uVar20 = uVar18;
            pfVar10 = pfVar10 + 1;
          }
          fVar26 = *pfVar10;
          fVar24 = pfVar23[uVar16];
          pfVar11 = pfVar23 + uVar16;
          if (fVar26 <= fVar24) {
            do {
              pfVar12 = pfVar10;
              *pfVar11 = fVar26;
              if ((long)uVar21 < (long)uVar20) break;
              uVar1 = uVar20 << 1 | 1;
              pfVar10 = pfVar23 + uVar1;
              uVar18 = uVar20 * 2 + 2;
              uVar20 = uVar1;
              if (((long)uVar18 < (long)uVar13) && (pfVar10[1] < *pfVar10)) {
                uVar20 = uVar18;
                pfVar10 = pfVar10 + 1;
              }
              fVar26 = *pfVar10;
              pfVar11 = pfVar12;
            } while (fVar26 <= fVar24);
            *pfVar12 = fVar24;
          }
        }
        bVar9 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar9);
      do {
        fVar24 = *pfVar23;
        pfVar10 = pfVar23;
        uVar16 = 0;
        do {
          uVar18 = uVar16 << 1 | 1;
          uVar21 = uVar16 * 2 + 2;
          pfVar11 = pfVar10 + uVar16 + 1;
          if (((long)uVar21 < (long)uVar13) && (pfVar10[uVar16 + 2] < pfVar10[uVar16 + 1])) {
            pfVar11 = pfVar10 + uVar16 + 2;
            uVar18 = uVar21;
          }
          *pfVar10 = *pfVar11;
          pfVar10 = pfVar11;
          uVar16 = uVar18;
        } while ((long)uVar18 <= (long)(uVar13 - 2 >> 1));
        param_2 = param_2 + -1;
        if (pfVar11 == param_2) {
LAB_109505a20:
          *pfVar11 = fVar24;
        }
        else {
          *pfVar11 = *param_2;
          *param_2 = fVar24;
          lVar17 = (long)((long)pfVar11 + (4 - (long)pfVar23)) >> 2;
          if (1 < lVar17) {
            uVar16 = lVar17 - 2U >> 1;
            fVar26 = pfVar23[uVar16];
            fVar24 = *pfVar11;
            pfVar12 = pfVar23 + uVar16;
            if (fVar24 < fVar26) {
              do {
                pfVar11 = pfVar12;
                *pfVar10 = fVar26;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1 >> 1;
                fVar26 = pfVar23[uVar16];
                pfVar10 = pfVar11;
                pfVar12 = pfVar23 + uVar16;
              } while (fVar24 < fVar26);
              goto LAB_109505a20;
            }
          }
        }
        bVar9 = (long)uVar13 < 3;
        uVar13 = uVar13 - 1;
        if (bVar9) {
          return;
        }
      } while( true );
    }
    pfVar10 = pfVar23 + (uVar13 >> 1);
    fVar24 = param_2[-1];
    uVar28 = SUB41(fVar24,0);
    uVar29 = (undefined1)((uint)fVar24 >> 8);
    uVar30 = (undefined1)((uint)fVar24 >> 0x10);
    uVar31 = (undefined1)((uint)fVar24 >> 0x18);
    if (uVar13 < 0x81) {
      fVar26 = *pfVar23;
      if (fVar24 < fVar26) {
        uVar28 = SUB41(fVar26,0);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        fVar26 = fVar24;
      }
      param_2[-1] = fVar26;
      *pfVar23 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      fVar24 = param_2[-1];
      fVar26 = *pfVar10;
      uVar28 = SUB41(fVar26,0);
      uVar29 = (undefined1)((uint)fVar26 >> 8);
      uVar30 = (undefined1)((uint)fVar26 >> 0x10);
      uVar31 = (undefined1)((uint)fVar26 >> 0x18);
      if (fVar26 < fVar24) {
        uVar28 = SUB41(fVar24,0);
        uVar29 = (undefined1)((uint)fVar24 >> 8);
        uVar30 = (undefined1)((uint)fVar24 >> 0x10);
        uVar31 = (undefined1)((uint)fVar24 >> 0x18);
        fVar24 = fVar26;
      }
      param_2[-1] = fVar24;
      fVar24 = *pfVar23;
      bVar8 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) != fVar24;
      bVar9 = fVar24 <= (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      if (bVar8 && bVar9) {
        fVar24 = *pfVar10;
      }
      *pfVar10 = fVar24;
      fVar24 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      if (bVar8 && bVar9) {
        fVar24 = *pfVar23;
      }
      *pfVar23 = fVar24;
    }
    else {
      fVar26 = *pfVar10;
      if (fVar24 < fVar26) {
        uVar28 = SUB41(fVar26,0);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        fVar26 = fVar24;
      }
      param_2[-1] = fVar26;
      *pfVar10 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      fVar24 = param_2[-1];
      fVar26 = *pfVar23;
      uVar28 = SUB41(fVar26,0);
      uVar29 = (undefined1)((uint)fVar26 >> 8);
      uVar30 = (undefined1)((uint)fVar26 >> 0x10);
      uVar31 = (undefined1)((uint)fVar26 >> 0x18);
      if (fVar26 < fVar24) {
        uVar28 = SUB41(fVar24,0);
        uVar29 = (undefined1)((uint)fVar24 >> 8);
        uVar30 = (undefined1)((uint)fVar24 >> 0x10);
        uVar31 = (undefined1)((uint)fVar24 >> 0x18);
        fVar24 = fVar26;
      }
      param_2[-1] = fVar24;
      fVar24 = *pfVar10;
      bVar8 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) != fVar24;
      bVar9 = fVar24 <= (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      if (bVar8 && bVar9) {
        fVar24 = *pfVar23;
      }
      *pfVar23 = fVar24;
      fVar24 = pfVar10[-1];
      fVar26 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      if (bVar8 && bVar9) {
        fVar26 = *pfVar10;
      }
      *pfVar10 = fVar26;
      fVar26 = param_2[-2];
      uVar28 = SUB41(fVar26,0);
      uVar29 = (undefined1)((uint)fVar26 >> 8);
      uVar30 = (undefined1)((uint)fVar26 >> 0x10);
      uVar31 = (undefined1)((uint)fVar26 >> 0x18);
      if (fVar26 < fVar24) {
        uVar28 = SUB41(fVar24,0);
        uVar29 = (undefined1)((uint)fVar24 >> 8);
        uVar30 = (undefined1)((uint)fVar24 >> 0x10);
        uVar31 = (undefined1)((uint)fVar24 >> 0x18);
        fVar24 = fVar26;
      }
      param_2[-2] = fVar24;
      pfVar10[-1] = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      fVar24 = param_2[-2];
      fVar26 = pfVar23[1];
      uVar28 = SUB41(fVar26,0);
      uVar29 = (undefined1)((uint)fVar26 >> 8);
      uVar30 = (undefined1)((uint)fVar26 >> 0x10);
      uVar31 = (undefined1)((uint)fVar26 >> 0x18);
      if (fVar26 < fVar24) {
        uVar28 = SUB41(fVar24,0);
        uVar29 = (undefined1)((uint)fVar24 >> 8);
        uVar30 = (undefined1)((uint)fVar24 >> 0x10);
        uVar31 = (undefined1)((uint)fVar24 >> 0x18);
        fVar24 = fVar26;
      }
      param_2[-2] = fVar24;
      fVar24 = pfVar10[-1];
      bVar8 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) != fVar24;
      bVar9 = fVar24 <= (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      if (bVar8 && bVar9) {
        fVar24 = pfVar23[1];
      }
      pfVar23[1] = fVar24;
      fVar24 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      if (bVar8 && bVar9) {
        fVar24 = pfVar10[-1];
      }
      pfVar10[-1] = fVar24;
      fVar24 = pfVar10[1];
      fVar26 = param_2[-3];
      uVar28 = SUB41(fVar26,0);
      uVar29 = (undefined1)((uint)fVar26 >> 8);
      uVar30 = (undefined1)((uint)fVar26 >> 0x10);
      uVar31 = (undefined1)((uint)fVar26 >> 0x18);
      if (fVar26 < fVar24) {
        uVar28 = SUB41(fVar24,0);
        uVar29 = (undefined1)((uint)fVar24 >> 8);
        uVar30 = (undefined1)((uint)fVar24 >> 0x10);
        uVar31 = (undefined1)((uint)fVar24 >> 0x18);
        fVar24 = fVar26;
      }
      param_2[-3] = fVar24;
      pfVar10[1] = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      fVar24 = param_2[-3];
      fVar26 = pfVar23[2];
      uVar28 = SUB41(fVar26,0);
      uVar29 = (undefined1)((uint)fVar26 >> 8);
      uVar30 = (undefined1)((uint)fVar26 >> 0x10);
      uVar31 = (undefined1)((uint)fVar26 >> 0x18);
      if (fVar26 < fVar24) {
        uVar28 = SUB41(fVar24,0);
        uVar29 = (undefined1)((uint)fVar24 >> 8);
        uVar30 = (undefined1)((uint)fVar24 >> 0x10);
        uVar31 = (undefined1)((uint)fVar24 >> 0x18);
        fVar24 = fVar26;
      }
      param_2[-3] = fVar24;
      fVar24 = pfVar10[1];
      bVar8 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) != fVar24;
      bVar9 = fVar24 <= (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      if (bVar8 && bVar9) {
        fVar24 = pfVar23[2];
      }
      pfVar23[2] = fVar24;
      fVar26 = *pfVar10;
      fVar24 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      if (bVar8 && bVar9) {
        fVar24 = pfVar10[1];
      }
      fVar27 = pfVar10[-1];
      fVar45 = fVar26;
      if (fVar24 < fVar26) {
        fVar45 = fVar24;
        fVar24 = fVar26;
      }
      fVar25 = fVar45;
      fVar26 = fVar27;
      if (fVar27 < fVar45) {
        fVar25 = fVar27;
        fVar26 = fVar45;
      }
      if (fVar24 < fVar26) {
        fVar26 = fVar24;
        fVar24 = fVar27;
      }
      pfVar10[-1] = fVar24;
      *pfVar10 = fVar26;
      pfVar10[1] = fVar25;
      fVar24 = *pfVar23;
      *pfVar23 = fVar26;
      *pfVar10 = fVar24;
      fVar24 = *pfVar23;
    }
    param_3 = param_3 + -1;
    pfVar10 = pfVar23;
    if (((uStack_94 & 1) == 0) && (pfVar23[-1] <= fVar24)) {
      if (fVar24 <= param_2[-1]) {
        do {
          pfVar10 = pfVar10 + 1;
          if (param_2 <= pfVar10) break;
        } while (fVar24 <= *pfVar10);
      }
      else {
        do {
          pfVar10 = pfVar10 + 1;
        } while (fVar24 <= *pfVar10);
      }
      pfVar11 = param_2;
      if (pfVar10 < param_2) {
        do {
          pfVar11 = pfVar11 + -1;
        } while (*pfVar11 < fVar24);
      }
      if (pfVar10 < pfVar11) {
        fVar27 = *pfVar10;
        fVar26 = *pfVar11;
        uVar28 = SUB41(fVar26,0);
        uVar29 = (undefined1)((uint)fVar26 >> 8);
        uVar30 = (undefined1)((uint)fVar26 >> 0x10);
        uVar31 = (undefined1)((uint)fVar26 >> 0x18);
        do {
          *pfVar10 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
          *pfVar11 = fVar27;
          do {
            pfVar10 = pfVar10 + 1;
            fVar27 = *pfVar10;
          } while (fVar24 <= fVar27);
          do {
            pfVar11 = pfVar11 + -1;
            fVar26 = *pfVar11;
            uVar28 = SUB41(fVar26,0);
            uVar29 = (undefined1)((uint)fVar26 >> 8);
            uVar30 = (undefined1)((uint)fVar26 >> 0x10);
            uVar31 = (undefined1)((uint)fVar26 >> 0x18);
          } while (fVar26 < fVar24);
        } while (pfVar10 < pfVar11);
      }
      pfVar11 = pfVar10 + -1;
      if (pfVar11 != pfVar23) {
        *pfVar23 = *pfVar11;
      }
      uStack_94 = 0;
      *pfVar11 = fVar24;
      goto LAB_109504f9c;
    }
    pfVar11 = pfVar23;
    if (fVar24 <= param_2[-1]) {
      do {
        pfVar11 = pfVar11 + 1;
        if (param_2 <= pfVar11) break;
      } while (fVar24 <= *pfVar11);
    }
    else {
      do {
        pfVar11 = pfVar11 + 1;
      } while (fVar24 <= *pfVar11);
    }
    pfVar12 = param_2;
    if (pfVar11 < param_2) {
      do {
        pfVar12 = pfVar12 + -1;
      } while (*pfVar12 < fVar24);
    }
    pfVar10 = pfVar11;
    if (pfVar11 < pfVar12) {
      fVar26 = *pfVar11;
      pfVar10 = pfVar11 + 1;
      *pfVar11 = *pfVar12;
      *pfVar12 = fVar26;
    }
    pfVar14 = pfVar12 + -1;
    if ((long)pfVar14 - (long)pfVar10 < 0x1f9) {
      uVar13 = 0;
      lVar17 = (long)pfVar14 - (long)pfVar10 >> 2;
      bVar9 = true;
LAB_1095053b4:
      uVar18 = (lVar17 + 1) / 2;
      uVar21 = (lVar17 + 1) - uVar18;
LAB_1095053c4:
      if ((long)uVar18 < 1) {
        uVar16 = 0;
      }
      else {
        uVar20 = 0;
        uVar16 = 0;
        do {
          uVar16 = (ulong)(pfVar10[uVar20] <= fVar24) << (uVar20 & 0x3f) | uVar16;
          uVar20 = uVar20 + 1;
        } while (uVar18 != uVar20);
      }
      uVar20 = uVar18;
      uVar18 = uVar13;
      uVar1 = uVar16;
      if (!bVar9) goto joined_r0x00010950543c;
LAB_109505408:
      if (0 < (long)uVar21) {
        uVar19 = 0;
        uVar13 = 0;
        pfVar22 = pfVar14;
        do {
          uVar13 = (ulong)(fVar24 < *pfVar22) << (uVar19 & 0x3f) | uVar13;
          uVar19 = uVar19 + 1;
          pfVar22 = pfVar22 + -1;
          uVar18 = uVar13;
          uVar1 = uVar16;
        } while (uVar21 != uVar19);
        goto joined_r0x00010950543c;
      }
      if (uVar16 != 0) {
        uVar20 = 0;
      }
      pfVar10 = pfVar10 + uVar20;
LAB_1095054d8:
      if (uVar16 != 0) {
        pfVar14 = pfVar14 + -uVar21;
        pfVar22 = pfVar10;
LAB_1095054e0:
        do {
          pfVar10 = pfVar14;
          pfVar14 = pfVar22 + (LZCOUNT(uVar16) ^ 0x3fU);
          if (pfVar10 != pfVar14) {
            fVar26 = *pfVar14;
            *pfVar14 = *pfVar10;
            *pfVar10 = fVar26;
          }
          uVar16 = uVar16 & (-1L << ((LZCOUNT(uVar16) ^ 0x3fU) & 0x3f) ^ 0xffffffffffffffffU);
          pfVar14 = pfVar10 + -1;
        } while (uVar16 != 0);
      }
    }
    else {
      uVar13 = 0;
      uVar16 = 0;
      do {
        if (uVar16 == 0) {
          bVar44 = 0;
          bVar46 = 0;
          bVar47 = 0;
          bVar48 = 0;
          bVar49 = 0;
          bVar50 = 0;
          bVar51 = 0;
          bVar52 = 0;
          bVar53 = 0;
          bVar55 = 0;
          bVar56 = 0;
          bVar57 = 0;
          bVar58 = 0;
          bVar59 = 0;
          bVar60 = 0;
          bVar61 = 0;
          auVar80 = ZEXT816(1) << 0x40;
          bVar63 = 0;
          bVar64 = 0;
          bVar65 = 0;
          bVar66 = 0;
          bVar67 = 0;
          bVar68 = 0;
          bVar69 = 0;
          bVar70 = 0;
          bVar71 = 0;
          bVar72 = 0;
          bVar73 = 0;
          bVar74 = 0;
          bVar75 = 0;
          bVar76 = 0;
          bVar77 = 0;
          bVar78 = 0;
          lVar17 = 0;
          lVar62 = 3;
          lVar15 = 2;
          do {
            pfVar22 = (float *)((long)pfVar10 + lVar17);
            auVar82[0] = ~-(fVar24 < pfVar22[2]) & 1;
            auVar82._1_7_ = 0;
            auVar82[8] = ~-(fVar24 < pfVar22[3]) & 1;
            auVar82._9_7_ = 0;
            auVar79[0] = ~-(fVar24 < *pfVar22) & 1;
            auVar79._1_7_ = 0;
            auVar79[8] = ~-(fVar24 < pfVar22[1]) & 1;
            auVar79._9_7_ = 0;
            auVar79 = NEON_ushl(auVar79,auVar80,8);
            auVar84._8_8_ = lVar62;
            auVar84._0_8_ = lVar15;
            auVar84 = NEON_ushl(auVar82,auVar84,8);
            bVar63 = auVar84[0] | bVar63;
            bVar64 = auVar84[1] | bVar64;
            bVar65 = auVar84[2] | bVar65;
            bVar66 = auVar84[3] | bVar66;
            bVar67 = auVar84[4] | bVar67;
            bVar68 = auVar84[5] | bVar68;
            bVar69 = auVar84[6] | bVar69;
            bVar70 = auVar84[7] | bVar70;
            bVar71 = auVar84[8] | bVar71;
            bVar72 = auVar84[9] | bVar72;
            bVar73 = auVar84[10] | bVar73;
            bVar74 = auVar84[0xb] | bVar74;
            bVar75 = auVar84[0xc] | bVar75;
            bVar76 = auVar84[0xd] | bVar76;
            bVar77 = auVar84[0xe] | bVar77;
            bVar78 = auVar84[0xf] | bVar78;
            bVar44 = auVar79[0] | bVar44;
            bVar46 = auVar79[1] | bVar46;
            bVar47 = auVar79[2] | bVar47;
            bVar48 = auVar79[3] | bVar48;
            bVar49 = auVar79[4] | bVar49;
            bVar50 = auVar79[5] | bVar50;
            bVar51 = auVar79[6] | bVar51;
            bVar52 = auVar79[7] | bVar52;
            bVar53 = auVar79[8] | bVar53;
            bVar55 = auVar79[9] | bVar55;
            bVar56 = auVar79[10] | bVar56;
            bVar57 = auVar79[0xb] | bVar57;
            bVar58 = auVar79[0xc] | bVar58;
            bVar59 = auVar79[0xd] | bVar59;
            bVar60 = auVar79[0xe] | bVar60;
            bVar61 = auVar79[0xf] | bVar61;
            lVar15 = lVar15 + 4;
            lVar62 = lVar62 + 4;
            lVar54 = auVar80._8_8_;
            auVar80._0_8_ = auVar80._0_8_ + 4;
            auVar80._8_8_ = lVar54 + 4;
            lVar17 = lVar17 + 0x10;
          } while (lVar17 != 0x100);
          bVar44 = bVar44 | bVar63;
          bVar46 = bVar46 | bVar64;
          bVar47 = bVar47 | bVar65;
          bVar48 = bVar48 | bVar66;
          bVar49 = bVar49 | bVar67;
          bVar50 = bVar50 | bVar68;
          bVar51 = bVar51 | bVar69;
          bVar52 = bVar52 | bVar70;
          auVar5[1] = bVar46;
          auVar5[0] = bVar44;
          auVar5[2] = bVar47;
          auVar5[3] = bVar48;
          auVar5[4] = bVar49;
          auVar5[5] = bVar50;
          auVar5[6] = bVar51;
          auVar5[7] = bVar52;
          auVar5[8] = bVar53 | bVar71;
          auVar5[9] = bVar55 | bVar72;
          auVar5[10] = bVar56 | bVar73;
          auVar5[0xb] = bVar57 | bVar74;
          auVar5[0xc] = bVar58 | bVar75;
          auVar5[0xd] = bVar59 | bVar76;
          auVar5[0xe] = bVar60 | bVar77;
          auVar5[0xf] = bVar61 | bVar78;
          auVar6[1] = bVar46;
          auVar6[0] = bVar44;
          auVar6[2] = bVar47;
          auVar6[3] = bVar48;
          auVar6[4] = bVar49;
          auVar6[5] = bVar50;
          auVar6[6] = bVar51;
          auVar6[7] = bVar52;
          auVar6[8] = bVar53 | bVar71;
          auVar6[9] = bVar55 | bVar72;
          auVar6[10] = bVar56 | bVar73;
          auVar6[0xb] = bVar57 | bVar74;
          auVar6[0xc] = bVar58 | bVar75;
          auVar6[0xd] = bVar59 | bVar76;
          auVar6[0xe] = bVar60 | bVar77;
          auVar6[0xf] = bVar61 | bVar78;
          auVar80 = NEON_ext(auVar5,auVar6,8,1);
          uVar16 = CONCAT17(bVar52 | auVar80[7],
                            CONCAT16(bVar51 | auVar80[6],
                                     CONCAT15(bVar50 | auVar80[5],
                                              CONCAT14(bVar49 | auVar80[4],
                                                       CONCAT13(bVar48 | auVar80[3],
                                                                CONCAT12(bVar47 | auVar80[2],
                                                                         CONCAT11(bVar46 | auVar80[1
                                                  ],bVar44 | auVar80[0])))))));
        }
        uVar21 = uVar13;
        uVar18 = uVar16;
        if (uVar13 == 0) {
          uVar36 = 3;
          uVar37 = 0;
          uVar38 = 0;
          uVar39 = 0;
          uVar40 = 0;
          uVar41 = 0;
          uVar42 = 0;
          uVar43 = 0;
          uVar28 = 2;
          uVar29 = 0;
          uVar30 = 0;
          uVar31 = 0;
          uVar32 = 0;
          uVar33 = 0;
          uVar34 = 0;
          uVar35 = 0;
          lVar62 = 1;
          lVar17 = 0;
          bVar44 = 0;
          bVar46 = 0;
          bVar47 = 0;
          bVar48 = 0;
          bVar49 = 0;
          bVar50 = 0;
          bVar51 = 0;
          bVar52 = 0;
          bVar53 = 0;
          bVar55 = 0;
          bVar56 = 0;
          bVar57 = 0;
          bVar58 = 0;
          bVar59 = 0;
          bVar60 = 0;
          bVar61 = 0;
          lVar15 = -0xc;
          bVar63 = 0;
          bVar64 = 0;
          bVar65 = 0;
          bVar66 = 0;
          bVar67 = 0;
          bVar68 = 0;
          bVar69 = 0;
          bVar70 = 0;
          bVar71 = 0;
          bVar72 = 0;
          bVar73 = 0;
          bVar74 = 0;
          bVar75 = 0;
          bVar76 = 0;
          bVar77 = 0;
          bVar78 = 0;
          do {
            auVar80 = NEON_rev64(*(undefined1 (*) [16])((long)pfVar14 + lVar15),4);
            auVar80 = NEON_ext(auVar80,auVar80,8,1);
            auVar83[0] = -(fVar24 < auVar80._8_4_) & 1;
            auVar83._1_7_ = 0;
            auVar83[8] = -(fVar24 < auVar80._12_4_) & 1;
            auVar83._9_7_ = 0;
            auVar81[0] = -(fVar24 < auVar80._0_4_) & 1;
            auVar81._1_7_ = 0;
            auVar81[8] = -(fVar24 < auVar80._4_4_) & 1;
            auVar81._9_7_ = 0;
            auVar7._8_8_ = lVar62;
            auVar7._0_8_ = lVar17;
            auVar80 = NEON_ushl(auVar81,auVar7,8);
            auVar2[1] = uVar29;
            auVar2[0] = uVar28;
            auVar2[2] = uVar30;
            auVar2[3] = uVar31;
            auVar2[4] = uVar32;
            auVar2[5] = uVar33;
            auVar2[6] = uVar34;
            auVar2[7] = uVar35;
            auVar2[8] = uVar36;
            auVar2[9] = uVar37;
            auVar2[10] = uVar38;
            auVar2[0xb] = uVar39;
            auVar2[0xc] = uVar40;
            auVar2[0xd] = uVar41;
            auVar2[0xe] = uVar42;
            auVar2[0xf] = uVar43;
            auVar84 = NEON_ushl(auVar83,auVar2,8);
            bVar63 = auVar84[0] | bVar63;
            bVar64 = auVar84[1] | bVar64;
            bVar65 = auVar84[2] | bVar65;
            bVar66 = auVar84[3] | bVar66;
            bVar67 = auVar84[4] | bVar67;
            bVar68 = auVar84[5] | bVar68;
            bVar69 = auVar84[6] | bVar69;
            bVar70 = auVar84[7] | bVar70;
            bVar71 = auVar84[8] | bVar71;
            bVar72 = auVar84[9] | bVar72;
            bVar73 = auVar84[10] | bVar73;
            bVar74 = auVar84[0xb] | bVar74;
            bVar75 = auVar84[0xc] | bVar75;
            bVar76 = auVar84[0xd] | bVar76;
            bVar77 = auVar84[0xe] | bVar77;
            bVar78 = auVar84[0xf] | bVar78;
            bVar44 = auVar80[0] | bVar44;
            bVar46 = auVar80[1] | bVar46;
            bVar47 = auVar80[2] | bVar47;
            bVar48 = auVar80[3] | bVar48;
            bVar49 = auVar80[4] | bVar49;
            bVar50 = auVar80[5] | bVar50;
            bVar51 = auVar80[6] | bVar51;
            bVar52 = auVar80[7] | bVar52;
            bVar53 = auVar80[8] | bVar53;
            bVar55 = auVar80[9] | bVar55;
            bVar56 = auVar80[10] | bVar56;
            bVar57 = auVar80[0xb] | bVar57;
            bVar58 = auVar80[0xc] | bVar58;
            bVar59 = auVar80[0xd] | bVar59;
            bVar60 = auVar80[0xe] | bVar60;
            bVar61 = auVar80[0xf] | bVar61;
            lVar54 = CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,CONCAT13(uVar31
                                                  ,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))))))) + 4
            ;
            uVar28 = (undefined1)lVar54;
            uVar29 = (undefined1)((ulong)lVar54 >> 8);
            uVar30 = (undefined1)((ulong)lVar54 >> 0x10);
            uVar31 = (undefined1)((ulong)lVar54 >> 0x18);
            uVar32 = (undefined1)((ulong)lVar54 >> 0x20);
            uVar33 = (undefined1)((ulong)lVar54 >> 0x28);
            uVar34 = (undefined1)((ulong)lVar54 >> 0x30);
            uVar35 = (undefined1)((ulong)lVar54 >> 0x38);
            lVar54 = CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(uVar40,CONCAT13(uVar39
                                                  ,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))))))) + 4
            ;
            uVar36 = (undefined1)lVar54;
            uVar37 = (undefined1)((ulong)lVar54 >> 8);
            uVar38 = (undefined1)((ulong)lVar54 >> 0x10);
            uVar39 = (undefined1)((ulong)lVar54 >> 0x18);
            uVar40 = (undefined1)((ulong)lVar54 >> 0x20);
            uVar41 = (undefined1)((ulong)lVar54 >> 0x28);
            uVar42 = (undefined1)((ulong)lVar54 >> 0x30);
            uVar43 = (undefined1)((ulong)lVar54 >> 0x38);
            lVar17 = lVar17 + 4;
            lVar62 = lVar62 + 4;
            lVar15 = lVar15 + -0x10;
          } while (lVar15 != -0x10c);
          bVar44 = bVar44 | bVar63;
          bVar46 = bVar46 | bVar64;
          bVar47 = bVar47 | bVar65;
          bVar48 = bVar48 | bVar66;
          bVar49 = bVar49 | bVar67;
          bVar50 = bVar50 | bVar68;
          bVar51 = bVar51 | bVar69;
          bVar52 = bVar52 | bVar70;
          auVar3[1] = bVar46;
          auVar3[0] = bVar44;
          auVar3[2] = bVar47;
          auVar3[3] = bVar48;
          auVar3[4] = bVar49;
          auVar3[5] = bVar50;
          auVar3[6] = bVar51;
          auVar3[7] = bVar52;
          auVar3[8] = bVar53 | bVar71;
          auVar3[9] = bVar55 | bVar72;
          auVar3[10] = bVar56 | bVar73;
          auVar3[0xb] = bVar57 | bVar74;
          auVar3[0xc] = bVar58 | bVar75;
          auVar3[0xd] = bVar59 | bVar76;
          auVar3[0xe] = bVar60 | bVar77;
          auVar3[0xf] = bVar61 | bVar78;
          auVar4[1] = bVar46;
          auVar4[0] = bVar44;
          auVar4[2] = bVar47;
          auVar4[3] = bVar48;
          auVar4[4] = bVar49;
          auVar4[5] = bVar50;
          auVar4[6] = bVar51;
          auVar4[7] = bVar52;
          auVar4[8] = bVar53 | bVar71;
          auVar4[9] = bVar55 | bVar72;
          auVar4[10] = bVar56 | bVar73;
          auVar4[0xb] = bVar57 | bVar74;
          auVar4[0xc] = bVar58 | bVar75;
          auVar4[0xd] = bVar59 | bVar76;
          auVar4[0xe] = bVar60 | bVar77;
          auVar4[0xf] = bVar61 | bVar78;
          auVar80 = NEON_ext(auVar3,auVar4,8,1);
          uVar13 = CONCAT17(bVar52 | auVar80[7],
                            CONCAT16(bVar51 | auVar80[6],
                                     CONCAT15(bVar50 | auVar80[5],
                                              CONCAT14(bVar49 | auVar80[4],
                                                       CONCAT13(bVar48 | auVar80[3],
                                                                CONCAT12(bVar47 | auVar80[2],
                                                                         CONCAT11(bVar46 | auVar80[1
                                                  ],bVar44 | auVar80[0])))))));
          uVar21 = uVar13;
        }
        while ((uVar18 != 0 && (uVar21 != 0))) {
          uVar21 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          lVar17 = LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20);
          uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          fVar26 = pfVar10[lVar17];
          pfVar10[lVar17] = pfVar14[-LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20)];
          pfVar14[-LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20)] = fVar26;
          uVar13 = uVar13 - 1 & uVar13;
          uVar16 = uVar16 - 1 & uVar16;
          uVar18 = uVar13;
          uVar21 = uVar16;
        }
        lVar17 = 0x100;
        if (uVar16 != 0) {
          lVar17 = 0;
        }
        pfVar10 = (float *)((long)pfVar10 + lVar17);
        bVar9 = uVar13 == 0;
        lVar17 = -0x100;
        if (!bVar9) {
          lVar17 = 0;
        }
        pfVar14 = (float *)((long)pfVar14 + lVar17);
      } while (0x1f8 < (long)pfVar14 - (long)pfVar10);
      lVar17 = (long)pfVar14 - (long)pfVar10 >> 2;
      if (uVar13 == 0 && uVar16 == 0) goto LAB_1095053b4;
      uVar18 = lVar17 - 0x3f;
      uVar21 = 0x40;
      uVar20 = 0x40;
      if (uVar16 == 0) goto LAB_1095053c4;
      uVar21 = uVar18;
      uVar18 = uVar13;
      uVar1 = uVar16;
      if (bVar9) goto LAB_109505408;
joined_r0x00010950543c:
      while ((uVar1 != 0 && (uVar13 != 0))) {
        uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        lVar17 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20);
        uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        fVar26 = pfVar10[lVar17];
        pfVar10[lVar17] = pfVar14[-LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20)];
        pfVar14[-LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20)] = fVar26;
        uVar18 = uVar18 - 1 & uVar18;
        uVar13 = uVar16 - 1 & uVar16;
        uVar16 = uVar13;
        uVar1 = uVar18;
      }
      if (uVar16 != 0) {
        uVar20 = 0;
      }
      pfVar10 = pfVar10 + uVar20;
      if (uVar18 == 0) goto LAB_1095054d8;
      pfVar22 = pfVar10;
      if (uVar16 != 0) goto LAB_1095054e0;
      do {
        pfVar22 = pfVar14 + -(LZCOUNT(uVar18) ^ 0x3fU);
        if (pfVar10 != pfVar22) {
          fVar26 = *pfVar22;
          *pfVar22 = *pfVar10;
          *pfVar10 = fVar26;
        }
        uVar18 = uVar18 & (-1L << ((LZCOUNT(uVar18) ^ 0x3fU) & 0x3f) ^ 0xffffffffffffffffU);
        pfVar10 = pfVar10 + 1;
      } while (uVar18 != 0);
    }
    pfVar14 = pfVar10 + -1;
    if (pfVar14 != pfVar23) {
      *pfVar23 = *pfVar14;
    }
    *pfVar14 = fVar24;
    if (pfVar11 < pfVar12) {
LAB_109505574:
      FUN_109504f44(pfVar23,pfVar14,param_3,uStack_94 & 1);
      uStack_94 = 0;
    }
    else {
      pfVar11 = pfVar23;
      FUN_109505a90(pfVar23,pfVar14);
      pfVar12 = pfVar10;
      FUN_109505a90(pfVar10,param_2);
      if ((int)pfVar12 == 0) {
        if (((ulong)pfVar11 & 1) == 0) goto LAB_109505574;
      }
      else {
        pfVar10 = pfVar23;
        param_2 = pfVar14;
        if (((ulong)pfVar11 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109504f00; end: 109504f43;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109504f00(float *param_1,float *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  byte bVar43;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  float fVar44;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  long lVar53;
  byte bVar60;
  long lVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint uStack_84;
  
  if (param_1 < (float *)0x1555555555555556) {
    __Znwm((long)param_1 * 0xc);
    return;
  }
  uStack_84 = param_4;
  func_0x000104c4f740();
LAB_109504f9c:
  do {
    pfVar13 = param_1;
    uVar12 = (long)param_2 - (long)pfVar13 >> 2;
    if (uVar12 - 2 == 0 || (long)uVar12 < 2) {
      if (uVar12 < 2) {
        return;
      }
      if (uVar12 == 2) {
        fVar23 = *pfVar13;
        if (param_2[-1] <= fVar23) {
          return;
        }
        *pfVar13 = param_2[-1];
        param_2[-1] = fVar23;
        return;
      }
    }
    else {
      if (uVar12 == 3) {
        fVar23 = pfVar13[1];
        fVar25 = param_2[-1];
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        param_2[-1] = fVar23;
        pfVar13[1] = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        fVar23 = param_2[-1];
        fVar25 = *pfVar13;
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        param_2[-1] = fVar23;
        fVar25 = pfVar13[1];
        bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar25;
        bVar9 = fVar25 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        fVar23 = fVar25;
        if (bVar8 && bVar9) {
          fVar23 = *pfVar13;
        }
        fVar26 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        if (bVar8 && bVar9) {
          fVar26 = fVar25;
        }
        *pfVar13 = fVar23;
        pfVar13[1] = fVar26;
        return;
      }
      if (uVar12 == 4) {
        fVar23 = pfVar13[1];
        fVar25 = pfVar13[2];
        fVar44 = *pfVar13;
        fVar26 = fVar44;
        if (fVar25 < fVar44) {
          fVar26 = fVar25;
          fVar25 = fVar44;
        }
        pfVar13[2] = fVar26;
        *pfVar13 = fVar25;
        fVar25 = param_2[-1];
        fVar26 = fVar23;
        if (fVar25 < fVar23) {
          fVar26 = fVar25;
          fVar25 = fVar23;
        }
        param_2[-1] = fVar26;
        fVar23 = *pfVar13;
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        *pfVar13 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        pfVar13[1] = fVar23;
        fVar23 = pfVar13[2];
        fVar25 = param_2[-1];
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        param_2[-1] = fVar23;
        fVar23 = pfVar13[1];
        bVar8 = fVar23 != (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        bVar9 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) <= fVar23;
        fVar25 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        if (bVar8 && bVar9) {
          fVar25 = fVar23;
        }
        if (bVar8 && bVar9) {
          fVar23 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        }
        pfVar13[1] = fVar25;
        pfVar13[2] = fVar23;
        return;
      }
      if (uVar12 == 5) {
        fVar23 = *pfVar13;
        fVar25 = pfVar13[1];
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        *pfVar13 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        pfVar13[1] = fVar23;
        fVar23 = pfVar13[3];
        fVar25 = param_2[-1];
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        param_2[-1] = fVar23;
        pfVar13[3] = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        fVar23 = param_2[-1];
        fVar25 = pfVar13[2];
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        param_2[-1] = fVar23;
        fVar25 = pfVar13[3];
        bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar25;
        bVar9 = fVar25 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        fVar26 = pfVar13[1];
        fVar23 = fVar25;
        if (bVar8 && bVar9) {
          fVar23 = pfVar13[2];
        }
        fVar44 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        if (bVar8 && bVar9) {
          fVar44 = fVar25;
        }
        pfVar13[2] = fVar23;
        pfVar13[3] = fVar44;
        fVar23 = param_2[-1];
        fVar25 = fVar26;
        if (fVar23 < fVar26) {
          fVar25 = fVar23;
          fVar23 = fVar26;
        }
        param_2[-1] = fVar25;
        fVar24 = *pfVar13;
        fVar44 = pfVar13[2];
        fVar25 = pfVar13[3];
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar27 = SUB41(fVar25,0);
        fVar26 = fVar24;
        if (fVar24 < fVar25) {
          uVar27 = SUB41(fVar24,0);
          uVar28 = (undefined1)((uint)fVar24 >> 8);
          uVar29 = (undefined1)((uint)fVar24 >> 0x10);
          uVar30 = (undefined1)((uint)fVar24 >> 0x18);
          fVar26 = fVar25;
        }
        if (fVar44 < fVar26) {
          fVar26 = fVar44;
          fVar44 = fVar24;
        }
        fVar25 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        fVar24 = fVar23;
        if ((float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar23 &&
            fVar23 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)))) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar24 = fVar25;
        }
        fVar25 = fVar26;
        if (fVar26 < fVar24) {
          fVar25 = fVar23;
        }
        *pfVar13 = fVar44;
        pfVar13[1] = fVar25;
        if (fVar26 < fVar24) {
          fVar24 = fVar26;
        }
        pfVar13[2] = fVar24;
        pfVar13[3] = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        return;
      }
    }
    if ((long)uVar12 < 0x18) {
      pfVar10 = pfVar13 + 1;
      if ((uStack_84 & 1) == 0) {
        if (pfVar13 == param_2 || pfVar10 == param_2) {
          return;
        }
        do {
          pfVar11 = pfVar10;
          fVar25 = *pfVar13;
          fVar23 = pfVar13[1];
          pfVar13 = pfVar11;
          if (fVar25 < fVar23) {
            do {
              *pfVar13 = fVar25;
              fVar25 = pfVar13[-2];
              pfVar13 = pfVar13 + -1;
            } while (fVar25 < fVar23);
            *pfVar13 = fVar23;
          }
          pfVar10 = pfVar11 + 1;
          pfVar13 = pfVar11;
        } while (pfVar11 + 1 != param_2);
        return;
      }
      if (pfVar13 == param_2 || pfVar10 == param_2) {
        return;
      }
      lVar17 = 4;
      pfVar11 = pfVar13;
      do {
        pfVar14 = pfVar10;
        fVar25 = *pfVar11;
        fVar23 = pfVar11[1];
        lVar15 = lVar17;
        if (fVar25 < fVar23) {
          do {
            *(float *)((long)pfVar13 + lVar15) = fVar25;
            lVar61 = lVar15 + -4;
            pfVar10 = pfVar13;
            if (lVar61 == 0) goto LAB_109505870;
            fVar25 = *(float *)((long)pfVar13 + lVar15 + -8);
            lVar15 = lVar61;
          } while (fVar25 < fVar23);
          pfVar10 = (float *)((long)pfVar13 + lVar61);
LAB_109505870:
          *pfVar10 = fVar23;
        }
        pfVar10 = pfVar14 + 1;
        lVar17 = lVar17 + 4;
        pfVar11 = pfVar14;
        if (pfVar10 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pfVar13 == param_2) {
        return;
      }
      uVar21 = uVar12 - 2 >> 1;
      uVar16 = uVar21;
      do {
        if ((long)uVar16 <= (long)uVar21) {
          uVar20 = uVar16 << 1 | 1;
          pfVar10 = pfVar13 + uVar20;
          uVar18 = uVar16 * 2 + 2;
          if (((long)uVar18 < (long)uVar12) && (pfVar10[1] < *pfVar10)) {
            uVar20 = uVar18;
            pfVar10 = pfVar10 + 1;
          }
          fVar25 = *pfVar10;
          fVar23 = pfVar13[uVar16];
          pfVar11 = pfVar13 + uVar16;
          if (fVar25 <= fVar23) {
            do {
              pfVar14 = pfVar10;
              *pfVar11 = fVar25;
              if ((long)uVar21 < (long)uVar20) break;
              uVar1 = uVar20 << 1 | 1;
              pfVar10 = pfVar13 + uVar1;
              uVar18 = uVar20 * 2 + 2;
              uVar20 = uVar1;
              if (((long)uVar18 < (long)uVar12) && (pfVar10[1] < *pfVar10)) {
                uVar20 = uVar18;
                pfVar10 = pfVar10 + 1;
              }
              fVar25 = *pfVar10;
              pfVar11 = pfVar14;
            } while (fVar25 <= fVar23);
            *pfVar14 = fVar23;
          }
        }
        bVar9 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar9);
      do {
        fVar23 = *pfVar13;
        pfVar10 = pfVar13;
        uVar16 = 0;
        do {
          uVar18 = uVar16 << 1 | 1;
          uVar21 = uVar16 * 2 + 2;
          pfVar11 = pfVar10 + uVar16 + 1;
          if (((long)uVar21 < (long)uVar12) && (pfVar10[uVar16 + 2] < pfVar10[uVar16 + 1])) {
            pfVar11 = pfVar10 + uVar16 + 2;
            uVar18 = uVar21;
          }
          *pfVar10 = *pfVar11;
          pfVar10 = pfVar11;
          uVar16 = uVar18;
        } while ((long)uVar18 <= (long)(uVar12 - 2 >> 1));
        param_2 = param_2 + -1;
        if (pfVar11 == param_2) {
LAB_109505a20:
          *pfVar11 = fVar23;
        }
        else {
          *pfVar11 = *param_2;
          *param_2 = fVar23;
          lVar17 = (long)pfVar11 + (4 - (long)pfVar13) >> 2;
          if (1 < lVar17) {
            uVar16 = lVar17 - 2U >> 1;
            fVar25 = pfVar13[uVar16];
            fVar23 = *pfVar11;
            pfVar14 = pfVar13 + uVar16;
            if (fVar23 < fVar25) {
              do {
                pfVar11 = pfVar14;
                *pfVar10 = fVar25;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1 >> 1;
                fVar25 = pfVar13[uVar16];
                pfVar10 = pfVar11;
                pfVar14 = pfVar13 + uVar16;
              } while (fVar23 < fVar25);
              goto LAB_109505a20;
            }
          }
        }
        bVar9 = (long)uVar12 < 3;
        uVar12 = uVar12 - 1;
        if (bVar9) {
          return;
        }
      } while( true );
    }
    pfVar10 = pfVar13 + (uVar12 >> 1);
    fVar23 = param_2[-1];
    uVar27 = SUB41(fVar23,0);
    uVar28 = (undefined1)((uint)fVar23 >> 8);
    uVar29 = (undefined1)((uint)fVar23 >> 0x10);
    uVar30 = (undefined1)((uint)fVar23 >> 0x18);
    if (uVar12 < 0x81) {
      fVar25 = *pfVar13;
      if (fVar23 < fVar25) {
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        fVar25 = fVar23;
      }
      param_2[-1] = fVar25;
      *pfVar13 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      fVar23 = param_2[-1];
      fVar25 = *pfVar10;
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-1] = fVar23;
      fVar23 = *pfVar13;
      bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar23;
      bVar9 = fVar23 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = *pfVar10;
      }
      *pfVar10 = fVar23;
      fVar23 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = *pfVar13;
      }
      *pfVar13 = fVar23;
    }
    else {
      fVar25 = *pfVar10;
      if (fVar23 < fVar25) {
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        fVar25 = fVar23;
      }
      param_2[-1] = fVar25;
      *pfVar10 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      fVar23 = param_2[-1];
      fVar25 = *pfVar13;
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-1] = fVar23;
      fVar23 = *pfVar10;
      bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar23;
      bVar9 = fVar23 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = *pfVar13;
      }
      *pfVar13 = fVar23;
      fVar23 = pfVar10[-1];
      fVar25 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar25 = *pfVar10;
      }
      *pfVar10 = fVar25;
      fVar25 = param_2[-2];
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-2] = fVar23;
      pfVar10[-1] = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      fVar23 = param_2[-2];
      fVar25 = pfVar13[1];
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-2] = fVar23;
      fVar23 = pfVar10[-1];
      bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar23;
      bVar9 = fVar23 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = pfVar13[1];
      }
      pfVar13[1] = fVar23;
      fVar23 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = pfVar10[-1];
      }
      pfVar10[-1] = fVar23;
      fVar23 = pfVar10[1];
      fVar25 = param_2[-3];
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-3] = fVar23;
      pfVar10[1] = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      fVar23 = param_2[-3];
      fVar25 = pfVar13[2];
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-3] = fVar23;
      fVar23 = pfVar10[1];
      bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar23;
      bVar9 = fVar23 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = pfVar13[2];
      }
      pfVar13[2] = fVar23;
      fVar25 = *pfVar10;
      fVar23 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = pfVar10[1];
      }
      fVar26 = pfVar10[-1];
      fVar44 = fVar25;
      if (fVar23 < fVar25) {
        fVar44 = fVar23;
        fVar23 = fVar25;
      }
      fVar24 = fVar44;
      fVar25 = fVar26;
      if (fVar26 < fVar44) {
        fVar24 = fVar26;
        fVar25 = fVar44;
      }
      if (fVar23 < fVar25) {
        fVar25 = fVar23;
        fVar23 = fVar26;
      }
      pfVar10[-1] = fVar23;
      *pfVar10 = fVar25;
      pfVar10[1] = fVar24;
      fVar23 = *pfVar13;
      *pfVar13 = fVar25;
      *pfVar10 = fVar23;
      fVar23 = *pfVar13;
    }
    param_3 = param_3 + -1;
    param_1 = pfVar13;
    if (((uStack_84 & 1) == 0) && (pfVar13[-1] <= fVar23)) {
      if (fVar23 <= param_2[-1]) {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (fVar23 <= *param_1);
      }
      else {
        do {
          param_1 = param_1 + 1;
        } while (fVar23 <= *param_1);
      }
      pfVar10 = param_2;
      if (param_1 < param_2) {
        do {
          pfVar10 = pfVar10 + -1;
        } while (*pfVar10 < fVar23);
      }
      if (param_1 < pfVar10) {
        fVar26 = *param_1;
        fVar25 = *pfVar10;
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        do {
          *param_1 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
          *pfVar10 = fVar26;
          do {
            param_1 = param_1 + 1;
            fVar26 = *param_1;
          } while (fVar23 <= fVar26);
          do {
            pfVar10 = pfVar10 + -1;
            fVar25 = *pfVar10;
            uVar27 = SUB41(fVar25,0);
            uVar28 = (undefined1)((uint)fVar25 >> 8);
            uVar29 = (undefined1)((uint)fVar25 >> 0x10);
            uVar30 = (undefined1)((uint)fVar25 >> 0x18);
          } while (fVar25 < fVar23);
        } while (param_1 < pfVar10);
      }
      pfVar10 = param_1 + -1;
      if (pfVar10 != pfVar13) {
        *pfVar13 = *pfVar10;
      }
      uStack_84 = 0;
      *pfVar10 = fVar23;
      goto LAB_109504f9c;
    }
    pfVar10 = pfVar13;
    if (fVar23 <= param_2[-1]) {
      do {
        pfVar10 = pfVar10 + 1;
        if (param_2 <= pfVar10) break;
      } while (fVar23 <= *pfVar10);
    }
    else {
      do {
        pfVar10 = pfVar10 + 1;
      } while (fVar23 <= *pfVar10);
    }
    pfVar11 = param_2;
    if (pfVar10 < param_2) {
      do {
        pfVar11 = pfVar11 + -1;
      } while (*pfVar11 < fVar23);
    }
    param_1 = pfVar10;
    if (pfVar10 < pfVar11) {
      fVar25 = *pfVar10;
      param_1 = pfVar10 + 1;
      *pfVar10 = *pfVar11;
      *pfVar11 = fVar25;
    }
    pfVar14 = pfVar11 + -1;
    if ((long)pfVar14 - (long)param_1 < 0x1f9) {
      uVar12 = 0;
      lVar17 = (long)pfVar14 - (long)param_1 >> 2;
      bVar9 = true;
LAB_1095053b4:
      uVar18 = (lVar17 + 1) / 2;
      uVar21 = (lVar17 + 1) - uVar18;
LAB_1095053c4:
      if ((long)uVar18 < 1) {
        uVar16 = 0;
      }
      else {
        uVar20 = 0;
        uVar16 = 0;
        do {
          uVar16 = (ulong)(param_1[uVar20] <= fVar23) << (uVar20 & 0x3f) | uVar16;
          uVar20 = uVar20 + 1;
        } while (uVar18 != uVar20);
      }
      uVar20 = uVar18;
      uVar18 = uVar12;
      uVar1 = uVar16;
      if (!bVar9) goto joined_r0x00010950543c;
LAB_109505408:
      if (0 < (long)uVar21) {
        uVar19 = 0;
        uVar12 = 0;
        pfVar22 = pfVar14;
        do {
          uVar12 = (ulong)(fVar23 < *pfVar22) << (uVar19 & 0x3f) | uVar12;
          uVar19 = uVar19 + 1;
          pfVar22 = pfVar22 + -1;
          uVar18 = uVar12;
          uVar1 = uVar16;
        } while (uVar21 != uVar19);
        goto joined_r0x00010950543c;
      }
      if (uVar16 != 0) {
        uVar20 = 0;
      }
      param_1 = param_1 + uVar20;
LAB_1095054d8:
      if (uVar16 != 0) {
        pfVar14 = pfVar14 + -uVar21;
        pfVar22 = param_1;
LAB_1095054e0:
        do {
          param_1 = pfVar14;
          pfVar14 = pfVar22 + (LZCOUNT(uVar16) ^ 0x3fU);
          if (param_1 != pfVar14) {
            fVar25 = *pfVar14;
            *pfVar14 = *param_1;
            *param_1 = fVar25;
          }
          uVar16 = uVar16 & (-1L << ((LZCOUNT(uVar16) ^ 0x3fU) & 0x3f) ^ 0xffffffffffffffffU);
          pfVar14 = param_1 + -1;
        } while (uVar16 != 0);
      }
    }
    else {
      uVar12 = 0;
      uVar16 = 0;
      do {
        if (uVar16 == 0) {
          bVar43 = 0;
          bVar45 = 0;
          bVar46 = 0;
          bVar47 = 0;
          bVar48 = 0;
          bVar49 = 0;
          bVar50 = 0;
          bVar51 = 0;
          bVar52 = 0;
          bVar54 = 0;
          bVar55 = 0;
          bVar56 = 0;
          bVar57 = 0;
          bVar58 = 0;
          bVar59 = 0;
          bVar60 = 0;
          auVar79 = ZEXT816(1) << 0x40;
          bVar62 = 0;
          bVar63 = 0;
          bVar64 = 0;
          bVar65 = 0;
          bVar66 = 0;
          bVar67 = 0;
          bVar68 = 0;
          bVar69 = 0;
          bVar70 = 0;
          bVar71 = 0;
          bVar72 = 0;
          bVar73 = 0;
          bVar74 = 0;
          bVar75 = 0;
          bVar76 = 0;
          bVar77 = 0;
          lVar17 = 0;
          lVar61 = 3;
          lVar15 = 2;
          do {
            pfVar22 = (float *)((long)param_1 + lVar17);
            auVar81[0] = ~-(fVar23 < pfVar22[2]) & 1;
            auVar81._1_7_ = 0;
            auVar81[8] = ~-(fVar23 < pfVar22[3]) & 1;
            auVar81._9_7_ = 0;
            auVar78[0] = ~-(fVar23 < *pfVar22) & 1;
            auVar78._1_7_ = 0;
            auVar78[8] = ~-(fVar23 < pfVar22[1]) & 1;
            auVar78._9_7_ = 0;
            auVar78 = NEON_ushl(auVar78,auVar79,8);
            auVar83._8_8_ = lVar61;
            auVar83._0_8_ = lVar15;
            auVar83 = NEON_ushl(auVar81,auVar83,8);
            bVar62 = auVar83[0] | bVar62;
            bVar63 = auVar83[1] | bVar63;
            bVar64 = auVar83[2] | bVar64;
            bVar65 = auVar83[3] | bVar65;
            bVar66 = auVar83[4] | bVar66;
            bVar67 = auVar83[5] | bVar67;
            bVar68 = auVar83[6] | bVar68;
            bVar69 = auVar83[7] | bVar69;
            bVar70 = auVar83[8] | bVar70;
            bVar71 = auVar83[9] | bVar71;
            bVar72 = auVar83[10] | bVar72;
            bVar73 = auVar83[0xb] | bVar73;
            bVar74 = auVar83[0xc] | bVar74;
            bVar75 = auVar83[0xd] | bVar75;
            bVar76 = auVar83[0xe] | bVar76;
            bVar77 = auVar83[0xf] | bVar77;
            bVar43 = auVar78[0] | bVar43;
            bVar45 = auVar78[1] | bVar45;
            bVar46 = auVar78[2] | bVar46;
            bVar47 = auVar78[3] | bVar47;
            bVar48 = auVar78[4] | bVar48;
            bVar49 = auVar78[5] | bVar49;
            bVar50 = auVar78[6] | bVar50;
            bVar51 = auVar78[7] | bVar51;
            bVar52 = auVar78[8] | bVar52;
            bVar54 = auVar78[9] | bVar54;
            bVar55 = auVar78[10] | bVar55;
            bVar56 = auVar78[0xb] | bVar56;
            bVar57 = auVar78[0xc] | bVar57;
            bVar58 = auVar78[0xd] | bVar58;
            bVar59 = auVar78[0xe] | bVar59;
            bVar60 = auVar78[0xf] | bVar60;
            lVar15 = lVar15 + 4;
            lVar61 = lVar61 + 4;
            lVar53 = auVar79._8_8_;
            auVar79._0_8_ = auVar79._0_8_ + 4;
            auVar79._8_8_ = lVar53 + 4;
            lVar17 = lVar17 + 0x10;
          } while (lVar17 != 0x100);
          bVar43 = bVar43 | bVar62;
          bVar45 = bVar45 | bVar63;
          bVar46 = bVar46 | bVar64;
          bVar47 = bVar47 | bVar65;
          bVar48 = bVar48 | bVar66;
          bVar49 = bVar49 | bVar67;
          bVar50 = bVar50 | bVar68;
          bVar51 = bVar51 | bVar69;
          auVar5[1] = bVar45;
          auVar5[0] = bVar43;
          auVar5[2] = bVar46;
          auVar5[3] = bVar47;
          auVar5[4] = bVar48;
          auVar5[5] = bVar49;
          auVar5[6] = bVar50;
          auVar5[7] = bVar51;
          auVar5[8] = bVar52 | bVar70;
          auVar5[9] = bVar54 | bVar71;
          auVar5[10] = bVar55 | bVar72;
          auVar5[0xb] = bVar56 | bVar73;
          auVar5[0xc] = bVar57 | bVar74;
          auVar5[0xd] = bVar58 | bVar75;
          auVar5[0xe] = bVar59 | bVar76;
          auVar5[0xf] = bVar60 | bVar77;
          auVar6[1] = bVar45;
          auVar6[0] = bVar43;
          auVar6[2] = bVar46;
          auVar6[3] = bVar47;
          auVar6[4] = bVar48;
          auVar6[5] = bVar49;
          auVar6[6] = bVar50;
          auVar6[7] = bVar51;
          auVar6[8] = bVar52 | bVar70;
          auVar6[9] = bVar54 | bVar71;
          auVar6[10] = bVar55 | bVar72;
          auVar6[0xb] = bVar56 | bVar73;
          auVar6[0xc] = bVar57 | bVar74;
          auVar6[0xd] = bVar58 | bVar75;
          auVar6[0xe] = bVar59 | bVar76;
          auVar6[0xf] = bVar60 | bVar77;
          auVar79 = NEON_ext(auVar5,auVar6,8,1);
          uVar16 = CONCAT17(bVar51 | auVar79[7],
                            CONCAT16(bVar50 | auVar79[6],
                                     CONCAT15(bVar49 | auVar79[5],
                                              CONCAT14(bVar48 | auVar79[4],
                                                       CONCAT13(bVar47 | auVar79[3],
                                                                CONCAT12(bVar46 | auVar79[2],
                                                                         CONCAT11(bVar45 | auVar79[1
                                                  ],bVar43 | auVar79[0])))))));
        }
        uVar21 = uVar12;
        uVar18 = uVar16;
        if (uVar12 == 0) {
          uVar35 = 3;
          uVar36 = 0;
          uVar37 = 0;
          uVar38 = 0;
          uVar39 = 0;
          uVar40 = 0;
          uVar41 = 0;
          uVar42 = 0;
          uVar27 = 2;
          uVar28 = 0;
          uVar29 = 0;
          uVar30 = 0;
          uVar31 = 0;
          uVar32 = 0;
          uVar33 = 0;
          uVar34 = 0;
          lVar61 = 1;
          lVar17 = 0;
          bVar43 = 0;
          bVar45 = 0;
          bVar46 = 0;
          bVar47 = 0;
          bVar48 = 0;
          bVar49 = 0;
          bVar50 = 0;
          bVar51 = 0;
          bVar52 = 0;
          bVar54 = 0;
          bVar55 = 0;
          bVar56 = 0;
          bVar57 = 0;
          bVar58 = 0;
          bVar59 = 0;
          bVar60 = 0;
          lVar15 = -0xc;
          bVar62 = 0;
          bVar63 = 0;
          bVar64 = 0;
          bVar65 = 0;
          bVar66 = 0;
          bVar67 = 0;
          bVar68 = 0;
          bVar69 = 0;
          bVar70 = 0;
          bVar71 = 0;
          bVar72 = 0;
          bVar73 = 0;
          bVar74 = 0;
          bVar75 = 0;
          bVar76 = 0;
          bVar77 = 0;
          do {
            auVar79 = NEON_rev64(*(undefined1 (*) [16])((long)pfVar14 + lVar15),4);
            auVar79 = NEON_ext(auVar79,auVar79,8,1);
            auVar82[0] = -(fVar23 < auVar79._8_4_) & 1;
            auVar82._1_7_ = 0;
            auVar82[8] = -(fVar23 < auVar79._12_4_) & 1;
            auVar82._9_7_ = 0;
            auVar80[0] = -(fVar23 < auVar79._0_4_) & 1;
            auVar80._1_7_ = 0;
            auVar80[8] = -(fVar23 < auVar79._4_4_) & 1;
            auVar80._9_7_ = 0;
            auVar7._8_8_ = lVar61;
            auVar7._0_8_ = lVar17;
            auVar79 = NEON_ushl(auVar80,auVar7,8);
            auVar2[1] = uVar28;
            auVar2[0] = uVar27;
            auVar2[2] = uVar29;
            auVar2[3] = uVar30;
            auVar2[4] = uVar31;
            auVar2[5] = uVar32;
            auVar2[6] = uVar33;
            auVar2[7] = uVar34;
            auVar2[8] = uVar35;
            auVar2[9] = uVar36;
            auVar2[10] = uVar37;
            auVar2[0xb] = uVar38;
            auVar2[0xc] = uVar39;
            auVar2[0xd] = uVar40;
            auVar2[0xe] = uVar41;
            auVar2[0xf] = uVar42;
            auVar83 = NEON_ushl(auVar82,auVar2,8);
            bVar62 = auVar83[0] | bVar62;
            bVar63 = auVar83[1] | bVar63;
            bVar64 = auVar83[2] | bVar64;
            bVar65 = auVar83[3] | bVar65;
            bVar66 = auVar83[4] | bVar66;
            bVar67 = auVar83[5] | bVar67;
            bVar68 = auVar83[6] | bVar68;
            bVar69 = auVar83[7] | bVar69;
            bVar70 = auVar83[8] | bVar70;
            bVar71 = auVar83[9] | bVar71;
            bVar72 = auVar83[10] | bVar72;
            bVar73 = auVar83[0xb] | bVar73;
            bVar74 = auVar83[0xc] | bVar74;
            bVar75 = auVar83[0xd] | bVar75;
            bVar76 = auVar83[0xe] | bVar76;
            bVar77 = auVar83[0xf] | bVar77;
            bVar43 = auVar79[0] | bVar43;
            bVar45 = auVar79[1] | bVar45;
            bVar46 = auVar79[2] | bVar46;
            bVar47 = auVar79[3] | bVar47;
            bVar48 = auVar79[4] | bVar48;
            bVar49 = auVar79[5] | bVar49;
            bVar50 = auVar79[6] | bVar50;
            bVar51 = auVar79[7] | bVar51;
            bVar52 = auVar79[8] | bVar52;
            bVar54 = auVar79[9] | bVar54;
            bVar55 = auVar79[10] | bVar55;
            bVar56 = auVar79[0xb] | bVar56;
            bVar57 = auVar79[0xc] | bVar57;
            bVar58 = auVar79[0xd] | bVar58;
            bVar59 = auVar79[0xe] | bVar59;
            bVar60 = auVar79[0xf] | bVar60;
            lVar53 = CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(uVar31,CONCAT13(uVar30
                                                  ,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))))))) + 4
            ;
            uVar27 = (undefined1)lVar53;
            uVar28 = (undefined1)((ulong)lVar53 >> 8);
            uVar29 = (undefined1)((ulong)lVar53 >> 0x10);
            uVar30 = (undefined1)((ulong)lVar53 >> 0x18);
            uVar31 = (undefined1)((ulong)lVar53 >> 0x20);
            uVar32 = (undefined1)((ulong)lVar53 >> 0x28);
            uVar33 = (undefined1)((ulong)lVar53 >> 0x30);
            uVar34 = (undefined1)((ulong)lVar53 >> 0x38);
            lVar53 = CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,CONCAT13(uVar38
                                                  ,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))))))) + 4
            ;
            uVar35 = (undefined1)lVar53;
            uVar36 = (undefined1)((ulong)lVar53 >> 8);
            uVar37 = (undefined1)((ulong)lVar53 >> 0x10);
            uVar38 = (undefined1)((ulong)lVar53 >> 0x18);
            uVar39 = (undefined1)((ulong)lVar53 >> 0x20);
            uVar40 = (undefined1)((ulong)lVar53 >> 0x28);
            uVar41 = (undefined1)((ulong)lVar53 >> 0x30);
            uVar42 = (undefined1)((ulong)lVar53 >> 0x38);
            lVar17 = lVar17 + 4;
            lVar61 = lVar61 + 4;
            lVar15 = lVar15 + -0x10;
          } while (lVar15 != -0x10c);
          bVar43 = bVar43 | bVar62;
          bVar45 = bVar45 | bVar63;
          bVar46 = bVar46 | bVar64;
          bVar47 = bVar47 | bVar65;
          bVar48 = bVar48 | bVar66;
          bVar49 = bVar49 | bVar67;
          bVar50 = bVar50 | bVar68;
          bVar51 = bVar51 | bVar69;
          auVar3[1] = bVar45;
          auVar3[0] = bVar43;
          auVar3[2] = bVar46;
          auVar3[3] = bVar47;
          auVar3[4] = bVar48;
          auVar3[5] = bVar49;
          auVar3[6] = bVar50;
          auVar3[7] = bVar51;
          auVar3[8] = bVar52 | bVar70;
          auVar3[9] = bVar54 | bVar71;
          auVar3[10] = bVar55 | bVar72;
          auVar3[0xb] = bVar56 | bVar73;
          auVar3[0xc] = bVar57 | bVar74;
          auVar3[0xd] = bVar58 | bVar75;
          auVar3[0xe] = bVar59 | bVar76;
          auVar3[0xf] = bVar60 | bVar77;
          auVar4[1] = bVar45;
          auVar4[0] = bVar43;
          auVar4[2] = bVar46;
          auVar4[3] = bVar47;
          auVar4[4] = bVar48;
          auVar4[5] = bVar49;
          auVar4[6] = bVar50;
          auVar4[7] = bVar51;
          auVar4[8] = bVar52 | bVar70;
          auVar4[9] = bVar54 | bVar71;
          auVar4[10] = bVar55 | bVar72;
          auVar4[0xb] = bVar56 | bVar73;
          auVar4[0xc] = bVar57 | bVar74;
          auVar4[0xd] = bVar58 | bVar75;
          auVar4[0xe] = bVar59 | bVar76;
          auVar4[0xf] = bVar60 | bVar77;
          auVar79 = NEON_ext(auVar3,auVar4,8,1);
          uVar12 = CONCAT17(bVar51 | auVar79[7],
                            CONCAT16(bVar50 | auVar79[6],
                                     CONCAT15(bVar49 | auVar79[5],
                                              CONCAT14(bVar48 | auVar79[4],
                                                       CONCAT13(bVar47 | auVar79[3],
                                                                CONCAT12(bVar46 | auVar79[2],
                                                                         CONCAT11(bVar45 | auVar79[1
                                                  ],bVar43 | auVar79[0])))))));
          uVar21 = uVar12;
        }
        while ((uVar18 != 0 && (uVar21 != 0))) {
          uVar21 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          lVar17 = LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20);
          uVar21 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          fVar25 = param_1[lVar17];
          param_1[lVar17] = pfVar14[-LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20)];
          pfVar14[-LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20)] = fVar25;
          uVar12 = uVar12 - 1 & uVar12;
          uVar16 = uVar16 - 1 & uVar16;
          uVar18 = uVar12;
          uVar21 = uVar16;
        }
        lVar17 = 0x100;
        if (uVar16 != 0) {
          lVar17 = 0;
        }
        param_1 = (float *)((long)param_1 + lVar17);
        bVar9 = uVar12 == 0;
        lVar17 = -0x100;
        if (!bVar9) {
          lVar17 = 0;
        }
        pfVar14 = (float *)((long)pfVar14 + lVar17);
      } while (0x1f8 < (long)pfVar14 - (long)param_1);
      lVar17 = (long)pfVar14 - (long)param_1 >> 2;
      if (uVar12 == 0 && uVar16 == 0) goto LAB_1095053b4;
      uVar18 = lVar17 - 0x3f;
      uVar21 = 0x40;
      uVar20 = 0x40;
      if (uVar16 == 0) goto LAB_1095053c4;
      uVar21 = uVar18;
      uVar18 = uVar12;
      uVar1 = uVar16;
      if (bVar9) goto LAB_109505408;
joined_r0x00010950543c:
      while ((uVar1 != 0 && (uVar12 != 0))) {
        uVar12 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        lVar17 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar12 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        fVar25 = param_1[lVar17];
        param_1[lVar17] = pfVar14[-LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20)];
        pfVar14[-LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20)] = fVar25;
        uVar18 = uVar18 - 1 & uVar18;
        uVar12 = uVar16 - 1 & uVar16;
        uVar16 = uVar12;
        uVar1 = uVar18;
      }
      if (uVar16 != 0) {
        uVar20 = 0;
      }
      param_1 = param_1 + uVar20;
      if (uVar18 == 0) goto LAB_1095054d8;
      pfVar22 = param_1;
      if (uVar16 != 0) goto LAB_1095054e0;
      do {
        pfVar22 = pfVar14 + -(LZCOUNT(uVar18) ^ 0x3fU);
        if (param_1 != pfVar22) {
          fVar25 = *pfVar22;
          *pfVar22 = *param_1;
          *param_1 = fVar25;
        }
        uVar18 = uVar18 & (-1L << ((LZCOUNT(uVar18) ^ 0x3fU) & 0x3f) ^ 0xffffffffffffffffU);
        param_1 = param_1 + 1;
      } while (uVar18 != 0);
    }
    pfVar14 = param_1 + -1;
    if (pfVar14 != pfVar13) {
      *pfVar13 = *pfVar14;
    }
    *pfVar14 = fVar23;
    if (pfVar10 < pfVar11) {
LAB_109505574:
      FUN_109504f44(pfVar13,pfVar14,param_3,uStack_84 & 1);
      uStack_84 = 0;
    }
    else {
      pfVar10 = pfVar13;
      FUN_109505a90(pfVar13,pfVar14);
      pfVar11 = param_1;
      FUN_109505a90(param_1,param_2);
      if ((int)pfVar11 == 0) {
        if (((ulong)pfVar10 & 1) == 0) goto LAB_109505574;
      }
      else {
        param_1 = pfVar13;
        param_2 = pfVar14;
        if (((ulong)pfVar10 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109504f44; end: 109505a8f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109504f44(float *param_1,float *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  byte bVar43;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  float fVar44;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  long lVar53;
  byte bVar60;
  long lVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint uStack_64;
  
  uStack_64 = param_4;
LAB_109504f9c:
  do {
    pfVar13 = param_1;
    uVar12 = (long)param_2 - (long)pfVar13 >> 2;
    if (uVar12 - 2 == 0 || (long)uVar12 < 2) {
      if (uVar12 < 2) {
        return;
      }
      if (uVar12 == 2) {
        fVar23 = *pfVar13;
        if (param_2[-1] <= fVar23) {
          return;
        }
        *pfVar13 = param_2[-1];
        param_2[-1] = fVar23;
        return;
      }
    }
    else {
      if (uVar12 == 3) {
        fVar23 = pfVar13[1];
        fVar25 = param_2[-1];
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        param_2[-1] = fVar23;
        pfVar13[1] = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        fVar23 = param_2[-1];
        fVar25 = *pfVar13;
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        param_2[-1] = fVar23;
        fVar25 = pfVar13[1];
        bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar25;
        bVar9 = fVar25 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        fVar23 = fVar25;
        if (bVar8 && bVar9) {
          fVar23 = *pfVar13;
        }
        fVar26 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        if (bVar8 && bVar9) {
          fVar26 = fVar25;
        }
        *pfVar13 = fVar23;
        pfVar13[1] = fVar26;
        return;
      }
      if (uVar12 == 4) {
        fVar23 = pfVar13[1];
        fVar25 = pfVar13[2];
        fVar44 = *pfVar13;
        fVar26 = fVar44;
        if (fVar25 < fVar44) {
          fVar26 = fVar25;
          fVar25 = fVar44;
        }
        pfVar13[2] = fVar26;
        *pfVar13 = fVar25;
        fVar25 = param_2[-1];
        fVar26 = fVar23;
        if (fVar25 < fVar23) {
          fVar26 = fVar25;
          fVar25 = fVar23;
        }
        param_2[-1] = fVar26;
        fVar23 = *pfVar13;
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        *pfVar13 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        pfVar13[1] = fVar23;
        fVar23 = pfVar13[2];
        fVar25 = param_2[-1];
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        param_2[-1] = fVar23;
        fVar23 = pfVar13[1];
        bVar8 = fVar23 != (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        bVar9 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) <= fVar23;
        fVar25 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        if (bVar8 && bVar9) {
          fVar25 = fVar23;
        }
        if (bVar8 && bVar9) {
          fVar23 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        }
        pfVar13[1] = fVar25;
        pfVar13[2] = fVar23;
        return;
      }
      if (uVar12 == 5) {
        fVar23 = *pfVar13;
        fVar25 = pfVar13[1];
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        *pfVar13 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        pfVar13[1] = fVar23;
        fVar23 = pfVar13[3];
        fVar25 = param_2[-1];
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        param_2[-1] = fVar23;
        pfVar13[3] = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        fVar23 = param_2[-1];
        fVar25 = pfVar13[2];
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        if (fVar25 < fVar23) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar23 = fVar25;
        }
        param_2[-1] = fVar23;
        fVar25 = pfVar13[3];
        bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar25;
        bVar9 = fVar25 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        fVar26 = pfVar13[1];
        fVar23 = fVar25;
        if (bVar8 && bVar9) {
          fVar23 = pfVar13[2];
        }
        fVar44 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        if (bVar8 && bVar9) {
          fVar44 = fVar25;
        }
        pfVar13[2] = fVar23;
        pfVar13[3] = fVar44;
        fVar23 = param_2[-1];
        fVar25 = fVar26;
        if (fVar23 < fVar26) {
          fVar25 = fVar23;
          fVar23 = fVar26;
        }
        param_2[-1] = fVar25;
        fVar24 = *pfVar13;
        fVar44 = pfVar13[2];
        fVar25 = pfVar13[3];
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar27 = SUB41(fVar25,0);
        fVar26 = fVar24;
        if (fVar24 < fVar25) {
          uVar27 = SUB41(fVar24,0);
          uVar28 = (undefined1)((uint)fVar24 >> 8);
          uVar29 = (undefined1)((uint)fVar24 >> 0x10);
          uVar30 = (undefined1)((uint)fVar24 >> 0x18);
          fVar26 = fVar25;
        }
        if (fVar44 < fVar26) {
          fVar26 = fVar44;
          fVar44 = fVar24;
        }
        fVar25 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        fVar24 = fVar23;
        if ((float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar23 &&
            fVar23 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)))) {
          uVar27 = SUB41(fVar23,0);
          uVar28 = (undefined1)((uint)fVar23 >> 8);
          uVar29 = (undefined1)((uint)fVar23 >> 0x10);
          uVar30 = (undefined1)((uint)fVar23 >> 0x18);
          fVar24 = fVar25;
        }
        fVar25 = fVar26;
        if (fVar26 < fVar24) {
          fVar25 = fVar23;
        }
        *pfVar13 = fVar44;
        pfVar13[1] = fVar25;
        if (fVar26 < fVar24) {
          fVar24 = fVar26;
        }
        pfVar13[2] = fVar24;
        pfVar13[3] = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        return;
      }
    }
    if ((long)uVar12 < 0x18) {
      pfVar10 = pfVar13 + 1;
      if ((uStack_64 & 1) == 0) {
        if (pfVar13 == param_2 || pfVar10 == param_2) {
          return;
        }
        do {
          pfVar11 = pfVar10;
          fVar25 = *pfVar13;
          fVar23 = pfVar13[1];
          pfVar13 = pfVar11;
          if (fVar25 < fVar23) {
            do {
              *pfVar13 = fVar25;
              fVar25 = pfVar13[-2];
              pfVar13 = pfVar13 + -1;
            } while (fVar25 < fVar23);
            *pfVar13 = fVar23;
          }
          pfVar10 = pfVar11 + 1;
          pfVar13 = pfVar11;
        } while (pfVar11 + 1 != param_2);
        return;
      }
      if (pfVar13 == param_2 || pfVar10 == param_2) {
        return;
      }
      lVar17 = 4;
      pfVar11 = pfVar13;
      do {
        pfVar14 = pfVar10;
        fVar25 = *pfVar11;
        fVar23 = pfVar11[1];
        lVar15 = lVar17;
        if (fVar25 < fVar23) {
          do {
            *(float *)((long)pfVar13 + lVar15) = fVar25;
            lVar61 = lVar15 + -4;
            pfVar10 = pfVar13;
            if (lVar61 == 0) goto LAB_109505870;
            fVar25 = *(float *)((long)pfVar13 + lVar15 + -8);
            lVar15 = lVar61;
          } while (fVar25 < fVar23);
          pfVar10 = (float *)((long)pfVar13 + lVar61);
LAB_109505870:
          *pfVar10 = fVar23;
        }
        pfVar10 = pfVar14 + 1;
        lVar17 = lVar17 + 4;
        pfVar11 = pfVar14;
        if (pfVar10 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pfVar13 == param_2) {
        return;
      }
      uVar21 = uVar12 - 2 >> 1;
      uVar16 = uVar21;
      do {
        if ((long)uVar16 <= (long)uVar21) {
          uVar20 = uVar16 << 1 | 1;
          pfVar10 = pfVar13 + uVar20;
          uVar18 = uVar16 * 2 + 2;
          if (((long)uVar18 < (long)uVar12) && (pfVar10[1] < *pfVar10)) {
            uVar20 = uVar18;
            pfVar10 = pfVar10 + 1;
          }
          fVar25 = *pfVar10;
          fVar23 = pfVar13[uVar16];
          pfVar11 = pfVar13 + uVar16;
          if (fVar25 <= fVar23) {
            do {
              pfVar14 = pfVar10;
              *pfVar11 = fVar25;
              if ((long)uVar21 < (long)uVar20) break;
              uVar1 = uVar20 << 1 | 1;
              pfVar10 = pfVar13 + uVar1;
              uVar18 = uVar20 * 2 + 2;
              uVar20 = uVar1;
              if (((long)uVar18 < (long)uVar12) && (pfVar10[1] < *pfVar10)) {
                uVar20 = uVar18;
                pfVar10 = pfVar10 + 1;
              }
              fVar25 = *pfVar10;
              pfVar11 = pfVar14;
            } while (fVar25 <= fVar23);
            *pfVar14 = fVar23;
          }
        }
        bVar9 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar9);
      do {
        fVar23 = *pfVar13;
        pfVar10 = pfVar13;
        uVar16 = 0;
        do {
          uVar18 = uVar16 << 1 | 1;
          uVar21 = uVar16 * 2 + 2;
          pfVar11 = pfVar10 + uVar16 + 1;
          if (((long)uVar21 < (long)uVar12) && (pfVar10[uVar16 + 2] < pfVar10[uVar16 + 1])) {
            pfVar11 = pfVar10 + uVar16 + 2;
            uVar18 = uVar21;
          }
          *pfVar10 = *pfVar11;
          pfVar10 = pfVar11;
          uVar16 = uVar18;
        } while ((long)uVar18 <= (long)(uVar12 - 2 >> 1));
        param_2 = param_2 + -1;
        if (pfVar11 == param_2) {
LAB_109505a20:
          *pfVar11 = fVar23;
        }
        else {
          *pfVar11 = *param_2;
          *param_2 = fVar23;
          lVar17 = (long)pfVar11 + (4 - (long)pfVar13) >> 2;
          if (1 < lVar17) {
            uVar16 = lVar17 - 2U >> 1;
            fVar25 = pfVar13[uVar16];
            fVar23 = *pfVar11;
            pfVar14 = pfVar13 + uVar16;
            if (fVar23 < fVar25) {
              do {
                pfVar11 = pfVar14;
                *pfVar10 = fVar25;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1 >> 1;
                fVar25 = pfVar13[uVar16];
                pfVar10 = pfVar11;
                pfVar14 = pfVar13 + uVar16;
              } while (fVar23 < fVar25);
              goto LAB_109505a20;
            }
          }
        }
        bVar9 = (long)uVar12 < 3;
        uVar12 = uVar12 - 1;
        if (bVar9) {
          return;
        }
      } while( true );
    }
    pfVar10 = pfVar13 + (uVar12 >> 1);
    fVar23 = param_2[-1];
    uVar27 = SUB41(fVar23,0);
    uVar28 = (undefined1)((uint)fVar23 >> 8);
    uVar29 = (undefined1)((uint)fVar23 >> 0x10);
    uVar30 = (undefined1)((uint)fVar23 >> 0x18);
    if (uVar12 < 0x81) {
      fVar25 = *pfVar13;
      if (fVar23 < fVar25) {
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        fVar25 = fVar23;
      }
      param_2[-1] = fVar25;
      *pfVar13 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      fVar23 = param_2[-1];
      fVar25 = *pfVar10;
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-1] = fVar23;
      fVar23 = *pfVar13;
      bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar23;
      bVar9 = fVar23 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = *pfVar10;
      }
      *pfVar10 = fVar23;
      fVar23 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = *pfVar13;
      }
      *pfVar13 = fVar23;
    }
    else {
      fVar25 = *pfVar10;
      if (fVar23 < fVar25) {
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        fVar25 = fVar23;
      }
      param_2[-1] = fVar25;
      *pfVar10 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      fVar23 = param_2[-1];
      fVar25 = *pfVar13;
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-1] = fVar23;
      fVar23 = *pfVar10;
      bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar23;
      bVar9 = fVar23 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = *pfVar13;
      }
      *pfVar13 = fVar23;
      fVar23 = pfVar10[-1];
      fVar25 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar25 = *pfVar10;
      }
      *pfVar10 = fVar25;
      fVar25 = param_2[-2];
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-2] = fVar23;
      pfVar10[-1] = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      fVar23 = param_2[-2];
      fVar25 = pfVar13[1];
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-2] = fVar23;
      fVar23 = pfVar10[-1];
      bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar23;
      bVar9 = fVar23 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = pfVar13[1];
      }
      pfVar13[1] = fVar23;
      fVar23 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = pfVar10[-1];
      }
      pfVar10[-1] = fVar23;
      fVar23 = pfVar10[1];
      fVar25 = param_2[-3];
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-3] = fVar23;
      pfVar10[1] = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      fVar23 = param_2[-3];
      fVar25 = pfVar13[2];
      uVar27 = SUB41(fVar25,0);
      uVar28 = (undefined1)((uint)fVar25 >> 8);
      uVar29 = (undefined1)((uint)fVar25 >> 0x10);
      uVar30 = (undefined1)((uint)fVar25 >> 0x18);
      if (fVar25 < fVar23) {
        uVar27 = SUB41(fVar23,0);
        uVar28 = (undefined1)((uint)fVar23 >> 8);
        uVar29 = (undefined1)((uint)fVar23 >> 0x10);
        uVar30 = (undefined1)((uint)fVar23 >> 0x18);
        fVar23 = fVar25;
      }
      param_2[-3] = fVar23;
      fVar23 = pfVar10[1];
      bVar8 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) != fVar23;
      bVar9 = fVar23 <= (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = pfVar13[2];
      }
      pfVar13[2] = fVar23;
      fVar25 = *pfVar10;
      fVar23 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      if (bVar8 && bVar9) {
        fVar23 = pfVar10[1];
      }
      fVar26 = pfVar10[-1];
      fVar44 = fVar25;
      if (fVar23 < fVar25) {
        fVar44 = fVar23;
        fVar23 = fVar25;
      }
      fVar24 = fVar44;
      fVar25 = fVar26;
      if (fVar26 < fVar44) {
        fVar24 = fVar26;
        fVar25 = fVar44;
      }
      if (fVar23 < fVar25) {
        fVar25 = fVar23;
        fVar23 = fVar26;
      }
      pfVar10[-1] = fVar23;
      *pfVar10 = fVar25;
      pfVar10[1] = fVar24;
      fVar23 = *pfVar13;
      *pfVar13 = fVar25;
      *pfVar10 = fVar23;
      fVar23 = *pfVar13;
    }
    param_3 = param_3 + -1;
    param_1 = pfVar13;
    if (((uStack_64 & 1) == 0) && (pfVar13[-1] <= fVar23)) {
      if (fVar23 <= param_2[-1]) {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (fVar23 <= *param_1);
      }
      else {
        do {
          param_1 = param_1 + 1;
        } while (fVar23 <= *param_1);
      }
      pfVar10 = param_2;
      if (param_1 < param_2) {
        do {
          pfVar10 = pfVar10 + -1;
        } while (*pfVar10 < fVar23);
      }
      if (param_1 < pfVar10) {
        fVar26 = *param_1;
        fVar25 = *pfVar10;
        uVar27 = SUB41(fVar25,0);
        uVar28 = (undefined1)((uint)fVar25 >> 8);
        uVar29 = (undefined1)((uint)fVar25 >> 0x10);
        uVar30 = (undefined1)((uint)fVar25 >> 0x18);
        do {
          *param_1 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
          *pfVar10 = fVar26;
          do {
            param_1 = param_1 + 1;
            fVar26 = *param_1;
          } while (fVar23 <= fVar26);
          do {
            pfVar10 = pfVar10 + -1;
            fVar25 = *pfVar10;
            uVar27 = SUB41(fVar25,0);
            uVar28 = (undefined1)((uint)fVar25 >> 8);
            uVar29 = (undefined1)((uint)fVar25 >> 0x10);
            uVar30 = (undefined1)((uint)fVar25 >> 0x18);
          } while (fVar25 < fVar23);
        } while (param_1 < pfVar10);
      }
      pfVar10 = param_1 + -1;
      if (pfVar10 != pfVar13) {
        *pfVar13 = *pfVar10;
      }
      uStack_64 = 0;
      *pfVar10 = fVar23;
      goto LAB_109504f9c;
    }
    pfVar10 = pfVar13;
    if (fVar23 <= param_2[-1]) {
      do {
        pfVar10 = pfVar10 + 1;
        if (param_2 <= pfVar10) break;
      } while (fVar23 <= *pfVar10);
    }
    else {
      do {
        pfVar10 = pfVar10 + 1;
      } while (fVar23 <= *pfVar10);
    }
    pfVar11 = param_2;
    if (pfVar10 < param_2) {
      do {
        pfVar11 = pfVar11 + -1;
      } while (*pfVar11 < fVar23);
    }
    param_1 = pfVar10;
    if (pfVar10 < pfVar11) {
      fVar25 = *pfVar10;
      param_1 = pfVar10 + 1;
      *pfVar10 = *pfVar11;
      *pfVar11 = fVar25;
    }
    pfVar14 = pfVar11 + -1;
    if ((long)pfVar14 - (long)param_1 < 0x1f9) {
      uVar12 = 0;
      lVar17 = (long)pfVar14 - (long)param_1 >> 2;
      bVar9 = true;
LAB_1095053b4:
      uVar18 = (lVar17 + 1) / 2;
      uVar21 = (lVar17 + 1) - uVar18;
LAB_1095053c4:
      if ((long)uVar18 < 1) {
        uVar16 = 0;
      }
      else {
        uVar20 = 0;
        uVar16 = 0;
        do {
          uVar16 = (ulong)(param_1[uVar20] <= fVar23) << (uVar20 & 0x3f) | uVar16;
          uVar20 = uVar20 + 1;
        } while (uVar18 != uVar20);
      }
      uVar20 = uVar18;
      uVar18 = uVar12;
      uVar1 = uVar16;
      if (!bVar9) goto joined_r0x00010950543c;
LAB_109505408:
      if (0 < (long)uVar21) {
        uVar19 = 0;
        uVar12 = 0;
        pfVar22 = pfVar14;
        do {
          uVar12 = (ulong)(fVar23 < *pfVar22) << (uVar19 & 0x3f) | uVar12;
          uVar19 = uVar19 + 1;
          pfVar22 = pfVar22 + -1;
          uVar18 = uVar12;
          uVar1 = uVar16;
        } while (uVar21 != uVar19);
        goto joined_r0x00010950543c;
      }
      if (uVar16 != 0) {
        uVar20 = 0;
      }
      param_1 = param_1 + uVar20;
LAB_1095054d8:
      if (uVar16 != 0) {
        pfVar14 = pfVar14 + -uVar21;
        pfVar22 = param_1;
LAB_1095054e0:
        do {
          param_1 = pfVar14;
          pfVar14 = pfVar22 + (LZCOUNT(uVar16) ^ 0x3fU);
          if (param_1 != pfVar14) {
            fVar25 = *pfVar14;
            *pfVar14 = *param_1;
            *param_1 = fVar25;
          }
          uVar16 = uVar16 & (-1L << ((LZCOUNT(uVar16) ^ 0x3fU) & 0x3f) ^ 0xffffffffffffffffU);
          pfVar14 = param_1 + -1;
        } while (uVar16 != 0);
      }
    }
    else {
      uVar12 = 0;
      uVar16 = 0;
      do {
        if (uVar16 == 0) {
          bVar43 = 0;
          bVar45 = 0;
          bVar46 = 0;
          bVar47 = 0;
          bVar48 = 0;
          bVar49 = 0;
          bVar50 = 0;
          bVar51 = 0;
          bVar52 = 0;
          bVar54 = 0;
          bVar55 = 0;
          bVar56 = 0;
          bVar57 = 0;
          bVar58 = 0;
          bVar59 = 0;
          bVar60 = 0;
          auVar79 = ZEXT816(1) << 0x40;
          bVar62 = 0;
          bVar63 = 0;
          bVar64 = 0;
          bVar65 = 0;
          bVar66 = 0;
          bVar67 = 0;
          bVar68 = 0;
          bVar69 = 0;
          bVar70 = 0;
          bVar71 = 0;
          bVar72 = 0;
          bVar73 = 0;
          bVar74 = 0;
          bVar75 = 0;
          bVar76 = 0;
          bVar77 = 0;
          lVar17 = 0;
          lVar61 = 3;
          lVar15 = 2;
          do {
            pfVar22 = (float *)((long)param_1 + lVar17);
            auVar81[0] = ~-(fVar23 < pfVar22[2]) & 1;
            auVar81._1_7_ = 0;
            auVar81[8] = ~-(fVar23 < pfVar22[3]) & 1;
            auVar81._9_7_ = 0;
            auVar78[0] = ~-(fVar23 < *pfVar22) & 1;
            auVar78._1_7_ = 0;
            auVar78[8] = ~-(fVar23 < pfVar22[1]) & 1;
            auVar78._9_7_ = 0;
            auVar78 = NEON_ushl(auVar78,auVar79,8);
            auVar83._8_8_ = lVar61;
            auVar83._0_8_ = lVar15;
            auVar83 = NEON_ushl(auVar81,auVar83,8);
            bVar62 = auVar83[0] | bVar62;
            bVar63 = auVar83[1] | bVar63;
            bVar64 = auVar83[2] | bVar64;
            bVar65 = auVar83[3] | bVar65;
            bVar66 = auVar83[4] | bVar66;
            bVar67 = auVar83[5] | bVar67;
            bVar68 = auVar83[6] | bVar68;
            bVar69 = auVar83[7] | bVar69;
            bVar70 = auVar83[8] | bVar70;
            bVar71 = auVar83[9] | bVar71;
            bVar72 = auVar83[10] | bVar72;
            bVar73 = auVar83[0xb] | bVar73;
            bVar74 = auVar83[0xc] | bVar74;
            bVar75 = auVar83[0xd] | bVar75;
            bVar76 = auVar83[0xe] | bVar76;
            bVar77 = auVar83[0xf] | bVar77;
            bVar43 = auVar78[0] | bVar43;
            bVar45 = auVar78[1] | bVar45;
            bVar46 = auVar78[2] | bVar46;
            bVar47 = auVar78[3] | bVar47;
            bVar48 = auVar78[4] | bVar48;
            bVar49 = auVar78[5] | bVar49;
            bVar50 = auVar78[6] | bVar50;
            bVar51 = auVar78[7] | bVar51;
            bVar52 = auVar78[8] | bVar52;
            bVar54 = auVar78[9] | bVar54;
            bVar55 = auVar78[10] | bVar55;
            bVar56 = auVar78[0xb] | bVar56;
            bVar57 = auVar78[0xc] | bVar57;
            bVar58 = auVar78[0xd] | bVar58;
            bVar59 = auVar78[0xe] | bVar59;
            bVar60 = auVar78[0xf] | bVar60;
            lVar15 = lVar15 + 4;
            lVar61 = lVar61 + 4;
            lVar53 = auVar79._8_8_;
            auVar79._0_8_ = auVar79._0_8_ + 4;
            auVar79._8_8_ = lVar53 + 4;
            lVar17 = lVar17 + 0x10;
          } while (lVar17 != 0x100);
          bVar43 = bVar43 | bVar62;
          bVar45 = bVar45 | bVar63;
          bVar46 = bVar46 | bVar64;
          bVar47 = bVar47 | bVar65;
          bVar48 = bVar48 | bVar66;
          bVar49 = bVar49 | bVar67;
          bVar50 = bVar50 | bVar68;
          bVar51 = bVar51 | bVar69;
          auVar5[1] = bVar45;
          auVar5[0] = bVar43;
          auVar5[2] = bVar46;
          auVar5[3] = bVar47;
          auVar5[4] = bVar48;
          auVar5[5] = bVar49;
          auVar5[6] = bVar50;
          auVar5[7] = bVar51;
          auVar5[8] = bVar52 | bVar70;
          auVar5[9] = bVar54 | bVar71;
          auVar5[10] = bVar55 | bVar72;
          auVar5[0xb] = bVar56 | bVar73;
          auVar5[0xc] = bVar57 | bVar74;
          auVar5[0xd] = bVar58 | bVar75;
          auVar5[0xe] = bVar59 | bVar76;
          auVar5[0xf] = bVar60 | bVar77;
          auVar6[1] = bVar45;
          auVar6[0] = bVar43;
          auVar6[2] = bVar46;
          auVar6[3] = bVar47;
          auVar6[4] = bVar48;
          auVar6[5] = bVar49;
          auVar6[6] = bVar50;
          auVar6[7] = bVar51;
          auVar6[8] = bVar52 | bVar70;
          auVar6[9] = bVar54 | bVar71;
          auVar6[10] = bVar55 | bVar72;
          auVar6[0xb] = bVar56 | bVar73;
          auVar6[0xc] = bVar57 | bVar74;
          auVar6[0xd] = bVar58 | bVar75;
          auVar6[0xe] = bVar59 | bVar76;
          auVar6[0xf] = bVar60 | bVar77;
          auVar79 = NEON_ext(auVar5,auVar6,8,1);
          uVar16 = CONCAT17(bVar51 | auVar79[7],
                            CONCAT16(bVar50 | auVar79[6],
                                     CONCAT15(bVar49 | auVar79[5],
                                              CONCAT14(bVar48 | auVar79[4],
                                                       CONCAT13(bVar47 | auVar79[3],
                                                                CONCAT12(bVar46 | auVar79[2],
                                                                         CONCAT11(bVar45 | auVar79[1
                                                  ],bVar43 | auVar79[0])))))));
        }
        uVar21 = uVar12;
        uVar18 = uVar16;
        if (uVar12 == 0) {
          uVar35 = 3;
          uVar36 = 0;
          uVar37 = 0;
          uVar38 = 0;
          uVar39 = 0;
          uVar40 = 0;
          uVar41 = 0;
          uVar42 = 0;
          uVar27 = 2;
          uVar28 = 0;
          uVar29 = 0;
          uVar30 = 0;
          uVar31 = 0;
          uVar32 = 0;
          uVar33 = 0;
          uVar34 = 0;
          lVar61 = 1;
          lVar17 = 0;
          bVar43 = 0;
          bVar45 = 0;
          bVar46 = 0;
          bVar47 = 0;
          bVar48 = 0;
          bVar49 = 0;
          bVar50 = 0;
          bVar51 = 0;
          bVar52 = 0;
          bVar54 = 0;
          bVar55 = 0;
          bVar56 = 0;
          bVar57 = 0;
          bVar58 = 0;
          bVar59 = 0;
          bVar60 = 0;
          lVar15 = -0xc;
          bVar62 = 0;
          bVar63 = 0;
          bVar64 = 0;
          bVar65 = 0;
          bVar66 = 0;
          bVar67 = 0;
          bVar68 = 0;
          bVar69 = 0;
          bVar70 = 0;
          bVar71 = 0;
          bVar72 = 0;
          bVar73 = 0;
          bVar74 = 0;
          bVar75 = 0;
          bVar76 = 0;
          bVar77 = 0;
          do {
            auVar79 = NEON_rev64(*(undefined1 (*) [16])((long)pfVar14 + lVar15),4);
            auVar79 = NEON_ext(auVar79,auVar79,8,1);
            auVar82[0] = -(fVar23 < auVar79._8_4_) & 1;
            auVar82._1_7_ = 0;
            auVar82[8] = -(fVar23 < auVar79._12_4_) & 1;
            auVar82._9_7_ = 0;
            auVar80[0] = -(fVar23 < auVar79._0_4_) & 1;
            auVar80._1_7_ = 0;
            auVar80[8] = -(fVar23 < auVar79._4_4_) & 1;
            auVar80._9_7_ = 0;
            auVar7._8_8_ = lVar61;
            auVar7._0_8_ = lVar17;
            auVar79 = NEON_ushl(auVar80,auVar7,8);
            auVar2[1] = uVar28;
            auVar2[0] = uVar27;
            auVar2[2] = uVar29;
            auVar2[3] = uVar30;
            auVar2[4] = uVar31;
            auVar2[5] = uVar32;
            auVar2[6] = uVar33;
            auVar2[7] = uVar34;
            auVar2[8] = uVar35;
            auVar2[9] = uVar36;
            auVar2[10] = uVar37;
            auVar2[0xb] = uVar38;
            auVar2[0xc] = uVar39;
            auVar2[0xd] = uVar40;
            auVar2[0xe] = uVar41;
            auVar2[0xf] = uVar42;
            auVar83 = NEON_ushl(auVar82,auVar2,8);
            bVar62 = auVar83[0] | bVar62;
            bVar63 = auVar83[1] | bVar63;
            bVar64 = auVar83[2] | bVar64;
            bVar65 = auVar83[3] | bVar65;
            bVar66 = auVar83[4] | bVar66;
            bVar67 = auVar83[5] | bVar67;
            bVar68 = auVar83[6] | bVar68;
            bVar69 = auVar83[7] | bVar69;
            bVar70 = auVar83[8] | bVar70;
            bVar71 = auVar83[9] | bVar71;
            bVar72 = auVar83[10] | bVar72;
            bVar73 = auVar83[0xb] | bVar73;
            bVar74 = auVar83[0xc] | bVar74;
            bVar75 = auVar83[0xd] | bVar75;
            bVar76 = auVar83[0xe] | bVar76;
            bVar77 = auVar83[0xf] | bVar77;
            bVar43 = auVar79[0] | bVar43;
            bVar45 = auVar79[1] | bVar45;
            bVar46 = auVar79[2] | bVar46;
            bVar47 = auVar79[3] | bVar47;
            bVar48 = auVar79[4] | bVar48;
            bVar49 = auVar79[5] | bVar49;
            bVar50 = auVar79[6] | bVar50;
            bVar51 = auVar79[7] | bVar51;
            bVar52 = auVar79[8] | bVar52;
            bVar54 = auVar79[9] | bVar54;
            bVar55 = auVar79[10] | bVar55;
            bVar56 = auVar79[0xb] | bVar56;
            bVar57 = auVar79[0xc] | bVar57;
            bVar58 = auVar79[0xd] | bVar58;
            bVar59 = auVar79[0xe] | bVar59;
            bVar60 = auVar79[0xf] | bVar60;
            lVar53 = CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(uVar31,CONCAT13(uVar30
                                                  ,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))))))) + 4
            ;
            uVar27 = (undefined1)lVar53;
            uVar28 = (undefined1)((ulong)lVar53 >> 8);
            uVar29 = (undefined1)((ulong)lVar53 >> 0x10);
            uVar30 = (undefined1)((ulong)lVar53 >> 0x18);
            uVar31 = (undefined1)((ulong)lVar53 >> 0x20);
            uVar32 = (undefined1)((ulong)lVar53 >> 0x28);
            uVar33 = (undefined1)((ulong)lVar53 >> 0x30);
            uVar34 = (undefined1)((ulong)lVar53 >> 0x38);
            lVar53 = CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,CONCAT13(uVar38
                                                  ,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))))))) + 4
            ;
            uVar35 = (undefined1)lVar53;
            uVar36 = (undefined1)((ulong)lVar53 >> 8);
            uVar37 = (undefined1)((ulong)lVar53 >> 0x10);
            uVar38 = (undefined1)((ulong)lVar53 >> 0x18);
            uVar39 = (undefined1)((ulong)lVar53 >> 0x20);
            uVar40 = (undefined1)((ulong)lVar53 >> 0x28);
            uVar41 = (undefined1)((ulong)lVar53 >> 0x30);
            uVar42 = (undefined1)((ulong)lVar53 >> 0x38);
            lVar17 = lVar17 + 4;
            lVar61 = lVar61 + 4;
            lVar15 = lVar15 + -0x10;
          } while (lVar15 != -0x10c);
          bVar43 = bVar43 | bVar62;
          bVar45 = bVar45 | bVar63;
          bVar46 = bVar46 | bVar64;
          bVar47 = bVar47 | bVar65;
          bVar48 = bVar48 | bVar66;
          bVar49 = bVar49 | bVar67;
          bVar50 = bVar50 | bVar68;
          bVar51 = bVar51 | bVar69;
          auVar3[1] = bVar45;
          auVar3[0] = bVar43;
          auVar3[2] = bVar46;
          auVar3[3] = bVar47;
          auVar3[4] = bVar48;
          auVar3[5] = bVar49;
          auVar3[6] = bVar50;
          auVar3[7] = bVar51;
          auVar3[8] = bVar52 | bVar70;
          auVar3[9] = bVar54 | bVar71;
          auVar3[10] = bVar55 | bVar72;
          auVar3[0xb] = bVar56 | bVar73;
          auVar3[0xc] = bVar57 | bVar74;
          auVar3[0xd] = bVar58 | bVar75;
          auVar3[0xe] = bVar59 | bVar76;
          auVar3[0xf] = bVar60 | bVar77;
          auVar4[1] = bVar45;
          auVar4[0] = bVar43;
          auVar4[2] = bVar46;
          auVar4[3] = bVar47;
          auVar4[4] = bVar48;
          auVar4[5] = bVar49;
          auVar4[6] = bVar50;
          auVar4[7] = bVar51;
          auVar4[8] = bVar52 | bVar70;
          auVar4[9] = bVar54 | bVar71;
          auVar4[10] = bVar55 | bVar72;
          auVar4[0xb] = bVar56 | bVar73;
          auVar4[0xc] = bVar57 | bVar74;
          auVar4[0xd] = bVar58 | bVar75;
          auVar4[0xe] = bVar59 | bVar76;
          auVar4[0xf] = bVar60 | bVar77;
          auVar79 = NEON_ext(auVar3,auVar4,8,1);
          uVar12 = CONCAT17(bVar51 | auVar79[7],
                            CONCAT16(bVar50 | auVar79[6],
                                     CONCAT15(bVar49 | auVar79[5],
                                              CONCAT14(bVar48 | auVar79[4],
                                                       CONCAT13(bVar47 | auVar79[3],
                                                                CONCAT12(bVar46 | auVar79[2],
                                                                         CONCAT11(bVar45 | auVar79[1
                                                  ],bVar43 | auVar79[0])))))));
          uVar21 = uVar12;
        }
        while ((uVar18 != 0 && (uVar21 != 0))) {
          uVar21 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          lVar17 = LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20);
          uVar21 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          fVar25 = param_1[lVar17];
          param_1[lVar17] = pfVar14[-LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20)];
          pfVar14[-LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20)] = fVar25;
          uVar12 = uVar12 - 1 & uVar12;
          uVar16 = uVar16 - 1 & uVar16;
          uVar18 = uVar12;
          uVar21 = uVar16;
        }
        lVar17 = 0x100;
        if (uVar16 != 0) {
          lVar17 = 0;
        }
        param_1 = (float *)((long)param_1 + lVar17);
        bVar9 = uVar12 == 0;
        lVar17 = -0x100;
        if (!bVar9) {
          lVar17 = 0;
        }
        pfVar14 = (float *)((long)pfVar14 + lVar17);
      } while (0x1f8 < (long)pfVar14 - (long)param_1);
      lVar17 = (long)pfVar14 - (long)param_1 >> 2;
      if (uVar12 == 0 && uVar16 == 0) goto LAB_1095053b4;
      uVar18 = lVar17 - 0x3f;
      uVar21 = 0x40;
      uVar20 = 0x40;
      if (uVar16 == 0) goto LAB_1095053c4;
      uVar21 = uVar18;
      uVar18 = uVar12;
      uVar1 = uVar16;
      if (bVar9) goto LAB_109505408;
joined_r0x00010950543c:
      while ((uVar1 != 0 && (uVar12 != 0))) {
        uVar12 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        lVar17 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar12 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        fVar25 = param_1[lVar17];
        param_1[lVar17] = pfVar14[-LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20)];
        pfVar14[-LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20)] = fVar25;
        uVar18 = uVar18 - 1 & uVar18;
        uVar12 = uVar16 - 1 & uVar16;
        uVar16 = uVar12;
        uVar1 = uVar18;
      }
      if (uVar16 != 0) {
        uVar20 = 0;
      }
      param_1 = param_1 + uVar20;
      if (uVar18 == 0) goto LAB_1095054d8;
      pfVar22 = param_1;
      if (uVar16 != 0) goto LAB_1095054e0;
      do {
        pfVar22 = pfVar14 + -(LZCOUNT(uVar18) ^ 0x3fU);
        if (param_1 != pfVar22) {
          fVar25 = *pfVar22;
          *pfVar22 = *param_1;
          *param_1 = fVar25;
        }
        uVar18 = uVar18 & (-1L << ((LZCOUNT(uVar18) ^ 0x3fU) & 0x3f) ^ 0xffffffffffffffffU);
        param_1 = param_1 + 1;
      } while (uVar18 != 0);
    }
    pfVar14 = param_1 + -1;
    if (pfVar14 != pfVar13) {
      *pfVar13 = *pfVar14;
    }
    *pfVar14 = fVar23;
    if (pfVar10 < pfVar11) {
LAB_109505574:
      FUN_109504f44(pfVar13,pfVar14,param_3,uStack_64 & 1);
      uStack_64 = 0;
    }
    else {
      pfVar10 = pfVar13;
      FUN_109505a90(pfVar13,pfVar14);
      pfVar11 = param_1;
      FUN_109505a90(param_1,param_2);
      if ((int)pfVar11 == 0) {
        if (((ulong)pfVar10 & 1) == 0) goto LAB_109505574;
      }
      else {
        param_1 = pfVar13;
        param_2 = pfVar14;
        if (((ulong)pfVar10 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109505a90; end: 109505d1f;  */

bool FUN_109505a90(float *param_1,float *param_2)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  float *pfVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar3 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 == 2) {
      fVar10 = *param_1;
      if (param_2[-1] <= fVar10) {
        return true;
      }
      *param_1 = param_2[-1];
      param_2[-1] = fVar10;
      return true;
    }
  }
  else {
    if (uVar3 == 3) {
      fVar11 = param_1[1];
      fVar10 = param_2[-1];
      fVar12 = fVar11;
      if (fVar10 < fVar11) {
        fVar12 = fVar10;
        fVar10 = fVar11;
      }
      param_2[-1] = fVar12;
      param_1[1] = fVar10;
      fVar11 = param_2[-1];
      fVar10 = *param_1;
      fVar12 = fVar11;
      if (fVar10 < fVar11) {
        fVar12 = fVar10;
        fVar10 = fVar11;
      }
      param_2[-1] = fVar12;
      fVar12 = param_1[1];
      if (fVar12 < fVar10) {
        fVar10 = fVar12;
        fVar12 = *param_1;
      }
      *param_1 = fVar12;
      param_1[1] = fVar10;
      return true;
    }
    if (uVar3 == 4) {
      fVar14 = param_1[1];
      fVar10 = param_1[2];
      fVar11 = *param_1;
      fVar12 = fVar11;
      if (fVar10 < fVar11) {
        fVar12 = fVar10;
        fVar10 = fVar11;
      }
      param_1[2] = fVar12;
      *param_1 = fVar10;
      fVar10 = param_2[-1];
      fVar12 = fVar14;
      if (fVar10 < fVar14) {
        fVar12 = fVar10;
        fVar10 = fVar14;
      }
      param_2[-1] = fVar12;
      fVar11 = *param_1;
      fVar12 = fVar11;
      if (fVar10 < fVar11) {
        fVar12 = fVar10;
        fVar10 = fVar11;
      }
      *param_1 = fVar10;
      param_1[1] = fVar12;
      fVar11 = param_1[2];
      fVar10 = param_2[-1];
      fVar12 = fVar11;
      if (fVar10 < fVar11) {
        fVar12 = fVar10;
        fVar10 = fVar11;
      }
      param_2[-1] = fVar12;
      fVar11 = param_1[1];
      fVar12 = fVar11;
      if (fVar10 < fVar11) {
        fVar12 = fVar10;
        fVar10 = fVar11;
      }
      param_1[1] = fVar10;
      param_1[2] = fVar12;
      return true;
    }
    if (uVar3 == 5) {
      fVar11 = *param_1;
      fVar10 = param_1[1];
      fVar12 = fVar11;
      if (fVar10 < fVar11) {
        fVar12 = fVar10;
        fVar10 = fVar11;
      }
      *param_1 = fVar10;
      param_1[1] = fVar12;
      fVar11 = param_1[3];
      fVar10 = param_2[-1];
      fVar12 = fVar11;
      if (fVar10 < fVar11) {
        fVar12 = fVar10;
        fVar10 = fVar11;
      }
      param_2[-1] = fVar12;
      param_1[3] = fVar10;
      fVar11 = param_2[-1];
      fVar10 = param_1[2];
      fVar12 = fVar11;
      if (fVar10 < fVar11) {
        fVar12 = fVar10;
        fVar10 = fVar11;
      }
      param_2[-1] = fVar12;
      fVar12 = param_1[3];
      fVar11 = param_1[1];
      if (fVar12 < fVar10) {
        fVar10 = fVar12;
        fVar12 = param_1[2];
      }
      param_1[2] = fVar12;
      param_1[3] = fVar10;
      fVar10 = param_2[-1];
      fVar12 = fVar11;
      if (fVar10 < fVar11) {
        fVar12 = fVar10;
        fVar10 = fVar11;
      }
      param_2[-1] = fVar12;
      fVar9 = *param_1;
      fVar11 = param_1[2];
      fVar13 = param_1[3];
      fVar14 = fVar13;
      fVar12 = fVar9;
      if (fVar9 < fVar13) {
        fVar14 = fVar9;
        fVar12 = fVar13;
      }
      if (fVar11 < fVar12) {
        fVar12 = fVar11;
        fVar11 = fVar9;
      }
      fVar13 = fVar14;
      fVar9 = fVar10;
      if (fVar10 < fVar14) {
        fVar13 = fVar10;
        fVar9 = fVar14;
      }
      fVar14 = fVar12;
      if (fVar12 < fVar9) {
        fVar14 = fVar10;
      }
      *param_1 = fVar11;
      param_1[1] = fVar14;
      if (fVar12 < fVar9) {
        fVar9 = fVar12;
      }
      param_1[2] = fVar9;
      param_1[3] = fVar13;
      return true;
    }
  }
  pfVar8 = param_1 + 2;
  fVar10 = *pfVar8;
  fVar14 = *param_1;
  fVar11 = param_1[1];
  fVar12 = fVar11;
  if (fVar10 < fVar11) {
    fVar12 = fVar10;
    fVar10 = fVar11;
  }
  fVar9 = fVar12;
  fVar11 = fVar14;
  if (fVar14 < fVar12) {
    fVar9 = fVar14;
    fVar11 = fVar12;
  }
  *pfVar8 = fVar9;
  if (fVar10 < fVar11) {
    fVar11 = fVar10;
    fVar10 = fVar14;
  }
  *param_1 = fVar10;
  param_1[1] = fVar11;
  if (param_1 + 3 != param_2) {
    iVar5 = 0;
    lVar6 = 0xc;
    pfVar2 = param_1 + 3;
    do {
      pfVar4 = pfVar2;
      fVar10 = *pfVar4;
      fVar12 = *pfVar8;
      lVar7 = lVar6;
      if (fVar12 < fVar10) {
        do {
          *(float *)((long)param_1 + lVar7) = fVar12;
          lVar1 = lVar7 + -4;
          pfVar8 = param_1;
          if (lVar1 == 0) goto LAB_109505c70;
          fVar12 = *(float *)((long)param_1 + lVar7 + -8);
          lVar7 = lVar1;
        } while (fVar12 < fVar10);
        pfVar8 = (float *)((long)param_1 + lVar1);
LAB_109505c70:
        *pfVar8 = fVar10;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return pfVar4 + 1 == param_2;
        }
      }
      lVar6 = lVar6 + 4;
      pfVar2 = pfVar4 + 1;
      pfVar8 = pfVar4;
    } while (pfVar4 + 1 != param_2);
  }
  return true;
}



/* Entry: 109505d20; end: 109506693;  */

/* WARNING: Removing unreachable block (ram,0x0001095064fc) */
/* WARNING: Removing unreachable block (ram,0x0001095062c8) */
/* WARNING: Removing unreachable block (ram,0x000109506198) */
/* WARNING: Removing unreachable block (ram,0x000109505f64) */
/* WARNING: Removing unreachable block (ram,0x000109505e4c) */
/* WARNING: Removing unreachable block (ram,0x000109505ecc) */
/* WARNING: Removing unreachable block (ram,0x000109506160) */
/* WARNING: Removing unreachable block (ram,0x000109506230) */
/* WARNING: Removing unreachable block (ram,0x000109506300) */
/* WARNING: Removing unreachable block (ram,0x000109506534) */

undefined8 FUN_109505d20(long param_1,undefined8 *param_2,uint param_3)

{
  char cVar1;
  char **ppcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  undefined4 uVar9;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  char *apcStack_c8 [2];
  undefined7 uStack_b8;
  undefined4 uStack_b1;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  long lStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  FUN_1094f7728(param_1 + 0xa8);
  uStack_ad = 0;
  uStack_ac = 0;
  if (param_3 < 2) {
    puVar5 = (undefined8 *)&UNK_10f5676e2;
LAB_109505d8c:
    lStack_a8 = 0xb;
    uStack_b8 = (undefined7)*puVar5;
    uStack_b1 = *(undefined4 *)((long)puVar5 + 7);
  }
  else {
    if (param_3 == 2) {
      puVar5 = (undefined8 *)&UNK_10f5676ee;
      goto LAB_109505d8c;
    }
    lStack_a8 = 0xc;
    uStack_b8 = 0x6769685f736f69;
    uStack_b1 = 0x6e655f68;
    uStack_ad = 100;
  }
  lStack_a8 = lStack_a8 << 0x38;
  FUN_1094a68cc(apcStack_c8,*param_2,&uStack_b8);
  param_2 = (undefined8 *)*param_2;
  func_0x000107c31940(&pcStack_80,&UNK_10f571624);
  func_0x000107c31940(auStack_e0,&UNK_10f5715a3);
  FUN_1094d1f9c(&pcStack_60,apcStack_c8,&pcStack_80,param_2,auStack_e0);
  if (*(char *)(param_1 + 0xa7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  *(long *)(param_1 + 0x98) = lStack_58;
  *(char **)(param_1 + 0x90) = pcStack_60;
  *(ulong *)(param_1 + 0xa0) = uStack_50;
  uStack_50 = uStack_50 & 0xffffffffffffff;
  pcStack_60 = (char *)((ulong)pcStack_60 & 0xffffffffffffff00);
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  func_0x000107c31940(&pcStack_80,&UNK_10f571631);
  func_0x000107c31940(auStack_f8,&UNK_10f56f8b0);
  FUN_1094d1f9c(&pcStack_60,apcStack_c8,&pcStack_80,param_2,auStack_f8);
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  *(long *)(param_1 + 0x80) = lStack_58;
  *(char **)(param_1 + 0x78) = pcStack_60;
  *(ulong *)(param_1 + 0x88) = uStack_50;
  uStack_50 = uStack_50 & 0xffffffffffffff;
  pcStack_60 = (char *)((ulong)pcStack_60 & 0xffffffffffffff00);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  func_0x000107c31940(&pcStack_80,&UNK_10f57163f);
  if (*(char *)(param_1 + 0x77) < '\0') {
    func_0x000107c3192c(&uStack_110,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68))
    ;
  }
  else {
    uStack_108 = *(undefined8 *)(param_1 + 0x68);
    uStack_110 = *(undefined8 *)(param_1 + 0x60);
    lStack_100 = *(long *)(param_1 + 0x70);
  }
  FUN_1094d1f9c(&pcStack_60,apcStack_c8,&pcStack_80,param_2,&uStack_110);
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  *(long *)(param_1 + 0x68) = lStack_58;
  *(char **)(param_1 + 0x60) = pcStack_60;
  *(ulong *)(param_1 + 0x70) = uStack_50;
  uStack_50 = uStack_50 & 0xffffffffffffff;
  pcStack_60 = (char *)((ulong)pcStack_60 & 0xffffffffffffff00);
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  func_0x000107c31940(auStack_128,&UNK_10f57164b);
  pcVar7 = *(char **)(param_1 + 0x10);
  pcStack_a0 = apcStack_c8[0];
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0x8000000000000000;
  cVar1 = *apcStack_c8[0];
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(apcStack_c8[0] + 8);
    FUN_1093793a4(uVar3,auStack_128);
    cVar1 = *apcStack_c8[0];
    uStack_98 = uVar3;
LAB_109505fe4:
    pcStack_60 = apcStack_c8[0];
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_58 = *(long *)(apcStack_c8[0] + 8) + 8;
    }
    else {
      if (cVar1 == '\x02') {
        uStack_50 = *(undefined8 *)(*(long *)(apcStack_c8[0] + 8) + 8);
        goto LAB_109506008;
      }
      uStack_48 = 1;
    }
  }
  else {
    if (cVar1 != '\x02') {
      uStack_88 = 1;
      goto LAB_109505fe4;
    }
    uStack_50 = *(undefined8 *)(*(long *)(apcStack_c8[0] + 8) + 8);
    uStack_90 = uStack_50;
LAB_109506008:
    uStack_48 = 0x8000000000000000;
    lStack_58 = 0;
    pcStack_60 = apcStack_c8[0];
  }
  ppcVar2 = &pcStack_a0;
  apcStack_c8[0] = pcStack_60;
  FUN_109379420(ppcVar2,&pcStack_60);
  if ((int)ppcVar2 == 0) {
    FUN_10937b950(&pcStack_a0);
    FUN_1094e5754();
    pcVar7 = pcStack_60;
  }
  else {
    pcStack_80 = (char *)*param_2;
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    cVar1 = *pcStack_80;
    pcStack_60 = pcStack_80;
    if (cVar1 == '\x01') {
      lVar4 = *(long *)(pcStack_80 + 8);
      FUN_1093793a4(lVar4,auStack_128);
      pcStack_80 = (char *)*param_2;
      cVar1 = *pcStack_80;
      lStack_58 = lVar4;
LAB_1095060b4:
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0x8000000000000000;
      if (cVar1 == '\x01') {
        lStack_78 = *(long *)(pcStack_80 + 8) + 8;
      }
      else {
        if (cVar1 == '\x02') {
          uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
          goto LAB_1095060d8;
        }
        uStack_68 = 1;
      }
    }
    else {
      if (cVar1 != '\x02') {
        uStack_48 = 1;
        goto LAB_1095060b4;
      }
      uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
      uStack_50 = uStack_70;
LAB_1095060d8:
      uStack_68 = 0x8000000000000000;
      lStack_78 = 0;
    }
    ppcVar2 = &pcStack_60;
    FUN_109379420(ppcVar2,&pcStack_80);
    if (((ulong)ppcVar2 & 1) == 0) {
      FUN_10937b950(&pcStack_60);
      FUN_1094e5754();
      pcVar7 = pcStack_80;
    }
  }
  *(char **)(param_1 + 0x10) = pcVar7;
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  func_0x000107c31940(&pcStack_60,&UNK_10f571659);
  ppcVar2 = apcStack_c8;
  FUN_109506694(ppcVar2,&pcStack_60,param_2,*(undefined1 *)(param_1 + 8));
  *(char *)(param_1 + 8) = (char)ppcVar2;
  func_0x000107c31940(&pcStack_60,&UNK_10f57166b);
  ppcVar2 = apcStack_c8;
  FUN_109506694(ppcVar2,&pcStack_60,param_2,*(undefined1 *)(param_1 + 9));
  *(char *)(param_1 + 9) = (char)ppcVar2;
  func_0x000107c31940(&pcStack_80,&UNK_10f57167c);
  plVar8 = (long *)(param_1 + 0x40);
  lStack_140 = 0;
  lStack_138 = 0;
  uStack_130 = 0;
  FUN_1092cc0dc(&lStack_140,*plVar8,*(long *)(param_1 + 0x48),
                *(long *)(param_1 + 0x48) - *plVar8 >> 2);
  FUN_1094d2364(&pcStack_60,apcStack_c8,&pcStack_80,param_2,&lStack_140);
  if (*plVar8 != 0) {
    *(long *)(param_1 + 0x48) = *plVar8;
    __ZdlPv();
    *plVar8 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(long *)(param_1 + 0x48) = lStack_58;
  *(char **)(param_1 + 0x40) = pcStack_60;
  *(ulong *)(param_1 + 0x50) = uStack_50;
  lStack_58 = 0;
  uStack_50 = 0;
  pcStack_60 = (char *)0x0;
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  func_0x000107c31940(&pcStack_80,&UNK_10f57169e);
  plVar8 = (long *)(param_1 + 0x28);
  lStack_158 = 0;
  lStack_150 = 0;
  uStack_148 = 0;
  FUN_1092cc0dc(&lStack_158,*plVar8,*(long *)(param_1 + 0x30),
                *(long *)(param_1 + 0x30) - *plVar8 >> 2);
  FUN_1094d2364(&pcStack_60,apcStack_c8,&pcStack_80,param_2,&lStack_158);
  if (*plVar8 != 0) {
    *(long *)(param_1 + 0x30) = *plVar8;
    __ZdlPv();
    *plVar8 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(long *)(param_1 + 0x30) = lStack_58;
  *(char **)(param_1 + 0x28) = pcStack_60;
  *(ulong *)(param_1 + 0x38) = uStack_50;
  lStack_58 = 0;
  uStack_50 = 0;
  pcStack_60 = (char *)0x0;
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  func_0x000107c31940(&pcStack_60,&UNK_10f5716c0);
  uVar9 = *(undefined4 *)(param_1 + 0x58);
  FUN_1094d3328(apcStack_c8,&pcStack_60,param_2);
  *(undefined4 *)(param_1 + 0x58) = uVar9;
  func_0x000107c31940(auStack_128,&UNK_10f5716e4);
  pcVar7 = *(char **)(param_1 + 0x18);
  pcStack_a0 = apcStack_c8[0];
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0x8000000000000000;
  cVar1 = *apcStack_c8[0];
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(apcStack_c8[0] + 8);
    FUN_1093793a4(uVar3,auStack_128);
    cVar1 = *apcStack_c8[0];
    uStack_98 = uVar3;
LAB_109506380:
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    pcStack_60 = apcStack_c8[0];
    if (cVar1 == '\x01') {
      lStack_58 = *(long *)(apcStack_c8[0] + 8) + 8;
    }
    else {
      if (cVar1 == '\x02') {
        uStack_50 = *(undefined8 *)(*(long *)(apcStack_c8[0] + 8) + 8);
        goto LAB_1095063a4;
      }
      uStack_48 = 1;
    }
  }
  else {
    if (cVar1 != '\x02') {
      uStack_88 = 1;
      goto LAB_109506380;
    }
    uStack_50 = *(undefined8 *)(*(long *)(apcStack_c8[0] + 8) + 8);
    pcStack_60 = apcStack_c8[0];
    uStack_90 = uStack_50;
LAB_1095063a4:
    uStack_48 = 0x8000000000000000;
    lStack_58 = 0;
  }
  ppcVar2 = &pcStack_a0;
  FUN_109379420(ppcVar2,&pcStack_60);
  if ((int)ppcVar2 == 0) {
    FUN_10937b950(&pcStack_a0);
    FUN_10950694c();
    pcVar7 = pcStack_60;
    goto LAB_1095064b8;
  }
  pcVar6 = (char *)*param_2;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  cVar1 = *pcVar6;
  pcStack_60 = pcVar6;
  if (cVar1 == '\x01') {
    lVar4 = *(long *)(pcVar6 + 8);
    FUN_1093793a4(lVar4,auStack_128);
    pcVar6 = (char *)*param_2;
    cVar1 = *pcVar6;
    lStack_58 = lVar4;
LAB_109506450:
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0x8000000000000000;
    pcStack_80 = pcVar6;
    if (cVar1 == '\x01') {
      lStack_78 = *(long *)(pcVar6 + 8) + 8;
    }
    else {
      if (cVar1 == '\x02') {
        uStack_70 = *(undefined8 *)(*(long *)(pcVar6 + 8) + 8);
        goto LAB_109506474;
      }
      uStack_68 = 1;
    }
  }
  else {
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_109506450;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcVar6 + 8) + 8);
    pcStack_80 = pcVar6;
    uStack_50 = uStack_70;
LAB_109506474:
    uStack_68 = 0x8000000000000000;
    lStack_78 = 0;
  }
  ppcVar2 = &pcStack_60;
  FUN_109379420(ppcVar2,&pcStack_80);
  if (((ulong)ppcVar2 & 1) == 0) {
    FUN_10937b950(&pcStack_60);
    FUN_10950694c();
    pcVar7 = pcStack_80;
  }
LAB_1095064b8:
  *(char **)(param_1 + 0x18) = pcVar7;
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  func_0x000107c31940(&pcStack_60,&UNK_10f5716fc);
  uVar9 = *(undefined4 *)(param_1 + 0x20);
  FUN_1094d3328(apcStack_c8,&pcStack_60,param_2);
  *(undefined4 *)(param_1 + 0x20) = uVar9;
  func_0x000107c31940(&pcStack_60,&UNK_10f571716);
  ppcVar2 = apcStack_c8;
  FUN_109506694(ppcVar2,&pcStack_60,param_2,*(undefined1 *)(param_1 + 0x5c));
  *(char *)(param_1 + 0x5c) = (char)ppcVar2;
  FUN_109380f8c(apcStack_c8);
  if (lStack_a8 < 0) {
    __ZdlPv(CONCAT17((undefined1)uStack_b1,uStack_b8));
  }
  return 1;
}



/* Entry: 109506694; end: 1095067af;  */

uint FUN_109506694(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  char **ppcVar4;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcStack_70 = (char *)*param_1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x8000000000000000;
  cVar1 = *pcStack_70;
  pcStack_50 = pcStack_70;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(pcStack_70 + 8);
    FUN_1093793a4(uVar3,param_2);
    pcStack_70 = (char *)*param_1;
    cVar1 = *pcStack_70;
    uStack_48 = uVar3;
LAB_10950671c:
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_68 = *(long *)(pcStack_70 + 8) + 8;
      goto LAB_109506760;
    }
    if (cVar1 != '\x02') {
      uStack_58 = 1;
      goto LAB_109506760;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_38 = 1;
      goto LAB_10950671c;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
    uStack_40 = uStack_60;
  }
  uStack_58 = 0x8000000000000000;
  lStack_68 = 0;
LAB_109506760:
  ppcVar4 = &pcStack_50;
  FUN_109379420(ppcVar4,&pcStack_70);
  if ((int)ppcVar4 == 0) {
    FUN_10937b950(&pcStack_50);
    FUN_10938d198();
    uVar2 = (uint)(byte)pcStack_70;
  }
  else {
    func_0x000109506858(param_3,param_2,param_4);
    uVar2 = (uint)param_3;
  }
  return uVar2 & 1;
}



/* Entry: 1095067b0; end: 1095067b3;  */

undefined8 * FUN_1095067b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9bf8;
  FUN_1094dc2d8(param_1 + 0x19);
  FUN_109503c64(param_1 + 0x17);
  func_0x0001094d0850(param_1 + 0x15);
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095067b4; end: 1095067c7;  */

void FUN_1095067b4(void)

{
  FUN_1095067c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095067c8; end: 10950694b;  */

undefined8 * FUN_1095067c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9bf8;
  FUN_1094dc2d8(param_1 + 0x19);
  FUN_109503c64(param_1 + 0x17);
  func_0x0001094d0850(param_1 + 0x15);
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10950694c; end: 109506a67;  */

void FUN_10950694c(char *param_1,long *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  if (cVar1 != '\x05') {
    if (cVar1 == '\a') {
      lVar4 = (long)*(double *)(param_1 + 8);
      goto LAB_109506990;
    }
    if (cVar1 != '\x06') {
      uVar3 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(param_1);
      func_0x000107c31940(auStack_60,param_1);
      FUN_10928a5e0(auStack_48,&UNK_10f567436,auStack_60);
      FUN_10937bbbc(uVar3,0x12e,auStack_48);
      ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109506a10);
      (*pcVar2)();
    }
  }
  lVar4 = *(long *)(param_1 + 8);
LAB_109506990:
  *param_2 = lVar4;
  return;
}



/* Entry: 109506a68; end: 109507b43;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_109506a68(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long ******pppppplVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long *******ppppppplVar9;
  code *pcVar10;
  int iVar11;
  long lVar12;
  long ******pppppplVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  long *****ppppplVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined4 uVar29;
  undefined8 *puStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined4 uStack_154;
  undefined8 uStack_150;
  long *plStack_148;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long lStack_110;
  long ******apppppplStack_100 [2];
  long *******ppppppplStack_f0;
  long *****ppppplStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long ******pppppplStack_c8;
  long ******pppppplStack_c0;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  char cStack_a1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar27 = *param_2;
  func_0x000107c31940(&uStack_d0,&UNK_10f57172b);
  FUN_1094a68cc(apppppplStack_100,uVar27,&uStack_d0);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  func_0x000107c31940(&uStack_d0,&UNK_10f57173a);
  func_0x0001094a86e8(apppppplStack_100,&uStack_d0,param_1 + 8);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  func_0x000107c31940(&uStack_d0,&UNK_10f57175e);
  func_0x0001094a86e8(apppppplStack_100,&uStack_d0,param_1 + 0x20);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  func_0x000107c31940(&uStack_d0,&UNK_10f571780);
  FUN_1094f80e4(apppppplStack_100,&uStack_d0,param_1 + 0x38);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  func_0x000107c31940(&uStack_d0,&UNK_10f571794);
  pppppplVar13 = (long ******)apppppplStack_100;
  FUN_1093781f4(pppppplVar13,&uStack_d0);
  if (((ulong)pppppplVar13 & 1) == 0) {
    func_0x000107c31940(&ppppppplStack_f0,&UNK_10f5717b4);
    pppppplVar13 = (long ******)apppppplStack_100;
    FUN_1093781f4(pppppplVar13,&ppppppplStack_f0);
    if (((ulong)pppppplVar13 & 1) == 0) {
      uVar27 = *param_2;
      func_0x000107c31940(&ppppppplStack_120,&UNK_10f5717d8);
      FUN_1093781f4(uVar27,&ppppppplStack_120);
      uVar23 = (uint)uVar27 ^ 1;
      if (lStack_110 < 0) {
        __ZdlPv(ppppppplStack_120);
      }
    }
    else {
      uVar23 = 0;
    }
    if ((long)uStack_e0 < 0) {
      __ZdlPv(ppppppplStack_f0);
    }
  }
  else {
    uVar23 = 0;
  }
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  if (uVar23 != 0) {
    FUN_10937e740(&uStack_d0,&UNK_10f571892);
    FUN_109388c6c(1,&UNK_10f5717f1,&DAT_10f37747d,0x4b,&uStack_d0);
    if ((long)pppppplStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    param_1 = 0;
    goto LAB_109507178;
  }
  uStack_e0._7_1_ = (char)((ulong)uStack_e0 >> 0x38);
  plVar16 = (long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x60) = *plVar16;
  func_0x000107c31940(&uStack_d0,&UNK_10f571794);
  pppppplVar13 = (long ******)apppppplStack_100;
  FUN_1093781f4(pppppplVar13,&uStack_d0);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
    if ((int)pppppplVar13 != 0) goto LAB_109506c9c;
LAB_109506cfc:
    func_0x000107c31940(&uStack_d0,&UNK_10f5717b4);
    pppppplVar13 = (long ******)apppppplStack_100;
    FUN_1093781f4(pppppplVar13,&uStack_d0);
    if ((long)pppppplStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    if ((int)pppppplVar13 != 0) {
      func_0x000107c31940(&ppppppplStack_f0,&UNK_10f5717b4);
      lStack_138 = 0;
      lStack_130 = 0;
      uStack_128 = 0;
      FUN_1094a74cc(&uStack_d0,apppppplStack_100,&ppppppplStack_f0,&lStack_138);
      if (*plVar16 != 0) {
        *(long *)(param_1 + 0x60) = *plVar16;
        __ZdlPv();
        *plVar16 = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      *(long *******)(param_1 + 0x60) = pppppplStack_c8;
      *(char **)(param_1 + 0x58) = uStack_d0;
      *(long *******)(param_1 + 0x68) = pppppplStack_c0;
      pppppplStack_c8 = (long ******)0x0;
      pppppplStack_c0 = (long ******)0x0;
      uStack_d0 = (char *)0x0;
      if (lStack_138 != 0) {
        lStack_130 = lStack_138;
        __ZdlPv();
      }
      if (uStack_e0._7_1_ < '\0') {
        __ZdlPv(ppppppplStack_f0);
      }
    }
  }
  else {
    if ((int)pppppplVar13 == 0) goto LAB_109506cfc;
LAB_109506c9c:
    func_0x000107c31940(&uStack_d0,&UNK_10f571794);
    uVar29 = 0;
    FUN_1094a73d0(apppppplStack_100,&uStack_d0);
    if ((long)pppppplStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    uStack_d0 = (char *)CONCAT44(uStack_d0._4_4_,uVar29);
    FUN_1093c3a1c(plVar16,&uStack_d0,(long)&uStack_d0 + 4,1);
  }
  func_0x000107c31940(&ppppppplStack_120,&UNK_10f5718fb);
  uStack_d0 = (char *)apppppplStack_100[0];
  pppppplStack_c8 = (long ******)0x0;
  pppppplStack_c0 = (long ******)0x0;
  aplStack_b8[0] = (long *)0x8000000000000000;
  cVar6 = *(char *)apppppplStack_100[0];
  if (cVar6 == '\x01') {
    pppppplVar13 = (long ******)apppppplStack_100[0][1];
    FUN_1093793a4(pppppplVar13,&ppppppplStack_120);
    cVar6 = *(char *)apppppplStack_100[0];
    pppppplStack_c8 = pppppplVar13;
LAB_109506e28:
    ppppplStack_e8 = (long *****)0x0;
    uStack_e0 = (long ******)0x0;
    uStack_d8 = 0x8000000000000000;
    ppppppplStack_f0 = (long *******)apppppplStack_100[0];
    if (cVar6 == '\x01') {
      ppppplStack_e8 = apppppplStack_100[0][1] + 1;
      goto LAB_109506e6c;
    }
    if (cVar6 != '\x02') {
      uStack_d8 = 1;
      goto LAB_109506e6c;
    }
    uStack_e0 = (long ******)apppppplStack_100[0][1][1];
  }
  else {
    if (cVar6 != '\x02') {
      aplStack_b8[0] = (long *)0x1;
      goto LAB_109506e28;
    }
    uStack_e0 = (long ******)apppppplStack_100[0][1][1];
    ppppppplStack_f0 = (long *******)apppppplStack_100[0];
    pppppplStack_c0 = uStack_e0;
  }
  uStack_d8 = 0x8000000000000000;
  ppppplStack_e8 = (long *****)0x0;
LAB_109506e6c:
  puVar14 = &uStack_d0;
  FUN_109379420(puVar14,&ppppppplStack_f0);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10937b950(&uStack_d0);
    FUN_1095085b4(&ppppppplStack_f0);
    if (*(long *)(param_1 + 0x40) != 0) {
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
      __ZdlPv();
    }
    *(long ******)(param_1 + 0x48) = ppppplStack_e8;
    *(long ********)(param_1 + 0x40) = ppppppplStack_f0;
    *(long *******)(param_1 + 0x50) = uStack_e0;
  }
  if (lStack_110 < 0) {
    __ZdlPv(ppppppplStack_120);
  }
  func_0x000107c31940(&uStack_d0,&UNK_10f571919);
  func_0x0001094a6db0(apppppplStack_100,&uStack_d0,param_1 + 0x70);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  func_0x000107c31940(&uStack_d0,&UNK_10f57194a);
  func_0x0001094a6db0(apppppplStack_100,&uStack_d0,param_1 + 0x74);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  func_0x000107c31940(&uStack_d0,&UNK_10f57197f);
  FUN_1094b4850(apppppplStack_100,&uStack_d0,param_1 + 0x78);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  func_0x000107c31940(&uStack_d0,&UNK_10f5719a5);
  FUN_1094b4850(apppppplStack_100,&uStack_d0,param_1 + 0x79);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  func_0x000107c31940(&uStack_d0,&UNK_10f5719da);
  FUN_1094b4850(apppppplStack_100,&uStack_d0,param_1 + 0x90);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  func_0x000107c31940(&uStack_d0,&UNK_10f5719f9);
  FUN_1094b4850(apppppplStack_100,&uStack_d0,param_1 + 0x91);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  ppppppplStack_f0 = (long *******)0x0;
  ppppplStack_e8 = (long *****)0x0;
  uStack_e0 = (long ******)0x0;
  func_0x000107c31940(&uStack_d0,&UNK_10f571a16);
  func_0x0001094a86e8(apppppplStack_100,&uStack_d0,&ppppppplStack_f0);
  if ((long)pppppplStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  puStack_180 = param_2;
  uStack_178 = param_3;
  if ((bRam0000000113732f20 & 1) == 0) goto LAB_1095078b4;
  do {
    ppppplVar21 = ppppplStack_e8;
    ppppppplVar9 = ppppppplStack_f0;
    if (-1 < (long)uStack_e0) {
      ppppplVar21 = (long *****)((ulong)uStack_e0 >> 0x38);
      ppppppplVar9 = (long *******)&ppppppplStack_f0;
    }
    uVar20 = 0x113732f28;
    func_0x000107c2ac8c(0x113732f28,ppppppplVar9,ppppplVar21);
    uVar22 = uRam0000000113732f30;
    if (uRam0000000113732f30 != 0) {
      uVar28 = uRam0000000113732f30 - 1;
      if ((uRam0000000113732f30 & uVar28) == 0) {
        uVar24 = uVar28 & uVar20;
      }
      else {
        uVar24 = uVar20;
        if (uRam0000000113732f30 <= uVar20) {
          uVar24 = 0;
          if (uRam0000000113732f30 != 0) {
            uVar24 = uVar20 / uRam0000000113732f30;
          }
          uVar24 = uVar20 - uVar24 * uRam0000000113732f30;
        }
      }
      plVar16 = *(long **)(lRam0000000113732f28 + uVar24 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
LAB_1095070ac:
        uVar17 = plVar16[1];
        if (uVar20 == uVar17) {
          if ((long *****)plVar16[3] != ppppplVar21) break;
          lVar12 = plVar16[2];
          _memcmp(lVar12,ppppppplVar9,ppppplVar21);
          if ((int)lVar12 != 0) break;
          *(int *)(param_1 + 0x7c) = (int)plVar16[4];
          uVar27 = *puStack_180;
          func_0x000107c31940(&uStack_d0,&UNK_10f5717d8);
          FUN_1093781f4(uVar27,&uStack_d0);
          if ((long)pppppplStack_c0 < 0) {
            __ZdlPv(uStack_d0);
          }
          if ((int)uVar27 != 0) {
            pppppplVar13 = (long ******)0xb8;
            __Znwm();
            pppppplVar13[2] = (long *****)0x0;
            pppppplVar13[1] = (long *****)0x0;
            *pppppplVar13 = (long *****)&PTR_FUN_110af9cd0;
            pppppplVar13[0xf] = (long *****)0x0;
            pppppplVar13[0xe] = (long *****)0x0;
            pppppplVar13[0x11] = (long *****)0x0;
            pppppplVar13[0x10] = (long *****)0x0;
            pppppplVar13[0x16] = (long *****)0x0;
            uStack_d0 = (char *)(pppppplVar13 + 3);
            *(undefined ***)uStack_d0 = &PTR_FUN_110af9db0;
            pppppplVar13[5] = (long *****)0x0;
            pppppplVar13[4] = (long *****)0x0;
            pppppplVar13[7] = (long *****)0x0;
            pppppplVar13[6] = (long *****)0x0;
            pppppplVar13[9] = (long *****)0x0;
            pppppplVar13[8] = (long *****)0x0;
            pppppplVar13[0xb] = (long *****)0x0;
            pppppplVar13[10] = (long *****)0x0;
            pppppplVar13[0xc] = (long *****)0x0;
            pppppplVar13[0xd] = (long *****)0x800000005;
            *(undefined4 *)(pppppplVar13 + 0xf) = 3;
            pppppplVar13[0x13] = (long *****)0x0;
            pppppplVar13[0x12] = (long *****)0x0;
            pppppplVar13[0x15] = (long *****)0x0;
            pppppplVar13[0x14] = (long *****)0x0;
            *(undefined4 *)(pppppplVar13 + 0x14) = 0x3f800000;
            pppppplVar13[0x15] = (long *****)0x3f0000003f19999a;
            *(undefined4 *)(pppppplVar13 + 0x16) = 0x3b449ba6;
            pppppplStack_c8 = pppppplVar13;
            FUN_109507b44(param_1 + 0x80,&uStack_d0);
            pppppplVar13 = pppppplStack_c8;
            if (pppppplStack_c8 != (long ******)0x0) {
              pppppplVar1 = pppppplStack_c8 + 1;
              do {
                ppppplVar21 = *pppppplVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
                if (bVar7) {
                  *pppppplVar1 = (long *****)((long)ppppplVar21 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (ppppplVar21 == (long *****)0x0) {
                (*(code *)(*pppppplStack_c8)[2])(pppppplStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar13);
              }
            }
            plVar16 = *(long **)(param_1 + 0x80);
            plStack_148 = (long *)puStack_180[1];
            uStack_150 = *puStack_180;
            if (puStack_180[1] != 0) {
              plVar15 = (long *)(puStack_180[1] + 8);
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar7) {
                  *plVar15 = *plVar15 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            (**(code **)(*plVar16 + 0x10))(plVar16,&uStack_150,uStack_178);
            plVar15 = plStack_148;
            if (plStack_148 != (long *)0x0) {
              plVar2 = plStack_148 + 1;
              do {
                lVar12 = *plVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *plVar2 = lVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plStack_148 + 0x10))(plStack_148);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              }
            }
            if (((ulong)plVar16 & 1) != 0) goto LAB_1095077f4;
            FUN_10937e740(&uStack_d0,&UNK_10f571a63);
            FUN_109388c6c(1,&UNK_10f5717f1,&DAT_10f37747d,0x76,&uStack_d0);
            goto LAB_109507154;
          }
          pppppplVar13 = (long ******)0xb8;
          __Znwm();
          pppppplVar13[2] = (long *****)0x0;
          pppppplVar13[1] = (long *****)0x0;
          *pppppplVar13 = (long *****)&PTR_FUN_110af9cd0;
          pppppplVar13[0xf] = (long *****)0x0;
          pppppplVar13[0xe] = (long *****)0x0;
          pppppplVar13[0x11] = (long *****)0x0;
          pppppplVar13[0x10] = (long *****)0x0;
          pppppplVar13[0x16] = (long *****)0x0;
          uStack_d0 = (char *)(pppppplVar13 + 3);
          *(undefined ***)uStack_d0 = &PTR_FUN_110af9db0;
          pppppplVar13[5] = (long *****)0x0;
          pppppplVar13[4] = (long *****)0x0;
          pppppplVar13[7] = (long *****)0x0;
          pppppplVar13[6] = (long *****)0x0;
          pppppplVar13[9] = (long *****)0x0;
          pppppplVar13[8] = (long *****)0x0;
          pppppplVar13[0xb] = (long *****)0x0;
          pppppplVar13[10] = (long *****)0x0;
          pppppplVar13[0xc] = (long *****)0x0;
          pppppplVar13[0xd] = (long *****)0x800000005;
          *(undefined4 *)(pppppplVar13 + 0xf) = 3;
          pppppplVar13[0x13] = (long *****)0x0;
          pppppplVar13[0x12] = (long *****)0x0;
          pppppplVar13[0x15] = (long *****)0x0;
          pppppplVar13[0x14] = (long *****)0x0;
          *(undefined4 *)(pppppplVar13 + 0x14) = 0x3f800000;
          pppppplVar13[0x15] = (long *****)0x3f0000003f19999a;
          *(undefined4 *)(pppppplVar13 + 0x16) = 0x3b449ba6;
          pppppplStack_c8 = pppppplVar13;
          FUN_109507b44(param_1 + 0x80,&uStack_d0);
          pppppplVar13 = pppppplStack_c8;
          if (pppppplStack_c8 != (long ******)0x0) {
            pppppplVar1 = pppppplStack_c8 + 1;
            do {
              ppppplVar21 = *pppppplVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
              if (bVar7) {
                *pppppplVar1 = (long *****)((long)ppppplVar21 + -1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (ppppplVar21 == (long *****)0x0) {
              (*(code *)(*pppppplStack_c8)[2])(pppppplStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar13);
            }
          }
          if (*(char *)(param_1 + 0x1f) < '\0') {
            func_0x000107c3192c(&uStack_d0,*(undefined8 *)(param_1 + 8),
                                *(undefined8 *)(param_1 + 0x10));
          }
          else {
            pppppplStack_c8 = *(long *******)(param_1 + 0x10);
            uStack_d0 = *(char **)(param_1 + 8);
            pppppplStack_c0 = *(long *******)(param_1 + 0x18);
          }
          if (*(char *)(param_1 + 0x37) < '\0') {
            func_0x000107c3192c(aplStack_b8,*(undefined8 *)(param_1 + 0x20),
                                *(undefined8 *)(param_1 + 0x28));
          }
          else {
            aplStack_b8[1] = *(long **)(param_1 + 0x28);
            aplStack_b8[0] = *(long **)(param_1 + 0x20);
            uStack_a8 = *(undefined8 *)(param_1 + 0x30);
          }
          FUN_109508250(*(long *)(param_1 + 0x80) + 8,&uStack_d0,&puStack_a0,2);
          lVar12 = 0;
          do {
            if ((&cStack_a1)[lVar12] < '\0') {
              __ZdlPv(*(undefined8 *)((long)aplStack_b8 + lVar12));
            }
            lVar12 = lVar12 + -0x18;
          } while (lVar12 != -0x30);
          lVar12 = *(long *)(param_1 + 0x80);
          puVar14 = *(undefined8 **)(lVar12 + 0x20);
          if (*(undefined8 **)(lVar12 + 0x30) == puVar14) {
            if (*(undefined8 **)(lVar12 + 0x30) != (undefined8 *)0x0) {
              *(undefined8 **)(lVar12 + 0x28) = puVar14;
              __ZdlPv();
              *(undefined8 *)(lVar12 + 0x20) = 0;
              *(undefined8 *)(lVar12 + 0x28) = 0;
              *(undefined8 *)(lVar12 + 0x30) = 0;
            }
            puVar18 = (undefined8 *)0x10;
            __Znwm();
            *(undefined8 **)(lVar12 + 0x20) = puVar18;
            puVar14 = puVar18 + 2;
            *(undefined8 **)(lVar12 + 0x30) = puVar14;
            *puVar18 = 0x100000000;
            puVar18[1] = 0x3f80000000000000;
          }
          else {
            puVar18 = *(undefined8 **)(lVar12 + 0x28);
            if (puVar18 == puVar14) {
              *puVar18 = 0x100000000;
              puVar18[1] = 0x3f80000000000000;
              puVar14 = puVar18 + 2;
            }
            else {
              *puVar14 = 0x100000000;
              puVar14[1] = 0x3f80000000000000;
              puVar14 = puVar14 + 2;
            }
          }
          *(undefined8 **)(lVar12 + 0x28) = puVar14;
          lVar26 = *(long *)(param_1 + 0x80);
          lVar12 = *(long *)(lVar26 + 0x38);
          lVar25 = *(long *)(lVar26 + 0x40);
          lVar19 = lVar26;
          if (lVar25 != lVar12) {
            do {
              lVar25 = lVar25 + -0x38;
              func_0x000109508434(lVar25);
            } while (lVar25 != lVar12);
            lVar19 = *(long *)(param_1 + 0x80);
          }
          *(long *)(lVar26 + 0x40) = lVar12;
          FUN_109507ba8(lVar19 + 0x38,*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 2);
          puVar5 = *(undefined4 **)(param_1 + 0x60);
          for (puVar3 = *(undefined4 **)(param_1 + 0x58); puVar3 != puVar5; puVar3 = puVar3 + 1) {
            uVar29 = *puVar3;
            lVar12 = *(long *)(param_1 + 0x80);
            uStack_154 = 0;
            ppppppplStack_118 = (long *******)0x0;
            lStack_110 = 0;
            ppppppplStack_120 = (long *******)0x0;
            FUN_1092d1c20(&ppppppplStack_120,&uStack_154,&uStack_150,1);
            uStack_174 = 0x3f800000;
            lStack_168 = 0;
            uStack_160 = 0;
            lStack_170 = 0;
            FUN_1093c71a0(&lStack_170,&uStack_174,&lStack_170,1);
            puVar4 = *(undefined4 **)(lVar12 + 0x40);
            if (puVar4 < *(undefined4 **)(lVar12 + 0x48)) {
              *puVar4 = 0;
              puVar4[1] = uVar29;
              *(undefined8 *)(puVar4 + 6) = 0;
              *(long ********)(puVar4 + 4) = ppppppplStack_118;
              *(long ********)(puVar4 + 2) = ppppppplStack_120;
              *(long *)(puVar4 + 6) = lStack_110;
              ppppppplStack_120 = (long *******)0x0;
              ppppppplStack_118 = (long *******)0x0;
              lStack_110 = 0;
              *(long *)(puVar4 + 10) = lStack_168;
              *(long *)(puVar4 + 8) = lStack_170;
              *(undefined8 *)(puVar4 + 0xc) = uStack_160;
              *(undefined4 **)(lVar12 + 0x40) = puVar4 + 0xe;
            }
            else {
              plVar16 = (long *)(lVar12 + 0x38);
              lVar25 = (long)puVar4 - *plVar16;
              uVar20 = (lVar25 >> 3) * 0x6db6db6db6db6db7 + 1;
              if (0x492492492492492 < uVar20) {
                FUN_109508478();
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x109507920);
                (*pcVar10)();
              }
              lVar19 = (long)*(undefined4 **)(lVar12 + 0x48) - *plVar16 >> 3;
              uVar22 = lVar19 * -0x2492492492492492;
              if (uVar22 < uVar20 || uVar22 - uVar20 == 0) {
                uVar22 = uVar20;
              }
              if (0x249249249249248 < (ulong)(lVar19 * 0x6db6db6db6db6db7)) {
                uVar22 = 0x492492492492492;
              }
              aplStack_b8[1] = plVar16;
              if (uVar22 == 0) {
                plVar15 = (long *)0x0;
              }
              else {
                plVar15 = plVar16;
                FUN_10950848c();
              }
              pppppplStack_c8 = (long ******)((long)plVar15 + lVar25);
              *(undefined4 *)pppppplStack_c8 = 0;
              *(undefined4 *)((long)pppppplStack_c8 + 4) = uVar29;
              *(undefined8 *)((long)pppppplStack_c8 + 0x10) = 0;
              *(undefined8 *)((long)pppppplStack_c8 + 0x18) = 0;
              *(undefined8 *)((long)pppppplStack_c8 + 8) = 0;
              *(long ********)((long)pppppplStack_c8 + 0x10) = ppppppplStack_118;
              *(long ********)((long)pppppplStack_c8 + 8) = ppppppplStack_120;
              *(long *)((long)pppppplStack_c8 + 0x18) = lStack_110;
              ppppppplStack_120 = (long *******)0x0;
              ppppppplStack_118 = (long *******)0x0;
              lStack_110 = 0;
              *(undefined8 *)((long)pppppplStack_c8 + 0x20) = 0;
              *(undefined8 *)((long)pppppplStack_c8 + 0x28) = 0;
              *(undefined8 *)((long)pppppplStack_c8 + 0x30) = 0;
              *(long *)((long)pppppplStack_c8 + 0x28) = lStack_168;
              *(long *)((long)pppppplStack_c8 + 0x20) = lStack_170;
              *(undefined8 *)((long)pppppplStack_c8 + 0x30) = uStack_160;
              lStack_170 = 0;
              lStack_168 = 0;
              uStack_160 = 0;
              puVar4 = (undefined4 *)((long)pppppplStack_c8 + 0x38);
              lVar25 = (long)pppppplStack_c8 + (*(long *)(lVar12 + 0x38) - *(long *)(lVar12 + 0x40))
              ;
              uStack_d0 = (char *)plVar15;
              pppppplStack_c0 = (long ******)puVar4;
              aplStack_b8[0] = plVar15 + uVar22 * 7;
              func_0x0001095084d4(plVar16,*(long *)(lVar12 + 0x38),*(long *)(lVar12 + 0x40),lVar25);
              uStack_d0 = *(char **)(lVar12 + 0x38);
              *(long *)(lVar12 + 0x38) = lVar25;
              *(undefined4 **)(lVar12 + 0x40) = puVar4;
              aplStack_b8[0] = *(long **)(lVar12 + 0x48);
              *(long **)(lVar12 + 0x48) = plVar15 + uVar22 * 7;
              pppppplStack_c8 = (long ******)uStack_d0;
              pppppplStack_c0 = (long ******)uStack_d0;
              func_0x000109508568(&uStack_d0);
              *(undefined4 **)(lVar12 + 0x40) = puVar4;
              if (lStack_170 != 0) {
                lStack_168 = lStack_170;
                __ZdlPv();
              }
            }
            if (ppppppplStack_120 != (long *******)0x0) {
              ppppppplStack_118 = ppppppplStack_120;
              __ZdlPv();
            }
          }
          iVar11 = *(int *)(param_1 + 0x38);
          lVar12 = *(long *)(param_1 + 0x80);
          *(int *)(lVar12 + 0x50) = iVar11;
          *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x60) + iVar11;
          *(undefined1 *)(lVar12 + 0x5c) = 0;
LAB_1095077f4:
          func_0x000107c31940(&uStack_d0,&UNK_10f571a8c);
          pppppplVar13 = (long ******)apppppplStack_100;
          FUN_1093781f4(pppppplVar13,&uStack_d0);
          if ((long)pppppplStack_c0 < 0) {
            __ZdlPv(uStack_d0);
          }
          if ((int)pppppplVar13 != 0) {
            func_0x000107c31940(&uStack_d0,&UNK_10f571a8c);
            FUN_1094a68cc(&ppppppplStack_120,apppppplStack_100,&uStack_d0);
            if (*(char *)(param_1 + 0xa8) == '\x01') {
              FUN_1094a7878(param_1 + 0x98,&ppppppplStack_120);
            }
            else {
              *(long ********)(param_1 + 0xa0) = ppppppplStack_118;
              *(long ********)(param_1 + 0x98) = ppppppplStack_120;
              if (ppppppplStack_118 != (long *******)0x0) {
                ppppppplVar9 = ppppppplStack_118 + 1;
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar9,0x10);
                  if (bVar7) {
                    *ppppppplVar9 = (long ******)((long)*ppppppplVar9 + 1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              *(undefined1 *)(param_1 + 0xa8) = 1;
            }
            FUN_109380f8c(&ppppppplStack_120);
            if ((long)pppppplStack_c0 < 0) {
              __ZdlPv(uStack_d0);
            }
          }
          param_1 = 1;
          goto LAB_109507168;
        }
        if ((uVar22 & uVar28) == 0) {
          uVar17 = uVar17 & uVar28;
        }
        else if (uVar22 <= uVar17) {
          uVar8 = 0;
          if (uVar22 != 0) {
            uVar8 = uVar17 / uVar22;
          }
          uVar17 = uVar17 - uVar8 * uVar22;
        }
        if (uVar17 == uVar24) break;
      }
    }
LAB_10950710c:
    ppppppplStack_120 = ppppppplStack_f0;
    if (-1 < (long)uStack_e0) {
      ppppppplStack_120 = (long *******)&ppppppplStack_f0;
    }
    FUN_1093780e0(&uStack_d0,&UNK_10f571a36,&ppppppplStack_120);
    FUN_109388c6c(1,&UNK_10f5717f1,&DAT_10f37747d,0x6e,&uStack_d0);
LAB_109507154:
    if ((long)pppppplStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    param_1 = 0;
LAB_109507168:
    if ((long)uStack_e0 < 0) {
      __ZdlPv(ppppppplStack_f0);
    }
LAB_109507178:
    FUN_109380f8c(apppppplStack_100);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return param_1;
    }
    ___stack_chk_fail();
LAB_1095078b4:
    iVar11 = 0x13732f20;
    ___cxa_guard_acquire();
    if (iVar11 != 0) {
      uStack_a8 = 0;
      aplStack_b8[1] = (long *)0xa;
      uStack_98 = 0x11;
      puStack_a0 = &DAT_10f571aab;
      uStack_90 = 1;
      pppppplStack_c8 = (long ******)0x0;
      uStack_d0 = "";
      aplStack_b8[0] = (long *)&DAT_10f571aa0;
      pppppplStack_c0 = (long ******)0x0;
      FUN_109507da0(&uStack_d0,3);
      ___cxa_atexit(FUN_109507d9c,0x113732f28,0x100000000);
      ___cxa_guard_release(0x113732f20);
    }
  } while( true );
  plVar16 = (long *)*plVar16;
  if (plVar16 == (long *)0x0) goto LAB_10950710c;
  goto LAB_1095070ac;
}



/* Entry: 109507b44; end: 109507ba7;  */

undefined8 * FUN_109507b44(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109507ba8; end: 109507c8b;  */

long *** FUN_109507ba8(long ***param_1,ulong param_2)

{
  long ***ppplVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplStack_58;
  long *plStack_50;
  long *plStack_48;
  long **pplStack_40;
  long **pplStack_38;
  
  pplVar2 = *param_1;
  if ((ulong)(((long)param_1[2] - (long)pplVar2 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if (0x492492492492492 < param_2) {
      FUN_109508478();
      func_0x000109508568(&pplStack_58);
      __Unwind_Resume();
      *param_1 = (long **)&PTR_FUN_110af9c48;
      if (*(char *)(param_1 + 0x15) == '\x01') {
        FUN_109380f8c(param_1 + 0x13);
      }
      FUN_1095088c4(param_1 + 0x10);
      if (param_1[0xb] != (long **)0x0) {
        param_1[0xc] = param_1[0xb];
        __ZdlPv();
      }
      if (param_1[8] != (long **)0x0) {
        param_1[9] = param_1[8];
        __ZdlPv();
      }
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        __ZdlPv(param_1[4]);
      }
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        __ZdlPv(param_1[1]);
      }
      return param_1;
    }
    pplVar3 = param_1[1];
    ppplVar1 = param_1;
    pplStack_38 = (long **)param_1;
    FUN_10950848c();
    pplVar2 = (long **)((long)ppplVar1 + ((long)pplVar3 - (long)pplVar2));
    pplVar3 = (long **)((long)pplVar2 + ((long)*param_1 - (long)param_1[1]));
    pplStack_58 = (long **)ppplVar1;
    plStack_50 = (long *)pplVar2;
    plStack_48 = (long *)pplVar2;
    pplStack_40 = (long **)(ppplVar1 + param_2 * 7);
    func_0x0001095084d4(param_1,*param_1,param_1[1],pplVar3);
    pplStack_58 = *param_1;
    *param_1 = pplVar3;
    param_1[1] = pplVar2;
    pplStack_40 = param_1[2];
    param_1[2] = (long **)(ppplVar1 + param_2 * 7);
    param_1 = &pplStack_58;
    plStack_50 = (long *)pplStack_58;
    plStack_48 = (long *)pplStack_58;
    func_0x000109508568(param_1);
  }
  return param_1;
}



/* Entry: 109507c8c; end: 109507d9b;  */

undefined8 * FUN_109507c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9c48;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_109380f8c(param_1 + 0x13);
  }
  FUN_1095088c4(param_1 + 0x10);
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 109507d9c; end: 109507d9f;  */

long * FUN_109507d9c(long *param_1)

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



/* Entry: 109507da0; end: 109508207;  */

void FUN_109507da0(long *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x21;
  ulong uVar16;
  long lVar17;
  
  uRam0000000113732f30 = 0;
  lRam0000000113732f28 = 0;
  uRam0000000113732f40 = 0;
  plRam0000000113732f38 = (long *)0x0;
  fRam0000000113732f48 = 1.0;
  if (param_2 != 0) {
    plVar6 = param_1 + param_2 * 3;
    do {
      uVar12 = 0x113732f28;
      func_0x000107c2ac8c(0x113732f28,*param_1,param_1[1]);
      uVar9 = uRam0000000113732f30;
      if (uRam0000000113732f30 != 0) {
        uVar16 = uRam0000000113732f30 - 1;
        if ((uRam0000000113732f30 & uVar16) == 0) {
          unaff_x21 = uVar16 & uVar12;
        }
        else {
          unaff_x21 = uVar12;
          if (uRam0000000113732f30 <= uVar12) {
            uVar8 = 0;
            if (uRam0000000113732f30 != 0) {
              uVar8 = uVar12 / uRam0000000113732f30;
            }
            unaff_x21 = uVar12 - uVar8 * uRam0000000113732f30;
          }
        }
        plVar7 = *(long **)(lRam0000000113732f28 + unaff_x21 * 8);
        if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
          lVar5 = *param_1;
          lVar17 = param_1[1];
          do {
            uVar8 = plVar7[1];
            if (uVar8 == uVar12) {
              if (plVar7[3] == lVar17) {
                lVar4 = plVar7[2];
                _memcmp(lVar4,lVar5,lVar17);
                if ((int)lVar4 == 0) goto LAB_10950815c;
              }
            }
            else {
              if ((uVar9 & uVar16) == 0) {
                uVar8 = uVar8 & uVar16;
              }
              else if (uVar9 <= uVar8) {
                uVar10 = 0;
                if (uVar9 != 0) {
                  uVar10 = uVar8 / uVar9;
                }
                uVar8 = uVar8 - uVar10 * uVar9;
              }
              if (uVar8 != unaff_x21) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
      plVar7 = (long *)0x28;
      __Znwm();
      *plVar7 = 0;
      plVar7[1] = uVar12;
      lVar17 = param_1[1];
      lVar5 = *param_1;
      plVar7[4] = param_1[2];
      plVar7[3] = lVar17;
      plVar7[2] = lVar5;
      if ((uVar9 == 0) || (fRam0000000113732f48 * (float)uVar9 < (float)(uRam0000000113732f40 + 1)))
      {
        uVar16 = 1;
        if (2 < uVar9) {
          uVar16 = (ulong)((uVar9 & uVar9 - 1) != 0);
        }
        uVar16 = uVar16 | uVar9 << 1;
        uVar8 = (ulong)((float)(uRam0000000113732f40 + 1) / fRam0000000113732f48);
        if (uVar16 <= uVar8) {
          uVar16 = uVar8;
        }
        uVar8 = uVar9;
        if (uVar16 - 1 == 0) {
          uVar16 = 2;
        }
        else if ((uVar16 & uVar16 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar8 = uRam0000000113732f30;
        }
        if (uVar8 < uVar16) {
LAB_109507f58:
          if (uVar16 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1095081dc);
            (*pcVar3)();
          }
          lVar5 = uVar16 << 3;
          __Znwm();
          bVar1 = lRam0000000113732f28 != 0;
          lRam0000000113732f28 = lVar5;
          if (bVar1) {
            __ZdlPv();
          }
          uVar9 = 0;
          uRam0000000113732f30 = uVar16;
          do {
            *(undefined8 *)(lRam0000000113732f28 + uVar9 * 8) = 0;
            plVar11 = plRam0000000113732f38;
            uVar9 = uVar9 + 1;
          } while (uVar16 != uVar9);
          uVar9 = uVar16;
          if (plRam0000000113732f38 != (long *)0x0) {
            uVar8 = plRam0000000113732f38[1];
            uVar10 = uVar16 - 1;
            if ((uVar16 & uVar10) == 0) {
              uVar8 = uVar8 & uVar10;
            }
            else if (uVar16 <= uVar8) {
              uVar15 = 0;
              if (uVar16 != 0) {
                uVar15 = uVar8 / uVar16;
              }
              uVar8 = uVar8 - uVar15 * uVar16;
            }
            *(undefined8 *)(lRam0000000113732f28 + uVar8 * 8) = 0x113732f38;
            plVar13 = (long *)*plVar11;
            lVar5 = lRam0000000113732f28;
            while (lRam0000000113732f28 = lVar5, plVar13 != (long *)0x0) {
              uVar15 = plVar13[1];
              if ((uVar16 & uVar10) == 0) {
                uVar15 = uVar15 & uVar10;
              }
              else if (uVar16 <= uVar15) {
                uVar2 = 0;
                if (uVar16 != 0) {
                  uVar2 = uVar15 / uVar16;
                }
                uVar15 = uVar15 - uVar2 * uVar16;
              }
              plVar14 = plVar13;
              if (uVar15 != uVar8) {
                if (*(long *)(lVar5 + uVar15 * 8) == 0) {
                  *(long **)(lVar5 + uVar15 * 8) = plVar11;
                  uVar8 = uVar15;
                }
                else {
                  *plVar11 = *plVar13;
                  *plVar13 = **(long **)(lVar5 + uVar15 * 8);
                  **(undefined8 **)(lVar5 + uVar15 * 8) = plVar13;
                  plVar14 = plVar11;
                }
              }
              lVar5 = lRam0000000113732f28;
              plVar11 = plVar14;
              plVar13 = (long *)*plVar14;
            }
          }
        }
        else {
          uVar9 = uVar8;
          if (uVar16 < uVar8) {
            uVar9 = (ulong)((float)uRam0000000113732f40 / fRam0000000113732f48);
            if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar9) {
              uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
            }
            lVar5 = lRam0000000113732f28;
            if (uVar16 <= uVar9) {
              uVar16 = uVar9;
            }
            uVar9 = uRam0000000113732f30;
            if (uVar16 < uVar8) {
              if (uVar16 != 0) goto LAB_109507f58;
              lRam0000000113732f28 = 0;
              if (lVar5 != 0) {
                __ZdlPv();
              }
              uRam0000000113732f30 = 0;
              uVar9 = 0;
            }
          }
        }
        if ((uVar9 & uVar9 - 1) == 0) {
          unaff_x21 = uVar9 - 1 & uVar12;
        }
        else {
          unaff_x21 = uVar12;
          if (uVar9 <= uVar12) {
            uVar16 = 0;
            if (uVar9 != 0) {
              uVar16 = uVar12 / uVar9;
            }
            unaff_x21 = uVar12 - uVar16 * uVar9;
          }
        }
      }
      lVar5 = lRam0000000113732f28;
      plVar11 = *(long **)(lRam0000000113732f28 + unaff_x21 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar7 = (long)plRam0000000113732f38;
        plRam0000000113732f38 = plVar7;
        *(undefined8 *)(lVar5 + unaff_x21 * 8) = 0x113732f38;
        if (*plVar7 != 0) {
          uVar12 = *(ulong *)(*plVar7 + 8);
          if ((uVar9 & uVar9 - 1) == 0) {
            uVar12 = uVar12 & uVar9 - 1;
          }
          else if (uVar9 <= uVar12) {
            uVar16 = 0;
            if (uVar9 != 0) {
              uVar16 = uVar12 / uVar9;
            }
            uVar12 = uVar12 - uVar16 * uVar9;
          }
          plVar11 = (long *)(lRam0000000113732f28 + uVar12 * 8);
          goto LAB_109508148;
        }
      }
      else {
        *plVar7 = *plVar11;
LAB_109508148:
        *plVar11 = (long)plVar7;
      }
      uRam0000000113732f40 = uRam0000000113732f40 + 1;
LAB_10950815c:
      param_1 = param_1 + 3;
    } while (param_1 != plVar6);
  }
  return;
}



/* Entry: 109508208; end: 10950824f;  */

long * FUN_109508208(long *param_1)

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



/* Entry: 109508250; end: 1095083eb;  */

/* WARNING: Removing unreachable block (ram,0x0001095083ac) */

void FUN_109508250(long *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x23;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *param_1;
  plVar1 = param_1;
  if ((ulong)((param_1[2] - lVar4 >> 3) * -0x5555555555555555) < param_4) {
    uVar3 = param_2;
    func_0x000107c3193c(param_1);
    if (0xaaaaaaaaaaaaaaa < param_4) {
      func_0x000104c60770();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0xaaaaaaaaaaaaaaa;
      __Unwind_Resume();
      puVar2 = &DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (uVar3 >> 0x3c == 0) {
        __Znwm(uVar3 << 4);
        return;
      }
      func_0x000104c4f740();
      if (*(long *)(puVar2 + 0x20) != 0) {
        *(long *)(puVar2 + 0x28) = *(long *)(puVar2 + 0x20);
        __ZdlPv();
      }
      if (*(long *)(puVar2 + 8) == 0) {
        return;
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar3 = lVar4 * 0x5555555555555556;
    if (uVar3 < param_4 || uVar3 - param_4 == 0) {
      uVar3 = param_4;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    func_0x000104c60728(param_1,uVar3);
    FUN_1094c836c(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar5 = param_1[1];
    lVar7 = lVar5 - lVar4;
    if (param_4 <= (ulong)((lVar7 >> 3) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar4,param_2);
          param_2 = param_2 + 0x18;
          lVar4 = lVar4 + 0x18;
        } while (param_2 != param_3);
        lVar5 = param_1[1];
      }
      for (; lVar5 != lVar4; lVar5 = lVar5 + -0x18) {
      }
      param_1[1] = lVar4;
      return;
    }
    uVar3 = param_2;
    lVar6 = lVar7;
    if (lVar5 != lVar4) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar4,uVar3);
        lVar4 = lVar4 + 0x18;
        lVar6 = lVar6 + -0x18;
        uVar3 = uVar3 + 0x18;
      } while (lVar6 != 0);
      lVar5 = param_1[1];
    }
    FUN_1094c836c(param_1,param_2 + lVar7,param_3,lVar5);
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1095083ec; end: 1095083ff;  */

void FUN_1095083ec(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)(puVar1 + 0x20) != 0) {
    *(long *)(puVar1 + 0x28) = *(long *)(puVar1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 8) != 0) {
    *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109508400; end: 109508477;  */

void FUN_109508400(long param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109508478; end: 10950848b;  */

void FUN_109508478(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = *puVar1;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        uVar2 = puVar1[1];
        param_4[2] = puVar1[2];
        param_4[1] = uVar2;
        param_4[3] = puVar1[3];
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        param_4[4] = 0;
        param_4[5] = 0;
        param_4[6] = 0;
        uVar2 = puVar1[4];
        param_4[5] = puVar1[5];
        param_4[4] = uVar2;
        param_4[6] = puVar1[6];
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1 = puVar1 + 7;
        param_4 = param_4 + 7;
      } while (puVar1 != param_3);
      do {
        func_0x000109508434(param_2);
        param_2 = param_2 + 7;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 10950848c; end: 1095085b3;  */

void FUN_10950848c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = *puVar1;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        uVar2 = puVar1[1];
        param_4[2] = puVar1[2];
        param_4[1] = uVar2;
        param_4[3] = puVar1[3];
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        param_4[4] = 0;
        param_4[5] = 0;
        param_4[6] = 0;
        uVar2 = puVar1[4];
        param_4[5] = puVar1[5];
        param_4[4] = uVar2;
        param_4[6] = puVar1[6];
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1 = puVar1 + 7;
        param_4 = param_4 + 7;
      } while (puVar1 != param_3);
      do {
        func_0x000109508434(param_2);
        param_2 = param_2 + 7;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 1095085b4; end: 1095085fb;  */

void FUN_1095085b4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1095085fc(param_2,param_1);
  return;
}



/* Entry: 1095085fc; end: 1095086f7;  */

void FUN_1095085fc(byte *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte **ppbVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  byte *pbStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  if (*param_1 != 2) {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_1);
    func_0x000107c31940(&pbStack_60,param_1);
    FUN_10928a5e0(&uStack_48,&UNK_10f56748c,&pbStack_60);
    FUN_10937bbbc(uVar3,0x12e,&uStack_48);
    ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1095086a0);
    (*pcVar2)();
  }
  lStack_40 = 0;
  lStack_38 = 0;
  bVar1 = *param_1;
  uVar6 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar6 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar6 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar6 = 1;
    }
  }
  func_0x0001056c5718(&lStack_40,uVar6);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  bVar1 = *param_1;
  lVar7 = lStack_38;
  pbStack_80 = param_1;
  pbStack_60 = param_1;
  if (bVar1 == 0) {
    uStack_48 = 1;
  }
  else {
    if (bVar1 == 2) {
      uStack_50 = **(undefined8 **)(param_1 + 8);
      puStack_78 = (undefined8 *)0x0;
      uStack_68 = 0x8000000000000000;
      uStack_70 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_1095087e4;
    }
    if (bVar1 == 1) {
      puStack_78 = *(undefined8 **)(param_1 + 8) + 1;
      uStack_58 = **(undefined8 **)(param_1 + 8);
      uStack_68 = 0x8000000000000000;
      uStack_70 = 0;
      goto LAB_1095087e4;
    }
    uStack_48 = 0;
  }
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 1;
LAB_1095087e4:
  while( true ) {
    ppbVar4 = &pbStack_60;
    FUN_10937c708(ppbVar4,&pbStack_80);
    if (((ulong)ppbVar4 & 1) != 0) break;
    FUN_10937c560(&pbStack_60);
    FUN_109407a04();
    plVar5 = &lStack_40;
    func_0x000107c2aca4(plVar5,lVar7,&stack0xffffffffffffffdc);
    FUN_10937c698(&pbStack_60);
    lVar7 = (long)plVar5 + 4;
  }
  if (*param_2 != 0) {
    param_2[1] = *param_2;
    __ZdlPv();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = lStack_38;
  *param_2 = lStack_40;
  param_2[2] = 0;
  return;
}



/* Entry: 1095086f8; end: 109508883;  */

void FUN_1095086f8(byte *param_1,long *param_2)

{
  byte bVar1;
  byte **ppbVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  byte *pbStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 auStack_24 [4];
  
  lStack_40 = 0;
  lStack_38 = 0;
  lStack_30 = 0;
  bVar1 = *param_1;
  uVar4 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar4 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar4 = 1;
    }
  }
  func_0x0001056c5718(&lStack_40,uVar4);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  bVar1 = *param_1;
  lVar5 = lStack_38;
  pbStack_80 = param_1;
  pbStack_60 = param_1;
  if (bVar1 == 0) {
    uStack_48 = 1;
  }
  else {
    if (bVar1 == 2) {
      uStack_50 = **(undefined8 **)(param_1 + 8);
      puStack_78 = (undefined8 *)0x0;
      uStack_68 = 0x8000000000000000;
      uStack_70 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_1095087e4;
    }
    if (bVar1 == 1) {
      puStack_78 = *(undefined8 **)(param_1 + 8) + 1;
      uStack_58 = **(undefined8 **)(param_1 + 8);
      uStack_68 = 0x8000000000000000;
      uStack_70 = 0;
      goto LAB_1095087e4;
    }
    uStack_48 = 0;
  }
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 1;
LAB_1095087e4:
  while( true ) {
    ppbVar2 = &pbStack_60;
    FUN_10937c708(ppbVar2,&pbStack_80);
    if (((ulong)ppbVar2 & 1) != 0) break;
    FUN_10937c560(&pbStack_60);
    FUN_109407a04();
    plVar3 = &lStack_40;
    func_0x000107c2aca4(plVar3,lVar5,auStack_24);
    FUN_10937c698(&pbStack_60);
    lVar5 = (long)plVar3 + 4;
  }
  if (*param_2 != 0) {
    param_2[1] = *param_2;
    __ZdlPv();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = lStack_38;
  *param_2 = lStack_40;
  param_2[2] = lStack_30;
  return;
}



/* Entry: 109508884; end: 109508893;  */

void FUN_109508884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9cd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109508894; end: 1095088b3;  */

void FUN_109508894(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9cd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095088b4; end: 1095088c3;  */

void FUN_1095088b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001095088bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1095088c4; end: 10950891b;  */

long FUN_1095088c4(long param_1)

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



/* Entry: 10950891c; end: 109508cbb;  */

void FUN_10950891c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char ****ppppcVar4;
  char ****ppppcVar5;
  code *pcVar6;
  char *****pppppcVar7;
  char ******ppppppcVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  char ****ppppcVar13;
  ulong uVar14;
  long lVar15;
  char ****ppppcVar16;
  long lVar17;
  char *****pppppcStack_d8;
  char ****ppppcStack_d0;
  char ***pppcStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  char ***pppcStack_b0;
  char ***pppcStack_a8;
  char *****pppppcStack_98;
  char ****ppppcStack_90;
  char ****ppppcStack_88;
  undefined8 uStack_80;
  char *****pppppcStack_78;
  char ****ppppcStack_70;
  char ****ppppcStack_68;
  long lStack_60;
  long *plStack_58;
  
  lStack_c0 = 0;
  uStack_b8 = 0;
  pppcStack_c8 = (char ***)0x0;
  pppppcStack_98 = (char *****)*param_2;
  ppppcStack_70 = (char ****)0x0;
  ppppcStack_68 = (char ****)0x0;
  lStack_60 = -0x8000000000000000;
  cVar2 = *(char *)pppppcStack_98;
  pppppcStack_78 = pppppcStack_98;
  if (cVar2 == '\x01') {
    pppppcVar7 = (char *****)pppppcStack_98[1];
    FUN_1093793a4(pppppcVar7,param_1);
    pppppcStack_98 = (char *****)*param_2;
    cVar2 = *(char *)pppppcStack_98;
    ppppcStack_70 = (char ****)pppppcVar7;
LAB_1095089b4:
    ppppcStack_90 = (char ****)0x0;
    ppppcStack_88 = (char ****)0x0;
    uStack_80 = 0x8000000000000000;
    if (cVar2 == '\x01') {
      ppppcStack_90 = pppppcStack_98[1] + 1;
      goto LAB_1095089f8;
    }
    if (cVar2 != '\x02') {
      uStack_80 = 1;
      goto LAB_1095089f8;
    }
    ppppcStack_88 = (char ****)pppppcStack_98[1][1];
  }
  else {
    if (cVar2 != '\x02') {
      lStack_60 = 1;
      goto LAB_1095089b4;
    }
    ppppcStack_88 = (char ****)pppppcStack_98[1][1];
    ppppcStack_68 = ppppcStack_88;
  }
  uStack_80 = 0x8000000000000000;
  ppppcStack_90 = (char ****)0x0;
LAB_1095089f8:
  ppppppcVar8 = &pppppcStack_78;
  FUN_109379420(ppppppcVar8,&pppppcStack_98);
  if ((int)ppppppcVar8 == 0) {
    FUN_10937b950(&pppppcStack_78);
    FUN_1094ce958(&pppcStack_b0);
  }
  else {
    pppppcStack_98 = (char *****)0x0;
    ppppcStack_90 = (char ****)0x0;
    ppppcStack_88 = (char ****)0x0;
    FUN_109382158(&pppppcStack_98,pppcStack_c8,lStack_c0,lStack_c0 - (long)pppcStack_c8 >> 4);
    FUN_1094ce6d4(&pppcStack_b0,param_3,param_1,&pppppcStack_98);
    pppppcStack_d8 = (char *****)&pppppcStack_98;
    FUN_109381838(&pppppcStack_d8);
  }
  pppppcStack_78 = (char *****)&pppcStack_c8;
  FUN_109381838(&pppppcStack_78);
  lVar17 = *param_4;
  lVar15 = param_4[1];
  if (lVar15 != lVar17) {
    do {
      lVar15 = lVar15 + -0x10;
      func_0x0001094d0850(lVar15);
    } while (lVar15 != lVar17);
    lVar15 = *param_4;
  }
  param_4[1] = lVar17;
  ppppcVar4 = (char ****)pppcStack_b0;
  ppppcVar16 = (char ****)pppcStack_a8;
  if ((ulong)(param_4[2] - lVar15) < (ulong)((long)pppcStack_a8 - (long)pppcStack_b0)) {
    uVar11 = (long)pppcStack_a8 - (long)pppcStack_b0 >> 4;
    if (uVar11 >> 0x3c != 0) {
      func_0x00010950a310();
LAB_109508c54:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109508c58);
      (*pcVar6)();
    }
    plVar9 = param_4;
    plStack_58 = param_4;
    FUN_10950a324();
    lVar17 = (long)plVar9 + (lVar17 - lVar15);
    lVar15 = lVar17 - (param_4[1] - *param_4);
    _memcpy(lVar15);
    pppppcStack_78 = (char *****)*param_4;
    *param_4 = lVar15;
    param_4[1] = lVar17;
    lStack_60 = param_4[2];
    param_4[2] = (long)(plVar9 + uVar11 * 2);
    ppppcStack_70 = (char ****)pppppcStack_78;
    ppppcStack_68 = (char ****)pppppcStack_78;
    func_0x00010950a358(&pppppcStack_78);
    ppppcVar4 = (char ****)pppcStack_b0;
    ppppcVar16 = (char ****)pppcStack_a8;
  }
  do {
    if (ppppcVar4 == ppppcVar16) {
      pppppcStack_78 = (char *****)&pppcStack_b0;
      FUN_109381838(&pppppcStack_78);
      return;
    }
    FUN_1094e8d08(&pppppcStack_d8,&pppppcStack_78,ppppcVar4);
    ppppcVar5 = ppppcStack_d0;
    pppppcVar7 = pppppcStack_d8;
    pppppcStack_98 = pppppcStack_d8;
    ppppcStack_90 = ppppcStack_d0;
    pppppcStack_d8 = (char *****)0x0;
    ppppcStack_d0 = (char ****)0x0;
    plVar9 = (long *)param_4[1];
    if (plVar9 < (long *)param_4[2]) {
      *plVar9 = (long)pppppcVar7;
      plVar9[1] = (long)ppppcVar5;
      plVar9 = plVar9 + 2;
      pppppcStack_98 = (char *****)0x0;
      ppppcStack_90 = (char ****)0x0;
    }
    else {
      lVar17 = (long)plVar9 - *param_4;
      uVar11 = (lVar17 >> 4) + 1;
      if (uVar11 >> 0x3c != 0) {
        func_0x00010950a310();
        goto LAB_109508c54;
      }
      uVar12 = param_4[2] - *param_4;
      uVar14 = (long)uVar12 >> 3;
      if (uVar14 <= uVar11) {
        uVar14 = uVar11;
      }
      if (0x7fffffffffffffef < uVar12) {
        uVar14 = 0xfffffffffffffff;
      }
      plVar10 = param_4;
      plStack_58 = param_4;
      FUN_10950a324();
      plVar1 = (long *)((long)plVar10 + lVar17);
      *plVar1 = (long)pppppcVar7;
      plVar1[1] = (long)ppppcVar5;
      pppppcStack_98 = (char *****)0x0;
      ppppcStack_90 = (char ****)0x0;
      plVar9 = plVar1 + 2;
      lVar17 = (long)plVar1 - (param_4[1] - *param_4);
      _memcpy(lVar17);
      pppppcStack_78 = (char *****)*param_4;
      *param_4 = lVar17;
      param_4[1] = (long)plVar9;
      lStack_60 = param_4[2];
      param_4[2] = (long)(plVar10 + uVar14 * 2);
      ppppcStack_70 = (char ****)pppppcStack_78;
      ppppcStack_68 = (char ****)pppppcStack_78;
      func_0x00010950a358(&pppppcStack_78);
    }
    ppppcVar5 = ppppcStack_d0;
    param_4[1] = (long)plVar9;
    if ((char *****)ppppcStack_d0 != (char *****)0x0) {
      pppppcVar7 = (char *****)(ppppcStack_d0 + 1);
      do {
        ppppcVar13 = *pppppcVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppcVar7,0x10);
        if (bVar3) {
          *pppppcVar7 = (char ****)((long)ppppcVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppcVar13 == (char ****)0x0) {
        (*(code *)(*ppppcStack_d0)[2])(ppppcStack_d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar5);
      }
    }
    ppppcVar4 = ppppcVar4 + 2;
  } while( true );
}



/* Entry: 109508cbc; end: 10950a293;  */

/* WARNING: Removing unreachable block (ram,0x000109509850) */
/* WARNING: Removing unreachable block (ram,0x000109509c10) */

undefined8 FUN_109508cbc(long param_1,undefined8 *param_2,uint param_3)

{
  float *pfVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  float **ppfVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  float *pfVar14;
  long lVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  double dVar19;
  double dVar20;
  double dStack_220;
  double dStack_218;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined7 uStack_1c8;
  char cStack_1c1;
  float **ppfStack_1c0;
  undefined8 uStack_1b8;
  undefined7 uStack_1a8;
  undefined4 uStack_1a1;
  undefined1 uStack_19d;
  undefined4 uStack_19c;
  long lStack_198;
  float *pfStack_190;
  long lStack_188;
  float *pfStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char cStack_168;
  undefined2 uStack_167;
  undefined5 uStack_165;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  float **ppfStack_68;
  float *pfStack_60;
  float *pfStack_58;
  code *pcStack_50;
  code *pcStack_48;
  
  FUN_1094f7728(param_1 + 0x150);
  uStack_19d = 0;
  uStack_19c = 0;
  if (param_3 < 2) {
    puVar11 = (undefined8 *)&UNK_10f5676e2;
LAB_109508d24:
    lStack_198 = 0xb;
    uStack_1a8 = (undefined7)*puVar11;
    uStack_1a1 = *(undefined4 *)((long)puVar11 + 7);
  }
  else {
    if (param_3 == 2) {
      puVar11 = (undefined8 *)&UNK_10f5676ee;
      goto LAB_109508d24;
    }
    lStack_198 = 0xc;
    uStack_1a8 = 0x6769685f736f69;
    uStack_1a1 = 0x6e655f68;
    uStack_19d = 100;
  }
  lStack_198 = lStack_198 << 0x38;
  FUN_1094a68cc(&uStack_170,*param_2,&uStack_1a8);
  FUN_1094a7878(param_1 + 0x1b8,&uStack_170);
  FUN_109380f8c(&uStack_170);
  param_2 = (undefined8 *)*param_2;
  uStack_1b8 = param_2[1];
  ppfStack_1c0 = (float **)*param_2;
  if (param_2[1] != 0) {
    plVar12 = (long *)(param_2[1] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571abd);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0xc);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571ad0);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x10);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571ae4);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x14);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571b0a);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x18);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571b34);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x1c);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571b51);
  FUN_1094d2114(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x30);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571b72);
  FUN_1094d2114(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x31);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571b99);
  pfVar1 = (float *)(param_1 + 0x34);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,pfVar1);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571bc1);
  FUN_1094a775c(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x2c);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571bc9);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x20);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571bf4);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x24);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571c16);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x50);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571c3a);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x54);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571c54);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x58);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571c6a);
  FUN_1094d1e80(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x5c);
  if ((char)uStack_160._7_1_ < '\0') {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_1d8,&UNK_10f571c92);
  pfVar14 = *(float **)(param_1 + 0x1b8);
  lStack_188 = 0;
  pfStack_180 = (float *)0x0;
  uStack_178 = 0x8000000000000000;
  cVar5 = *(char *)pfVar14;
  pfStack_190 = pfVar14;
  if (cVar5 == '\x01') {
    lVar15 = *(long *)(pfVar14 + 2);
    FUN_1093793a4(lVar15,&uStack_1d8);
    pfVar14 = *(float **)(param_1 + 0x1b8);
    cVar5 = *(char *)pfVar14;
    lStack_188 = lVar15;
LAB_109509128:
    uStack_170._0_4_ = (int)pfVar14;
    uStack_170._4_2_ = (short)((ulong)pfVar14 >> 0x20);
    uStack_170._6_1_ = (undefined1)((ulong)pfVar14 >> 0x30);
    uStack_170._7_1_ = (undefined1)((ulong)pfVar14 >> 0x38);
    cStack_168 = '\0';
    uStack_167 = 0;
    uStack_165 = 0;
    uStack_160 = (float *)0x0;
    uStack_158 = 0x8000000000000000;
    if (cVar5 == '\x01') {
      lVar15 = *(long *)(pfVar14 + 2) + 8;
      cStack_168 = (char)lVar15;
      uStack_167 = (undefined2)((ulong)lVar15 >> 8);
      uStack_165 = (undefined5)((ulong)lVar15 >> 0x18);
    }
    else {
      if (cVar5 == '\x02') {
        uStack_160 = *(float **)(*(long *)(pfVar14 + 2) + 8);
        goto LAB_10950914c;
      }
      uStack_158 = 1;
    }
  }
  else {
    if (cVar5 != '\x02') {
      uStack_178 = 1;
      goto LAB_109509128;
    }
    uStack_160 = *(float **)(*(long *)(pfVar14 + 2) + 8);
    uStack_170._0_4_ = (int)pfVar14;
    uStack_170._4_2_ = (short)((ulong)pfVar14 >> 0x20);
    uStack_170._6_1_ = (undefined1)((ulong)pfVar14 >> 0x30);
    uStack_170._7_1_ = (undefined1)((ulong)pfVar14 >> 0x38);
    pfStack_180 = uStack_160;
LAB_10950914c:
    uStack_158 = 0x8000000000000000;
    uStack_165 = 0;
    uStack_167 = 0;
    cStack_168 = '\0';
  }
  ppfVar10 = &pfStack_190;
  FUN_109379420(ppfVar10,&uStack_170);
  if (((ulong)ppfVar10 & 1) == 0) {
    FUN_10937b950(&pfStack_190);
    FUN_10949aadc();
    ppfVar10 = (float **)
               CONCAT17(uStack_170._7_1_,
                        CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170)));
LAB_109509260:
    *(float ***)(param_1 + 0x88) = ppfVar10;
  }
  else {
    uStack_170._0_4_ = (int)ppfStack_1c0;
    uStack_170._4_2_ = (short)((ulong)ppfStack_1c0 >> 0x20);
    uStack_170._6_1_ = (undefined1)((ulong)ppfStack_1c0 >> 0x30);
    uStack_170._7_1_ = (undefined1)((ulong)ppfStack_1c0 >> 0x38);
    cStack_168 = '\0';
    uStack_167 = 0;
    uStack_165 = 0;
    uStack_160 = (float *)0x0;
    uStack_158 = 0x8000000000000000;
    cVar5 = *(char *)ppfStack_1c0;
    if (cVar5 == '\x01') {
      pfVar14 = ppfStack_1c0[1];
      FUN_1093793a4(pfVar14,&uStack_1d8);
      cStack_168 = (char)pfVar14;
      uStack_167 = (undefined2)((ulong)pfVar14 >> 8);
      uStack_165 = (undefined5)((ulong)pfVar14 >> 0x18);
      cVar5 = *(char *)ppfStack_1c0;
LAB_1095091f8:
      ppfStack_68 = ppfStack_1c0;
      pfStack_60 = (float *)0x0;
      pfStack_58 = (float *)0x0;
      pcStack_50 = (code *)0x8000000000000000;
      if (cVar5 == '\x01') {
        pfStack_60 = ppfStack_1c0[1] + 2;
      }
      else {
        if (cVar5 == '\x02') {
          pfStack_58 = *(float **)(ppfStack_1c0[1] + 2);
          goto LAB_10950921c;
        }
        pcStack_50 = (code *)0x1;
      }
    }
    else {
      if (cVar5 != '\x02') {
        uStack_158 = 1;
        goto LAB_1095091f8;
      }
      pfStack_58 = *(float **)(ppfStack_1c0[1] + 2);
      uStack_160 = pfStack_58;
LAB_10950921c:
      pcStack_50 = (code *)0x8000000000000000;
      pfStack_60 = (float *)0x0;
      ppfStack_68 = ppfStack_1c0;
    }
    puVar11 = &uStack_170;
    ppfStack_1c0 = ppfStack_68;
    FUN_109379420(puVar11,&ppfStack_68);
    if (((ulong)puVar11 & 1) == 0) {
      FUN_10937b950(&uStack_170);
      FUN_10949aadc();
      ppfVar10 = ppfStack_68;
      goto LAB_109509260;
    }
  }
  if (cStack_1c1 < '\0') {
    __ZdlPv(uStack_1d8);
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571cb0);
  FUN_1094a775c(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x80);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571cd6);
  FUN_1094d04c4(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x38);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571cf8);
  FUN_1094d2114(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 100);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571d1c);
  FUN_1094d2114(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x65);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571d34);
  FUN_1094a69fc(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x68);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571d4e);
  FUN_10950891c(&uStack_170,param_1 + 0x1b8,&ppfStack_1c0,param_1 + 0x180);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571d58);
  FUN_10950891c(&uStack_170,param_1 + 0x1b8,&ppfStack_1c0,param_1 + 0x198);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571d6d);
  FUN_1094d2114(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0xc0);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571d8f);
  FUN_1094a70a8(&pfStack_190,param_1 + 0x1b8,&uStack_170,&ppfStack_1c0);
  plVar12 = (long *)0x28;
  __Znwm();
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_FUN_110af82b8;
  ppfStack_68 = (float **)(plVar12 + 3);
  plVar12[4] = lStack_188;
  *ppfStack_68 = pfStack_190;
  if (lStack_188 != 0) {
    plVar2 = (long *)(lStack_188 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  pfStack_60 = (float *)plVar12;
  FUN_10950a294(param_1 + 200,&ppfStack_68);
  pfVar14 = pfStack_60;
  if (pfStack_60 != (float *)0x0) {
    plVar12 = (long *)((long)pfStack_60 + 8);
    do {
      lVar15 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*(long *)pfStack_60 + 0x10))(pfStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pfVar14);
    }
  }
  FUN_109380f8c(&pfStack_190);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571d99);
  FUN_1094a69fc(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0xd8);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571dae);
  FUN_1094a70a8(&pfStack_190,param_1 + 0x1b8,&uStack_170,&ppfStack_1c0);
  plVar12 = (long *)0x28;
  __Znwm();
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_FUN_110af82b8;
  ppfStack_68 = (float **)(plVar12 + 3);
  plVar12[4] = lStack_188;
  *ppfStack_68 = pfStack_190;
  if (lStack_188 != 0) {
    plVar2 = (long *)(lStack_188 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  pfStack_60 = (float *)plVar12;
  FUN_10950a294(param_1 + 0xf0,&ppfStack_68);
  pfVar14 = pfStack_60;
  if (pfStack_60 != (float *)0x0) {
    plVar12 = (long *)((long)pfStack_60 + 8);
    do {
      lVar15 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*(long *)pfStack_60 + 0x10))(pfStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pfVar14);
    }
  }
  FUN_109380f8c(&pfStack_190);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571dc5);
  FUN_1094a69fc(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x128);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571dd1);
  FUN_1094a70a8(&pfStack_190,param_1 + 0x1b8,&uStack_170,&ppfStack_1c0);
  plVar12 = (long *)0x28;
  __Znwm();
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_FUN_110af82b8;
  ppfStack_68 = (float **)(plVar12 + 3);
  plVar12[4] = lStack_188;
  *ppfStack_68 = pfStack_190;
  if (lStack_188 != 0) {
    plVar2 = (long *)(lStack_188 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  pfStack_60 = (float *)plVar12;
  FUN_10950a294(param_1 + 0x140,&ppfStack_68);
  pfVar14 = pfStack_60;
  if (pfStack_60 != (float *)0x0) {
    plVar12 = (long *)((long)pfStack_60 + 8);
    do {
      lVar15 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*(long *)pfStack_60 + 0x10))(pfStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pfVar14);
    }
  }
  FUN_109380f8c(&pfStack_190);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&pfStack_190,"default");
  func_0x000107c31940(&uStack_170,&UNK_10f571dd8);
  FUN_1094a69fc(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,&pfStack_190);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  if ((long)pfStack_180 < 0) {
    func_0x000107c3192c(&uStack_170,pfStack_190,lStack_188);
  }
  else {
    cStack_168 = (char)lStack_188;
    uStack_167 = (undefined2)((ulong)lStack_188 >> 8);
    uStack_165 = (undefined5)((ulong)lStack_188 >> 0x18);
    uStack_170._0_4_ = (int)pfStack_190;
    uStack_170._4_2_ = (short)((ulong)pfStack_190 >> 0x20);
    uStack_170._6_1_ = (undefined1)((ulong)pfStack_190 >> 0x30);
    uStack_170._7_1_ = (undefined1)((ulong)pfStack_190 >> 0x38);
    uStack_160 = pfStack_180;
  }
  uVar13 = (uint)(char)uStack_160._7_1_;
  puVar11 = (undefined8 *)
            CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170)));
  puVar7 = (undefined8 *)((long)puVar11 + CONCAT53(uStack_165,CONCAT21(uStack_167,cStack_168)));
  if (-1 < (int)uVar13) {
    puVar11 = &uStack_170;
    puVar7 = (undefined8 *)((long)&uStack_170 + (ulong)uStack_160._7_1_);
  }
  if (puVar11 != puVar7) {
    do {
      uVar9 = *(undefined1 *)puVar11;
      ___tolower();
      puVar18 = (undefined8 *)((long)puVar11 + 1);
      *(undefined1 *)puVar11 = uVar9;
      puVar11 = puVar18;
    } while (puVar18 != puVar7);
    uVar13 = (uint)uStack_160._7_1_;
  }
  if ((uVar13 >> 7 & 1) == 0) {
    if ((uVar13 & 0xff) == 6) {
      if ((int)uStack_170 != 0x746e6563 || uStack_170._4_2_ != 0x7265) goto LAB_109509818;
      uVar17 = 0;
    }
    else {
      if ((uVar13 & 0xff) != 7) goto LAB_109509818;
      piVar16 = (int *)&uStack_170;
LAB_1095097a4:
      if (*piVar16 != 0x61666564 || *(int *)((long)piVar16 + 3) != 0x746c7561) goto LAB_109509818;
LAB_10950985c:
      uVar17 = 1;
      uVar8 = 1;
      if ((uVar13 >> 7 & 1) != 0) goto LAB_109509864;
    }
  }
  else {
    lVar15 = CONCAT53(uStack_165,CONCAT21(uStack_167,cStack_168));
    if (lVar15 != 6) {
      if (lVar15 == 7) {
        piVar16 = (int *)CONCAT17(uStack_170._7_1_,
                                  CONCAT16(uStack_170._6_1_,
                                           CONCAT24(uStack_170._4_2_,(int)uStack_170)));
        goto LAB_1095097a4;
      }
LAB_109509818:
      FUN_10937e740(&ppfStack_68,&UNK_10f571f99);
      FUN_109388c6c(1,&UNK_10f571e93,&UNK_10f571f8c,0x5d,&ppfStack_68);
      uVar13 = (uint)uStack_160._7_1_;
      goto LAB_10950985c;
    }
    piVar16 = (int *)CONCAT17(uStack_170._7_1_,
                              CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170)))
    ;
    if (*piVar16 != 0x746e6563 || (short)piVar16[1] != 0x7265) goto LAB_109509818;
    uVar8 = 0;
LAB_109509864:
    uVar17 = uVar8;
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  *(undefined4 *)(param_1 + 0x100) = uVar17;
  func_0x000107c31940(&uStack_1d8,&UNK_10f4917f3);
  func_0x000107c31940(&uStack_170,&UNK_10f571de1);
  FUN_1094a69fc(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,&uStack_1d8);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  if (cStack_1c1 < '\0') {
    func_0x000107c3192c(&uStack_170,uStack_1d8,uStack_1d0);
  }
  else {
    cStack_168 = (char)uStack_1d0;
    uStack_167 = (undefined2)((ulong)uStack_1d0 >> 8);
    uStack_165 = (undefined5)((ulong)uStack_1d0 >> 0x18);
    uStack_170._0_4_ = (int)uStack_1d8;
    uStack_170._4_2_ = (short)((ulong)uStack_1d8 >> 0x20);
    uStack_170._6_1_ = (undefined1)((ulong)uStack_1d8 >> 0x30);
    uStack_170._7_1_ = (undefined1)((ulong)uStack_1d8 >> 0x38);
    uStack_160 = (float *)CONCAT17(cStack_1c1,uStack_1c8);
  }
  uVar13 = (uint)(char)uStack_160._7_1_;
  puVar11 = (undefined8 *)
            CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170)));
  puVar7 = (undefined8 *)((long)puVar11 + CONCAT53(uStack_165,CONCAT21(uStack_167,cStack_168)));
  if (-1 < (int)uVar13) {
    puVar11 = &uStack_170;
    puVar7 = (undefined8 *)((long)&uStack_170 + (ulong)uStack_160._7_1_);
  }
  if (puVar11 != puVar7) {
    do {
      uVar9 = *(undefined1 *)puVar11;
      ___tolower();
      puVar18 = (undefined8 *)((long)puVar11 + 1);
      *(undefined1 *)puVar11 = uVar9;
      puVar11 = puVar18;
    } while (puVar18 != puVar7);
    uVar13 = (uint)uStack_160._7_1_;
  }
  if ((uVar13 >> 7 & 1) == 0) {
    uVar4 = uVar13 & 0xff;
    if (uVar4 < 8) {
      if (uVar4 == 4) {
        if ((int)uStack_170 == 0x70617277) {
          uVar17 = 3;
          goto LAB_109509c2c;
        }
      }
      else if ((uVar4 == 7) &&
              ((int)uStack_170 == 0x6c666572 &&
               CONCAT13(uStack_170._6_1_,CONCAT21(uStack_170._4_2_,uStack_170._3_1_)) == 0x7463656c)
              ) {
        uVar17 = 2;
        goto LAB_109509c2c;
      }
    }
    else if (uVar4 == 8) {
      if (CONCAT17(uStack_170._7_1_,
                   CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))) ==
          0x746e6174736e6f63) {
        uVar17 = 0;
        goto LAB_109509c2c;
      }
      plVar12 = &uStack_170;
LAB_109509bbc:
      if (*plVar12 == 0x646574616c6f7369) {
        uVar17 = 0x10;
        uVar8 = 0x10;
        if ((uVar13 >> 7 & 1) == 0) goto LAB_109509c2c;
        goto LAB_109509c24;
      }
    }
    else if (uVar4 == 9) {
      if (CONCAT17(uStack_170._7_1_,
                   CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))) ==
          0x746163696c706572 && cStack_168 == 'e') {
        uVar17 = 1;
        goto LAB_109509c2c;
      }
    }
    else if (uVar4 == 0xb) {
      if (CONCAT17(uStack_170._7_1_,
                   CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))) ==
          0x5f7463656c666572 &&
          CONCAT26(uStack_167,
                   CONCAT15(cStack_168,
                            CONCAT14(uStack_170._7_1_,
                                     CONCAT13(uStack_170._6_1_,
                                              CONCAT21(uStack_170._4_2_,uStack_170._3_1_))))) ==
          0x3130315f7463656c) {
        uVar17 = 4;
        goto LAB_109509c2c;
      }
      if (CONCAT17(uStack_170._7_1_,
                   CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))) ==
          0x726170736e617274 &&
          CONCAT26(uStack_167,
                   CONCAT15(cStack_168,
                            CONCAT14(uStack_170._7_1_,
                                     CONCAT13(uStack_170._6_1_,
                                              CONCAT21(uStack_170._4_2_,uStack_170._3_1_))))) ==
          0x746e65726170736e) {
        uVar17 = 5;
        goto LAB_109509c2c;
      }
    }
    goto LAB_109509bd8;
  }
  lVar15 = CONCAT53(uStack_165,CONCAT21(uStack_167,cStack_168));
  if (lVar15 < 8) {
    if (lVar15 == 4) {
      if (*(int *)CONCAT17(uStack_170._7_1_,
                           CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))) !=
          0x70617277) goto LAB_109509bd8;
      uVar8 = 3;
    }
    else if ((lVar15 == 7) &&
            (piVar16 = (int *)CONCAT17(uStack_170._7_1_,
                                       CONCAT16(uStack_170._6_1_,
                                                CONCAT24(uStack_170._4_2_,(int)uStack_170))),
            *piVar16 == 0x6c666572 && *(int *)((long)piVar16 + 3) == 0x7463656c)) {
      uVar8 = 2;
    }
    else {
LAB_109509bd8:
      FUN_10937e740(&ppfStack_68,&UNK_10f571fc7);
      FUN_109388c6c(1,&UNK_10f571e93,&UNK_10f571fb7,0x73,&ppfStack_68);
      uVar17 = 2;
      uVar8 = 2;
      if (-1 < (long)uStack_160) goto LAB_109509c2c;
    }
  }
  else if (lVar15 == 8) {
    plVar12 = (long *)CONCAT17(uStack_170._7_1_,
                               CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))
                              );
    if (*plVar12 != 0x746e6174736e6f63) goto LAB_109509bbc;
    uVar8 = 0;
  }
  else if (lVar15 == 9) {
    plVar12 = (long *)CONCAT17(uStack_170._7_1_,
                               CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))
                              );
    if (*plVar12 != 0x746163696c706572 || (char)plVar12[1] != 'e') goto LAB_109509bd8;
    uVar8 = 1;
  }
  else {
    if (lVar15 != 0xb) goto LAB_109509bd8;
    plVar12 = (long *)CONCAT17(uStack_170._7_1_,
                               CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))
                              );
    if (*plVar12 == 0x5f7463656c666572 && *(long *)((long)plVar12 + 3) == 0x3130315f7463656c) {
      uVar8 = 4;
    }
    else {
      if (*plVar12 != 0x726170736e617274 || *(long *)((long)plVar12 + 3) != 0x746e65726170736e)
      goto LAB_109509bd8;
      uVar8 = 5;
    }
  }
LAB_109509c24:
  uVar17 = uVar8;
  __ZdlPv(CONCAT17(uStack_170._7_1_,
                   CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
LAB_109509c2c:
  *(undefined4 *)(param_1 + 0x104) = uVar17;
  puStack_1f0 = (undefined8 *)0x0;
  puStack_1e8 = (undefined8 *)0x0;
  uStack_1e0 = 0;
  func_0x000107c31940(&uStack_170,&UNK_10f571ded);
  func_0x0001094d2230(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,&puStack_1f0);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  dVar19 = 0.0;
  dVar20 = 0.0;
  dStack_218 = 0.0;
  dStack_220 = 0.0;
  if (puStack_1f0 != puStack_1e8) {
    lVar15 = (long)puStack_1e8 - (long)puStack_1f0 >> 2;
    if (lVar15 == 4) {
      dVar19 = (double)(float)*puStack_1f0;
      dVar20 = (double)(float)((ulong)*puStack_1f0 >> 0x20);
      dStack_220 = (double)(float)puStack_1f0[1];
      dStack_218 = (double)(float)((ulong)puStack_1f0[1] >> 0x20);
    }
    else if (lVar15 == 2) {
      dVar19 = (double)(float)*puStack_1f0;
      dVar20 = (double)(float)((ulong)*puStack_1f0 >> 0x20);
    }
    else {
      FUN_10937e740(&uStack_170,&UNK_10f571ff4);
      FUN_109388c6c(1,&UNK_10f571e93,&UNK_10f571fe3,0x80,&uStack_170);
      if ((long)uStack_160 < 0) {
        __ZdlPv(CONCAT17(uStack_170._7_1_,
                         CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
      }
      dVar19 = 0.0;
      dVar20 = 0.0;
    }
  }
  *(double *)(param_1 + 0x110) = dVar20;
  *(double *)(param_1 + 0x108) = dVar19;
  *(double *)(param_1 + 0x120) = dStack_218;
  *(double *)(param_1 + 0x118) = dStack_220;
  func_0x000107c31940(&uStack_170,&UNK_10f571624);
  FUN_1094a69fc(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0xa8);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571631);
  FUN_1094a69fc(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x90);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571dfc);
  FUN_1094a775c(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x28);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571e13);
  func_0x0001094a6db0(param_1 + 0x1b8,&uStack_170,param_1 + 0x60);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571e33);
  FUN_1094a775c(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x1b0);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571e4e);
  FUN_1094d2114(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x1b4);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  func_0x000107c31940(&uStack_170,&UNK_10f571e70);
  FUN_1094d2114(param_1 + 0x1b8,&uStack_170,&ppfStack_1c0,param_1 + 0x1b5);
  if ((long)uStack_160 < 0) {
    __ZdlPv(CONCAT17(uStack_170._7_1_,
                     CONCAT16(uStack_170._6_1_,CONCAT24(uStack_170._4_2_,(int)uStack_170))));
  }
  if ((*pfVar1 < 0.0) || (1.0 < *pfVar1)) {
    FUN_10926db08(&uStack_170);
    ppfStack_68 = &pfStack_58;
    pfStack_60 = (float *)CONCAT44(pfStack_60._4_4_,1);
    pcStack_50 = FUN_1093ec1b4;
    pcStack_48 = FUN_1093ec208;
    pfStack_58 = pfVar1;
    FUN_10937ad5c(&uStack_170,&UNK_10f571f38,ppfStack_68,1);
    FUN_10926dc5c(auStack_208,&cStack_168,&ppfStack_68);
    appuStack_100[0] = &PTR_DAT_11088d708;
    uStack_170._0_4_ = 0x1088d6e0;
    uStack_170._4_2_ = 1;
    uStack_170._6_1_ = 0;
    uStack_170._7_1_ = 0;
    cStack_168 = -0x50;
    uStack_167 = 0x88d7;
    uStack_165 = 0x110;
    if (cStack_111 < '\0') {
      __ZdlPv(uStack_128);
    }
    puVar3 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
    cStack_168 = (char)puVar3;
    uStack_167 = (undefined2)((ulong)puVar3 >> 8);
    uStack_165 = (undefined5)((ulong)puVar3 >> 0x18);
    __ZNSt3__16localeD1Ev(&uStack_160);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&uStack_170,&PTR_PTR_11088d720);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
    FUN_109388c6c(1,&UNK_10f571e93,&DAT_10f37747d,0xf4,auStack_208);
    if (cStack_1f1 < '\0') {
      __ZdlPv(auStack_208[0]);
    }
  }
  if (puStack_1f0 != (undefined8 *)0x0) {
    puStack_1e8 = puStack_1f0;
    __ZdlPv();
  }
  if (cStack_1c1 < '\0') {
    __ZdlPv(uStack_1d8);
  }
  if ((long)pfStack_180 < 0) {
    __ZdlPv(pfStack_190);
  }
  FUN_109380f8c(&ppfStack_1c0);
  if (lStack_198 < 0) {
    __ZdlPv(CONCAT17((undefined1)uStack_1a1,uStack_1a8));
  }
  return 1;
}



/* Entry: 10950a294; end: 10950a2f7;  */

undefined8 * FUN_10950a294(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10950a2f8; end: 10950a2fb;  */

undefined8 * FUN_10950a2f8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af9d20;
  FUN_109380f8c(param_1 + 0x37);
  puStack_28 = param_1 + 0x33;
  FUN_10950a490(&puStack_28);
  puStack_28 = param_1 + 0x30;
  FUN_10950a490(&puStack_28);
  func_0x0001094d9b24(param_1 + 0x2e);
  FUN_10950a500(param_1 + 0x2c);
  func_0x0001094d0850(param_1 + 0x2a);
  func_0x0001094d0850(param_1 + 0x28);
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    __ZdlPv(param_1[0x25]);
  }
  func_0x0001094d0850(param_1 + 0x1e);
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    __ZdlPv(param_1[0x1b]);
  }
  func_0x0001094d0850(param_1 + 0x19);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  puStack_28 = param_1 + 7;
  func_0x000104c607c8(&puStack_28);
  return param_1;
}



/* Entry: 10950a2fc; end: 10950a323;  */

void FUN_10950a2fc(void)

{
  func_0x00010950a3a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10950a324; end: 10950a48f;  */

undefined1  [16] FUN_10950a324(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x0001094d0850();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10950a490; end: 10950a4ff;  */

void FUN_10950a490(long *param_1)

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
        func_0x0001094d0850();
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



/* Entry: 10950a500; end: 10950a557;  */

long FUN_10950a500(long param_1)

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



/* Entry: 10950a558; end: 10950a73b;  */

/* WARNING: Removing unreachable block (ram,0x00010950a6b4) */

undefined8 FUN_10950a558(long param_1,undefined8 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined7 uStack_50;
  char cStack_49;
  undefined1 auStack_48 [16];
  undefined7 uStack_38;
  undefined4 uStack_31;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  long lStack_28;
  
  uStack_2d = 0;
  uStack_2c = 0;
  if (param_3 < 2) {
    puVar2 = (undefined8 *)&UNK_10f5676e2;
  }
  else {
    if (param_3 != 2) {
      lStack_28 = 0xc;
      uStack_38 = 0x6769685f736f69;
      uStack_31 = 0x6e655f68;
      uStack_2d = 100;
      goto LAB_10950a5e0;
    }
    puVar2 = (undefined8 *)&UNK_10f5676ee;
  }
  lStack_28 = 0xb;
  uStack_38 = (undefined7)*puVar2;
  uStack_31 = *(undefined4 *)((long)puVar2 + 7);
LAB_10950a5e0:
  lStack_28 = lStack_28 << 0x38;
  FUN_1094a68cc(auStack_48,*param_2,&uStack_38);
  uVar3 = *param_2;
  func_0x000107c31940(auStack_78,&UNK_10f572019);
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  FUN_1094d1f9c(&uStack_60,auStack_48,auStack_78,uVar3,&uStack_90);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 0x10) = uStack_58;
  *(ulong *)(param_1 + 8) = CONCAT71(uStack_5f,uStack_60);
  *(ulong *)(param_1 + 0x18) = CONCAT17(cStack_49,uStack_50);
  cStack_49 = '\0';
  uStack_60 = 0;
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c31940(&uStack_60,&UNK_10f572025);
  puVar1 = auStack_48;
  FUN_109506694(puVar1,&uStack_60,uVar3,*(undefined1 *)(param_1 + 0x20));
  *(char *)(param_1 + 0x20) = (char)puVar1;
  if (cStack_49 < '\0') {
    __ZdlPv(CONCAT71(uStack_5f,uStack_60));
  }
  FUN_109380f8c(auStack_48);
  return 1;
}



/* Entry: 10950a73c; end: 10950a7b3;  */

undefined8 * FUN_10950a73c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9d60;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10950a7b4; end: 10950b967;  */

/* WARNING: Removing unreachable block (ram,0x00010950b264) */
/* WARNING: Removing unreachable block (ram,0x00010950b1cc) */
/* WARNING: Removing unreachable block (ram,0x00010950a898) */
/* WARNING: Removing unreachable block (ram,0x00010950abac) */
/* WARNING: Removing unreachable block (ram,0x00010950b200) */
/* WARNING: Removing unreachable block (ram,0x00010950b2d8) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10950a7b4(long param_1,undefined8 *param_2)

{
  int iVar1;
  char ******ppppppcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char cVar5;
  bool bVar6;
  long *******ppppppplVar7;
  char ******ppppppcVar8;
  char ******ppppppcVar9;
  code *pcVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *plVar13;
  undefined8 uVar14;
  long *******ppppppplVar15;
  char *******pppppppcVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  ulong uVar19;
  char ******ppppppcVar20;
  ulong uVar21;
  char *****pppppcVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 uVar27;
  long ******pppppplVar28;
  char *******pppppppcVar29;
  long ******pppppplVar30;
  char *******pppppppcVar31;
  char *pcVar32;
  undefined8 *puVar33;
  char *******pppppppcVar34;
  undefined4 *puVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  char ******ppppppcStack_1f8;
  char ******ppppppcStack_1f0;
  char ******ppppppcStack_1e8;
  char ******ppppppcStack_1e0;
  char ******ppppppcStack_1d8;
  undefined8 uStack_1d0;
  char *****pppppcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  char *****pppppcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  char cStack_179;
  long ******pppppplStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  char *******apppppppcStack_160 [2];
  char *******pppppppcStack_150;
  char *******pppppppcStack_148;
  char *****pppppcStack_140;
  undefined8 uStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *****ppppplStack_120;
  undefined8 uStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *****ppppplStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [24];
  long *******ppppppplStack_d0;
  char ******ppppppcStack_c8;
  char ******ppppppcStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *****ppppplStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar27 = *param_2;
  func_0x000107c31940(&uStack_200,&UNK_10f5717d8);
  FUN_1094a68cc(apppppppcStack_160,uVar27,&uStack_200);
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000107c31940(&ppppppplStack_d0,&UNK_10f572042);
  pppppplStack_178 = (long ******)0x0;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_1094a8f9c(&uStack_200,apppppppcStack_160,&ppppppplStack_d0,&pppppplStack_178);
  func_0x000107c3193c(param_1 + 8);
  *(char *******)(param_1 + 0x10) = ppppppcStack_1f8;
  *(long ********)(param_1 + 8) = uStack_200;
  *(char *******)(param_1 + 0x18) = ppppppcStack_1f0;
  ppppppcStack_1f8 = (char ******)0x0;
  ppppppcStack_1f0 = (char ******)0x0;
  uStack_200 = (long *******)0x0;
  ppppppplStack_110 = (long *******)&uStack_200;
  func_0x000104c607c8(&ppppppplStack_110);
  ppppppplStack_110 = &pppppplStack_178;
  func_0x000104c607c8(&ppppppplStack_110);
  func_0x000107c31940(&uStack_200,&UNK_10f572051);
  ppppppplVar18 = (long *******)apppppppcStack_160;
  func_0x000109506858(ppppppplVar18,&uStack_200,0);
  *(char *)(param_1 + 0x5c) = (char)ppppppplVar18;
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000107c31940(&uStack_200,&UNK_10f572066);
  ppppppplVar18 = (long *******)apppppppcStack_160;
  func_0x0001093782cc(ppppppplVar18,&uStack_200,0);
  *(int *)(param_1 + 0x60) = (int)ppppppplVar18;
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000107c31940(&uStack_200,&UNK_10f572082);
  ppppppplVar18 = (long *******)apppppppcStack_160;
  func_0x0001093782cc(ppppppplVar18,&uStack_200,0);
  *(int *)(param_1 + 0x50) = (int)ppppppplVar18;
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000107c31940(&uStack_200,&UNK_10f572098);
  ppppppplVar18 = (long *******)apppppppcStack_160;
  func_0x0001093782cc(ppppppplVar18,&uStack_200,*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x50))
  ;
  *(int *)(param_1 + 0x54) = (int)ppppppplVar18;
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000107c31940(&uStack_200,&UNK_10f5720ae);
  FUN_1094a9268(apppppppcStack_160,&uStack_200,param_1 + 0x58);
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000107c31940(&uStack_200,&UNK_10f5720c4);
  FUN_1094b4850(apppppppcStack_160,&uStack_200,param_1 + 100);
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000107c31940(&uStack_190,&UNK_10f5720e3);
  pppppppcStack_150 = apppppppcStack_160[0];
  pppppppcStack_148 = (char *******)0x0;
  pppppcStack_140 = (char *****)0x0;
  uStack_138 = 0x8000000000000000;
  cVar5 = *(char *)apppppppcStack_160[0];
  if (cVar5 == '\x01') {
    pppppppcVar34 = (char *******)apppppppcStack_160[0][1];
    FUN_1093793a4(pppppppcVar34,&uStack_190);
    cVar5 = *(char *)apppppppcStack_160[0];
    pppppppcStack_148 = pppppppcVar34;
LAB_10950aa4c:
    ppppppcStack_1f8 = (char ******)0x0;
    ppppppcStack_1f0 = (char ******)0x0;
    ppppppcStack_1e8 = (char ******)0x8000000000000000;
    uStack_200 = (long *******)apppppppcStack_160[0];
    if (cVar5 == '\x01') {
      ppppppcStack_1f8 = apppppppcStack_160[0][1] + 1;
    }
    else {
      if (cVar5 == '\x02') {
        ppppppcVar20 = apppppppcStack_160[0][1];
        goto LAB_10950aa6c;
      }
      ppppppcStack_1e8 = (char ******)0x1;
    }
  }
  else {
    if (cVar5 != '\x02') {
      uStack_138 = 1;
      goto LAB_10950aa4c;
    }
    ppppppcVar20 = apppppppcStack_160[0][1];
    pppppcStack_140 = ppppppcVar20[1];
    uStack_200 = (long *******)apppppppcStack_160[0];
LAB_10950aa6c:
    ppppppcStack_1e8 = (char ******)0x8000000000000000;
    ppppppcStack_1f8 = (char ******)0x0;
    ppppppcStack_1f0 = (char ******)ppppppcVar20[1];
  }
  ppppppplVar18 = (long *******)&pppppppcStack_150;
  FUN_109379420(ppppppplVar18,&uStack_200);
  if (((ulong)ppppppplVar18 & 1) != 0) goto LAB_10950abe8;
  ppppppplVar18 = (long *******)&pppppppcStack_150;
  FUN_10937b950();
  ppppppcStack_c8 = (char ******)0x0;
  ppppppplStack_d0 = (long *******)0x0;
  ppppppplStack_b8 = (long *******)0x0;
  ppppppcStack_c0 = (char ******)0x0;
  ppppppplStack_b0 = (long *******)CONCAT44(ppppppplStack_b0._4_4_,0x3f800000);
  if (*(char *)ppppppplVar18 != '\x02') {
    uVar27 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(ppppppplVar18);
    func_0x000107c31940(&ppppppplStack_110,ppppppplVar18);
    FUN_10928a5e0(&uStack_200,&UNK_10f56748c,&ppppppplStack_110);
    FUN_10937bbbc(uVar27,0x12e,&uStack_200);
    ___cxa_throw(uVar27,&PTR_DAT_110af4510,FUN_10937bd14);
LAB_10950b650:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10950b654);
    (*pcVar10)();
  }
  ppppppcStack_1f8 = (char ******)0x0;
  uStack_200 = (long *******)0x0;
  ppppppcStack_1e8 = (char ******)0x0;
  ppppppcStack_1f0 = (char ******)0x0;
  ppppppcStack_1e0 = (char ******)CONCAT44(ppppppcStack_1e0._4_4_,0x3f800000);
  func_0x000107c28280(&uStack_200,
                      (long)(float)(ulong)((long)ppppppplVar18[1][1] - (long)*ppppppplVar18[1] >> 4)
                     );
  ppppppplStack_108 = (long *******)0x0;
  ppppplStack_100 = (long *****)0x0;
  uStack_f8 = 0x8000000000000000;
  cVar5 = *(char *)ppppppplVar18;
  ppppppplStack_130 = ppppppplVar18;
  ppppppplStack_110 = ppppppplVar18;
  if (cVar5 == '\0') {
    uStack_f8 = 1;
LAB_10950ab68:
    ppppppplStack_128 = (long *******)0x0;
    ppppplStack_120 = (long *****)0x0;
    uStack_118 = 1;
  }
  else if (cVar5 == '\x02') {
    ppppplStack_100 = *ppppppplVar18[1];
    ppppppplStack_128 = (long *******)0x0;
    uStack_118 = 0x8000000000000000;
    ppppplStack_120 = ppppppplVar18[1][1];
  }
  else {
    if (cVar5 != '\x01') {
      uStack_f8 = 0;
      goto LAB_10950ab68;
    }
    ppppppplStack_128 = (long *******)(ppppppplVar18[1] + 1);
    ppppppplStack_108 = (long *******)*ppppppplVar18[1];
    uStack_118 = 0x8000000000000000;
    ppppplStack_120 = (long *****)0x0;
  }
  while( true ) {
    pppppppcVar34 = (char *******)&ppppppplStack_110;
    FUN_10937c708(pppppppcVar34,&ppppppplStack_130);
    if (((ulong)pppppppcVar34 & 1) != 0) break;
    FUN_10937c560(&ppppppplStack_110);
    FUN_10937c804(auStack_e8);
    func_0x00010726db4c(&uStack_200,auStack_e8,auStack_e8);
    FUN_10937c698(&ppppppplStack_110);
  }
  func_0x000107c283f0(&ppppppplStack_d0,&uStack_200);
  func_0x000107c2826c(&uStack_200);
  func_0x000107c283f0(param_1 + 0x68,&ppppppplStack_d0);
  func_0x000107c2826c(&ppppppplStack_d0);
LAB_10950abe8:
  if (cStack_179 < '\0') {
    __ZdlPv(uStack_190);
  }
  func_0x000107c31940(&uStack_200,&UNK_10f5720fc);
  func_0x0001094a6db0(apppppppcStack_160,&uStack_200,param_1 + 0x90);
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000107c31940(&uStack_200,&UNK_10f572126);
  func_0x0001094a6db0(apppppppcStack_160,&uStack_200,param_1 + 0x94);
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000107c31940(&uStack_200,&UNK_10f57214d);
  func_0x0001094a6db0(apppppppcStack_160,&uStack_200,param_1 + 0x98);
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000107c31940(&uStack_200,&UNK_10f572162);
  ppppppplVar18 = (long *******)apppppppcStack_160;
  func_0x0001093781f4(ppppppplVar18,&uStack_200);
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  ppppppplStack_110 = (long *******)0x0;
  ppppppplStack_108 = (long *******)0x0;
  ppppplStack_100 = (long *****)0x0;
  func_0x000107c31940(&uStack_200,&UNK_10f57217a);
  pppppcStack_1a8 = (char *****)0x0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  FUN_1094ce6d4(&ppppppplStack_130,apppppppcStack_160,&uStack_200,&pppppcStack_1a8);
  ppppppplStack_d0 = (long *******)&pppppcStack_1a8;
  FUN_109381838(&ppppppplStack_d0);
  if ((long)ppppppcStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  ppppppplVar7 = ppppppplStack_128;
  plVar26 = (long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x28) = *plVar26;
  for (ppppppplVar17 = ppppppplStack_130; ppppppplVar17 != ppppppplVar7;
      ppppppplVar17 = ppppppplVar17 + 2) {
    FUN_10950bbc4(&ppppppplStack_d0,ppppppplVar17);
    ppppppplVar15 = ppppppplStack_d0;
    func_0x000107c31940(&uStack_200,"start");
    ppppppplVar11 = ppppppplVar15;
    func_0x0001093782cc(ppppppplVar15,&uStack_200,0);
    if ((long)ppppppcStack_1f0 < 0) {
      __ZdlPv(uStack_200);
    }
    func_0x000107c31940(&uStack_200,"end");
    ppppppplVar12 = ppppppplVar15;
    func_0x0001093782cc(ppppppplVar15,&uStack_200,0);
    if ((long)ppppppcStack_1f0 < 0) {
      __ZdlPv(uStack_200);
    }
    func_0x000107c31940(&uStack_200,&UNK_10f572180);
    uVar36 = 0;
    FUN_1094a73d0(ppppppplVar15,&uStack_200);
    if ((long)ppppppcStack_1f0 < 0) {
      __ZdlPv(uStack_200);
    }
    func_0x000107c31940(&uStack_200,&DAT_10f30f9dd);
    uVar37 = 0;
    FUN_1094a73d0(ppppppplVar15,&uStack_200);
    if ((long)ppppppcStack_1f0 < 0) {
      __ZdlPv(uStack_200);
    }
    if (((ulong)ppppppplVar18 & 1) == 0) {
      func_0x000107c31940(&uStack_200,&UNK_10f572189);
      uVar38 = 0;
      FUN_1094a73d0(ppppppplVar15,&uStack_200);
      if ((long)ppppppcStack_1f0 < 0) {
        __ZdlPv(uStack_200);
      }
      pppppppcStack_150 = (char *******)CONCAT44(pppppppcStack_150._4_4_,uVar38);
      FUN_1092c9a40(&ppppppplStack_110,&pppppppcStack_150);
    }
    puVar4 = *(undefined4 **)(param_1 + 0x28);
    if (puVar4 < *(undefined4 **)(param_1 + 0x30)) {
      *puVar4 = (int)ppppppplVar11;
      puVar4[1] = (int)ppppppplVar12;
      puVar35 = puVar4 + 4;
      puVar4[2] = uVar36;
      puVar4[3] = uVar37;
    }
    else {
      lVar24 = (long)puVar4 - *plVar26;
      uVar19 = (lVar24 >> 4) + 1;
      if (uVar19 >> 0x3c != 0) {
        FUN_1095083ec();
        goto LAB_10950b650;
      }
      uVar21 = (long)*(undefined4 **)(param_1 + 0x30) - *plVar26;
      uVar25 = (long)uVar21 >> 3;
      if (uVar25 <= uVar19) {
        uVar25 = uVar19;
      }
      if (0x7fffffffffffffef < uVar21) {
        uVar25 = 0xfffffffffffffff;
      }
      plVar13 = plVar26;
      func_0x000109508400();
      puVar4 = (undefined4 *)((long)plVar13 + lVar24);
      *puVar4 = (int)ppppppplVar11;
      puVar4[1] = (int)ppppppplVar12;
      puVar4[2] = uVar36;
      puVar4[3] = uVar37;
      puVar35 = puVar4 + 4;
      lVar23 = (long)puVar4 - (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20));
      _memcpy(lVar23);
      lVar24 = *(long *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar23;
      *(undefined4 **)(param_1 + 0x28) = puVar35;
      *(long **)(param_1 + 0x30) = plVar13 + uVar25 * 2;
      if (lVar24 != 0) {
        __ZdlPv();
      }
    }
    ppppppcVar20 = ppppppcStack_c8;
    *(undefined4 **)(param_1 + 0x28) = puVar35;
    if (ppppppcStack_c8 != (char ******)0x0) {
      ppppppcVar2 = ppppppcStack_c8 + 1;
      do {
        pppppcVar22 = *ppppppcVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar2,0x10);
        if (bVar6) {
          *ppppppcVar2 = (char *****)((long)pppppcVar22 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppcVar22 == (char *****)0x0) {
        (*(code *)(*ppppppcStack_c8)[2])(ppppppcStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar20);
      }
    }
  }
  if (((ulong)ppppppplVar18 & 1) == 0) {
    func_0x000107c31940(&uStack_200,&UNK_10f5721e1);
    ppppppplVar18 = (long *******)apppppppcStack_160;
    func_0x0001093782cc(ppppppplVar18,&uStack_200,0);
    if ((long)ppppppcStack_1f0 < 0) {
      __ZdlPv(uStack_200);
    }
    ppppppcStack_1f0 = (char ******)0x0;
    ppppppcStack_1f8 = (char ******)0x0;
    ppppppcStack_1e0 = (char ******)0x0;
    ppppppcStack_1e8 = (char ******)0x0;
    uStack_1d0 = 0;
    ppppppcStack_1d8 = (char ******)0x0;
    uStack_200 = (long *******)CONCAT44(0x3da3d70a,(int)ppppppplVar18);
    func_0x000107c27e9c(&ppppppcStack_1f8,(long)ppppppplStack_128 - (long)ppppppplStack_130 >> 4);
    ppppppplStack_d0 = (long *******)((ulong)ppppppplStack_d0 & 0xffffffff00000000);
    if (0 < (int)((ulong)((long)ppppppplStack_128 - (long)ppppppplStack_130) >> 4)) {
      do {
        FUN_10923b3a0(&ppppppcStack_1f8,&ppppppplStack_d0);
        iVar1 = (int)ppppppplStack_d0 + 1;
        ppppppplStack_d0 = (long *******)CONCAT44(ppppppplStack_d0._4_4_,iVar1);
      } while (iVar1 < (int)((ulong)((long)ppppppplStack_128 - (long)ppppppplStack_130) >> 4));
    }
    if (ppppppcStack_1e0 != (char ******)0x0) {
      ppppppcStack_1d8 = ppppppcStack_1e0;
      __ZdlPv();
    }
    ppppplStack_a0 = ppppplStack_100;
    ppppppplStack_a8 = ppppppplStack_108;
    ppppppplVar18 = ppppppplStack_110;
    ppppppplStack_108 = (long *******)0x0;
    ppppplStack_100 = (long *****)0x0;
    ppppppplStack_110 = (long *******)0x0;
    ppppppplStack_d0 = uStack_200;
    ppppppcStack_c0 = ppppppcStack_1f0;
    ppppppcStack_c8 = ppppppcStack_1f8;
    ppppppplStack_b8 = (long *******)ppppppcStack_1e8;
    ppppppcStack_1f8 = (char ******)0x0;
    ppppppcStack_1f0 = (char ******)0x0;
    ppppppplStack_b0 = ppppppplVar18;
    ppppppcStack_1e8 = (char ******)0x0;
    ppppppcStack_1e0 = (char ******)0x0;
    ppppppcStack_1d8 = (char ******)0x0;
    uStack_1d0 = 0;
    puVar33 = (undefined8 *)(param_1 + 0x38);
    pppppppcVar29 = (char *******)*puVar33;
    pppppppcVar34 = *(char ********)(param_1 + 0x48);
    if (pppppppcVar34 == pppppppcVar29) {
      if (pppppppcVar34 != (char *******)0x0) {
        pppppppcVar31 = *(char ********)(param_1 + 0x40);
        pppppppcVar16 = pppppppcVar29;
        if (pppppppcVar31 != pppppppcVar34) {
          do {
            pppppppcVar31 = pppppppcVar31 + -7;
            func_0x000109508434(pppppppcVar31);
          } while (pppppppcVar31 != pppppppcVar34);
          pppppppcVar16 = (char *******)*puVar33;
        }
        *(char ********)(param_1 + 0x40) = pppppppcVar29;
        __ZdlPv(pppppppcVar16);
        *puVar33 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      pppppppcVar34 = (char *******)0x38;
      __Znwm();
      *(char ********)(param_1 + 0x38) = pppppppcVar34;
      *(char ********)(param_1 + 0x40) = pppppppcVar34;
      *(char ********)(param_1 + 0x48) = pppppppcVar34 + 7;
      pppppppcVar29 = (char *******)&ppppppplStack_d0;
      FUN_10950b9c0(pppppppcVar29,auStack_98,pppppppcVar34);
      *(char ********)(param_1 + 0x40) = pppppppcVar29;
      ppppppplVar17 = ppppppplStack_a8;
    }
    else {
      pppppppcVar34 = *(char ********)(param_1 + 0x40);
      if (pppppppcVar34 == pppppppcVar29) {
        pppppppcVar16 = (char *******)&ppppppplStack_d0;
        FUN_10950b9c0(pppppppcVar16,auStack_98,pppppppcVar34);
        *(char **)(param_1 + 0x40) =
             (char *)((long)pppppppcVar34 + ((long)pppppppcVar16 - (long)pppppppcVar29));
        ppppppplVar17 = ppppppplStack_a8;
      }
      else {
        pppppppcVar16 = (char *******)&ppppppplStack_d0;
        FUN_10950baac(pppppppcVar16,auStack_98,pppppppcVar29);
        pppppppcVar34 = *(char ********)(param_1 + 0x40);
        while (pppppppcVar34 != pppppppcVar16) {
          pppppppcVar34 = pppppppcVar34 + -7;
          func_0x000109508434(pppppppcVar34);
        }
        *(char ********)(param_1 + 0x40) = pppppppcVar16;
        ppppppplVar18 = ppppppplStack_b0;
        ppppppplVar17 = ppppppplStack_a8;
      }
    }
    ppppppplStack_a8 = ppppppplVar18;
    if (ppppppplStack_a8 != (long *******)0x0) {
      __ZdlPv();
      ppppppplVar17 = ppppppplStack_a8;
    }
    ppppppplStack_a8 = ppppppplVar17;
    if (ppppppcStack_c8 != (char ******)0x0) {
      ppppppcStack_c0 = ppppppcStack_c8;
      __ZdlPv();
    }
    if (ppppppcStack_1e0 != (char ******)0x0) {
      ppppppcStack_1d8 = ppppppcStack_1e0;
      __ZdlPv();
    }
    if (ppppppcStack_1f8 != (char ******)0x0) {
      ppppppcStack_1f0 = ppppppcStack_1f8;
      __ZdlPv();
    }
  }
  else {
    func_0x000107c31940(&uStack_200,&UNK_10f572162);
    pppppcStack_1c0 = (char *****)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    FUN_1094ce6d4(&pppppppcStack_150,apppppppcStack_160,&uStack_200,&pppppcStack_1c0);
    ppppppplStack_d0 = (long *******)&pppppcStack_1c0;
    FUN_109381838(&ppppppplStack_d0);
    if ((long)ppppppcStack_1f0 < 0) {
      __ZdlPv(uStack_200);
    }
    ppppppplVar18 = (long *******)(param_1 + 0x38);
    pppppplVar28 = *ppppppplVar18;
    pppppplVar30 = *(long *******)(param_1 + 0x40);
    while (pppppplVar30 != pppppplVar28) {
      pppppplVar30 = pppppplVar30 + -7;
      func_0x000109508434(pppppplVar30);
    }
    *(long *******)(param_1 + 0x40) = pppppplVar28;
    FUN_109507ba8(ppppppplVar18,(long)pppppppcStack_148 - (long)pppppppcStack_150 >> 4);
    pppppppcVar29 = pppppppcStack_148;
    for (pppppppcVar34 = pppppppcStack_150; pppppppcVar34 != pppppppcVar29;
        pppppppcVar34 = pppppppcVar34 + 2) {
      FUN_10950bbc4(&uStack_190,pppppppcVar34);
      uVar27 = uStack_190;
      uStack_200 = (long *******)0x3da3d70a00000000;
      ppppppcStack_1f0 = (char ******)0x0;
      ppppppcStack_1f8 = (char ******)0x0;
      ppppppcStack_1e0 = (char ******)0x0;
      ppppppcStack_1e8 = (char ******)0x0;
      uStack_1d0 = 0;
      ppppppcStack_1d8 = (char ******)0x0;
      func_0x000107c31940(&ppppppplStack_d0,&UNK_10f57219b);
      uVar14 = uVar27;
      func_0x0001093782cc(uVar27,&ppppppplStack_d0,0);
      uStack_200 = (long *******)CONCAT44(uStack_200._4_4_,(int)uVar14);
      func_0x000107c31940(&ppppppplStack_d0,&UNK_10f5721b1);
      uVar36 = 0;
      FUN_1094a73d0(uVar27,&ppppppplStack_d0);
      uStack_200 = (long *******)CONCAT44(uVar36,(undefined4)uStack_200);
      func_0x000107c31940(auStack_e8,&UNK_10f5721c0);
      lStack_218 = 0;
      lStack_210 = 0;
      uStack_208 = 0;
      func_0x0001094a71c0(&ppppppplStack_d0,uVar27,auStack_e8,&lStack_218);
      ppppppcVar2 = ppppppcStack_c0;
      ppppppcVar20 = ppppppcStack_c8;
      ppppppplVar17 = ppppppplStack_d0;
      ppppppcStack_1f8 = (char ******)ppppppplStack_d0;
      ppppppcStack_1f0 = ppppppcStack_c8;
      ppppppcStack_1e8 = ppppppcStack_c0;
      ppppppcStack_c8 = (char ******)0x0;
      ppppppcStack_c0 = (char ******)0x0;
      ppppppplStack_d0 = (long *******)0x0;
      if (lStack_218 != 0) {
        lStack_210 = lStack_218;
        __ZdlPv();
      }
      uVar27 = uStack_190;
      func_0x000107c31940(auStack_e8,&UNK_10f5721d4);
      lStack_230 = 0;
      lStack_228 = 0;
      uStack_220 = 0;
      FUN_1094a74cc(&ppppppplStack_d0,uVar27,auStack_e8,&lStack_230);
      if (ppppppcStack_1e0 != (char ******)0x0) {
        __ZdlPv();
      }
      ppppppcVar9 = ppppppcStack_c0;
      ppppppcVar8 = ppppppcStack_c8;
      ppppppplVar7 = ppppppplStack_d0;
      ppppppcStack_1e0 = (char ******)ppppppplStack_d0;
      ppppppcStack_1d8 = ppppppcStack_c8;
      uStack_1d0 = ppppppcStack_c0;
      ppppppplStack_d0 = (long *******)0x0;
      ppppppcStack_c8 = (char ******)0x0;
      ppppppcStack_c0 = (char ******)0x0;
      if (lStack_230 != 0) {
        lStack_228 = lStack_230;
        __ZdlPv();
      }
      puVar33 = *(undefined8 **)(param_1 + 0x40);
      if (puVar33 < *(undefined8 **)(param_1 + 0x48)) {
        *puVar33 = uStack_200;
        puVar33[1] = ppppppplVar17;
        puVar33[2] = ppppppcVar20;
        puVar33[3] = ppppppcVar2;
        puVar33[4] = ppppppplVar7;
        puVar33[5] = ppppppcVar8;
        puVar33[6] = ppppppcVar9;
        pcVar32 = (char *)(puVar33 + 7);
      }
      else {
        lVar24 = (long)puVar33 - (long)*ppppppplVar18;
        uVar19 = (lVar24 >> 3) * 0x6db6db6db6db6db7 + 1;
        if (0x492492492492492 < uVar19) {
          FUN_109508478();
          goto LAB_10950b650;
        }
        lVar23 = (long)*(undefined8 **)(param_1 + 0x48) - (long)*ppppppplVar18 >> 3;
        uVar25 = lVar23 * -0x2492492492492492;
        if (uVar25 < uVar19 || uVar25 - uVar19 == 0) {
          uVar25 = uVar19;
        }
        if (0x249249249249248 < (ulong)(lVar23 * 0x6db6db6db6db6db7)) {
          uVar25 = 0x492492492492492;
        }
        ppppppplStack_b0 = ppppppplVar18;
        if (uVar25 == 0) {
          ppppppplVar15 = (long *******)0x0;
        }
        else {
          ppppppplVar15 = ppppppplVar18;
          FUN_10950848c();
        }
        ppppppcStack_c8 = (char ******)((long)ppppppplVar15 + lVar24);
        *ppppppcStack_c8 = (char *****)uStack_200;
        *(long ********)((long)ppppppcStack_c8 + 8) = ppppppplVar17;
        *(char *******)((long)ppppppcStack_c8 + 0x10) = ppppppcVar20;
        *(char *******)((long)ppppppcStack_c8 + 0x18) = ppppppcVar2;
        ppppppcStack_1f0 = (char ******)0x0;
        ppppppcStack_1e8 = (char ******)0x0;
        ppppppcStack_1f8 = (char ******)0x0;
        *(long ********)((long)ppppppcStack_c8 + 0x20) = ppppppplVar7;
        *(char *******)((long)ppppppcStack_c8 + 0x28) = ppppppcVar8;
        *(char *******)((long)ppppppcStack_c8 + 0x30) = ppppppcVar9;
        ppppppcStack_1d8 = (char ******)0x0;
        uStack_1d0 = 0;
        ppppppcStack_1e0 = (char ******)0x0;
        pcVar32 = (char *)((long)ppppppcStack_c8 + 0x38);
        pcVar3 = (char *)((long)ppppppcStack_c8 +
                         (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x40)));
        ppppppplStack_d0 = ppppppplVar15;
        ppppppcStack_c0 = (char ******)pcVar32;
        ppppppplStack_b8 = ppppppplVar15 + uVar25 * 7;
        func_0x0001095084d4(ppppppplVar18,*(long *)(param_1 + 0x38),*(long *)(param_1 + 0x40),pcVar3
                           );
        ppppppplStack_d0 = *(long ********)(param_1 + 0x38);
        *(char **)(param_1 + 0x38) = pcVar3;
        *(char **)(param_1 + 0x40) = pcVar32;
        ppppppplStack_b8 = *(long ********)(param_1 + 0x48);
        *(long ********)(param_1 + 0x48) = ppppppplVar15 + uVar25 * 7;
        ppppppcStack_c8 = (char ******)ppppppplStack_d0;
        ppppppcStack_c0 = (char ******)ppppppplStack_d0;
        func_0x000109508568(&ppppppplStack_d0);
      }
      plVar26 = plStack_188;
      *(char **)(param_1 + 0x40) = pcVar32;
      if (plStack_188 != (long *)0x0) {
        plVar13 = plStack_188 + 1;
        do {
          lVar24 = *plVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
    }
    uStack_200 = (long *******)&pppppppcStack_150;
    FUN_109381838(&uStack_200);
  }
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    ppppppplVar18 = (long *******)(ulong)(*(int *)(param_1 + 0x60) <= *(int *)(param_1 + 0x50));
  }
  else {
    ppppppplVar18 = (long *******)0x1;
  }
  uStack_200 = (long *******)&ppppppplStack_130;
  FUN_109381838(&uStack_200);
  if (ppppppplStack_110 != (long *******)0x0) {
    ppppppplStack_108 = ppppppplStack_110;
    __ZdlPv();
  }
  ppppppplVar17 = (long *******)apppppppcStack_160;
  FUN_109380f8c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return ppppppplVar18;
  }
  ___stack_chk_fail();
  ppppppplVar18[8] = (long ******)pppppppcVar34;
  FUN_10950b968(&ppppppplStack_d0);
  FUN_10950b968(&uStack_200);
  uStack_200 = (long *******)&ppppppplStack_130;
  FUN_109381838(&uStack_200);
  if (ppppppplStack_110 != (long *******)0x0) {
    ppppppplStack_108 = ppppppplStack_110;
    __ZdlPv();
  }
  FUN_109380f8c(apppppppcStack_160);
  __Unwind_Resume();
  if (ppppppplVar17[4] != (long ******)0x0) {
    ppppppplVar17[5] = ppppppplVar17[4];
    __ZdlPv();
  }
  if (ppppppplVar17[1] != (long ******)0x0) {
    ppppppplVar17[2] = ppppppplVar17[1];
    __ZdlPv();
  }
  return ppppppplVar17;
}



/* Entry: 10950b968; end: 10950b9a7;  */

long FUN_10950b968(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10950b9a8; end: 10950b9ab;  */

undefined8 * FUN_10950b9a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_38;
  
  *param_1 = &PTR_FUN_110af9db0;
  func_0x000107c2826c(param_1 + 0xd);
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    lVar2 = param_1[8];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x38;
        func_0x000109508434(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = param_1[7];
    }
    param_1[8] = lVar3;
    __ZdlPv(lVar1);
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  puStack_38 = param_1 + 1;
  func_0x000104c607c8(&puStack_38);
  return param_1;
}



/* Entry: 10950b9ac; end: 10950b9bf;  */

void FUN_10950b9ac(void)

{
  func_0x00010950bb2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10950b9c0; end: 10950baab;  */

long FUN_10950b9c0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)((long)param_1 + lVar3);
      puVar2 = (undefined8 *)(param_3 + lVar3);
      *puVar2 = *puVar1;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[1] = 0;
      FUN_109285684();
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      FUN_1092cc0dc(puVar2 + 4,puVar1[4],puVar1[5],(long)(puVar1[5] - puVar1[4]) >> 2);
      lVar3 = lVar3 + 0x38;
    } while (puVar1 + 7 != param_2);
    param_3 = param_3 + lVar3;
  }
  return param_3;
}



/* Entry: 10950baac; end: 10950bbc3;  */

undefined8 * FUN_10950baac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_3 = *param_1;
    if (param_1 != param_3) {
      FUN_10928555c(param_3 + 1,param_1[1],param_1[2],(long)(param_1[2] - param_1[1]) >> 2);
      FUN_10942bf40(param_3 + 4,param_1[4],param_1[5],(long)(param_1[5] - param_1[4]) >> 2);
    }
    param_3 = param_3 + 7;
  }
  return param_3;
}



/* Entry: 10950bbc4; end: 10950bc2b;  */

void FUN_10950bbc4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110af82b8;
  FUN_109380c8c(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10950bc2c; end: 10950c083;  */

long * FUN_10950bc2c(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plStack_88;
  long *plStack_80;
  char cStack_71;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  FUN_1094fea7c((long)param_1 + *(long *)(*param_1 + -0x18) + 0x210,
                *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x1e8) + 0x198);
  puVar3 = (undefined8 *)0x1f0;
  __Znwm();
  *puVar3 = &PTR_FUN_110af9f80;
  puVar3[1] = 0;
  puVar4 = puVar3 + 3;
  puVar3[4] = 0;
  *puVar4 = 0;
  puVar3[2] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  puVar3[0x13] = 0;
  puVar3[0x16] = 0;
  puVar3[0x15] = 0;
  puVar3[0x18] = 0;
  puVar3[0x17] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x20] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x3d] = 0;
  puVar3[0x22] = 0;
  puVar3[0x21] = 0;
  puVar3[0x24] = 0;
  puVar3[0x23] = 0;
  puVar3[0x26] = 0;
  puVar3[0x25] = 0;
  puVar3[0x28] = 0;
  puVar3[0x27] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x30] = 0;
  puVar3[0x2f] = 0;
  puVar3[0x32] = 0;
  puVar3[0x31] = 0;
  puVar3[0x34] = 0;
  puVar3[0x33] = 0;
  puVar3[0x36] = 0;
  puVar3[0x35] = 0;
  puVar3[0x38] = 0;
  puVar3[0x37] = 0;
  puVar3[0x3a] = 0;
  puVar3[0x39] = 0;
  puVar3[0x3c] = 0;
  puVar3[0x3b] = 0;
  FUN_10950cb3c();
  puVar3[3] = &PTR_FUN_110af76a8;
  puVar3[0x3d] = 0;
  puVar3[0x36] = 0;
  puVar3[0x35] = 0;
  puVar3[0x38] = 0;
  puVar3[0x37] = 0;
  puVar3[0x3a] = 0;
  puVar3[0x39] = 0;
  puVar3[0x3c] = 0;
  puVar3[0x3b] = 0;
  lVar6 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x1e8);
  plVar7 = *(long **)(lVar6 + 0x178);
  *(undefined8 **)(lVar6 + 0x170) = puVar4;
  *(undefined8 **)(lVar6 + 0x178) = puVar3;
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar6 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x1e8);
  plVar7 = *(long **)(lVar6 + 0x170);
  plStack_58 = *(long **)(lVar6 + 0x158);
  uStack_60 = *(undefined8 *)(lVar6 + 0x150);
  if (*(long *)(lVar6 + 0x158) != 0) {
    plVar5 = (long *)(*(long *)(lVar6 + 0x158) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*plVar7 + 0x10))(plVar7,&uStack_60,param_4);
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar8 = plStack_58 + 1;
    do {
      lVar6 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if ((int)plVar7 != 0) {
    lVar6 = *(long *)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x1e8) + 0x170);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar6 + 0x38,lVar6 + 0x20);
    FUN_1094d34f8();
    func_0x0001094d3a28(&plStack_88);
    FUN_1095018c0((long)param_1 + *(long *)(*param_1 + -0x18) + 0x200,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar7 = plStack_80 + 1;
      do {
        lVar6 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
    lVar6 = *(long *)(*param_1 + -0x18);
    if (*(long *)((long)param_1 + lVar6 + 0x200) != 0) {
      plVar7 = (long *)0x50;
      __Znwm();
      plVar8 = plVar7 + 1;
      *plVar8 = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110af9fd0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar9 = plVar7 + 3;
      *plVar9 = (long)&PTR_FUN_110afa020;
      *(undefined1 *)(plVar7 + 7) = 1;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plStack_88 = plVar9;
      plStack_80 = plVar7;
      FUN_10950c084(plVar7 + 4,*(long *)((long)param_1 + lVar6 + 0x1e8) + 0x170);
      func_0x0001094d6804(plVar7 + 8,(long)param_1 + *(long *)(*param_1 + -0x18) + 0x238);
      plVar7[6] = *(long *)(param_3 + 0xc);
      plVar5 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x200);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_70 = plVar9;
      plStack_68 = plVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5,param_2,&plStack_70);
      plVar7 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar8 = plStack_68 + 1;
        do {
          lVar6 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = plStack_80;
      if (plStack_80 == (long *)0x0) {
        return plVar5;
      }
      plVar8 = plStack_80 + 1;
      do {
        lVar6 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 != 0) {
        return plVar5;
      }
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      return plVar5;
    }
    FUN_10937e740(&plStack_88,&UNK_10f572291);
    FUN_109388c6c(1,&UNK_10f5721f1,&UNK_10f572283,0x29,&plStack_88);
    if (cStack_71 < '\0') {
      __ZdlPv(plStack_88);
    }
  }
  return (long *)0x0;
}



/* Entry: 10950c084; end: 10950c0ff;  */

undefined8 * FUN_10950c084(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10950c100; end: 10950c10f;  */

long * FUN_10950c100(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plStack_88;
  long *plStack_80;
  char cStack_71;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x48));
  FUN_1094fea7c((long)param_1 + *(long *)(*param_1 + -0x18) + 0x210,
                *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x1e8) + 0x198);
  puVar3 = (undefined8 *)0x1f0;
  __Znwm();
  *puVar3 = &PTR_FUN_110af9f80;
  puVar3[1] = 0;
  puVar4 = puVar3 + 3;
  puVar3[4] = 0;
  *puVar4 = 0;
  puVar3[2] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  puVar3[0x13] = 0;
  puVar3[0x16] = 0;
  puVar3[0x15] = 0;
  puVar3[0x18] = 0;
  puVar3[0x17] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x20] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x3d] = 0;
  puVar3[0x22] = 0;
  puVar3[0x21] = 0;
  puVar3[0x24] = 0;
  puVar3[0x23] = 0;
  puVar3[0x26] = 0;
  puVar3[0x25] = 0;
  puVar3[0x28] = 0;
  puVar3[0x27] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x30] = 0;
  puVar3[0x2f] = 0;
  puVar3[0x32] = 0;
  puVar3[0x31] = 0;
  puVar3[0x34] = 0;
  puVar3[0x33] = 0;
  puVar3[0x36] = 0;
  puVar3[0x35] = 0;
  puVar3[0x38] = 0;
  puVar3[0x37] = 0;
  puVar3[0x3a] = 0;
  puVar3[0x39] = 0;
  puVar3[0x3c] = 0;
  puVar3[0x3b] = 0;
  FUN_10950cb3c();
  puVar3[3] = &PTR_FUN_110af76a8;
  puVar3[0x3d] = 0;
  puVar3[0x36] = 0;
  puVar3[0x35] = 0;
  puVar3[0x38] = 0;
  puVar3[0x37] = 0;
  puVar3[0x3a] = 0;
  puVar3[0x39] = 0;
  puVar3[0x3c] = 0;
  puVar3[0x3b] = 0;
  lVar6 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x1e8);
  plVar7 = *(long **)(lVar6 + 0x178);
  *(undefined8 **)(lVar6 + 0x170) = puVar4;
  *(undefined8 **)(lVar6 + 0x178) = puVar3;
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar6 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x1e8);
  plVar7 = *(long **)(lVar6 + 0x170);
  plStack_58 = *(long **)(lVar6 + 0x158);
  uStack_60 = *(undefined8 *)(lVar6 + 0x150);
  if (*(long *)(lVar6 + 0x158) != 0) {
    plVar5 = (long *)(*(long *)(lVar6 + 0x158) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*plVar7 + 0x10))(plVar7,&uStack_60,param_4);
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar8 = plStack_58 + 1;
    do {
      lVar6 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if ((int)plVar7 != 0) {
    lVar6 = *(long *)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x1e8) + 0x170);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar6 + 0x38,lVar6 + 0x20);
    FUN_1094d34f8();
    func_0x0001094d3a28(&plStack_88);
    FUN_1095018c0((long)param_1 + *(long *)(*param_1 + -0x18) + 0x200,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar7 = plStack_80 + 1;
      do {
        lVar6 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
    lVar6 = *(long *)(*param_1 + -0x18);
    if (*(long *)((long)param_1 + lVar6 + 0x200) != 0) {
      plVar7 = (long *)0x50;
      __Znwm();
      plVar8 = plVar7 + 1;
      *plVar8 = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110af9fd0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar9 = plVar7 + 3;
      *plVar9 = (long)&PTR_FUN_110afa020;
      *(undefined1 *)(plVar7 + 7) = 1;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plStack_88 = plVar9;
      plStack_80 = plVar7;
      FUN_10950c084(plVar7 + 4,*(long *)((long)param_1 + lVar6 + 0x1e8) + 0x170);
      func_0x0001094d6804(plVar7 + 8,(long)param_1 + *(long *)(*param_1 + -0x18) + 0x238);
      plVar7[6] = *(long *)(param_3 + 0xc);
      plVar5 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x200);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_70 = plVar9;
      plStack_68 = plVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5,param_2,&plStack_70);
      plVar7 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar8 = plStack_68 + 1;
        do {
          lVar6 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = plStack_80;
      if (plStack_80 == (long *)0x0) {
        return plVar5;
      }
      plVar8 = plStack_80 + 1;
      do {
        lVar6 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 != 0) {
        return plVar5;
      }
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      return plVar5;
    }
    FUN_10937e740(&plStack_88,&UNK_10f572291);
    FUN_109388c6c(1,&UNK_10f5721f1,&UNK_10f572283,0x29,&plStack_88);
    if (cStack_71 < '\0') {
      __ZdlPv(plStack_88);
    }
  }
  return (long *)0x0;
}



/* Entry: 10950c110; end: 10950c377;  */

void FUN_10950c110(ulong *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long in_x4;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined4 auStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1095156d8(param_1,(long)param_2 + *(long *)(*param_2 + -0x18));
  if (*(char *)(*(long *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x1e8) + 100) != '\x01') {
    return;
  }
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  lVar8 = *(long *)(in_x4 + 0x20);
  if (*(char *)(lVar8 + 0x214) != '\x01') {
    func_0x000105688514(&UNK_10f5722c1);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10950c348);
    (*pcVar7)();
  }
  if ((*(byte *)(lVar8 + 500) & 1) == 0) {
    fVar10 = 0.5;
    if (*(char *)(lVar8 + 0x1fc) != '\x01') goto LAB_10950c1a0;
    lVar9 = 0xc;
  }
  else {
    lVar9 = 4;
  }
  fVar10 = *(float *)(lVar8 + 0x1ec + lVar9);
LAB_10950c1a0:
  if (*(char *)(lVar8 + 0x211) == '\x01') {
    lVar9 = 4;
    if (*(char *)(lVar8 + 0x210) != *(char *)(lVar8 + 0x208)) {
      lVar9 = 0;
    }
  }
  else {
    lVar9 = 0xc;
  }
  lVar2 = 8;
  if (*(float *)(lVar8 + 0x200 + lVar9) <= fVar10) {
    lVar2 = 9;
  }
  bVar4 = *(byte *)(lVar8 + 0x200 + lVar2);
  *(ushort *)(lVar8 + 0x210) = bVar4 | 0x100;
  if ((bVar4 & 1) == 0) {
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_50 = (ulong)&uStack_90 | 8;
    iVar3 = *(int *)((long)param_1 + 4);
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_58 = param_1[7];
    uStack_60 = param_1[6];
    uStack_40 = 0;
    uStack_38 = 0;
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      iVar3 = *(int *)((long)param_1 + 4);
    }
    puStack_48 = &uStack_40;
    if (iVar3 < 3) {
      uStack_40 = *(undefined8 *)param_1[9];
      uStack_38 = ((undefined8 *)param_1[9])[1];
    }
    else {
      uStack_90 = uStack_90 & 0xffffffff;
      func_0x000109a84868(&uStack_90,param_1);
    }
    auStack_a8[0] = 0x1010000;
    puStack_b8 = &uStack_90;
    uStack_98 = 0;
    auStack_c0[0] = 0x2010000;
    uStack_b0 = 0;
    puStack_a0 = puStack_b8;
    FUN_109a491e0(auStack_a8,auStack_c0,1);
    FUN_109502ecc(param_1,&uStack_90,(char)param_1[0xc]);
    *(undefined1 *)((long)param_1 + 0xe4) = 1;
    if (uStack_58 != 0) {
      piVar1 = (int *)(uStack_58 + 0x14);
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
        func_0x000109a848d4(&uStack_90);
      }
    }
    uStack_58 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (0 < uStack_90._4_4_) {
      lVar8 = 0;
      do {
        *(undefined4 *)(uStack_50 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < uStack_90._4_4_);
    }
    if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
      _free(puStack_48[-1]);
    }
  }
  return;
}



/* Entry: 10950c378; end: 10950c387;  */

void FUN_10950c378(ulong *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long in_x4;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined4 auStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_2 = (long *)((long)param_2 + *(long *)(*param_2 + -0x58));
  FUN_1095156d8(param_1,(long)param_2 + *(long *)(*param_2 + -0x18));
  if (*(char *)(*(long *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x1e8) + 100) != '\x01') {
    return;
  }
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  lVar8 = *(long *)(in_x4 + 0x20);
  if (*(char *)(lVar8 + 0x214) != '\x01') {
    func_0x000105688514(&UNK_10f5722c1);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10950c348);
    (*pcVar7)();
  }
  if ((*(byte *)(lVar8 + 500) & 1) == 0) {
    fVar10 = 0.5;
    if (*(char *)(lVar8 + 0x1fc) != '\x01') goto LAB_10950c1a0;
    lVar9 = 0xc;
  }
  else {
    lVar9 = 4;
  }
  fVar10 = *(float *)(lVar8 + 0x1ec + lVar9);
LAB_10950c1a0:
  if (*(char *)(lVar8 + 0x211) == '\x01') {
    lVar9 = 4;
    if (*(char *)(lVar8 + 0x210) != *(char *)(lVar8 + 0x208)) {
      lVar9 = 0;
    }
  }
  else {
    lVar9 = 0xc;
  }
  lVar2 = 8;
  if (*(float *)(lVar8 + 0x200 + lVar9) <= fVar10) {
    lVar2 = 9;
  }
  bVar4 = *(byte *)(lVar8 + 0x200 + lVar2);
  *(ushort *)(lVar8 + 0x210) = bVar4 | 0x100;
  if ((bVar4 & 1) == 0) {
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_50 = (ulong)&uStack_90 | 8;
    iVar3 = *(int *)((long)param_1 + 4);
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_58 = param_1[7];
    uStack_60 = param_1[6];
    uStack_40 = 0;
    uStack_38 = 0;
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      iVar3 = *(int *)((long)param_1 + 4);
    }
    puStack_48 = &uStack_40;
    if (iVar3 < 3) {
      uStack_40 = *(undefined8 *)param_1[9];
      uStack_38 = ((undefined8 *)param_1[9])[1];
    }
    else {
      uStack_90 = uStack_90 & 0xffffffff;
      func_0x000109a84868(&uStack_90,param_1);
    }
    auStack_a8[0] = 0x1010000;
    puStack_b8 = &uStack_90;
    uStack_98 = 0;
    auStack_c0[0] = 0x2010000;
    uStack_b0 = 0;
    puStack_a0 = puStack_b8;
    FUN_109a491e0(auStack_a8,auStack_c0,1);
    FUN_109502ecc(param_1,&uStack_90,(char)param_1[0xc]);
    *(undefined1 *)((long)param_1 + 0xe4) = 1;
    if (uStack_58 != 0) {
      piVar1 = (int *)(uStack_58 + 0x14);
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
        func_0x000109a848d4(&uStack_90);
      }
    }
    uStack_58 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (0 < uStack_90._4_4_) {
      lVar8 = 0;
      do {
        *(undefined4 *)(uStack_50 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < uStack_90._4_4_);
    }
    if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
      _free(puStack_48[-1]);
    }
  }
  return;
}



/* Entry: 10950c388; end: 10950c5a3;  */

void FUN_10950c388(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  undefined4 auStack_60 [2];
  long lStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_3 + 0xe4) == '\x01') {
    lVar8 = *(long *)(param_2 + 0x20);
    for (plVar1 = *(long **)(lVar8 + 0x50); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      *(float *)(plVar1 + 5) = 1.0 - *(float *)(plVar1 + 5);
    }
    *(float *)(lVar8 + 0x20) = (1.0 - *(float *)(lVar8 + 0x20)) - *(float *)(lVar8 + 0x28);
    for (plVar1 = *(long **)(lVar8 + 200); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      *(float *)(plVar1 + 5) = -*(float *)(plVar1 + 5);
    }
    if (*(long *)(lVar8 + 0x118) != 0) {
      uVar2 = (ulong)*(uint *)(lVar8 + 0x10c);
      if ((int)*(uint *)(lVar8 + 0x10c) < 3) {
        lVar3 = (long)*(int *)(lVar8 + 0x114) * (long)*(int *)(lVar8 + 0x110);
      }
      else {
        lVar3 = 1;
        piVar5 = *(int **)(lVar8 + 0x148);
        do {
          lVar3 = lVar3 * *piVar5;
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 1;
        } while (uVar2 != 0);
      }
      if (lVar3 != 0) {
        lStack_58 = lVar8 + 0x108;
        uStack_38 = 0;
        auStack_48[0] = 0x1010000;
        auStack_60[0] = 0x2010000;
        uStack_50 = 0;
        lStack_40 = lStack_58;
        FUN_109a491e0(auStack_48,auStack_60,1);
      }
    }
    if (*(long *)(lVar8 + 0x178) != 0) {
      uVar2 = (ulong)*(uint *)(lVar8 + 0x16c);
      if ((int)*(uint *)(lVar8 + 0x16c) < 3) {
        lVar3 = (long)*(int *)(lVar8 + 0x174) * (long)*(int *)(lVar8 + 0x170);
      }
      else {
        lVar3 = 1;
        piVar5 = *(int **)(lVar8 + 0x1a8);
        do {
          lVar3 = lVar3 * *piVar5;
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 1;
        } while (uVar2 != 0);
      }
      if (lVar3 != 0) {
        lStack_58 = lVar8 + 0x168;
        uStack_38 = 0;
        auStack_48[0] = 0x1010000;
        auStack_60[0] = 0x2010000;
        uStack_50 = 0;
        lStack_40 = lStack_58;
        FUN_109a491e0(auStack_48,auStack_60,1);
        iVar4 = *(int *)(lVar8 + 0x170);
        if (0 < iVar4) {
          lVar3 = 0;
          plVar1 = *(long **)(lVar8 + 0x1b0);
          iVar6 = *(int *)(lVar8 + 0x174);
          do {
            if (0 < iVar6) {
              iVar4 = 0;
              pbVar7 = (byte *)(*(long *)(lVar8 + 0x178) + *plVar1 * lVar3);
              do {
                *pbVar7 = ~*pbVar7;
                plVar1 = *(long **)(lVar8 + 0x1b0);
                pbVar7 = pbVar7 + plVar1[1];
                iVar4 = iVar4 + 1;
                iVar6 = *(int *)(lVar8 + 0x174);
              } while (iVar4 < iVar6);
              iVar4 = *(int *)(lVar8 + 0x170);
            }
            lVar3 = lVar3 + 1;
          } while (lVar3 < iVar4);
        }
      }
    }
    if ((*(char *)(lVar8 + 0x214) == '\x01') && (*(char *)(lVar8 + 500) == '\x01')) {
      *(float *)(lVar8 + 0x1f0) = 1.0 - *(float *)(lVar8 + 0x1f0);
      *(undefined1 *)(lVar8 + 500) = 1;
    }
  }
  FUN_10951613c((long)param_1 + *(long *)(*param_1 + -0x18),param_2,param_3);
  return;
}



/* Entry: 10950c5a4; end: 10950c5b3;  */

void FUN_10950c5a4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  undefined4 auStack_60 [2];
  long lStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x60));
  if (*(char *)(param_3 + 0xe4) == '\x01') {
    lVar8 = *(long *)(param_2 + 0x20);
    for (plVar1 = *(long **)(lVar8 + 0x50); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      *(float *)(plVar1 + 5) = 1.0 - *(float *)(plVar1 + 5);
    }
    *(float *)(lVar8 + 0x20) = (1.0 - *(float *)(lVar8 + 0x20)) - *(float *)(lVar8 + 0x28);
    for (plVar1 = *(long **)(lVar8 + 200); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      *(float *)(plVar1 + 5) = -*(float *)(plVar1 + 5);
    }
    if (*(long *)(lVar8 + 0x118) != 0) {
      uVar2 = (ulong)*(uint *)(lVar8 + 0x10c);
      if ((int)*(uint *)(lVar8 + 0x10c) < 3) {
        lVar3 = (long)*(int *)(lVar8 + 0x114) * (long)*(int *)(lVar8 + 0x110);
      }
      else {
        lVar3 = 1;
        piVar5 = *(int **)(lVar8 + 0x148);
        do {
          lVar3 = lVar3 * *piVar5;
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 1;
        } while (uVar2 != 0);
      }
      if (lVar3 != 0) {
        lStack_58 = lVar8 + 0x108;
        uStack_38 = 0;
        auStack_48[0] = 0x1010000;
        auStack_60[0] = 0x2010000;
        uStack_50 = 0;
        lStack_40 = lStack_58;
        FUN_109a491e0(auStack_48,auStack_60,1);
      }
    }
    if (*(long *)(lVar8 + 0x178) != 0) {
      uVar2 = (ulong)*(uint *)(lVar8 + 0x16c);
      if ((int)*(uint *)(lVar8 + 0x16c) < 3) {
        lVar3 = (long)*(int *)(lVar8 + 0x174) * (long)*(int *)(lVar8 + 0x170);
      }
      else {
        lVar3 = 1;
        piVar5 = *(int **)(lVar8 + 0x1a8);
        do {
          lVar3 = lVar3 * *piVar5;
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 1;
        } while (uVar2 != 0);
      }
      if (lVar3 != 0) {
        lStack_58 = lVar8 + 0x168;
        uStack_38 = 0;
        auStack_48[0] = 0x1010000;
        auStack_60[0] = 0x2010000;
        uStack_50 = 0;
        lStack_40 = lStack_58;
        FUN_109a491e0(auStack_48,auStack_60,1);
        iVar4 = *(int *)(lVar8 + 0x170);
        if (0 < iVar4) {
          lVar3 = 0;
          plVar1 = *(long **)(lVar8 + 0x1b0);
          iVar6 = *(int *)(lVar8 + 0x174);
          do {
            if (0 < iVar6) {
              iVar4 = 0;
              pbVar7 = (byte *)(*(long *)(lVar8 + 0x178) + *plVar1 * lVar3);
              do {
                *pbVar7 = ~*pbVar7;
                plVar1 = *(long **)(lVar8 + 0x1b0);
                pbVar7 = pbVar7 + plVar1[1];
                iVar4 = iVar4 + 1;
                iVar6 = *(int *)(lVar8 + 0x174);
              } while (iVar4 < iVar6);
              iVar4 = *(int *)(lVar8 + 0x170);
            }
            lVar3 = lVar3 + 1;
          } while (lVar3 < iVar4);
        }
      }
    }
    if ((*(char *)(lVar8 + 0x214) == '\x01') && (*(char *)(lVar8 + 500) == '\x01')) {
      *(float *)(lVar8 + 0x1f0) = 1.0 - *(float *)(lVar8 + 0x1f0);
      *(undefined1 *)(lVar8 + 500) = 1;
    }
  }
  FUN_10951613c((long)param_1 + *(long *)(*param_1 + -0x18),param_2,param_3);
  return;
}



/* Entry: 10950c5b4; end: 10950c603;  */

long FUN_10950c5b4(long param_1)

{
  FUN_109510978(param_1 + 8);
  return param_1;
}



/* Entry: 10950c604; end: 10950c617;  */

undefined8 * FUN_10950c604(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lStack_28;
  
  lVar7 = *(long *)(*param_1 + -0x18);
  puVar1 = (undefined8 *)((long)param_1 + lVar7 + 8);
  *puVar1 = &PTR_FUN_110afa1f0;
  if (*(long *)((long)param_1 + lVar7 + 0x1a8) != 0) {
    FUN_1094a310c((long)param_1 + lVar7 + 0x1a8);
  }
  if (*(char *)((long)param_1 + lVar7 + 0x280) == '\x01') {
    func_0x0001094e64a8((long)param_1 + lVar7 + 600);
  }
  lVar5 = *(long *)((long)param_1 + lVar7 + 0x250);
  *(undefined8 *)((long)param_1 + lVar7 + 0x250) = 0;
  if (lVar5 != 0) {
    FUN_10951a24c();
  }
  func_0x0001094d9450((long)param_1 + lVar7 + 0x240);
  plVar6 = *(long **)((long)param_1 + lVar7 + 0x238);
  *(undefined8 *)((long)param_1 + lVar7 + 0x238) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  *(undefined ***)((long)param_1 + lVar7 + 0x218) = &PTR_FUN_110af9720;
  lStack_28 = (long)param_1 + lVar7 + 0x220;
  FUN_1094ff084(&lStack_28);
  func_0x000109503bd4((long)param_1 + lVar7 + 0x208);
  plVar6 = *(long **)((long)param_1 + lVar7 + 0x200);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = *(long **)((long)param_1 + lVar7 + 0x1f0);
  *(undefined8 *)((long)param_1 + lVar7 + 0x1f0) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  __ZNSt3__15mutexD1Ev((long)param_1 + lVar7 + 0x1b0);
  FUN_109476864((long)param_1 + lVar7 + 0x1a8,0);
  FUN_1095173a8((long)param_1 + lVar7 + 0x180);
  lStack_28 = (long)param_1 + lVar7 + 0x168;
  FUN_1093702c4(&lStack_28);
  lStack_28 = (long)param_1 + lVar7 + 0x130;
  FUN_1094d8bdc(&lStack_28);
  func_0x00010951741c((long)param_1 + lVar7 + 0x118);
  plVar6 = *(long **)((long)param_1 + lVar7 + 0x110);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_1094d92f0((long)param_1 + lVar7 + 0x40);
  lStack_28 = (long)param_1 + lVar7 + 0x28;
  FUN_109500848(&lStack_28);
  if (*(long *)((long)param_1 + lVar7 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar1;
}



/* Entry: 10950c618; end: 10950c647;  */

void FUN_10950c618(long *param_1)

{
  long lVar1;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_109510978(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10950c648; end: 10950c64b;  */

void FUN_10950c648(void)

{
  return;
}



/* Entry: 10950c64c; end: 10950c6c7;  */

void FUN_10950c64c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x100;
  __Znwm();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  *puVar1 = &PTR_FUN_110af9f50;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1f] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10950c6c8; end: 10950c6cb;  */

undefined8 * FUN_10950c6c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9f50;
  FUN_10950c748(param_1 + 0x1a);
  FUN_10950c8cc(param_1 + 0x14);
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  FUN_1094fb118(param_1 + 0xf);
  func_0x00010950ca5c(param_1 + 0xd);
  func_0x00010950cab4(param_1 + 6);
  FUN_109503e90(param_1 + 4);
  return param_1;
}



/* Entry: 10950c6cc; end: 10950c6df;  */

void FUN_10950c6cc(void)

{
  FUN_10950c6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10950c6e0; end: 10950c747;  */

undefined8 * FUN_10950c6e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9f50;
  FUN_10950c748(param_1 + 0x1a);
  FUN_10950c8cc(param_1 + 0x14);
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  FUN_1094fb118(param_1 + 0xf);
  func_0x00010950ca5c(param_1 + 0xd);
  func_0x00010950cab4(param_1 + 6);
  FUN_109503e90(param_1 + 4);
  return param_1;
}



/* Entry: 10950c748; end: 10950c87f;  */

long * FUN_10950c748(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = puVar3;
  if ((undefined8 *)param_1[2] != puVar3) {
    uVar2 = param_1[4];
    plVar5 = puVar3 + uVar2 / 0x66;
    lVar1 = *plVar5 + (uVar2 % 0x66) * 0x28;
    lVar6 = puVar3[(param_1[5] + uVar2) / 0x66] + ((param_1[5] + uVar2) % 0x66) * 0x28;
    puVar4 = (undefined8 *)param_1[2];
    if (lVar1 != lVar6) {
      do {
        func_0x0001094cffd4();
        lVar1 = lVar1 + 0x28;
        if (lVar1 - *plVar5 == 0xff0) {
          plVar5 = plVar5 + 1;
          lVar1 = *plVar5;
        }
      } while (lVar1 != lVar6);
      puVar3 = (undefined8 *)param_1[1];
      puVar4 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar1 = (long)puVar4 - (long)puVar3;
  while (uVar2 = lVar1 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar3);
    puVar4 = (undefined8 *)param_1[2];
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
    lVar1 = (long)puVar4 - (long)puVar3;
  }
  if (uVar2 == 1) {
    lVar1 = 0x33;
  }
  else {
    if (uVar2 != 2) goto LAB_10950c860;
    lVar1 = 0x66;
  }
  param_1[4] = lVar1;
LAB_10950c860:
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10950c880; end: 10950c8cb;  */

long * FUN_10950c880(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10950c8cc; end: 10950ca0f;  */

long * FUN_10950c8cc(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = puVar3;
  if ((undefined8 *)param_1[2] != puVar3) {
    uVar1 = param_1[4];
    plVar5 = puVar3 + uVar1 / 0x24;
    lVar2 = *plVar5 + (uVar1 % 0x24) * 0x70;
    lVar6 = puVar3[(param_1[5] + uVar1) / 0x24] + ((param_1[5] + uVar1) % 0x24) * 0x70;
    puVar4 = (undefined8 *)param_1[2];
    if (lVar2 != lVar6) {
      do {
        func_0x0001094fa0e8(lVar2);
        lVar2 = lVar2 + 0x70;
        if (lVar2 - *plVar5 == 0xfc0) {
          plVar5 = plVar5 + 1;
          lVar2 = *plVar5;
        }
      } while (lVar2 != lVar6);
      puVar3 = (undefined8 *)param_1[1];
      puVar4 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar2 = (long)puVar4 - (long)puVar3;
  while (uVar1 = lVar2 >> 3, 2 < uVar1) {
    __ZdlPv(*puVar3);
    puVar4 = (undefined8 *)param_1[2];
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
    lVar2 = (long)puVar4 - (long)puVar3;
  }
  if (uVar1 == 1) {
    lVar2 = 0x12;
  }
  else {
    if (uVar1 != 2) goto LAB_10950c9ec;
    lVar2 = 0x24;
  }
  param_1[4] = lVar2;
LAB_10950c9ec:
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  lVar2 = param_1[2];
  if (lVar2 != param_1[1]) {
    param_1[2] = lVar2 + ((param_1[1] - lVar2) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10950ca10; end: 10950cafb;  */

long * FUN_10950ca10(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10950cafc; end: 10950cb0b;  */

void FUN_10950cafc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9f80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10950cb0c; end: 10950cb2b;  */

void FUN_10950cb0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9f80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10950cb2c; end: 10950cb3b;  */

void FUN_10950cb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010950cb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10950cb3c; end: 10950ccef;  */

undefined8 * FUN_10950cb3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110af76e8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f000000;
  *(undefined8 *)((long)param_1 + 0x14) = 0x10000000100;
  func_0x000107c31940(param_1 + 4,&UNK_10f5722f7);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  plVar2 = param_1 + 0xb;
  *plVar2 = 0;
  puStack_58 = (undefined8 *)0x42ea000042f60000;
  uStack_50 = 0x42d00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_1093c71a0(plVar2,&puStack_58,auStack_4c,3);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3c8b4396;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x13) = 1;
  puVar1 = param_1 + 0x14;
  func_0x000107c31940(puVar1,"data");
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x2f] = 1;
  param_1[0x30] = 0x3f000000be4ccccd;
  param_1[0x31] = 0x323e4ccccd;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  puStack_58 = param_1 + 0xf;
  func_0x000104c607c8(&puStack_58);
  if (*plVar2 != 0) {
    param_1[0xc] = *plVar2;
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  __Unwind_Resume();
  *puVar1 = &PTR_FUN_110af9fd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar1;
}



/* Entry: 10950ccf0; end: 10950ccff;  */

void FUN_10950ccf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9fd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10950cd00; end: 10950cd1f;  */

void FUN_10950cd00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9fd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10950cd20; end: 10950cd2f;  */

void FUN_10950cd20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010950cd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10950cd30; end: 10950ce0f;  */

undefined8 * FUN_10950cd30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afa020;
  func_0x0001094d9450(param_1 + 5);
  *param_1 = &PTR_FUN_110af9a78;
  FUN_109503c64(param_1 + 1);
  return param_1;
}



/* Entry: 10950ce10; end: 10950cf77;  */

void FUN_10950ce10(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  double dVar7;
  double dVar8;
  undefined8 *****pppppuStack_58;
  undefined8 *****pppppuStack_50;
  undefined8 *****pppppuStack_48;
  
  pppppuStack_58 = (undefined8 ******)0x0;
  pppppuStack_50 = (undefined8 ******)0x0;
  pppppuStack_48 = (undefined8 ******)0x0;
  FUN_1093f458c(&pppppuStack_58,(param_5[1] - *param_5 >> 3) * -0x5555555555555555);
  lVar1 = *param_5;
  lVar2 = param_5[1];
  while( true ) {
    if (lVar1 == lVar2) {
      if (pppppuStack_58 != pppppuStack_50) {
        dVar8 = *(double *)(param_2 + 0x10);
        dVar7 = *(double *)(param_2 + 8);
        ppppppuVar5 = (undefined8 ******)pppppuStack_58;
        do {
          ppppppuVar6 = ppppppuVar5 + 1;
          *ppppppuVar5 = (undefined8 *****)
                         CONCAT44((float)(dVar8 * (double)(float)((ulong)*ppppppuVar5 >> 0x20)),
                                  (float)(dVar7 * (double)SUB84(*ppppppuVar5,0)));
          ppppppuVar5 = ppppppuVar6;
        } while (ppppppuVar6 != (undefined8 ******)pppppuStack_50);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_1094f91b4(param_4,&pppppuStack_58,param_1);
      if ((undefined8 ******)pppppuStack_58 != (undefined8 ******)0x0) {
        pppppuStack_50 = pppppuStack_58;
        __ZdlPv();
      }
      return;
    }
    lVar4 = param_3 + 0x40;
    FUN_1094e1944(lVar4,lVar1);
    if (lVar4 == 0) break;
    if (pppppuStack_50 < pppppuStack_48) {
      ppppppuVar5 = (undefined8 ******)(pppppuStack_50 + 1);
      *pppppuStack_50 = *(undefined8 ******)(lVar4 + 0x28);
    }
    else {
      ppppppuVar5 = &pppppuStack_58;
      FUN_1092cbf20(ppppppuVar5,lVar4 + 0x28);
    }
    lVar1 = lVar1 + 0x18;
    pppppuStack_50 = ppppppuVar5;
  }
  FUN_109262df8(&UNK_10f639994);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10950cf3c);
  (*pcVar3)();
}



/* Entry: 10950cf78; end: 10950d0cb;  */

void FUN_10950cf78(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar8 = *(long *)(*param_2 + -0x18);
  puVar9 = *(undefined8 **)((long)param_2 + lVar8 + 0x20);
  lVar10 = *(long *)((long)param_2 + lVar8 + 0x28);
  if ((ulong)((lVar10 - (long)puVar9 >> 4) * 0x4ec4ec4ec4ec4ec5) < 2) {
    uVar7 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    puVar3 = (undefined8 *)(lVar10 + -0xd0);
    if (*(int *)((long)param_2 + lVar8 + 400) != 0) {
      puVar3 = puVar9;
    }
    uVar12 = *puVar3;
    uVar14 = puVar3[3];
    uVar13 = puVar3[2];
    iVar4 = *(int *)((long)puVar3 + 4);
    param_1[1] = puVar3[1];
    *param_1 = uVar12;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    uVar12 = puVar3[4];
    param_1[5] = puVar3[5];
    param_1[4] = uVar12;
    lVar10 = puVar3[7];
    uVar12 = puVar3[6];
    param_1[7] = puVar3[7];
    param_1[6] = uVar12;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      iVar4 = *(int *)((long)puVar3 + 4);
    }
    if (iVar4 < 3) {
      puVar9 = (undefined8 *)puVar3[9];
      puVar11 = (undefined8 *)param_1[9];
      *puVar11 = *puVar9;
      puVar11[1] = puVar9[1];
    }
    else {
      *(undefined4 *)((long)param_1 + 4) = 0;
      func_0x000109a84868(param_1,puVar3);
    }
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(puVar3 + 0xc);
    lVar10 = puVar3[0xe];
    uVar12 = puVar3[0xd];
    param_1[0xe] = puVar3[0xe];
    param_1[0xd] = uVar12;
    if (lVar10 != 0) {
      plVar2 = (long *)(lVar10 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar13 = puVar3[0x10];
    uVar12 = puVar3[0xf];
    uVar14 = puVar3[0x11];
    param_1[0x12] = puVar3[0x12];
    param_1[0x11] = uVar14;
    param_1[0x10] = uVar13;
    param_1[0xf] = uVar12;
    uVar13 = puVar3[0x14];
    uVar12 = puVar3[0x13];
    uVar15 = puVar3[0x16];
    uVar14 = puVar3[0x15];
    uVar17 = puVar3[0x18];
    uVar16 = puVar3[0x17];
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(puVar3 + 0x19);
    param_1[0x18] = uVar17;
    param_1[0x17] = uVar16;
    param_1[0x16] = uVar15;
    param_1[0x15] = uVar14;
    param_1[0x14] = uVar13;
    param_1[0x13] = uVar12;
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0x1a) = uVar7;
  return;
}



/* Entry: 10950d0cc; end: 10950d683;  */

long * FUN_10950d0cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long **pplVar21;
  long *unaff_x25;
  long *plVar22;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_98;
  long *plStack_90;
  long *plStack_80;
  long **pplStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  iVar7 = (int)param_1 + (int)*(undefined8 *)(*param_1 + -0x18);
  FUN_109511544();
  if (iVar7 == 0) {
    plVar19 = (long *)0x0;
  }
  else {
    plVar19 = param_1 + 6;
    lVar11 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x1e8);
    plStack_a8 = *(long **)(lVar11 + 0x158);
    uStack_b0 = *(undefined8 *)(lVar11 + 0x150);
    if (*(long *)(lVar11 + 0x158) != 0) {
      plVar1 = (long *)(*(long *)(lVar11 + 0x158) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_109506a68(plVar19,&uStack_b0,param_4);
    plVar1 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar2 = plStack_a8 + 1;
      do {
        lVar11 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (((int)plVar19 != 0) && ((char)param_1[0x1b] == '\x01')) {
      FUN_1094a72dc(&plStack_98,param_1 + 0x19);
      if (plStack_98 != plStack_90) {
        plVar1 = param_1 + 1;
        plVar2 = param_1 + 3;
        plVar20 = plStack_98;
        do {
          FUN_1094a68cc(&pplStack_78,param_1 + 0x19,plVar20);
          (**(code **)(*param_1 + 0x38))(&plStack_80,param_1,&pplStack_78);
          FUN_109380f8c(&pplStack_78);
          if (plStack_80 != (long *)0x0) {
            plVar13 = plVar1;
            func_0x000107c31944(plVar1,plVar20);
            plVar22 = (long *)param_1[2];
            if (plVar22 != (long *)0x0) {
              uVar18 = (long)plVar22 - 1;
              if (((ulong)plVar22 & uVar18) == 0) {
                unaff_x25 = (long *)(uVar18 & (ulong)plVar13);
              }
              else {
                unaff_x25 = plVar13;
                if (plVar22 <= plVar13) {
                  uVar5 = 0;
                  if (plVar22 != (long *)0x0) {
                    uVar5 = (ulong)plVar13 / (ulong)plVar22;
                  }
                  unaff_x25 = (long *)((long)plVar13 - uVar5 * (long)plVar22);
                }
              }
              puVar9 = *(undefined8 **)(*plVar1 + (long)unaff_x25 * 8);
              if (puVar9 != (undefined8 *)0x0) {
                for (pplVar21 = (long **)*puVar9; pplVar21 != (long **)0x0;
                    pplVar21 = (long **)*pplVar21) {
                  plVar10 = pplVar21[1];
                  if (plVar10 == plVar13) {
                    plVar10 = plVar1;
                    func_0x000104c4fbc4(plVar1,pplVar21 + 2,plVar20);
                    if (((ulong)plVar10 & 1) != 0) goto LAB_10950d534;
                  }
                  else {
                    if (((ulong)plVar22 & uVar18) == 0) {
                      plVar10 = (long *)((ulong)plVar10 & uVar18);
                    }
                    else if (plVar22 <= plVar10) {
                      uVar5 = 0;
                      if (plVar22 != (long *)0x0) {
                        uVar5 = (ulong)plVar10 / (ulong)plVar22;
                      }
                      plVar10 = (long *)((long)plVar10 - uVar5 * (long)plVar22);
                    }
                    if (plVar10 != unaff_x25) break;
                  }
                }
              }
            }
            pplVar21 = (long **)0x30;
            __Znwm();
            uStack_68 = 0;
            *pplVar21 = (long *)0x0;
            pplVar21[1] = plVar13;
            pplStack_78 = pplVar21;
            plStack_70 = plVar1;
            if (*(char *)((long)plVar20 + 0x17) < '\0') {
              func_0x000107c3192c(pplVar21 + 2,*plVar20,plVar20[1]);
            }
            else {
              plVar12 = (long *)plVar20[1];
              plVar10 = (long *)*plVar20;
              pplVar21[4] = (long *)plVar20[2];
              pplVar21[3] = plVar12;
              pplVar21[2] = plVar10;
            }
            pplVar21[5] = (long *)0x0;
            uStack_68 = CONCAT71(uStack_68._1_7_,1);
            if ((plVar22 == (long *)0x0) ||
               (*(float *)(param_1 + 5) * (float)plVar22 < (float)(param_1[4] + 1))) {
              uVar18 = 1;
              if ((long *)0x2 < plVar22) {
                uVar18 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
              }
              plVar10 = (long *)(uVar18 | (long)plVar22 << 1);
              plVar22 = (long *)(long)((float)(param_1[4] + 1) / *(float *)(param_1 + 5));
              if (plVar10 <= plVar22) {
                plVar10 = plVar22;
              }
              if ((long)plVar10 - 1U == 0) {
                plVar10 = (long *)0x2;
              }
              else if (((ulong)plVar10 & (long)plVar10 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
              }
              plVar22 = (long *)param_1[2];
              if (plVar22 < plVar10) {
LAB_10950d354:
                if ((ulong)plVar10 >> 0x3d != 0) {
                  func_0x000104c4f740();
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10950d610);
                  (*pcVar6)();
                }
                lVar11 = (long)plVar10 << 3;
                __Znwm();
                lVar8 = *plVar1;
                *plVar1 = lVar11;
                if (lVar8 != 0) {
                  __ZdlPv();
                }
                plVar22 = (long *)0x0;
                param_1[2] = (long)plVar10;
                do {
                  *(undefined8 *)(*plVar1 + (long)plVar22 * 8) = 0;
                  plVar22 = (long *)((long)plVar22 + 1);
                } while (plVar10 != plVar22);
                plVar12 = (long *)*plVar2;
                plVar22 = plVar10;
                if (plVar12 != (long *)0x0) {
                  plVar14 = (long *)plVar12[1];
                  uVar18 = (long)plVar10 - 1;
                  if (((ulong)plVar10 & uVar18) == 0) {
                    plVar14 = (long *)((ulong)plVar14 & uVar18);
                  }
                  else if (plVar10 <= plVar14) {
                    uVar5 = 0;
                    if (plVar10 != (long *)0x0) {
                      uVar5 = (ulong)plVar14 / (ulong)plVar10;
                    }
                    plVar14 = (long *)((long)plVar14 - uVar5 * (long)plVar10);
                  }
                  *(long **)(*plVar1 + (long)plVar14 * 8) = plVar2;
                  plVar15 = (long *)*plVar12;
                  while (plVar15 != (long *)0x0) {
                    plVar17 = (long *)plVar15[1];
                    if (((ulong)plVar10 & uVar18) == 0) {
                      plVar17 = (long *)((ulong)plVar17 & uVar18);
                    }
                    else if (plVar10 <= plVar17) {
                      uVar5 = 0;
                      if (plVar10 != (long *)0x0) {
                        uVar5 = (ulong)plVar17 / (ulong)plVar10;
                      }
                      plVar17 = (long *)((long)plVar17 - uVar5 * (long)plVar10);
                    }
                    plVar16 = plVar15;
                    if (plVar17 != plVar14) {
                      lVar11 = *plVar1;
                      if (*(long *)(lVar11 + (long)plVar17 * 8) == 0) {
                        *(long **)(lVar11 + (long)plVar17 * 8) = plVar12;
                        plVar14 = plVar17;
                      }
                      else {
                        *plVar12 = *plVar15;
                        *plVar15 = **(undefined8 **)(lVar11 + (long)plVar17 * 8);
                        **(long **)(lVar11 + (long)plVar17 * 8) = (long)plVar15;
                        plVar16 = plVar12;
                      }
                    }
                    plVar12 = plVar16;
                    plVar15 = (long *)*plVar16;
                  }
                }
              }
              else if (plVar10 < plVar22) {
                plVar12 = (long *)(long)((float)(ulong)param_1[4] / *(float *)(param_1 + 5));
                if ((plVar22 < (long *)0x3) || (((ulong)plVar22 & (long)plVar22 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long *)0x1 < plVar12) {
                  plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
                }
                if (plVar10 <= plVar12) {
                  plVar10 = plVar12;
                }
                if (plVar10 < plVar22) {
                  if (plVar10 != (long *)0x0) goto LAB_10950d354;
                  lVar11 = *plVar1;
                  *plVar1 = 0;
                  if (lVar11 != 0) {
                    __ZdlPv();
                  }
                  param_1[2] = 0;
                  plVar22 = (long *)0x0;
                }
                else {
                  plVar22 = (long *)param_1[2];
                }
              }
              if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
                unaff_x25 = (long *)((long)plVar22 - 1U & (ulong)plVar13);
              }
              else {
                unaff_x25 = plVar13;
                if (plVar22 <= plVar13) {
                  uVar18 = 0;
                  if (plVar22 != (long *)0x0) {
                    uVar18 = (ulong)plVar13 / (ulong)plVar22;
                  }
                  unaff_x25 = (long *)((long)plVar13 - uVar18 * (long)plVar22);
                }
              }
            }
            lVar11 = *plVar1;
            plVar13 = *(long **)(lVar11 + (long)unaff_x25 * 8);
            if (plVar13 == (long *)0x0) {
              *pplVar21 = (long *)*plVar2;
              *plVar2 = (long)pplVar21;
              *(long **)(lVar11 + (long)unaff_x25 * 8) = plVar2;
              if (*pplVar21 != (long *)0x0) {
                plVar13 = (long *)(*pplVar21)[1];
                if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
                  plVar13 = (long *)((ulong)plVar13 & (long)plVar22 - 1U);
                }
                else if (plVar22 <= plVar13) {
                  uVar18 = 0;
                  if (plVar22 != (long *)0x0) {
                    uVar18 = (ulong)plVar13 / (ulong)plVar22;
                  }
                  plVar13 = (long *)((long)plVar13 - uVar18 * (long)plVar22);
                }
                *(long ***)(*plVar1 + (long)plVar13 * 8) = pplVar21;
              }
            }
            else {
              *pplVar21 = (long *)*plVar13;
              *plVar13 = (long)pplVar21;
            }
            param_1[4] = param_1[4] + 1;
LAB_10950d534:
            plVar13 = pplVar21[5];
            pplVar21[5] = plStack_80;
            plStack_80 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x20))();
            }
          }
          plVar20 = plVar20 + 3;
        } while (plVar20 != plStack_90);
      }
      pplStack_78 = &plStack_98;
      func_0x000104c607c8(&pplStack_78);
      plVar19 = (long *)((ulong)plVar19 & 0xffffffff);
    }
  }
  return plVar19;
}



/* Entry: 10950d684; end: 10950d693;  */

long * FUN_10950d684(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long **pplVar21;
  long *unaff_x25;
  long *plVar22;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_98;
  long *plStack_90;
  long *plStack_80;
  long **pplStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x20));
  iVar7 = (int)param_1 + (int)*(undefined8 *)(*param_1 + -0x18);
  FUN_109511544();
  if (iVar7 == 0) {
    plVar19 = (long *)0x0;
  }
  else {
    plVar19 = param_1 + 6;
    lVar11 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x1e8);
    plStack_a8 = *(long **)(lVar11 + 0x158);
    uStack_b0 = *(undefined8 *)(lVar11 + 0x150);
    if (*(long *)(lVar11 + 0x158) != 0) {
      plVar1 = (long *)(*(long *)(lVar11 + 0x158) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_109506a68(plVar19,&uStack_b0,param_4);
    plVar1 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar2 = plStack_a8 + 1;
      do {
        lVar11 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (((int)plVar19 != 0) && ((char)param_1[0x1b] == '\x01')) {
      FUN_1094a72dc(&plStack_98,param_1 + 0x19);
      if (plStack_98 != plStack_90) {
        plVar1 = param_1 + 1;
        plVar2 = param_1 + 3;
        plVar20 = plStack_98;
        do {
          FUN_1094a68cc(&pplStack_78,param_1 + 0x19,plVar20);
          (**(code **)(*param_1 + 0x38))(&plStack_80,param_1,&pplStack_78);
          FUN_109380f8c(&pplStack_78);
          if (plStack_80 != (long *)0x0) {
            plVar13 = plVar1;
            func_0x000107c31944(plVar1,plVar20);
            plVar22 = (long *)param_1[2];
            if (plVar22 != (long *)0x0) {
              uVar18 = (long)plVar22 - 1;
              if (((ulong)plVar22 & uVar18) == 0) {
                unaff_x25 = (long *)(uVar18 & (ulong)plVar13);
              }
              else {
                unaff_x25 = plVar13;
                if (plVar22 <= plVar13) {
                  uVar5 = 0;
                  if (plVar22 != (long *)0x0) {
                    uVar5 = (ulong)plVar13 / (ulong)plVar22;
                  }
                  unaff_x25 = (long *)((long)plVar13 - uVar5 * (long)plVar22);
                }
              }
              puVar9 = *(undefined8 **)(*plVar1 + (long)unaff_x25 * 8);
              if (puVar9 != (undefined8 *)0x0) {
                for (pplVar21 = (long **)*puVar9; pplVar21 != (long **)0x0;
                    pplVar21 = (long **)*pplVar21) {
                  plVar10 = pplVar21[1];
                  if (plVar10 == plVar13) {
                    plVar10 = plVar1;
                    func_0x000104c4fbc4(plVar1,pplVar21 + 2,plVar20);
                    if (((ulong)plVar10 & 1) != 0) goto LAB_10950d534;
                  }
                  else {
                    if (((ulong)plVar22 & uVar18) == 0) {
                      plVar10 = (long *)((ulong)plVar10 & uVar18);
                    }
                    else if (plVar22 <= plVar10) {
                      uVar5 = 0;
                      if (plVar22 != (long *)0x0) {
                        uVar5 = (ulong)plVar10 / (ulong)plVar22;
                      }
                      plVar10 = (long *)((long)plVar10 - uVar5 * (long)plVar22);
                    }
                    if (plVar10 != unaff_x25) break;
                  }
                }
              }
            }
            pplVar21 = (long **)0x30;
            __Znwm();
            uStack_68 = 0;
            *pplVar21 = (long *)0x0;
            pplVar21[1] = plVar13;
            pplStack_78 = pplVar21;
            plStack_70 = plVar1;
            if (*(char *)((long)plVar20 + 0x17) < '\0') {
              func_0x000107c3192c(pplVar21 + 2,*plVar20,plVar20[1]);
            }
            else {
              plVar12 = (long *)plVar20[1];
              plVar10 = (long *)*plVar20;
              pplVar21[4] = (long *)plVar20[2];
              pplVar21[3] = plVar12;
              pplVar21[2] = plVar10;
            }
            pplVar21[5] = (long *)0x0;
            uStack_68 = CONCAT71(uStack_68._1_7_,1);
            if ((plVar22 == (long *)0x0) ||
               (*(float *)(param_1 + 5) * (float)plVar22 < (float)(param_1[4] + 1))) {
              uVar18 = 1;
              if ((long *)0x2 < plVar22) {
                uVar18 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
              }
              plVar10 = (long *)(uVar18 | (long)plVar22 << 1);
              plVar22 = (long *)(long)((float)(param_1[4] + 1) / *(float *)(param_1 + 5));
              if (plVar10 <= plVar22) {
                plVar10 = plVar22;
              }
              if ((long)plVar10 - 1U == 0) {
                plVar10 = (long *)0x2;
              }
              else if (((ulong)plVar10 & (long)plVar10 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
              }
              plVar22 = (long *)param_1[2];
              if (plVar22 < plVar10) {
LAB_10950d354:
                if ((ulong)plVar10 >> 0x3d != 0) {
                  func_0x000104c4f740();
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10950d610);
                  (*pcVar6)();
                }
                lVar11 = (long)plVar10 << 3;
                __Znwm();
                lVar8 = *plVar1;
                *plVar1 = lVar11;
                if (lVar8 != 0) {
                  __ZdlPv();
                }
                plVar22 = (long *)0x0;
                param_1[2] = (long)plVar10;
                do {
                  *(undefined8 *)(*plVar1 + (long)plVar22 * 8) = 0;
                  plVar22 = (long *)((long)plVar22 + 1);
                } while (plVar10 != plVar22);
                plVar12 = (long *)*plVar2;
                plVar22 = plVar10;
                if (plVar12 != (long *)0x0) {
                  plVar14 = (long *)plVar12[1];
                  uVar18 = (long)plVar10 - 1;
                  if (((ulong)plVar10 & uVar18) == 0) {
                    plVar14 = (long *)((ulong)plVar14 & uVar18);
                  }
                  else if (plVar10 <= plVar14) {
                    uVar5 = 0;
                    if (plVar10 != (long *)0x0) {
                      uVar5 = (ulong)plVar14 / (ulong)plVar10;
                    }
                    plVar14 = (long *)((long)plVar14 - uVar5 * (long)plVar10);
                  }
                  *(long **)(*plVar1 + (long)plVar14 * 8) = plVar2;
                  plVar15 = (long *)*plVar12;
                  while (plVar15 != (long *)0x0) {
                    plVar17 = (long *)plVar15[1];
                    if (((ulong)plVar10 & uVar18) == 0) {
                      plVar17 = (long *)((ulong)plVar17 & uVar18);
                    }
                    else if (plVar10 <= plVar17) {
                      uVar5 = 0;
                      if (plVar10 != (long *)0x0) {
                        uVar5 = (ulong)plVar17 / (ulong)plVar10;
                      }
                      plVar17 = (long *)((long)plVar17 - uVar5 * (long)plVar10);
                    }
                    plVar16 = plVar15;
                    if (plVar17 != plVar14) {
                      lVar11 = *plVar1;
                      if (*(long *)(lVar11 + (long)plVar17 * 8) == 0) {
                        *(long **)(lVar11 + (long)plVar17 * 8) = plVar12;
                        plVar14 = plVar17;
                      }
                      else {
                        *plVar12 = *plVar15;
                        *plVar15 = **(undefined8 **)(lVar11 + (long)plVar17 * 8);
                        **(long **)(lVar11 + (long)plVar17 * 8) = (long)plVar15;
                        plVar16 = plVar12;
                      }
                    }
                    plVar12 = plVar16;
                    plVar15 = (long *)*plVar16;
                  }
                }
              }
              else if (plVar10 < plVar22) {
                plVar12 = (long *)(long)((float)(ulong)param_1[4] / *(float *)(param_1 + 5));
                if ((plVar22 < (long *)0x3) || (((ulong)plVar22 & (long)plVar22 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long *)0x1 < plVar12) {
                  plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
                }
                if (plVar10 <= plVar12) {
                  plVar10 = plVar12;
                }
                if (plVar10 < plVar22) {
                  if (plVar10 != (long *)0x0) goto LAB_10950d354;
                  lVar11 = *plVar1;
                  *plVar1 = 0;
                  if (lVar11 != 0) {
                    __ZdlPv();
                  }
                  param_1[2] = 0;
                  plVar22 = (long *)0x0;
                }
                else {
                  plVar22 = (long *)param_1[2];
                }
              }
              if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
                unaff_x25 = (long *)((long)plVar22 - 1U & (ulong)plVar13);
              }
              else {
                unaff_x25 = plVar13;
                if (plVar22 <= plVar13) {
                  uVar18 = 0;
                  if (plVar22 != (long *)0x0) {
                    uVar18 = (ulong)plVar13 / (ulong)plVar22;
                  }
                  unaff_x25 = (long *)((long)plVar13 - uVar18 * (long)plVar22);
                }
              }
            }
            lVar11 = *plVar1;
            plVar13 = *(long **)(lVar11 + (long)unaff_x25 * 8);
            if (plVar13 == (long *)0x0) {
              *pplVar21 = (long *)*plVar2;
              *plVar2 = (long)pplVar21;
              *(long **)(lVar11 + (long)unaff_x25 * 8) = plVar2;
              if (*pplVar21 != (long *)0x0) {
                plVar13 = (long *)(*pplVar21)[1];
                if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
                  plVar13 = (long *)((ulong)plVar13 & (long)plVar22 - 1U);
                }
                else if (plVar22 <= plVar13) {
                  uVar18 = 0;
                  if (plVar22 != (long *)0x0) {
                    uVar18 = (ulong)plVar13 / (ulong)plVar22;
                  }
                  plVar13 = (long *)((long)plVar13 - uVar18 * (long)plVar22);
                }
                *(long ***)(*plVar1 + (long)plVar13 * 8) = pplVar21;
              }
            }
            else {
              *pplVar21 = (long *)*plVar13;
              *plVar13 = (long)pplVar21;
            }
            param_1[4] = param_1[4] + 1;
LAB_10950d534:
            plVar13 = pplVar21[5];
            pplVar21[5] = plStack_80;
            plStack_80 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x20))();
            }
          }
          plVar20 = plVar20 + 3;
        } while (plVar20 != plStack_90);
      }
      pplStack_78 = &plStack_98;
      func_0x000104c607c8(&pplStack_78);
      plVar19 = (long *)((ulong)plVar19 & 0xffffffff);
    }
  }
  return plVar19;
}



/* Entry: 10950d694; end: 10950d84b;  */

void FUN_10950d694(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  float fStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  
  lVar2 = *(long *)(*param_1 + -0x18);
  lVar4 = *(long *)((long)param_1 + lVar2 + 0x20) +
          (long)*(int *)((long)param_1 + lVar2 + 400) * 0xd0;
  if ((((*(long *)(lVar4 + 0x68) != 0) && (*(long *)(param_2 + 0x1c8) != 0)) &&
      (*(char *)((long)param_1 + 0xc1) == '\x01')) && (*(char *)(lVar4 + 0xb8) == '\x01')) {
    FUN_10950d84c(&uStack_b0,*(long *)(lVar4 + 0x68) + 0x130,lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_e0 = uStack_80;
    uStack_d8 = 1;
    plStack_c0 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    lStack_c8 = 0;
    FUN_1093f458c(&lStack_c8,*(undefined8 *)(param_2 + 0x1c8));
    lVar2 = lStack_c8;
    for (plVar5 = *(long **)(param_2 + 0x1c0); lStack_c8 = lVar2, plVar5 != (long *)0x0;
        plVar5 = (long *)*plVar5) {
      FUN_1095108dc(&uStack_70,&uStack_110,plVar5 + 5);
      dStack_50 = (double)fStack_68;
      dStack_60 = (double)(float)uStack_70;
      dStack_58 = (double)(float)((ulong)uStack_70 >> 0x20);
      FUN_1094cf324(&lStack_78,uVar3,&dStack_60);
      if (plStack_c0 < plStack_b8) {
        plVar1 = plStack_c0 + 1;
        *plStack_c0 = lStack_78;
      }
      else {
        plVar1 = &lStack_c8;
        FUN_1092de294(plVar1,&lStack_78);
      }
      lVar2 = lStack_c8;
      plStack_c0 = plVar1;
    }
    FUN_10950d9d0(&uStack_110,lVar2,plStack_c0);
    auVar7._0_8_ = NEON_scvtf(*(undefined8 *)(lVar4 + 8),4);
    auVar7._8_8_ = auVar7._0_8_;
    auVar7 = NEON_rev64(auVar7,4);
    *(float *)(param_2 + 0x14) = (float)uStack_108 / auVar7._8_4_;
    *(float *)(param_2 + 0x18) = (float)((ulong)uStack_108 >> 0x20) / auVar7._12_4_;
    *(float *)(param_2 + 0xc) = (float)uStack_110 / auVar7._0_4_;
    *(float *)(param_2 + 0x10) = (float)((ulong)uStack_110 >> 0x20) / auVar7._4_4_;
    if (lVar2 != 0) {
      plStack_c0 = (long *)lVar2;
      __ZdlPv(lVar2);
    }
    return;
  }
  lVar4 = *(long *)(param_2 + 0x20);
  fVar6 = (float)func_0x0001094cf7e0(lVar4 + 0x20,param_2 + 0xc);
  if (fVar6 < *(float *)(*(long *)((long)param_1 + lVar2 + 0x1e8) + 0x24)) {
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(param_2 + 0xc) = uVar3;
  }
  return;
}



/* Entry: 10950d84c; end: 10950d9cf;  */

void FUN_10950d84c(double *param_1,double *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_130 [64];
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  undefined1 auStack_68 [32];
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  puVar5 = auStack_130;
  lVar4 = 0;
  do {
    lVar7 = 0;
    puVar1 = (undefined4 *)(param_3 + lVar4 * 0x10);
    do {
      iVar6 = (int)lVar7;
      puVar3 = puVar1;
      if (iVar6 == 1) {
        puVar3 = puVar1 + 1;
      }
      puVar2 = puVar1 + 2;
      if (iVar6 != 2) {
        puVar2 = puVar3;
      }
      puVar3 = puVar1 + 3;
      if (iVar6 != 3) {
        puVar3 = puVar2;
      }
      *(undefined4 *)(puVar5 + lVar7 * 4) = *puVar3;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 4);
    lVar4 = lVar4 + 1;
    puVar5 = puVar5 + 0x10;
  } while (lVar4 != 4);
  dStack_f0 = (double)(float)auStack_130._0_8_;
  dStack_e8 = (double)SUB84(auStack_130._0_8_,4);
  dStack_e0 = (double)(float)auStack_130._8_8_;
  dStack_d8 = (double)SUB84(auStack_130._8_8_,4);
  dStack_d0 = (double)(float)auStack_130._16_8_;
  dStack_c8 = (double)SUB84(auStack_130._16_8_,4);
  dStack_c0 = (double)(float)auStack_130._24_8_;
  dStack_b8 = (double)SUB84(auStack_130._24_8_,4);
  dStack_b0 = (double)(float)auStack_130._32_8_;
  dStack_a8 = (double)SUB84(auStack_130._32_8_,4);
  dStack_a0 = (double)(float)auStack_130._40_8_;
  dStack_98 = (double)SUB84(auStack_130._40_8_,4);
  dStack_90 = (double)(float)auStack_130._48_8_;
  dStack_88 = (double)SUB84(auStack_130._48_8_,4);
  dStack_80 = (double)(float)auStack_130._56_8_;
  dStack_78 = (double)SUB84(auStack_130._56_8_,4);
  FUN_10950ff9c(auStack_68,&dStack_f0);
  dVar8 = *param_2;
  dVar10 = param_2[3];
  dVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = dVar8;
  param_1[3] = dVar10;
  param_1[2] = dVar9;
  dVar8 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = dVar8;
  param_1[6] = param_2[6];
  dVar9 = param_1[2];
  dVar10 = param_1[3];
  dVar13 = *param_1;
  dVar12 = param_1[1];
  dVar11 = -(dVar9 * dStack_40) + dStack_38 * dVar12;
  dVar14 = -(dVar13 * dStack_38) + dStack_48 * dVar9;
  dVar8 = -(dVar12 * dStack_48) + dStack_40 * dVar13;
  dVar11 = dVar11 + dVar11;
  dVar14 = dVar14 + dVar14;
  dVar8 = dVar8 + dVar8;
  param_1[5] = param_1[5] + dStack_40 + dVar14 * dVar10 + -(dVar13 * dVar8) + dVar11 * dVar9;
  param_1[4] = param_1[4] + dStack_48 + dVar11 * dVar10 + -dVar9 * dVar14 + dVar8 * dVar12;
  param_1[6] = param_1[6] + dStack_38 + dVar10 * dVar8 + -dVar12 * dVar11 + dVar13 * dVar14;
  FUN_1095103fc(param_1,auStack_68);
  return;
}



/* Entry: 10950d9d0; end: 10950da27;  */

void FUN_10950d9d0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  float fVar1;
  float fVar3;
  ulong uVar2;
  float fVar4;
  float fVar6;
  ulong uVar5;
  ulong uVar7;
  float fVar8;
  
  uVar2 = 0xff7fffffff7fffff;
  uVar5 = 0x7f7fffff7f7fffff;
  while( true ) {
    fVar4 = (float)uVar5;
    fVar6 = (float)(uVar5 >> 0x20);
    fVar1 = (float)uVar2;
    fVar3 = (float)(uVar2 >> 0x20);
    if (param_3 == param_2) break;
    uVar7 = *param_2;
    fVar8 = (float)(uVar7 >> 0x20);
    uVar5 = uVar5 ^ (uVar5 ^ uVar7) &
                    ~CONCAT44(-(uint)(fVar6 < fVar8),-(uint)(fVar4 < (float)uVar7));
    uVar2 = uVar2 ^ (uVar2 ^ uVar7) &
                    ~CONCAT44(-(uint)(fVar8 < fVar3),-(uint)((float)uVar7 < fVar1));
    param_2 = param_2 + 1;
  }
  uVar7 = uVar5 ^ (uVar5 ^ uVar2) & CONCAT44(-(uint)(fVar3 < fVar6),-(uint)(fVar1 < fVar4));
  uVar2 = uVar2 ^ (uVar2 ^ uVar5) & ~CONCAT44(-(uint)(fVar6 < fVar3),-(uint)(fVar4 < fVar1));
  *param_1 = uVar7;
  param_1[1] = CONCAT44((float)(uVar2 >> 0x20) - (float)(uVar7 >> 0x20),(float)uVar2 - (float)uVar7)
  ;
  return;
}


