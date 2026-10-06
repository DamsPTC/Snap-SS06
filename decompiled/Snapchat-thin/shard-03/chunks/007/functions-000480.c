/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102bfb7f8; end: 102bfb957;  */

ulong FUN_102bfb7f8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfb958);
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
  FUN_102bfb958(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfb954);
      (*pcVar1)();
    }
    FUN_102bfb9e8(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 102bfb958; end: 102bfb9e7;  */

undefined *
FUN_102bfb958(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102bfb540(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 102bfb9e8; end: 102bfbb03;  */

long FUN_102bfb9e8(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfbb00);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfbb04);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102bfdd1c(0,param_5,param_6);
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
      FUN_102bfdd1c(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfbafc);
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



/* Entry: 102bfbb04; end: 102bfbe83;  */

ulong FUN_102bfbb04(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bfbbe8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bfbbec);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0;
    func_0x000107c61168(PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0;
    func_0x000107c61168(PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102bfdd1c(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bfbcc8);
  (*pcVar2)();
}



/* Entry: 102bfbe84; end: 102bfbf93;  */

void FUN_102bfbe84(ulong *param_1)

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
    FUN_102bfca30();
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
      uVar2 = 0;
      FUN_102bfdd1c(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_102bfbf94(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_102bfc414(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102bfbf94; end: 102bfc413;  */

void FUN_102bfbf94(double param_1,long *param_2,undefined8 param_3,long *param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = param_4[1];
  if (0 < lVar16) {
    lVar8 = 0;
    do {
      lVar15 = lVar8 + 1;
      if (lVar15 < lVar16) {
        uVar3 = *(undefined8 *)(*param_4 + lVar15 * 8);
        puVar10 = (undefined8 *)(*param_4 + lVar8 * 8);
        puVar14 = puVar10 + 2;
        uVar13 = *puVar10;
        func_0x000107c61174(uVar3);
        func_0x000107c61174(uVar13);
        func_0x000107c5e3fc(uVar3);
        dVar17 = param_1;
        func_0x000107c5e3fc(uVar13);
        dVar18 = dVar17;
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar13);
        lVar9 = lVar8 + 2;
        do {
          lVar7 = lVar9;
          lVar15 = lVar16;
          dVar20 = dVar18;
          if (lVar16 == lVar7) break;
          uVar3 = puVar14[-1];
          uVar13 = *puVar14;
          func_0x000107c61174(uVar13);
          func_0x000107c61174(uVar3);
          func_0x000107c5e3fc(uVar13);
          dVar19 = dVar18;
          func_0x000107c5e3fc(uVar3);
          dVar20 = dVar19;
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar3);
          bVar2 = dVar19 <= dVar18;
          puVar14 = puVar14 + 1;
          lVar9 = lVar7 + 1;
          lVar15 = lVar7;
          dVar18 = dVar20;
        } while (param_1 < dVar17 != bVar2);
        bVar2 = param_1 < dVar17;
        param_1 = dVar20;
        if (bVar2) {
          if (lVar15 < lVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc3e8);
            (*pcVar1)();
          }
          if (lVar8 < lVar15) {
            lVar7 = *param_4;
            puVar10 = (undefined8 *)(lVar7 + lVar15 * 8);
            puVar14 = (undefined8 *)(lVar7 + lVar8 * 8);
            lVar9 = lVar15;
            lVar16 = lVar8;
            do {
              puVar10 = puVar10 + -1;
              lVar9 = lVar9 + -1;
              if (lVar16 != lVar9) {
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc408);
                  (*pcVar1)();
                }
                uVar3 = *puVar14;
                *puVar14 = *puVar10;
                *puVar10 = uVar3;
              }
              lVar16 = lVar16 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar16 < lVar9);
          }
        }
      }
      lVar16 = param_4[1];
      lVar9 = lVar15;
      if (lVar15 < lVar16) {
        if (SBORROW8(lVar15,lVar8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc3e4);
          (*pcVar1)();
        }
        if (lVar15 - lVar8 < param_5) {
          if (SCARRY8(lVar8,param_5)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc3ec);
            (*pcVar1)();
          }
          lVar7 = lVar8 + param_5;
          if (lVar16 <= lVar8 + param_5) {
            lVar7 = lVar16;
          }
          if (lVar7 < lVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc3f0);
            (*pcVar1)();
          }
          if (lVar15 != lVar7) {
            lVar12 = *param_4;
            puVar14 = (undefined8 *)(lVar12 + lVar15 * 8 + -8);
            lVar16 = lVar8 - lVar15;
            do {
              uVar3 = *(undefined8 *)(lVar12 + lVar15 * 8);
              puVar10 = puVar14;
              lVar9 = lVar16;
              dVar17 = param_1;
              do {
                uVar13 = *puVar10;
                func_0x000107c61174(uVar3);
                func_0x000107c61174(uVar13);
                func_0x000107c5e3fc(uVar3);
                dVar18 = dVar17;
                func_0x000107c5e3fc(uVar13);
                param_1 = dVar18;
                func_0x000107c61170(uVar3);
                func_0x000107c61170(uVar13);
                if (dVar18 <= dVar17) break;
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc3f4);
                  (*pcVar1)();
                }
                uVar13 = *puVar10;
                uVar3 = puVar10[1];
                *puVar10 = uVar3;
                puVar10[1] = uVar13;
                bVar2 = lVar9 != -1;
                lVar9 = lVar9 + 1;
                puVar10 = puVar10 + -1;
                dVar17 = param_1;
              } while (bVar2);
              lVar15 = lVar15 + 1;
              puVar14 = puVar14 + 1;
              lVar16 = lVar16 + -1;
              lVar9 = lVar7;
            } while (lVar15 != lVar7);
          }
        }
      }
      puVar6 = puStack_58;
      if (lVar9 < lVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc3d8);
        (*pcVar1)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar11 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar11 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
      *(long *)(puVar6 + uVar11 * 0x10 + 0x20) = lVar8;
      *(long *)(puVar6 + uVar11 * 0x10 + 0x28) = lVar9;
      puStack_58 = puVar6;
      if (*param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc40c);
        (*pcVar1)();
      }
      FUN_102bfc4fc(&puStack_58,*param_2,param_4);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102bfc3a0;
      lVar16 = param_4[1];
      lVar8 = lVar9;
    } while (lVar9 < lVar16);
  }
  puVar6 = puStack_58;
  lVar16 = *param_2;
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc414);
    (*pcVar1)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar11 = *(ulong *)(puVar6 + 0x10);
  while (puStack_58 = puVar6, 1 < uVar11) {
    lVar8 = *param_4;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc410);
      (*pcVar1)();
    }
    lVar7 = uVar11 - 1;
    lVar9 = *(long *)(puVar6 + uVar11 * 0x10);
    lVar15 = *(long *)(puVar6 + lVar7 * 0x10 + 0x28);
    FUN_102bfc764(lVar8 + lVar9 * 8,lVar8 + *(long *)(puVar6 + lVar7 * 0x10 + 0x20) * 8,
                  lVar8 + lVar15 * 8,lVar16);
    if (unaff_x21 != 0) break;
    if (lVar15 < lVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc3dc);
      (*pcVar1)();
    }
    puVar4 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar11 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc3e0);
      (*pcVar1)();
    }
    *(long *)(puVar6 + uVar11 * 0x10) = lVar9;
    *(long *)((long)(puVar6 + uVar11 * 0x10) + 8) = lVar15;
    puStack_58 = puVar6;
    func_0x0001000a97cc(lVar7);
    puVar6 = puStack_58;
    uVar11 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_102bfc3a0:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 102bfc414; end: 102bfc4fb;  */

void FUN_102bfc414(double param_1,long param_2,long param_3,long param_4,long *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  if (param_4 != param_3) {
    lVar6 = *param_5;
    puVar4 = (undefined8 *)(lVar6 + param_4 * 8 + -8);
    param_2 = param_2 - param_4;
    do {
      uVar3 = *(undefined8 *)(lVar6 + param_4 * 8);
      puVar7 = puVar4;
      lVar8 = param_2;
      dVar9 = param_1;
      do {
        uVar5 = *puVar7;
        func_0x000107c61174(uVar3);
        func_0x000107c61174(uVar5);
        func_0x000107c5e3fc(uVar3);
        dVar10 = dVar9;
        func_0x000107c5e3fc(uVar5);
        param_1 = dVar10;
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar5);
        if (dVar10 <= dVar9) break;
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfc4fc);
          (*pcVar1)();
        }
        uVar5 = *puVar7;
        uVar3 = puVar7[1];
        *puVar7 = uVar3;
        puVar7[1] = uVar5;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        puVar7 = puVar7 + -1;
        dVar9 = param_1;
      } while (bVar2);
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + -1;
    } while (param_4 != param_3);
  }
  return;
}



/* Entry: 102bfc4fc; end: 102bfc763;  */

undefined8 FUN_102bfc4fc(ulong *param_1,undefined8 param_2,long *param_3)

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
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_102bfc5d0;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc74c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_102bfc634:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc73c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc744);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc724);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc728);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc730);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc738);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_102bfc5d0:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc72c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc734);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc740);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc748);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_102bfc634;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc750);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc718);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc764);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_102bfc764(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc71c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfc720);
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



/* Entry: 102bfc764; end: 102bfca2f;  */

undefined8
FUN_102bfc764(double param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  
  lVar12 = (long)param_3 - (long)param_2;
  lVar3 = lVar12 + 7;
  if (-1 < lVar12) {
    lVar3 = lVar12;
  }
  lVar3 = lVar3 >> 3;
  lVar13 = (long)param_4 - (long)param_3;
  lVar6 = lVar13 + 7;
  if (-1 < lVar13) {
    lVar6 = lVar13;
  }
  lVar6 = lVar6 >> 3;
  if (lVar3 < lVar6) {
    if (((param_5 < param_2) || (param_2 + lVar3 <= param_5)) || (param_5 != param_2)) {
      func_0x000107c610b8(param_5,param_2,lVar3 << 3);
    }
    puVar8 = param_5 + lVar3;
    puVar9 = param_2;
    if (7 < lVar12) {
      do {
        if (param_4 <= param_3) break;
        uVar2 = *param_3;
        uVar11 = *param_5;
        func_0x000107c61174(uVar2);
        func_0x000107c61174(uVar11);
        func_0x000107c5e3fc(uVar2);
        dVar14 = param_1;
        func_0x000107c5e3fc(uVar11);
        dVar15 = dVar14;
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar11);
        if (dVar14 <= param_1) {
          puVar10 = param_5 + 1;
          puVar7 = param_5;
        }
        else {
          puVar10 = param_5;
          puVar7 = param_3;
          param_3 = param_3 + 1;
        }
        param_5 = puVar10;
        if (puVar9 != puVar7) {
          *puVar9 = *puVar7;
        }
        puVar9 = puVar9 + 1;
        param_1 = dVar15;
      } while (param_5 < puVar8);
    }
  }
  else {
    if (((param_5 < param_3) || (param_3 + lVar6 <= param_5)) || (param_5 != param_3)) {
      func_0x000107c610b8(param_5,param_3,lVar6 << 3);
    }
    puVar7 = param_5 + lVar6;
    puVar8 = puVar7;
    puVar9 = param_3;
    if ((param_2 < param_3) && (7 < lVar13)) {
      do {
        puVar4 = param_3 + -1;
        dVar14 = param_1;
        puVar10 = param_4;
        while( true ) {
          param_4 = puVar10 + -1;
          puVar8 = puVar7 + -1;
          uVar2 = *puVar8;
          uVar11 = *puVar4;
          func_0x000107c61174(uVar2);
          func_0x000107c61174(uVar11);
          func_0x000107c5e3fc(uVar2);
          dVar15 = dVar14;
          func_0x000107c5e3fc(uVar11);
          param_1 = dVar15;
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar11);
          if (dVar14 < dVar15) break;
          if (puVar10 != puVar7) {
            *param_4 = *puVar8;
          }
          puVar9 = param_3;
          puVar7 = puVar8;
          dVar14 = param_1;
          puVar10 = param_4;
          if (puVar8 <= param_5) goto LAB_102bfc9c8;
        }
        if (puVar10 != param_3) {
          *param_4 = *puVar4;
        }
        puVar8 = puVar7;
        puVar9 = puVar4;
      } while ((param_2 < puVar4) && (param_3 = puVar4, param_5 < puVar7));
    }
  }
LAB_102bfc9c8:
  uVar5 = (long)puVar8 - (long)param_5;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((puVar9 != param_5) ||
     ((undefined8 *)((long)param_5 + (uVar1 & 0xfffffffffffffff8)) <= puVar9)) {
    func_0x000107c610b8(puVar9,param_5,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 102bfca30; end: 102bfca43;  */

/* WARNING: Removing unreachable block (ram,0x000102beef44) */
/* WARNING: Removing unreachable block (ram,0x000102beef54) */
/* WARNING: Removing unreachable block (ram,0x000102bef060) */
/* WARNING: Removing unreachable block (ram,0x000102beef60) */
/* WARNING: Removing unreachable block (ram,0x000102beef68) */
/* WARNING: Removing unreachable block (ram,0x000102beeff0) */
/* WARNING: Removing unreachable block (ram,0x000102beeff8) */
/* WARNING: Removing unreachable block (ram,0x000102beeffc) */
/* WARNING: Removing unreachable block (ram,0x000102bef000) */
/* WARNING: Removing unreachable block (ram,0x000102bef010) */

undefined * FUN_102bfca30(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = (undefined *)0x112d36e50;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    FUN_102beee7c(0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e58,&UNK_10d90aa80);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = lVar5;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar6 >> 3) << 1 | 1;
    puVar6 = puVar2;
  }
  uVar4 = 0;
  func_0x000102bf0fdc(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
  func_0x000107c6140c(puVar6 + 0x20,param_1 + 0x20,lVar5,uVar4);
  func_0x000107c61574(param_1);
  return puVar6;
}



/* Entry: 102bfca44; end: 102bfcb0b;  */

ulong FUN_102bfca44(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102bfcb0c; end: 102bfd06f;  */

/* WARNING: Removing unreachable block (ram,0x000102bfd064) */

undefined * FUN_102bfcb0c(double param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  double dVar16;
  undefined *apuStack_80 [2];
  
  puVar15 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar15;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  uVar3 = 0;
  FUN_102bfdd1c(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar8 = uVar3;
  func_0x000100deaee4();
  puVar15 = puVar2;
  func_0x000107c5fe10(puVar2,uVar3,uVar8);
  func_0x000107c61170(puVar2);
  puVar2 = puVar15;
  FUN_102bf9928();
  func_0x000107c6142c(puVar15);
  puVar15 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar12 = *(undefined **)(puVar15 + 0x10);
  }
  else {
    puVar12 = puVar15;
    if ((undefined *)0x7fffffffffffffff < puVar2) {
      puVar12 = puVar2;
    }
    func_0x000107c60480();
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar12 != (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar15 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfcdd8);
            (*pcVar1)();
          }
          puVar4 = *(undefined **)(puVar2 + (long)puVar5 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar4 = puVar5;
          func_0x000102bfbcc8(puVar5,puVar2,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
        }
        puVar10 = puVar5 + 1;
        if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfcdd4);
          (*pcVar1)();
        }
        puVar14 = puVar4;
        func_0x000107c3d0e4();
        if ((puVar14 == (undefined *)0x0) ||
           (puVar14 = puVar4, func_0x000107c3d0e4(), puVar14 == (undefined *)0x1)) break;
        func_0x000107c61170(puVar4);
        puVar5 = puVar5 + 1;
        if (puVar10 == puVar12) goto LAB_102bfccd4;
      }
      puVar5 = puVar11;
      func_0x000107c61558();
      apuStack_80[0] = puVar11;
      if (((ulong)puVar5 & 1) == 0) {
        func_0x0001014aa0c0(0,*(long *)(puVar11 + 0x10) + 1,1);
      }
      uVar13 = *(ulong *)(apuStack_80[0] + 0x10);
      if (*(ulong *)(apuStack_80[0] + 0x18) >> 1 <= uVar13) {
        func_0x0001014aa0c0(1 < *(ulong *)(apuStack_80[0] + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(apuStack_80[0] + 0x10) = uVar13 + 1;
      *(undefined **)(apuStack_80[0] + uVar13 * 8 + 0x20) = puVar4;
      puVar11 = apuStack_80[0];
      puVar5 = puVar10;
    } while (puVar10 != puVar12);
  }
LAB_102bfccd4:
  func_0x000107c6142c(puVar2);
  apuStack_80[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((long)puVar11 < 0) || (((ulong)puVar11 >> 0x3e & 1) != 0)) {
    puVar15 = puVar11;
    func_0x000107c60480();
  }
  else {
    puVar15 = *(undefined **)(puVar11 + 0x10);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar15 != (undefined *)0x0) {
    uVar13 = 0;
    do {
      if (((ulong)puVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfcddc);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(puVar11 + uVar13 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar13;
        func_0x000102bfbcc8(uVar13,puVar11,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
      }
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfcdc8);
        (*pcVar1)();
      }
      puVar12 = (undefined *)(uVar13 + 1);
      func_0x000107c61174();
      uVar7 = uVar6;
      func_0x000107c5e408();
      func_0x000107c61180();
      uVar8 = 0;
      FUN_102bfdd1c(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      uVar9 = uVar7;
      func_0x000107c5fc54(uVar7,uVar8);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x00010148e5e0(uVar9);
      uVar13 = uVar13 + 1;
      puVar2 = apuStack_80[0];
    } while (puVar12 != puVar15);
  }
  func_0x000107c61574(puVar11);
  puVar15 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar12 = *(undefined **)(puVar15 + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar12 = puVar15;
    if ((undefined *)0x7fffffffffffffff < puVar2) {
      puVar12 = puVar2;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (puVar12 != (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar15 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfcf70);
            (*pcVar1)();
          }
          puVar4 = *(undefined **)(puVar2 + (long)puVar5 * 8 + 0x20);
          func_0x000107c61174();
          dVar16 = param_1;
        }
        else {
          puVar4 = puVar5;
          func_0x000102bfbcc8(puVar5,puVar2,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
          dVar16 = param_1;
        }
        if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfcf6c);
          (*pcVar1)();
        }
        puVar14 = puVar5 + 1;
        func_0x000107c61174();
        puVar10 = puVar4;
        func_0x000107c49eac();
        if (((ulong)puVar10 & 1) == 0) break;
        func_0x000107c61170(puVar4);
        param_1 = dVar16;
LAB_102bfce5c:
        func_0x000107c61170(puVar4);
        puVar5 = puVar5 + 1;
        if (puVar14 == puVar12) goto LAB_102bfcf8c;
      }
      func_0x000107c3dc40(puVar4);
      param_1 = dVar16;
      func_0x000107c61170(puVar4);
      if (dVar16 <= 0.01) goto LAB_102bfce5c;
      puVar5 = puVar11;
      func_0x000107c61558();
      apuStack_80[0] = puVar11;
      if (((ulong)puVar5 & 1) == 0) {
        FUN_102be92b4(0,*(long *)(puVar11 + 0x10) + 1,1);
      }
      uVar13 = *(ulong *)(apuStack_80[0] + 0x10);
      if (*(ulong *)(apuStack_80[0] + 0x18) >> 1 <= uVar13) {
        FUN_102be92b4(1 < *(ulong *)(apuStack_80[0] + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(apuStack_80[0] + 0x10) = uVar13 + 1;
      *(undefined **)(apuStack_80[0] + uVar13 * 8 + 0x20) = puVar4;
      puVar11 = apuStack_80[0];
      puVar5 = puVar14;
    } while (puVar14 != puVar12);
  }
LAB_102bfcf8c:
  func_0x000107c6142c(puVar2);
  if (((long)puVar11 < 0) || (((ulong)puVar11 >> 0x3e & 1) != 0)) {
    puVar15 = puVar11;
    func_0x000107c60480();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar15 != (undefined *)0x0) {
      func_0x000107c6157c(puVar11);
      puVar2 = puVar15;
      FUN_102bfb958(puVar15,0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e58,
                    &UNK_10d90aa80);
      puVar12 = puVar11;
      func_0x00010148ec64(puVar2 + 0x20,puVar15);
      func_0x000107c6142c();
      if (puVar12 != puVar15) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfd058);
        (*pcVar1)();
      }
    }
  }
  else {
    func_0x000107c6157c(puVar11);
    puVar2 = puVar11;
  }
  apuStack_80[0] = puVar2;
  FUN_102bfbe84(apuStack_80);
  func_0x000107c61574(puVar11);
  return apuStack_80[0];
}



/* Entry: 102bfd070; end: 102bfd073;  */

void FUN_102bfd070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db309a0;
  func_0x000107c61520(&UNK_10db309a0,&UNK_1105afbb0);
  puRam0000000112efe188 = puVar1;
  return;
}



/* Entry: 102bfd074; end: 102bfd0b3;  */

void FUN_102bfd074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db309a0;
  func_0x000107c61520(&UNK_10db309a0,&UNK_1105afbb0);
  puRam0000000112efe188 = puVar1;
  return;
}



/* Entry: 102bfd0b4; end: 102bfd0b7;  */

void FUN_102bfd0b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe190 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30a40;
  func_0x000107c61520(&UNK_10db30a40,&UNK_1105afc40);
  puRam0000000112efe190 = puVar1;
  return;
}



/* Entry: 102bfd0b8; end: 102bfd0f7;  */

void FUN_102bfd0b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe190 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30a40;
  func_0x000107c61520(&UNK_10db30a40,&UNK_1105afc40);
  puRam0000000112efe190 = puVar1;
  return;
}



/* Entry: 102bfd0f8; end: 102bfd0fb;  */

void FUN_102bfd0f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30ae0;
  func_0x000107c61520(&UNK_10db30ae0,&UNK_1105afd58);
  puRam0000000112efe198 = puVar1;
  return;
}



/* Entry: 102bfd0fc; end: 102bfd13b;  */

void FUN_102bfd0fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30ae0;
  func_0x000107c61520(&UNK_10db30ae0,&UNK_1105afd58);
  puRam0000000112efe198 = puVar1;
  return;
}



/* Entry: 102bfd13c; end: 102bfd14b;  */

undefined1  [16] FUN_102bfd13c(void)

{
  return ZEXT816(0x1105afaa0);
}



/* Entry: 102bfd14c; end: 102bfd1a7;  */

/* WARNING: Possible PIC construction at 0x000102bfd160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bfd164) */

void FUN_102bfd14c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102bfd1a8; end: 102bfd203;  */

undefined8 * FUN_102bfd1a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102bfd204; end: 102bfd23f;  */

undefined8 * FUN_102bfd204(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102bfd240; end: 102bfd57b;  */

int FUN_102bfd240(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102bfd57c; end: 102bfd5d7;  */

long FUN_102bfd57c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102bfd5d8; end: 102bfd69f;  */

undefined8 * FUN_102bfd5d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61434(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102bfd6a0; end: 102bfd6eb;  */

undefined8 * FUN_102bfd6a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102bfd6ec; end: 102bfd8d7;  */

int FUN_102bfd6ec(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102bfd8d8; end: 102bfdb1b;  */

ulong FUN_102bfd8d8(double param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  
  if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfdac8);
    (*pcVar1)();
  }
  if (param_3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar6 = param_3;
    }
    func_0x000107c60480();
  }
  if ((long)(param_2 + 1) < (long)uVar6) {
    if ((param_3 & 0xc000000000000001) == 0) {
      if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfdb18);
        (*pcVar1)();
      }
      if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfdb1c);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_3 + param_2 * 8 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = param_2;
      func_0x000102bfbcc8(param_2,param_3,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
    }
    func_0x000107c438d4();
    func_0x000107c61170(uVar3);
    if (param_2 + 1 != uVar6) {
      lVar7 = param_2 + 5;
      do {
        uVar3 = lVar7 - 4;
        if ((long)uVar6 <= (long)uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfdabc);
          (*pcVar1)();
        }
        if ((param_3 & 0xc000000000000001) == 0) {
          if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfdac0);
            (*pcVar1)();
          }
          if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfdac4);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(param_3 + lVar7 * 8);
          func_0x000107c61174();
        }
        else {
          func_0x000102bfbcc8(uVar3,param_3,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
        }
        uVar4 = uVar3;
        func_0x000107c49eac();
        dVar8 = param_1;
        if (((uVar4 & 1) == 0) && (func_0x000107c3dc40(uVar3), dVar8 = param_1, 0.99 <= param_1)) {
          uVar4 = uVar3;
          func_0x000107c3e5a0();
          func_0x000107c61180();
          dVar8 = param_1;
          if (uVar4 != 0) {
            uVar5 = uVar4;
            func_0x000107c3ab24();
            func_0x000107c61180();
            func_0x000107c608b4();
            dVar8 = param_1;
            func_0x000107c61170(uVar5);
            if (param_1 < 0.99) {
              func_0x000107c61170(uVar4);
            }
            else {
              uVar5 = uVar3;
              func_0x000107c438d4();
              iVar2 = (int)uVar5;
              func_0x000107c609a8();
              func_0x000107c61170(uVar4);
              if (iVar2 != 0) {
                return uVar3;
              }
            }
          }
        }
        func_0x000107c61170(uVar3);
        lVar7 = lVar7 + 1;
        param_1 = dVar8;
      } while ((1 - uVar6) + lVar7 != 5);
    }
  }
  return 0;
}



/* Entry: 102bfdb1c; end: 102bfdd1b;  */

void FUN_102bfdb1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uVar8 = param_7;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4(lVar9);
  func_0x000107c5eeac();
  (**(code **)(lVar10 + 8))(lVar9,lVar2);
  func_0x000107c61434(uVar8);
  func_0x000107c61174();
  uVar4 = *param_9;
  func_0x000107c61558(uVar4);
  puStack_68 = (undefined *)*param_9;
  FUN_102bfb5b8(param_6,lVar3,uVar8,uVar4);
  func_0x000107c6142c(uVar8);
  *param_9 = puStack_68;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  puStack_68 = puVar5;
  FUN_102bf12a4(param_6,&puStack_68);
  puVar5 = puStack_68;
  puVar6 = puStack_68;
  func_0x000107c61558(puStack_68);
  puStack_70 = puVar5;
  func_0x000107c61434(param_8);
  func_0x00010018433c(param_7,param_8,0x4264657265766f63,0xe900000000000079,puVar6);
  puVar5 = puStack_70;
  func_0x000107c61558(puStack_70);
  puVar6 = puStack_70;
  puStack_70 = puVar5;
  func_0x00010018433c(0x65736c6166,0xe500000000000000,0x656c6269736976,0xe700000000000000,puVar6);
  puVar5 = puStack_70;
  func_0x000107c614f0();
  uVar4 = 0x112dab9f8;
  puStack_70 = param_6;
  func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
  ppuVar7 = &puStack_70;
  func_0x000107c5fb18();
  FUN_102bfdd88();
  *param_1 = ppuVar7;
  param_1[1] = uVar4;
  param_1[2] = puVar1;
  param_1[3] = lVar3;
  param_1[4] = uVar8;
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[8] = param_5;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = puVar5;
  return;
}



/* Entry: 102bfdd1c; end: 102bfdd5b;  */

void FUN_102bfdd1c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102bfdd5c; end: 102bfdd87;  */

undefined1 FUN_102bfdd5c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102bfdd88; end: 102bfdee7;  */

double FUN_102bfdd88(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *unaff_x20;
  double dVar3;
  
  puVar1 = unaff_x20;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
  }
  else {
    puVar2 = puVar1;
    func_0x000107c519d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c51820(puVar2);
  dVar3 = param_1;
  func_0x000107c61170(puVar2);
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (unaff_x20 == (undefined *)0x0) {
    func_0x000107c3ec60();
    func_0x000107c40740();
  }
  else {
    func_0x000107c61174();
    func_0x000107c3ec60();
    func_0x000107c4073c();
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(unaff_x20);
  }
  func_0x000107c609cc(dVar3,param_2,param_3,param_4);
  func_0x000107c609b0(dVar3,param_2,param_3,param_4);
  return param_1 * dVar3;
}



/* Entry: 102bfdee8; end: 102bfdf43;  */

undefined1  [16] FUN_102bfdee8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  bVar4 = *unaff_x20;
  uVar1 = 0x6874646977;
  if (bVar4 != 2) {
    uVar1 = 0x746867696568;
  }
  uVar2 = 0xe500000000000000;
  if (bVar4 != 2) {
    uVar2 = 0xe600000000000000;
  }
  uVar3 = 0x78;
  if (bVar4 != 0) {
    uVar3 = 0x79;
  }
  if (bVar4 < 2) {
    uVar2 = 0xe100000000000000;
    uVar1 = uVar3;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 102bfdf44; end: 102bfdf67;  */

void FUN_102bfdf44(undefined1 *param_1,undefined1 param_2)

{
  FUN_102bfe978();
  *param_1 = param_2;
  return;
}



/* Entry: 102bfdf68; end: 102bfdf73;  */

undefined1  [16] FUN_102bfdf68(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102bfdf74; end: 102bfdfc3;  */

void FUN_102bfdf74(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102bfe194();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102bfdfc4; end: 102bfe193;  */

void FUN_102bfdfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [15];
  undefined1 uStack_71;
  undefined8 uStack_48;
  
  lVar3 = 0x112efe298;
  func_0x0001000285a8(0x112efe298,&UNK_10db30bf0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x0001000a8868(param_5,uVar1);
  FUN_102bfe194();
  puVar4 = &UNK_1105b0100;
  func_0x000107c606ec(puVar5,&UNK_1105b0100,&UNK_1105b0100,param_5,uVar1,uVar2);
  uStack_71 = 0;
  uStack_48 = param_1;
  func_0x000102aa9638();
  func_0x000107c60554(&uStack_48,&uStack_71,lVar3,PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar4);
  if (unaff_x21 == 0) {
    uStack_71 = 1;
    uStack_48 = param_2;
    func_0x000107c60554(&uStack_48,&uStack_71,lVar3,PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar4
                       );
    uStack_71 = 2;
    uStack_48 = param_3;
    func_0x000107c60554(&uStack_48,&uStack_71,lVar3,PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar4
                       );
    uStack_71 = 3;
    uStack_48 = param_4;
    func_0x000107c60554(&uStack_48,&uStack_71,lVar3,PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar4
                       );
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  return;
}



/* Entry: 102bfe194; end: 102bfe1d3;  */

void FUN_102bfe194(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db31010;
  func_0x000107c61520(&UNK_10db31010,&UNK_1105b0100);
  puRam0000000112efe2a0 = puVar1;
  return;
}



/* Entry: 102bfe1d4; end: 102bfe1ff;  */

void FUN_102bfe1d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_102bfeabc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 102bfe200; end: 102bfe21b;  */

void FUN_102bfe200(void)

{
  undefined8 *unaff_x20;
  
  FUN_102bfdfc4(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 102bfe21c; end: 102bfe2af;  */

undefined1  [16] FUN_102bfe21c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = 0xe900000000000065;
  bVar4 = *unaff_x20;
  uVar3 = 0x656d617266;
  if (bVar4 != 3) {
    uVar3 = 0x7475626972747461;
  }
  uVar1 = 0xe500000000000000;
  if (bVar4 != 3) {
    uVar1 = 0xea00000000007365;
  }
  uVar2 = 0x6469;
  if (bVar4 != 2) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe200000000000000;
  if (bVar4 != 2) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6d614e7373616c63;
  if (bVar4 != 0) {
    uVar5 = 0xe800000000000000;
    uVar1 = 0x6e6572646c696863;
  }
  if (bVar4 < 2) {
    uVar3 = uVar5;
    uVar2 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 102bfe2b0; end: 102bfe2d3;  */

void FUN_102bfe2b0(undefined1 *param_1,undefined1 param_2)

{
  FUN_102bfed4c();
  *param_1 = param_2;
  return;
}



/* Entry: 102bfe2d4; end: 102bfe2eb;  */

undefined1  [16] FUN_102bfe2d4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102bfe2ec; end: 102bfe33b;  */

void FUN_102bfe2ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102bfeccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102bfe33c; end: 102bfe577;  */

void FUN_102bfe33c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_51;
  
  lVar1 = 0x112efe2a8;
  func_0x0001000285a8(0x112efe2a8,&UNK_10db30bf8);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102bfeccc();
  func_0x000107c606ec((long)&uStack_80 - extraout_x8,&UNK_1105b0070,&UNK_1105b0070,param_1,uVar2,
                      uVar3);
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_80,lVar1);
  if (unaff_x21 == 0) {
    uStack_80 = unaff_x20[2];
    uStack_51 = 1;
    uVar2 = 0x112efdff0;
    func_0x0001000285a8(0x112efdff0,&UNK_10db305a0);
    uVar3 = 0x112efe010;
    func_0x000102c000b0(0x112efe010,FUN_102bec148,PTR___sSayxGSEsSERzlMc_11034dce0);
    func_0x000107c60554(&uStack_80,&uStack_51,lVar1,uVar2,uVar3);
    uVar2 = unaff_x20[3];
    uStack_80 = CONCAT71(uStack_80._1_7_,2);
    func_0x000107c60520(uVar2,unaff_x20[4],&uStack_80,lVar1);
    uStack_78 = unaff_x20[6];
    uStack_80 = unaff_x20[5];
    uStack_68 = unaff_x20[8];
    uStack_70 = unaff_x20[7];
    uStack_60 = *(undefined1 *)(unaff_x20 + 9);
    uStack_51 = 3;
    func_0x000102bfed0c();
    func_0x000107c60530(&uStack_80,&uStack_51,lVar1,&UNK_1105afe28,uVar2);
    uStack_80 = unaff_x20[10];
    uStack_51 = 4;
    uVar2 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    uVar3 = 0x112eb28d8;
    FUN_102c00160(0x112eb28d8,PTR___sSSSEsWP_11034da88,PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780);
    func_0x000107c60530(&uStack_80,&uStack_51,lVar1,uVar2,uVar3);
  }
  (**(code **)(lVar4 + 8))((long)&uStack_80 - extraout_x8,lVar1);
  return;
}



/* Entry: 102bfe578; end: 102bfe5cf;  */

void FUN_102bfe578(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102bfeefc(&uStack_78);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_50;
    param_1[4] = uStack_58;
    param_1[7] = uStack_40;
    param_1[6] = uStack_48;
    param_1[9] = uStack_30;
    param_1[8] = uStack_38;
    param_1[10] = uStack_28;
    param_1[1] = uStack_70;
    *param_1 = uStack_78;
    param_1[3] = uStack_60;
    param_1[2] = uStack_68;
  }
  return;
}



/* Entry: 102bfe5d0; end: 102bfe5e3;  */

void FUN_102bfe5d0(void)

{
  FUN_102bfe33c();
  return;
}



/* Entry: 102bfe5e4; end: 102bfe667;  */

void FUN_102bfe5e4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102bfe668; end: 102bfe6d3;  */

undefined1  [16] FUN_102bfe668(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar5 = 0x6465766f6d6572;
  if (bVar4 != 2) {
    uVar5 = 0x6465676e616863;
  }
  uVar1 = 0x6e;
  if (bVar4 != 0) {
    uVar1 = 0x6465646461;
  }
  uVar2 = 0xe100000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe500000000000000;
  }
  uVar3 = 0xe700000000000000;
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 102bfe6d4; end: 102bfe6f7;  */

void FUN_102bfe6d4(undefined1 *param_1,undefined1 param_2)

{
  FUN_102bff2ac();
  *param_1 = param_2;
  return;
}



/* Entry: 102bfe6f8; end: 102bfe703;  */

undefined1  [16] FUN_102bfe6f8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102bfe704; end: 102bfe753;  */

void FUN_102bfe704(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102bff26c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102bfe754; end: 102bfe92f;  */

void FUN_102bfe754(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  undefined1 uStack_61;
  ulong uStack_58;
  
  lVar2 = 0x112efe2c0;
  uStack_78 = param_3;
  uStack_70 = param_5;
  func_0x0001000285a8(0x112efe2c0,&UNK_10db30c00);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_102bff26c();
  func_0x000107c606ec(auStack_80 + -extraout_x8,&UNK_1105affe0,&UNK_1105affe0,param_1,uVar3,uVar4);
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  func_0x000107c6054c(param_2,&uStack_58,lVar2);
  uVar1 = uStack_70;
  if (unaff_x21 == 0) {
    uStack_58 = uStack_78;
    uStack_61 = 1;
    uVar3 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar4 = 0x112d5ad80;
    FUN_102c00048(0x112d5ad80,PTR___sSSSEsWP_11034da88,PTR___sSayxGSEsSERzlMc_11034dce0);
    func_0x000107c60554(&uStack_58,&uStack_61,lVar2,uVar3,uVar4);
    uStack_61 = 2;
    uStack_58 = param_4;
    func_0x000107c60554(&uStack_58,&uStack_61,lVar2,uVar3,uVar4);
    uStack_58 = uVar1;
    uStack_61 = 3;
    func_0x000107c60554(&uStack_58,&uStack_61,lVar2,uVar3,uVar4);
  }
  (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,lVar2);
  return;
}



/* Entry: 102bfe930; end: 102bfe94b;  */

void FUN_102bfe930(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102bfe754(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 102bfe94c; end: 102bfe977;  */

void FUN_102bfe94c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_102bff400();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 102bfe978; end: 102bfeabb;  */

undefined4 FUN_102bfe978(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 != 0x78) || (param_2 != -0x1f00000000000000)) {
    uVar1 = 0;
    func_0x000107c605b8(0x78,0xe100000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != 0x79) || (param_2 != -0x1f00000000000000)) {
        uVar1 = 0x79;
        func_0x000107c605b8(0x79,0xe100000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0x6874646977;
          if (((param_1 != 0x6874646977) || (param_2 != -0x1b00000000000000)) &&
             (func_0x000107c605b8(0x6874646977,0xe500000000000000,param_1,param_2,0),
             (uVar1 & 1) == 0)) {
            uVar1 = 0;
            if ((param_1 == 0x746867696568) && (param_2 == -0x1a00000000000000)) {
              func_0x000107c6142c(0xe600000000000000);
              return 3;
            }
            func_0x000107c605b8(0x746867696568,0xe600000000000000,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar1 & 1) != 0) {
              return 3;
            }
            return 4;
          }
          func_0x000107c6142c(param_2);
          return 2;
        }
      }
      func_0x000107c6142c(param_2);
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 102bfeabc; end: 102bfeccb;  */

/* WARNING: Removing unreachable block (ram,0x000102bfec20) */

undefined8 FUN_102bfeabc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined8 unaff_d8;
  undefined1 auStack_80 [7];
  undefined1 uStack_79;
  undefined8 uStack_78;
  
  lVar3 = 0x112efe330;
  func_0x0001000285a8(0x112efe330,&UNK_10db31070);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102bfe194();
  puVar5 = &UNK_1105b0100;
  func_0x000107c606e0(auStack_80 + -extraout_x8,&UNK_1105b0100,&UNK_1105b0100,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_79 = 0;
    func_0x0001010f2b20();
    func_0x000107c60508(&uStack_78,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_79,lVar3,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar5);
    uStack_79 = 1;
    func_0x000107c60508(&uStack_78,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_79,lVar3,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar5);
    uStack_79 = 2;
    func_0x000107c60508(&uStack_78,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_79,lVar3,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar5);
    uStack_79 = 3;
    func_0x000107c60508(&uStack_78,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_79,lVar3,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar5);
    (**(code **)(lVar6 + 8))(auStack_80 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_1);
    unaff_d8 = uStack_78;
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return unaff_d8;
}



/* Entry: 102bfeccc; end: 102bfed4b;  */

void FUN_102bfeccc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30fc0;
  func_0x000107c61520(&UNK_10db30fc0,&UNK_1105b0070);
  puRam0000000112efe2b0 = puVar1;
  return;
}



/* Entry: 102bfed4c; end: 102bfeefb;  */

undefined4 FUN_102bfed4c(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x6d614e7373616c63;
  if ((param_1 == 0x6d614e7373616c63 && param_2 == -0x16ffffffffffff9b) ||
     (func_0x000107c605b8(0x6d614e7373616c63,0xe900000000000065,param_1,param_2,0), (uVar2 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x6e6572646c696863;
    if (((param_1 == 0x6e6572646c696863) && (param_2 == -0x1800000000000000)) ||
       (func_0x000107c605b8(0x6e6572646c696863,0xe800000000000000,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 1;
    }
    else {
      if ((param_1 != 0x6469) || (param_2 != -0x1e00000000000000)) {
        uVar2 = 0x6469;
        func_0x000107c605b8(0x6469,0xe200000000000000,param_1,param_2,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_1 != 0x656d617266) || (param_2 != -0x1b00000000000000)) &&
             (func_0x000107c605b8(0x656d617266,0xe500000000000000,param_1,param_2,0),
             (uVar2 & 1) == 0)) {
            uVar2 = 0x7475626972747461;
            if ((param_1 == 0x7475626972747461) && (param_2 == -0x15ffffffffff8c9b)) {
              func_0x000107c6142c(0xea00000000007365);
              return 4;
            }
            func_0x000107c605b8(0x7475626972747461,0xea00000000007365,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar2 & 1) != 0) {
              return 4;
            }
            return 5;
          }
          func_0x000107c6142c(param_2);
          return 3;
        }
      }
      func_0x000107c6142c(param_2);
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 102bfeefc; end: 102bff26b;  */

/* WARNING: Removing unreachable block (ram,0x000102bff1ac) */
/* WARNING: Removing unreachable block (ram,0x000102bff0d4) */
/* WARNING: Removing unreachable block (ram,0x000102bff1c0) */
/* WARNING: Removing unreachable block (ram,0x000102bff084) */
/* WARNING: Removing unreachable block (ram,0x000102bff1c4) */
/* WARNING: Removing unreachable block (ram,0x000102bff1d8) */
/* WARNING: Removing unreachable block (ram,0x000102bff1e0) */
/* WARNING: Removing unreachable block (ram,0x000102bff1e4) */
/* WARNING: Removing unreachable block (ram,0x000102bfefdc) */

void FUN_102bfeefc(long *param_1,long param_2)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_1b0 [8];
  long lStack_1a8;
  undefined8 **ppuStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined1 auStack_188 [88];
  undefined8 ***pppuStack_130;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined8 ***pppuStack_118;
  long lStack_110;
  undefined8 **ppuStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 uStack_d1;
  long lStack_d0;
  undefined8 ***pppuStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 ***pppuStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  
  lVar1 = 0x112efe320;
  func_0x0001000285a8(0x112efe320,&UNK_10db31068);
  lVar6 = *(long *)(lVar1 + -8);
  lStack_190 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = param_2;
  func_0x0001000a8868(param_2,uVar3);
  FUN_102bfeccc();
  func_0x000107c606e0(auStack_1b0 + -extraout_x8,&UNK_1105b0070,&UNK_1105b0070,lVar1,uVar3,uVar4);
  lVar1 = lStack_190;
  if (unaff_x21 == 0) {
    pppuStack_130 = (undefined8 ***)((ulong)pppuStack_130 & 0xffffffffffffff00);
    ppppuVar2 = &pppuStack_130;
    lVar5 = lStack_190;
    func_0x000107c604f4();
    uVar3 = 0x112efdff0;
    lStack_198 = lVar5;
    pppuStack_c8 = ppppuVar2;
    lStack_c0 = lVar5;
    func_0x0001000285a8(0x112efdff0,&UNK_10db305a0);
    auStack_188[0] = 1;
    uVar4 = 0x112efdff8;
    func_0x000102c000b0(0x112efdff8,0x102bec098,PTR___sSayxGSesSeRzlMc_11034dd10);
    func_0x000107c60508(&pppuStack_130,uVar3,auStack_188,lVar1,uVar3,uVar4);
    ppuStack_1a0 = pppuStack_130;
    ppuStack_b8 = pppuStack_130;
    pppuStack_130 = (undefined8 ***)CONCAT71(pppuStack_130._1_7_,2);
    ppppuVar2 = &pppuStack_130;
    lVar5 = lVar1;
    func_0x000107c604d4();
    auStack_188[0] = 3;
    lStack_1a8 = lVar5;
    pppuStack_b0 = ppppuVar2;
    lStack_a8 = lVar5;
    FUN_102c00120();
    func_0x000107c604e8(&pppuStack_130,&UNK_1105afe28,auStack_188,lVar1,&UNK_1105afe28,ppppuVar2);
    lStack_98 = lStack_128;
    ppuStack_a0 = pppuStack_130;
    lStack_88 = (long)pppuStack_118;
    lStack_90 = (long)ppuStack_120;
    uStack_80 = (undefined1)lStack_110;
    uVar3 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    uStack_d1 = 4;
    uVar4 = 0x112db3e38;
    FUN_102c00160(0x112db3e38,PTR___sSSSesWP_11034daa8,PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0);
    func_0x000107c604e8(&lStack_d0,uVar3,&uStack_d1,lVar1,uVar3,uVar4);
    (**(code **)(lVar6 + 8))(auStack_1b0 + -extraout_x8,lVar1);
    lStack_78 = lStack_d0;
    lStack_e8 = CONCAT71(uStack_7f,uStack_80);
    lStack_f8 = lStack_90;
    lStack_100 = lStack_98;
    lStack_f0 = lStack_88;
    lStack_e0 = lStack_d0;
    lStack_128 = lStack_c0;
    pppuStack_130 = pppuStack_c8;
    pppuStack_118 = pppuStack_b0;
    ppuStack_120 = ppuStack_b8;
    ppuStack_108 = ppuStack_a0;
    lStack_110 = lStack_a8;
    FUN_102bf0edc(&pppuStack_130,auStack_188);
    func_0x0001000834e4(param_2);
    func_0x000102bf0f18(&pppuStack_c8);
    param_1[5] = (long)ppuStack_108;
    param_1[4] = lStack_110;
    param_1[7] = lStack_f8;
    param_1[6] = lStack_100;
    param_1[9] = lStack_e8;
    param_1[8] = lStack_f0;
    param_1[10] = lStack_e0;
    param_1[1] = lStack_128;
    *param_1 = (long)pppuStack_130;
    param_1[3] = (long)pppuStack_118;
    param_1[2] = (long)ppuStack_120;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102bff26c; end: 102bff2ab;  */

void FUN_102bff26c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30f70;
  func_0x000107c61520(&UNK_10db30f70,&UNK_1105affe0);
  puRam0000000112efe2c8 = puVar1;
  return;
}



/* Entry: 102bff2ac; end: 102bff3ff;  */

undefined4 FUN_102bff2ac(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 != 0x6e) || (param_2 != -0x1f00000000000000)) {
    uVar1 = 0;
    func_0x000107c605b8(0x6e,0xe100000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x6465646461;
      if (((param_1 == 0x6465646461) && (param_2 == -0x1b00000000000000)) ||
         (func_0x000107c605b8(0x6465646461,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0))
      {
        func_0x000107c6142c(param_2);
        return 1;
      }
      uVar1 = 0;
      if (((param_1 != 0x6465766f6d6572) || (param_2 != -0x1900000000000000)) &&
         (func_0x000107c605b8(0x6465766f6d6572,0xe700000000000000,param_1,param_2,0),
         (uVar1 & 1) == 0)) {
        uVar1 = 0x6465676e616863;
        if ((param_1 == 0x6465676e616863) && (param_2 == -0x1900000000000000)) {
          func_0x000107c6142c(0xe700000000000000);
          return 3;
        }
        func_0x000107c605b8(0x6465676e616863,0xe700000000000000,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        if ((uVar1 & 1) != 0) {
          return 3;
        }
        return 4;
      }
      func_0x000107c6142c(param_2);
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 102bff400; end: 102bff657;  */

/* WARNING: Removing unreachable block (ram,0x000102bff5c0) */
/* WARNING: Removing unreachable block (ram,0x000102bff624) */
/* WARNING: Removing unreachable block (ram,0x000102bff628) */
/* WARNING: Removing unreachable block (ram,0x000102bff63c) */
/* WARNING: Removing unreachable block (ram,0x000102bff538) */
/* WARNING: Removing unreachable block (ram,0x000102bff53c) */

undefined1 * FUN_102bff400(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *unaff_x21;
  long lVar5;
  undefined1 uStack_61;
  undefined1 auStack_58 [8];
  
  lVar1 = 0x112efe318;
  func_0x0001000285a8(0x112efe318,&UNK_10db31060);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,uVar3);
  FUN_102bff26c();
  func_0x000107c606e0(&stack0xffffffffffffff90 + -extraout_x8,&UNK_1105affe0,&UNK_1105affe0,lVar2,
                      uVar3,uVar4);
  if (unaff_x21 == (undefined1 *)0x0) {
    auStack_58[0] = 0;
    unaff_x21 = auStack_58;
    func_0x000107c60500(unaff_x21,lVar1);
    uVar3 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uStack_61 = 1;
    uVar4 = 0x112d5ad70;
    FUN_102c00048(0x112d5ad70,PTR___sSSSesWP_11034daa8,PTR___sSayxGSesSeRzlMc_11034dd10);
    func_0x000107c60508(auStack_58,uVar3,&uStack_61,lVar1,uVar3,uVar4);
    uStack_61 = 2;
    func_0x000107c60508(auStack_58,uVar3,&uStack_61,lVar1,uVar3,uVar4);
    uStack_61 = 3;
    func_0x000107c60508(auStack_58,uVar3,&uStack_61,lVar1,uVar3,uVar4);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffff90 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return unaff_x21;
}



/* Entry: 102bff658; end: 102bff6b3;  */

int FUN_102bff658(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 102bff6b4; end: 102bff6eb;  */

/* WARNING: Possible PIC construction at 0x000102bff6c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bff6d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bff6cc) */
/* WARNING: Removing unreachable block (ram,0x000102bff6dc) */

void FUN_102bff6b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102bff6ec; end: 102bff81b;  */

undefined8 * FUN_102bff6ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar3 = param_2[10];
  param_1[10] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 102bff81c; end: 102bff897;  */

undefined8 * FUN_102bff81c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102bff898; end: 102bff943;  */

int FUN_102bff898(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102bff944; end: 102bff973;  */

/* WARNING: Possible PIC construction at 0x000102bff958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bff95c) */

void FUN_102bff944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102bff974; end: 102bffa3b;  */

undefined8 * FUN_102bff974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102bffa3c; end: 102bffa8f;  */

undefined8 * FUN_102bffa3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102bffa90; end: 102bffde7;  */

int FUN_102bffa90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102bffde8; end: 102bffe27;  */

void FUN_102bffde8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30dd8;
  func_0x000107c61520(&UNK_10db30dd8,&UNK_1105b0100);
  puRam0000000112efe2d0 = puVar1;
  return;
}



/* Entry: 102bffe28; end: 102bffe2b;  */

void FUN_102bffe28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30e90;
  func_0x000107c61520(&UNK_10db30e90,&UNK_1105b0070);
  puRam0000000112efe2d8 = puVar1;
  return;
}



/* Entry: 102bffe2c; end: 102bffe6b;  */

void FUN_102bffe2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30e90;
  func_0x000107c61520(&UNK_10db30e90,&UNK_1105b0070);
  puRam0000000112efe2d8 = puVar1;
  return;
}



/* Entry: 102bffe6c; end: 102bffe6f;  */

void FUN_102bffe6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30f48;
  func_0x000107c61520(&UNK_10db30f48,&UNK_1105affe0);
  puRam0000000112efe2e0 = puVar1;
  return;
}



/* Entry: 102bffe70; end: 102bffeaf;  */

void FUN_102bffe70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30f48;
  func_0x000107c61520(&UNK_10db30f48,&UNK_1105affe0);
  puRam0000000112efe2e0 = puVar1;
  return;
}



/* Entry: 102bffeb0; end: 102bffeb3;  */

void FUN_102bffeb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30ee0;
  func_0x000107c61520(&UNK_10db30ee0,&UNK_1105affe0);
  puRam0000000112efe2e8 = puVar1;
  return;
}



/* Entry: 102bffeb4; end: 102bffef3;  */

void FUN_102bffeb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30ee0;
  func_0x000107c61520(&UNK_10db30ee0,&UNK_1105affe0);
  puRam0000000112efe2e8 = puVar1;
  return;
}



/* Entry: 102bffef4; end: 102bffef7;  */

void FUN_102bffef4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30eb8;
  func_0x000107c61520(&UNK_10db30eb8,&UNK_1105affe0);
  puRam0000000112efe2f0 = puVar1;
  return;
}



/* Entry: 102bffef8; end: 102bfff37;  */

void FUN_102bffef8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30eb8;
  func_0x000107c61520(&UNK_10db30eb8,&UNK_1105affe0);
  puRam0000000112efe2f0 = puVar1;
  return;
}



/* Entry: 102bfff38; end: 102bfff3b;  */

void FUN_102bfff38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30e28;
  func_0x000107c61520(&UNK_10db30e28,&UNK_1105b0070);
  puRam0000000112efe2f8 = puVar1;
  return;
}



/* Entry: 102bfff3c; end: 102bfff7b;  */

void FUN_102bfff3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30e28;
  func_0x000107c61520(&UNK_10db30e28,&UNK_1105b0070);
  puRam0000000112efe2f8 = puVar1;
  return;
}



/* Entry: 102bfff7c; end: 102bfff7f;  */

void FUN_102bfff7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30e00;
  func_0x000107c61520(&UNK_10db30e00,&UNK_1105b0070);
  puRam0000000112efe300 = puVar1;
  return;
}



/* Entry: 102bfff80; end: 102bfffbf;  */

void FUN_102bfff80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30e00;
  func_0x000107c61520(&UNK_10db30e00,&UNK_1105b0070);
  puRam0000000112efe300 = puVar1;
  return;
}



/* Entry: 102bfffc0; end: 102bfffc3;  */

void FUN_102bfffc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30d70;
  func_0x000107c61520(&UNK_10db30d70,&UNK_1105b0100);
  puRam0000000112efe308 = puVar1;
  return;
}



/* Entry: 102bfffc4; end: 102c00003;  */

void FUN_102bfffc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30d70;
  func_0x000107c61520(&UNK_10db30d70,&UNK_1105b0100);
  puRam0000000112efe308 = puVar1;
  return;
}



/* Entry: 102c00004; end: 102c00007;  */

void FUN_102c00004(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30d48;
  func_0x000107c61520(&UNK_10db30d48,&UNK_1105b0100);
  puRam0000000112efe310 = puVar1;
  return;
}



/* Entry: 102c00008; end: 102c00047;  */

void FUN_102c00008(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30d48;
  func_0x000107c61520(&UNK_10db30d48,&UNK_1105b0100);
  puRam0000000112efe310 = puVar1;
  return;
}



/* Entry: 102c00048; end: 102c0011f;  */

void FUN_102c00048(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d38270;
    func_0x00010002969c(0x112d38270,&UNK_10d905a20);
    uStack_38 = param_2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102c00120; end: 102c0015f;  */

void FUN_102c00120(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30c10;
  func_0x000107c61520(&UNK_10db30c10,&UNK_1105afe28);
  puRam0000000112efe328 = puVar1;
  return;
}



/* Entry: 102c00160; end: 102c001c7;  */

void FUN_102c00160(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d550a0;
    func_0x00010002969c(0x112d550a0,&UNK_10d91c290);
    uStack_40 = param_2;
    uStack_38 = param_2;
    func_0x000107c61520(param_3,uVar1,&uStack_40);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102c001c8; end: 102c00233;  */

undefined1 FUN_102c001c8(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102c00234; end: 102c002ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c00234(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010ef33080;
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112efe340))[1];
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar4 = -0x2000000000000000;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112efe340);
    lVar4 = lVar2;
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  *(long *)(lVar1 + 0x38) = lVar4;
  func_0x000107c61434(lVar2);
  lVar2 = lVar1;
  func_0x0001001830b8(lVar1);
  func_0x000107c61588(lVar1);
  func_0x000100ab5dc4((undefined8 *)(lVar1 + 0x20));
  return lVar2;
}



/* Entry: 102c00300; end: 102c0035b; -[_TtC9Inspector28InspectorAuthHeadersProvider provideAuthHeaders] */

void FUN_102c00300(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c00234();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c0035c; end: 102c003bb; -[_TtC9Inspector28InspectorAuthHeadersProvider init] */

void FUN_102c0035c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("Inspector.InspectorAuthHeadersProvider",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c00388);
  (*pcVar1)();
}



/* Entry: 102c003bc; end: 102c003f7; -[_TtC9Inspector28InspectorAuthHeadersProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c003bc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efe338));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112efe340 + 8))
  ;
  return;
}



/* Entry: 102c003f8; end: 102c00417;  */

void FUN_102c003f8(void)

{
  func_0x000107c61168(&PTR_PTR_112896260);
  return;
}



/* Entry: 102c00418; end: 102c00527;  */

void FUN_102c00418(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  code *pcVar5;
  
  lVar1 = 0;
  FUN_102c00b50(0,param_4,param_5);
  func_0x000107c613fc();
  FUN_102c00c0c();
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    pcVar5 = *(code **)(param_5 + 0x18);
    func_0x000107c61174(uVar2);
    lVar4 = param_5;
    (*pcVar5)(param_4,param_5);
    FUN_102c007ec(0,param_4,param_5);
    func_0x000107c615f0(uVar2);
    FUN_102c00ed4();
    func_0x000107c6142c(lVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar2);
  }
  param_1[3] = lVar1;
  puVar3 = &DAT_10db31168;
  func_0x000107c61520(&DAT_10db31168,lVar1);
  param_1[4] = (long)puVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 102c00528; end: 102c0056b;  */

void FUN_102c00528(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


