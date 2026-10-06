/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101438e54; end: 1014395cf;  */

/* WARNING: Possible PIC construction at 0x0001014391c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101439410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101439558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101439568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101439430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101439240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101439434) */
/* WARNING: Removing unreachable block (ram,0x00010143956c) */
/* WARNING: Removing unreachable block (ram,0x00010143955c) */
/* WARNING: Removing unreachable block (ram,0x000101439414) */
/* WARNING: Removing unreachable block (ram,0x0001014391cc) */
/* WARNING: Removing unreachable block (ram,0x0001014395a8) */
/* WARNING: Removing unreachable block (ram,0x0001014391d4) */
/* WARNING: Removing unreachable block (ram,0x0001014391e8) */
/* WARNING: Removing unreachable block (ram,0x00010143922c) */
/* WARNING: Removing unreachable block (ram,0x000101439244) */
/* WARNING: Removing unreachable block (ram,0x000101439248) */
/* WARNING: Removing unreachable block (ram,0x0001014392b4) */
/* WARNING: Removing unreachable block (ram,0x000101439268) */
/* WARNING: Removing unreachable block (ram,0x0001014392bc) */
/* WARNING: Removing unreachable block (ram,0x0001014395c4) */
/* WARNING: Removing unreachable block (ram,0x0001014392d4) */
/* WARNING: Removing unreachable block (ram,0x0001014394b4) */
/* WARNING: Removing unreachable block (ram,0x0001014392e0) */
/* WARNING: Removing unreachable block (ram,0x000101439364) */
/* WARNING: Removing unreachable block (ram,0x000101439370) */
/* WARNING: Removing unreachable block (ram,0x000101439374) */
/* WARNING: Removing unreachable block (ram,0x000101439378) */
/* WARNING: Removing unreachable block (ram,0x000101439424) */
/* WARNING: Removing unreachable block (ram,0x000101439438) */
/* WARNING: Removing unreachable block (ram,0x000101439440) */
/* WARNING: Removing unreachable block (ram,0x000101439470) */
/* WARNING: Removing unreachable block (ram,0x000101439474) */
/* WARNING: Removing unreachable block (ram,0x000101439478) */
/* WARNING: Removing unreachable block (ram,0x000101439308) */
/* WARNING: Removing unreachable block (ram,0x0001014394a0) */
/* WARNING: Removing unreachable block (ram,0x0001014394a8) */
/* WARNING: Removing unreachable block (ram,0x000101439310) */
/* WARNING: Removing unreachable block (ram,0x000101439318) */
/* WARNING: Removing unreachable block (ram,0x000101439330) */
/* WARNING: Removing unreachable block (ram,0x00010143947c) */
/* WARNING: Removing unreachable block (ram,0x000101439344) */
/* WARNING: Removing unreachable block (ram,0x000101439358) */
/* WARNING: Removing unreachable block (ram,0x0001014394bc) */
/* WARNING: Removing unreachable block (ram,0x000101439528) */
/* WARNING: Removing unreachable block (ram,0x000101439534) */
/* WARNING: Removing unreachable block (ram,0x00010143953c) */
/* WARNING: Removing unreachable block (ram,0x000101439554) */
/* WARNING: Removing unreachable block (ram,0x0001014393e0) */
/* WARNING: Removing unreachable block (ram,0x00010143942c) */
/* WARNING: Removing unreachable block (ram,0x000101439400) */
/* WARNING: Removing unreachable block (ram,0x0001014392b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101438e54(long param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d9dab0);
  uVar12 = (ulong)*(byte *)((undefined8 *)(unaff_x20 + _DAT_112d9dab0) + 1);
  func_0x00010143aa3c(uVar5,uVar12,*(undefined8 *)(unaff_x20 + _DAT_112d9dab8));
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101438ce4();
  FUN_101438ce4();
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar14 = *(long *)(unaff_x20 + _DAT_112d9dad0);
    lVar16 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x40);
    uVar3 = *(undefined1 *)(param_1 + 0x48);
    uVar8 = *(ulong *)(param_1 + 0x20);
    uVar13 = *(ulong *)(param_1 + 0x28);
    func_0x000107c6030c(uVar8,uVar13,*(undefined1 *)(param_1 + 0x30));
    if (lVar14 != 0) {
      uVar9 = uVar5;
      func_0x000107c5fadc(uVar5,uVar12);
      uVar10 = uVar8;
      func_0x000107c5fadc(uVar8,uVar13);
      func_0x000108b9b8c8((double)lVar16 / 1000000.0,lVar14,uVar9,uVar3,uVar10);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c5fadc(uVar5,uVar12);
      uVar12 = uVar8;
      func_0x000107c5fadc(uVar8,uVar13);
      func_0x000108b9bb98((double)lVar2 / 1000000.0,lVar14,uVar5,uVar3,uVar12);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar12);
    }
    puVar11 = puVar6;
    func_0x000107c61558();
    uVar12 = uVar8;
    uVar10 = uVar13;
    func_0x000100029284();
    uVar15 = (ulong)~(uint)uVar10 & 1;
    lVar14 = *(long *)(puVar6 + 0x10) + uVar15;
    if (SCARRY8(*(long *)(puVar6 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10143959c);
      (*pcVar4)();
    }
    if (*(long *)(puVar6 + 0x18) < lVar14) {
      FUN_10143a4f4(lVar14,puVar11);
      uVar12 = uVar8;
      uVar15 = uVar13;
      func_0x000100029284();
      if (((uint)uVar10 & 1) != ((uint)uVar15 & 1)) goto LAB_1014395b4;
    }
    else if (((ulong)puVar11 & 1) == 0) {
      FUN_10143a38c();
    }
    if ((uVar10 & 1) == 0) {
      *(ulong *)(puVar6 + (uVar12 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar6 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar12 * 0x10);
      *puVar1 = uVar8;
      puVar1[1] = uVar13;
      *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar12 * 8) = 0;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014395b0);
        (*pcVar4)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      func_0x000107c61434(uVar13);
    }
    lVar14 = *(long *)(*(long *)(puVar6 + 0x38) + uVar12 * 8);
    if (SCARRY8(lVar14,lVar16)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1014395a0);
      (*pcVar4)();
    }
    *(long *)(*(long *)(puVar6 + 0x38) + uVar12 * 8) = lVar14 + lVar16;
    puVar6 = puVar7;
    func_0x000107c61558();
    uVar12 = uVar8;
    uVar10 = uVar13;
    func_0x000100029284();
    uVar15 = (ulong)~(uint)uVar10 & 1;
    lVar16 = *(long *)(puVar7 + 0x10) + uVar15;
    if (SCARRY8(*(long *)(puVar7 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1014395a4);
      (*pcVar4)();
    }
    if (*(long *)(puVar7 + 0x18) < lVar16) {
      FUN_10143a4f4(lVar16,puVar6);
      uVar12 = uVar8;
      uVar15 = uVar13;
      func_0x000100029284();
      if (((uint)uVar10 & 1) != ((uint)uVar15 & 1)) {
LAB_1014395b4:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014395c4);
        (*pcVar4)();
      }
    }
    else if (((ulong)puVar6 & 1) == 0) {
      FUN_10143a38c();
    }
    if ((uVar10 & 1) == 0) {
      *(ulong *)(puVar7 + (uVar12 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar7 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar12 * 0x10);
      *puVar1 = uVar8;
      puVar1[1] = uVar13;
      *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar12 * 8) = 0;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014395b4);
        (*pcVar4)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      func_0x000107c61434(uVar13);
    }
    lVar16 = *(long *)(*(long *)(puVar7 + 0x38) + uVar12 * 8);
    if (SCARRY8(lVar16,lVar2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1014395a8);
      (*pcVar4)();
    }
    *(long *)(*(long *)(puVar7 + 0x38) + uVar12 * 8) = lVar16 + lVar2;
    uVar12 = uVar13;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar12);
  return;
}



/* Entry: 1014395d0; end: 1014395d3;  */

void FUN_1014395d0(void)

{
  return;
}



/* Entry: 1014395d4; end: 101439667; -[_TtC30SaberInterceptorImplementation27SaberStartupMetricsReporter abandonSaberStartupMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014395d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_112d9dac0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  func_0x000107c61614(auStack_48,param_1);
  pcVar4 = *(code **)(lVar3 + 0x18);
  func_0x000107c61174(param_1);
  (*pcVar4)(FUN_1014395d0,0,uVar2,lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61610(auStack_48);
  return;
}



/* Entry: 101439668; end: 1014396c7; -[_TtC30SaberInterceptorImplementation27SaberStartupMetricsReporter init] */

void FUN_101439668(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaberInterceptorImplementation.SaberStartupMetricsReporter",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101439694);
  (*pcVar1)();
}



/* Entry: 1014396c8; end: 1014396d7;  */

undefined1  [16] FUN_1014396c8(void)

{
  return ZEXT816(0x1103b8a28);
}



/* Entry: 1014396d8; end: 10143971f; -[_TtC30SaberInterceptorImplementation27SaberStartupMetricsReporter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014396d8(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d9dac0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d9dac8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d9dad0));
  return;
}



/* Entry: 101439720; end: 10143972b;  */

void FUN_101439720(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_101438e54(uVar2);
    func_0x000107c61170(lVar3);
  }
  (*pcVar1)();
  return;
}



/* Entry: 10143972c; end: 101439787;  */

void FUN_10143972c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_10143ab34();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d9db08;
  plVar5 = (long *)&UNK_10d93e828;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101439788; end: 101439893;  */

void FUN_101439788(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_10143a8e4();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112d9db10;
      func_0x0001000285a8(0x112d9db10,&UNK_10d93e838);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_1014399a0(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_101439dcc(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 101439894; end: 10143999f;  */

undefined * FUN_101439894(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_10143972c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1014399a0; end: 101439dcb;  */

void FUN_1014399a0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long unaff_x21;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar19 = param_3[1];
  if (0 < lVar19) {
    lVar13 = 0;
    do {
      lVar22 = lVar13 + 1;
      if (lVar22 < lVar19) {
        lVar20 = *param_3;
        puVar10 = (ulong *)(lVar20 + lVar22 * 0x18);
        uVar21 = *puVar10;
        puVar11 = (ulong *)(lVar20 + lVar13 * 0x18);
        if (uVar21 == *puVar11 && puVar10[1] == puVar11[1]) {
          uVar21 = 0;
        }
        else {
          func_0x000107c605b8();
        }
        lVar15 = lVar13 + 2;
        lVar22 = lVar15;
        if (lVar15 < lVar19) {
          plVar18 = (long *)(lVar20 + lVar13 * 0x18 + 0x20);
          do {
            lVar6 = plVar18[2];
            if (lVar6 == plVar18[-1] && plVar18[3] == *plVar18) {
              if ((uVar21 & 1) != 0) goto LAB_101439a9c;
            }
            else {
              func_0x000107c605b8();
              lVar22 = lVar15;
              if ((((uint)uVar21 ^ (uint)lVar6) & 1) != 0) break;
            }
            lVar15 = lVar15 + 1;
            plVar18 = plVar18 + 3;
            lVar22 = lVar19;
          } while (lVar19 != lVar15);
        }
        lVar15 = lVar22;
        if ((uVar21 & 1) != 0) {
LAB_101439a9c:
          if (lVar15 < lVar13) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101439da0);
            (*pcVar4)();
          }
          lVar22 = lVar15;
          if (lVar13 < lVar15) {
            lVar12 = lVar15 * 0x18;
            lVar6 = lVar13 * 0x18;
            lVar19 = lVar13;
            do {
              lVar15 = lVar15 + -1;
              if (lVar19 != lVar15) {
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101439dc0);
                  (*pcVar4)();
                }
                puVar1 = (undefined8 *)(lVar20 + lVar6);
                lVar2 = lVar20 + lVar12;
                uVar24 = puVar1[1];
                uVar23 = *puVar1;
                uVar16 = puVar1[2];
                uVar17 = *(undefined8 *)(lVar2 + -8);
                uVar25 = *(undefined8 *)(lVar2 + -0x18);
                puVar1[1] = *(undefined8 *)(lVar2 + -0x10);
                *puVar1 = uVar25;
                puVar1[2] = uVar17;
                *(undefined8 *)(lVar2 + -0x10) = uVar24;
                *(undefined8 *)(lVar2 + -0x18) = uVar23;
                *(undefined8 *)(lVar2 + -8) = uVar16;
              }
              lVar19 = lVar19 + 1;
              lVar12 = lVar12 + -0x18;
              lVar6 = lVar6 + 0x18;
            } while (lVar19 < lVar15);
          }
        }
      }
      lVar19 = param_3[1];
      lVar20 = lVar22;
      if (lVar22 < lVar19) {
        if (SBORROW8(lVar22,lVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101439d9c);
          (*pcVar4)();
        }
        if (lVar22 - lVar13 < param_4) {
          if (SCARRY8(lVar13,param_4)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101439da4);
            (*pcVar4)();
          }
          lVar15 = lVar13 + param_4;
          if (lVar19 <= lVar13 + param_4) {
            lVar15 = lVar19;
          }
          if (lVar15 < lVar13) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101439da8);
            (*pcVar4)();
          }
          if (lVar22 != lVar15) {
            lVar19 = *param_3;
            puVar10 = (ulong *)(lVar19 + lVar22 * 0x18 + -0x18);
            lVar6 = lVar13 - lVar22;
            do {
              puVar11 = (ulong *)(lVar19 + lVar22 * 0x18);
              uVar21 = *puVar11;
              uVar14 = puVar11[1];
              lVar20 = lVar6;
              puVar11 = puVar10;
              do {
                if ((uVar21 == *puVar11 && uVar14 == puVar11[1]) ||
                   (func_0x000107c605b8(), (uVar21 & 1) == 0)) break;
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101439dac);
                  (*pcVar4)();
                }
                uVar14 = puVar11[4];
                uVar3 = puVar11[5];
                uVar21 = puVar11[3];
                puVar11[4] = puVar11[1];
                puVar11[3] = *puVar11;
                puVar11[5] = puVar11[2];
                *puVar11 = uVar21;
                puVar11[1] = uVar14;
                puVar11[2] = uVar3;
                puVar11 = puVar11 + -3;
                bVar5 = lVar20 != -1;
                lVar20 = lVar20 + 1;
              } while (bVar5);
              lVar22 = lVar22 + 1;
              puVar10 = puVar10 + 3;
              lVar6 = lVar6 + -1;
              lVar20 = lVar15;
            } while (lVar22 != lVar15);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar20 < lVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101439d8c);
        (*pcVar4)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar21 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar21) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar21 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar21 + 1;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x20) = lVar13;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x28) = lVar20;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101439dc4);
        (*pcVar4)();
      }
      FUN_101439ea8(&puStack_58,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101439d5c;
      lVar19 = param_3[1];
      lVar13 = lVar20;
    } while (lVar20 < lVar19);
  }
  puVar9 = puStack_58;
  lVar19 = *param_1;
  if (lVar19 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101439dcc);
    (*pcVar4)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar10 = (ulong *)(puVar9 + 0x10);
  uVar21 = *puVar10;
  while (1 < uVar21) {
    lVar13 = *param_3;
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101439dc8);
      (*pcVar4)();
    }
    plVar18 = (long *)(puVar9 + uVar21 * 0x10);
    lVar22 = *plVar18;
    puVar11 = puVar10 + uVar21 * 2;
    uVar14 = puVar11[1];
    FUN_10143a118(lVar13 + lVar22 * 0x18,lVar13 + *puVar11 * 0x18,lVar13 + uVar14 * 0x18,lVar19);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar22) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101439d90);
      (*pcVar4)();
    }
    if (*puVar10 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101439d94);
      (*pcVar4)();
    }
    *plVar18 = lVar22;
    plVar18[1] = uVar14;
    uVar14 = *puVar10;
    lVar13 = uVar14 - uVar21;
    if (uVar14 < uVar21) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101439d98);
      (*pcVar4)();
    }
    uVar21 = uVar14 - 1;
    func_0x000107c610b8(puVar11,puVar11 + 2,lVar13 * 0x10);
    *puVar10 = uVar21;
  }
LAB_101439d5c:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 101439dcc; end: 101439ea7;  */

void FUN_101439dcc(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    puVar8 = (ulong *)(lVar7 + param_3 * 0x18 + -0x18);
    param_1 = param_1 - param_3;
    do {
      puVar6 = (ulong *)(lVar7 + param_3 * 0x18);
      uVar4 = *puVar6;
      uVar5 = puVar6[1];
      lVar9 = param_1;
      puVar6 = puVar8;
      do {
        if ((uVar4 == *puVar6 && uVar5 == puVar6[1]) || (func_0x000107c605b8(), (uVar4 & 1) == 0))
        break;
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101439ea8);
          (*pcVar2)();
        }
        uVar5 = puVar6[4];
        uVar1 = puVar6[5];
        uVar4 = puVar6[3];
        puVar6[4] = puVar6[1];
        puVar6[3] = *puVar6;
        puVar6[5] = puVar6[2];
        *puVar6 = uVar4;
        puVar6[1] = uVar5;
        puVar6[2] = uVar1;
        puVar6 = puVar6 + -3;
        bVar3 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar3);
      param_3 = param_3 + 1;
      puVar8 = puVar8 + 3;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101439ea8; end: 10143a117;  */

undefined8 FUN_101439ea8(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_101439f80;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a100);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_101439fe4:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0f0);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0f8);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0d8);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0dc);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0e4);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0ec);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_101439f80:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0e0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0e8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0f4);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0fc);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_101439fe4;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a104);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0cc);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a118);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_10143a118(lVar9 + lVar12 * 0x18,lVar9 + *plVar1 * 0x18,lVar9 + lVar7 * 0x18,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0d0);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10143a0d4);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 10143a118; end: 10143a38b;  */

undefined8 FUN_10143a118(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x18;
  lVar2 = ((long)param_3 - (long)param_2) / 0x18;
  if (lVar1 < lVar2) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x18);
    }
    puVar6 = param_4 + lVar1 * 3;
    puVar3 = param_1;
    if (0x17 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        uVar8 = *param_2;
        if ((uVar8 == *param_4 && param_2[1] == param_4[1]) ||
           (func_0x000107c605b8(), (uVar8 & 1) == 0)) {
          puVar4 = param_4 + 3;
          puVar5 = param_4;
        }
        else {
          puVar4 = param_4;
          puVar5 = param_2;
          param_2 = param_2 + 3;
        }
        param_4 = puVar4;
        if (puVar3 != puVar5) {
          uVar9 = puVar5[1];
          uVar8 = *puVar5;
          puVar3[2] = puVar5[2];
          puVar3[1] = uVar9;
          *puVar3 = uVar8;
        }
        puVar3 = puVar3 + 3;
      } while (param_4 < puVar6);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 3 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x18);
    }
    puVar5 = param_4 + lVar2 * 3;
    puVar3 = param_2;
    puVar6 = puVar5;
    if ((param_1 < param_2) && (0x17 < (long)param_3 - (long)param_2)) {
      do {
        puVar7 = param_2 + -3;
        puVar4 = param_3;
        while( true ) {
          param_3 = puVar4 + -3;
          puVar6 = puVar5 + -3;
          uVar8 = *puVar6;
          if ((uVar8 != param_2[-3] || puVar5[-2] != param_2[-2]) &&
             (func_0x000107c605b8(), (uVar8 & 1) != 0)) break;
          if (puVar4 != puVar5) {
            uVar9 = puVar5[-2];
            uVar8 = *puVar6;
            puVar4[-1] = puVar5[-1];
            puVar4[-2] = uVar9;
            *param_3 = uVar8;
          }
          puVar3 = param_2;
          puVar5 = puVar6;
          puVar4 = param_3;
          if (puVar6 <= param_4) goto LAB_10143a328;
        }
        if (puVar4 != param_2) {
          uVar9 = param_2[-2];
          uVar8 = *puVar7;
          puVar4[-1] = param_2[-1];
          puVar4[-2] = uVar9;
          *param_3 = uVar8;
        }
        puVar3 = puVar7;
        puVar6 = puVar5;
      } while ((param_1 < puVar7) && (param_2 = puVar7, param_4 < puVar5));
    }
  }
LAB_10143a328:
  lVar1 = ((long)puVar6 - (long)param_4) / 0x18;
  if ((puVar3 != param_4) || (param_4 + lVar1 * 3 <= puVar3)) {
    func_0x000107c610b8(puVar3,param_4,lVar1 * 0x18);
  }
  return 1;
}



/* Entry: 10143a38c; end: 10143a4f3;  */

void FUN_10143a38c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112d9da98,&UNK_10d93e820);
  lVar12 = *unaff_x20;
  lVar7 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar12 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar12 + 0x40);
    if (uVar8 == 0) goto LAB_10143a468;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar11;
        func_0x000107c61434();
        if (uVar8 != 0) break;
LAB_10143a468:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10143a4f4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10143a4cc;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10143a4cc:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10143a4f4; end: 10143a8e3;  */

void FUN_10143a4f4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112d9da98;
  func_0x0001000285a8(0x112d9da98,&UNK_10d93e820);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_10143a754:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10143a784);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_10143a754;
        }
        uVar17 = puVar18[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10143a788);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar16;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10143a8e4; end: 10143a8f7;  */

/* WARNING: Removing unreachable block (ram,0x00010143a918) */
/* WARNING: Removing unreachable block (ram,0x00010143a928) */
/* WARNING: Removing unreachable block (ram,0x00010143aa38) */
/* WARNING: Removing unreachable block (ram,0x00010143a934) */
/* WARNING: Removing unreachable block (ram,0x00010143a93c) */
/* WARNING: Removing unreachable block (ram,0x00010143a9c0) */
/* WARNING: Removing unreachable block (ram,0x00010143a9cc) */
/* WARNING: Removing unreachable block (ram,0x00010143a9d0) */
/* WARNING: Removing unreachable block (ram,0x00010143a9d4) */
/* WARNING: Removing unreachable block (ram,0x00010143a9e8) */

undefined * FUN_10143a8e4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112d9db18;
    func_0x0001000285a8(0x112d9db18,&UNK_10d93e848);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  uVar4 = 0x112d9db10;
  func_0x0001000285a8(0x112d9db10,&UNK_10d93e838);
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar5,uVar4);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 10143a8f8; end: 10143ab2b;  */

undefined * FUN_10143a8f8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10143aa3c);
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
    puVar3 = (undefined *)0x112d9db18;
    func_0x0001000285a8(0x112d9db18,&UNK_10d93e848);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d9db10;
    func_0x0001000285a8(0x112d9db10,&UNK_10d93e838);
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



/* Entry: 10143ab2c; end: 10143ab33;  */

void FUN_10143ab2c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10143ab34; end: 10143abab;  */

void FUN_10143ab34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9db00 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a6e30;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d9db00 = puVar1;
  return;
}



/* Entry: 10143abac; end: 10143b127;  */

void FUN_10143abac(long param_1,undefined8 param_2,byte param_3,long param_4,byte param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  long lStack_88;
  long lStack_80;
  char cStack_78;
  long lStack_70;
  long lStack_68;
  
  if (((*(char *)(unaff_x20 + 0x10) != '\x01') ||
      (func_0x000107c61428(unaff_x20 + 0x20,auStack_d0,0,0),
      *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10) != 0)) &&
     (func_0x00010143af90(&lStack_a0,param_4), cStack_78 != '\x02')) {
    if (lStack_a0 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10143ad30);
      (*pcVar1)();
    }
    if (((bStack_90 | param_3) & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10143ad34);
      (*pcVar1)();
    }
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10143ad38);
      (*pcVar1)();
    }
    if (lStack_a0 == param_1) {
      if (SBORROW8(param_4,lStack_70)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10143ad3c);
        (*pcVar1)();
      }
      if (SCARRY8(lStack_88,param_4 - lStack_70)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10143ad40);
        (*pcVar1)();
      }
      if (SBORROW8(param_4,lStack_68)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10143ad44);
        (*pcVar1)();
      }
      if (SCARRY8(lStack_80,param_4 - lStack_68)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10143ad48);
        (*pcVar1)();
      }
      func_0x000107c61428(unaff_x20 + 0x18,auStack_b8,0x21,0);
      uVar5 = *(ulong *)(unaff_x20 + 0x18);
      uVar2 = uVar5;
      func_0x000107c61558();
      *(ulong *)(unaff_x20 + 0x18) = uVar5;
      uVar3 = uVar5;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        func_0x00010143b41c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        *(ulong *)(unaff_x20 + 0x18) = uVar3;
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar5 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x00010143b41c(uVar5,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
      lVar4 = uVar5 + uVar2 * 0x30;
      *(long *)(lVar4 + 0x20) = param_1;
      *(undefined8 *)(lVar4 + 0x28) = uStack_98;
      *(byte *)(lVar4 + 0x30) = bStack_90;
      *(long *)(lVar4 + 0x38) = lStack_88 + (param_4 - lStack_70);
      *(long *)(lVar4 + 0x40) = lStack_80 + (param_4 - lStack_68);
      *(byte *)(lVar4 + 0x48) = param_5 & 1;
      *(ulong *)(unaff_x20 + 0x18) = uVar5;
      func_0x000107c614a8(auStack_b8);
      func_0x000107c61428(unaff_x20 + 0x20,auStack_b8,0,0);
      if ((*(long *)(*(long *)(unaff_x20 + 0x20) + 0x10) == 0) &&
         (*(char *)(unaff_x20 + 0x10) == '\x01')) {
        FUN_100c884ac();
      }
    }
  }
  return;
}



/* Entry: 10143b128; end: 10143b15b;  */

void FUN_10143b128(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100c88408(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10143b15c; end: 10143b1ef;  */

void FUN_10143b15c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *unaff_x20;
  uVar1 = param_1;
  func_0x0001000f11b0();
  if ((*(char *)(lVar2 + 0x10) == '\x01') &&
     (func_0x000107c61428(lVar2 + 0x20,auStack_98,0,0),
     *(long *)(*(long *)(lVar2 + 0x20) + 0x10) == 0)) {
    return;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  uStack_50 = uVar1;
  uStack_48 = uVar1;
  func_0x00010143ad94(&uStack_80,uVar1);
  return;
}



/* Entry: 10143b1f0; end: 10143b237;  */

void FUN_10143b1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001000f11b0();
  FUN_10143abac(param_1,param_2,param_3,uVar1,param_4);
  return;
}



/* Entry: 10143b238; end: 10143b263;  */

long FUN_10143b238(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10143b264; end: 10143b31b;  */

int FUN_10143b264(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 10)) {
    uVar1 = *(byte *)(param_1 + 10) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10143b31c; end: 10143b527;  */

undefined * FUN_10143b31c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10143b41c);
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
    puVar3 = (undefined *)0x112d9dbe0;
    func_0x0001000285a8(0x112d9dbe0,&UNK_10d93e8b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 6);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10143b528; end: 10143b747;  */

ulong FUN_10143b528(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10143b650);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101439894(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10143b64c);
      (*pcVar1)();
    }
    func_0x00010143b650(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10143b748; end: 10143b75b;  */

/* WARNING: Removing unreachable block (ram,0x00010143b338) */
/* WARNING: Removing unreachable block (ram,0x00010143b348) */
/* WARNING: Removing unreachable block (ram,0x00010143b418) */
/* WARNING: Removing unreachable block (ram,0x00010143b354) */
/* WARNING: Removing unreachable block (ram,0x00010143b35c) */
/* WARNING: Removing unreachable block (ram,0x00010143b3d4) */
/* WARNING: Removing unreachable block (ram,0x00010143b3dc) */
/* WARNING: Removing unreachable block (ram,0x00010143b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010143b3e4) */
/* WARNING: Removing unreachable block (ram,0x00010143b3ec) */

undefined * FUN_10143b748(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112d9dbe0;
    func_0x0001000285a8(0x112d9dbe0,&UNK_10d93e8b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 6) << 1;
  }
  func_0x000107c610b4(puVar3 + 0x20,param_1 + 0x20,lVar5 << 6);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 10143b75c; end: 10143b7ef;  */

void FUN_10143b75c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *unaff_x20;
  uVar3 = uVar4;
  func_0x000107c61558();
  if ((uVar3 & 1) == 0) {
    FUN_10143b748();
  }
  if (param_2 < *(ulong *)(uVar4 + 0x10)) {
    lVar5 = *(ulong *)(uVar4 + 0x10) - 1;
    lVar1 = uVar4 + param_2 * 0x40;
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    param_1[1] = *(undefined8 *)(lVar1 + 0x28);
    *param_1 = uVar6;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    uVar6 = *(undefined8 *)(lVar1 + 0x40);
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    uVar7 = *(undefined8 *)(lVar1 + 0x50);
    param_1[5] = *(undefined8 *)(lVar1 + 0x48);
    param_1[4] = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    func_0x000107c610b8(lVar1 + 0x20,lVar1 + 0x60,(lVar5 - param_2) * 0x40);
    *(long *)(uVar4 + 0x10) = lVar5;
    *unaff_x20 = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10143b7f0);
  (*pcVar2)();
}



/* Entry: 10143b7f0; end: 10143b863;  */

void FUN_10143b7f0(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *unaff_x20;
  uVar3 = uVar5;
  func_0x000107c61558();
  if ((uVar3 & 1) == 0) {
    FUN_10143b748();
    lVar4 = *(long *)(uVar5 + 0x10);
  }
  else {
    lVar4 = *(long *)(uVar5 + 0x10);
  }
  if (lVar4 != 0) {
    lVar1 = uVar5 + (lVar4 + -1) * 0x40;
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    param_1[1] = *(undefined8 *)(lVar1 + 0x28);
    *param_1 = uVar6;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    uVar6 = *(undefined8 *)(lVar1 + 0x40);
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    uVar7 = *(undefined8 *)(lVar1 + 0x50);
    param_1[5] = *(undefined8 *)(lVar1 + 0x48);
    param_1[4] = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    *(long *)(uVar5 + 0x10) = lVar4 + -1;
    *unaff_x20 = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10143b864);
  (*pcVar2)();
}



/* Entry: 10143b864; end: 10143b873;  */

undefined1  [16] FUN_10143b864(void)

{
  return ZEXT816(0x1103b8ba0);
}



/* Entry: 10143b874; end: 10143b8af;  */

void FUN_10143b874(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10143b8b0; end: 10143b8d3;  */

void FUN_10143b8b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10143b8d4; end: 10143b8e3; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation shouldLaunchScopeGraphFromDidFinishLaunchingByDefault] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10143b8d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d9dcb8);
}



/* Entry: 10143b8e4; end: 10143b927; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation shouldLaunchScopeGraphFromDidFinishLaunching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10143b8e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9dcc0;
  func_0x000107c61428(param_1 + _DAT_112d9dcc0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10143b928; end: 10143b977; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation setShouldLaunchScopeGraphFromDidFinishLaunching:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10143b928(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9dcc0;
  func_0x000107c61428(param_1 + _DAT_112d9dcc0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10143b978; end: 10143b97b;  */

void FUN_10143b978(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10143b97c; end: 10143b9bf; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation isScopeGraphLaunched] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10143b97c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9dcc8;
  func_0x000107c61428(param_1 + _DAT_112d9dcc8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10143b9c0; end: 10143ba0f; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation setIsScopeGraphLaunched:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10143b9c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9dcc8;
  func_0x000107c61428(param_1 + _DAT_112d9dcc8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10143ba10; end: 10143ba1b; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation registerDeferredLaunchHandler:] */

void FUN_10143ba10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_10143bca4();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10143ba1c; end: 10143ba27; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation registerPreLaunchHandler:] */

void FUN_10143ba1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  (*(code *)0x10143be50)();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10143ba28; end: 10143ba33; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation registerPostLaunchHandler:] */

void FUN_10143ba28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  (*(code *)0x10143bfec)();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10143ba34; end: 10143ba93;  */

void FUN_10143ba34(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  (*param_4)();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10143ba94; end: 10143babb; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation launchScopeGraphIfNecessary] */

void FUN_10143ba94(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000100a16330();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10143babc; end: 10143bb1b; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation init] */

void FUN_10143babc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScopeGraphLauncherServiceImplementation.ScopeGraphLauncherServiceImplementation"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10143bae8);
  (*pcVar1)();
}



/* Entry: 10143bb1c; end: 10143bbd3; -[_TtC39ScopeGraphLauncherServiceImplementation39ScopeGraphLauncherServiceImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010143bb68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010143bb6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10143bb1c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d9dcf8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d9dcf0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d9dda8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d9dcd0));
  return;
}



/* Entry: 10143bbd4; end: 10143bbff;  */

void FUN_10143bbd4(undefined8 param_1,undefined8 param_2)

{
  func_0x000100a15e8c(param_1,param_2,&UNK_1103b8c10,&DAT_112d9dce0,FUN_100c16710);
  return;
}



/* Entry: 10143bc00; end: 10143bc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10143bc00(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar7 = _DAT_112d9dcc8;
  func_0x000107c61428(unaff_x20 + _DAT_112d9dcc8,auStack_68,1,0);
  lVar4 = _DAT_112d9dce0;
  if ((*(byte *)(unaff_x20 + lVar7) & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112d9dce0,auStack_80,1,0);
    lVar5 = *(long *)(unaff_x20 + lVar4);
    lVar6 = *(long *)(lVar5 + 0x10);
    if (lVar6 != 0) {
      func_0x000107c61434(lVar5);
      puVar8 = (undefined8 *)(lVar5 + 0x28);
      do {
        pcVar1 = (code *)puVar8[-1];
        uVar2 = *puVar8;
        func_0x000107c6157c(uVar2);
        (*pcVar1)();
        func_0x000107c61574(uVar2);
        puVar8 = puVar8 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      func_0x000107c6142c(lVar5);
      lVar5 = *(long *)(unaff_x20 + lVar4);
    }
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(unaff_x20 + lVar4) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(lVar5);
    func_0x000107c61428(0x112d9dc68,auStack_98,0,0);
    if ((bRam0000000112d9dc68 & 1) == 0) {
      (**(code **)(*(long *)(unaff_x20 + _DAT_112d9dcf0) + 0x10))
                (*(undefined8 *)(unaff_x20 + _DAT_112d9dcf8));
    }
    *(undefined1 *)(unaff_x20 + lVar7) = 1;
    lVar4 = _DAT_112d9dce8;
    func_0x000107c61428(unaff_x20 + _DAT_112d9dce8,auStack_b0,1,0);
    lVar6 = *(long *)(unaff_x20 + lVar4);
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 != 0) {
      func_0x000107c61434(lVar6);
      puVar8 = (undefined8 *)(lVar6 + 0x28);
      do {
        pcVar1 = (code *)puVar8[-1];
        uVar2 = *puVar8;
        func_0x000107c6157c(uVar2);
        (*pcVar1)();
        func_0x000107c61574(uVar2);
        puVar8 = puVar8 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      func_0x000107c6142c(lVar6);
      lVar6 = *(long *)(unaff_x20 + lVar4);
    }
    *(undefined **)(unaff_x20 + lVar4) = puVar3;
    func_0x000107c6142c(lVar6);
  }
  return;
}



/* Entry: 10143bc04; end: 10143bc33;  */

void FUN_10143bc04(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10143bc34; end: 10143bc57;  */

void FUN_10143bc34(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10143bc58; end: 10143bca3;  */

void FUN_10143bc58(void)

{
  return;
}



/* Entry: 10143bca4; end: 10143c187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10143bca4(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar4 = &UNK_1103b8e08;
  func_0x000107c613fc(&UNK_1103b8e08,0x18,7);
  *(long *)(puVar4 + 0x10) = param_2;
  lVar3 = _DAT_112d9dcc8;
  func_0x000107c61428(param_1 + _DAT_112d9dcc8,auStack_68,0,0);
  if (*(char *)(param_1 + lVar3) == '\x01') {
    uVar2 = *(undefined1 *)(param_1 + _DAT_112d9dcd8);
    func_0x000107c60bc4(param_2);
    (**(code **)(param_2 + 0x10))(param_2,uVar2);
  }
  else {
    puVar5 = &UNK_1103b8e30;
    func_0x000107c613fc(&UNK_1103b8e30,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x10143c194;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    lVar3 = _DAT_112d9dcd0;
    func_0x000107c61428(param_1 + _DAT_112d9dcd0,auStack_80,0x21,0);
    uVar8 = *(ulong *)(param_1 + lVar3);
    func_0x000107c60bc4(param_2);
    func_0x000107c6157c(puVar4);
    uVar6 = uVar8;
    func_0x000107c61558();
    *(ulong *)(param_1 + lVar3) = uVar8;
    uVar7 = uVar8;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      func_0x0001008eea20(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8,0x112d9de80,&UNK_10d93eac8);
      *(ulong *)(param_1 + lVar3) = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar8 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001008eea20(uVar8,uVar6 + 1,1,uVar7,0x112d9de80,&UNK_10d93eac8);
    }
    *(ulong *)(uVar8 + 0x10) = uVar6 + 1;
    lVar1 = uVar8 + uVar6 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = 0x10143c1a8;
    *(undefined **)(lVar1 + 0x28) = puVar5;
    *(ulong *)(param_1 + lVar3) = uVar8;
    func_0x000107c614a8(auStack_80);
  }
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 10143c188; end: 10143c1f3;  */

void FUN_10143c188(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010143c190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10143c1f4; end: 10143c25b;  */

void FUN_10143c1f4(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    *param_3 = lVar3;
    *param_4 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10143c25c);
  (*pcVar1)();
}



/* Entry: 10143c25c; end: 10143c337;  */

undefined1  [16] FUN_10143c25c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = 0xf;
    do {
      uVar2 = uVar5;
      uVar3 = param_3;
      func_0x000107c5fbcc(uVar5,param_3,param_4);
      if ((uVar2 == param_1) && (uVar3 == param_2)) {
        func_0x000107c6142c(uVar3);
LAB_10143c318:
        uVar4 = 0;
        goto LAB_10143c31c;
      }
      func_0x000107c605b8();
      func_0x000107c6142c(uVar3);
      if ((uVar2 & 1) != 0) goto LAB_10143c318;
      func_0x000107c5fb60(uVar5,param_3,param_4);
    } while (uVar1 * 4 - (uVar5 >> 0xe) != 0);
  }
  uVar5 = 0;
  uVar4 = 1;
LAB_10143c31c:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 10143c338; end: 10143c373; -[_TtC36ContactsMessagingDeepLinkTransformer42ContactsMessagingDeepLinkTransformerPlugin init] */

void FUN_10143c338(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10143c374; end: 10143c3a7;  */

void FUN_10143c374(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10143c3a8; end: 10143c3ab; -[_TtC36ContactsMessagingDeepLinkTransformer42ContactsMessagingDeepLinkTransformerPlugin .cxx_destruct] */

void FUN_10143c3a8(void)

{
  return;
}



/* Entry: 10143c3ac; end: 10143c3cb;  */

void FUN_10143c3ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127d6438);
  return;
}



/* Entry: 10143c3cc; end: 10143c41b; -[_TtC36ContactsMessagingDeepLinkTransformer42ContactsMessagingDeepLinkTransformerPlugin identifier] */

void FUN_10143c3cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uStack_28 = param_1;
  func_0x000107c614e4();
  puVar1 = &uStack_28;
  func_0x000107c5fb18(puVar1,param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10143c41c; end: 10143c423; -[_TtC36ContactsMessagingDeepLinkTransformer42ContactsMessagingDeepLinkTransformerPlugin priority] */

undefined8 FUN_10143c41c(void)

{
  return 1000;
}



/* Entry: 10143c424; end: 10143c53b; -[_TtC36ContactsMessagingDeepLinkTransformer42ContactsMessagingDeepLinkTransformerPlugin canTransformURL:] */

bool FUN_10143c424(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(lVar4);
  func_0x000107c5edc8();
  if (param_2 == 0) {
    (**(code **)(lVar5 + 8))(lVar4,lVar2);
    bVar1 = false;
  }
  else {
    uStack_50 = param_3;
    lStack_48 = param_2;
    if (lRam0000000112d9deb0 != -1) {
      param_3 = 0x112d9deb0;
      func_0x000107c61568(0x112d9deb0,0x10143c1bc);
    }
    FUN_100e8b654();
    lVar3 = 0x112d9deb8;
    func_0x000107c60204(0x112d9deb8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_3,param_3);
    (**(code **)(lVar5 + 8))(lVar4,lVar2);
    func_0x000107c6142c(param_2);
    bVar1 = lVar3 == 0;
  }
  return bVar1;
}



/* Entry: 10143c53c; end: 10143c91f;  */

void FUN_10143c53c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar10;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = 0x112d36580;
  puVar7 = &UNK_10d9016d0;
  uStack_78 = param_1;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_80 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lVar3 = 0;
  lStack_88 = lVar9;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ec24();
  lVar12 = *(long *)(lVar4 + -8);
  lVar2 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edc8();
  if (puVar7 != (undefined *)0x0) {
    lStack_70 = lVar2;
    puStack_68 = puVar7;
    if (lRam0000000112d9deb0 != -1) {
      lVar2 = 0x112d9deb0;
      func_0x000107c61568(0x112d9deb0,0x10143c1bc);
    }
    FUN_100e8b654();
    lVar6 = 0x112d9deb8;
    func_0x000107c60204(0x112d9deb8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar2,lVar2);
    func_0x000107c6142c(puVar7);
    if (lVar6 == 0) {
      func_0x000107c5ec20(lVar14);
      if (lRam0000000112d9dec8 != -1) {
        func_0x000107c61568(0x112d9dec8,0x10143c1d8);
      }
      puVar7 = puRam0000000112d9ded8;
      uVar1 = uRam0000000112d9ded0;
      func_0x000107c61434(puRam0000000112d9ded8);
      func_0x000107c5ec10(uVar1);
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f81858);
      func_0x000107c5ebf0();
      lVar6 = param_2;
      FUN_10143ca00();
      if (puVar7 != (undefined *)0x0) {
        lVar5 = 0x112d70260;
        lStack_90 = lVar6;
        func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
        lVar6 = 0;
        func_0x000107c5ebbc();
        uVar11 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
        uStack_a0 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
        func_0x000107c613fc(lVar5,uStack_a0 + *(long *)(*(long *)(lVar6 + -8) + 0x48),uVar11 | 7);
        *(undefined8 *)(lVar5 + 0x18) = 2;
        *(undefined8 *)(lVar5 + 0x10) = 1;
        lStack_98 = lVar5;
        func_0x000107c5eb78(lVar9);
        func_0x000107c5eb8c(0x233f3d262b,0xe500000000000000);
        lStack_70 = lStack_90;
        lVar6 = lVar9;
        puVar8 = PTR___sSSN_11034da80;
        puStack_68 = puVar7;
        func_0x000107c60200(lVar9,PTR___sSSN_11034da80,lVar2);
        (**(code **)(lVar13 + 8))(lVar9,lVar3);
        lVar2 = lStack_90;
        if (puVar8 != (undefined *)0x0) {
          func_0x000107c6142c(puVar7);
          lVar2 = lVar6;
          puVar7 = puVar8;
        }
        lVar3 = lStack_98;
        func_0x000107c5ebb0(lStack_98 + uStack_a0,0x6e65697069636572,0xe900000000000074,lVar2,puVar7
                           );
        func_0x000107c6142c(puVar7);
        func_0x000107c5ebe0(lVar3);
      }
      lVar3 = lStack_88;
      func_0x000107c5ebe8(lStack_88);
      (**(code **)(lVar12 + 8))(lVar14,lVar4);
      lVar2 = lStack_80;
      func_0x0001001021cc(lVar3,lStack_80);
      lVar3 = 0;
      func_0x000107c5ede0();
      lVar9 = *(long *)(lVar3 + -8);
      pcVar10 = *(code **)(lVar9 + 0x30);
      lVar4 = lVar2;
      (*pcVar10)(lVar2,1,lVar3);
      if ((int)lVar4 == 1) {
        (**(code **)(lVar9 + 0x10))(uStack_78,param_2,lVar3);
        lVar4 = lVar2;
        (*pcVar10)(lVar2,1,lVar3);
        if ((int)lVar4 == 1) {
          return;
        }
        func_0x0001000293e4(lVar2);
        return;
      }
      pcVar10 = *(code **)(lVar9 + 0x20);
      goto LAB_10143c6b4;
    }
  }
  lVar3 = 0;
  func_0x000107c5ede0();
  pcVar10 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  lVar2 = param_2;
LAB_10143c6b4:
  (*pcVar10)(uStack_78,lVar2,lVar3);
  return;
}



/* Entry: 10143c920; end: 10143c9ff; -[_TtC36ContactsMessagingDeepLinkTransformer42ContactsMessagingDeepLinkTransformerPlugin transformedURLForDeepLinkURL:] */

void FUN_10143c920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  func_0x000107c5edb4(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_10143c53c(lVar3,puVar2);
  func_0x000107c61170(param_1);
  pcVar5 = *(code **)(lVar4 + 8);
  (*pcVar5)(puVar2,lVar1);
  func_0x000107c5ed90();
  (*pcVar5)(lVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10143ca00; end: 10143ccbf;  */

undefined1  [16] FUN_10143ca00(undefined *param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  func_0x000107c5ed70();
  puVar2 = (undefined *)0x3a;
  uVar6 = 0;
  puVar8 = param_2;
  FUN_10143c25c(0x3a,0xe100000000000000,param_1,param_2);
  if ((uVar6 & 0xff) != 1) {
    func_0x000107c5fb60();
    puVar7 = param_2;
    FUN_100ed9f54();
    func_0x000107c6142c(param_2);
    func_0x000107c5fb2c(puVar2,param_1,puVar7,puVar8);
    func_0x000107c6142c(puVar8);
    func_0x000107c61434(param_1);
    uVar3 = 0x2f2f;
    puVar7 = param_1;
    func_0x000107c5fbb4(0x2f2f,0xe200000000000000,puVar2,param_1);
    puVar8 = param_1;
    func_0x000107c6142c();
    param_2 = param_1;
    puVar4 = puVar2;
    if ((uVar3 & 1) != 0) {
      func_0x000107c61434(param_1);
      puVar4 = (undefined *)0x2;
      puVar8 = param_1;
      FUN_1011a7878(2,puVar2,param_1);
      func_0x000107c6142c(param_1);
      func_0x000107c5fb2c(puVar4,puVar2,puVar8,puVar7);
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c();
      puVar8 = param_1;
      param_2 = puVar2;
    }
    uVar3 = (ulong)param_2 & 0x2000000000000000;
    uVar9 = (ulong)puVar4 & 0xffffffffffff;
    uVar10 = (ulong)param_2 >> 0x38 & 0xf;
    uVar1 = uVar9;
    if (uVar3 != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 != 0) {
      puVar8 = (undefined *)0xf;
      do {
        puVar2 = puVar8;
        puVar7 = puVar4;
        func_0x000107c5fbcc(puVar8,puVar4,param_2);
        if ((puVar2 == (undefined *)0x3f) && (puVar7 == (undefined *)0xe100000000000000)) {
LAB_10143cbf0:
          func_0x000107c6142c(puVar7);
LAB_10143cbf8:
          puVar5 = (undefined *)0xf;
          puVar7 = param_2;
          func_0x000107c5fbd8(0xf,puVar8,puVar4,param_2);
          puVar2 = puVar8;
          func_0x000107c5fb2c();
          func_0x000107c6142c(puVar7);
          func_0x000107c6142c();
          uVar3 = (ulong)puVar2 & 0x2000000000000000;
          uVar9 = (ulong)puVar5 & 0xffffffffffff;
          uVar10 = (ulong)puVar2 >> 0x38 & 0xf;
          puVar8 = param_2;
          param_2 = puVar2;
          puVar4 = puVar5;
          break;
        }
        puVar5 = puVar2;
        func_0x000107c605b8(puVar2,puVar7,0x3f,0xe100000000000000,0);
        if ((((ulong)puVar5 & 1) != 0) ||
           (puVar2 == (undefined *)0x23 && puVar7 == (undefined *)0xe100000000000000))
        goto LAB_10143cbf0;
        func_0x000107c605b8(puVar2,puVar7,0x23,0xe100000000000000,0);
        func_0x000107c6142c(puVar7);
        if (((ulong)puVar2 & 1) != 0) goto LAB_10143cbf8;
        func_0x000107c5fb60(puVar8,puVar4,param_2);
      } while (uVar1 * 4 - ((ulong)puVar8 >> 0xe) != 0);
    }
    if (uVar3 != 0) {
      uVar9 = uVar10;
    }
    if (uVar9 != 0) {
      FUN_100e8b654();
      puVar2 = PTR___sSSN_11034da80;
      func_0x000107c60208(PTR___sSSN_11034da80);
      if (puVar8 != (undefined *)0x0) {
        func_0x000107c6142c(param_2,param_2);
        param_2 = puVar8;
        puVar4 = puVar2;
      }
      goto LAB_10143cc9c;
    }
  }
  func_0x000107c6142c(param_2);
  puVar4 = (undefined *)0x0;
  param_2 = (undefined *)0x0;
LAB_10143cc9c:
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = puVar4;
  return auVar11;
}



/* Entry: 10143ccc0; end: 10143cd2f;  */

void FUN_10143ccc0(void)

{
  func_0x0001000285a8(0x112d9dee0,&UNK_10d93eb30);
  func_0x0001000823a8(0x10143cd00,0);
  return;
}



/* Entry: 10143cd30; end: 10143cd3f;  */

undefined1  [16] FUN_10143cd30(void)

{
  return ZEXT816(0x1103b8ef0);
}



/* Entry: 10143cd40; end: 10143d027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10143cd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  func_0x000100a46c0c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_7;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_8;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_9;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_10;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112d9dee8) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112d9def0) = param_11;
    puVar4 = auStack_80;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10143d028);
  (*pcVar2)();
}



/* Entry: 10143d028; end: 10143d087; -[_TtC22SystemScopeGraphBridge37SystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_10143d028(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SystemScopeGraphBridge.SystemScopeGraphBridgeSaberEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10143d054);
  (*pcVar1)();
}



/* Entry: 10143d088; end: 10143d0bf; -[_TtC22SystemScopeGraphBridge37SystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010143d0a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010143d0a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10143d088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d9dee8));
  return;
}



/* Entry: 10143d0c0; end: 10143d0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10143d0c0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112d9def0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112d9dee8));
  return;
}



/* Entry: 10143d0e8; end: 10143d14b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10143d0e8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112d9e858);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10143d14c; end: 10143d153;  */

void FUN_10143d14c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10143d154; end: 10143d1f3;  */

void FUN_10143d154(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10143d1f4; end: 10143d213;  */

void FUN_10143d1f4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10143d214; end: 10143d277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10143d214(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112d9e860);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10143d278; end: 10143d27f;  */

void FUN_10143d278(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10143d280; end: 10143d31f;  */

void FUN_10143d280(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10143d320; end: 10143d33f;  */

void FUN_10143d320(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10143d340; end: 10143d3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10143d340(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112d9e868);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10143d3a4; end: 10143d3ab;  */

void FUN_10143d3a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10143d3ac; end: 10143d44b;  */

void FUN_10143d3ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10143d44c; end: 10143d46b;  */

void FUN_10143d44c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10143d46c; end: 10143d4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10143d46c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112d9e880);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10143d4d0; end: 10143d4d7;  */

void FUN_10143d4d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10143d4d8; end: 10143d577;  */

void FUN_10143d4d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10143d578; end: 10143d597;  */

void FUN_10143d578(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10143d598; end: 10143d5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10143d598(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112d9e888);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10143d5fc; end: 10143d603;  */

void FUN_10143d5fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10143d604; end: 10143d6a3;  */

void FUN_10143d604(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10143d6a4; end: 10143d6c3;  */

void FUN_10143d6a4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10143d6c4; end: 10143d727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10143d6c4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112d9e898);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10143d728; end: 10143d72f;  */

void FUN_10143d728(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10143d730; end: 10143d7cf;  */

void FUN_10143d730(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10143d7d0; end: 10143d7ef;  */

void FUN_10143d7d0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10143d7f0; end: 10143d853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10143d7f0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112d9e8a0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10143d854; end: 10143d85b;  */

void FUN_10143d854(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10143d85c; end: 10143d8fb;  */

void FUN_10143d85c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10143d8fc; end: 10143d91b;  */

void FUN_10143d8fc(void)

{
  func_0x000100083b20();
  return;
}


