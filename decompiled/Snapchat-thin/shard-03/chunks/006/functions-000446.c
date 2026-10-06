/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b4b184; end: 102b4b443;  */

void FUN_102b4b184(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  uVar6 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    lVar7 = *(long *)(param_3 + 0x10);
    if (lVar7 != 0) {
      func_0x000102b4ca90(0,lVar7,0);
      puVar4 = (undefined8 *)(param_3 + 0x20);
      uVar8 = *(ulong *)(puVar3 + 0x10);
      do {
        uVar9 = *puVar4;
        uVar1 = uVar8 + 1;
        uVar5 = *(ulong *)(puVar3 + 0x18);
        func_0x000107c6157c(uVar9);
        if (uVar5 >> 1 <= uVar8) {
          func_0x000102b4ca90(1 < uVar5,uVar1,1);
        }
        *(ulong *)(puVar3 + 0x10) = uVar1;
        *(undefined8 *)(puVar3 + uVar8 * 8 + 0x20) = uVar9;
        lVar7 = lVar7 + -1;
        puVar4 = puVar4 + 2;
        uVar8 = uVar1;
      } while (lVar7 != 0);
      param_5 = param_5 & 0xffffffff;
    }
    func_0x000107c61434(uVar6);
    puVar2 = puVar3;
    FUN_102b4d4ac(puVar3,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(puVar3);
    puVar3 = puVar2;
    func_0x000102b4b30c(puVar2);
    func_0x000107c61574(puVar2);
    FUN_102b4b444(puVar3,param_4,param_5,param_6,param_7);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar3);
  }
  return;
}



/* Entry: 102b4b444; end: 102b4b75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4b444(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar9 = *(long *)(unaff_x20 + _DAT_112ef62b0);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + _DAT_112ef65c8) == '\x01') {
      func_0x000107c61174(lVar9);
      lVar8 = *(long *)(param_1 + 0x10);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      *(undefined1 *)(lVar9 + _DAT_112ef65c8) = 1;
      lVar8 = lVar9;
      func_0x000107c61174();
      func_0x000107c5a378();
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      uVar12 = *(undefined8 *)(lVar8 + _DAT_112ef65c0 + 0x60);
      puVar5 = &UNK_1105a09e8;
      func_0x000107c613fc(&UNK_1105a09e8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,lVar8);
      uStack_80 = 0x102b4db6c;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1105a0a28;
      ppuVar6 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_78);
      func_0x000107c3dcd4(uVar12,0,puVar4);
      func_0x000107c60bd0(ppuVar6);
      lVar8 = *(long *)(param_1 + 0x10);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    puVar4 = puVar5;
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
    if (lVar8 != 0) {
      pcVar10 = (char *)(param_1 + 0x28);
      puVar2 = puVar5;
      do {
        uVar12 = *(undefined8 *)(pcVar10 + -8);
        cVar1 = *pcVar10;
        func_0x000107c61580(uVar12,2);
        puVar4 = puVar2;
        if (cVar1 == '\x01') {
          puVar2 = puVar5;
          func_0x000107c61550();
          if ((((int)puVar2 == 0) || ((long)puVar5 < 0)) ||
             (puVar3 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar5 >> 0x3e == 0) {
              puVar2 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar2 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar5) {
                puVar2 = puVar5;
              }
              func_0x000107c60480(puVar2);
            }
            puVar3 = (undefined *)0x0;
            FUN_102b51c78(0,puVar2 + 1,1,puVar5);
          }
          uVar7 = (ulong)puVar3 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar7 + 0x10);
          lVar13 = uVar11 + 1;
          puVar5 = puVar3;
          if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar11) {
            puVar2 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
            FUN_102b51c78(puVar2,lVar13,1,puVar3);
            puVar5 = puVar2;
LAB_102b4b5e0:
            uVar7 = (ulong)puVar2 & 0xffffffffffffff8;
          }
        }
        else {
          puVar3 = puVar2;
          func_0x000107c61550();
          if ((((int)puVar3 == 0) || ((long)puVar2 < 0)) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar2 >> 0x3e == 0) {
              puVar3 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar3 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar2) {
                puVar3 = puVar2;
              }
              func_0x000107c60480(puVar3);
            }
            puVar4 = (undefined *)0x0;
            FUN_102b51c78(0,puVar3 + 1,1,puVar2);
          }
          uVar7 = (ulong)puVar4 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar7 + 0x10);
          lVar13 = uVar11 + 1;
          if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar11) {
            puVar2 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
            FUN_102b51c78(puVar2,lVar13,1,puVar4);
            puVar4 = puVar2;
            goto LAB_102b4b5e0;
          }
        }
        *(long *)(uVar7 + 0x10) = lVar13;
        *(undefined8 *)(uVar7 + uVar11 * 8 + 0x20) = uVar12;
        func_0x000107c61574(uVar12);
        pcVar10 = pcVar10 + 0x10;
        lVar8 = lVar8 + -1;
        puVar2 = puVar4;
      } while (lVar8 != 0);
    }
    FUN_102b50a68(puVar4,puVar5,param_2,param_3,param_4,param_5);
    func_0x000107c61170(lVar9);
    *(undefined1 *)(unaff_x20 + _DAT_112ef62b8) = 1;
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puVar5);
  }
  return;
}



/* Entry: 102b4b75c; end: 102b4bdd7;  */

ulong FUN_102b4b75c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b4b830);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b4b834);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000102b4ca1c(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = 0;
    func_0x000102b4ca1c(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000043,0x800000010f0f27e0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b4b8fc);
  (*pcVar2)();
}



/* Entry: 102b4bdd8; end: 102b4bed7;  */

void FUN_102b4bdd8(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    func_0x000102b4cf64();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      func_0x000102b4ca1c(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_102b4bed8(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_102b4c368(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102b4bed8; end: 102b4c367;  */

void FUN_102b4bed8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x21;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = param_3[1];
  if (0 < lVar17) {
    lVar9 = 0;
    do {
      lVar19 = lVar9 + 1;
      if (lVar19 < lVar17) {
        lVar19 = *(long *)(*param_3 + lVar19 * 8);
        plVar13 = (long *)(*param_3 + lVar9 * 8);
        plVar21 = plVar13 + 2;
        lVar20 = *plVar13;
        uVar14 = *(ulong *)(lVar19 + 0x18);
        func_0x000107c6157c(lVar19);
        func_0x000107c6157c(lVar20);
        func_0x000107c4eb70();
        uVar3 = *(ulong *)(lVar20 + 0x18);
        func_0x000107c4eb70();
        func_0x000107c61574(lVar19);
        func_0x000107c61574(lVar20);
        lVar20 = lVar9 + 2;
        do {
          lVar8 = lVar20;
          lVar19 = lVar17;
          if (lVar17 == lVar8) break;
          lVar19 = plVar21[-1];
          lVar20 = *plVar21;
          uVar15 = *(ulong *)(lVar20 + 0x18);
          func_0x000107c6157c(lVar20);
          func_0x000107c6157c(lVar19);
          func_0x000107c4eb70();
          uVar4 = *(ulong *)(lVar19 + 0x18);
          func_0x000107c4eb70();
          func_0x000107c61574(lVar20);
          func_0x000107c61574(lVar19);
          plVar21 = plVar21 + 1;
          lVar20 = lVar8 + 1;
          lVar19 = lVar8;
        } while (uVar14 < uVar3 != uVar4 <= uVar15);
        if (uVar14 < uVar3) {
          if (lVar19 < lVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c33c);
            (*pcVar1)();
          }
          if (lVar9 < lVar19) {
            lVar8 = *param_3;
            puVar10 = (undefined8 *)(lVar8 + lVar19 * 8);
            puVar11 = (undefined8 *)(lVar8 + lVar9 * 8);
            lVar20 = lVar19;
            lVar17 = lVar9;
            do {
              puVar10 = puVar10 + -1;
              lVar20 = lVar20 + -1;
              if (lVar17 != lVar20) {
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c35c);
                  (*pcVar1)();
                }
                uVar12 = *puVar11;
                *puVar11 = *puVar10;
                *puVar10 = uVar12;
              }
              lVar17 = lVar17 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar17 < lVar20);
          }
        }
      }
      lVar17 = param_3[1];
      lVar20 = lVar19;
      if (lVar19 < lVar17) {
        if (SBORROW8(lVar19,lVar9)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c338);
          (*pcVar1)();
        }
        if (lVar19 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c340);
            (*pcVar1)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar17 <= lVar9 + param_4) {
            lVar8 = lVar17;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c344);
            (*pcVar1)();
          }
          if (lVar19 != lVar8) {
            lVar22 = *param_3;
            plVar21 = (long *)(lVar22 + lVar19 * 8 + -8);
            lVar17 = lVar9 - lVar19;
            do {
              lVar18 = *(long *)(lVar22 + lVar19 * 8);
              plVar13 = plVar21;
              lVar20 = lVar17;
              do {
                lVar16 = *plVar13;
                uVar14 = *(ulong *)(lVar18 + 0x18);
                func_0x000107c6157c(lVar18);
                func_0x000107c6157c(lVar16);
                func_0x000107c4eb70();
                uVar3 = *(ulong *)(lVar16 + 0x18);
                func_0x000107c4eb70();
                func_0x000107c61574(lVar18);
                func_0x000107c61574(lVar16);
                if (uVar3 <= uVar14) break;
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c348);
                  (*pcVar1)();
                }
                lVar16 = *plVar13;
                lVar18 = plVar13[1];
                *plVar13 = lVar18;
                plVar13[1] = lVar16;
                bVar2 = lVar20 != -1;
                lVar20 = lVar20 + 1;
                plVar13 = plVar13 + -1;
              } while (bVar2);
              lVar19 = lVar19 + 1;
              plVar21 = plVar21 + 1;
              lVar17 = lVar17 + -1;
              lVar20 = lVar8;
            } while (lVar19 != lVar8);
          }
        }
      }
      puVar7 = puStack_58;
      if (lVar20 < lVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c32c);
        (*pcVar1)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar14 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar14) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar14 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar14 + 1;
      *(long *)(puVar7 + uVar14 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar14 * 0x10 + 0x28) = lVar20;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c360);
        (*pcVar1)();
      }
      FUN_102b4c45c(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102b4c2fc;
      lVar17 = param_3[1];
      lVar9 = lVar20;
    } while (lVar20 < lVar17);
  }
  puVar7 = puStack_58;
  lVar17 = *param_1;
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c368);
    (*pcVar1)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar14 = *(ulong *)(puVar7 + 0x10);
  while (puStack_58 = puVar7, 1 < uVar14) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c364);
      (*pcVar1)();
    }
    lVar8 = uVar14 - 1;
    lVar20 = *(long *)(puVar7 + uVar14 * 0x10);
    lVar19 = *(long *)(puVar7 + lVar8 * 0x10 + 0x28);
    FUN_102b4c6c4(lVar9 + lVar20 * 8,lVar9 + *(long *)(puVar7 + lVar8 * 0x10 + 0x20) * 8,
                  lVar9 + lVar19 * 8,lVar17);
    if (unaff_x21 != 0) break;
    if (lVar19 < lVar20) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c330);
      (*pcVar1)();
    }
    puVar5 = puVar7;
    func_0x000107c61558();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar14 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c334);
      (*pcVar1)();
    }
    *(long *)(puVar7 + uVar14 * 0x10) = lVar20;
    *(long *)((long)(puVar7 + uVar14 * 0x10) + 8) = lVar19;
    puStack_58 = puVar7;
    func_0x0001000a97cc(lVar8);
    puVar7 = puStack_58;
    uVar14 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_102b4c2fc:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 102b4c368; end: 102b4c45b;  */

void FUN_102b4c368(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    plVar9 = (long *)(lVar8 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar6 = *(long *)(lVar8 + param_3 * 8);
      lVar4 = param_1;
      plVar10 = plVar9;
      do {
        lVar7 = *plVar10;
        uVar5 = *(ulong *)(lVar6 + 0x18);
        func_0x000107c6157c(lVar6);
        func_0x000107c6157c(lVar7);
        func_0x000107c4eb70();
        uVar3 = *(ulong *)(lVar7 + 0x18);
        func_0x000107c4eb70();
        func_0x000107c61574(lVar6);
        func_0x000107c61574(lVar7);
        if (uVar3 <= uVar5) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4c45c);
          (*pcVar1)();
        }
        lVar7 = *plVar10;
        lVar6 = plVar10[1];
        *plVar10 = lVar6;
        plVar10[1] = lVar7;
        bVar2 = lVar4 != -1;
        lVar4 = lVar4 + 1;
        plVar10 = plVar10 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar9 = plVar9 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102b4c45c; end: 102b4c6c3;  */

undefined8 FUN_102b4c45c(ulong *param_1,undefined8 param_2,long *param_3)

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
          goto LAB_102b4c530;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c6ac);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_102b4c594:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c69c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c6a4);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c684);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c688);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c690);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c698);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_102b4c530:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c68c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c694);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c6a0);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c6a8);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_102b4c594;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c6b0);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c678);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c6c4);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_102b4c6c4(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c67c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b4c680);
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



/* Entry: 102b4c6c4; end: 102b4c9e7;  */

undefined8 FUN_102b4c6c4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  lVar7 = (long)param_2 - (long)param_1;
  lVar3 = lVar7 + 7;
  if (-1 < lVar7) {
    lVar3 = lVar7;
  }
  lVar3 = lVar3 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar5 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar5 = lVar11;
  }
  lVar5 = lVar5 >> 3;
  if (lVar3 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar6 = param_4 + lVar3;
    plVar2 = param_1;
    if (7 < lVar7) {
      do {
        plVar2 = param_1;
        if (param_3 <= param_2) break;
        lVar3 = *param_2;
        lVar7 = *param_4;
        uVar9 = *(ulong *)(lVar3 + 0x18);
        func_0x000107c6157c(lVar3);
        func_0x000107c6157c(lVar7);
        func_0x000107c4eb70();
        uVar1 = *(ulong *)(lVar7 + 0x18);
        func_0x000107c4eb70();
        func_0x000107c61574(lVar3);
        func_0x000107c61574(lVar7);
        if (uVar9 < uVar1) {
          plVar10 = param_4;
          plVar2 = param_2;
          param_2 = param_2 + 1;
        }
        else {
          plVar10 = param_4 + 1;
          plVar2 = param_4;
        }
        param_4 = plVar10;
        if (param_1 != plVar2) {
          *param_1 = *plVar2;
        }
        param_1 = param_1 + 1;
        plVar2 = param_1;
      } while (param_4 < plVar6);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar5 << 3);
    }
    plVar6 = param_4 + lVar5;
    plVar2 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar4 = param_2 + -1;
        plVar10 = param_3;
        while( true ) {
          param_3 = plVar10 + -1;
          plVar8 = plVar6 + -1;
          lVar3 = *plVar8;
          lVar7 = *plVar4;
          uVar9 = *(ulong *)(lVar3 + 0x18);
          func_0x000107c6157c(lVar3);
          func_0x000107c6157c(lVar7);
          func_0x000107c4eb70();
          uVar1 = *(ulong *)(lVar7 + 0x18);
          func_0x000107c4eb70();
          func_0x000107c61574(lVar3);
          func_0x000107c61574(lVar7);
          if (uVar9 < uVar1) break;
          if (plVar10 != plVar6) {
            *param_3 = *plVar8;
          }
          plVar2 = param_2;
          plVar6 = plVar8;
          plVar10 = param_3;
          if (plVar8 <= param_4) goto LAB_102b4c988;
        }
        if (plVar10 != param_2) {
          *param_3 = *plVar4;
        }
        plVar2 = plVar4;
      } while ((param_1 < plVar4) && (param_2 = plVar4, param_4 < plVar6));
    }
  }
LAB_102b4c988:
  uVar1 = (long)plVar6 - (long)param_4;
  uVar9 = uVar1 + 7;
  if (-1 < (long)uVar1) {
    uVar9 = uVar1;
  }
  if ((plVar2 != param_4) || ((long *)((long)param_4 + (uVar9 & 0xfffffffffffffff8)) <= plVar2)) {
    func_0x000107c610b8(plVar2,param_4,((long)uVar9 >> 3) << 3);
  }
  return 1;
}



/* Entry: 102b4c9e8; end: 102b4cadf;  */

void FUN_102b4c9e8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102b4cae0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102b4cae0; end: 102b4cc1b;  */

code * FUN_102b4cae0(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b4cc1c);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    FUN_102b4ce90(param_5,param_6,param_7);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 102b4cc1c; end: 102b4cd4b;  */

undefined * FUN_102b4cc1c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b4cd4c);
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
    puVar3 = (undefined *)0x112ef6430;
    func_0x0001000285a8(0x112ef6430,&UNK_10db249f8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ef6428;
    func_0x0001000285a8(0x112ef6428,&UNK_10db249f0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102b4cd4c; end: 102b4cd83;  */

code * FUN_102b4cd4c(long param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  
  pcVar1 = FUN_102b4eedc;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  pcVar3 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102b4ce90(FUN_102b4eedc,0x112ef6408,&UNK_10db249d0);
    func_0x000107c613fc();
    pcVar2 = pcVar1;
    func_0x000107c610a4();
    pcVar3 = pcVar2 + -0x19;
    if (0x1f < (long)pcVar2) {
      pcVar3 = pcVar2 + -0x20;
    }
    *(long *)(pcVar1 + 0x10) = param_1;
    *(ulong *)(pcVar1 + 0x18) = ((long)pcVar3 >> 3) << 1 | 1;
    pcVar3 = pcVar1;
  }
  return pcVar3;
}



/* Entry: 102b4cd84; end: 102b4ce8f;  */

undefined *
FUN_102b4cd84(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102b4ce90(param_3,param_4,param_5);
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



/* Entry: 102b4ce90; end: 102b4cefb;  */

void FUN_102b4ce90(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102b4cefc; end: 102b4cf9f;  */

/* WARNING: Possible PIC construction at 0x000102b4cf2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b4cf30) */
/* WARNING: Removing unreachable block (ram,0x000102b4cf34) */

void FUN_102b4cefc(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112ec68b8;
    plVar5 = (long *)&UNK_10db24a10;
  }
  else {
    puVar3 = (ulong *)0x112d5ba30;
    plVar5 = (long *)&UNK_10d929a50;
    unaff_x30 = 0x102b4cf30;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 102b4cfa0; end: 102b4d0f7;  */

ulong FUN_102b4cfa0(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4d0f8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4d0ec);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000102b4ca1c(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4d0f0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4d0f4);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c6157c(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c6157c(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_102b4b75c(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102b4d0f8; end: 102b4d353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4d0f8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ef62a8);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    puVar2 = PTR_PTR_1126c8e28;
    func_0x000107c61168(PTR_PTR_1126c8e28);
    func_0x000107c41b98();
    func_0x000107c61180();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102b4d354; end: 102b4d393;  */

void FUN_102b4d354(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef63f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db24940;
  func_0x000107c61520(&UNK_10db24940,&UNK_1105a09a0);
  puRam0000000112ef63f8 = puVar1;
  return;
}



/* Entry: 102b4d394; end: 102b4d397;  */

void FUN_102b4d394(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef6400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db249a8;
  func_0x000107c61520(&UNK_10db249a8,&UNK_1105a0910);
  puRam0000000112ef6400 = puVar1;
  return;
}



/* Entry: 102b4d398; end: 102b4d3d7;  */

void FUN_102b4d398(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef6400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db249a8;
  func_0x000107c61520(&UNK_10db249a8,&UNK_1105a0910);
  puRam0000000112ef6400 = puVar1;
  return;
}



/* Entry: 102b4d3d8; end: 102b4d40b;  */

undefined8 FUN_102b4d3d8(undefined8 param_1)

{
  (*(code *)(undefined *)0x102b48c60)();
  return param_1;
}



/* Entry: 102b4d40c; end: 102b4d473;  */

void FUN_102b4d40c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112ef6410 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ec6680;
  func_0x00010002969c(0x112ec6680,&UNK_10dae7dd0);
  puStack_18 = PTR___sSbSQsWP_11034dd50;
  puVar2 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&puStack_18);
  puRam0000000112ef6410 = puVar2;
  return;
}



/* Entry: 102b4d474; end: 102b4d4ab;  */

void FUN_102b4d474(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x20;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar12 = *param_1;
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 != 0) {
    lVar13 = *(long *)(lVar3 + 0x10);
    if (lVar13 != 0) {
      func_0x000102b4ca90(0,lVar13,0);
      puVar10 = (undefined8 *)(lVar3 + 0x20);
      uVar14 = *(ulong *)(puVar8 + 0x10);
      do {
        uVar15 = *puVar10;
        uVar1 = uVar14 + 1;
        uVar11 = *(ulong *)(puVar8 + 0x18);
        func_0x000107c6157c(uVar15);
        if (uVar11 >> 1 <= uVar14) {
          func_0x000102b4ca90(1 < uVar11,uVar1,1);
        }
        *(ulong *)(puVar8 + 0x10) = uVar1;
        *(undefined8 *)(puVar8 + uVar14 * 8 + 0x20) = uVar15;
        lVar13 = lVar13 + -1;
        puVar10 = puVar10 + 2;
        uVar14 = uVar1;
      } while (lVar13 != 0);
    }
    func_0x000107c61434(uVar12);
    puVar7 = puVar8;
    FUN_102b4d4ac(puVar8,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000107c6142c(puVar8);
    puVar8 = puVar7;
    func_0x000102b4b30c(puVar7);
    func_0x000107c61574(puVar7);
    FUN_102b4b444(puVar8,uVar9,uVar5,uVar2,uVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c6142c(puVar8);
  }
  return;
}



/* Entry: 102b4d4ac; end: 102b4d807;  */

undefined * FUN_102b4d4ac(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uStack_68;
  
  uVar13 = (ulong)param_1 >> 0x3e;
  if (uVar13 == 0) {
    puVar10 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar10 = param_1;
    }
    func_0x000107c60480();
  }
  puVar12 = *(undefined **)(param_2 + 0x10);
  puVar9 = puVar12;
  if ((long)puVar10 <= (long)puVar12) {
    puVar9 = puVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar9 != (undefined *)0x0) {
    puVar5 = puVar9;
    func_0x000102b4ce10(puVar9,0);
    func_0x000107c6157c();
  }
  uVar8 = *(ulong *)(puVar5 + 0x18);
  func_0x000107c61574(puVar5);
  if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d7fc);
    (*pcVar3)();
  }
  puVar17 = (undefined8 *)(puVar5 + 0x20);
  uVar8 = uVar8 >> 1;
  if (puVar9 != (undefined *)0x0) {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (uVar13 == 0) {
      puVar11 = *(undefined **)(puVar10 + 0x10);
    }
    else {
      puVar11 = puVar10;
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        puVar11 = param_1;
      }
      func_0x000107c60480();
    }
    puVar14 = (undefined *)0x0;
    uVar8 = uVar8 - (long)puVar9;
    do {
      if (puVar9 == puVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d7c4);
        (*pcVar3)();
      }
      if (puVar11 == puVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d7c8);
        (*pcVar3)();
      }
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar10 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d7d8);
          (*pcVar3)();
        }
        puVar15 = *(undefined **)(param_1 + (long)puVar14 * 8 + 0x20);
        func_0x000107c6157c();
      }
      else {
        puVar15 = puVar14;
        func_0x000102b4bc3c(puVar14,param_1);
      }
      if (puVar12 == puVar14) {
        func_0x000107c61574();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d808);
        (*pcVar3)();
      }
      uVar2 = puVar14[param_2 + 0x20];
      puVar14 = puVar14 + 1;
      *puVar17 = puVar15;
      *(undefined1 *)(puVar17 + 1) = uVar2;
      puVar17 = puVar17 + 2;
    } while (puVar9 != puVar14);
  }
  uStack_68 = (ulong)param_1 & 0xc000000000000001;
  puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  puVar10 = puVar11;
  if (((ulong)param_1 & 0x8000000000000000) != 0) {
    puVar10 = param_1;
  }
  if (uVar13 != 0) goto LAB_102b4d628;
  while (puVar14 = puVar5, puVar9 != *(undefined **)(puVar11 + 0x10)) {
    while( true ) {
      if (uStack_68 == 0) {
        if (*(undefined **)(puVar11 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d7cc);
          (*pcVar3)();
        }
        puVar15 = *(undefined **)(param_1 + (long)puVar9 * 8 + 0x20);
        func_0x000107c6157c(puVar15);
      }
      else {
        puVar15 = puVar9;
        func_0x000102b4bc3c(puVar9,param_1);
      }
      if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d778);
        (*pcVar3)();
      }
      puVar5 = puVar14;
      if (puVar12 == puVar9) {
        func_0x000107c61574(puVar15);
        goto LAB_102b4d780;
      }
      if (puVar12 <= puVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d7d0);
        (*pcVar3)();
      }
      uVar2 = puVar9[param_2 + 0x20];
      if (uVar8 == 0) {
        uVar8 = *(ulong *)(puVar14 + 0x18);
        if ((long)((uVar8 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d7dc);
          (*pcVar3)();
        }
        uVar7 = uVar8 & 0xfffffffffffffffe;
        if ((long)uVar8 < 2) {
          uVar7 = 1;
        }
        puVar5 = (undefined *)0x112ef6438;
        func_0x0001000285a8(0x112ef6438,&UNK_10db24a00);
        func_0x000107c613fc();
        puVar6 = puVar5;
        func_0x000107c610a4();
        puVar1 = puVar6 + -0x11;
        if (0x1f < (long)puVar6) {
          puVar1 = puVar6 + -0x20;
        }
        *(ulong *)(puVar5 + 0x10) = uVar7;
        *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 4) << 1;
        puVar6 = puVar5 + 0x20;
        uVar8 = *(ulong *)(puVar14 + 0x18);
        lVar16 = (uVar8 >> 1) * 0x10;
        if (*(long *)(puVar14 + 0x10) != 0) {
          if ((puVar5 != puVar14) || (puVar14 + 0x20 + lVar16 <= puVar6)) {
            func_0x000107c610b8(puVar6,puVar14 + 0x20,lVar16);
          }
          *(undefined8 *)(puVar14 + 0x10) = 0;
        }
        puVar17 = (undefined8 *)(puVar6 + lVar16);
        uVar8 = ((long)puVar1 >> 4 & 0x7fffffffffffffffU) - (uVar8 >> 1);
        func_0x000107c61574(puVar14);
      }
      bVar4 = SBORROW8(uVar8,1);
      uVar8 = uVar8 - 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d7d4);
        (*pcVar3)();
      }
      *puVar17 = puVar15;
      *(undefined1 *)(puVar17 + 1) = uVar2;
      puVar17 = puVar17 + 2;
      puVar9 = puVar9 + 1;
      if (uVar13 == 0) break;
LAB_102b4d628:
      puVar15 = puVar10;
      func_0x000107c60480();
      puVar14 = puVar5;
      if (puVar9 == puVar15) goto LAB_102b4d780;
    }
  }
LAB_102b4d780:
  if (1 < *(ulong *)(puVar5 + 0x18)) {
    uVar13 = *(ulong *)(puVar5 + 0x18) >> 1;
    if (SBORROW8(uVar13,uVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b4d800);
      (*pcVar3)();
    }
    *(ulong *)(puVar5 + 0x10) = uVar13 - uVar8;
  }
  return puVar5;
}



/* Entry: 102b4d808; end: 102b4d877;  */

undefined8 FUN_102b4d808(undefined8 param_1,undefined8 param_2)

{
  FUN_102b4fff8(param_2,param_1);
  return param_2;
}



/* Entry: 102b4d878; end: 102b4d99f;  */

void FUN_102b4d878(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_2;
  func_0x000107c3cef0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x000107c3cf00();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5faec();
    lVar6 = param_3;
    func_0x000107c61170(lVar3);
    lVar4 = lVar1;
    func_0x000107c3cf14();
    func_0x000107c61180();
    lVar3 = param_3;
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c5faec();
      param_3 = lVar6;
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar1);
      goto LAB_102b4d928;
    }
    func_0x000107c61170(lVar1);
    param_3 = lVar6;
  }
  lVar5 = 0;
  lVar6 = 0;
LAB_102b4d928:
  lVar1 = param_2;
  func_0x000107c44f7c();
  func_0x000107c61180();
  func_0x000107c3ec48();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar4 = 0;
    param_3 = 0;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  *param_1 = lVar1;
  param_1[1] = lVar4;
  param_1[2] = param_3;
  param_1[3] = lVar2;
  param_1[4] = lVar3;
  param_1[5] = lVar5;
  param_1[6] = lVar6;
  return;
}



/* Entry: 102b4d9a0; end: 102b4d9a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4d9a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_60,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61648();
    lVar1 = _DAT_112ef6298;
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c61428(lVar2 + _DAT_112ef6298,auStack_78,0,0);
      if (*(long *)(lVar2 + lVar1) != 0) {
        func_0x000107c4adc0(*(undefined8 *)(lVar3 + 0x10));
      }
      func_0x000107c61170(lVar2);
      func_0x000107c61574(lVar3);
    }
  }
  return;
}



/* Entry: 102b4d9a8; end: 102b4d9e3;  */

undefined8 FUN_102b4d9a8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_100ec75b0)(param_2,param_1);
  return param_2;
}



/* Entry: 102b4d9e4; end: 102b4d9eb;  */

void FUN_102b4d9e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_110 [56];
  undefined1 auStack_d8 [56];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [56];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *param_1;
  func_0x000107c61428(lVar5 + 0x10,auStack_a0,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    FUN_102b4d878(auStack_88,uVar6);
    func_0x000107c61170(lVar5);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
    uVar1 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    uVar8 = *(undefined8 *)(lVar4 + 0x48);
    FUN_102b4daa8(auStack_88,auStack_d8);
    FUN_102b4d9a8(auStack_88,(undefined8 *)(lVar4 + 0x18));
    func_0x000107c61170(uVar7);
    func_0x000107c6142c(uVar6);
    func_0x000102b4dae4(uVar2,uVar1,uVar3,uVar8);
    FUN_102b4d9a8(auStack_88,auStack_d8);
    FUN_102b4daa8(auStack_88,auStack_110);
    func_0x0001002a64a8(auStack_d8);
    func_0x000102b4db14(auStack_88);
    func_0x000102b4db14(auStack_88);
  }
  return;
}



/* Entry: 102b4d9ec; end: 102b4da6b;  */

void FUN_102b4d9ec(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000102b4da2c(0xff);
    puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
    func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 102b4da6c; end: 102b4da73;  */

void FUN_102b4da6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *param_1;
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c3ebcc(uVar3);
    FUN_102b4ac70(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102b4da74; end: 102b4da9f;  */

void FUN_102b4da74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b4daa0; end: 102b4daa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4daa0(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  bVar1 = *param_1;
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112ef65b8;
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + _DAT_112ef65b8,auStack_60,0,0);
    uVar5 = *(undefined8 *)(lVar2 + lVar4);
    func_0x000107c61434(uVar5);
    FUN_102b509b0(lVar3,uVar5);
    func_0x000107c6142c(uVar5);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c49eac();
      if ((uint)bVar1 == (uint)lVar4) {
        func_0x000107c550d8(lVar3);
        uVar5 = 0x3ff0000000000000;
        if (bVar1 == 0) {
          uVar5 = 0;
        }
        func_0x000107c526c0(uVar5,lVar3);
        func_0x000107c4abfc(lVar2);
      }
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102b4daa8; end: 102b4db47;  */

undefined8 FUN_102b4daa8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x102b4df08)(param_2,param_1);
  return param_2;
}



/* Entry: 102b4db48; end: 102b4db73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4db48(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ef62a8);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    puVar2 = PTR_PTR_1126c8e28;
    func_0x000107c61168(PTR_PTR_1126c8e28);
    func_0x000107c41aa4();
    func_0x000107c61180();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102b4db74; end: 102b4e23b;  */

long FUN_102b4db74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102b4e23c; end: 102b4e303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b4e23c(undefined8 param_1,undefined8 param_2)

{
  double *pdVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar2 = _DAT_112ef6488;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112ef6488);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    pdVar1 = (double *)(unaff_x20 + _DAT_112ef6478);
    func_0x000107c52b50();
    puVar3 = puVar4;
    func_0x000107c4aba4(puVar4);
    func_0x000107c61180();
    func_0x000107c539d4(*pdVar1 * 0.5);
    func_0x000107c61170(puVar3);
    func_0x000107c5a050(puVar4,param_2,0);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined **)(unaff_x20 + lVar2) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 102b4e304; end: 102b4e62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b4e304(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ef6490;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ef6490);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c3d8b8(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102b4e62c; end: 102b4e653; -[_TtC17LensActionBarImpl21LensActionBarItemView initWithCoder:] */

void FUN_102b4e62c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b4fa34();
  return;
}



/* Entry: 102b4e654; end: 102b4e97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b4e654(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_168 [56];
  undefined1 auStack_120 [160];
  
  lVar2 = _DAT_112ef6470;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6480) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6488) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6490) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6498) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef64a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef64a8) = 0;
  *(long *)(unaff_x20 + _DAT_112ef6468) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef6478);
  uVar3 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar9 = param_2[0xe];
  puVar1[0xd] = param_2[0xd];
  puVar1[0xc] = uVar3;
  puVar1[0xf] = uVar10;
  puVar1[0xe] = uVar9;
  uVar3 = param_2[0x10];
  uVar10 = param_2[0x13];
  uVar9 = param_2[0x12];
  puVar1[0x11] = param_2[0x11];
  puVar1[0x10] = uVar3;
  puVar1[0x13] = uVar10;
  puVar1[0x12] = uVar9;
  uVar3 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar3;
  puVar1[7] = uVar10;
  puVar1[6] = uVar9;
  uVar3 = param_2[8];
  uVar10 = param_2[0xb];
  uVar9 = param_2[10];
  puVar1[9] = param_2[9];
  puVar1[8] = uVar3;
  puVar1[0xb] = uVar10;
  puVar1[10] = uVar9;
  uVar3 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  func_0x000107c6157c(param_1);
  FUN_102b4d808(param_2,auStack_120);
  FUN_102b4eedc();
  puVar4 = &stack0xfffffffffffffed0;
  func_0x000107c61154(0,0,0,0,puVar4,PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined8 *)(puVar4 + _DAT_112ef6478);
  uVar3 = *puVar1;
  uVar9 = puVar1[1];
  if (*(char *)(puVar1 + 3) == '\x01') {
    uVar10 = puVar1[2];
    func_0x000107c61174(puVar4);
    FUN_102b4f498(uVar3,uVar10,uVar9);
  }
  else {
    func_0x000107c61174(puVar4);
    FUN_102b4eefc(uVar3,uVar9);
  }
  if (*(char *)(puVar1 + 0xd) == '\x01') {
    func_0x000107c61168(PTR_PTR_1126b08d8);
    func_0x00010085b3c8(puVar1[0xf],puVar1[0x10],puVar1[0x11],puVar1[0x12]);
  }
  if (*(char *)(puVar1 + 3) == '\x01') {
    puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x000107c48c2c();
    puVar6 = puVar5;
    FUN_102b4e23c();
    func_0x000107c3d6fc();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
  }
  FUN_102b4d9a8(param_1 + 0x18,auStack_120);
  FUN_102b4daa8(auStack_120,auStack_168);
  FUN_102b4eb28(auStack_120);
  func_0x000102b4db14(auStack_120);
  func_0x000107c61174();
  func_0x000107c5a378();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar5 = &UNK_1105a0dc0;
  func_0x000107c613fc(&UNK_1105a0dc0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(puVar4);
  pcVar7 = FUN_102b4fb08;
  puVar6 = puVar5;
  func_0x0001000b6504(FUN_102b4fb08);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c614f0(pcVar7);
  uVar3 = *(undefined8 *)(puVar4 + _DAT_112ef6470);
  pcVar8 = *(code **)(puVar6 + 0x10);
  func_0x000107c6157c(uVar3);
  (*pcVar8)();
  func_0x000107c615e8(pcVar7);
  func_0x000107c61574(uVar3);
  func_0x000102b4d844(param_2);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 102b4e980; end: 102b4e9df;  */

void FUN_102b4e980(undefined8 param_1,long param_2)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [56];
  
  FUN_102b4d9a8(param_1,auStack_58);
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102b4eb28(auStack_58);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b4e9e0; end: 102b4ea1b; -[_TtC17LensActionBarImpl21LensActionBarItemView isHidden] */

void FUN_102b4e9e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102b4eedc();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 102b4ea1c; end: 102b4ea4b; -[_TtC17LensActionBarImpl21LensActionBarItemView setHidden:] */

void FUN_102b4ea1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102b4ea4c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b4ea4c; end: 102b4eb27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4ea4c(uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  puVar2 = &stack0xffffffffffffffb0;
  FUN_102b4eedc();
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c61154(puVar1,PTR_s_isHidden_1125fad18);
  if ((param_1 & 1) != (uint)puVar1) {
    func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_setHidden__1126479f8,param_1 & 1);
    if (*(char *)(unaff_x20 + _DAT_112ef6478 + 0x18) == '\x01') {
      FUN_102b4e23c();
    }
    else {
      FUN_102b4e304();
    }
    func_0x000107c55528();
    func_0x000107c61170(puVar2);
    pcVar4 = *(code **)(*(long *)(unaff_x20 + _DAT_112ef6468) + 0x60);
    if (pcVar4 != (code *)0x0) {
      uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ef6468) + 0x68);
      func_0x000107c6157c(uVar3);
      (*pcVar4)((param_1 ^ 0xffffffff) & 1);
      func_0x000100d1b748(pcVar4,uVar3);
    }
  }
  return;
}



/* Entry: 102b4eb28; end: 102b4ec3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4eb28(long param_1)

{
  long lVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long lStack_78;
  
  FUN_102b4d9a8(param_1,auStack_88);
  lVar1 = unaff_x20 + _DAT_112ef6478;
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    dVar3 = *(double *)(lVar1 + 8);
    dVar2 = *(double *)(lVar1 + 0x10);
    func_0x000102b4e398();
    func_0x000107c55258();
    func_0x000107c61170(param_1);
    param_1 = *(long *)(unaff_x20 + _DAT_112ef6480);
    if (param_1 != 0) {
      if (lStack_78 != 0) {
        dVar2 = dVar2 - dVar3;
      }
      func_0x000107c5378c(dVar2);
    }
  }
  else {
    func_0x000102b4e304();
    func_0x000107c55260();
    func_0x000107c61170(param_1);
  }
  func_0x000102b4e414();
  if (lStack_78 == 0) {
    uStack_80 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_80,lStack_78);
  }
  func_0x000107c59c6c(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uStack_80);
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112ef64a0));
  return;
}



/* Entry: 102b4ec40; end: 102b4eceb; -[_TtC17LensActionBarImpl21LensActionBarItemView didTap] */

/* WARNING: Possible PIC construction at 0x000102b4eca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b4eca4) */
/* WARNING: Removing unreachable block (ram,0x000102b4ecb8) */
/* WARNING: Removing unreachable block (ram,0x000102b4ecd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4ec40(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c61174();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c4e57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4ecec);
  (*pcVar1)();
}



/* Entry: 102b4ecec; end: 102b4ed87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4ecec(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c5bcc0();
  if (param_1 == 3) {
    puVar1 = PTR_PTR_1126affa8;
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b4ed88);
      (*pcVar2)();
    }
    func_0x000107c4e57c();
    func_0x000107c61170(puVar1);
    pcVar2 = *(code **)(*(long *)(unaff_x20 + _DAT_112ef6468) + 0x50);
    if (pcVar2 != (code *)0x0) {
      uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ef6468) + 0x58);
      func_0x000107c6157c(uVar3);
      (*pcVar2)();
      if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 102b4ed88; end: 102b4edd7; -[_TtC17LensActionBarImpl21LensActionBarItemView handleTapWithSender:] */

/* WARNING: Possible PIC construction at 0x000102b4edc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b4edc4) */

void FUN_102b4ed88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102b4ecec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b4edd8; end: 102b4ee33; -[_TtC17LensActionBarImpl21LensActionBarItemView initWithFrame:] */

void FUN_102b4edd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensActionBarImpl.LensActionBarItemView",0x27,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b4ee04);
  (*pcVar1)();
}



/* Entry: 102b4ee34; end: 102b4eedb; -[_TtC17LensActionBarImpl21LensActionBarItemView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b4ee80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4eea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4eec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b4eea4) */
/* WARNING: Removing unreachable block (ram,0x000102b4ee84) */
/* WARNING: Removing unreachable block (ram,0x000102b4eec4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4ee34(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef6468));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef6470));
  func_0x000102b4d844(param_1 + _DAT_112ef6478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef6480));
  return;
}



/* Entry: 102b4eedc; end: 102b4eefb;  */

void FUN_102b4eedc(void)

{
  func_0x000107c61168(&PTR_PTR_11288d270);
  return;
}



/* Entry: 102b4eefc; end: 102b4f497;  */

/* WARNING: Possible PIC construction at 0x000102b4ef38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4ef5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4efa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f1f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f43c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b4f3ec) */
/* WARNING: Removing unreachable block (ram,0x000102b4f394) */
/* WARNING: Removing unreachable block (ram,0x000102b4f348) */
/* WARNING: Removing unreachable block (ram,0x000102b4f2f8) */
/* WARNING: Removing unreachable block (ram,0x000102b4f2a4) */
/* WARNING: Removing unreachable block (ram,0x000102b4f250) */
/* WARNING: Removing unreachable block (ram,0x000102b4f1fc) */
/* WARNING: Removing unreachable block (ram,0x000102b4f1a8) */
/* WARNING: Removing unreachable block (ram,0x000102b4f174) */
/* WARNING: Removing unreachable block (ram,0x000102b4f138) */
/* WARNING: Removing unreachable block (ram,0x000102b4f0e4) */
/* WARNING: Removing unreachable block (ram,0x000102b4f090) */
/* WARNING: Removing unreachable block (ram,0x000102b4f03c) */
/* WARNING: Removing unreachable block (ram,0x000102b4efac) */
/* WARNING: Removing unreachable block (ram,0x000102b4ef60) */
/* WARNING: Removing unreachable block (ram,0x000102b4ef3c) */
/* WARNING: Removing unreachable block (ram,0x000102b4f440) */

void FUN_102b4eefc(undefined8 param_1)

{
  func_0x000102b4e574();
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b4f498; end: 102b4fa33;  */

/* WARNING: Possible PIC construction at 0x000102b4f4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4f9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4fa08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b4f9cc) */
/* WARNING: Removing unreachable block (ram,0x000102b4f978) */
/* WARNING: Removing unreachable block (ram,0x000102b4f920) */
/* WARNING: Removing unreachable block (ram,0x000102b4f8d4) */
/* WARNING: Removing unreachable block (ram,0x000102b4f884) */
/* WARNING: Removing unreachable block (ram,0x000102b4f830) */
/* WARNING: Removing unreachable block (ram,0x000102b4f7d8) */
/* WARNING: Removing unreachable block (ram,0x000102b4f770) */
/* WARNING: Removing unreachable block (ram,0x000102b4f734) */
/* WARNING: Removing unreachable block (ram,0x000102b4f6e0) */
/* WARNING: Removing unreachable block (ram,0x000102b4f68c) */
/* WARNING: Removing unreachable block (ram,0x000102b4f638) */
/* WARNING: Removing unreachable block (ram,0x000102b4f5b0) */
/* WARNING: Removing unreachable block (ram,0x000102b4f58c) */
/* WARNING: Removing unreachable block (ram,0x000102b4f554) */
/* WARNING: Removing unreachable block (ram,0x000102b4f508) */
/* WARNING: Removing unreachable block (ram,0x000102b4f4e4) */
/* WARNING: Removing unreachable block (ram,0x000102b4fa0c) */

void FUN_102b4f498(undefined8 param_1)

{
  func_0x000102b4e574();
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b4fa34; end: 102b4fb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4fa34(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112ef6470;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6480) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6488) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6490) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6498) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef64a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef64a8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010f0f28b0,
                      "LensActionBarImpl/LensActionBarItemView.swift",0x2d,2,0x51,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b4fb08);
  (*pcVar2)();
}



/* Entry: 102b4fb08; end: 102b4fb0f;  */

void FUN_102b4fb08(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [56];
  
  FUN_102b4d9a8(param_1,auStack_58);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102b4eb28(auStack_58);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b4fb10; end: 102b4fb8b;  */

void FUN_102b4fb10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(uVar1);
  func_0x000102b4dae4(uVar3,uVar2,uVar4,uVar5);
  func_0x000100d1b77c(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000100d1b77c(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b4fb8c; end: 102b4fbab;  */

void FUN_102b4fb8c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef6518);
  return;
}



/* Entry: 102b4fbac; end: 102b4fc53;  */

void FUN_102b4fbac(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102b4fc54; end: 102b4fc6b;  */

bool FUN_102b4fc54(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102b4fc6c; end: 102b4fcab;  */

void FUN_102b4fc6c(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (puRam0000000112ef65b0 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)puRam0000000112ef65b0;
  FUN_102b4fb8c();
  puVar2 = &UNK_10db24b3c;
  func_0x000107c61520(&UNK_10db24b3c,lVar1);
  puRam0000000112ef65b0 = puVar2;
  return;
}



/* Entry: 102b4fcac; end: 102b4fe63;  */

long FUN_102b4fcac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102b4fe64; end: 102b4ff93;  */

void FUN_102b4fe64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,byte param_11,undefined8 param_12,
                  undefined *param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5af88();
  func_0x000107c61180();
  if (param_13 == (undefined *)0x0) {
    param_13 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168();
    func_0x000107c5c5fc(0x402c000000000000);
    func_0x000107c61180();
  }
  *param_1 = param_7;
  param_1[1] = param_8;
  param_1[2] = param_9;
  *(undefined1 *)(param_1 + 3) = param_10;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = 3;
  param_1[9] = param_13;
  param_1[10] = puVar2;
  param_1[0xb] = param_12;
  param_1[0xc] = 0x3fd6666666666666;
  *(byte *)(param_1 + 0xd) = param_11 & 1;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0x3fc3333333333333;
  param_1[0xf] = 0x402e000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = param_6;
  return;
}



/* Entry: 102b4ff94; end: 102b4fff7;  */

long FUN_102b4ff94(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102b4fff8; end: 102b5018f;  */

undefined8 * FUN_102b4fff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar2;
  uVar2 = param_2[4];
  uVar1 = param_2[7];
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar1;
  param_1[6] = uVar4;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xb] = uVar4;
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar1 = param_2[0xe];
  param_1[0xe] = uVar1;
  uVar3 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar3;
  uVar3 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar3;
  param_1[0x13] = param_2[0x13];
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 102b50190; end: 102b50233;  */

undefined8 * FUN_102b50190(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar1;
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_1[8] = param_2[8];
  func_0x000107c61170(param_1[9]);
  uVar1 = param_1[10];
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61170(uVar1);
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61170(uVar1);
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar1;
  param_1[0x13] = param_2[0x13];
  return param_1;
}



/* Entry: 102b50234; end: 102b502f3;  */

int FUN_102b50234(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102b502f4; end: 102b50357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b502f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ef65d8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef65d8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_102b50358();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102b50358; end: 102b503eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b50358(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x000107c453e4();
  func_0x000107c52610();
  func_0x000107c54280(puVar1,param_2,3);
  func_0x000107c52b2c(puVar1,param_2,1);
  func_0x000107c59594(*(undefined8 *)(param_1 + _DAT_112ef65c0 + 0x30),puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  func_0x000107c550d8(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 102b503ec; end: 102b5047f; -[_TtC17LensActionBarImpl17LensActionBarView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b503ec(long param_1)

{
  code *pcVar1;
  
  *(undefined **)(param_1 + _DAT_112ef65b8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined1 *)(param_1 + _DAT_112ef65c8) = 1;
  *(undefined1 *)(param_1 + _DAT_112ef65d0) = 1;
  *(undefined8 *)(param_1 + _DAT_112ef65d8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010f0f28b0,
                      "LensActionBarImpl/LensActionBarView.swift",0x29,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b50480);
  (*pcVar1)();
}



/* Entry: 102b50480; end: 102b509af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b50480(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x20;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auStack_1b0 [160];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  uVar11 = param_1;
  FUN_102b502f4();
  func_0x000107c3d89c();
  func_0x000107c61170(uVar11);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 9;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  lVar3 = _DAT_112ef65d8;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ef65d8);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar9 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar9 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar6 + 0x28) = uVar9;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar9 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar6 + 0x30) = uVar9;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000107c50890();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar9 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar6 + 0x38) = uVar9;
  uVar9 = 0;
  func_0x000100847984(0);
  puVar10 = puVar6;
  func_0x000107c5fc48(puVar6,uVar9);
  func_0x000107c61574(puVar6);
  func_0x000107c3d048(puVar5);
  func_0x000107c61170(puVar10);
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    lVar8 = _DAT_112ef65b8;
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
    lVar8 = _DAT_112ef65b8;
  }
  _DAT_112ef65b8 = lVar8;
  if (uVar11 != 0) {
    uVar20 = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef65c0);
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b50960);
          (*pcVar4)();
        }
        uVar21 = *(ulong *)(param_1 + uVar20 * 8 + 0x20);
        func_0x000107c6157c(uVar21);
      }
      else {
        uVar21 = uVar20;
        func_0x000102b4bc3c(uVar20,param_1);
      }
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b5095c);
        (*pcVar4)();
      }
      uVar18 = uVar20 + 1;
      uStack_a8 = puVar1[0xd];
      uStack_b0 = puVar1[0xc];
      uStack_98 = puVar1[0xf];
      uStack_a0 = puVar1[0xe];
      uStack_88 = puVar1[0x11];
      uStack_90 = puVar1[0x10];
      uStack_78 = puVar1[0x13];
      uStack_80 = puVar1[0x12];
      uStack_e8 = puVar1[5];
      uStack_f0 = puVar1[4];
      uStack_d8 = puVar1[7];
      uStack_e0 = puVar1[6];
      uStack_c8 = puVar1[9];
      uStack_d0 = puVar1[8];
      uStack_b8 = puVar1[0xb];
      uStack_c0 = puVar1[10];
      uStack_108 = puVar1[1];
      uStack_110 = *puVar1;
      uStack_f8 = puVar1[3];
      uStack_100 = puVar1[2];
      FUN_102b4eedc(0);
      func_0x000107c610f8();
      func_0x000107c6157c(uVar21);
      FUN_102b4d808(&uStack_110,auStack_1b0);
      uVar12 = uVar21;
      FUN_102b4e654(uVar21,&uStack_110);
      func_0x000107c5a050();
      func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + lVar3));
      func_0x000107c550d8(uVar12);
      func_0x000107c526c0(0,uVar12);
      puVar15 = auStack_1b0;
      func_0x000107c61428(unaff_x20 + lVar8,puVar15,0x21,0);
      uVar16 = *(ulong *)(unaff_x20 + lVar8);
      if ((uVar16 & 0xc000000000000001) == 0) {
        func_0x000107c6157c(uVar21);
        func_0x000107c61174(uVar12);
      }
      else {
        uVar13 = uVar16 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar16) {
          uVar13 = uVar16;
        }
        func_0x000107c6157c(uVar21);
        func_0x000107c61174(uVar12);
        uVar16 = uVar13;
        func_0x000107c6042c();
        puVar15 = (undefined1 *)(uVar16 + 1);
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b50968);
          (*pcVar4)();
        }
        FUN_102b52118();
        *(ulong *)(unaff_x20 + lVar8) = uVar13;
        uVar16 = uVar13;
      }
      func_0x000107c61558();
      uVar14 = (uint)uVar16;
      lVar19 = *(long *)(unaff_x20 + lVar8);
      *(undefined8 *)(unaff_x20 + lVar8) = 0x8000000000000000;
      uVar13 = uVar21;
      FUN_102b52000();
      uVar17 = (ulong)~(uint)puVar15 & 1;
      lVar2 = *(long *)(lVar19 + 0x10) + uVar17;
      if (SCARRY8(*(long *)(lVar19 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b50964);
        (*pcVar4)();
      }
      if (*(long *)(lVar19 + 0x18) < lVar2) {
        FUN_102b524b4(lVar2);
        uVar13 = uVar21;
        FUN_102b52000();
        if (((uint)puVar15 & 1) != (uVar14 & 1)) {
          FUN_102b4fb8c(0);
          func_0x000107c60624();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b509b0);
          (*pcVar4)();
        }
LAB_102b508d8:
        if (((ulong)puVar15 & 1) != 0) goto LAB_102b506d8;
LAB_102b508e0:
        lVar2 = lVar19 + (uVar13 >> 6) * 8;
        *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar13 & 0x3f);
        *(ulong *)(*(long *)(lVar19 + 0x30) + uVar13 * 8) = uVar21;
        *(ulong *)(*(long *)(lVar19 + 0x38) + uVar13 * 8) = uVar12;
        if (SCARRY8(*(long *)(lVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b5096c);
          (*pcVar4)();
        }
        *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
      }
      else {
        if ((uVar16 & 1) != 0) goto LAB_102b508d8;
        FUN_102b52350();
        if (((ulong)puVar15 & 1) == 0) goto LAB_102b508e0;
LAB_102b506d8:
        uVar9 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + uVar13 * 8);
        *(ulong *)(*(long *)(lVar19 + 0x38) + uVar13 * 8) = uVar12;
        func_0x000107c61574(uVar21);
        func_0x000107c61170(uVar9);
      }
      *(long *)(unaff_x20 + lVar8) = lVar19;
      func_0x000107c614a8(auStack_1b0);
      func_0x000107c61170(uVar12);
      func_0x000107c61574(uVar21);
      uVar20 = uVar20 + 1;
    } while (uVar18 != uVar11);
  }
  return;
}



/* Entry: 102b509b0; end: 102b50a67;  */

undefined8 FUN_102b509b0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if ((*(long *)(param_2 + 0x10) != 0) && (uVar3 = param_2, FUN_102b52000(), (uVar3 & 1) != 0)) {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
      func_0x000107c61174(uVar2);
      return uVar2;
    }
  }
  else {
    lVar1 = param_1;
    func_0x000107c6157c();
    func_0x000107c6043c();
    func_0x000107c61574(param_1);
    if (lVar1 != 0) {
      uVar2 = 0;
      lStack_30 = lVar1;
      FUN_102b4eedc(0);
      func_0x000107c6147c(&uStack_28,&lStack_30,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return uStack_28;
    }
  }
  return 0;
}



/* Entry: 102b50a68; end: 102b519a3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b50a68(undefined8 *******param_1,undefined8 *******param_2,undefined8 param_3,
                  char param_4,code *param_5,undefined8 param_6)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *******pppppppuVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 ****ppppuVar16;
  long unaff_x20;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined8 *****pppppuVar25;
  undefined8 *******pppppppuVar26;
  long lVar27;
  long lVar28;
  undefined8 *******pppppppuVar29;
  undefined8 ****ppppuVar30;
  undefined8 ****ppppuStack_108;
  undefined8 ******appppppuStack_f8 [3];
  undefined8 *******pppppppuStack_e0;
  undefined8 *******apppppppuStack_d8 [3];
  undefined8 *****pppppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *******apppppppuStack_90 [4];
  
  if (param_1 == (undefined8 *******)0x0) {
    if (param_2 == (undefined8 *******)0x0) {
      if (param_5 == (code *)0x0) {
        return;
      }
      (*param_5)();
      return;
    }
    pppppuVar20 = (undefined8 *****)0x0;
LAB_102b50e60:
    pppppppuVar22 = (undefined8 *******)((ulong)param_2 & 0xffffffffffffff8);
    if ((ulong)param_2 >> 0x3e == 0) {
      pppppppuVar29 = (undefined8 *******)pppppppuVar22[2];
    }
    else {
      pppppppuVar29 = param_2;
      if (-1 < (long)param_2) {
        pppppppuVar29 = pppppppuVar22;
      }
      func_0x000107c60480();
    }
    lVar27 = _DAT_112ef65b8;
    pppppppuVar13 = apppppppuStack_90;
    func_0x000107c61428(unaff_x20 + _DAT_112ef65b8,pppppppuVar13,0,0);
    if (pppppppuVar29 == (undefined8 *******)0x0) {
      ppppuStack_108 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      ppppuStack_108 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
      pppppppuVar18 = (undefined8 *******)0x0;
LAB_102b50eb0:
      do {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (pppppppuVar22[2] <= pppppppuVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b511a4);
            (*pcVar4)();
          }
          pppppppuVar21 = (undefined8 *******)param_2[(long)((long)pppppppuVar18 + 4)];
          func_0x000107c6157c(pppppppuVar21);
        }
        else {
          pppppppuVar21 = pppppppuVar18;
          pppppppuVar13 = param_2;
          func_0x000102b4bc3c();
        }
        if (SCARRY8((long)pppppppuVar18,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b511a0);
          (*pcVar4)();
        }
        pppppppuVar26 = (undefined8 *******)((long)pppppppuVar18 + 1);
        pppppppuVar17 = *(undefined8 ********)(unaff_x20 + lVar27);
        if (((ulong)pppppppuVar17 & 0xc000000000000001) == 0) {
          if ((pppppppuVar17[2] == (undefined8 ******)0x0) ||
             (pppppppuVar6 = pppppppuVar21, FUN_102b52000(), ((ulong)pppppppuVar13 & 1) == 0))
          goto LAB_102b50f7c;
          pppppuStack_c0 = pppppppuVar17[7][(long)pppppppuVar6];
          func_0x000107c61174();
        }
        else {
          pppppppuVar13 = (undefined8 *******)0x0;
          if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar17) {
            pppppppuVar13 = pppppppuVar17;
          }
          func_0x000107c61434(pppppppuVar17);
          pppppppuVar6 = pppppppuVar21;
          func_0x000107c6157c();
          func_0x000107c6043c();
          func_0x000107c61574(pppppppuVar21);
          func_0x000107c6142c(pppppppuVar17);
          if (pppppppuVar6 == (undefined8 *******)0x0) {
LAB_102b50f7c:
            pppppuStack_c0 = (undefined8 *****)0x0;
          }
          else {
            uVar5 = 0;
            apppppppuStack_d8[0] = pppppppuVar6;
            FUN_102b4eedc(0);
            pppppppuVar13 = apppppppuStack_d8;
            func_0x000107c6147c(&pppppuStack_c0,pppppppuVar13,PTR___syXlN_11034f1a0 + 8,uVar5,7);
          }
        }
        func_0x000107c61574(pppppppuVar21);
        pppppuVar25 = pppppuStack_c0;
        if (pppppuStack_c0 == (undefined8 *****)0x0) {
          pppppppuVar18 = (undefined8 *******)((long)pppppppuVar18 + 1);
          if (pppppppuVar26 == pppppppuVar29) break;
          goto LAB_102b50eb0;
        }
        ppppuVar16 = ppppuStack_108;
        func_0x000107c61550();
        if ((((int)ppppuVar16 == 0) || ((long)ppppuStack_108 < 0)) ||
           (ppppuVar16 = ppppuStack_108, ((ulong)ppppuStack_108 >> 0x3e & 1) != 0)) {
          if ((ulong)ppppuStack_108 >> 0x3e == 0) {
            ppppuVar16 = *(undefined8 *****)(((ulong)ppppuStack_108 & 0xffffffffffffff8) + 0x10);
          }
          else {
            ppppuVar16 = (undefined8 ****)((ulong)ppppuStack_108 & 0xffffffffffffff8);
            if ((undefined8 ****)0x7fffffffffffffff < ppppuStack_108) {
              ppppuVar16 = ppppuStack_108;
            }
            func_0x000107c60480();
          }
          pppppppuVar13 = (undefined8 *******)((long)ppppuVar16 + 1);
          ppppuVar16 = (undefined8 ****)0x0;
          FUN_102b51c8c(0,pppppppuVar13,1,ppppuStack_108,FUN_102b4cd4c,FUN_102b4eedc);
        }
        uVar14 = (ulong)ppppuVar16 & 0xffffffffffffff8;
        uVar3 = *(ulong *)(uVar14 + 0x10);
        pppppppuVar18 = (undefined8 *******)(uVar3 + 1);
        ppppuStack_108 = ppppuVar16;
        if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar3) {
          ppppuStack_108 = (undefined8 ****)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
          pppppppuVar13 = pppppppuVar18;
          FUN_102b51c8c(ppppuStack_108,pppppppuVar18,1,ppppuVar16,FUN_102b4cd4c,FUN_102b4eedc);
          uVar14 = (ulong)ppppuStack_108 & 0xffffffffffffff8;
        }
        *(undefined8 ********)(uVar14 + 0x10) = pppppppuVar18;
        *(undefined8 ******)(uVar14 + uVar3 * 8 + 0x20) = pppppuVar25;
        pppppppuVar18 = pppppppuVar26;
      } while (pppppppuVar26 != pppppppuVar29);
    }
    ppppuVar16 = (undefined8 ****)((ulong)ppppuStack_108 & 0xffffffffffffff8);
    if ((ulong)ppppuStack_108 >> 0x3e == 0) {
      ppppuVar30 = (undefined8 ****)ppppuVar16[2];
      pppppuVar25 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      ppppuVar30 = ppppuVar16;
      if ((undefined8 ****)0x7fffffffffffffff < ppppuStack_108) {
        ppppuVar30 = ppppuStack_108;
      }
      func_0x000107c60480();
      pppppuVar25 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)pppppuVar25;
    if (ppppuVar30 != (undefined8 ****)0x0) {
      ppppuVar9 = (undefined8 ****)0x0;
      do {
        while( true ) {
          if (((ulong)ppppuStack_108 & 0xc000000000000001) == 0) {
            if (ppppuVar16[2] <= ppppuVar9) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102b511ac);
              (*pcVar4)();
            }
            ppppuVar7 = (undefined8 ****)ppppuStack_108[(long)((long)ppppuVar9 + 4)];
            func_0x000107c61174();
          }
          else {
            ppppuVar7 = ppppuVar9;
            func_0x000102b4baa0(ppppuVar9,ppppuStack_108);
          }
          ppppuVar1 = (undefined8 ****)((long)ppppuVar9 + 1);
          if (SCARRY8((long)ppppuVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b511a8);
            (*pcVar4)();
          }
          ppppuVar8 = ppppuVar7;
          func_0x000107c49eac();
          if (((ulong)ppppuVar8 & 1) == 0) break;
          pppppuVar19 = pppppuVar25;
          func_0x000107c61558();
          pppppuStack_c0 = pppppuVar25;
          if (((ulong)pppppuVar19 & 1) == 0) {
            func_0x000102b4ca5c(0,(long)pppppuVar25[2] + 1,1);
          }
          ppppuVar9 = pppppuStack_c0[2];
          if ((undefined8 ****)((ulong)pppppuStack_c0[3] >> 1) <= ppppuVar9) {
            func_0x000102b4ca5c((undefined8 ****)0x1 < pppppuStack_c0[3],
                                (undefined8 ****)((long)ppppuVar9 + 1U),1);
          }
          pppppuStack_c0[2] = (undefined8 ****)((long)ppppuVar9 + 1U);
          pppppuStack_c0[(long)ppppuVar9 + 4] = ppppuVar7;
          pppppuVar25 = pppppuStack_c0;
          ppppuVar9 = ppppuVar1;
          if (ppppuVar1 == ppppuVar30) goto LAB_102b511e0;
        }
        func_0x000107c61170(ppppuVar7);
        ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
      } while (ppppuVar1 != ppppuVar30);
    }
LAB_102b511e0:
    func_0x000107c6142c(ppppuStack_108);
    if (pppppuVar20 != (undefined8 *****)0x0) goto LAB_102b511f0;
  }
  else {
    pppppppuVar22 = (undefined8 *******)((ulong)param_1 & 0xffffffffffffff8);
    if ((ulong)param_1 >> 0x3e == 0) {
      pppppppuVar29 = (undefined8 *******)pppppppuVar22[2];
    }
    else {
      pppppppuVar29 = param_1;
      if (-1 < (long)param_1) {
        pppppppuVar29 = pppppppuVar22;
      }
      func_0x000107c60480();
    }
    lVar27 = _DAT_112ef65b8;
    pppppppuVar13 = appppppuStack_f8;
    func_0x000107c61428(unaff_x20 + _DAT_112ef65b8,pppppppuVar13,0,0);
    if (pppppppuVar29 == (undefined8 *******)0x0) {
      ppppuStack_108 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      ppppuStack_108 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
      pppppppuVar18 = (undefined8 *******)0x0;
LAB_102b50af8:
      do {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (pppppppuVar22[2] <= pppppppuVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b50e18);
            (*pcVar4)();
          }
          pppppppuVar21 = (undefined8 *******)param_1[(long)((long)pppppppuVar18 + 4)];
          func_0x000107c6157c(pppppppuVar21);
        }
        else {
          pppppppuVar21 = pppppppuVar18;
          pppppppuVar13 = param_1;
          func_0x000102b4bc3c();
        }
        if (SCARRY8((long)pppppppuVar18,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b50e14);
          (*pcVar4)();
        }
        pppppppuVar26 = (undefined8 *******)((long)pppppppuVar18 + 1);
        pppppppuVar17 = *(undefined8 ********)(unaff_x20 + lVar27);
        if (((ulong)pppppppuVar17 & 0xc000000000000001) == 0) {
          if ((pppppppuVar17[2] == (undefined8 ******)0x0) ||
             (pppppppuVar6 = pppppppuVar21, FUN_102b52000(), ((ulong)pppppppuVar13 & 1) == 0))
          goto LAB_102b50bc4;
          pppppuStack_c0 = pppppppuVar17[7][(long)pppppppuVar6];
          func_0x000107c61174();
        }
        else {
          pppppppuVar13 = (undefined8 *******)0x0;
          if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar17) {
            pppppppuVar13 = pppppppuVar17;
          }
          func_0x000107c61434(pppppppuVar17);
          pppppppuVar6 = pppppppuVar21;
          func_0x000107c6157c();
          func_0x000107c6043c();
          func_0x000107c61574(pppppppuVar21);
          func_0x000107c6142c(pppppppuVar17);
          if (pppppppuVar6 == (undefined8 *******)0x0) {
LAB_102b50bc4:
            pppppuStack_c0 = (undefined8 *****)0x0;
          }
          else {
            uVar5 = 0;
            apppppppuStack_90[0] = pppppppuVar6;
            FUN_102b4eedc(0);
            pppppppuVar13 = apppppppuStack_90;
            func_0x000107c6147c(&pppppuStack_c0,pppppppuVar13,PTR___syXlN_11034f1a0 + 8,uVar5,7);
          }
        }
        func_0x000107c61574(pppppppuVar21);
        pppppuVar20 = pppppuStack_c0;
        if (pppppuStack_c0 == (undefined8 *****)0x0) {
          pppppppuVar18 = (undefined8 *******)((long)pppppppuVar18 + 1);
          if (pppppppuVar26 == pppppppuVar29) break;
          goto LAB_102b50af8;
        }
        ppppuVar16 = ppppuStack_108;
        func_0x000107c61550();
        if ((((int)ppppuVar16 == 0) || ((long)ppppuStack_108 < 0)) ||
           (ppppuVar16 = ppppuStack_108, ((ulong)ppppuStack_108 >> 0x3e & 1) != 0)) {
          if ((ulong)ppppuStack_108 >> 0x3e == 0) {
            ppppuVar16 = *(undefined8 *****)(((ulong)ppppuStack_108 & 0xffffffffffffff8) + 0x10);
          }
          else {
            ppppuVar16 = (undefined8 ****)((ulong)ppppuStack_108 & 0xffffffffffffff8);
            if ((undefined8 ****)0x7fffffffffffffff < ppppuStack_108) {
              ppppuVar16 = ppppuStack_108;
            }
            func_0x000107c60480();
          }
          pppppppuVar13 = (undefined8 *******)((long)ppppuVar16 + 1);
          ppppuVar16 = (undefined8 ****)0x0;
          FUN_102b51c8c(0,pppppppuVar13,1,ppppuStack_108,FUN_102b4cd4c,FUN_102b4eedc);
        }
        uVar14 = (ulong)ppppuVar16 & 0xffffffffffffff8;
        uVar3 = *(ulong *)(uVar14 + 0x10);
        pppppppuVar18 = (undefined8 *******)(uVar3 + 1);
        ppppuStack_108 = ppppuVar16;
        if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar3) {
          ppppuStack_108 = (undefined8 ****)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
          pppppppuVar13 = pppppppuVar18;
          FUN_102b51c8c(ppppuStack_108,pppppppuVar18,1,ppppuVar16,FUN_102b4cd4c,FUN_102b4eedc);
          uVar14 = (ulong)ppppuStack_108 & 0xffffffffffffff8;
        }
        *(undefined8 ********)(uVar14 + 0x10) = pppppppuVar18;
        *(undefined8 ******)(uVar14 + uVar3 * 8 + 0x20) = pppppuVar20;
        pppppppuVar18 = pppppppuVar26;
      } while (pppppppuVar26 != pppppppuVar29);
    }
    ppppuVar16 = (undefined8 ****)((ulong)ppppuStack_108 & 0xffffffffffffff8);
    if ((ulong)ppppuStack_108 >> 0x3e == 0) {
      ppppuVar30 = (undefined8 ****)ppppuVar16[2];
      pppppuVar20 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      ppppuVar30 = ppppuVar16;
      if ((undefined8 ****)0x7fffffffffffffff < ppppuStack_108) {
        ppppuVar30 = ppppuStack_108;
      }
      func_0x000107c60480();
      pppppuVar20 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)pppppuVar20;
    if (ppppuVar30 != (undefined8 ****)0x0) {
      ppppuVar9 = (undefined8 ****)0x0;
      do {
        while( true ) {
          if (((ulong)ppppuStack_108 & 0xc000000000000001) == 0) {
            if (ppppuVar16[2] <= ppppuVar9) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102b50e20);
              (*pcVar4)();
            }
            ppppuVar7 = (undefined8 ****)ppppuStack_108[(long)((long)ppppuVar9 + 4)];
            func_0x000107c61174();
          }
          else {
            ppppuVar7 = ppppuVar9;
            func_0x000102b4baa0(ppppuVar9,ppppuStack_108);
          }
          ppppuVar1 = (undefined8 ****)((long)ppppuVar9 + 1);
          if (SCARRY8((long)ppppuVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b50e1c);
            (*pcVar4)();
          }
          ppppuVar8 = ppppuVar7;
          func_0x000107c49eac();
          if (((ulong)ppppuVar8 & 1) != 0) break;
          pppppuVar25 = pppppuVar20;
          func_0x000107c61558();
          pppppuStack_c0 = pppppuVar20;
          if (((ulong)pppppuVar25 & 1) == 0) {
            func_0x000102b4ca5c(0,(long)pppppuVar20[2] + 1,1);
          }
          ppppuVar9 = pppppuStack_c0[2];
          if ((undefined8 ****)((ulong)pppppuStack_c0[3] >> 1) <= ppppuVar9) {
            func_0x000102b4ca5c((undefined8 ****)0x1 < pppppuStack_c0[3],
                                (undefined8 ****)((long)ppppuVar9 + 1U),1);
          }
          pppppuStack_c0[2] = (undefined8 ****)((long)ppppuVar9 + 1U);
          pppppuStack_c0[(long)ppppuVar9 + 4] = ppppuVar7;
          ppppuVar9 = ppppuVar1;
          pppppuVar20 = pppppuStack_c0;
          if (ppppuVar1 == ppppuVar30) goto LAB_102b50e54;
        }
        func_0x000107c61170(ppppuVar7);
        ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
      } while (ppppuVar1 != ppppuVar30);
    }
LAB_102b50e54:
    func_0x000107c6142c(ppppuStack_108);
    if (param_2 != (undefined8 *******)0x0) goto LAB_102b50e60;
    pppppuVar25 = (undefined8 *****)0x0;
LAB_102b511f0:
    func_0x000107c61434(pppppuVar20);
    if ((ulong)pppppuVar20 >> 0x3e == 0) {
      pppppuVar19 = *(undefined8 ******)(((ulong)pppppuVar20 & 0xffffffffffffff8) + 0x10);
    }
    else {
      pppppuVar19 = (undefined8 *****)((ulong)pppppuVar20 & 0xffffffffffffff8);
      if ((undefined8 *****)0x7fffffffffffffff < pppppuVar20) {
        pppppuVar19 = pppppuVar20;
      }
      func_0x000107c60480();
    }
    if (pppppuVar19 != (undefined8 *****)0x0) {
      ppppuVar16 = (undefined8 ****)0x0;
      do {
        if (((ulong)pppppuVar20 & 0xc000000000000001) == 0) {
          if (*(undefined8 *****)(((ulong)pppppuVar20 & 0xffffffffffffff8) + 0x10) <= ppppuVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b51298);
            (*pcVar4)();
          }
          ppppuVar30 = pppppuVar20[(long)ppppuVar16 + 4];
          func_0x000107c61174(ppppuVar30);
        }
        else {
          ppppuVar30 = ppppuVar16;
          func_0x000102b4baa0(ppppuVar16,pppppuVar20);
        }
        if (SCARRY8((long)ppppuVar16,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b5128c);
          (*pcVar4)();
        }
        pppppuVar23 = (undefined8 *****)((long)ppppuVar16 + 1);
        ppppuVar9 = ppppuVar30;
        func_0x000107c4aba4();
        func_0x000107c61180();
        func_0x000107c4fe68();
        func_0x000107c61170(ppppuVar30);
        func_0x000107c61170(ppppuVar9);
        ppppuVar16 = (undefined8 ****)((long)ppppuVar16 + 1);
      } while (pppppuVar23 != pppppuVar19);
    }
    func_0x000107c6142c(pppppuVar20);
    if (pppppuVar25 == (undefined8 *****)0x0) goto LAB_102b5137c;
  }
  func_0x000107c61434(pppppuVar25);
  if ((ulong)pppppuVar25 >> 0x3e == 0) {
    pppppuVar19 = *(undefined8 ******)(((ulong)pppppuVar25 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pppppuVar19 = (undefined8 *****)((ulong)pppppuVar25 & 0xffffffffffffff8);
    if ((undefined8 *****)0x7fffffffffffffff < pppppuVar25) {
      pppppuVar19 = pppppuVar25;
    }
    func_0x000107c60480();
  }
  if (pppppuVar19 != (undefined8 *****)0x0) {
    ppppuVar16 = (undefined8 ****)0x0;
    do {
      if (((ulong)pppppuVar25 & 0xc000000000000001) == 0) {
        if (*(undefined8 *****)(((ulong)pppppuVar25 & 0xffffffffffffff8) + 0x10) <= ppppuVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b5135c);
          (*pcVar4)();
        }
        ppppuVar30 = pppppuVar25[(long)ppppuVar16 + 4];
        func_0x000107c61174(ppppuVar30);
      }
      else {
        ppppuVar30 = ppppuVar16;
        func_0x000102b4baa0(ppppuVar16,pppppuVar25);
      }
      if (SCARRY8((long)ppppuVar16,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b51358);
        (*pcVar4)();
      }
      pppppuVar23 = (undefined8 *****)((long)ppppuVar16 + 1);
      ppppuVar9 = ppppuVar30;
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c4fe68();
      func_0x000107c61170(ppppuVar30);
      func_0x000107c61170(ppppuVar9);
      ppppuVar16 = (undefined8 ****)((long)ppppuVar16 + 1);
    } while (pppppuVar23 != pppppuVar19);
  }
  func_0x000107c6142c(pppppuVar25);
LAB_102b5137c:
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 == '\x01') {
    if (pppppuVar20 != (undefined8 *****)0x0) {
      pppppuVar19 = (undefined8 *****)((ulong)pppppuVar20 & 0xffffffffffffff8);
      if ((ulong)pppppuVar20 >> 0x3e == 0) {
        pppppuVar23 = (undefined8 *****)pppppuVar19[2];
      }
      else {
        pppppuVar23 = pppppuVar20;
        if (-1 < (long)pppppuVar20) {
          pppppuVar23 = pppppuVar19;
        }
        func_0x000107c60480();
      }
      if (pppppuVar23 != (undefined8 *****)0x0) {
        ppppuVar16 = (undefined8 ****)0x0;
        do {
          if (((ulong)pppppuVar20 & 0xc000000000000001) == 0) {
            if (pppppuVar19[2] <= ppppuVar16) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102b515f4);
              (*pcVar4)();
            }
            ppppuVar30 = pppppuVar20[(long)ppppuVar16 + 4];
            func_0x000107c61174(ppppuVar30);
          }
          else {
            ppppuVar30 = ppppuVar16;
            func_0x000102b4baa0(ppppuVar16,pppppuVar20);
          }
          if (SCARRY8((long)ppppuVar16,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b51418);
            (*pcVar4)();
          }
          pppppuVar24 = (undefined8 *****)((long)ppppuVar16 + 1);
          func_0x000107c550d8();
          func_0x000107c526c0(0,ppppuVar30);
          func_0x000107c61170(ppppuVar30);
          ppppuVar16 = (undefined8 ****)((long)ppppuVar16 + 1);
        } while (pppppuVar24 != pppppuVar23);
      }
      func_0x000107c6142c(pppppuVar20);
    }
    if (pppppuVar25 != (undefined8 *****)0x0) {
      pppppuVar20 = (undefined8 *****)((ulong)pppppuVar25 & 0xffffffffffffff8);
      if ((ulong)pppppuVar25 >> 0x3e == 0) {
        pppppuVar19 = (undefined8 *****)pppppuVar20[2];
      }
      else {
        pppppuVar19 = pppppuVar25;
        if (-1 < (long)pppppuVar25) {
          pppppuVar19 = pppppuVar20;
        }
        func_0x000107c60480();
      }
      if (pppppuVar19 != (undefined8 *****)0x0) {
        ppppuVar16 = (undefined8 ****)0x0;
        do {
          if (((ulong)pppppuVar25 & 0xc000000000000001) == 0) {
            if (pppppuVar20[2] <= ppppuVar16) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102b516a0);
              (*pcVar4)();
            }
            ppppuVar30 = pppppuVar25[(long)ppppuVar16 + 4];
            func_0x000107c61174(ppppuVar30);
          }
          else {
            ppppuVar30 = ppppuVar16;
            func_0x000102b4baa0(ppppuVar16,pppppuVar25);
          }
          if (SCARRY8((long)ppppuVar16,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b5169c);
            (*pcVar4)();
          }
          pppppuVar23 = (undefined8 *****)((long)ppppuVar16 + 1);
          func_0x000107c550d8();
          func_0x000107c526c0(0x3ff0000000000000,ppppuVar30);
          func_0x000107c61170(ppppuVar30);
          ppppuVar16 = (undefined8 ****)((long)ppppuVar16 + 1);
        } while (pppppuVar23 != pppppuVar19);
      }
      func_0x000107c6142c(pppppuVar25);
    }
    lVar27 = _DAT_112ef65b8;
    func_0x000107c61428(unaff_x20 + _DAT_112ef65b8,apppppppuStack_d8,0,0);
    pppppuVar20 = *(undefined8 ******)(unaff_x20 + lVar27);
    if (((ulong)pppppuVar20 & 0xc000000000000001) == 0) {
      uVar14 = -1L << ((ulong)*(byte *)(pppppuVar20 + 4) & 0x3f);
      uVar15 = ~uVar14;
      pppppuVar25 = pppppuVar20 + 8;
      uVar14 = -uVar14;
      uVar3 = 0xffffffffffffffff;
      if (uVar14 < 0x40) {
        uVar3 = ~(-1L << (uVar14 & 0x3f));
      }
      ppppuVar16 = (undefined8 ****)(uVar3 & (ulong)*pppppuVar25);
      pppppuVar19 = pppppuVar20;
    }
    else {
      pppppuVar19 = (undefined8 *****)((ulong)pppppuVar20 & 0xffffffffffffff8);
      if ((undefined8 *****)0x7fffffffffffffff < pppppuVar20) {
        pppppuVar19 = pppppuVar20;
      }
      func_0x000107c60418();
      pppppuVar25 = (undefined8 *****)0x0;
      uVar15 = 0;
      ppppuVar16 = (undefined8 ****)0x0;
      pppppuVar19 = (undefined8 *****)((ulong)pppppuVar19 | 0x8000000000000000);
    }
    pppppppuVar22 = (undefined8 *******)0x2;
    pppppuVar23 = pppppuVar20;
    func_0x000107c61438();
    lVar27 = 0;
    do {
      ppppuVar30 = ppppuVar16;
      lVar28 = lVar27;
      lVar27 = lVar28;
      ppppuVar16 = ppppuVar30;
      if ((long)pppppuVar19 < 0) {
        func_0x000107c60444();
        if (pppppuVar23 == (undefined8 *****)0x0) {
LAB_102b51834:
          pppppuStack_c0 = (undefined8 *****)0x0;
        }
        else {
          func_0x000107c615e8();
          uVar5 = 0;
          pppppppuStack_e0 = pppppppuVar22;
          FUN_102b4eedc(0);
          pppppppuVar22 = &pppppppuStack_e0;
          func_0x000107c6147c(&pppppuStack_c0,pppppppuVar22,PTR___syXlN_11034f1a0 + 8,uVar5,7);
          pppppuVar23 = pppppuStack_c0;
          if (pppppuStack_c0 != (undefined8 *****)0x0) goto LAB_102b51788;
        }
LAB_102b51838:
        func_0x000107c6142c(pppppuVar20);
        FUN_102b520ac(pppppuVar19,pppppuVar25,uVar15,lVar28,ppppuVar30);
        if ((*(byte *)(unaff_x20 + _DAT_112ef65d0) & 1) == 0) goto LAB_102b5191c;
        *(undefined1 *)(unaff_x20 + _DAT_112ef65d0) = 0;
        uVar5 = 0;
        goto LAB_102b51878;
      }
      while (ppppuVar16 == (undefined8 ****)0x0) {
        lVar2 = lVar27 + 1;
        if (SCARRY8(lVar27,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b519a4);
          (*pcVar4)();
        }
        if ((long)(uVar15 + 0x40 >> 6) <= lVar2) {
          ppppuVar30 = (undefined8 ****)0x0;
          goto LAB_102b51834;
        }
        lVar27 = lVar2;
        ppppuVar16 = pppppuVar25[lVar2];
      }
      uVar3 = ((ulong)ppppuVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 |
              ((ulong)ppppuVar16 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      pppppuVar23 = (undefined8 *****)
                    pppppuVar19[7][LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) + lVar27 * 0x40];
      pppppuStack_c0 = pppppuVar23;
      func_0x000107c61174(pppppuVar23);
      ppppuVar16 = (undefined8 ****)((long)ppppuVar16 - 1U & (ulong)ppppuVar16);
      if (pppppuVar23 == (undefined8 *****)0x0) goto LAB_102b51838;
LAB_102b51788:
      pppppuVar24 = pppppuVar23;
      func_0x000107c49eac();
      func_0x000107c61170();
    } while (((ulong)pppppuVar24 & 1) != 0);
    func_0x000107c6142c(pppppuVar20);
    FUN_102b520ac(pppppuVar19,pppppuVar25,uVar15,lVar28,ppppuVar30);
    if ((*(byte *)(unaff_x20 + _DAT_112ef65d0) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112ef65d0) = 1;
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef65c0 + 0x60);
LAB_102b51878:
      puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar12 = &UNK_1105a0f58;
      func_0x000107c613fc(&UNK_1105a0f58,0x18,7);
      func_0x000107c61614(puVar12 + 0x10,unaff_x20);
      pcStack_a0 = (code *)0x102b52758;
      pppppuStack_c0 = (undefined8 *****)PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1105a1038;
      pppppuVar20 = &pppppuStack_c0;
      puStack_98 = puVar12;
      func_0x000107c60bc4(pppppuVar20);
      func_0x000107c61574(puStack_98);
      func_0x000107c3dcd4(uVar5,0,puVar11);
      func_0x000107c60bd0(pppppuVar20);
    }
LAB_102b5191c:
    if (param_5 != (code *)0x0) {
      (*param_5)();
    }
  }
  else {
    if ((*(byte *)(unaff_x20 + _DAT_112ef65d0) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112ef65d0) = 1;
      puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar11 = &UNK_1105a0f58;
      func_0x000107c613fc(&UNK_1105a0f58,0x18,7);
      func_0x000107c61614(puVar11 + 0x10,unaff_x20);
      pcStack_a0 = FUN_102b52058;
      pppppuStack_c0 = (undefined8 *****)puVar12;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1105a0f70;
      pppppuVar19 = &pppppuStack_c0;
      puStack_98 = puVar11;
      func_0x000107c60bc4(pppppuVar19);
      func_0x000107c61574(puStack_98);
      func_0x000107c3dcd4(0,0,puVar10);
      func_0x000107c60bd0(pppppuVar19);
    }
    puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar11 = &UNK_1105a0fa8;
    func_0x000107c613fc(&UNK_1105a0fa8,0x20,7);
    *(undefined8 ******)(puVar11 + 0x10) = pppppuVar20;
    *(undefined8 ******)(puVar11 + 0x18) = pppppuVar25;
    pcStack_a0 = (code *)0x102b5207c;
    pppppuStack_c0 = (undefined8 *****)puVar12;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_1105a0fc0;
    pppppuVar19 = &pppppuStack_c0;
    puStack_98 = puVar11;
    func_0x000107c60bc4(pppppuVar19);
    puVar11 = puStack_98;
    func_0x000107c61434(pppppuVar25);
    func_0x000107c61434(pppppuVar20);
    func_0x000107c61574(puVar11);
    puVar11 = &UNK_1105a0ff8;
    func_0x000107c613fc(&UNK_1105a0ff8,0x20,7);
    *(code **)(puVar11 + 0x10) = param_5;
    *(undefined8 *)(puVar11 + 0x18) = param_6;
    pcStack_a0 = FUN_102b52084;
    pppppuStack_c0 = (undefined8 *****)puVar12;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100288f10;
    puStack_a8 = &UNK_1105a1010;
    pppppuVar23 = &pppppuStack_c0;
    puStack_98 = puVar11;
    func_0x000107c60bc4(pppppuVar23);
    puVar12 = puStack_98;
    func_0x000100b64c10(param_5,param_6);
    func_0x000107c61574(puVar12);
    func_0x000107c3dcd4(param_3,0,puVar10);
    func_0x000107c60bd0(pppppuVar23);
    func_0x000107c60bd0(pppppuVar19);
    func_0x000107c6142c(pppppuVar20);
    func_0x000107c6142c(pppppuVar25);
  }
  return;
}



/* Entry: 102b519a4; end: 102b519ff; -[_TtC17LensActionBarImpl17LensActionBarView initWithFrame:] */

void FUN_102b519a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensActionBarImpl.LensActionBarView",0x23,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b519d0);
  (*pcVar1)();
}



/* Entry: 102b51a00; end: 102b51a47; -[_TtC17LensActionBarImpl17LensActionBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b51a00(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ef65b8));
  func_0x000102b4d844(param_1 + _DAT_112ef65c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef65d8));
  return;
}



/* Entry: 102b51a48; end: 102b51a67;  */

void FUN_102b51a48(void)

{
  func_0x000107c61168(&PTR_PTR_11288d428);
  return;
}



/* Entry: 102b51a68; end: 102b51af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b51a68(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(char *)(param_1 + _DAT_112ef65d0) == '\x01') {
      uVar1 = 0x3ff0000000000000;
      if ((*(byte *)(param_1 + _DAT_112ef65c8) & 1) == 0) {
        uVar1 = *(undefined8 *)(param_1 + _DAT_112ef65c0 + 0x98);
      }
    }
    func_0x000107c526c0(uVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b51af8; end: 102b51c77;  */

void FUN_102b51af8(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 != 0) {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar3 = param_1;
      if (-1 < (long)param_1) {
        uVar3 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar5 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b51ba8);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(param_1 + uVar4 * 8 + 0x20);
          func_0x000107c61174(uVar2);
        }
        else {
          uVar2 = uVar4;
          func_0x000102b4baa0(uVar4,param_1);
        }
        if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b51ba4);
          (*pcVar1)();
        }
        uVar6 = uVar4 + 1;
        func_0x000107c526c0(0);
        func_0x000107c550d8(uVar2);
        func_0x000107c61170(uVar2);
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar3);
    }
  }
  if (param_2 != 0) {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (param_2 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar3 = param_2;
      if (-1 < (long)param_2) {
        uVar3 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar5 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b51c4c);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(param_2 + uVar4 * 8 + 0x20);
          func_0x000107c61174(uVar2);
        }
        else {
          uVar2 = uVar4;
          func_0x000102b4baa0(uVar4,param_2);
        }
        if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b51c48);
          (*pcVar1)();
        }
        uVar6 = uVar4 + 1;
        func_0x000107c526c0(0x3ff0000000000000);
        func_0x000107c550d8(uVar2);
        func_0x000107c61170(uVar2);
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar3);
    }
  }
  return;
}



/* Entry: 102b51c78; end: 102b51c8b;  */

ulong FUN_102b51c78(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b51dc8);
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
  (*(code *)0x102b4cd68)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b51dc4);
      (*pcVar1)();
    }
    FUN_102b51ef8(0,uVar2,uVar3 + 0x20,param_4,FUN_102b4fb8c);
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



/* Entry: 102b51c8c; end: 102b51dc7;  */

ulong FUN_102b51c8c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   undefined8 param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b51dc8);
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
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b51dc4);
      (*pcVar1)();
    }
    FUN_102b51ef8(0,uVar2,uVar3 + 0x20,param_4,param_6);
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



/* Entry: 102b51dc8; end: 102b51ef7;  */

undefined * FUN_102b51dc8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b51ef8);
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
    puVar3 = (undefined *)0x112ef6608;
    func_0x0001000285a8(0x112ef6608,&UNK_10db24c08);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ef6610;
    func_0x0001000285a8(0x112ef6610,&UNK_10db24c10);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102b51ef8; end: 102b51fff;  */

long FUN_102b51ef8(long param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b51ffc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b52000);
        (*pcVar3)();
      }
      uVar4 = 0;
      (*param_5)(0);
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
      (*param_5)(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b51ff8);
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



/* Entry: 102b52000; end: 102b52057;  */

void FUN_102b52000(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 102b52058; end: 102b52083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b52058(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    if (*(char *)(lVar1 + _DAT_112ef65d0) == '\x01') {
      uVar2 = 0x3ff0000000000000;
      if ((*(byte *)(lVar1 + _DAT_112ef65c8) & 1) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + _DAT_112ef65c0 + 0x98);
      }
    }
    func_0x000107c526c0(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b52084; end: 102b520ab;  */

void FUN_102b52084(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 102b520ac; end: 102b52117;  */

void FUN_102b520ac(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102b52118; end: 102b5234f;  */

undefined * FUN_102b52118(undefined *param_1,undefined **param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *apuStack_c0 [9];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  if (param_2 == (undefined **)0x0) {
    func_0x000107c615e8();
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    func_0x0001000285a8(0x112ef6618,&UNK_10db24c18);
    puVar5 = param_1;
    func_0x000107c60494();
    puStack_68 = puVar5;
    func_0x000107c60418();
    puVar6 = param_1;
    func_0x000107c60444();
    if (puVar6 != (undefined *)0x0) {
      uVar7 = 0;
      FUN_102b4fb8c(0);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        apuStack_c0[0] = puVar6;
        func_0x000107c6147c(&puStack_70,apuStack_c0,puVar2 + 8,uVar7,7);
        uVar8 = 0;
        apuStack_c0[0] = (undefined *)param_2;
        FUN_102b4eedc(0);
        param_2 = apuStack_c0;
        func_0x000107c6147c(&uStack_78,apuStack_c0,puVar2 + 8,uVar8,7);
        puVar3 = puStack_70;
        uVar8 = uStack_78;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          param_2 = (undefined **)0x1;
          FUN_102b524b4(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        func_0x000107c6068c(apuStack_c0,*(undefined8 *)(puVar5 + 0x28));
        puVar6 = puVar3;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar11 = (ulong)puVar6 & (uVar12 ^ 0xffffffffffffffff);
        uVar9 = uVar11 >> 6;
        uVar10 = -1L << (uVar11 & 0x3f) &
                 (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar1 = false;
          uVar10 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar9 + 1;
            if ((uVar11 == uVar10) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102b52350);
              (*pcVar4)();
            }
            uVar9 = 0;
            if (uVar11 != uVar10) {
              uVar9 = uVar11;
            }
            bVar1 = (bool)(uVar11 == uVar10 | bVar1);
          } while (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
          uVar10 = ~*(ulong *)(puVar5 + uVar9 * 8 + 0x40);
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar9 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar9 + 0x40) =
             1L << (uVar10 & 0x3f) | *(ulong *)(puVar5 + uVar9 + 0x40);
        *(undefined **)(*(long *)(puVar5 + 0x30) + uVar10 * 8) = puVar3;
        *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = uVar8;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        func_0x000107c60444();
      } while (puVar6 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar5;
}



/* Entry: 102b52350; end: 102b524b3;  */

void FUN_102b52350(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112ef6618,&UNK_10db24c18);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_102b5242c;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) = uVar9;
        func_0x000107c6157c();
        func_0x000107c61174(uVar9);
        if (uVar5 != 0) break;
LAB_102b5242c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102b524b4);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_102b5248c;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_102b5248c:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102b524b4; end: 102b5273f;  */

void FUN_102b524b4(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x112ef6618;
  func_0x0001000285a8(0x112ef6618,&UNK_10db24c18);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar14);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_102b5270c:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b5273c);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_102b5270c;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c6157c(uVar15);
      func_0x000107c61174(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b52740);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 102b52740; end: 102b5275b;  */

void FUN_102b52740(long param_1,long param_2)

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



/* Entry: 102b5275c; end: 102b527c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5275c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001005c5e60();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ef6628) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102b527c4; end: 102b5280f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b527c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef6628) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b52810; end: 102b528cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b52810(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *apuStack_58 [2];
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126abdf8;
  func_0x000107c610f8();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c47198();
  func_0x000107c61170(puVar2);
  apuStack_58[0] = puVar1;
  func_0x00010008a7c8(&uStack_48,apuStack_58);
  func_0x000100083b20(apuStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c615e8(apuStack_58[0]);
  return puVar1;
}



/* Entry: 102b528cc; end: 102b529bf; -[_TtC24SCLensAutoCopyScopeProxy27SCLensAutoCopyScopeServices buildWithLens:deepLink:lensAutoCopySource:delegate:] */

void FUN_102b528cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_102b52810(param_3,puVar3,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102b529c0; end: 102b529f3;  */

void FUN_102b529c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b529f4; end: 102b52a37; -[_TtC24SCLensAutoCopyScopeProxy27SCLensAutoCopyScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b529f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef6628));
  return;
}



/* Entry: 102b52a38; end: 102b52ae3;  */

void FUN_102b52a38(void)

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



/* Entry: 102b52ae4; end: 102b52b07;  */

void FUN_102b52ae4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 102b52b08; end: 102b52b6f;  */

undefined8 FUN_102b52b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_102b54a64(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 102b52b70; end: 102b53203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b52b70(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  long unaff_x20;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_70;
  
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112ef6670) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef6678);
  func_0x000100b6250c(&uStack_100);
  puVar1[1] = uStack_f8;
  *puVar1 = uStack_100;
  puVar1[3] = uStack_e8;
  puVar1[2] = uStack_f0;
  puVar1[9] = uStack_b8;
  puVar1[8] = uStack_c0;
  puVar1[0xb] = uStack_a8;
  puVar1[10] = uStack_b0;
  puVar1[5] = uStack_d8;
  puVar1[4] = uStack_e0;
  puVar1[7] = uStack_c8;
  puVar1[6] = uStack_d0;
  puVar1[0x12] = uStack_70;
  puVar1[0xf] = uStack_88;
  puVar1[0xe] = uStack_90;
  puVar1[0x11] = uStack_78;
  puVar1[0x10] = uStack_80;
  puVar1[0xd] = uStack_98;
  puVar1[0xc] = uStack_a0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6680) = 3;
  lVar2 = unaff_x20 + _DAT_112ef6688;
  func_0x000107c61614(lVar2,0);
  lVar4 = _DAT_112ef6690;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6690) = 0;
  lVar5 = _DAT_112ef6698;
  puVar23 = &UNK_10db24d10;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar5) = puVar23;
  lVar5 = _DAT_112ef66a0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66a0) = 0;
  lVar6 = _DAT_112ef66a8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66a8) = 0;
  lVar7 = _DAT_112ef66b0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66b0) = 0;
  lVar8 = _DAT_112ef66b8;
  uVar24 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar8) = uVar24;
  lVar8 = _DAT_112ef66c0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66c0) = 0;
  lVar9 = _DAT_112ef66c8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66c8) = 0;
  lVar10 = _DAT_112ef66d0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66d0) = 0;
  lVar11 = _DAT_112ef66d8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66d8) = 0;
  lVar12 = _DAT_112ef66e0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66e0) = 0;
  lVar13 = _DAT_112ef66e8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66e8) = 0;
  lVar14 = _DAT_112ef66f0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66f0) = 0;
  lVar15 = _DAT_112ef66f8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66f8) = 0;
  lVar16 = _DAT_112ef6700;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6700) = 0;
  lVar17 = _DAT_112ef6708;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6708) = 0;
  lVar18 = _DAT_112ef6710;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6710) = 0;
  lVar19 = _DAT_112ef6718;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6718) = 0;
  lVar20 = _DAT_112ef6720;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6720) = 0;
  lVar21 = _DAT_112ef6728;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6728) = 0;
  lVar22 = _DAT_112ef6730;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6730) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6738) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6740) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6748) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6750) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6758) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6760) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6768) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6770) = 0;
  lVar25 = param_1;
  func_0x000107c5de8c();
  func_0x000107c61180();
  lVar26 = lVar25;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar25);
  if (lVar26 != 0) {
    lVar25 = lVar26;
    func_0x000107c5de90();
    func_0x000107c61180();
    func_0x000107c615e8(lVar26);
    lVar26 = lVar25;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar25);
  }
  uVar24 = *(undefined8 *)(unaff_x20 + lVar4);
  *(long *)(unaff_x20 + lVar4) = lVar26;
  func_0x000107c61170(uVar24);
  func_0x000107c61604(lVar2,param_1);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar5);
  *(undefined8 *)(unaff_x20 + lVar5) = param_10;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 *)(unaff_x20 + lVar6) = param_13;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar7);
  *(undefined8 *)(unaff_x20 + lVar7) = param_14;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar8);
  *(undefined8 *)(unaff_x20 + lVar8) = param_11;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar9);
  *(undefined8 *)(unaff_x20 + lVar9) = param_6;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar10);
  *(undefined8 *)(unaff_x20 + lVar10) = param_7;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar11);
  *(undefined8 *)(unaff_x20 + lVar11) = param_5;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar12);
  *(undefined8 *)(unaff_x20 + lVar12) = param_8;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar13);
  *(undefined8 *)(unaff_x20 + lVar13) = param_12;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar14);
  *(undefined8 *)(unaff_x20 + lVar14) = param_4;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar15);
  *(undefined8 *)(unaff_x20 + lVar15) = param_9;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar16);
  *(undefined8 *)(unaff_x20 + lVar16) = param_15;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar17);
  *(undefined8 *)(unaff_x20 + lVar17) = param_16;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar18);
  *(undefined8 *)(unaff_x20 + lVar18) = param_17;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar19);
  *(undefined8 *)(unaff_x20 + lVar19) = param_18;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar20);
  *(undefined8 *)(unaff_x20 + lVar20) = param_19;
  func_0x000107c61174();
  func_0x000107c61170(uVar24);
  uVar24 = param_2;
  func_0x000107c4ac68();
  func_0x000107c61180();
  uVar28 = *(undefined8 *)(unaff_x20 + lVar21);
  *(undefined8 *)(unaff_x20 + lVar21) = uVar24;
  func_0x000107c61170(uVar28);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar22);
  *(undefined8 *)(unaff_x20 + lVar22) = *(undefined8 *)(param_3 + _DAT_1130813f0);
  func_0x000107c6157c();
  func_0x000107c61574(uVar24);
  puVar27 = auStack_110;
  func_0x000107c61154(puVar27,PTR_s_init_1125d9248);
  lVar2 = _DAT_112ef6680;
  bVar3 = puVar27[_DAT_112ef6680];
  if (bVar3 - 3 < 2) {
    func_0x000107c61174();
  }
  else {
    func_0x000107c61174();
    if (bVar3 == 0) goto LAB_102b53140;
  }
  puVar27[lVar2] = 0;
  func_0x000100b62548();
LAB_102b53140:
  func_0x000107c61170(puVar27);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_10);
  func_0x000107c615e8(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_11);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_12);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_3);
  return puVar27;
}



/* Entry: 102b53204; end: 102b532bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b53204(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((*(char *)(param_2 + _DAT_112ef6680) == '\x01') &&
       (lVar2 = *(long *)(param_2 + _DAT_112ef66f8), lVar2 != 0)) {
      func_0x000107c61174();
      lVar1 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c3d064();
        func_0x000107c615e8(lVar1);
      }
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}


