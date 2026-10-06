/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10134162c; end: 1013416ff;  */

void FUN_10134162c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c9a28);
  return;
}



/* Entry: 101341700; end: 1013417ff;  */

undefined * FUN_101341700(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101341800);
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
    puVar3 = (undefined *)0x112d74b38;
    func_0x0001000285a8(0x112d74b38,&UNK_10d979270);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101341800; end: 101341cc3;  */

undefined * FUN_101341800(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101341934);
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
    func_0x00010134b91c();
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
    FUN_101343a80(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
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



/* Entry: 101341cc4; end: 101341e4f;  */

undefined * FUN_101341cc4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d74ad8;
    func_0x0001000285a8(0x112d74ad8,&UNK_10d935278);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Entry: 101341e50; end: 101341f8b;  */

undefined *
FUN_101341e50(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101341f8c);
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
    puVar3 = (undefined *)0x112d74ae0;
    func_0x0001000285a8(0x112d74ae0,&UNK_10d935280);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d74ae8;
    func_0x0001000285a8(0x112d74ae8,&UNK_10d935288);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101341f8c; end: 1013420bb;  */

ulong FUN_101341f8c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013420bc);
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
  func_0x000101341dd0(uVar2,uVar4,0x10134b940);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013420b8);
      (*pcVar1)();
    }
    func_0x000101342220(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1013420bc; end: 1013420e3;  */

ulong FUN_1013420bc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101342220);
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
  func_0x000101341dd0(uVar2,uVar4,FUN_100f95d40);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10134221c);
      (*pcVar1)();
    }
    FUN_101342344(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1013420e4; end: 101342343;  */

ulong FUN_1013420e4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101342220);
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
  func_0x000101341dd0(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10134221c);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101342344; end: 101342573;  */

long FUN_101342344(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101342458);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10134245c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101343a80(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101343a80(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101342454);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101342574; end: 10134267f;  */

void FUN_101342574(ulong *param_1)

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
    FUN_1013432d8();
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
      uVar2 = 0x112d74ad0;
      func_0x0001000285a8(0x112d74ad0,&UNK_10d935268);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_101342680(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_101342a2c(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 101342680; end: 101342a2b;  */

void FUN_101342680(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  double *pdVar16;
  long lVar17;
  double *pdVar18;
  undefined8 uVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar12 = 0;
    do {
      puVar9 = puStack_58;
      lVar22 = lVar12 + 1;
      if (lVar22 < lVar10) {
        lVar13 = *param_3;
        dVar23 = *(double *)(lVar13 + lVar22 * 0x10);
        lVar15 = lVar12 * 0x10;
        dVar26 = *(double *)(lVar13 + lVar15);
        pdVar16 = (double *)(lVar13 + lVar15) + 4;
        lVar17 = lVar12 + 2;
        dVar25 = dVar23;
        do {
          lVar11 = lVar17;
          lVar22 = lVar10;
          if (lVar10 == lVar11) break;
          dVar28 = *pdVar16;
          bVar6 = dVar25 <= dVar28;
          pdVar16 = pdVar16 + 2;
          lVar17 = lVar11 + 1;
          dVar25 = dVar28;
          lVar22 = lVar11;
        } while (dVar23 < dVar26 != bVar6);
        if (dVar23 < dVar26) {
          if (lVar22 < lVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101342a00);
            (*pcVar5)();
          }
          if (lVar12 < lVar22) {
            lVar11 = lVar22 << 4;
            lVar17 = lVar22;
            lVar10 = lVar12;
            do {
              lVar17 = lVar17 + -1;
              if (lVar10 != lVar17) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101342a20);
                  (*pcVar5)();
                }
                puVar1 = (undefined8 *)(lVar13 + lVar15);
                lVar2 = lVar13 + lVar11;
                uVar24 = *puVar1;
                uVar19 = puVar1[1];
                uVar27 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar27;
                *(undefined8 *)(lVar2 + -0x10) = uVar24;
                *(undefined8 *)(lVar2 + -8) = uVar19;
              }
              lVar10 = lVar10 + 1;
              lVar11 = lVar11 + -0x10;
              lVar15 = lVar15 + 0x10;
            } while (lVar10 < lVar17);
            lVar10 = param_3[1];
          }
        }
      }
      lVar15 = lVar22;
      if (lVar22 < lVar10) {
        if (SBORROW8(lVar22,lVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1013429fc);
          (*pcVar5)();
        }
        if (lVar22 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101342a04);
            (*pcVar5)();
          }
          lVar17 = lVar12 + param_4;
          if (lVar10 <= lVar12 + param_4) {
            lVar17 = lVar10;
          }
          if (lVar17 < lVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101342a08);
            (*pcVar5)();
          }
          if (lVar22 != lVar17) {
            lVar10 = *param_3;
            pdVar16 = (double *)(lVar10 + lVar22 * 0x10 + -0x10);
            lVar13 = lVar12 - lVar22;
            do {
              dVar25 = *(double *)(lVar10 + lVar22 * 0x10);
              lVar15 = lVar13;
              pdVar18 = pdVar16;
              do {
                if (*pdVar18 <= dVar25) break;
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101342a0c);
                  (*pcVar5)();
                }
                dVar23 = pdVar18[3];
                pdVar18[3] = pdVar18[1];
                pdVar18[2] = *pdVar18;
                *pdVar18 = dVar25;
                pdVar18[1] = dVar23;
                pdVar18 = pdVar18 + -2;
                bVar6 = lVar15 != -1;
                lVar15 = lVar15 + 1;
              } while (bVar6);
              lVar22 = lVar22 + 1;
              pdVar16 = pdVar16 + 2;
              lVar13 = lVar13 + -1;
              lVar15 = lVar17;
            } while (lVar22 != lVar17);
          }
        }
      }
      if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1013429ec);
        (*pcVar5)();
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
      *(long *)(puVar9 + uVar21 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x28) = lVar15;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101342a24);
        (*pcVar5)();
      }
      FUN_101342aac(&puStack_58,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1013429bc;
      lVar10 = param_3[1];
      lVar12 = lVar15;
    } while (lVar15 < lVar10);
  }
  puVar9 = puStack_58;
  lVar10 = *param_1;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101342a2c);
    (*pcVar5)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar20 = (ulong *)(puVar9 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101342a28);
      (*pcVar5)();
    }
    plVar3 = (long *)(puVar9 + uVar21 * 0x10);
    lVar22 = *plVar3;
    puVar4 = puVar20 + uVar21 * 2;
    uVar14 = puVar4[1];
    FUN_101342d1c(lVar12 + lVar22 * 0x10,lVar12 + *puVar4 * 0x10,lVar12 + uVar14 * 0x10,lVar10);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar22) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1013429f0);
      (*pcVar5)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1013429f4);
      (*pcVar5)();
    }
    *plVar3 = lVar22;
    plVar3[1] = uVar14;
    uVar14 = *puVar20;
    lVar12 = uVar14 - uVar21;
    if (uVar14 < uVar21) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1013429f8);
      (*pcVar5)();
    }
    uVar21 = uVar14 - 1;
    func_0x000107c610b8(puVar4,puVar4 + 2,lVar12 * 0x10);
    *puVar20 = uVar21;
  }
LAB_1013429bc:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 101342a2c; end: 101342aab;  */

void FUN_101342a2c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  double *pdVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    pdVar4 = (double *)(lVar3 + param_3 * 0x10 + -0x10);
    param_1 = param_1 - param_3;
    do {
      dVar8 = *(double *)(lVar3 + param_3 * 0x10);
      lVar5 = param_1;
      pdVar6 = pdVar4;
      do {
        if (*pdVar6 <= dVar8) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101342aac);
          (*pcVar1)();
        }
        dVar7 = pdVar6[3];
        pdVar6[3] = pdVar6[1];
        pdVar6[2] = *pdVar6;
        *pdVar6 = dVar8;
        pdVar6[1] = dVar7;
        pdVar6 = pdVar6 + -2;
        bVar2 = lVar5 != -1;
        lVar5 = lVar5 + 1;
      } while (bVar2);
      param_3 = param_3 + 1;
      pdVar4 = pdVar4 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101342aac; end: 101342d1b;  */

undefined8 FUN_101342aac(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_101342b84;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cfc);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_101342be4:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cec);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cf4);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cd4);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cd8);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101342ce0);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101342ce8);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_101342b84:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cdc);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101342ce4);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cf0);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cf8);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_101342be4;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101342d00);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cc4);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101342d1c);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_101342d1c(lVar8 + lVar11 * 0x10,lVar8 + *plVar3 * 0x10,lVar8 + lVar9 * 0x10,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cc8);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101342ccc);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101342cd0);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 101342d1c; end: 101342f33;  */

undefined8 FUN_101342d1c(double *param_1,double *param_2,double *param_3,double *param_4)

{
  ulong uVar1;
  long lVar2;
  double *pdVar3;
  ulong uVar4;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double *pdVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 4;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 0xf;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 4;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 * 2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 4);
    }
    pdVar5 = param_4 + lVar2 * 2;
    pdVar8 = param_1;
    if (0xf < lVar10) {
      do {
        if (param_3 <= param_2) break;
        if (*param_4 <= *param_2) {
          pdVar9 = param_4 + 2;
          pdVar3 = param_4;
        }
        else {
          pdVar9 = param_4;
          pdVar3 = param_2;
          param_2 = param_2 + 2;
        }
        param_4 = pdVar9;
        if (pdVar8 != pdVar3) {
          dVar12 = *pdVar3;
          pdVar8[1] = pdVar3[1];
          *pdVar8 = dVar12;
        }
        pdVar8 = pdVar8 + 2;
      } while (param_4 < pdVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 * 2 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 4);
    }
    pdVar3 = param_4 + lVar6 * 2;
    pdVar5 = pdVar3;
    pdVar8 = param_2;
    if ((param_1 < param_2) && (0xf < lVar11)) {
      do {
        pdVar7 = param_2 + -2;
        pdVar9 = param_3;
        while( true ) {
          param_3 = pdVar9 + -2;
          pdVar5 = pdVar3 + -2;
          if (*pdVar5 < *pdVar7) break;
          if (pdVar9 != pdVar3) {
            dVar12 = *pdVar5;
            pdVar9[-1] = pdVar3[-1];
            *param_3 = dVar12;
          }
          pdVar3 = pdVar5;
          pdVar8 = param_2;
          pdVar9 = param_3;
          if (pdVar5 <= param_4) goto LAB_101342ed8;
        }
        if (pdVar9 != param_2) {
          dVar12 = *pdVar7;
          pdVar9[-1] = param_2[-1];
          *param_3 = dVar12;
        }
        pdVar5 = pdVar3;
        pdVar8 = pdVar7;
      } while ((param_1 < pdVar7) && (param_2 = pdVar7, param_4 < pdVar3));
    }
  }
LAB_101342ed8:
  uVar4 = (long)pdVar5 - (long)param_4;
  uVar1 = uVar4 + 0xf;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((pdVar8 != param_4) || ((double *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= pdVar8)) {
    func_0x000107c610b8(pdVar8,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Entry: 101342f34; end: 10134301b;  */

undefined * FUN_101342f34(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10134301c);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112d74ae0;
      func_0x0001000285a8(0x112d74ae0,&UNK_10d935280);
      func_0x000107c613fc();
      puVar5 = puVar4;
      func_0x000107c610a4();
      puVar1 = puVar5 + -1;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 5) << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101343018);
      (*pcVar3)();
    }
    uVar6 = 0x112d74ae8;
    func_0x0001000285a8(0x112d74ae8,&UNK_10d935288);
    func_0x000107c6140c(puVar4 + 0x20,param_2 + param_3 * 0x20,lVar2,uVar6);
  }
  return puVar4;
}



/* Entry: 10134301c; end: 1013432d7;  */

long FUN_10134301c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  puVar6 = (ulong *)(param_4 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar6;
  if (param_2 == (undefined8 *)0x0) {
    lVar10 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar10 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101343178);
      (*pcVar1)();
    }
    lVar4 = 0;
    lVar9 = 0;
    uVar11 = 0x3f - uVar7 >> 6;
    lVar10 = lVar4;
    while( true ) {
      while (uVar8 == 0) {
        bVar2 = SCARRY8(lVar10,1);
        lVar10 = lVar10 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101343174);
          (*pcVar1)();
        }
        if ((long)uVar11 <= lVar10) {
          uVar8 = 0;
          if ((long)uVar11 <= lVar4 + 1) {
            uVar11 = lVar4 + 1;
          }
          lVar10 = uVar11 - 1;
          param_3 = lVar9;
          goto LAB_101343138;
        }
        uVar8 = puVar6[lVar10];
      }
      uVar5 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = lVar10 << 9 | LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) << 3;
      uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar5);
      lVar9 = lVar9 + 1;
      uVar8 = uVar8 - 1 & uVar8;
      *param_2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + uVar5);
      param_2[1] = uVar3;
      if (lVar9 == param_3) break;
      param_2 = param_2 + 2;
      func_0x000107c61174();
      lVar4 = lVar10;
    }
    func_0x000107c61174();
  }
LAB_101343138:
  *param_1 = param_4;
  param_1[1] = (long)puVar6;
  param_1[2] = ~uVar7;
  param_1[3] = lVar10;
  param_1[4] = uVar8;
  return param_3;
}



/* Entry: 1013432d8; end: 1013432eb;  */

/* WARNING: Removing unreachable block (ram,0x000101341954) */
/* WARNING: Removing unreachable block (ram,0x000101341964) */
/* WARNING: Removing unreachable block (ram,0x000101341a60) */
/* WARNING: Removing unreachable block (ram,0x000101341970) */
/* WARNING: Removing unreachable block (ram,0x000101341978) */
/* WARNING: Removing unreachable block (ram,0x0001013419f0) */
/* WARNING: Removing unreachable block (ram,0x0001013419f8) */
/* WARNING: Removing unreachable block (ram,0x0001013419fc) */
/* WARNING: Removing unreachable block (ram,0x000101341a00) */
/* WARNING: Removing unreachable block (ram,0x000101341a10) */

undefined * FUN_1013432d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112d74ad8;
    func_0x0001000285a8(0x112d74ad8,&UNK_10d935278);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  uVar5 = 0x112d74ad0;
  func_0x0001000285a8(0x112d74ad0,&UNK_10d935268);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 1013432ec; end: 10134347f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1013432ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d74a50);
  puVar2 = &UNK_1103a5120;
  func_0x000107c613fc(&UNK_1103a5120,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103a5238;
  func_0x000107c613fc(&UNK_1103a5238,0x58,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  puVar3[0x20] = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_7;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  *(undefined8 *)(puVar3 + 0x40) = param_4;
  *(undefined8 *)(puVar3 + 0x48) = param_1;
  *(undefined8 *)(puVar3 + 0x50) = param_2;
  uStack_80 = 0x1013439d8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1103a5250;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(uVar5);
  func_0x000107c61174(puVar1);
  func_0x000107c61434(param_7);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uVar5);
  puVar2 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 101343480; end: 101343717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101343480(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d74a60);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar6,uVar2);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10134c2d0();
  lVar3 = _DAT_112d74a58;
  func_0x000107c61428(unaff_x20 + _DAT_112d74a58,auStack_a8,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  func_0x000107c6142c(uVar6);
  puVar7 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&puStack_d8);
  puVar5 = puStack_d8;
  if (puStack_d8 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar6 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010ef37d80);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar6);
    puVar9 = puVar5;
    func_0x000107c5ed2c(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c43b70(puVar7);
  }
  else {
    puVar8 = PTR_PTR_1126bcf20;
    func_0x000107c610f8(PTR_PTR_1126bcf20);
    func_0x000107c453e4();
    func_0x000107c2bb50();
    if (param_8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101343718);
      (*pcVar4)();
    }
    func_0x000107c56438(puVar8);
    puVar9 = *(undefined **)(unaff_x20 + _DAT_112d74a40);
    func_0x000107c4ca6c(puVar9);
    func_0x000107c61180();
    puVar10 = &UNK_1103a5170;
    func_0x000107c613fc(&UNK_1103a5170,0x60,7);
    *(undefined **)(puVar10 + 0x10) = puVar7;
    *(long *)(puVar10 + 0x18) = unaff_x20;
    *(undefined **)(puVar10 + 0x20) = puStack_d8;
    *(double *)(puVar10 + 0x28) = param_1;
    *(double *)(puVar10 + 0x30) = param_2;
    *(double *)(puVar10 + 0x38) = param_5 / param_1;
    *(double *)(puVar10 + 0x40) = param_6 / param_2;
    *(double *)(puVar10 + 0x48) = param_3 / param_1;
    *(double *)(puVar10 + 0x50) = param_4 / param_2;
    *(undefined8 *)(puVar10 + 0x58) = param_7;
    uStack_b8 = 0x101343974;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0x42000000;
    uStack_c8 = 0x10102ec58;
    puStack_c0 = &UNK_1103a5188;
    ppuVar11 = &puStack_d8;
    puStack_b0 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar10 = puStack_b0;
    func_0x000107c61174(puVar7);
    func_0x000107c61174();
    func_0x000107c615f0(puVar5);
    func_0x000107c61574(puVar10);
    func_0x000107c5dc64(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c615e8(puVar5);
    func_0x000107c60bd0(ppuVar11);
  }
  func_0x000107c61170(puVar9);
  return puVar7;
}



/* Entry: 101343718; end: 10134385b;  */

undefined1  [16] FUN_101343718(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  dVar5 = param_1;
  dVar6 = param_2;
  func_0x000107c610f8();
  puVar2 = param_3;
  uVar4 = param_4;
  func_0x000107c5ee20(param_3,param_4);
  func_0x000107c4635c();
  func_0x000107c61170(puVar2);
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c5b078(puVar1);
    if ((dVar5 <= param_1) && (func_0x000107c5b078(puVar1), dVar6 <= param_2)) {
      func_0x000107c61170(puVar1);
      func_0x00010006c00c(param_3,param_4);
      goto LAB_10134383c;
    }
    func_0x000107c5b078(puVar1);
    dVar7 = param_2 / dVar6;
    if (param_1 / dVar5 <= param_2 / dVar6) {
      dVar7 = param_1 / dVar5;
    }
    puVar2 = puVar1;
    func_0x0001090129f0(dVar5 * dVar7,dVar6 * dVar7);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      param_3 = puVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      param_4 = uVar4;
      goto LAB_10134383c;
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  param_3 = (undefined *)0x0;
  param_4 = 0xf000000000000000;
LAB_10134383c:
  auVar8._8_8_ = param_4;
  auVar8._0_8_ = param_3;
  return auVar8;
}



/* Entry: 10134385c; end: 101343947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134385c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c600d4(param_3,param_4,param_5);
  lVar1 = _DAT_112d74a58;
  func_0x000107c61428(unaff_x20 + _DAT_112d74a58,auStack_58,0x21,0);
  func_0x000107c61174(param_2);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_10134bdc8(param_1 * 1000.0,param_2,uVar2);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  func_0x000107c614a8(auStack_58);
  pcVar4 = *(code **)(unaff_x20 + _DAT_112d74a60);
  if (pcVar4 != (code *)0x0) {
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112d74a60))[1];
    func_0x000107c6157c(uVar2);
    (*pcVar4)();
    func_0x00010058d43c(pcVar4,uVar2);
  }
  return;
}



/* Entry: 101343948; end: 1013439ff;  */

void FUN_101343948(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101343a00; end: 101343a17;  */

void FUN_101343a00(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1013413a0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101343a18; end: 101343a33;  */

void FUN_101343a18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  puStack_60 = param_1;
  uStack_58 = uVar1;
  uStack_50 = uVar2;
  func_0x000107c61174(uVar4);
  func_0x0001000b0da8(0xd000000000000042,0x800000010ef37f90,FUN_101343ac0,auStack_70);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101343a34; end: 101343a6b;  */

void FUN_101343a34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10134678c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),param_1,param_2,
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101343a6c; end: 101343a7f;  */

void FUN_101343a6c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
    return;
  }
  return;
}



/* Entry: 101343a80; end: 101343abf;  */

void FUN_101343a80(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101343ac0; end: 101343af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101343ac0(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  puVar21 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  if ((ulong)puVar21 >> 0x3e == 0) {
    puVar14 = *(undefined8 **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined8 *)((ulong)puVar21 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar21) {
      puVar14 = puVar21;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar14 != (undefined8 *)0x0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001013416c8(0,(ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013410b4);
      (*pcVar3)();
    }
    if (((ulong)puVar21 & 0xc000000000000001) == 0) {
      puVar21 = puVar21 + 4;
      do {
        puVar8 = puStack_68;
        puVar5 = (undefined8 *)*puVar21;
        func_0x000107c61174();
        puVar16 = puVar5;
        func_0x0001000298f0();
        puVar22 = auStack_80;
        func_0x000107c61428();
        uVar4 = *puVar16;
        func_0x000107c61174(uVar4);
        func_0x0001000aa0a8(uVar15);
        func_0x000107c61170(uVar4);
        puVar16 = puVar5;
        func_0x000107c60bb8();
        func_0x000107c61180();
        if (puVar16 == (undefined8 *)0x0) {
          func_0x000107c61170(puVar5);
          puVar17 = (undefined8 *)0x0;
          puVar22 = (undefined1 *)0xf000000000000000;
        }
        else {
          puVar17 = puVar16;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar5);
        }
        uVar18 = *(ulong *)(puVar8 + 0x10);
        puStack_68 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar18) {
          func_0x0001013416c8(1 < *(ulong *)(puVar8 + 0x18),uVar18 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar18 + 1;
        *(undefined8 **)(puStack_68 + uVar18 * 0x10 + 0x20) = puVar17;
        *(undefined1 **)(puStack_68 + uVar18 * 0x10 + 0x28) = puVar22;
        puVar14 = (undefined8 *)((long)puVar14 + -1);
        puVar8 = puStack_68;
        puVar21 = puVar21 + 1;
      } while (puVar14 != (undefined8 *)0x0);
    }
    else {
      puVar16 = (undefined8 *)0x0;
      do {
        puVar8 = puStack_68;
        puVar5 = puVar16;
        FUN_100f95e24(puVar16,puVar21);
        puVar17 = puVar5;
        func_0x0001000298f0();
        puVar22 = auStack_80;
        func_0x000107c61428();
        uVar4 = *puVar17;
        func_0x000107c61174(uVar4);
        func_0x0001000aa0a8(uVar15);
        func_0x000107c61170(uVar4);
        puVar17 = puVar5;
        func_0x000107c60bb8();
        func_0x000107c61180();
        if (puVar17 == (undefined8 *)0x0) {
          func_0x000107c615e8(puVar5);
          puVar20 = (undefined8 *)0x0;
          puVar22 = (undefined1 *)0xf000000000000000;
        }
        else {
          puVar20 = puVar17;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar17);
          func_0x000107c615e8(puVar5);
        }
        uVar18 = *(ulong *)(puVar8 + 0x10);
        puStack_68 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar18) {
          func_0x0001013416c8(1 < *(ulong *)(puVar8 + 0x18),uVar18 + 1,1);
        }
        puVar16 = (undefined8 *)((long)puVar16 + 1);
        *(ulong *)(puStack_68 + 0x10) = uVar18 + 1;
        *(undefined8 **)(puStack_68 + uVar18 * 0x10 + 0x20) = puVar20;
        *(undefined1 **)(puStack_68 + uVar18 * 0x10 + 0x28) = puVar22;
        puVar8 = puStack_68;
      } while (puVar14 != puVar16);
    }
  }
  uVar18 = 0;
  uVar19 = *(ulong *)(puVar8 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    lVar2 = uVar18 * 0x10 + 0x28;
    do {
      lVar12 = lVar2;
      if (uVar19 == uVar18) {
        func_0x000107c6142c();
        func_0x00010134164c();
        puVar9 = puVar8;
        func_0x000107c610f8();
        lVar2 = _DAT_112d74a90;
        *(undefined8 *)(puVar9 + _DAT_112d74a90) = 0;
        puVar21 = (undefined8 *)(puVar9 + _DAT_112d74a98);
        *(undefined **)(puVar9 + lVar2) = puVar7;
        *puVar21 = 0;
        puVar21[1] = 0;
        ppuVar10 = &puStack_90;
        puStack_90 = puVar9;
        puStack_88 = puVar8;
        func_0x000107c61154(ppuVar10,PTR_s_init_1125d9248);
        func_0x000107c4d664(uVar11);
        func_0x000107c61170(ppuVar10);
        return;
      }
      if (*(ulong *)(puVar8 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101341098);
        (*pcVar3)();
      }
      uVar18 = uVar18 + 1;
      uVar13 = *(ulong *)(puVar8 + lVar12);
      lVar2 = lVar12 + 0x10;
    } while (0xe < uVar13 >> 0x3c);
    uVar15 = *(undefined8 *)(puVar8 + lVar12 + -8);
    func_0x00010006c00c(uVar15,uVar13);
    puVar9 = puVar7;
    func_0x000107c61558();
    puVar6 = puVar7;
    if (((ulong)puVar9 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_100f23260(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar1 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_100f23260(puVar7,uVar1 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = uVar15;
    *(ulong *)(puVar7 + uVar1 * 0x10 + 0x28) = uVar13;
  } while( true );
}



/* Entry: 101343af4; end: 101343b37;  */

void FUN_101343af4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101343b38; end: 101343b63;  */

void FUN_101343b38(long param_1,long param_2)

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



/* Entry: 101343b64; end: 101343bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101343b64(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d74b60;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x00010134a964(0);
      FUN_10134a984();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101343bf8; end: 101343c43; -[_TtC16SCSnapEditorImpl23SnapEditorActionHandler didTapDismissWithCommonLoggingParams:] */

/* WARNING: Possible PIC construction at 0x000101343c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101343c30) */

void FUN_101343bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101343fc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101343c44; end: 101343d3b;  */

void FUN_101343c44(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = "onPlaybackTimestampChange(withCurrentTimestampMs:currentSegment:)";
  func_0x0001000c10c0("onPlaybackTimestampChange(withCurrentTimestampMs:currentSegment:)");
  func_0x000107c61180();
  puVar2 = &UNK_1103a5418;
  func_0x000107c613fc(&UNK_1103a5418,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103a5440;
  func_0x000107c613fc(&UNK_1103a5440,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_101343f9c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103a5458;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101343d3c; end: 101343daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101343d3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d74b60;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      FUN_10134c4ec();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101343db0; end: 101343def; -[_TtC16SCSnapEditorImpl23SnapEditorActionHandler onPlaybackTimestampChangeWithCurrentTimestampMs:currentSegment:] */

void FUN_101343db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101343c44(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101343df0; end: 101343e3b;  */

void FUN_101343df0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c517f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101343e3c; end: 101343f0f; -[_TtC16SCSnapEditorImpl23SnapEditorActionHandler setStatusBarStyleWithDark:] */

void FUN_101343e3c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c61174();
  pcVar1 = "setStatusBarStyleWithDark(_:)";
  func_0x0001000c10c0("setStatusBarStyleWithDark(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_1103a5490;
  func_0x000107c613fc(&UNK_1103a5490,0x11,7);
  puVar2[0x10] = param_3;
  pcStack_40 = FUN_101344090;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103a54a8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101343f10; end: 101343f6b; -[_TtC16SCSnapEditorImpl23SnapEditorActionHandler init] */

void FUN_101343f10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapEditorImpl.SnapEditorActionHandler",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101343f3c);
  (*pcVar1)();
}



/* Entry: 101343f6c; end: 101343f7b; -[_TtC16SCSnapEditorImpl23SnapEditorActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101343f6c(long param_1)

{
  param_1 = param_1 + _DAT_112d74b60;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101343f7c; end: 101343f9b;  */

void FUN_101343f7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c9cb0);
  return;
}



/* Entry: 101343f9c; end: 101343fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101343f9c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar1 = lVar2 + _DAT_112d74b60;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      FUN_10134c4ec();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101343fc4; end: 10134408f;  */

void FUN_101343fc4(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "didTapDismiss(with:)";
  func_0x0001000c10c0("didTapDismiss(with:)");
  func_0x000107c61180();
  puVar2 = &UNK_1103a5418;
  func_0x000107c613fc(&UNK_1103a5418,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x101344098;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103a54d0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101344090; end: 10134409f;  */

void FUN_101344090(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c517f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1013440a0; end: 1013440c3;  */

undefined8 FUN_1013440a0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1013440c4; end: 1013440d3;  */

void FUN_1013440c4(long param_1,long param_2)

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



/* Entry: 1013440d4; end: 101344a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1013440d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,long param_26)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d74b90) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d74b98) = 0;
  lVar1 = _DAT_112d74ba0;
  func_0x0001000285a8(0x112d74a20,&UNK_10d935210);
  func_0x000107c613fc();
  uVar5 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  lVar1 = _DAT_112d74ba8;
  uVar5 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  lVar1 = _DAT_112d74bb0;
  *(undefined8 *)(unaff_x20 + _DAT_112d74bb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d74bb8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d74bc0) = param_7;
  *(long *)(unaff_x20 + _DAT_112d74bc8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d74bd0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d74bd8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d74be0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d74be8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d74bf0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d74bf8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c00) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c08) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c10) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c18) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c20) = param_19;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = param_2;
  func_0x000107c4141c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112d74c28) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c30) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c38) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c40) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c48) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c50) = param_24;
  uVar5 = *(undefined8 *)(param_26 + _DAT_113097748);
  *(undefined8 *)(unaff_x20 + _DAT_112d74c58) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d74c60) = param_25;
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + lVar1) + _DAT_11302bac8);
  puVar9 = PTR_PTR_1126b0320;
  func_0x000107c61168();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar5);
  func_0x000107c61174();
  func_0x000107c615f0(uVar13);
  func_0x000107c4d044(puVar9);
  func_0x000107c61180();
  puVar6 = puVar9;
  func_0x000107c5e514();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  uVar5 = uVar13;
  func_0x000107c4d048();
  func_0x000107c61180();
  func_0x000107c615e8(uVar13);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(unaff_x20 + _DAT_112d74c68) = uVar5;
  puVar7 = auStack_88;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x00010134a964(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar8 = puVar7;
  FUN_101347264();
  uVar5 = *(undefined8 *)((long)puVar7 + _DAT_112d74b90);
  *(undefined8 **)((long)puVar7 + _DAT_112d74b90) = puVar8;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  lVar2 = _DAT_112d74c50;
  lVar16 = *(long *)((long)puVar7 + _DAT_112d74c50);
  puVar9 = PTR_PTR_1126b0870;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c47da4();
  lVar1 = _DAT_112fde470;
  func_0x000107c61428(lVar16 + _DAT_112fde470,auStack_a0,1,0);
  uVar5 = *(undefined8 *)(lVar16 + lVar1);
  *(undefined **)(lVar16 + lVar1) = puVar9;
  func_0x000107c61170(lVar16);
  func_0x000107c615e8(uVar5);
  lVar1 = _DAT_112d74bb0;
  uVar5 = *(undefined8 *)((long)puVar7 + lVar2);
  uVar13 = *(undefined8 *)(*(long *)((long)puVar7 + _DAT_112d74bb0) + _DAT_113812268);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar5);
  func_0x000103a90808(uVar13);
  func_0x000107c61170(uVar5);
  puVar14 = *(undefined8 **)(*(long *)((long)puVar7 + lVar1) + _DAT_113812270);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = puVar8;
    func_0x000107c61170();
  }
  else {
    func_0x000107c615f0(puVar14);
    puVar10 = puVar8;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101344a70);
      (*pcVar3)();
    }
    func_0x000107c526c0(0);
    func_0x000107c61170(puVar10);
    puVar10 = puVar8;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101344a74);
      (*pcVar3)();
    }
    func_0x000107c5a378(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c3e2c0(puVar14);
    func_0x000107c615e8();
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar5 = *puVar14;
  func_0x000107c61174(uVar5);
  uVar13 = 0xd000000000000028;
  func_0x0001000a9a18(0xd000000000000028,0x800000010ef380e0);
  func_0x000107c61170(uVar5);
  func_0x000103ecd7ac(0);
  lVar1 = _DAT_112d74ba0;
  uVar5 = *(undefined8 *)((long)puVar7 + _DAT_112d74ba0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar5);
  puVar14 = puVar8;
  func_0x000103ecd474(puVar8,uVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c61574(uVar5);
  iVar4 = (int)*(undefined8 *)(param_8 + _DAT_113077160);
  func_0x000107c5b270();
  if (iVar4 != 0) {
    uVar17 = *(undefined8 *)((long)puVar7 + _DAT_112d74ba8);
    uVar15 = *(undefined8 *)((long)puVar7 + lVar1);
    puVar9 = &UNK_1103a55a8;
    func_0x000107c613fc(&UNK_1103a55a8,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = param_25;
    func_0x000107c61174();
    func_0x000107c6157c(uVar17);
    func_0x000107c6157c(uVar15);
    uVar5 = 0x101345e74;
    puVar6 = puVar9;
    func_0x0001000b6504(0x101345e74,puVar9);
    func_0x000107c61574(uVar15);
    func_0x000107c61574(puVar9);
    func_0x000104885df4(uVar5,puVar6);
    func_0x000107c61574(uVar17);
    func_0x000107c615e8(uVar5);
  }
  puVar9 = &UNK_1103a5508;
  func_0x000107c613fc(&UNK_1103a5508,0x18,7);
  *(undefined8 **)(puVar9 + 0x10) = puVar14;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x101345e4c;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0x42000000;
  pcStack_d8 = FUN_101344b70;
  puStack_d0 = &UNK_1103a5520;
  ppuVar11 = &puStack_e8;
  puStack_c0 = puVar9;
  func_0x000107c60bc4(ppuVar11);
  puVar9 = puStack_c0;
  func_0x000107c61174();
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1103a5558;
  func_0x000107c613fc(&UNK_1103a5558,0x40,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar13;
  *(undefined8 *)(puVar9 + 0x18) = param_5;
  *(undefined8 **)(puVar9 + 0x20) = puVar14;
  *(undefined8 **)(puVar9 + 0x28) = puVar8;
  *(undefined8 **)(puVar9 + 0x30) = puVar7;
  *(long *)(puVar9 + 0x38) = param_8;
  uStack_c8 = 0x101345e70;
  puStack_e8 = puVar6;
  uStack_e0 = 0x42000000;
  pcStack_d8 = (code *)&UNK_100ba5314;
  puStack_d0 = &UNK_1103a5570;
  ppuVar12 = &puStack_e8;
  puStack_c0 = puVar9;
  func_0x000107c60bc4(ppuVar12);
  puVar9 = puStack_c0;
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar14);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar9);
  func_0x000107c42c14(param_4);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(puVar7);
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
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_26);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar14);
  return puVar7;
}



/* Entry: 101344a74; end: 101344afb;  */

void FUN_101344a74(char *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *param_1;
  func_0x000107c5d74c();
  func_0x000107c61180();
  lVar2 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (cVar1 == '\x01') {
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c5be58(lVar2);
  }
  else {
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c5bb60(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101344afc; end: 101344b6f;  */

void FUN_101344afc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103eca7a0();
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000103eca62c(param_2,param_3);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 101344b70; end: 101344bf3;  */

void FUN_101344b70(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101344bf4; end: 101344daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101344bf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  ppuVar5 = &puStack_90;
  puVar2 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(param_2);
  func_0x000107c61170(uVar3);
  puVar8 = (undefined *)param_1[2];
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61434(param_1);
    puVar4 = puVar8;
    func_0x000101341d44(puVar8,0);
    func_0x000101343178(&puStack_90,puVar4 + 0x20,puVar8,param_1);
    func_0x000100ba5608(puStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
    if (ppuVar5 != (undefined **)puVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101344cb8);
      (*pcVar1)();
    }
  }
  puVar8 = puVar4;
  FUN_101344db0();
  func_0x000107c61574(puVar4);
  if (puVar8 != (undefined *)0x0) {
    lVar6 = 0;
    func_0x000103ecde28();
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x10) = param_4;
    func_0x000107c61174(param_4);
    lVar7 = lVar6;
    func_0x000103eca274(lVar6);
    func_0x000107c61574(lVar6);
    puStack_90 = puVar8;
    FUN_10134610c(lVar7);
    uVar3 = *(undefined8 *)(param_5 + _DAT_112d74dd0);
    *(undefined **)(param_5 + _DAT_112d74dd0) = puStack_90;
    func_0x000107c6142c(uVar3);
    puVar4 = &UNK_1103a57b0;
    func_0x000107c613fc(&UNK_1103a57b0,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_6;
    *(undefined8 *)(puVar4 + 0x18) = param_7;
    *(long *)(puVar4 + 0x20) = param_5;
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_5);
    FUN_1013475a4(FUN_1013462a8,puVar4);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 101344db0; end: 101344ee3;  */

undefined * FUN_101344db0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar6 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001013416e4(0,lVar6,0);
  puVar2 = PTR___ss11AnyHashableVN_11034e448;
  if (lVar6 != 0) {
    param_1 = param_1 + 0x20;
    do {
      puVar3 = puStack_68;
      func_0x0001007bbd18(param_1,&uStack_90);
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_a0 = uStack_70;
      uVar4 = 0x112d74b48;
      func_0x0001000285a8(0x112d74b48,&UNK_10d9352a0);
      puVar5 = &uStack_c8;
      func_0x000107c6147c(puVar5,&uStack_c0,puVar2,uVar4,6);
      uVar4 = uStack_c8;
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c61574(puVar3);
        return (undefined *)0x0;
      }
      uVar1 = *(ulong *)(puVar3 + 0x10);
      puStack_68 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        func_0x0001013416e4(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_68 + uVar1 * 8 + 0x20) = uVar4;
      param_1 = param_1 + 0x28;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return puStack_68;
}



/* Entry: 101344ee4; end: 101344fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101344ee4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = param_1;
  if (*(char *)((long)param_1 + _DAT_112d74b98) == '\x01') {
    puVar1 = *(undefined8 **)(param_2 + _DAT_113077160);
    func_0x000107c5b294();
    if (((ulong)puVar1 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(*(long *)((long)param_1 + _DAT_112d74bb0) + _DAT_113812270) == 0) {
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar2 = *puVar1;
    puStack_60 = param_1;
    uStack_58 = param_3;
    func_0x000107c61174(uVar2);
    func_0x0001000b0da8(0xd00000000000002b,0x800000010ef38140,0x1013462b4,auStack_70);
    func_0x000107c61170(uVar2);
    func_0x000107c4e2ec(param_3);
    func_0x000107c5bb50(*(undefined8 *)((long)param_1 + _DAT_112d74c58));
  }
  return;
}



/* Entry: 101344fd4; end: 101345007;  */

void FUN_101344fd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101345008; end: 10134504f; -[_TtC16SCSnapEditorImpl20SnapEditorEntryPoint dealloc] */

void FUN_101345008(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_dealloc_112525b20;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  return;
}



/* Entry: 101345050; end: 101345217; -[_TtC16SCSnapEditorImpl20SnapEditorEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013451fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101345200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101345050(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74bb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74bb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74bc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74bc8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74bd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74bd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74be0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74be8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74bf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74bf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c10));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d74c68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c20));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d74c28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74c60));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d74c58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74b90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d74ba0));
  return;
}



/* Entry: 101345218; end: 101345607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101345218(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = _DAT_113812270;
  lVar5 = _DAT_112d74b98;
  lVar13 = *(long *)(unaff_x20 + _DAT_112d74bb0);
  lVar12 = *(long *)(lVar13 + _DAT_113812270);
  if (lVar12 == 0) {
    if ((*(byte *)(unaff_x20 + _DAT_112d74b98) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112d74b98) = 1;
      FUN_101345608();
      lVar5 = _DAT_112d74b90;
      lVar12 = *(long *)(unaff_x20 + _DAT_112d74b90);
      uVar1 = 0;
      if (lVar12 != 0) {
        func_0x000107c61174();
        FUN_1013471d8();
        func_0x000107c61170(lVar12);
        uVar1 = *(undefined8 *)(unaff_x20 + lVar5);
      }
      *(undefined8 *)(unaff_x20 + lVar5) = 0;
      func_0x000107c61170(uVar1);
      if (*(long *)(lVar13 + lVar6) == 0) {
        puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,1);
        func_0x000100087c34(&puStack_80);
      }
      puVar4 = PTR_PTR_1126afc98;
      func_0x000107c61168();
      func_0x000107c3e26c();
      func_0x000107c61180();
      lVar5 = 0;
      FUN_101345ed0();
      func_0x000107c613fc();
      *(undefined1 *)(lVar5 + 0x10) = 0;
      lVar6 = 0;
      func_0x000107c5fd0c();
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)&puStack_80 - extraout_x8,1,1,lVar6);
      func_0x000107c5fcec(0);
      func_0x000107c6157c(lVar5);
      func_0x000107c61174();
      func_0x000107c61174();
      puVar7 = puVar4;
      func_0x000107c5fce8();
      puVar8 = puVar7;
      func_0x000100eea164();
      puVar9 = &UNK_1103a55d0;
      func_0x000107c613fc(&UNK_1103a55d0,0x38,7);
      *(undefined **)(puVar9 + 0x10) = puVar7;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      *(long *)(puVar9 + 0x20) = lVar5;
      *(long *)(puVar9 + 0x28) = unaff_x20;
      *(undefined **)(puVar9 + 0x30) = puVar4;
      uVar1 = 0;
      func_0x0001000abba4(0,0,(long)&puStack_80 - extraout_x8,&UNK_10d935338,puVar9);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d74c68);
      puVar9 = &UNK_1103a55f8;
      func_0x000107c613fc(&UNK_1103a55f8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,unaff_x20);
      puVar7 = &UNK_1103a5620;
      func_0x000107c613fc(&UNK_1103a5620,0x30,7);
      *(undefined **)(puVar7 + 0x10) = puVar9;
      *(long *)(puVar7 + 0x18) = lVar5;
      *(undefined8 *)(puVar7 + 0x20) = uVar1;
      *(undefined **)(puVar7 + 0x28) = puVar4;
      pcStack_60 = FUN_101345fac;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100288f10;
      puStack_68 = &UNK_1103a5638;
      ppuVar10 = &puStack_80;
      puStack_58 = puVar7;
      func_0x000107c60bc4(ppuVar10);
      puVar9 = puStack_58;
      func_0x000107c6157c(lVar5);
      func_0x000107c61174(puVar4);
      func_0x000107c6157c(uVar1);
      func_0x000107c61574(puVar9);
      func_0x000107c420a8(uVar11);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c60bd0(ppuVar10);
      puVar9 = puVar4;
      func_0x000107c4f3ec(puVar4);
      func_0x000107c61180();
      func_0x000107c61574(uVar1);
      func_0x000107c61170(puVar4);
      func_0x000107c61574(lVar5);
      return puVar9;
    }
  }
  else if ((*(byte *)(unaff_x20 + _DAT_112d74b98) & 1) == 0) {
    func_0x000107c615f0(lVar12);
    FUN_101345608();
    func_0x000107c41864(lVar12);
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d74b90);
    *(undefined8 *)(unaff_x20 + _DAT_112d74b90) = 0;
    func_0x000107c61170(uVar1);
    func_0x000103a90870();
    *(undefined1 *)(unaff_x20 + lVar5) = 1;
    lVar5 = _DAT_11302bad0;
    func_0x000107c61428(lVar13 + _DAT_11302bad0,&puStack_80,0,0);
    uVar2 = lVar13 + lVar5;
    func_0x000107c61618();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c61150();
      if ((uVar3 & 1) == 0) {
        func_0x000107c615e8(lVar12);
        func_0x000107c615e8(uVar2);
        return (undefined *)0x0;
      }
      func_0x000107c5b2a8(uVar2);
      func_0x000107c615e8(uVar2);
    }
    func_0x000107c615e8(lVar12);
    return (undefined *)0x0;
  }
  FUN_101345608();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d74b90);
  *(undefined8 *)(unaff_x20 + _DAT_112d74b90) = 0;
  func_0x000107c61170(uVar1);
  func_0x000103a90870();
  return (undefined *)0x0;
}



/* Entry: 101345608; end: 1013456af;  */

/* WARNING: Possible PIC construction at 0x000101345678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010134567c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101345608(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112d74be0) + _DAT_112ff76b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c5b1b8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c4286c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1013456b0; end: 10134571f;  */

void FUN_1013456b0(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101345720;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (2000000000);
  return;
}



/* Entry: 101345720; end: 1013457bf;  */

void FUN_101345720(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  lVar1 = *(long *)(lVar4 + 0x38);
  func_0x000107c615c0(lVar1);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  if (unaff_x20 == 0) {
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,lVar1);
    pcVar3 = FUN_1013457c0;
  }
  else {
    func_0x000107c614ac();
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,unaff_x20);
    pcVar3 = (code *)0x101346454;
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,lVar1);
  return;
}



/* Entry: 1013457c0; end: 10134581f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013457c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined1 *)(lVar2 + 0x10) = 1;
    func_0x000103a90870();
    func_0x000107c4358c(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010134581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101345820; end: 1013458df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101345820(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
      *(undefined1 *)(param_3 + 0x10) = 1;
      func_0x000107c5fd50(param_4,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                          PTR___ss5NeverOs5ErrorsWP_11034ee90);
      uVar1 = *(undefined8 *)(param_2 + _DAT_112d74c50);
      func_0x000107c61174(uVar1);
      func_0x000103a90870();
      func_0x000107c61170(uVar1);
      func_0x000107c4358c(param_5);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013458e0; end: 10134590b; -[_TtC16SCSnapEditorImpl20SnapEditorEntryPoint init] */

void FUN_1013458e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapEditorImpl.SnapEditorEntryPoint",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10134590c);
  (*pcVar1)();
}



/* Entry: 10134590c; end: 10134590f;  */

void FUN_10134590c(void)

{
  return;
}



/* Entry: 101345910; end: 10134592f;  */

void FUN_101345910(void)

{
  FUN_101345218();
  return;
}



/* Entry: 101345930; end: 1013459b7;  */

void FUN_101345930(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined1 in_w4;
  undefined1 in_w5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined1 in_stack_00000008;
  
  *(undefined1 *)(unaff_x22 + 0x6a) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x58) = in_stack_00000000;
  *(undefined1 *)(unaff_x22 + 0x69) = in_w5;
  *(undefined1 *)(unaff_x22 + 0x68) = in_w4;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x6;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1013459b8,uVar1,uVar2);
  return;
}



/* Entry: 1013459b8; end: 101345b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013459b8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  lVar11 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  if (*(long *)(*(long *)(lVar11 + _DAT_112d74bb0) + _DAT_113812270) == 0) {
    *(undefined1 *)(unaff_x22 + 0x10) = 1;
    func_0x000100087c34(unaff_x22 + 0x10);
  }
  uVar5 = *(undefined1 *)(unaff_x22 + 0x6a);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x69);
  uVar7 = *(undefined1 *)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined1 *)(lVar2 + _DAT_112d74b98) = 1;
  uVar12 = *(undefined8 *)(lVar2 + _DAT_112d74b90);
  *(undefined8 *)(lVar2 + _DAT_112d74b90) = 0;
  uVar10 = *(undefined8 *)(lVar2 + _DAT_112d74c68);
  puVar8 = &UNK_1103a5698;
  func_0x000107c613fc(&UNK_1103a5698,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,uVar12);
  puVar9 = &UNK_1103a5710;
  func_0x000107c613fc(&UNK_1103a5710,0x41,7);
  *(long *)(puVar9 + 0x10) = lVar2;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  puVar9[0x20] = uVar7;
  puVar9[0x21] = uVar6;
  *(undefined8 *)(puVar9 + 0x28) = uVar4;
  *(undefined8 *)(puVar9 + 0x30) = uVar1;
  *(undefined8 *)(puVar9 + 0x38) = uVar3;
  puVar9[0x40] = uVar5;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x101346450;
  *(undefined **)(unaff_x22 + 0x38) = puVar9;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100288f10;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1103a5728;
  lVar11 = unaff_x22 + 0x10;
  func_0x000107c60bc4(lVar11);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61174(lVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61574(uVar13);
  func_0x000107c420a8(uVar10);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(lVar11);
  func_0x000107c61170(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101345b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101345b7c; end: 101345cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101345b7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if (*(long *)(*(long *)(unaff_x20 + _DAT_112d74bb0) + _DAT_113812270) == 0) {
    puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,1);
    func_0x000100087c34(&puStack_70);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112d74b98) = 1;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d74b90);
  *(undefined8 *)(unaff_x20 + _DAT_112d74b90) = 0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d74c68);
  puVar1 = &UNK_1103a5698;
  func_0x000107c613fc(&UNK_1103a5698,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar4);
  puVar2 = &UNK_1103a56c0;
  func_0x000107c613fc(&UNK_1103a56c0,0x41,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined2 *)(puVar2 + 0x20) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(puVar2 + 0x28) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(puVar2 + 0x30) = puVar1;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  puVar2[0x40] = 0;
  pcStack_50 = FUN_101345fd8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100288f10;
  puStack_58 = &UNK_1103a56d8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(uVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101345cf0; end: 101345e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101345cf0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_101345608();
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1013471d8();
    func_0x000107c61170(param_3);
  }
  lVar2 = _DAT_11302bad0;
  lVar4 = *(long *)(param_2 + _DAT_112d74bb0);
  func_0x000107c61428(lVar4 + _DAT_11302bad0,auStack_80,0,0);
  lVar4 = lVar4 + lVar2;
  func_0x000107c61618();
  puVar1 = PTR___sSSN_11034da80;
  if (lVar4 != 0) {
    func_0x000107c5fc48(param_6,PTR___sSSN_11034da80);
    uVar3 = 0;
    FUN_101345fdc(0);
    func_0x000107c5fc48(param_7,uVar3);
    func_0x000107c5fc48(param_8,puVar1);
    func_0x000107c5b21c(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
  }
  return;
}



/* Entry: 101345e3c; end: 101345e7b;  */

void FUN_101345e3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101345e7c; end: 101345ebf;  */

void FUN_101345e7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101345ec0; end: 101345ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101345ec0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar9 = &puStack_90;
  puVar6 = param_1;
  func_0x0001000298f0(param_1,uVar12,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61428();
  uVar7 = *puVar6;
  func_0x000107c61174(uVar7);
  func_0x0001000aa0a8(uVar12);
  func_0x000107c61170(uVar7);
  puVar13 = (undefined *)param_1[2];
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined *)0x0) {
    func_0x000107c61434(param_1);
    puVar8 = puVar13;
    func_0x000101341d44(puVar13,0);
    func_0x000101343178(&puStack_90,puVar8 + 0x20,puVar13,param_1);
    func_0x000100ba5608(puStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
    if (ppuVar9 != (undefined **)puVar13) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101344cb8);
      (*pcVar5)();
    }
  }
  puVar13 = puVar8;
  FUN_101344db0();
  func_0x000107c61574(puVar8);
  if (puVar13 != (undefined *)0x0) {
    lVar10 = 0;
    func_0x000103ecde28();
    func_0x000107c613fc();
    *(undefined8 *)(lVar10 + 0x10) = uVar1;
    func_0x000107c61174(uVar1);
    lVar11 = lVar10;
    func_0x000103eca274(lVar10);
    func_0x000107c61574(lVar10);
    puStack_90 = puVar13;
    FUN_10134610c(lVar11);
    uVar12 = *(undefined8 *)(lVar3 + _DAT_112d74dd0);
    *(undefined **)(lVar3 + _DAT_112d74dd0) = puStack_90;
    func_0x000107c6142c(uVar12);
    puVar8 = &UNK_1103a57b0;
    func_0x000107c613fc(&UNK_1103a57b0,0x28,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar2;
    *(undefined8 *)(puVar8 + 0x18) = uVar4;
    *(long *)(puVar8 + 0x20) = lVar3;
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(lVar3);
    FUN_1013475a4(FUN_1013462a8,puVar8);
    func_0x000107c61574(puVar8);
  }
  return;
}



/* Entry: 101345ed0; end: 101345eef;  */

void FUN_101345ed0(void)

{
  func_0x000107c61168(&PTR_PTR_112d74cd8);
  return;
}



/* Entry: 101345ef0; end: 101345f6f;  */

void FUN_101345ef0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101345f70;
  plVar6[3] = lVar3;
  plVar6[4] = lVar7;
  plVar6[2] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcec(0,uVar1,uVar2);
  plVar6[5] = lVar4;
  func_0x000107c5fce8();
  plVar6[6] = lVar4;
  plVar5 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  plVar6[7] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_101345720;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (2000000000);
  return;
}



/* Entry: 101345f70; end: 101345fab;  */

void FUN_101345f70(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101345fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101345fac; end: 101345fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101345fac(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
      *(undefined1 *)(lVar1 + 0x10) = 1;
      func_0x000107c5fd50(uVar4,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                          PTR___ss5NeverOs5ErrorsWP_11034ee90);
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112d74c50);
      func_0x000107c61174(uVar4);
      func_0x000103a90870();
      func_0x000107c61170(uVar4);
      func_0x000107c4358c(uVar2);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101345fb8; end: 101345fd7;  */

void FUN_101345fb8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c9da0);
  return;
}



/* Entry: 101345fd8; end: 101345fdb;  */

void FUN_101345fd8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101345cf0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x21),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined1 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101345fdc; end: 10134609b;  */

void FUN_101345fdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51360 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126becd8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d51360 = puVar1;
  return;
}



/* Entry: 10134609c; end: 10134610b;  */

void FUN_10134609c(undefined8 param_1)

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
  plVar3[1] = (long)&UNK_1000dabdc;
  (*(code *)&UNK_1000ac80c)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10134610c; end: 1013462a7;  */

void FUN_10134610c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
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
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x0001013461f8(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1013462cc(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013461f4);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013461f8);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013461f0);
  (*pcVar1)();
}



/* Entry: 1013462a8; end: 1013462cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013462a8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = puVar1;
  if (*(char *)((long)puVar1 + _DAT_112d74b98) == '\x01') {
    puVar2 = *(undefined8 **)(*(long *)(unaff_x20 + 0x18) + _DAT_113077160);
    func_0x000107c5b294();
    if (((ulong)puVar2 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(*(long *)((long)puVar1 + _DAT_112d74bb0) + _DAT_113812270) == 0) {
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar3 = *puVar2;
    puStack_60 = puVar1;
    uStack_58 = uVar4;
    func_0x000107c61174(uVar3);
    func_0x0001000b0da8(0xd00000000000002b,0x800000010ef38140,0x1013462b4,auStack_70);
    func_0x000107c61170(uVar3);
    func_0x000107c4e2ec(uVar4);
    func_0x000107c5bb50(*(undefined8 *)((long)puVar1 + _DAT_112d74c58));
  }
  return;
}



/* Entry: 1013462cc; end: 10134642f;  */

ulong FUN_1013462cc(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101346430);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101346424);
        (*pcVar1)();
      }
      uVar3 = 0x112d74b48;
      func_0x0001000285a8(0x112d74b48,&UNK_10d9352a0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101346428);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10134642c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar8;
            *param_1 = uVar3;
            func_0x000107c615f0(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c615f0(uVar3);
      }
      else {
        uVar7 = 0;
        do {
          uVar2 = uVar7;
          FUN_10134ba64(uVar7,param_3);
          param_1[uVar7] = uVar2;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101346430; end: 101346457;  */

void FUN_101346430(long param_1,long param_2)

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



/* Entry: 101346458; end: 101346467; -[_TtC16SCSnapEditorImpl25SnapEditorRecoveryService recoveryEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101346458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d74d50));
  return;
}



/* Entry: 101346468; end: 10134649b; -[_TtC16SCSnapEditorImpl25SnapEditorRecoveryService setRecoveryEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101346468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d74d50);
  *(undefined8 *)(param_1 + _DAT_112d74d50) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10134649c; end: 1013465e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10134649c(undefined1 *param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar1 = _DAT_112d74d50;
  puVar3 = &stack0xffffffffffffffb0;
  *(undefined8 *)(unaff_x20 + _DAT_112d74d50) = 0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61170();
  *(undefined1 **)(unaff_x20 + _DAT_112d74d58) = param_1;
  *(byte *)(unaff_x20 + _DAT_112d74d60) = param_2;
  FUN_10134676c();
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174();
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar2);
  puVar4 = param_1;
  if ((param_2 & 1) != 0) {
    puVar4 = puVar3;
    func_0x000107c61174(puVar3);
    puVar5 = param_1;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar5 != (undefined1 *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      uVar6 = 0xd00000000000001b;
      func_0x000107c5fadc(0xd00000000000001b,0x800000010ef38170);
      func_0x000107c56bcc(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar6);
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 1013465e4; end: 1013466a7;  */

/* WARNING: Possible PIC construction at 0x000101346678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010134667c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013465e4(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112d74d60) == '\x01') {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d74d58);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c5fadc(0xd00000000000001b,0x800000010ef38170);
      func_0x000107c56bcc(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1013466a8; end: 1013466d7; -[_TtC16SCSnapEditorImpl25SnapEditorRecoveryService updateRecoveryStateWithHasRecoveryModel:] */

void FUN_1013466a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1013465e4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013466d8; end: 101346733; -[_TtC16SCSnapEditorImpl25SnapEditorRecoveryService init] */

void FUN_1013466d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapEditorImpl.SnapEditorRecoveryService",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101346704);
  (*pcVar1)();
}



/* Entry: 101346734; end: 10134676b; -[_TtC16SCSnapEditorImpl25SnapEditorRecoveryService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101346750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101346754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101346734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d74d50));
  return;
}



/* Entry: 10134676c; end: 10134678b;  */

void FUN_10134676c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c9f38);
  return;
}



/* Entry: 10134678c; end: 1013470cf;  */

void FUN_10134678c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,code *param_5,
                  undefined8 param_6,long param_7,char param_8,ulong param_9,code *param_10)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  double *pdVar20;
  ulong uVar21;
  long *plVar22;
  undefined *puStack_110;
  code *pcStack_108;
  code *pcStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  lVar3 = 0x112d36580;
  pcStack_100 = param_10;
  uStack_e0 = param_6;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar4 = (long)&puStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar4 - extraout_x12;
  lVar3 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  if (param_3 == 0) {
    (**(code **)(extraout_x12_00 + 0x38))(lVar18,1,1);
  }
  else {
    lStack_f8 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    lStack_f0 = extraout_x12_00;
    lStack_e8 = lVar3;
    func_0x000107c3ceb4();
    func_0x000107c61180();
    if (param_3 != 0) {
      func_0x000107c5edb4(lVar4);
      func_0x000107c61170(param_3);
    }
    lVar1 = lStack_e8;
    lVar3 = lStack_f0;
    (**(code **)(lStack_f0 + 0x38))(lVar4,param_3 == 0,1,lStack_e8);
    func_0x0001001021cc(lVar4,lVar18);
    lVar4 = lVar18;
    (**(code **)(lVar3 + 0x30))(lVar18,1,lVar1);
    if ((int)lVar4 != 1) {
      pcStack_108 = param_5;
      (**(code **)(lVar3 + 0x20))(lStack_f8,lVar18,lVar1);
      puVar10 = PTR_PTR_1126c4268;
      func_0x000107c61168();
      func_0x000107c2ba94();
      func_0x000107c61180();
      puVar14 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x000107c61168();
      puVar5 = puVar14;
      func_0x000107c5dc58(param_1,param_2);
      func_0x000107c61180();
      puVar11 = puVar10;
      func_0x000107c2baa8(puVar10,puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar5);
      ppuVar6 = (undefined **)0x0;
      FUN_101347184(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c60108(0x3ff0000000000000);
      puVar5 = puVar11;
      func_0x000107c2baac(puVar11,ppuVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170();
      func_0x000107c5ed90();
      puVar11 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      func_0x000107c61168();
      ppuVar15 = ppuVar6;
      func_0x000107c3e250();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar6);
      puVar7 = puVar5;
      puVar10 = puVar11;
      func_0x000107c2ba9c();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar11);
      puVar5 = puVar7;
      if (param_8 == '\x01') {
        lVar3 = *(long *)(param_7 + 0x10);
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (lVar3 != 0) {
          pdVar20 = (double *)(param_7 + 0x20);
          do {
            puVar8 = (undefined *)0x3e8;
            func_0x000107c600d0(*pdVar20 / 1000.0);
            ppuVar6 = &puStack_b0;
            puVar9 = puVar14;
            puStack_b0 = puVar8;
            puStack_a8 = puVar10;
            ppuStack_a0 = ppuVar15;
            func_0x000107c5dc5c();
            func_0x000107c61180();
            puVar8 = puVar11;
            func_0x000107c61550();
            if ((((int)puVar8 == 0) || ((long)puVar11 < 0)) ||
               (ppuVar15 = ppuVar6, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar11 >> 0x3e == 0) {
                puVar10 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar10 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar11) {
                  puVar10 = puVar11;
                }
                func_0x000107c60480();
              }
              puVar10 = puVar10 + 1;
              puVar11 = (undefined *)0x0;
              ppuVar15 = (undefined **)0x1;
              func_0x0001013420d0();
            }
            uVar16 = (ulong)puVar11 & 0xffffffffffffff8;
            uVar19 = *(ulong *)(uVar16 + 0x10);
            if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar19) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
              ppuVar15 = (undefined **)0x1;
              puVar10 = (undefined *)(uVar19 + 1);
              func_0x0001013420d0();
              uVar16 = (ulong)puVar11 & 0xffffffffffffff8;
            }
            *(undefined **)(uVar16 + 0x10) = (undefined *)(uVar19 + 1);
            *(undefined **)(uVar16 + uVar19 * 8 + 0x20) = puVar9;
            lVar3 = lVar3 + -1;
            pdVar20 = pdVar20 + 1;
          } while (lVar3 != 0);
        }
        uVar17 = 0;
        FUN_101347184(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
        puVar10 = puVar11;
        func_0x000107c5fc48(puVar11,uVar17);
        func_0x000107c2baa0(puVar7,puVar10);
        func_0x000107c61180();
        func_0x000107c6142c(puVar11);
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ed0();
        func_0x000107c2baa4(puVar7,puVar10);
        func_0x000107c61180();
      }
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar5);
      puVar10 = puVar7;
      func_0x000107c2ba98(puVar7);
      func_0x000107c61180();
      func_0x000107c43e10();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar17 = 0x112d74dc8;
      func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
      uVar19 = param_9;
      func_0x000107c5fc54(param_9,uVar17);
      func_0x000107c61170(param_9);
      if (uVar19 >> 0x3e == 0) {
        uVar16 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
        if (uVar16 != 0) goto LAB_101346d00;
LAB_101346e00:
        func_0x000107c6142c(uVar19);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar16 = uVar19 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar19) {
          uVar16 = uVar19;
        }
        func_0x000107c60480();
        if (uVar16 == 0) goto LAB_101346e00;
LAB_101346d00:
        puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puStack_110 = puVar7;
        FUN_101321b20(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
        puVar10 = puStack_b0;
        if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013470bc);
          (*pcVar2)();
        }
        func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
        uVar21 = 0;
        do {
          if ((uVar19 & 0xc000000000000001) == 0) {
            uVar12 = *(ulong *)(uVar19 + uVar21 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar12 = uVar21;
            FUN_10134bc08(uVar21,uVar19);
          }
          uVar13 = uVar12;
          func_0x000100759c94();
          func_0x000107c61170(uVar12);
          uVar12 = *(ulong *)(puVar10 + 0x10);
          puStack_b0 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar12) {
            FUN_101321b20(1 < *(ulong *)(puVar10 + 0x18),uVar12 + 1,1);
          }
          puVar10 = puStack_b0;
          uVar21 = uVar21 + 1;
          *(ulong *)(puStack_b0 + 0x10) = uVar12 + 1;
          *(ulong *)(puStack_b0 + uVar12 * 8 + 0x20) = uVar13;
        } while (uVar16 != uVar21);
        func_0x000107c6142c(uVar19);
        puVar7 = puStack_110;
      }
      puVar14 = &UNK_10d933050;
      func_0x0001000285a8(0x112d4f918);
      puVar5 = puVar10;
      func_0x00010488813c(puVar10);
      func_0x000107c6142c(puVar10);
      func_0x0001048886ac(&puStack_b0);
      func_0x000107c61574(puVar5);
      puVar5 = puStack_b0;
      uVar19 = (ulong)puStack_a8 & 0xff;
      if ((char)puStack_a8 == '\x01') {
        puVar11 = puStack_b0;
        func_0x000107c5ed2c();
        puVar10 = puVar11;
        func_0x000107c42210();
        func_0x000107c61180();
        puVar9 = puVar10;
        func_0x000107c5faec();
        func_0x000107c61170(puVar10);
        puStack_b0 = puVar9;
        puStack_a8 = puVar14;
        func_0x000107c5fb78(0x3a,0xe100000000000000);
        puVar10 = puVar11;
        func_0x000107c3fcb0();
        puVar14 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        puStack_b8 = puVar10;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar14);
        func_0x000107c5fb78(0x20,0xe100000000000000);
        func_0x000107c614cc(puVar5,auStack_c0,auStack_d8);
        uVar17 = uStack_c8;
        func_0x000107c60640(uStack_d0,uStack_c8);
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar17);
        puVar10 = puStack_a8;
        (*pcStack_108)(puStack_b0,puStack_a8);
        func_0x000107c6142c(puVar10);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar7);
        FUN_1013471c4(puVar5,1);
        (**(code **)(lStack_f0 + 8))(lStack_f8,lStack_e8);
        return;
      }
      lVar3 = *(long *)(puStack_b0 + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar3 != 0) {
        plVar22 = (long *)(puStack_b0 + 0x20);
        do {
          lVar18 = *plVar22;
          if (lVar18 != 0) {
            func_0x000107c61174();
            func_0x000107c61174();
            puVar14 = puVar10;
            func_0x000107c61550();
            if (((((ulong)puVar14 & 1) == 0) || ((long)puVar10 < 0)) ||
               (puVar14 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar10 >> 0x3e == 0) {
                puVar11 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar11 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar10) {
                  puVar11 = puVar10;
                }
                func_0x000107c60480(puVar11);
              }
              puVar14 = (undefined *)0x0;
              func_0x0001013420bc(0,puVar11 + 1,1,puVar10);
            }
            uVar21 = (ulong)puVar14 & 0xffffffffffffff8;
            uVar16 = *(ulong *)(uVar21 + 0x10);
            puVar10 = puVar14;
            if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar16) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar21 + 0x18));
              func_0x0001013420bc(puVar10,uVar16 + 1,1,puVar14);
              uVar21 = (ulong)puVar10 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar21 + 0x10) = uVar16 + 1;
            *(long *)(uVar21 + uVar16 * 8 + 0x20) = lVar18;
            func_0x000107c61170(lVar18);
          }
          lVar3 = lVar3 + -1;
          plVar22 = plVar22 + 1;
        } while (lVar3 != 0);
      }
      if ((ulong)puVar10 >> 0x3e == 0) {
        puVar14 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar14 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar14 = puVar10;
        }
        func_0x000107c60480();
      }
      if ((long)puVar14 < 1) {
        (*pcStack_108)(0x6c75736572206f4e,0xea00000000007374);
      }
      else {
        (*pcStack_100)(puVar10);
      }
      func_0x000107c61170(puVar7);
      FUN_1013471c4(puVar5,uVar19);
      (**(code **)(lStack_f0 + 8))(lStack_f8,lStack_e8);
      goto LAB_101346bd0;
    }
  }
  func_0x0001000293e4(lVar18);
  uVar17 = 0xe000000000000000;
  puStack_b0 = (undefined *)0x0;
  puStack_a8 = (undefined *)0xe000000000000000;
  func_0x000107c602fc(0x2d);
  func_0x000107c6142c(puStack_a8);
  puStack_b0 = (undefined *)0xd00000000000002b;
  puStack_a8 = (undefined *)0x800000010ef381f0;
  if (param_4 != 0) {
    func_0x000107c614cc(param_4,auStack_80,auStack_98);
    func_0x000107c60640(uStack_90,uStack_88);
    uVar17 = uStack_88;
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar17);
  puVar10 = puStack_a8;
  (*param_5)(puStack_b0,puStack_a8);
LAB_101346bd0:
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 1013470d0; end: 10134712b; -[_TtC16SCSnapEditorImpl28SnapEditorThumbnailGenerator init] */

void FUN_1013470d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapEditorImpl.SnapEditorThumbnailGenerator",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013470fc);
  (*pcVar1)();
}



/* Entry: 10134712c; end: 101347163; -[_TtC16SCSnapEditorImpl28SnapEditorThumbnailGenerator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101347148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010134714c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134712c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d74d90));
  return;
}



/* Entry: 101347164; end: 101347183;  */

void FUN_101347164(void)

{
  func_0x000107c61168(&PTR_PTR_1127ca028);
  return;
}



/* Entry: 101347184; end: 1013471c3;  */

void FUN_101347184(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1013471c4; end: 1013471d7;  */

void FUN_1013471c4(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1013471d8; end: 101347263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013471d8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112d74e08) == '\x01') {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d74de0);
    if (lVar1 != 0) {
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c41848();
        func_0x000107c615e8(lVar1);
      }
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d74de0);
  *(undefined8 *)(unaff_x20 + _DAT_112d74de0) = 0;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d74dd0);
  *(undefined **)(unaff_x20 + _DAT_112d74dd0) = PTR___swiftEmptyArrayStorage_11034f1c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101347264; end: 10134749b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101347264(undefined8 param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  byte bVar9;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffb0;
  *(undefined **)(unaff_x20 + _DAT_112d74dd0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112d74dd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d74de0) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d74df0,0);
  lVar8 = _DAT_112d74df8;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar8) = uVar4;
  lVar8 = _DAT_112d74e00;
  func_0x000107c61614(unaff_x20 + _DAT_112d74e00,0);
  *(undefined1 *)(unaff_x20 + _DAT_112d74e20) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d74e28) = 0;
  func_0x000107c61604(unaff_x20 + lVar8,param_2);
  uVar3 = (undefined1)*(undefined8 *)(*(long *)(param_2 + _DAT_112d74bc8) + _DAT_113077160);
  func_0x000107c5b210();
  *(undefined1 *)(unaff_x20 + _DAT_112d74e08) = uVar3;
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c453e4();
  func_0x000107c5c9e4();
  func_0x000107c61170(puVar5);
  *(undefined8 *)(unaff_x20 + _DAT_112d74de8) = param_1;
  lVar8 = *(long *)(param_2 + _DAT_112d74bb0);
  bVar2 = *(int *)(lVar8 + _DAT_11302bb18) == 1;
  *(bool *)(unaff_x20 + _DAT_112d74e10) = bVar2;
  bVar9 = !bVar2;
  lVar8 = *(long *)(lVar8 + _DAT_11302bb20);
  if (lVar8 != 0) {
    func_0x000107c49804();
    if ((uint)lVar8 < 4) {
      bVar9 = (byte)(6 >> (ulong)((uint)lVar8 & 0x1f));
    }
  }
  *(byte *)(unaff_x20 + _DAT_112d74e18) = bVar9 & 1;
  func_0x00010134a964();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10134749c);
    (*pcVar1)();
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c52b50(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  return puVar6;
}



/* Entry: 10134749c; end: 1013474cb;  */

void FUN_10134749c(void)

{
  func_0x00010134a964();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


