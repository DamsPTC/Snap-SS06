/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fa3a60; end: 100fa3b37;  */

int FUN_100fa3a60(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 2) >> 2);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 100fa3b38; end: 100fa3bdf;  */

long FUN_100fa3b38(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100fa3be0; end: 100fa3c3f;  */

long FUN_100fa3be0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000100083374();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 100fa3c40; end: 100fa3c8f;  */

undefined8 * FUN_100fa3c40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000834e4();
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  uVar1 = param_1[5];
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c615e8(uVar1);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 100fa3c90; end: 100fa3d3b;  */

int FUN_100fa3c90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100fa3d3c; end: 100fa3d53; +[_TtC29MemoriesQuickCutOrchestrationP33_0FF2EDE254BC5FB942E7EEC10B2B99C631QuickCutOnboardingVideoTileView layerClass] */

void FUN_100fa3d3c(void)

{
  func_0x000100fa5144(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 100fa3d54; end: 100fa3efb;  */

undefined *
FUN_100fa3d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4020000000000000);
  func_0x000107c61170(puVar2);
  func_0x000107c534b0(puVar1);
  func_0x000107c61170(puVar1);
  puVar2 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  puVar4 = puVar2;
  func_0x000107c6148c(puVar2,puVar3);
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c5a51c();
  }
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  puVar4 = puVar2;
  func_0x000107c6148c(puVar2,puVar3);
  puVar3 = puVar1;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar3 = puVar5;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c52b50(puVar4);
    func_0x000107c61170(puVar2);
    puVar2 = puVar1;
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 100fa3efc; end: 100fa3f1b; -[_TtC29MemoriesQuickCutOrchestrationP33_0FF2EDE254BC5FB942E7EEC10B2B99C631QuickCutOnboardingVideoTileView initWithFrame:] */

void FUN_100fa3efc(void)

{
  FUN_100fa3d54();
  return;
}



/* Entry: 100fa3f1c; end: 100fa3fbf; -[_TtC29MemoriesQuickCutOrchestrationP33_0FF2EDE254BC5FB942E7EEC10B2B99C631QuickCutOnboardingVideoTileView initWithCoder:] */

void FUN_100fa3f1c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MemoriesQuickCutOrchestration/QuickCutOnboardingCarouselView.swift",0x42,2,
                      0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa3f74);
  (*pcVar1)();
}



/* Entry: 100fa3fc0; end: 100fa4037; -[_TtC29MemoriesQuickCutOrchestration30QuickCutOnboardingCarouselView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa3fc0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_1 + _DAT_112d50cd8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_1 + _DAT_112d50ce0) = puVar1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MemoriesQuickCutOrchestration/QuickCutOnboardingCarouselView.swift",0x42,2,
                      0x5b,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa4038);
  (*pcVar2)();
}



/* Entry: 100fa4038; end: 100fa40df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa4038(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_layoutSubviews_112600e60);
  lVar1 = _DAT_112d50cd8;
  func_0x000107c61428(unaff_x20 + _DAT_112d50cd8,auStack_48,0,0);
  uVar3 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    FUN_100fa40e0();
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      func_0x000107c61170();
      FUN_100fa4980();
    }
  }
  return;
}



/* Entry: 100fa40e0; end: 100fa497f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa40e0(double param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [32];
  
  lVar23 = _DAT_112d50cd8;
  lVar21 = *(long *)(unaff_x20 + _DAT_112d50cc8);
  if (*(long *)(lVar21 + 0x10) != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112d50cd8,auStack_b0,0,0);
    uVar17 = *(ulong *)(unaff_x20 + lVar23);
    if (uVar17 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar17 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar17) {
        uVar3 = uVar17;
      }
      func_0x000107c60480();
    }
    if (uVar3 == 0) {
      func_0x000107c3ec60();
      func_0x000107c609cc();
      if (0.0 < param_1) {
        func_0x000107c3ec60();
        func_0x000107c609b0();
        if (0.0 < param_1) {
          lVar18 = *(long *)(lVar21 + 0x10);
          func_0x000107c3ec60();
          func_0x000107c609cc();
          dVar24 = param_1;
          func_0x000107c3ec60();
          func_0x000107c609b0();
          dVar24 = (double)(long)(param_1 / (dVar24 * 0.5625 + 12.0));
          if (0x7fefffffffffffff < (ulong)ABS(dVar24)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4944);
            (*pcVar1)();
          }
          if (dVar24 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4948);
            (*pcVar1)();
          }
          if (9.223372036854776e+18 <= dVar24) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa494c);
            (*pcVar1)();
          }
          lVar22 = (long)dVar24 + 1;
          if (SCARRY8((long)dVar24,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4950);
            (*pcVar1)();
          }
          lVar8 = lVar22 + lVar18;
          if (SCARRY8(lVar22,lVar18)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4954);
            (*pcVar1)();
          }
          if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4958);
            (*pcVar1)();
          }
          if (lVar18 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa495c);
            (*pcVar1)();
          }
          lVar22 = 0;
          if (lVar18 != 0) {
            lVar22 = (lVar8 + -1) / lVar18;
          }
          uVar17 = lVar22 * lVar18;
          if (SUB168(SEXT816(lVar22) * SEXT816(lVar18),8) != (long)uVar17 >> 0x3f) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4960);
            (*pcVar1)();
          }
          if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4964);
            (*pcVar1)();
          }
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (uVar17 != 0) {
            lVar22 = *(long *)(unaff_x20 + _DAT_112d50cd0);
            uVar3 = uVar17;
            do {
              lVar8 = lVar22;
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar8 != 0) {
                uVar6 = 0xd000000000000020;
                func_0x000107c5fadc(0xd000000000000020,0x800000010ef1d530);
                lVar7 = lVar8;
                func_0x000107c4f7ec();
                func_0x000107c61180();
                func_0x000107c615e8(lVar8);
                func_0x000107c61170(uVar6);
                func_0x000107c568bc(lVar7);
                lVar8 = 0;
                func_0x000100fa507c();
                func_0x000107c613fc();
                *(long *)(lVar8 + 0x10) = lVar7;
                *(undefined8 *)(lVar8 + 0x18) = 0;
                puVar5 = puVar9;
                func_0x000107c61550();
                if ((((int)puVar5 == 0) || ((long)puVar9 < 0)) ||
                   (puVar5 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
                  if ((ulong)puVar9 >> 0x3e == 0) {
                    puVar4 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar4 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar9) {
                      puVar4 = puVar9;
                    }
                    func_0x000107c60480(puVar4);
                  }
                  puVar5 = (undefined *)0x0;
                  func_0x000100fb5298(0,puVar4 + 1,1,puVar9);
                }
                uVar19 = (ulong)puVar5 & 0xffffffffffffff8;
                uVar10 = *(ulong *)(uVar19 + 0x10);
                puVar9 = puVar5;
                if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar10) {
                  puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
                  func_0x000100fb5298(puVar9,uVar10 + 1,1,puVar5);
                  uVar19 = (ulong)puVar9 & 0xffffffffffffff8;
                }
                *(ulong *)(uVar19 + 0x10) = uVar10 + 1;
                *(long *)(uVar19 + uVar10 * 8 + 0x20) = lVar8;
              }
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          lVar22 = _DAT_112d50ce0;
          func_0x000107c61428(unaff_x20 + _DAT_112d50ce0,auStack_c8,1,0);
          uVar6 = *(undefined8 *)(unaff_x20 + lVar22);
          *(undefined **)(unaff_x20 + lVar22) = puVar9;
          func_0x000107c6142c(uVar6);
          uVar3 = *(ulong *)(unaff_x20 + lVar22);
          if (uVar3 >> 0x3e == 0) {
            uVar10 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar10 = uVar3 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar3) {
              uVar10 = uVar3;
            }
            func_0x000107c60480();
          }
          if (uVar10 == uVar17) {
            if (uVar17 != 0) {
              uVar3 = 0;
              do {
                func_0x000107c3ec60();
                func_0x000107c609b0();
                dVar25 = dVar24 * 0.5625 + 12.0;
                dVar24 = -dVar25;
                func_0x000107c3ec60();
                func_0x000107c609b0();
                dVar26 = dVar25 * 0.5625;
                func_0x000107c3ec60();
                func_0x000107c609b0();
                lVar8 = 0;
                func_0x000100fa3f74();
                func_0x000107c610f8();
                func_0x000107c469a4(dVar24,0,dVar26,dVar25);
                func_0x000107c61428(unaff_x20 + lVar22,auStack_e0,0x20,0);
                uVar10 = *(ulong *)(unaff_x20 + lVar22);
                if ((uVar10 & 0xc000000000000001) == 0) {
                  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4938);
                    (*pcVar1)();
                  }
                  if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa493c);
                    (*pcVar1)();
                  }
                  uVar10 = *(ulong *)(uVar10 + uVar3 * 8 + 0x20);
                  func_0x000107c6157c(uVar10);
                }
                else {
                  uVar10 = uVar3;
                  FUN_100fb11f8();
                }
                func_0x000107c614a8(auStack_e0);
                lVar11 = *(long *)(uVar10 + 0x10);
                func_0x000107c61174(lVar11);
                func_0x000107c61574(uVar10);
                lVar7 = lVar8;
                func_0x000107c4aba4();
                func_0x000107c61180();
                puVar9 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
                func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
                lVar12 = lVar7;
                func_0x000107c6148c(lVar7,puVar9);
                lVar13 = lVar11;
                if (lVar12 != 0) {
                  func_0x000107c57500();
                  lVar13 = lVar7;
                  lVar7 = lVar11;
                }
                func_0x000107c61170(lVar13);
                func_0x000107c61170(lVar7);
                func_0x000107c3d89c();
                func_0x000107c61428(unaff_x20 + lVar23,auStack_e0,0x21,0);
                uVar19 = *(ulong *)(unaff_x20 + lVar23);
                func_0x000107c61174();
                uVar10 = uVar19;
                func_0x000107c61550();
                *(ulong *)(unaff_x20 + lVar23) = uVar19;
                if ((((int)uVar10 == 0) || ((long)uVar19 < 0)) ||
                   (uVar10 = uVar19, (uVar19 >> 0x3e & 1) != 0)) {
                  if (uVar19 >> 0x3e == 0) {
                    uVar14 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    uVar14 = uVar19 & 0xffffffffffffff8;
                    if (0x7fffffffffffffff < uVar19) {
                      uVar14 = uVar19;
                    }
                    func_0x000107c60480(uVar14);
                  }
                  uVar10 = 0;
                  func_0x000100fb5284(0,uVar14 + 1,1,uVar19);
                  *(ulong *)(unaff_x20 + lVar23) = uVar10;
                }
                uVar20 = uVar10 & 0xffffffffffffff8;
                uVar19 = *(ulong *)(uVar20 + 0x10);
                uVar14 = uVar10;
                if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar19) {
                  uVar14 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
                  func_0x000100fb5284(uVar14,uVar19 + 1,1,uVar10);
                  uVar20 = uVar14 & 0xffffffffffffff8;
                }
                uVar3 = uVar3 + 1;
                *(ulong *)(uVar20 + 0x10) = uVar19 + 1;
                *(long *)(uVar20 + uVar19 * 8 + 0x20) = lVar8;
                *(ulong *)(unaff_x20 + lVar23) = uVar14;
                func_0x000107c614a8(auStack_e0);
                func_0x000107c61170(lVar8);
              } while (uVar17 - uVar3 != 0);
            }
            uVar3 = *(ulong *)(lVar21 + 0x10);
            if (uVar3 != 0) {
              puVar9 = PTR___sytN_11034f1b0 + 8;
              uVar10 = 0;
              do {
                puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if (*(ulong *)(lVar21 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4940);
                  (*pcVar1)();
                }
                lVar23 = 0;
                uVar6 = *(undefined8 *)(lVar21 + 0x20 + uVar10 * 8);
                uVar19 = uVar10 + 1;
                uVar14 = uVar10;
                while ((long)uVar14 < (long)uVar17) {
                  bVar2 = SCARRY8(uVar14,lVar18);
                  uVar20 = uVar14 + lVar18;
                  uVar14 = 0x7fffffffffffffff;
                  if (!bVar2) {
                    uVar14 = uVar20;
                  }
                  bVar2 = SCARRY8(lVar23,1);
                  lVar23 = lVar23 + 1;
                  if (bVar2) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa48e0);
                    (*pcVar1)();
                  }
                }
                func_0x000107c6157c();
                func_0x000100fa7e00(0,lVar23,0);
                for (; lVar23 != 0; lVar23 = lVar23 + -1) {
                  if ((long)uVar17 <= (long)uVar10) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa48e4);
                    (*pcVar1)();
                  }
                  uVar14 = 0x7fffffffffffffff;
                  if (!SCARRY8(uVar10,lVar18)) {
                    uVar14 = uVar10 + lVar18;
                  }
                  func_0x000107c61428(unaff_x20 + lVar22,auStack_e0,0x20,0);
                  uVar20 = *(ulong *)(unaff_x20 + lVar22);
                  if ((uVar20 & 0xc000000000000001) == 0) {
                    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa48e8);
                      (*pcVar1)();
                    }
                    if (*(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa48ec);
                      (*pcVar1)();
                    }
                    uVar10 = *(ulong *)(uVar20 + uVar10 * 8 + 0x20);
                    func_0x000107c6157c(uVar10);
                  }
                  else {
                    FUN_100fb11f8();
                  }
                  func_0x000107c614a8(auStack_e0);
                  uVar20 = *(ulong *)(puVar5 + 0x10);
                  if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar20) {
                    func_0x000100fa7e00(1 < *(ulong *)(puVar5 + 0x18),uVar20 + 1,1);
                  }
                  *(ulong *)(puVar5 + 0x10) = uVar20 + 1;
                  *(ulong *)(puVar5 + uVar20 * 8 + 0x20) = uVar10;
                  uVar10 = uVar14;
                }
                if ((long)uVar10 < (long)uVar17) {
                  do {
                    bVar2 = SCARRY8(uVar10,lVar18);
                    lVar23 = uVar10 + lVar18;
                    func_0x000107c61428(unaff_x20 + lVar22,auStack_e0,0x20,0);
                    uVar14 = *(ulong *)(unaff_x20 + lVar22);
                    if ((uVar14 & 0xc000000000000001) == 0) {
                      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa48f0);
                        (*pcVar1)();
                      }
                      if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa48f4);
                        (*pcVar1)();
                      }
                      uVar14 = *(ulong *)(uVar14 + uVar10 * 8 + 0x20);
                      func_0x000107c6157c(uVar14);
                    }
                    else {
                      uVar14 = uVar10;
                      FUN_100fb11f8();
                    }
                    func_0x000107c614a8(auStack_e0);
                    uVar20 = *(ulong *)(puVar5 + 0x10);
                    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar20) {
                      func_0x000100fa7e00(1 < *(ulong *)(puVar5 + 0x18),uVar20 + 1,1);
                    }
                    *(ulong *)(puVar5 + 0x10) = uVar20 + 1;
                    *(ulong *)(puVar5 + uVar20 * 8 + 0x20) = uVar14;
                    uVar10 = uVar10 + lVar18;
                  } while (lVar23 < (long)uVar17 && !bVar2);
                }
                puVar4 = &UNK_1103718c0;
                func_0x000107c613fc(&UNK_1103718c0,0x18,7);
                func_0x000107c61614(puVar4 + 0x10);
                puVar15 = &UNK_1103718e8;
                func_0x000107c613fc(&UNK_1103718e8,0x28,7);
                *(undefined **)(puVar15 + 0x10) = puVar4;
                *(undefined8 *)(puVar15 + 0x18) = uVar6;
                *(undefined **)(puVar15 + 0x20) = puVar5;
                func_0x000107c6157c(uVar6);
                uVar16 = 0x41;
                func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d917710,puVar15,puVar9);
                func_0x000107c61574(uVar6);
                func_0x000107c61574(puVar15);
                func_0x000107c61574(uVar16);
                uVar10 = uVar19;
              } while (uVar19 != uVar3);
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100fa4980; end: 100fa4cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa4980(double param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_98 [24];
  
  lVar1 = _DAT_112d50cd8;
  func_0x000107c61428(unaff_x20 + _DAT_112d50cd8,auStack_98,0,0);
  uVar7 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar7 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar9 = uVar7;
    }
    func_0x000107c60480();
  }
  if (0 < (long)uVar9) {
    func_0x000107c3ec60();
    func_0x000107c609b0();
    dVar14 = param_1;
    func_0x000107c3ec60();
    func_0x000107c609cc();
    dVar15 = dVar14;
    func_0x000107c3ec60();
    func_0x000107c609b0();
    uVar7 = *(ulong *)(unaff_x20 + lVar1);
    if (uVar7 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar11 = uVar7;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar7);
    if (uVar11 != 0) {
      uVar8 = 0;
      dVar13 = (param_1 * 0.5625 + 12.0) * (double)uVar9;
      dVar14 = dVar14 + dVar15 * 0.5625 * 0.5;
      dVar15 = dVar13 / 40.0;
      do {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa4c84);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar7 + uVar8 * 8 + 0x20);
          func_0x000107c61174(uVar3);
        }
        else {
          uVar3 = uVar8;
          func_0x000100fb1394(uVar8,uVar7);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa4c50);
          (*pcVar2)();
        }
        uVar10 = uVar8 + 1;
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c4aba4();
        func_0x000107c61180();
        uVar12 = 0x746e6f7a69726f68;
        uVar5 = uVar12;
        func_0x000107c5fadc(0x746e6f7a69726f68,0xef6564696c536c61);
        func_0x000107c4fe90(uVar4);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        uVar5 = 0x6e6f697469736f70;
        func_0x000107c5fadc(0x6e6f697469736f70,0xea0000000000782e);
        puVar6 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
        func_0x000107c61168(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
        func_0x000107c3dd18();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        func_0x000107c5f06c(dVar14);
        func_0x000107c54ce4(puVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c5f06c(dVar14 - dVar13);
        func_0x000107c59e64(puVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61174(puVar6);
        func_0x000107c54358(dVar15);
        func_0x000107c57d30(0x7f7fffff,puVar6);
        func_0x000107c59d68((dVar15 / (double)uVar9) * (double)(long)uVar8,puVar6);
        func_0x000107c61170(puVar6);
        uVar4 = uVar3;
        func_0x000107c4aba4(uVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        func_0x000107c5fadc(0x746e6f7a69726f68,0xef6564696c536c61);
        func_0x000107c3d5a4(uVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar12);
        uVar8 = uVar8 + 1;
      } while (uVar10 != uVar11);
    }
    func_0x000107c6142c(uVar7);
  }
  return;
}



/* Entry: 100fa4cbc; end: 100fa4ce3; -[_TtC29MemoriesQuickCutOrchestration30QuickCutOnboardingCarouselView layoutSubviews] */

void FUN_100fa4cbc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100fa4038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100fa4ce4; end: 100fa4d53;  */

void FUN_100fa4ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa4d54,uVar1,uVar2);
  return;
}



/* Entry: 100fa4d54; end: 100fa4e47;  */

void FUN_100fa4d54(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61170();
    plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar1;
    uVar2 = 0x112d50db8;
    func_0x0001000285a8(0x112d50db8,&UNK_10d917990);
    *plVar1 = unaff_x22;
    plVar1[1] = 0x100fa4e04;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
              (unaff_x22 + 0x28,*(undefined8 *)(unaff_x22 + 0x38),uVar2);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000100fa4e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa4e48; end: 100fa4f9f;  */

void FUN_100fa4e48(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  lVar8 = *(long *)(unaff_x22 + 0x28);
  if (lVar8 != 0) {
    uVar10 = *(ulong *)(unaff_x22 + 0x40);
    if (uVar10 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
      puVar2 = PTR__OBJC_CLASS___AVPlayerLooper_1126dbce0;
    }
    else {
      uVar7 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar7 = uVar10;
      }
      func_0x000107c60480();
      puVar2 = PTR__OBJC_CLASS___AVPlayerLooper_1126dbce0;
    }
    PTR__OBJC_CLASS___AVPlayerLooper_1126dbce0 = puVar2;
    if (uVar7 != 0) {
      func_0x000107c61168();
      if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4fa0);
        (*pcVar1)();
      }
      uVar9 = 0;
      lVar5 = *(long *)(unaff_x22 + 0x40);
      do {
        if ((uVar10 & 0xc000000000000001) == 0) {
          uVar11 = *(ulong *)(lVar5 + 0x20 + uVar9 * 8);
          func_0x000107c6157c(uVar11);
        }
        else {
          uVar11 = uVar9;
          FUN_100fb11f8(uVar9,*(undefined8 *)(unaff_x22 + 0x40));
        }
        uVar9 = uVar9 + 1;
        puVar3 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
        func_0x000107c457a0();
        func_0x000107c5015c(*(undefined8 *)(uVar11 + 0x10));
        puVar4 = puVar2;
        func_0x000107c4e99c();
        func_0x000107c61180();
        uVar6 = *(undefined8 *)(uVar11 + 0x18);
        *(undefined **)(uVar11 + 0x18) = puVar4;
        func_0x000107c61170(uVar6);
        func_0x000107c4e868(*(undefined8 *)(uVar11 + 0x10));
        func_0x000107c61170(puVar3);
        func_0x000107c61574(uVar11);
      } while (uVar7 != uVar9);
    }
    func_0x000107c61170(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100fa4f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa4fa0; end: 100fa4fcb; -[_TtC29MemoriesQuickCutOrchestration30QuickCutOnboardingCarouselView initWithFrame:] */

void FUN_100fa4fa0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesQuickCutOrchestration.QuickCutOnboardingCarouselView",0x3c,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa4fcc);
  (*pcVar1)();
}



/* Entry: 100fa4fcc; end: 100fa4fcf;  */

void FUN_100fa4fcc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100fa4fd0; end: 100fa5003;  */

void FUN_100fa4fd0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100fa5004; end: 100fa505b; -[_TtC29MemoriesQuickCutOrchestration30QuickCutOnboardingCarouselView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100fa5020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa5040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fa5024) */
/* WARNING: Removing unreachable block (ram,0x000100fa5044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa5004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d50cc8));
  return;
}



/* Entry: 100fa505c; end: 100fa509b;  */

void FUN_100fa505c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a66a0);
  return;
}



/* Entry: 100fa509c; end: 100fa5107;  */

void FUN_100fa509c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fa5108;
  plVar3[7] = lVar1;
  plVar3[8] = lVar4;
  plVar3[6] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[9] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[10] = lVar1;
  plVar3[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa4d54,lVar1,lVar2);
  return;
}



/* Entry: 100fa5108; end: 100fa5187;  */

void FUN_100fa5108(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fa5140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fa5188; end: 100fa518b;  */

void FUN_100fa5188(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100fa518c; end: 100fa51eb; -[_TtC29MemoriesQuickCutOrchestration27QuickCutOnboardingPresenter init] */

void FUN_100fa518c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesQuickCutOrchestration.QuickCutOnboardingPresenter",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa51b8);
  (*pcVar1)();
}



/* Entry: 100fa51ec; end: 100fa5283; -[_TtC29MemoriesQuickCutOrchestration27QuickCutOnboardingPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100fa5228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fa522c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa51ec(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d50dc8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d50dd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d50dd8));
  return;
}



/* Entry: 100fa5284; end: 100fa52a3;  */

void FUN_100fa5284(void)

{
  func_0x000107c61168(&PTR_PTR_1127a6778);
  return;
}



/* Entry: 100fa52a4; end: 100fa52a7; -[_TtC29MemoriesQuickCutOrchestration27QuickCutOnboardingPresenter tray:positionDidChange:] */

void FUN_100fa52a4(void)

{
  return;
}



/* Entry: 100fa52a8; end: 100fa52e7; -[_TtC29MemoriesQuickCutOrchestration27QuickCutOnboardingPresenter trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa52a8(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61604(param_1 + _DAT_112d50df8,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d50e00);
  *(undefined8 *)(param_1 + _DAT_112d50e00) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100fa52e8; end: 100fa5353;  */

void FUN_100fa52e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa5354,uVar1,uVar2);
  return;
}



/* Entry: 100fa5354; end: 100fa54db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa5354(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112d50df8;
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d50df8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c41864();
      func_0x000107c615e8(lVar2);
      func_0x000107c61604(lVar1 + lVar4,0);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112d50e00);
      *(undefined8 *)(lVar1 + _DAT_112d50e00) = 0;
      func_0x000107c61170(uVar3);
    }
    lVar4 = lVar1 + _DAT_112d50df0;
    func_0x000107c61618();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar2 = lVar4 + _DAT_112d51890;
      func_0x000107c61618();
      if (lVar2 != 0) {
        puVar5 = PTR_PTR_1126aff58;
        func_0x000107c610f8(PTR_PTR_1126aff58);
        func_0x000107c48080();
        FUN_100fa58a4(lVar4 + 0x80,unaff_x22 + 0x10);
        if (*(long *)(unaff_x22 + 0x28) == 0) {
          func_0x000107c61170(lVar2);
          func_0x000107c61170(puVar5);
          func_0x000100fa58f4(unaff_x22 + 0x10);
        }
        else {
          func_0x0001000a8868();
          func_0x000107c61174(puVar5);
          FUN_100fc3094();
          func_0x000107c61170(lVar2);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar5);
          func_0x0001000834e4(unaff_x22 + 0x10);
        }
      }
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100fa54d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa54dc; end: 100fa5517;  */

void FUN_100fa54dc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fa5514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fa5518; end: 100fa5583;  */

void FUN_100fa5518(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa5584,uVar1,uVar2);
  return;
}



/* Entry: 100fa5584; end: 100fa5603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa5584(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d50df0;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_100fc1fc8();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100fa5600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa5604; end: 100fa563b;  */

/* WARNING: Possible PIC construction at 0x000100fa56d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fa56dc) */

void FUN_100fa5604(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_110371990;
  puVar1 = &UNK_110371940;
  func_0x000107c613fc(&UNK_110371940,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c613fc(&UNK_110371990,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d917788;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d917790,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 100fa563c; end: 100fa56f7;  */

/* WARNING: Possible PIC construction at 0x000100fa56d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fa56dc) */

void FUN_100fa563c(void)

{
  undefined *puVar1;
  long in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  
  puVar1 = &UNK_110371940;
  func_0x000107c613fc(&UNK_110371940,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c613fc(in_x3,0x20,7);
  *(undefined8 *)(in_x3 + 0x10) = in_x4;
  *(undefined **)(in_x3 + 0x18) = puVar1;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,in_x5,in_x3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x3);
  return;
}



/* Entry: 100fa56f8; end: 100fa577b;  */

void FUN_100fa56f8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100fa5740;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa5584,lVar1,lVar2);
  return;
}



/* Entry: 100fa577c; end: 100fa57eb;  */

void FUN_100fa577c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fa593c;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 100fa57ec; end: 100fa5833;  */

void FUN_100fa57ec(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100fa5940;
  plVar3[10] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xb] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa5354,lVar1,lVar2);
  return;
}



/* Entry: 100fa5834; end: 100fa58a3;  */

void FUN_100fa5834(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100fa5944;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 100fa58a4; end: 100fa593b;  */

undefined8 FUN_100fa58a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d50e30;
  func_0x0001000285a8(0x112d50e30,&UNK_10d9185c0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100fa593c; end: 100fa594f;  */

void FUN_100fa593c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fa5778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fa5950; end: 100fa59ef;  */

void FUN_100fa5950(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 100fa59f0; end: 100fa59f3;  */

void FUN_100fa59f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d50e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9177f0;
  func_0x000107c61520(&UNK_10d9177f0,&UNK_110371a38);
  puRam0000000112d50e38 = puVar1;
  return;
}



/* Entry: 100fa59f4; end: 100fa5a33;  */

void FUN_100fa59f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d50e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9177f0;
  func_0x000107c61520(&UNK_10d9177f0,&UNK_110371a38);
  puRam0000000112d50e38 = puVar1;
  return;
}



/* Entry: 100fa5a34; end: 100fa5b47;  */

void FUN_100fa5a34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100fa5b48; end: 100fa5caf;  */

void FUN_100fa5b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  
  puVar1 = PTR_PTR_1126b08b0;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c3f71c();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x68) = puVar1;
  func_0x000107c61170(puVar2);
  uVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  puVar2 = PTR_PTR_1126b17d8;
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
  func_0x000107c460ec();
  *(undefined **)(unaff_x22 + 0x70) = puVar2;
  func_0x000107c61170(uVar3);
  puVar4 = puVar1;
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x0) {
    lVar5 = *(long *)(unaff_x22 + 0x60);
    func_0x000100fa61f8();
    if (lVar5 == 0) {
      lVar5 = 0;
      puVar4 = (undefined *)0x0;
    }
    else {
      func_0x000107c614f0(lVar5);
      func_0x000107c5fca8();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa5cb0,lVar5,puVar4);
    return;
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fa5c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 100fa5cb0; end: 100fa5d17;  */

void FUN_100fa5cb0(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100fa5d18;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_100fa5d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100fa5d18; end: 100fa5d93;  */

void FUN_100fa5d18(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fa5d58,*(undefined8 *)(*unaff_x22 + 0x60),0);
  return;
}



/* Entry: 100fa5d94; end: 100fa5fb3;  */

void FUN_100fa5d94(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000d224c(&puStack_90);
  puVar1 = puStack_90;
  if (puStack_90 == (undefined *)0x0) {
    **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
    func_0x000107c6144c(param_1);
  }
  else {
    puVar3 = &UNK_110371a68;
    func_0x000107c613fc(&UNK_110371a68,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,param_2);
    (**(code **)(lVar10 + 0x10))(auStack_a0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),param_4,lVar2);
    uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar8 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
    puVar4 = &UNK_110371a90;
    uStack_98 = param_3;
    func_0x000107c613fc(&UNK_110371a90,uVar8 + lVar9,uVar6 | 7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = param_1;
    (**(code **)(lVar10 + 0x20))
              (puVar4 + uVar8,auStack_a0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),lVar2);
    pcStack_70 = FUN_100fa6238;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100f17d9c;
    puStack_78 = &UNK_110371aa8;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_68);
    puVar3 = puVar1;
    func_0x000107c5078c();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61428(param_2 + 0x80,&puStack_90,0x21,0);
    func_0x000107c615f0(puVar3);
    FUN_100fa6294();
    uVar8 = *(ulong *)(param_2 + 0x80);
    uVar7 = uVar8 & 0xffffffffffffff8;
    uVar6 = *(ulong *)(uVar7 + 0x10);
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_100fb53ec(uVar8,uVar6 + 1,1);
      uVar7 = uVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
    *(undefined **)(uVar7 + uVar6 * 8 + 0x20) = puVar3;
    *(ulong *)(param_2 + 0x80) = uVar8;
    func_0x000107c614a8(&puStack_90);
    func_0x000107c615e8(puVar1);
    func_0x000107c615e8(puVar3);
  }
  return;
}



/* Entry: 100fa5fb4; end: 100fa6103;  */

void FUN_100fa5fb4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = 0;
    func_0x000107c6144c(param_3);
  }
  else {
    func_0x000107c44314();
    if (param_1 == 0) {
      func_0x0001000d224c(&lStack_60);
      if (lStack_60 == 0) {
        lVar3 = 0;
      }
      else {
        func_0x000107c5ed70();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar2);
        lVar1 = lStack_60;
        func_0x000107c4093c();
        func_0x000107c61180();
        func_0x000107c615e8(lStack_60);
        func_0x000107c61170(param_1);
        lVar3 = lVar1;
        func_0x000107c4d444();
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
      }
      **(long **)(*(long *)(param_3 + 0x40) + 0x28) = lVar3;
      func_0x000107c61174(lVar3);
      func_0x000107c6144c(param_3);
      func_0x000107c61170(lVar3);
    }
    else {
      **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = 0;
      func_0x000107c6144c(param_3);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100fa6104; end: 100fa6157;  */

void FUN_100fa6104(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 100fa6158; end: 100fa6163;  */

void FUN_100fa6158(void)

{
  return;
}



/* Entry: 100fa6164; end: 100fa61b3;  */

void FUN_100fa6164(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fa61b4;
  plVar1[0xb] = param_1;
  plVar1[0xc] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa5b48,lVar2,0);
  return;
}



/* Entry: 100fa61b4; end: 100fa6237;  */

void FUN_100fa61b4(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fa61f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 100fa6238; end: 100fa6277;  */

void FUN_100fa6238(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar4 = auStack_58;
  func_0x000107c61428(uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff),lVar3 + 0x10,puVar4,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = 0;
    func_0x000107c6144c(lVar1);
  }
  else {
    func_0x000107c44314();
    if (param_1 == 0) {
      func_0x0001000d224c(&lStack_60);
      if (lStack_60 == 0) {
        lVar6 = 0;
      }
      else {
        func_0x000107c5ed70();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar4);
        lVar2 = lStack_60;
        func_0x000107c4093c();
        func_0x000107c61180();
        func_0x000107c615e8(lStack_60);
        func_0x000107c61170(param_1);
        lVar6 = lVar2;
        func_0x000107c4d444();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
      }
      **(long **)(*(long *)(lVar1 + 0x40) + 0x28) = lVar6;
      func_0x000107c61174(lVar6);
      func_0x000107c6144c(lVar1);
      func_0x000107c61170(lVar6);
    }
    else {
      **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = 0;
      func_0x000107c6144c(lVar1);
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 100fa6278; end: 100fa6293;  */

void FUN_100fa6278(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100fa6294; end: 100fa6303;  */

void FUN_100fa6294(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_100fb53ec(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 100fa6304; end: 100fa635b;  */

void FUN_100fa6304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  FUN_100fa6508(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 100fa635c; end: 100fa6507;  */

undefined * FUN_100fa635c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2,param_2,0xd5);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1,param_2,1);
  func_0x000107c56ba8(puVar1,param_2,1);
  func_0x000107c5251c(puVar1,param_2,1);
  func_0x000107c5670c(0x3fe0000000000000,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c537fc(0x437a0000);
  func_0x000107c5a050(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 100fa6508; end: 100fa68bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100fa6508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112d50f58;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d50f60) = 0;
  lVar1 = _DAT_112d50f68;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4038000000000000,puVar2);
  func_0x000107c52610(puVar2);
  func_0x000107c5a050(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d50f70;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4020000000000000,puVar2);
  func_0x000107c52610(puVar2);
  func_0x000107c5a050(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d50f78;
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c5a050(puVar2);
  puVar3 = puVar2;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d50f80;
  FUN_100fa635c();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d50f88;
  func_0x000100fa6444();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d50f90;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4020000000000000,puVar2);
  func_0x000107c52610(puVar2);
  func_0x000107c5a050(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d50f98;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x100f99d64;
  uStack_78 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100f9954c;
  puStack_88 = &UNK_110371b40;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(uStack_78);
  puVar3 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  puVar5 = puVar3;
  func_0x000107c3ee9c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c59a2c(puVar5);
  func_0x000107c5a050(puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  lVar1 = _DAT_112d50fa0;
  uStack_80 = 0x100f99d68;
  uStack_78 = 0;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100f9954c;
  puStack_88 = &UNK_110371b68;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(uStack_78);
  func_0x000107c3ee9c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c59a2c(puVar3);
  func_0x000107c59e34(puVar3);
  func_0x000107c52b54(puVar3);
  func_0x000107c5a050(puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112d50fa8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112d50fb0;
  uVar6 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112d50fb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d50fc0) = param_2;
  FUN_100fa7d84(param_3,unaff_x20 + _DAT_112d50fc8);
  *(undefined8 *)(unaff_x20 + _DAT_112d50fd0) = param_4;
  puVar7 = &stack0xffffffffffffff50;
  func_0x000107c61154(puVar7,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(param_3);
  return puVar7;
}



/* Entry: 100fa68bc; end: 100fa68d7;  */

void FUN_100fa68bc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100fa68d8; end: 100fa69db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa68d8(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  func_0x000107c614f0();
  lVar7 = *(long *)(unaff_x20 + _DAT_112d50fa8);
  uVar9 = *(ulong *)(lVar7 + 0x10);
  func_0x000107c61434(lVar7);
  puVar3 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
  puVar2 = PTR___ss5NeverON_11034ee88;
  if (uVar9 != 0) {
    uVar6 = 0;
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100fa69dc);
        (*pcVar4)();
      }
      uVar1 = uVar6 + 1;
      uVar8 = *(undefined8 *)(lVar7 + 0x20 + uVar6 * 8);
      func_0x000107c6157c(uVar8);
      uVar5 = 0x112d50db8;
      func_0x0001000285a8(0x112d50db8,&UNK_10d917990);
      func_0x000107c5fd50(uVar8,uVar5,puVar2,puVar3);
      func_0x000107c61574(uVar8);
      uVar6 = uVar1;
    } while (uVar9 != uVar1);
  }
  func_0x000107c6142c(lVar7);
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100fa69dc; end: 100fa69ff; -[_TtC29MemoriesQuickCutOrchestration32QuickCutOnboardingViewController dealloc] */

void FUN_100fa69dc(void)

{
  func_0x000107c61174();
  FUN_100fa68d8();
  return;
}



/* Entry: 100fa6a00; end: 100fa6b17; -[_TtC29MemoriesQuickCutOrchestration32QuickCutOnboardingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa6a00(long param_1)

{
  FUN_100fa89ec(param_1 + _DAT_112d50f58);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50f60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50f68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50f70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50f78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50f80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50f88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50f90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50f98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50fa0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d50fb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50fc0));
  func_0x0001000834e4(param_1 + _DAT_112d50fc8);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d50fd0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d50fa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d50fb0));
  return;
}



/* Entry: 100fa6b18; end: 100fa6b3f; -[_TtC29MemoriesQuickCutOrchestration32QuickCutOnboardingViewController initWithCoder:] */

void FUN_100fa6b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100fa8670();
  return;
}



/* Entry: 100fa6b40; end: 100fa6e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa6b40(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x13;
  long lVar12;
  long unaff_x20;
  code *pcVar13;
  long lVar14;
  undefined8 auStack_120 [2];
  undefined1 auStack_d0 [40];
  undefined *puStack_a8;
  undefined1 auStack_a0 [40];
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = &stack0xfffffffffffffef0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar7 - extraout_x12;
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_viewDidLoad_112684cd8);
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100fa6e30);
    (*pcVar13)();
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(lVar12);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(puVar4);
  FUN_100fa7d84(unaff_x20 + _DAT_112d50fc8,auStack_a0);
  lVar12 = *(long *)(unaff_x20 + _DAT_112d50fb8);
  lVar14 = *(long *)(lVar12 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar14 != 0) {
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100fa7e1c(0,lVar14,0);
    uVar11 = (ulong)*(byte *)(lVar6 + 0x50);
    lVar12 = lVar12 + (uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff));
    lVar9 = *(long *)(lVar6 + 0x48);
    uVar10 = uVar11 + 0x38 & (uVar11 ^ 0xffffffffffffffff);
    pcVar13 = *(code **)(lVar6 + 0x10);
    do {
      puVar2 = puStack_a8;
      (*pcVar13)(lVar8,lVar12,lVar3);
      FUN_100fa7d84(auStack_a0,auStack_d0);
      (*pcVar13)(puVar7,lVar8,lVar3);
      puVar4 = &UNK_110371ba0;
      func_0x000107c613fc(&UNK_110371ba0,uVar10 + extraout_x13,uVar11 | 7);
      FUN_100fa7e38(auStack_d0,puVar4 + 0x10);
      (**(code **)(lVar6 + 0x20))(puVar4 + uVar10,puVar7,lVar3);
      uVar5 = 0x112d50db8;
      func_0x0001000285a8(0x112d50db8,&UNK_10d917990);
      *(undefined8 *)(lVar8 + -0x10) = uVar5;
      uVar5 = 0x41;
      func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d9179a0,puVar4);
      func_0x000107c61574(puVar4);
      (**(code **)(lVar6 + 8))(lVar8,lVar3);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puStack_a8 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000100fa7e1c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_a8 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_a8 + uVar1 * 8 + 0x20) = uVar5;
      lVar12 = lVar12 + lVar9;
      lVar14 = lVar14 + -1;
      puVar4 = puStack_a8;
    } while (lVar14 != 0);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d50fa8);
  *(undefined **)(unaff_x20 + _DAT_112d50fa8) = puVar4;
  func_0x000107c6142c(uVar5);
  FUN_100fa6fa8();
  FUN_100fa7294();
  FUN_100fa7944();
  func_0x0001000834e4(auStack_a0);
  return;
}



/* Entry: 100fa6e30; end: 100fa6e9f;  */

void FUN_100fa6e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa6ea0,uVar1,uVar2);
  return;
}



/* Entry: 100fa6ea0; end: 100fa6f1f;  */

void FUN_100fa6ea0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100fa6f20;
                    /* WARNING: Could not recover jumptable at 0x000100fa6f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x20),uVar2,lVar3);
  return;
}



/* Entry: 100fa6f20; end: 100fa6f6b;  */

void FUN_100fa6f20(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100fa6f6c,*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x38));
  return;
}



/* Entry: 100fa6f6c; end: 100fa6fa7;  */

void FUN_100fa6f6c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100fa6fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fa6fa8; end: 100fa7293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa6fa8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d50f80);
  func_0x000100fc6290();
  uVar8 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(uVar6);
  func_0x000107c61170();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d50f88);
  func_0x000100fc635c();
  uVar6 = uVar8;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar8);
  func_0x000107c59c6c(uVar7);
  func_0x000107c61170();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d50f98);
  func_0x000100fc6428();
  uVar8 = uVar6;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  func_0x000107c59e1c(uVar7);
  func_0x000107c61170();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d50fa0);
  func_0x000100fc64f4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar8);
  func_0x000107c59e1c(uVar9);
  func_0x000107c61170();
  func_0x000101015bf8();
  puVar1 = (undefined8 *)*param_1;
  uVar8 = param_1[1];
  func_0x000107c61434(uVar8);
  func_0x000107c5fadc(puVar1,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c520f4(uVar7);
  func_0x000107c61170();
  func_0x000101015c04();
  uVar8 = *puVar1;
  uVar6 = puVar1[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar8,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c520f4(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c3d8b8(uVar7);
  func_0x000107c3d8b8(uVar9);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d50f78);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5af9c();
  func_0x000107c61180();
  func_0x000107c55258(uVar8);
  func_0x000107c61170(puVar2);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d50fa8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d50fc0);
  lVar3 = 0;
  FUN_100fa505c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar4 + _DAT_112d50cd8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar4 + _DAT_112d50ce0) = puVar2;
  *(undefined8 *)(lVar4 + _DAT_112d50cc8) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_112d50cd0) = uVar8;
  puVar2 = PTR_s_initWithFrame__1125e2948;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  func_0x000107c61434(uVar6);
  func_0x000107c61154(0,0,0,0,&lStack_50,puVar2);
  func_0x000107c61180();
  func_0x000107c534b0();
  func_0x000107c61170(plVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c5a050(plVar5);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d50f60);
  *(long **)(unaff_x20 + _DAT_112d50f60) = plVar5;
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 100fa7294; end: 100fa7943;  */

/* WARNING: Possible PIC construction at 0x000100fa7310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa7344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa7424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa7470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa74a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa74cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa74fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa751c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa7544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa7574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa7594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa75bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa75f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa764c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa769c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa76c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa7724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa7748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa779c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa77f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa7844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa7898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fa78d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fa789c) */
/* WARNING: Removing unreachable block (ram,0x000100fa7848) */
/* WARNING: Removing unreachable block (ram,0x000100fa77f4) */
/* WARNING: Removing unreachable block (ram,0x000100fa77a0) */
/* WARNING: Removing unreachable block (ram,0x000100fa774c) */
/* WARNING: Removing unreachable block (ram,0x000100fa7728) */
/* WARNING: Removing unreachable block (ram,0x000100fa76c4) */
/* WARNING: Removing unreachable block (ram,0x000100fa7940) */
/* WARNING: Removing unreachable block (ram,0x000100fa76f8) */
/* WARNING: Removing unreachable block (ram,0x000100fa76a0) */
/* WARNING: Removing unreachable block (ram,0x000100fa7650) */
/* WARNING: Removing unreachable block (ram,0x000100fa793c) */
/* WARNING: Removing unreachable block (ram,0x000100fa7684) */
/* WARNING: Removing unreachable block (ram,0x000100fa75f8) */
/* WARNING: Removing unreachable block (ram,0x000100fa75c0) */
/* WARNING: Removing unreachable block (ram,0x000100fa7598) */
/* WARNING: Removing unreachable block (ram,0x000100fa7578) */
/* WARNING: Removing unreachable block (ram,0x000100fa7548) */
/* WARNING: Removing unreachable block (ram,0x000100fa7938) */
/* WARNING: Removing unreachable block (ram,0x000100fa755c) */
/* WARNING: Removing unreachable block (ram,0x000100fa7520) */
/* WARNING: Removing unreachable block (ram,0x000100fa7500) */
/* WARNING: Removing unreachable block (ram,0x000100fa74d0) */
/* WARNING: Removing unreachable block (ram,0x000100fa7934) */
/* WARNING: Removing unreachable block (ram,0x000100fa74e4) */
/* WARNING: Removing unreachable block (ram,0x000100fa74a8) */
/* WARNING: Removing unreachable block (ram,0x000100fa7474) */
/* WARNING: Removing unreachable block (ram,0x000100fa7428) */
/* WARNING: Removing unreachable block (ram,0x000100fa7348) */
/* WARNING: Removing unreachable block (ram,0x000100fa7930) */
/* WARNING: Removing unreachable block (ram,0x000100fa740c) */
/* WARNING: Removing unreachable block (ram,0x000100fa7314) */
/* WARNING: Removing unreachable block (ram,0x000100fa792c) */
/* WARNING: Removing unreachable block (ram,0x000100fa7328) */
/* WARNING: Removing unreachable block (ram,0x000100fa78dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa7294(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d50f60);
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c3d89c(unaff_x20,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa792c);
  (*pcVar1)();
}



/* Entry: 100fa7944; end: 100fa7a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa7944(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  plVar1 = *(long **)(unaff_x20 + _DAT_112d50fd0);
  func_0x000107c5e370();
  func_0x000107c61180();
  plVar2 = plVar1;
  func_0x0001000b637c();
  func_0x000107c61170(plVar1);
  puVar3 = &UNK_110371c18;
  func_0x000107c613fc(&UNK_110371c18,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar4 = FUN_100fa8a10;
  puVar6 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_100fa8a10);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar6 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112d50fb0),pcVar5,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar4);
  return;
}



/* Entry: 100fa7a34; end: 100fa7a5b; -[_TtC29MemoriesQuickCutOrchestration32QuickCutOnboardingViewController viewDidLoad] */

void FUN_100fa7a34(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100fa6b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100fa7a5c; end: 100fa7c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa7a5c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112d50f60);
    if (lVar3 != 0) {
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      lVar2 = _DAT_112d50ce0;
      func_0x000107c61428(lVar3 + _DAT_112d50ce0,auStack_90,0,0);
      uVar4 = *(ulong *)(lVar3 + lVar2);
      if (uVar4 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar4 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar4) {
          uVar5 = uVar4;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar4);
      if (uVar5 != 0) {
        uVar6 = 0;
        do {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa7bf8);
              (*pcVar1)();
            }
            uVar7 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
            func_0x000107c6157c(uVar7);
          }
          else {
            uVar7 = uVar6;
            FUN_100fb11f8(uVar6,uVar4);
          }
          if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa7b74);
            (*pcVar1)();
          }
          uVar8 = uVar6 + 1;
          func_0x000107c4e868(*(undefined8 *)(uVar7 + 0x10));
          func_0x000107c61574(uVar7);
          uVar6 = uVar6 + 1;
        } while (uVar8 != uVar5);
      }
      func_0x000107c6142c(uVar4);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(long *)(param_2 + _DAT_112d50f60) != 0) {
      func_0x000107c61174(*(long *)(param_2 + _DAT_112d50f60));
      func_0x000107c61170(param_2);
      FUN_100fa4980();
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100fa7c10; end: 100fa7cab; -[_TtC29MemoriesQuickCutOrchestration32QuickCutOnboardingViewController pickSnapsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa7c10(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1 + _DAT_112d50f58;
  func_0x000107c61428(lVar2,auStack_58,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    pcVar3 = *(code **)(lVar2 + 8);
    func_0x000107c61174(param_1);
    (*pcVar3)();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100fa7cac; end: 100fa7d47; -[_TtC29MemoriesQuickCutOrchestration32QuickCutOnboardingViewController notNowTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa7cac(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1 + _DAT_112d50f58;
  func_0x000107c61428(lVar2,auStack_58,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    pcVar3 = *(code **)(lVar2 + 0x10);
    func_0x000107c61174(param_1);
    (*pcVar3)();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100fa7d48; end: 100fa7d73; -[_TtC29MemoriesQuickCutOrchestration32QuickCutOnboardingViewController initWithNibName:bundle:] */

void FUN_100fa7d48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesQuickCutOrchestration.QuickCutOnboardingViewController",0x3e,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa7d74);
  (*pcVar1)();
}



/* Entry: 100fa7d74; end: 100fa7d7b; -[_TtC29MemoriesQuickCutOrchestration32QuickCutOnboardingViewController scrollViewForTray:] */

void FUN_100fa7d74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 100fa7d7c; end: 100fa7d83; -[_TtC29MemoriesQuickCutOrchestration32QuickCutOnboardingViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_100fa7d7c(void)

{
  return 0;
}



/* Entry: 100fa7d84; end: 100fa7dc7;  */

long FUN_100fa7d84(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100fa7dc8; end: 100fa7e37;  */

void FUN_100fa7dc8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100fa7f5c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100fa7e38; end: 100fa7e4f;  */

undefined8 * FUN_100fa7e38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100fa7e50; end: 100fa7ec7;  */

void FUN_100fa7e50(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fa7ec8;
  plVar3[3] = unaff_x20 + 0x10;
  plVar3[4] = unaff_x20 + (uVar4 + 0x38 & (uVar4 ^ 0xffffffffffffffff));
  plVar3[2] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[6] = lVar1;
  plVar3[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa6ea0,lVar1,lVar2);
  return;
}



/* Entry: 100fa7ec8; end: 100fa7f5b;  */

void FUN_100fa7ec8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fa7f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fa7f5c; end: 100fa809f;  */

undefined * FUN_100fa7f5c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa80a0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d51008;
    func_0x0001000285a8(0x112d51008,&UNK_10d917a18);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d51010;
    func_0x0001000285a8(0x112d51010,&UNK_10d917a20);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100fa80a0; end: 100fa81a7;  */

undefined * FUN_100fa80a0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa81a8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d51018;
    func_0x0001000285a8(0x112d51018,&UNK_10d9182f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_1106a7c78);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x10 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100fa81a8; end: 100fa866f;  */

undefined * FUN_100fa81a8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa82cc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_100fb0b0c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000100fa507c(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100fa8670; end: 100fa89eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa8670(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = unaff_x20 + _DAT_112d50f58;
  *(undefined8 *)(lVar7 + 8) = 0;
  func_0x000107c61614(lVar7,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d50f60) = 0;
  lVar7 = _DAT_112d50f68;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4038000000000000,puVar3);
  func_0x000107c52610(puVar3);
  func_0x000107c5a050(puVar3);
  *(undefined **)(unaff_x20 + lVar7) = puVar3;
  lVar7 = _DAT_112d50f70;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4020000000000000,puVar3);
  func_0x000107c52610(puVar3);
  func_0x000107c5a050(puVar3);
  *(undefined **)(unaff_x20 + lVar7) = puVar3;
  lVar7 = _DAT_112d50f78;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c5a050(puVar3);
  puVar4 = puVar3;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar7) = puVar3;
  lVar7 = _DAT_112d50f80;
  FUN_100fa635c();
  *(undefined **)(unaff_x20 + lVar7) = puVar4;
  lVar7 = _DAT_112d50f88;
  func_0x000100fa6444();
  *(undefined **)(unaff_x20 + lVar7) = puVar4;
  lVar7 = _DAT_112d50f90;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4020000000000000,puVar3);
  func_0x000107c52610(puVar3);
  func_0x000107c5a050(puVar3);
  *(undefined **)(unaff_x20 + lVar7) = puVar3;
  lVar7 = _DAT_112d50f98;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x100f99d64;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100f9954c;
  puStack_78 = &UNK_110371bb8;
  ppuVar5 = &puStack_90;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(uStack_68);
  puVar4 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  puVar6 = puVar4;
  func_0x000107c3ee9c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c59a2c(puVar6);
  func_0x000107c5a050(puVar6);
  *(undefined **)(unaff_x20 + lVar7) = puVar6;
  lVar1 = _DAT_112d50fa0;
  uStack_70 = 0x100f99d68;
  uStack_68 = 0;
  puStack_90 = puVar3;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100f9954c;
  puStack_78 = &UNK_110371be0;
  ppuVar5 = &puStack_90;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(uStack_68);
  func_0x000107c3ee9c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c59a2c(puVar4);
  func_0x000107c59e34(puVar4);
  lVar7 = 0x112d51000;
  func_0x0001000285a8(0x112d51000,&UNK_10d917a10);
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x10) = 2;
  *(undefined8 *)(lVar7 + 0x18) = 4;
  *(undefined8 *)(lVar7 + 0x20) = 0x66;
  *(undefined8 *)(lVar7 + 0x28) = 0xffffffff80000000;
  func_0x000107c61574();
  func_0x000107c52b54(puVar4);
  func_0x000107c5a050(puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined **)(unaff_x20 + _DAT_112d50fa8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = _DAT_112d50fb0;
  uVar8 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar8;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MemoriesQuickCutOrchestration/QuickCutOnboardingViewController.swift",0x44,2,
                      0x8d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fa89ec);
  (*pcVar2)();
}



/* Entry: 100fa89ec; end: 100fa8a0f;  */

undefined8 FUN_100fa89ec(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100fa8a10; end: 100fa8a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fa8a10(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112d50f60);
    if (lVar3 != 0) {
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      lVar2 = _DAT_112d50ce0;
      func_0x000107c61428(lVar3 + _DAT_112d50ce0,auStack_90,0,0);
      uVar4 = *(ulong *)(lVar3 + lVar2);
      if (uVar4 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar4 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar4) {
          uVar5 = uVar4;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar4);
      if (uVar5 != 0) {
        uVar6 = 0;
        do {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa7bf8);
              (*pcVar1)();
            }
            uVar7 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
            func_0x000107c6157c(uVar7);
          }
          else {
            uVar7 = uVar6;
            FUN_100fb11f8(uVar6,uVar4);
          }
          if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fa7b74);
            (*pcVar1)();
          }
          uVar8 = uVar6 + 1;
          func_0x000107c4e868(*(undefined8 *)(uVar7 + 0x10));
          func_0x000107c61574(uVar7);
          uVar6 = uVar6 + 1;
        } while (uVar8 != uVar5);
      }
      func_0x000107c6142c(uVar4);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112d50f60) != 0) {
      func_0x000107c61174(*(long *)(lVar2 + _DAT_112d50f60));
      func_0x000107c61170(lVar2);
      FUN_100fa4980();
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100fa8a30; end: 100fa8ba7;  */

void FUN_100fa8a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100fa8ba8; end: 100fa8bd7;  */

void FUN_100fa8ba8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100fa8bd8; end: 100fa8c8b;  */

void FUN_100fa8bd8(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(unaff_x22 + 0x188);
  uVar1 = 0x112d3b7c0;
  func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
  func_0x0001000bda74(plVar7,uVar1);
  *(long **)(unaff_x22 + 0x198) = plVar7;
  uVar1 = 0x112d510f8;
  func_0x0001000285a8(0x112d510f8,&UNK_10d917b20);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1a0) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x1a8) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fa8c8c;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x138;
  plVar2[9] = unaff_x22 + 0x140;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x168;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_FUN_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fa8c8c; end: 100fa8cf3;  */

void FUN_100fa8c8c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1a0));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x198));
    pcVar1 = FUN_100fa8cf4;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x198));
    pcVar1 = FUN_100fa9fd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fa8cf4; end: 100fa8d4f;  */

void FUN_100fa8cf4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x168);
  *(long *)(unaff_x22 + 0x1b0) = lVar3;
  lVar1 = lVar3;
  func_0x000107c614f0();
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fa8d50;
  plVar2[3] = lVar1;
  plVar2[4] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc198,0,0);
  return;
}



/* Entry: 100fa8d50; end: 100fa8daf;  */

void FUN_100fa8d50(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x1c0) = param_1;
  *(long *)(lVar2 + 0x1c8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1b8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fa8db0;
  }
  else {
    pcVar1 = FUN_100faa278;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fa8db0; end: 100fa8e7b;  */

void FUN_100fa8db0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  
  puVar1 = PTR_PTR_1126b0d40;
  func_0x000107c61168();
  func_0x000107c43be4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c40b28();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x1d0) = puVar2;
  func_0x000107c61170(puVar1);
  func_0x0001000285a8(0x112d51110,&UNK_10d917b30);
  func_0x000103edf20c();
  *(undefined **)(unaff_x22 + 0x1d8) = puVar2;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1e0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fa8e7c;
                    /* WARNING: Could not recover jumptable at 0x000100fa8e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fab7cc();
  return;
}


