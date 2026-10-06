/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056d09f4; end: 1056d0daf;  */

undefined4 FUN_1056d09f4(void)

{
  undefined4 uVar1;
  undefined1 in_CY;
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  
  func_0x0001056d0d0c();
  uVar1 = extraout_w8;
  if ((bool)in_CY) {
    uVar1 = extraout_w9;
  }
  return uVar1;
}



/* Entry: 1056d0db0; end: 1056d0e2f; -[SCNSpectraSpectra initWithCpp:] */

undefined1 * FUN_1056d0db0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9ae8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    FUN_1056d10ac(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 1056d0e30; end: 1056d0fe3; +[SCNSpectraSpectra calculateHash:width:height:pixelLayout:] */

void FUN_1056d0e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  char cStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x0001000fef20(auStack_70,param_3);
  FUN_1056d1224(auStack_60,auStack_70,param_4,param_5,param_6);
  func_0x0001000ff1ac(auStack_70);
  puVar3 = PTR_PTR_1126b9638;
  if (cStack_40 == '\x01') {
    puVar2 = auStack_60;
    FUN_1056d10e4(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  FUN_1056d108c(auStack_60);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  FUN_1056d10d8();
  _objc_release(puVar2);
  FUN_1056d108c(auStack_60);
  if ((int)param_4 == 1) {
    ___cxa_begin_catch(puVar3);
    func_0x00010bd47250(&UNK_10f2e93d4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1056d0fb4);
    (*pcVar1)();
  }
  _objc_release(param_3);
  puVar2 = puVar3;
  __Unwind_Resume();
  pcStack_78 = FUN_1056d0fe4;
  puStack_90 = puVar3;
  uStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar2 + 0x18) != 0) {
    ppuStack_98 = &PTR_DAT_1108a9240;
    func_0x0001004a52a0(puVar2 + 8,&ppuStack_98);
  }
  FUN_1056d10ac(puVar2 + 0x18);
  func_0x0001004a5588(puVar2 + 8);
  return;
}



/* Entry: 1056d0fe4; end: 1056d103f; -[SCNSpectraSpectra .cxx_destruct] */

void FUN_1056d0fe4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a9240;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1056d10ac((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1056d1040; end: 1056d108b; -[SCNSpectraSpectra .cxx_construct] */

undefined8 * FUN_1056d1040(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
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
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1056d108c; end: 1056d10ab;  */

void FUN_1056d108c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1056d10ac; end: 1056d10d7;  */

long FUN_1056d10ac(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056d10d8; end: 1056d10e3;  */

void FUN_1056d10d8(void)

{
  return;
}



/* Entry: 1056d10e4; end: 1056d114f;  */

void FUN_1056d10e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bd158;
  _objc_alloc(PTR_PTR_1126bd158);
  lVar2 = param_1;
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019e20(puVar1,param_2,lVar2,*(undefined4 *)(param_1 + 0x18));
  FUN_1056d1150();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d1150; end: 1056d115b;  */

void FUN_1056d1150(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1056d115c; end: 1056d1207; -[SCNSpectraSpectraHashResult initWithHashBytes:quality:] */

undefined1 *
FUN_1056d115c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9af0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056d1208; end: 1056d120f; -[SCNSpectraSpectraHashResult hashBytes] */

undefined8 FUN_1056d1208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056d1210; end: 1056d1217; -[SCNSpectraSpectraHashResult quality] */

undefined4 FUN_1056d1210(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1056d1218; end: 1056d1223; -[SCNSpectraSpectraHashResult .cxx_destruct] */

void FUN_1056d1218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1056d1224; end: 1056d19c7;  */

/* WARNING: Removing unreachable block (ram,0x0001056d1900) */

float ** FUN_1056d1224(float **param_1,ulong param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  float **ppfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long *extraout_x8;
  long lVar7;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar8;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  undefined4 *extraout_x9_03;
  long extraout_x9_04;
  undefined4 *puVar9;
  undefined4 *extraout_x9_05;
  long extraout_x9_06;
  undefined8 *extraout_x9_07;
  undefined8 *puVar10;
  int iVar11;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long lVar12;
  double dVar13;
  double extraout_x10_02;
  undefined8 *extraout_x10_03;
  undefined8 *puVar14;
  undefined8 *extraout_x10_04;
  int iVar15;
  ulong uVar16;
  long extraout_x11;
  long extraout_x12;
  long extraout_x12_00;
  undefined4 *extraout_x13;
  long extraout_x13_00;
  long lVar17;
  float *pfVar18;
  int iVar19;
  ulong unaff_x20;
  long *plVar20;
  ulong uVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float **ppfStack_5940;
  undefined1 uStack_5938;
  ulong uStack_5930;
  float **ppfStack_5928;
  undefined1 *puStack_5920;
  code *pcStack_5918;
  long *plStack_5908;
  ulong uStack_5900;
  uint uStack_58f8;
  uint uStack_58f4;
  undefined8 uStack_58f0;
  undefined8 uStack_58e8;
  undefined8 uStack_58e0;
  undefined8 *puStack_58d8;
  long lStack_58d0;
  long lStack_58c8;
  long alStack_58c0 [3];
  float *apfStack_58a8 [3];
  float afStack_5890 [256];
  undefined8 auStack_5490 [128];
  undefined8 auStack_5090 [512];
  float afStack_4090 [4096];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = (uint)param_2;
  uVar5 = (uint)param_3;
  ppfVar2 = param_1;
  uVar21 = param_2;
  if (((int)uVar4 >= 1 && uVar5 != 0) && ((int)uVar4 < 1 || -1 < (int)uVar5)) {
    uVar1 = param_4 >> 8 | param_4 << 0x18;
    if ((uVar1 < 5) && ((0x17U >> (ulong)(param_4 >> 8 & 0x1f) & 1) != 0)) {
      lVar7 = *(long *)(&UNK_10ddbb5a8 + (ulong)uVar1 * 8);
      ppfVar2 = (float **)*param_1;
      if (ppfVar2 != (float **)0x0) {
        (**(code **)(*ppfVar2 + 6))();
      }
      unaff_x20 = param_2;
      if ((float **)((param_3 & 0xffffffff) * (param_2 & 0xffffffff) * lVar7) <= ppfVar2) {
        uVar21 = (ulong)(uVar5 * uVar4);
        func_0x0001056d1d64(apfStack_58a8);
        pfVar3 = *param_1;
        if (pfVar3 != (float *)0x0) {
          (**(code **)(*(long *)pfVar3 + 0x10))();
        }
        if (param_4 == 0x200) {
          if (uVar21 != 0) {
            do {
              func_0x0001056d1d10();
            } while (extraout_x10_01 != 1);
          }
        }
        else if (param_4 == 0x100) {
          if (uVar21 != 0) {
            do {
              func_0x0001056d1d10();
            } while (extraout_x10_00 != 1);
          }
        }
        else {
          pfVar18 = apfStack_58a8[0];
          if (param_4 == 0) {
            if (uVar21 != 0) {
              do {
                func_0x0001056d1d10();
              } while (extraout_x10 != 1);
            }
          }
          else {
            for (; uVar21 != 0; uVar21 = uVar21 - 1) {
              *pfVar18 = (float)*(byte *)pfVar3;
              pfVar3 = (float *)((long)pfVar3 + 1);
              pfVar18 = pfVar18 + 1;
            }
          }
        }
        func_0x0001056d1d64(alStack_58c0);
        if ((uVar4 == 0x40) && (uVar5 == 0x40)) {
          func_0x0001056d1d84(0);
          lVar8 = extraout_x9;
          for (lVar7 = extraout_x8_00; plVar20 = extraout_x8, lVar7 != 0x40; lVar7 = lVar7 + 1) {
            for (lVar12 = 0; lVar12 != 0x100; lVar12 = lVar12 + 4) {
              *(undefined4 *)(lVar8 + lVar12) = *(undefined4 *)((long)apfStack_58a8[0] + lVar12);
            }
            apfStack_58a8[0] = apfStack_58a8[0] + 0x40;
            lVar8 = lVar8 + 0x100;
          }
        }
        else {
          uStack_5900 = param_2 & 0xffffffff;
          uStack_58f4 = uVar4 + 0x7f >> 7;
          uVar1 = uVar5 + 0x7f >> 7;
          uStack_58f8 = (uint)(uVar5 < 0x20 || uVar4 < 0x20);
          plStack_5908 = extraout_x8;
          for (iVar19 = 0; iVar19 != 2; iVar19 = iVar19 + 1) {
            FUN_1056d1aa4(apfStack_58a8[0],alStack_58c0[0],param_3,param_2,uStack_58f4);
            uVar21 = uStack_5900;
            lVar7 = alStack_58c0[0];
            pfVar3 = apfStack_58a8[0];
            if (uStack_58f8 == 0) {
              func_0x0001056d1d64(auStack_5090);
              func_0x0001056d1d64(auStack_5490);
              FUN_1056d1c18(alStack_58c0[0],auStack_5090[0],param_3,param_2);
              FUN_1056d1aa4(auStack_5090[0],auStack_5490[0],param_2,param_3,uVar1);
              FUN_1056d1c18(auStack_5490[0],apfStack_58a8[0],param_2,param_3);
              FUN_1056d1ce4(auStack_5490);
              FUN_1056d1ce4(auStack_5090);
            }
            else {
              for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                FUN_1056d1b10(lVar7,pfVar3,param_3,param_2,uVar1);
                lVar7 = lVar7 + 4;
                pfVar3 = pfVar3 + 1;
              }
            }
          }
          dVar23 = (double)(param_3 & 0xffffffff);
          dVar25 = (double)(param_2 & 0xffffffff);
          func_0x0001056d1d84(0);
          dVar27 = 0.5;
          dVar13 = 0.015625;
          uVar21 = extraout_x8_01;
          lVar7 = extraout_x9_00;
          while (plVar20 = plStack_5908, uVar21 != 0x40) {
            for (uVar16 = 0; uVar16 != 0x40; uVar16 = uVar16 + 1) {
              *(float *)(lVar7 + uVar16 * 4) =
                   apfStack_58a8[0]
                   [(int)(uVar4 * (int)(((double)(uVar21 & 0xffffffff) + dVar27) * dVar23 * dVar13)
                         + (int)(((double)(uVar16 & 0xffffffff) + dVar27) * dVar25 * dVar13))];
            }
            func_0x0001056d1d6c();
            uVar21 = extraout_x8_02;
            lVar7 = extraout_x9_01;
            dVar13 = extraout_x10_02;
          }
        }
        unaff_x20 = 0;
        func_0x0001056d1d84(0);
        puVar9 = (undefined4 *)(extraout_x9_02 + 0x100);
        lVar7 = extraout_x8_03;
        while (lVar7 != 0x3f) {
          do {
            func_0x0001056d1d3c(puVar9[-0x40],*puVar9);
            puVar9 = extraout_x13;
          } while (extraout_x12 != 1);
          func_0x0001056d1d6c();
          lVar7 = extraout_x8_04;
          puVar9 = extraout_x9_03;
        }
        func_0x0001056d1d84(0);
        puVar9 = (undefined4 *)(extraout_x9_04 + 4);
        lVar7 = extraout_x8_05;
        while (lVar7 != 0x40) {
          do {
            func_0x0001056d1d3c(puVar9[-1],*puVar9);
            puVar9 = (undefined4 *)(extraout_x13_00 + 4);
          } while (extraout_x12_00 != 1);
          func_0x0001056d1d6c();
          lVar7 = extraout_x8_06;
          puVar9 = extraout_x9_05;
        }
        lVar8 = 0;
        lVar7 = 0x1136bd828;
        puVar10 = auStack_5090;
        while (lVar8 != 0x10) {
          pfVar3 = afStack_4090;
          for (lVar12 = 0; lVar12 != 0x40; lVar12 = lVar12 + 1) {
            fVar22 = 0.0;
            pfVar18 = pfVar3;
            for (lVar17 = 0; lVar17 != 0x100; lVar17 = lVar17 + 4) {
              fVar22 = fVar22 + *pfVar18 * *(float *)(lVar7 + lVar17);
              pfVar18 = pfVar18 + 0x40;
            }
            *(float *)((long)puVar10 + lVar12 * 4 + lVar8 * 0x100) = fVar22;
            pfVar3 = pfVar3 + 1;
          }
          func_0x0001056d1d6c();
          lVar8 = extraout_x8_07;
          lVar7 = extraout_x9_06;
          puVar10 = extraout_x10_03;
        }
        lVar8 = 0;
        puVar10 = auStack_5090;
        puVar14 = auStack_5490;
        lVar7 = 0x1136bd828;
        while (lVar8 != 0x10) {
          for (lVar12 = 0; lVar12 != 0x10; lVar12 = lVar12 + 1) {
            fVar22 = 0.0;
            for (lVar17 = 0; lVar17 != 0x100; lVar17 = lVar17 + 4) {
              fVar22 = fVar22 + *(float *)(lVar7 + lVar17) * *(float *)((long)puVar10 + lVar17);
            }
            *(float *)((long)puVar14 + lVar12 * 4 + lVar8 * 0x40) = fVar22;
            lVar7 = lVar7 + 0x100;
          }
          func_0x0001056d1d6c();
          lVar8 = extraout_x8_08;
          puVar10 = extraout_x9_07;
          puVar14 = extraout_x10_04;
          lVar7 = extraout_x11;
        }
        pfVar3 = afStack_5890;
        puVar10 = auStack_5490;
        for (lVar7 = 0; lVar7 != 0x10; lVar7 = lVar7 + 1) {
          for (lVar8 = 0; lVar8 != 0x40; lVar8 = lVar8 + 4) {
            *(undefined4 *)((long)pfVar3 + lVar8) = *(undefined4 *)((long)puVar10 + lVar8);
          }
          pfVar3 = pfVar3 + 0x10;
          puVar10 = puVar10 + 8;
        }
        fVar22 = afStack_5890[0];
        for (lVar7 = 4; lVar7 != 0x400; lVar7 = lVar7 + 4) {
          fVar26 = *(float *)((long)afStack_5890 + lVar7);
          fVar28 = fVar26;
          if (afStack_5890[0] <= fVar26) {
            fVar28 = afStack_5890[0];
          }
          afStack_5890[0] = fVar28;
          if (fVar26 <= fVar22) {
            fVar26 = fVar22;
          }
          fVar22 = fVar26;
        }
        while( true ) {
          fVar24 = fVar22;
          iVar19 = 0;
          iVar15 = 0;
          iVar11 = 0;
          fVar26 = (afStack_5890[0] + fVar24) * 0.5;
          fVar28 = fVar24;
          fVar22 = afStack_5890[0];
          for (lVar7 = 0; lVar7 != 0x400; lVar7 = lVar7 + 4) {
            fVar29 = *(float *)((long)afStack_5890 + lVar7);
            if (fVar26 <= fVar29) {
              if (fVar29 <= fVar26) {
                iVar11 = iVar11 + 1;
              }
              else {
                iVar15 = iVar15 + 1;
                if (fVar29 < fVar28) {
                  fVar28 = fVar29;
                }
              }
            }
            else {
              iVar19 = iVar19 + 1;
              if (fVar22 < fVar29) {
                fVar22 = fVar29;
              }
            }
          }
          if ((iVar19 < 0x81) && (iVar15 < 0x81)) break;
          if (iVar19 <= iVar15) {
            fVar22 = fVar24;
            afStack_5890[0] = fVar28;
          }
        }
        lVar7 = 0;
        uVar4 = 0;
        if (iVar11 + iVar19 < 0x80) {
          fVar26 = fVar28;
        }
        if (iVar19 != 0x80) {
          fVar22 = fVar26;
        }
        puStack_58d8 = (undefined8 *)0x0;
        lStack_58d0 = 0;
        lStack_58c8 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        puVar10 = auStack_5490;
        for (; lVar7 != 0x10; lVar7 = lVar7 + 1) {
          for (lVar8 = 0; lVar8 != 0x40; lVar8 = lVar8 + 4) {
            if (fVar22 < *(float *)((long)puVar10 + lVar8)) {
              *(ushort *)((long)&uStack_90 + (long)((int)uVar4 / 0x10) * 2) =
                   *(ushort *)((long)&uStack_90 + (long)((int)uVar4 / 0x10) * 2) |
                   (ushort)(1 << (ulong)(uVar4 & 0xf));
            }
            uVar4 = uVar4 + 1;
          }
          puVar10 = puVar10 + 8;
        }
        param_2 = 0x20;
        func_0x000100651cb4(&puStack_58d8);
        lVar8 = lStack_58c8;
        lVar7 = lStack_58d0;
        puVar10 = puStack_58d8;
        puStack_58d8[3] = uStack_78;
        puStack_58d8[2] = uStack_80;
        puStack_58d8[1] = uStack_88;
        *puStack_58d8 = uStack_90;
        lStack_58d0 = 0;
        lStack_58c8 = 0;
        uStack_58e0 = 0;
        puStack_58d8 = (undefined8 *)0x0;
        uStack_58f0 = 0;
        uStack_58e8 = 0;
        uStack_78 = uStack_78 & 0xffffffff00000000;
        *plVar20 = (long)puVar10;
        plVar20[2] = lVar8;
        plVar20[1] = lVar7;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_90 = 0;
        *(undefined4 *)(plVar20 + 3) = 0;
        *(undefined1 *)(plVar20 + 4) = 1;
        func_0x000100100fec(&uStack_90);
        func_0x000100100fec(&uStack_58f0);
        func_0x000100100fec(&puStack_58d8);
        FUN_1056d1ce4(alStack_58c0);
        param_1 = apfStack_58a8;
        FUN_1056d1ce4();
        goto LAB_1056d1354;
      }
      goto LAB_1056d1278;
    }
    uVar6 = 1;
  }
  else {
LAB_1056d1278:
    uVar6 = 2;
    param_1 = ppfVar2;
    param_2 = uVar21;
  }
  *(undefined4 *)extraout_x8 = uVar6;
  *(undefined1 *)(extraout_x8 + 4) = 0;
LAB_1056d1354:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_1056d1ce4(apfStack_58a8);
    ppfVar2 = param_1;
    __Unwind_Resume();
    pcStack_5918 = FUN_1056d19c8;
    *ppfVar2 = (float *)0x0;
    ppfVar2[1] = (float *)0x0;
    ppfVar2[2] = (float *)0x0;
    uStack_5938 = 0;
    ppfStack_5940 = ppfVar2;
    uStack_5930 = unaff_x20;
    ppfStack_5928 = param_1;
    puStack_5920 = &stack0xfffffffffffffff0;
    if (param_2 != 0) {
      FUN_1050929a4(ppfVar2);
      FUN_1056d1a38(ppfVar2,param_2);
    }
    uStack_5938 = 1;
    FUN_1056d1a5c(&ppfStack_5940);
    return ppfVar2;
  }
  return param_1;
}



/* Entry: 1056d19c8; end: 1056d1a37;  */

undefined8 * FUN_1056d19c8(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  puStack_30 = param_1;
  if (param_2 != 0) {
    FUN_1050929a4(param_1);
    FUN_1056d1a38(param_1,param_2);
  }
  uStack_28 = 1;
  FUN_1056d1a5c(&puStack_30);
  return param_1;
}



/* Entry: 1056d1a38; end: 1056d1a5b;  */

void FUN_1056d1a38(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 1056d1a5c; end: 1056d1a8b;  */

long FUN_1056d1a5c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1056d1a8c(param_1);
  }
  return param_1;
}



/* Entry: 1056d1a8c; end: 1056d1aa3;  */

void FUN_1056d1a8c(undefined8 *param_1)

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



/* Entry: 1056d1aa4; end: 1056d1b0f;  */

void FUN_1056d1aa4(long param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  
  lVar1 = (param_4 & 0xffffffff) * 4;
  for (param_3 = param_3 & 0xffffffff; param_3 != 0; param_3 = param_3 - 1) {
    FUN_1056d1b10(param_1,param_2,param_4,1,param_5);
    param_2 = param_2 + lVar1;
    param_1 = param_1 + lVar1;
  }
  return;
}



/* Entry: 1056d1b10; end: 1056d1c17;  */

void FUN_1056d1b10(float *param_1,long param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  
  uVar1 = param_5 + 2U >> 1;
  uVar10 = (ulong)param_4;
  fVar13 = 0.0;
  uVar6 = uVar1 - 1;
  pfVar8 = param_1;
  for (uVar2 = uVar6; uVar2 != 0; uVar2 = uVar2 - 1) {
    fVar13 = fVar13 + *pfVar8;
    pfVar8 = pfVar8 + param_4;
  }
  lVar11 = 0;
  uVar12 = (ulong)(uVar6 * param_4);
  lVar4 = uVar10 * 4;
  lVar7 = uVar12 << 2;
  lVar9 = param_2;
  for (iVar3 = 0; iVar3 <= (int)(param_5 - uVar1); iVar3 = iVar3 + 1) {
    fVar13 = fVar13 + param_1[uVar12];
    uVar6 = uVar6 + 1;
    *(float *)(param_2 + lVar11 * 4) = fVar13 / (float)uVar6;
    uVar12 = uVar12 + uVar10;
    lVar11 = lVar11 + uVar10;
    lVar9 = lVar9 + lVar4;
    lVar7 = lVar7 + lVar4;
  }
  lVar11 = 0;
  for (uVar2 = param_3 - param_5 & (param_3 - param_5 >> 0x1f ^ 0xffffffffU); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    fVar13 = (fVar13 + *(float *)((long)param_1 + lVar7)) - *(float *)((long)param_1 + lVar11);
    *(float *)(lVar9 + lVar11) = fVar13 / (float)uVar6;
    lVar11 = lVar11 + lVar4;
    lVar7 = lVar7 + lVar4;
  }
  param_1 = (float *)((long)param_1 + lVar11);
  pfVar8 = (float *)(lVar9 + lVar11);
  for (iVar5 = uVar1 - 2; iVar5 != -1; iVar5 = iVar5 + -1) {
    fVar13 = fVar13 - *param_1;
    *pfVar8 = fVar13 / (float)(iVar3 + iVar5);
    pfVar8 = pfVar8 + uVar10;
    param_1 = param_1 + uVar10;
  }
  return;
}



/* Entry: 1056d1c18; end: 1056d1ce3;  */

void FUN_1056d1c18(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  
  for (uVar5 = 0; (uint)uVar5 < param_3; uVar5 = uVar5 + 4) {
    uVar1 = (uint)uVar5 + 4;
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    puVar6 = param_2;
    uVar7 = 0;
    puVar8 = param_1;
    while (uVar7 < param_4) {
      uVar2 = (uint)(uVar7 + 4);
      if (param_4 <= uVar2) {
        uVar2 = param_4;
      }
      puVar3 = puVar6;
      puVar4 = puVar8;
      for (uVar9 = uVar5; puVar10 = puVar3, puVar11 = puVar4, uVar12 = uVar7, uVar9 < uVar1;
          uVar9 = uVar9 + 1) {
        for (; uVar12 < uVar2; uVar12 = uVar12 + 1) {
          *puVar10 = *puVar11;
          puVar10 = puVar10 + param_3;
          puVar11 = puVar11 + 1;
        }
        puVar4 = puVar4 + param_4;
        puVar3 = puVar3 + 1;
      }
      puVar8 = puVar8 + 4;
      puVar6 = puVar6 + (ulong)param_3 * 4;
      uVar7 = uVar7 + 4;
    }
    param_1 = param_1 + (ulong)param_4 * 4;
    param_2 = param_2 + 4;
  }
  return;
}



/* Entry: 1056d1ce4; end: 1056d1d0f;  */

undefined8 FUN_1056d1ce4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1056d1a8c(&uStack_28);
  return param_1;
}



/* Entry: 1056d1d10; end: 1056d1d8f;  */

void FUN_1056d1d10(float *param_1,float param_2,float param_3,float param_4)

{
  byte *in_x9;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)NEON_ucvtf((uint)in_x9[-2]);
  fVar2 = (float)NEON_ucvtf((uint)in_x9[-1]);
  fVar3 = (float)NEON_ucvtf((uint)*in_x9);
  *param_1 = fVar2 * param_2 + param_3 * fVar1 + param_4 * fVar3;
  return;
}



/* Entry: 1056d1d90; end: 1056d1d9b; -[SCContactPhotosComposerImageLoadRequest cancel] */

void FUN_1056d1d90(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1056d1d9c; end: 1056d1da3; -[SCContactPhotosComposerImageLoadRequest isCancelled] */

undefined1 FUN_1056d1d9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1056d1da4; end: 1056d1eef; -[SCContactPhotosServiceImpl initWithContactStore:contactPermissionInfoProvider:performerProvider:applicationLifecycleEvents:contactPhotosLogger:] */

undefined1 *
FUN_1056d1da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e9af8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdf12a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
    puVar4 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    func_0x00010be65ba0(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056d1ef0; end: 1056d1f57; -[SCContactPhotosServiceImpl dealloc] */

void FUN_1056d1ef0(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e9af8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1056d1f58; end: 1056d205b; -[SCContactPhotosServiceImpl loadContactPhotosWithCompletion:] */

void FUN_1056d1f58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (((*(char *)(param_1 + 0x28) == '\x01') && (param_3 != 0)) && (*(long *)(param_1 + 0x30) != 0))
  {
    (**(code **)(param_3 + 0x10))(param_3,*(long *)(param_1 + 0x30),0);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056d205c; end: 1056d208f;  */

void FUN_1056d205c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4ce80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056d2090; end: 1056d2223; -[SCContactPhotosServiceImpl _observeApplicationLifecycleEvents:] */

void FUN_1056d2090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010bf79200();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1056d2224;
  puStack_68 = &UNK_1108a9250;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1056d2224; end: 1056d2297;  */

void FUN_1056d2224(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056d2298; end: 1056d22c3; -[SCContactPhotosServiceImpl _didReceiveMemoryWarning:] */

void FUN_1056d2298(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c0a9e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logLowMemoryWarning_112608198);
  return;
}



/* Entry: 1056d22c4; end: 1056d22cf; -[SCContactPhotosServiceImpl _applicationDidEnterBackground] */

void FUN_1056d22c4(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1056d22d0; end: 1056d233b; -[SCContactPhotosServiceImpl supportedURLSchemes] */

void FUN_1056d22d0(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar1 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110df69d8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(pppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056d233c; end: 1056d2363; -[SCContactPhotosServiceImpl requestPayloadWithURL:error:] */

void FUN_1056d233c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1056d2364; end: 1056d25d3; -[SCContactPhotosServiceImpl loadImageWithRequestPayload:parameters:completion:] */

void FUN_1056d2364(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126bd160;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  ppuVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  ppuVar1 = param_3;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_3);
  if (ppuVar1 == (undefined **)0x0) {
    if (param_6 == 0) goto LAB_1056d259c;
    ppuVar4 = &PTR____CFConstantStringClassReference_110df6a18;
    func_0x000108543ce4(&PTR____CFConstantStringClassReference_110df6a18);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,ppuVar4);
  }
  else {
    ppuVar4 = param_3;
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    FUN_1056d25d4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar5);
    ppuVar7 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar7 == (undefined **)0x0) {
      if (param_6 != 0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110df6a58;
        func_0x000108543ce4(&PTR____CFConstantStringClassReference_110df6a58);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_6 + 0x10))(param_6,0,ppuVar7);
        goto LAB_1056d2584;
      }
    }
    else {
      ppuVar7 = *(undefined ***)(param_1 + 0x30);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if ((ppuVar7 == (undefined **)0x0) ||
         (puVar3 = puVar2, func_0x00010c06e0e0(), ((ulong)puVar3 & 1) != 0)) {
        if (param_6 == 0) goto LAB_1056d2584;
        ppuVar5 = &PTR____CFConstantStringClassReference_110df6a38;
        func_0x000108543ce4(&PTR____CFConstantStringClassReference_110df6a38);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_6 + 0x10))(param_6,0,ppuVar5);
      }
      else {
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe93c0(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        if (param_6 != 0) {
          puVar3 = PTR_PTR_1126b27a8;
          func_0x00010bfe9800(PTR_PTR_1126b27a8);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(param_6 + 0x10))(param_6,puVar3,0);
          _objc_release(puVar3);
        }
      }
      _objc_release(ppuVar5);
LAB_1056d2584:
      _objc_release(ppuVar7);
    }
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar4);
LAB_1056d259c:
  _objc_release(ppuVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056d25d4; end: 1056d2683;  */

void FUN_1056d25d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  puVar4 = PTR_PTR_1126aed98;
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5d20(puVar4,param_2,param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056d2684; end: 1056d29c7; -[SCContactPhotosServiceImpl _loadContactPhotosWithCompletion:] */

void FUN_1056d2684(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdbe0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1056d29c8;
    uStack_80 = 0x1056d29d8;
    puVar4 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_opt_new();
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x2020000000;
    uStack_a8 = 0;
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d0 = 0x2020000000;
    uStack_c8 = 0;
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x2020000000;
    uStack_e8 = 0;
    uStack_70 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
    uStack_68 = *(undefined8 *)PTR__CNContactImageDataAvailableKey_110349b18;
    uStack_60 = *(undefined8 *)PTR__CNContactThumbnailImageDataKey_110349b40;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
    _objc_alloc(PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0);
    func_0x00010c0210c0();
    func_0x00010bf97b60(*(undefined8 *)(param_1 + 8));
    _objc_retain(0);
    *(undefined1 *)(param_1 + 0x28) = 1;
    uVar8 = puStack_98[5];
    _objc_retain(uVar8);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    _objc_release(uVar6);
    func_0x00010c0a9b40(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0aa240(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0a3cc0(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x30),0);
    _objc_release(0);
    _objc_release(puVar4);
    _objc_release(puVar5);
    __Block_object_dispose(&uStack_100,8);
    __Block_object_dispose(&uStack_e0,8);
    __Block_object_dispose(&uStack_c0,8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(puStack_78);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_100,8);
    __Block_object_dispose(&uStack_e0,8);
    __Block_object_dispose(&uStack_c0,8);
    lVar7 = 8;
    __Block_object_dispose(&uStack_a0);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 1056d29c8; end: 1056d29df;  */

void FUN_1056d29c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1056d29e0; end: 1056d2cdb;  */

void FUN_1056d29e0(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
  lVar8 = param_2;
  func_0x00010bfe7320();
  if ((int)lVar8 != 0) {
    lVar8 = param_2;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010bf529e0();
    _objc_release(lVar8);
    if (lVar1 != 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      lVar8 = param_2;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      param_3 = &uStack_170;
      lVar1 = lVar8;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar11 = *plStack_160;
        do {
          lVar10 = 0;
          do {
            if (*plStack_160 != lVar11) {
              _objc_enumerationMutation(lVar8);
            }
            lVar2 = *(long *)(lStack_168 + lVar10 * 8);
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar2;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar9;
            FUN_1056d25d4();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar9);
            _objc_release(lVar2);
            lVar9 = lVar3;
            func_0x00010c08fa60();
            if (lVar9 != 0) {
              lVar9 = param_2;
              func_0x00010c26de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
              if (lVar9 != 0) {
                lVar9 = param_2;
                func_0x00010c26de00(param_2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfe93c0();
                _objc_retainAutoreleasedReturnValue();
                _objc_retain();
                puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
                _objc_alloc();
                func_0x00010c0469e0(0x4049000000000000,0x4049000000000000);
                puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_120 = 0xc2000000;
                pcStack_118 = FUN_1056d2dd0;
                puStack_110 = &UNK_11086bc40;
                puStack_108 = puVar4;
                _objc_retain(puVar4);
                puVar6 = puVar5;
                func_0x00010bdc1e00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puStack_108);
                _objc_release(puVar4);
                _objc_release(puVar5);
                _objc_release(puVar4);
                _objc_release(lVar9);
                func_0x00010c1d0560(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28)
                                   );
                puVar4 = puVar6;
                func_0x00010c08fa60();
                lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
                *(double *)(lVar9 + 0x18) = *(double *)(lVar9 + 0x18) + (double)puVar4;
                _objc_release(puVar6);
              }
            }
            _objc_release(lVar3);
            lVar10 = lVar10 + 1;
          } while (lVar1 != lVar10);
          param_3 = &uStack_170;
          lVar1 = lVar8;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(lVar8);
    }
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  func_0x00010c0f9920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1056d2cdc; end: 1056d2d63; -[SCContactPhotosServiceImpl _createPerformerWithPerformerProvider:] */

void FUN_1056d2cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920(param_3,param_2,param_1,2,0,0x2e);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056d2d64; end: 1056d2dcf; -[SCContactPhotosServiceImpl .cxx_destruct] */

void FUN_1056d2d64(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056d2dd0; end: 1056d2e43;  */

void FUN_1056d2dd0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0,0,0x4049000000000000,0x4049000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7740();
  func_0x00010bf89920(0,0,0x4049000000000000,0x4049000000000000,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056d2e44; end: 1056d2ea7; -[SCContactPhotosLoggerImpl init] */

undefined1 * FUN_1056d2e44(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9b00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bd168;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1056d2ea8; end: 1056d2f3b; -[SCContactPhotosLoggerImpl logLoadComplete:startTime:] */

void FUN_1056d2ea8(double param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_5);
  if (param_4 == 0) {
    FUN_1056d34dc(uVar3,1);
  }
  else {
    FUN_1056d3464();
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_5);
  _objc_release(puVar1);
  if (*(long *)(param_2 + 8) != 0) {
    plVar2 = *(long **)(*(long *)(param_2 + 8) + 8);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1108a94c0,&stack0xffffffffffffffc0,(long)param_1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 1056d2f3c; end: 1056d2f47; -[SCContactPhotosLoggerImpl logLowMemoryWarning] */

void FUN_1056d2f3c(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108a9380,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056d2f48; end: 1056d2f7b; -[SCContactPhotosLoggerImpl logContactsCount:contactsWithPhotos:] */

void FUN_1056d2f48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  FUN_1056d35cc(*(undefined8 *)(param_1 + 8),param_3);
  puStack_28 = (undefined1 *)&uStack_40;
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108a9420,&uStack_40,param_4);
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056d2f7c; end: 1056d2f87; -[SCContactPhotosLoggerImpl logMemoryUsedInKB:] */

void FUN_1056d2f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108a9470,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056d2f88; end: 1056d2f93; -[SCContactPhotosLoggerImpl .cxx_destruct] */

void FUN_1056d2f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056d2f94; end: 1056d2fd3;  */

void FUN_1056d2f94(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056d2fd4; end: 1056d31e3; -[SCContactPhotosFeatureServiceProvider _createContactPhotosService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056d2fd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  _objc_opt_new(PTR__OBJC_CLASS___CNContactStore_1126b1900);
  puVar2 = PTR_PTR_1126bd178;
  _objc_opt_new(PTR_PTR_1126bd178);
  puVar3 = PTR_PTR_1126bd180;
  _objc_alloc();
  lVar11 = param_1 + _DAT_112727c94;
  _objc_loadWeakRetained(lVar11);
  lVar4 = lVar11;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112727c98;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112727c9c;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0024a0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar11);
  puVar9 = auStack_68;
  _objc_initWeak(puVar9,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(puVar9);
  _objc_release(puVar9);
  lVar11 = (long)_DAT_112727ca4;
  _objc_retain(puVar3);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar3;
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056d31e4; end: 1056d329f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056d31e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112727ca0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf44b60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126840(lVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056d32a0; end: 1056d3383; -[SCContactPhotosFeatureServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056d32a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  if (*(long *)(param_1 + _DAT_112727ca4) != 0) {
    lVar1 = param_1 + _DAT_112727ca0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf44b60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2820a0(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puStack_48 = PTR_PTR_1126e9b08;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056d3384; end: 1056d33ef; -[SCContactPhotosFeatureServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056d3384(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727c98);
  _objc_destroyWeak(param_1 + _DAT_112727c9c);
  _objc_destroyWeak(param_1 + _DAT_112727c94);
  _objc_destroyWeak(param_1 + _DAT_112727ca0);
  _objc_destroyWeak(param_1 + _DAT_112727ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112727ca4,0);
  return;
}



/* Entry: 1056d33f0; end: 1056d3463; -[SCGrapheneContactPhotosMetric2 init] */

undefined1 * FUN_1056d33f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9b10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1056d3464; end: 1056d34db;  */

void FUN_1056d3464(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108a92e0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056d34dc; end: 1056d3553;  */

void FUN_1056d34dc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108a9330,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056d3554; end: 1056d35cb;  */

void FUN_1056d3554(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108a9380,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056d35cc; end: 1056d3643;  */

void FUN_1056d35cc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108a93d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056d3644; end: 1056d36bb;  */

void FUN_1056d3644(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108a9420,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056d36bc; end: 1056d3733;  */

void FUN_1056d36bc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108a9470,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056d3734; end: 1056d37ab;  */

void FUN_1056d3734(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108a94c0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1056d37ac; end: 1056d3923; -[SCExternalLinkSendingServiceImpl initWithSocialSmsSender:socialLinkCreator:offPlatformLinkGenerationService:notificationPool:performerProvider:circumstanceEngine:userInfoServices:grapheneRegistry:] */

undefined1 *
FUN_1056d37ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_58 = PTR_PTR_1126e9b18;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056d3924; end: 1056d3a03; -[SCExternalLinkSendingServiceImpl sendPublicContentLinkWithPhoneNumbers:publicContentLink:sharingMetadata:] */

void FUN_1056d3924(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((param_4 != 0) && (lVar1 != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1056d3a04;
    puStack_50 = &UNK_1108a9510;
    uStack_48 = param_1;
    _objc_retain(param_5);
    uStack_40 = param_5;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c297260(param_4,param_2,&puStack_68,0);
    _objc_release(lStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056d3a04; end: 1056d3bf3;  */

void FUN_1056d3a04(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bebac60(*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR_PTR_1126bd188;
    _objc_alloc(PTR_PTR_1126bd188);
    func_0x00010bf681e0(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c1057c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15d5c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c009be0(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126bd190;
    _objc_alloc(PTR_PTR_1126bd190);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be602a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035ba0(puVar6);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar3);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cb20();
    _objc_release(uVar3);
    func_0x00010bebac40(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056d3bf4; end: 1056d3dbf; -[SCExternalLinkSendingServiceImpl sendFriendInviteLinkWithPhoneNumbers:featureType:completion:] */

void FUN_1056d3bf4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bebac60(param_1);
    func_0x00010be22c60(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfc0020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126bd190;
    _objc_alloc(PTR_PTR_1126bd190);
    func_0x00010c035ba0();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010c15cb40(uVar5);
    _objc_release(uVar5);
    _objc_release(param_5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010bebac40(uVar5);
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056d3dc0; end: 1056d3e1f;  */

void FUN_1056d3dc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bebac40(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056d3e20; end: 1056d3e5b; -[SCExternalLinkSendingServiceImpl isPublicLinkSendingExperimentEnabled] */

void FUN_1056d3e20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000108c7c620(uVar1,*(undefined8 *)(param_1 + 0x30));
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110f15578,0,0);
    return;
  }
  return;
}



/* Entry: 1056d3e5c; end: 1056d404b; -[SCExternalLinkSendingServiceImpl _metadataWithPublicContentLink:] */

void FUN_1056d3e5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_f8;
  long lStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar8 = *plStack_130;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(puVar2);
        }
        lVar7 = *(long *)(lStack_138 + (long)puVar9 * 8);
        lVar4 = lVar7;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0720c0();
        _objc_release(lVar4);
        if ((int)lVar5 != 0) {
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1056d3f80;
        }
        puVar9 = puVar9 + 1;
      } while (puVar3 != puVar9);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  lVar7 = 0;
LAB_1056d3f80:
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110dcef18;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_f0 = lVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(lVar7);
  puVar9 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1056d404c;
  uVar6 = *(undefined8 *)(puVar9 + 0x20);
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(uVar6);
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_1056d40d0;
  puStack_170 = &UNK_110842e18;
  uStack_168 = uVar6;
  _objc_retain(uVar6);
  func_0x0001000d76cc("APPSTORE",&puStack_188);
  _objc_release(uStack_168);
  _objc_release(uVar6);
  return;
}



/* Entry: 1056d404c; end: 1056d40cf; -[SCExternalLinkSendingServiceImpl _showSendInitiatedNotification] */

void FUN_1056d404c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1056d40d0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 1056d40d0; end: 1056d4157;  */

void FUN_1056d40d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  uVar2 = uVar1;
  FUN_1056d4808();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar3,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056d4158; end: 1056d428f; -[SCExternalLinkSendingServiceImpl _showSendCompletedNotification:isForFriendInvite:] */

void FUN_1056d4158(undefined **param_1,undefined8 param_2,int param_3,ulong param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR_PTR_1126afde0;
  ppuVar1 = param_1;
  if (param_3 == 0) {
    func_0x0001056d4838();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_4 & 1) == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbbb98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001056d4820();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  puVar3 = param_1[4];
  _objc_retain(puVar3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1056d4290;
  puStack_48 = &UNK_110841f80;
  puStack_40 = puVar3;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puStack_40);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1056d4290; end: 1056d42cb;  */

void FUN_1056d4290(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056d42cc; end: 1056d42ef; -[SCExternalLinkSendingServiceImpl _getSocialSmsFeatureTypeFromInvitesApiFeature:] */

undefined8 FUN_1056d42cc(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 8) {
    return *(undefined8 *)(&UNK_10ddbb5d0 + (ulong)(param_3 - 1U) * 8);
  }
  return 9;
}



/* Entry: 1056d42f0; end: 1056d435b; -[SCExternalLinkSendingServiceImpl .cxx_destruct] */

void FUN_1056d42f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056d435c; end: 1056d4613; -[SCExternalLinkSendingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056d435c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  lVar10 = (long)_DAT_112727ccc;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c23f120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar3 = lVar10;
  func_0x00010c0996c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar1 = param_1 + _DAT_112727cd0;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112727cd4;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112727cd8;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112727cdc;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112727ce0;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112727ce4;
  _objc_loadWeakRetained();
  lVar7 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126bd198;
  _objc_alloc(PTR_PTR_1126bd198);
  func_0x00010c011340();
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1056d4614; end: 1056d4673;  */

void FUN_1056d4614(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be0d720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056d4674; end: 1056d4787; -[SCExternalLinkSendingServiceProvider _externalLinkSendingService:socialLinkCreator:offPlatformLinkGenerationService:notificationPool:performerProvider:circumstanceEngine:userInfoServices:grapheneRegistry:] */

void FUN_1056d4674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd1a0;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04a300();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056d4788; end: 1056d4807; -[SCExternalLinkSendingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056d4788(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727ce4);
  _objc_destroyWeak(param_1 + _DAT_112727cd8);
  _objc_destroyWeak(param_1 + _DAT_112727cd4);
  _objc_destroyWeak(param_1 + _DAT_112727ce0);
  _objc_destroyWeak(param_1 + _DAT_112727cd0);
  _objc_destroyWeak(param_1 + _DAT_112727cdc);
  _objc_destroyWeak(param_1 + _DAT_112727ccc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727ce8);
  return;
}



/* Entry: 1056d4808; end: 1056d484f;  */

void FUN_1056d4808(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df6a78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110df6a78,
                      &PTR____CFConstantStringClassReference_110df6a98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1056d4850; end: 1056d4a0b; -[SCInviteGRPCService initWithCurrentUserId:unifiedGRPCClientFactory:performerProvider:] */

undefined1 *
FUN_1056d4850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126e9b20;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfcd0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf56360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126bd1a8;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar7;
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056d4a0c; end: 1056d4d83; -[SCInviteGRPCService createInviteWithRequest:completion:] */

void FUN_1056d4a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd1b0;
  _objc_opt_new(PTR_PTR_1126bd1b0);
  uVar3 = param_3;
  func_0x00010c06a860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100576d08();
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c1aeb00(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c13b320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100576d08();
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c1ecd00(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000100576d08(uVar3,auStack_58,auStack_60);
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c185c40(puVar1);
  _objc_release(puVar4);
  func_0x00010c06aa40();
  func_0x00010c1aec80(puVar1);
  func_0x00010bf5bba0(param_3);
  func_0x00010c185e40(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bf56ac0(uVar3);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1056d4d84; end: 1056d4eef; -[SCInviteGRPCService deleteGroupInviteWithRequest:completion:] */

void FUN_1056d4d84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd1c0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar3 = param_3;
  func_0x00010c13b320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x000100576d08(uVar3,auStack_48,auStack_50);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c1ecd00(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010c1aec80(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bf6c0a0(uVar3);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1056d4ef0; end: 1056d4f07;  */

void FUN_1056d4ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001056d4f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1056d4f08; end: 1056d5067; -[SCInviteGRPCService joinInviteWithRequest:completion:] */

void FUN_1056d4f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd1c8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar3 = param_3;
  func_0x00010c06a860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x000100576d08(uVar3,auStack_48,auStack_50);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c1aeb00(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c085a80(uVar3);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1056d5068; end: 1056d5087;  */

void FUN_1056d5068(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    uVar1 = 4;
    if (param_3 == 0) {
      uVar1 = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001056d5080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  return;
}



/* Entry: 1056d5088; end: 1056d52cf; -[SCInviteGRPCService createInviteDeeplinkWithURL:completion:] */

void FUN_1056d5088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd1d0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100576d08(uVar2,auStack_48,auStack_50);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar3);
  }
  func_0x00010c1fcb80(puVar1);
  _objc_release(puVar3);
  func_0x00010c18ad40(puVar1);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bf55c40(uVar2);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1056d52d0; end: 1056d53bf; -[SCInviteGRPCService fetchInviteWithInviteID:completion:] */

void FUN_1056d52d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd1d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1ffb60();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1056d53c0;
  puStack_40 = &UNK_1108a9630;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa7b00(uVar3,param_2,puVar1,puVar2,&puStack_58);
  _objc_release(puVar2);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1056d53c0; end: 1056d5557;  */

void FUN_1056d53c0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar6 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010c06a580(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06ab60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe2ee0();
    lVar5 = lVar3;
    func_0x00010c0b5940(lVar3);
    func_0x000100c4a928(lVar4,lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126bd1e0;
    _objc_alloc(PTR_PTR_1126bd1e0);
    lVar1 = param_2;
    func_0x00010c06a580(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e90a0();
    lVar2 = param_2;
    func_0x00010c06a580(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar3 = lVar2;
    func_0x00010c0f6420(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01eb40(puVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar6,param_3);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056d5558; end: 1056d55bb; -[SCInviteGRPCService .cxx_destruct] */

void FUN_1056d5558(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056d55bc; end: 1056d560b; -[SCInviteServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056d55bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727cf8);
  _objc_destroyWeak(param_1 + _DAT_112727cf4);
  _objc_destroyWeak(param_1 + _DAT_112727cfc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727d00);
  return;
}



/* Entry: 1056d560c; end: 1056d567f; -[UNISCSharingInvite initWithUnifiedGrpcService:] */

undefined1 * FUN_1056d560c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9b28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056d5680; end: 1056d5763; -[UNISCSharingInvite createInviteWithRequest:callOptionsBuilder:handler:] */

void FUN_1056d5680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd1f8;
  _objc_opt_class(PTR_PTR_1126bd1f8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df6ad8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056d5764; end: 1056d5847; -[UNISCSharingInvite fetchInviteWithRequest:callOptionsBuilder:handler:] */

void FUN_1056d5764(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd200;
  _objc_opt_class(PTR_PTR_1126bd200);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df6af8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056d5848; end: 1056d592b; -[UNISCSharingInvite deleteInvitesForResourceWithRequest:callOptionsBuilder:handler:] */

void FUN_1056d5848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd208;
  _objc_opt_class(PTR_PTR_1126bd208);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df6b18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056d592c; end: 1056d5a0f; -[UNISCSharingInvite createDeeplinkWithInviteWithRequest:callOptionsBuilder:handler:] */

void FUN_1056d592c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd210;
  _objc_opt_class(PTR_PTR_1126bd210);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df6b38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056d5a10; end: 1056d5af3; -[UNISCSharingInvite updateInviteWithRequest:callOptionsBuilder:handler:] */

void FUN_1056d5a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd218;
  _objc_opt_class(PTR_PTR_1126bd218);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df6b58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056d5af4; end: 1056d5bd7; -[UNISCSharingInvite joinInviteWithRequest:callOptionsBuilder:handler:] */

void FUN_1056d5af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd220;
  _objc_opt_class(PTR_PTR_1126bd220);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df6b78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056d5bd8; end: 1056d5be3; -[UNISCSharingInvite .cxx_destruct] */

void FUN_1056d5bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


