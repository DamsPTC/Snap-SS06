/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a50bdc; end: 101a50c0f;  */

void FUN_101a50bdc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101a50c10; end: 101a50f97;  */

void FUN_101a50c10(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *param_1;
  uVar14 = param_1[1];
  uVar9 = (uint)(uVar14 >> 0x20);
  uVar13 = uVar9 >> 0x1e;
  uVar2 = (undefined1)((ulong)lVar1 >> 8);
  uVar3 = (undefined1)((ulong)lVar1 >> 0x10);
  uVar4 = (undefined1)((ulong)lVar1 >> 0x18);
  uVar5 = (undefined1)((ulong)lVar1 >> 0x20);
  uVar6 = (undefined1)((ulong)lVar1 >> 0x28);
  uVar7 = (undefined1)((ulong)lVar1 >> 0x30);
  uVar8 = (undefined1)((ulong)lVar1 >> 0x38);
  if (uVar9 >> 0x1e < 2) {
    if (uVar13 == 0) {
      func_0x00010006c090(lVar1,uVar14);
      uStack_70 = (undefined1)uVar14;
      uStack_6f = (undefined1)(uVar14 >> 8);
      uStack_6e = (undefined1)(uVar14 >> 0x10);
      uStack_6d = (undefined1)(uVar14 >> 0x18);
      uStack_6c = (undefined1)(uVar14 >> 0x20);
      uStack_6b = (undefined1)(uVar14 >> 0x28);
      uStack_6a = (undefined1)(uVar14 >> 0x30);
      uStack_78 = (char)lVar1;
      uStack_77 = uVar2;
      uStack_76 = uVar3;
      uStack_75 = uVar4;
      uStack_74 = uVar5;
      uStack_73 = uVar6;
      uStack_72 = uVar7;
      uStack_71 = uVar8;
      func_0x000107c60b70(*(undefined8 *)PTR__kSecRandomDefault_110347808,param_2,&uStack_78);
      *param_1 = CONCAT17(uStack_71,
                          CONCAT16(uStack_72,
                                   CONCAT15(uStack_73,
                                            CONCAT14(uStack_74,
                                                     CONCAT13(uStack_75,
                                                              CONCAT12(uStack_76,
                                                                       CONCAT11(uStack_77,uStack_78)
                                                                      ))))));
      param_1[1] = (ulong)CONCAT16(uStack_6a,
                                   CONCAT15(uStack_6b,
                                            CONCAT14(uStack_6c,
                                                     CONCAT13(uStack_6d,
                                                              CONCAT12(uStack_6e,
                                                                       CONCAT11(uStack_6f,uStack_70)
                                                                      )))));
      goto LAB_101a50e68;
    }
    uVar16 = uVar14 & 0x3fffffffffffffff;
    func_0x000107c6157c(uVar16);
    func_0x00010006c090(lVar1,uVar14);
    param_1[1] = -0x4000000000000000;
    *param_1 = 0;
    func_0x00010006c090(0,0xc000000000000000);
    uVar15 = uVar16;
    func_0x000107c61558();
    lVar17 = (long)(int)lVar1;
    lVar18 = lVar1 >> 0x20;
    uVar14 = uVar16;
    if ((uVar15 & 1) == 0) {
      if (lVar18 < lVar17) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101a50f88);
        (*pcVar10)();
      }
      func_0x000107c6157c();
      func_0x000107c5ec30();
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        uVar15 = uVar14;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar17,uVar15)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101a50f8c);
          (*pcVar10)();
        }
        uVar14 = (lVar17 - uVar15) + uVar14;
      }
      uVar12 = 0;
      func_0x000107c5ec40();
      func_0x000107c613fc();
      func_0x000107c5ec28(uVar14,lVar18 - lVar17,1,0,0,lVar17,uVar12);
      func_0x000107c61578(uVar16,2);
    }
    if (lVar18 < lVar17) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x101a50f80);
      (*pcVar10)();
    }
    uVar15 = uVar14;
    func_0x000107c6157c();
    func_0x000107c5ec30();
    if (uVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x101a50f98);
      (*pcVar10)();
    }
    uVar16 = uVar15;
    func_0x000107c5ec3c();
    if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x101a50f84);
      (*pcVar10)();
    }
    func_0x000107c5ec38();
    func_0x000107c60b70(*(undefined8 *)PTR__kSecRandomDefault_110347808,param_2,
                        uVar15 + (lVar17 - uVar16));
    func_0x000107c61574(uVar14);
    *param_1 = lVar1;
    param_1[1] = uVar14 | 0x4000000000000000;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
    if (uVar13 == 2) {
      uVar15 = uVar14 & 0x3fffffffffffffff;
      func_0x000107c6157c(lVar1);
      func_0x000107c6157c(uVar15);
      func_0x00010006c090(lVar1,uVar14);
      uStack_70 = (undefined1)uVar15;
      uStack_6f = (undefined1)(uVar15 >> 8);
      uStack_6e = (undefined1)(uVar15 >> 0x10);
      uStack_6d = (undefined1)(uVar15 >> 0x18);
      uStack_6c = (undefined1)(uVar15 >> 0x20);
      uStack_6b = (undefined1)(uVar15 >> 0x28);
      uStack_6a = (undefined1)(uVar15 >> 0x30);
      uStack_69 = (undefined1)(uVar15 >> 0x38);
      param_1[1] = -0x4000000000000000;
      *param_1 = 0;
      lVar17 = 0;
      uStack_78 = (char)lVar1;
      uStack_77 = uVar2;
      uStack_76 = uVar3;
      uStack_75 = uVar4;
      uStack_74 = uVar5;
      uStack_73 = uVar6;
      uStack_72 = uVar7;
      uStack_71 = uVar8;
      func_0x00010006c090(0,0xc000000000000000);
      func_0x000107c5ede4();
      lVar1 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,
                                                           CONCAT12(uStack_76,
                                                                    CONCAT11(uStack_77,uStack_78))))
                                        )));
      uVar14 = CONCAT17(uStack_69,
                        CONCAT16(uStack_6a,
                                 CONCAT15(uStack_6b,
                                          CONCAT14(uStack_6c,
                                                   CONCAT13(uStack_6d,
                                                            CONCAT12(uStack_6e,
                                                                     CONCAT11(uStack_6f,uStack_70)))
                                                  ))));
      lVar18 = *(long *)(lVar1 + 0x10);
      func_0x000107c5ec30();
      if (lVar17 == 0) goto LAB_101a50f90;
      lVar11 = lVar17;
      func_0x000107c5ec3c();
      if (SBORROW8(lVar18,lVar11)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101a50f7c);
        (*pcVar10)();
      }
      func_0x000107c5ec38();
      func_0x000107c60b70(*(undefined8 *)PTR__kSecRandomDefault_110347808,param_2,
                          lVar17 + (lVar18 - lVar11));
      *param_1 = lVar1;
      param_1[1] = uVar14 | 0x8000000000000000;
    }
    else {
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      uStack_6d = 0;
      uStack_6c = 0;
      uStack_6b = 0;
      uStack_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      func_0x000107c60b70(*(undefined8 *)PTR__kSecRandomDefault_110347808,param_2,&uStack_78);
    }
LAB_101a50e68:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  func_0x000107c60e78();
LAB_101a50f90:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x101a50f94);
  (*pcVar10)();
}



/* Entry: 101a50f98; end: 101a50fbb;  */

void FUN_101a50f98(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000101a511d0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101a50fbc; end: 101a5103b;  */

undefined * FUN_101a50fbc(undefined *param_1,undefined *param_2)

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
    FUN_101a5103c();
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



/* Entry: 101a5103c; end: 101a510a7;  */

void FUN_101a5103c(void)

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
    FUN_101a54e4c(0,0x112deeee0,&PTR_PTR_1126a8598);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112deeef8;
  plVar5 = (long *)&UNK_10d9bc088;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101a510a8; end: 101a513e3;  */

ulong FUN_101a510a8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a511d0);
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
  FUN_101a50fbc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a511cc);
      (*pcVar1)();
    }
    func_0x000101a512cc(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101a513e4; end: 101a515a7;  */

ulong FUN_101a513e4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a514c8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a514cc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a8598;
    func_0x000107c61168(PTR_PTR_1126a8598);
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
    puVar4 = PTR_PTR_1126a8598;
    func_0x000107c61168(PTR_PTR_1126a8598);
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
  FUN_101a54e4c(0,0x112deeee0,&PTR_PTR_1126a8598);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a515a8);
  (*pcVar2)();
}



/* Entry: 101a515a8; end: 101a5234f;  */

undefined ** FUN_101a515a8(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined *puStack_58;
  
  uVar10 = param_1;
  pcVar6 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar1 = uVar10;
  func_0x000107c5faec();
  pcVar7 = pcVar6;
  func_0x000107c61170(uVar10);
  uVar10 = param_1;
  func_0x000107c5c6a4(param_1);
  func_0x000107c61180();
  uVar2 = uVar10;
  func_0x000107c5faec();
  pcVar8 = pcVar7;
  func_0x000107c61170(uVar10);
  func_0x000107c4e414(param_1);
  func_0x000107c61180();
  uVar10 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  pcVar9 = pcVar6;
  (*param_2)(uVar1,pcVar6,uVar2,pcVar7,uVar10,pcVar8);
  func_0x000107c6142c(pcVar6);
  func_0x000107c6142c(pcVar7);
  func_0x000107c6142c(pcVar8);
  puVar3 = PTR_PTR_1126a85e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if ((ulong)pcVar9 >> 0x3c < 0xf) {
    func_0x00010006c00c(uVar1,pcVar9);
    uVar10 = uVar1;
    func_0x000107c5ee20(uVar1,pcVar9);
    func_0x000100cc36a8(uVar1,pcVar9);
  }
  else {
    uVar10 = 0;
  }
  func_0x000107c559a4(puVar3);
  func_0x000107c61170(uVar10);
  func_0x0001000285a8(0x112deef48,&UNK_10d9bc0e0);
  ppuVar4 = &puStack_58;
  puStack_58 = puVar3;
  func_0x000104888f7c(ppuVar4);
  ppuVar5 = ppuVar4;
  func_0x000103edf0bc();
  func_0x000107c61170(puVar3);
  func_0x000107c61574(ppuVar4);
  func_0x000100cc36a8(uVar1,pcVar9);
  return ppuVar5;
}



/* Entry: 101a52350; end: 101a52767;  */

undefined * FUN_101a52350(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong auStack_158 [9];
  undefined1 auStack_110 [16];
  long lStack_100;
  undefined1 auStack_f8 [7];
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  long alStack_e8 [9];
  long alStack_a0 [2];
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined1 *)0x0;
  func_0x000107c5fb10();
  puVar19 = *(undefined1 **)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar19 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + lVar2;
  lVar14 = param_1;
  func_0x000107c4e414();
  func_0x000107c61180();
  lVar8 = lVar14;
  func_0x000107c5faec();
  func_0x000107c61170(lVar14);
  uStack_78 = (undefined1)lVar8;
  uStack_77 = (undefined1)((ulong)lVar8 >> 8);
  uStack_76 = (undefined1)((ulong)lVar8 >> 0x10);
  uStack_75 = (undefined1)((ulong)lVar8 >> 0x18);
  uStack_74 = (undefined1)((ulong)lVar8 >> 0x20);
  uStack_73 = (undefined1)((ulong)lVar8 >> 0x28);
  uStack_72 = (undefined1)((ulong)lVar8 >> 0x30);
  uStack_71 = (undefined1)((ulong)lVar8 >> 0x38);
  uStack_70 = (undefined1)param_2;
  uStack_6f = (undefined1)((ulong)param_2 >> 8);
  uStack_6e = (undefined1)((ulong)param_2 >> 0x10);
  uStack_6d = (undefined1)((ulong)param_2 >> 0x18);
  uStack_6c = (undefined1)((ulong)param_2 >> 0x20);
  uStack_6b = (undefined1)((ulong)param_2 >> 0x28);
  uStack_6a = (undefined2)((ulong)param_2 >> 0x30);
  func_0x000107c5fb04(puVar6);
  func_0x000100e8b654();
  uVar10 = 0;
  puVar17 = puVar6;
  func_0x000107c60214(puVar6,0,PTR___sSSN_11034da80,lVar14);
  (**(code **)(puVar19 + 8))(puVar6);
  if (uVar10 >> 0x3c < 0xf) {
    puVar6 = (undefined1 *)0x20;
    func_0x000107c5fc70(0x20,PTR___ss5UInt8VN_11034eef8);
    *(undefined8 *)(puVar6 + 0x10) = 0x20;
    *(undefined8 *)(puVar6 + 0x28) = 0;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x38) = 0;
    *(undefined8 *)(puVar6 + 0x30) = 0;
    puStack_80 = puVar6;
    uVar3 = (uint)(uVar10 >> 0x20);
    uVar12 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uStack_78 = SUB81(puVar17,0);
        uStack_77 = (undefined1)((ulong)puVar17 >> 8);
        uStack_76 = (undefined1)((ulong)puVar17 >> 0x10);
        uStack_75 = (undefined1)((ulong)puVar17 >> 0x18);
        uStack_74 = (undefined1)((ulong)puVar17 >> 0x20);
        uStack_73 = (undefined1)((ulong)puVar17 >> 0x28);
        uStack_72 = (undefined1)((ulong)puVar17 >> 0x30);
        uStack_71 = (undefined1)((ulong)puVar17 >> 0x38);
        uStack_70 = (undefined1)uVar10;
        uStack_6f = (undefined1)(uVar10 >> 8);
        uStack_6e = (undefined1)(uVar10 >> 0x10);
        uStack_6d = (undefined1)(uVar10 >> 0x18);
        uStack_6c = (undefined1)(uVar10 >> 0x20);
        uStack_6b = (undefined1)(uVar10 >> 0x28);
        puVar5 = (undefined1 *)(uVar10 >> 0x30 & 0xff);
        func_0x000107c60730(&uStack_78);
      }
      else {
        lVar14 = (long)(int)puVar17;
        puVar19 = (undefined1 *)(((long)puVar17 >> 0x20) - lVar14);
        if ((long)puVar17 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a52758);
          (*pcVar4)();
        }
        func_0x000107c5ec30();
        if (puVar6 == (undefined1 *)0x0) {
          func_0x000107c5ec38();
          puVar6 = (undefined1 *)0x0;
        }
        else {
          puVar5 = puVar6;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar14,(long)puVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101a52764);
            (*pcVar4)();
          }
          puVar6 = puVar6 + (lVar14 - (long)puVar5);
          func_0x000107c5ec38();
          if (puVar6 != (undefined1 *)0x0) {
            if ((long)puVar19 <= (long)puVar5) {
              puVar5 = puVar19;
            }
            puVar5 = puVar5 + (long)puVar6;
            goto LAB_101a525ec;
          }
        }
        puVar5 = (undefined1 *)0x0;
LAB_101a525ec:
        FUN_101a50b08(puVar6,puVar5,&puStack_80);
      }
    }
    else {
      if (uVar12 == 2) {
        lVar14 = *(long *)(puVar17 + 0x10);
        lVar8 = *(long *)(puVar17 + 0x18);
        func_0x000107c5ec30();
        puVar5 = puVar6;
        if (puVar6 != (undefined1 *)0x0) {
          func_0x000107c5ec3c();
          if (SBORROW8(lVar14,(long)puVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101a52760);
            (*pcVar4)();
          }
          puVar6 = puVar6 + (lVar14 - (long)puVar5);
        }
        puVar19 = (undefined1 *)(lVar8 - lVar14);
        if (SBORROW8(lVar8,lVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a5275c);
          (*pcVar4)();
        }
        func_0x000107c5ec38();
        if (puVar6 == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)0x0;
        }
        else {
          if ((long)puVar19 <= (long)puVar5) {
            puVar5 = puVar19;
          }
          puVar5 = puVar5 + (long)puVar6;
        }
        goto LAB_101a525ec;
      }
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      uStack_6d = 0;
      uStack_6c = 0;
      uStack_6b = 0;
      uStack_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      puVar5 = (undefined1 *)0x0;
      func_0x000107c60730(&uStack_78);
    }
    puVar6 = puStack_80;
    puVar19 = puStack_80;
    func_0x000107c61434();
    func_0x0001004496cc();
    func_0x000107c6142c(puVar6);
    lVar14 = 0;
    puVar13 = puVar19;
    func_0x000107c5ee24(0,puVar19,puVar5);
    func_0x000107c6142c(param_2);
    func_0x000100cc36a8(puVar17,uVar10);
    func_0x00010006c090(puVar19);
    func_0x000107c6142c(puVar6);
  }
  else {
    func_0x000107c6142c(param_2);
    lVar14 = 0;
    puVar13 = (undefined1 *)0xe000000000000000;
  }
  func_0x000107c44c50();
  func_0x000107c61180();
  lVar8 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  if ((lVar14 == lVar8) && (puVar13 == puVar5)) {
    lVar14 = 1;
  }
  else {
    func_0x000107c605b8(lVar14,puVar13,lVar8,puVar5,0);
  }
  func_0x000107c6142c(puVar13);
  func_0x000107c6142c(puVar5);
  puVar15 = &UNK_10d905070;
  func_0x0001000285a8(0x112d3bf00);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  uStack_78 = SUB81(puVar7,0);
  uStack_77 = (undefined1)((ulong)puVar7 >> 8);
  uStack_76 = (undefined1)((ulong)puVar7 >> 0x10);
  uStack_75 = (undefined1)((ulong)puVar7 >> 0x18);
  uStack_74 = (undefined1)((ulong)puVar7 >> 0x20);
  uStack_73 = (undefined1)((ulong)puVar7 >> 0x28);
  uStack_72 = (undefined1)((ulong)puVar7 >> 0x30);
  uStack_71 = (undefined1)((ulong)puVar7 >> 0x38);
  puVar17 = &uStack_78;
  func_0x000104888f7c();
  func_0x000107c61170();
  func_0x000103edf0bc();
  puVar5 = puVar17;
  func_0x000107c61574();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  func_0x000107c60e78();
  *(undefined1 **)((long)alStack_e8 + lVar2 + 8) = puVar19;
  *(undefined1 **)((long)alStack_e8 + lVar2 + 0x10) = puVar6;
  *(ulong *)((long)alStack_e8 + lVar2 + 0x18) = uVar10;
  *(long *)((long)alStack_e8 + lVar2 + 0x20) = param_1;
  *(long *)((long)alStack_e8 + lVar2 + 0x28) = lVar8;
  *(long *)((long)alStack_e8 + lVar2 + 0x30) = lVar14;
  *(undefined1 **)((long)alStack_e8 + lVar2 + 0x38) = puVar17;
  *(undefined **)((long)alStack_e8 + lVar2 + 0x40) = puVar7;
  *(undefined1 **)((long)alStack_a0 + lVar2) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_a0 + lVar2 + 8) = FUN_101a52768;
  *(undefined8 *)(auStack_f8 + lVar2 + 0x10) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 0;
  func_0x000107c5fb10();
  puVar17 = *(undefined1 **)(lVar8 + -8);
  lVar14 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar17 + 0x40));
  puVar6 = auStack_110 + (lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  *(undefined1 **)(auStack_f8 + lVar2) = puVar5;
  *(undefined **)(auStack_f8 + lVar2 + 8) = puVar15;
  func_0x000107c5fb04(puVar6);
  func_0x000100e8b654();
  uVar10 = 0;
  puVar5 = puVar6;
  func_0x000107c60214(puVar6,0,PTR___sSSN_11034da80,lVar14);
  (**(code **)(puVar17 + 8))(puVar6,lVar8);
  if (0xe < uVar10 >> 0x3c) {
    puVar15 = (undefined *)0x0;
    puVar19 = (undefined1 *)0xe000000000000000;
    puVar13 = puVar6;
    goto LAB_101a52a34;
  }
  lVar14 = 0x20;
  func_0x000107c5fc70(0x20,PTR___ss5UInt8VN_11034eef8);
  *(undefined8 *)(lVar14 + 0x10) = 0x20;
  *(undefined8 *)(lVar14 + 0x28) = 0;
  *(undefined8 *)(lVar14 + 0x20) = 0;
  *(undefined8 *)(lVar14 + 0x38) = 0;
  *(undefined8 *)(lVar14 + 0x30) = 0;
  *(long *)((long)&lStack_100 + lVar2) = lVar14;
  uVar3 = (uint)(uVar10 >> 0x20);
  uVar12 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar12 == 0) {
      auStack_f8[lVar2] = (char)puVar5;
      auStack_f8[lVar2 + 1] = (char)((ulong)puVar5 >> 8);
      auStack_f8[lVar2 + 2] = (char)((ulong)puVar5 >> 0x10);
      auStack_f8[lVar2 + 3] = (char)((ulong)puVar5 >> 0x18);
      auStack_f8[lVar2 + 4] = (char)((ulong)puVar5 >> 0x20);
      auStack_f8[lVar2 + 5] = (char)((ulong)puVar5 >> 0x28);
      auStack_f8[lVar2 + 6] = (char)((ulong)puVar5 >> 0x30);
      auStack_f8[lVar2 + 7] = (char)((ulong)puVar5 >> 0x38);
      auStack_f8[lVar2 + 8] = (char)uVar10;
      auStack_f8[lVar2 + 9] = (char)(uVar10 >> 8);
      auStack_f8[lVar2 + 10] = (char)(uVar10 >> 0x10);
      auStack_f8[lVar2 + 0xb] = (char)(uVar10 >> 0x18);
      auStack_f8[lVar2 + 0xc] = (char)(uVar10 >> 0x20);
      auStack_f8[lVar2 + 0xd] = (char)(uVar10 >> 0x28);
      uVar11 = uVar10 >> 0x30 & 0xff;
      *(long *)((long)&lStack_100 + lVar2) = lVar14;
      func_0x000107c60730(auStack_f8 + lVar2,uVar11);
    }
    else {
      lVar18 = (long)(int)puVar5;
      lVar8 = ((long)puVar5 >> 0x20) - lVar18;
      if ((long)puVar5 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101a52acc);
        (*pcVar4)();
      }
      func_0x000107c5ec30();
      if (lVar14 == 0) {
        func_0x000107c5ec38();
        lVar14 = 0;
      }
      else {
        lVar9 = lVar14;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar18,lVar9)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a52ad8);
          (*pcVar4)();
        }
        lVar14 = (lVar18 - lVar9) + lVar14;
        func_0x000107c5ec38();
        if (lVar14 != 0) {
          if (lVar8 <= lVar9) {
            lVar9 = lVar8;
          }
          uVar11 = lVar9 + lVar14;
          goto LAB_101a529d4;
        }
      }
      uVar11 = 0;
LAB_101a529d4:
      FUN_101a50b08(lVar14,uVar11,(long)&lStack_100 + lVar2);
    }
  }
  else {
    if (uVar12 == 2) {
      lVar18 = *(long *)(puVar5 + 0x10);
      lVar9 = *(long *)(puVar5 + 0x18);
      func_0x000107c5ec30();
      lVar8 = lVar14;
      if (lVar14 != 0) {
        func_0x000107c5ec3c();
        if (SBORROW8(lVar18,lVar8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a52ad4);
          (*pcVar4)();
        }
        lVar14 = (lVar18 - lVar8) + lVar14;
      }
      lVar1 = lVar9 - lVar18;
      if (SBORROW8(lVar9,lVar18)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101a52ad0);
        (*pcVar4)();
      }
      func_0x000107c5ec38();
      if (lVar14 == 0) {
        uVar11 = 0;
      }
      else {
        if (lVar1 <= lVar8) {
          lVar8 = lVar1;
        }
        uVar11 = lVar8 + lVar14;
      }
      goto LAB_101a529d4;
    }
    *(undefined8 *)(auStack_f8 + lVar2 + 6) = 0;
    *(long *)((long)&lStack_100 + lVar2) = lVar14;
    *(undefined8 *)(auStack_f8 + lVar2) = 0;
    uVar11 = 0;
    func_0x000107c60730(auStack_f8 + lVar2,0);
  }
  puVar13 = *(undefined1 **)((long)&lStack_100 + lVar2);
  puVar17 = puVar13;
  func_0x000107c61434();
  func_0x0001004496cc();
  func_0x000107c6142c(puVar13);
  puVar15 = (undefined *)0x0;
  puVar19 = puVar17;
  func_0x000107c5ee24(0,puVar17,uVar11);
  func_0x000100cc36a8(puVar5,uVar10);
  func_0x00010006c090(puVar17,uVar11);
  func_0x000107c6142c(puVar13);
LAB_101a52a34:
  func_0x0001000285a8(0x112deef20,&UNK_10da12e20);
  puVar16 = puVar19;
  func_0x000107c5fadc(puVar15,puVar19);
  func_0x000107c6142c(puVar19);
  *(undefined **)(auStack_f8 + lVar2) = puVar15;
  puVar19 = auStack_f8 + lVar2;
  func_0x000104888f7c();
  puVar7 = puVar15;
  func_0x000107c61170();
  func_0x000103edf0bc();
  puVar5 = puVar19;
  func_0x000107c61574();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(auStack_f8 + lVar2 + 0x10)) {
    func_0x000107c60e78();
    *(undefined1 **)(puVar6 + -0x40) = puVar17;
    *(undefined1 **)(puVar6 + -0x38) = puVar13;
    *(ulong *)(puVar6 + -0x30) = uVar10;
    *(undefined **)(puVar6 + -0x28) = puVar15;
    *(undefined1 **)(puVar6 + -0x20) = puVar19;
    *(undefined **)(puVar6 + -0x18) = puVar7;
    *(long *)(puVar6 + -0x10) = (long)alStack_a0 + lVar2;
    *(code **)(puVar6 + -8) = FUN_101a52adc;
    puVar17 = puVar5;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    puVar19 = puVar17;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar17);
    puVar17 = puVar19;
    func_0x000107c5ee20(puVar19,puVar16);
    func_0x00010006c090(puVar19,puVar16);
    puVar19 = puVar5;
    func_0x000107c41214();
    func_0x000107c61180();
    puVar13 = puVar19;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar19);
    puVar19 = puVar13;
    func_0x000107c5ee20(puVar13,puVar16);
    func_0x00010006c090(puVar13,puVar16);
    func_0x000107c3e264();
    func_0x000107c61180();
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar13 = puVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar5);
      puVar5 = puVar13;
      func_0x000107c5ee20(puVar13,puVar16);
      func_0x00010006c090(puVar13,puVar16);
    }
    puVar13 = puVar17;
    puVar16 = puVar19;
    func_0x000107c31274(puVar17,puVar19,puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar5);
    if (puVar13 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
      puVar16 = (undefined1 *)0xf000000000000000;
    }
    else {
      puVar5 = puVar13;
      func_0x000107c5ee30(puVar13);
      func_0x000107c61170(puVar13);
    }
    puVar15 = PTR_PTR_1126a85b8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    if ((ulong)puVar16 >> 0x3c < 0xf) {
      func_0x00010006c00c(puVar5,puVar16);
      puVar17 = puVar5;
      func_0x000107c5ee20(puVar5,puVar16);
      func_0x000100cc36a8(puVar5,puVar16);
    }
    else {
      puVar17 = (undefined1 *)0x0;
    }
    func_0x000107c5454c(puVar15);
    func_0x000107c61170(puVar17);
    func_0x0001000285a8(0x112deef18,&UNK_10d9bc0b0);
    *(undefined **)(puVar6 + -0x48) = puVar15;
    puVar6 = puVar6 + -0x48;
    func_0x000104888f7c(puVar6);
    puVar17 = puVar6;
    func_0x000103edf0bc();
    func_0x000107c61170(puVar15);
    func_0x000107c61574(puVar6);
    func_0x000100cc36a8(puVar5,puVar16);
    return puVar17;
  }
  return puVar7;
}



/* Entry: 101a52768; end: 101a52adb;  */

long FUN_101a52768(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong auStack_c8 [9];
  undefined1 auStack_80 [16];
  undefined1 *puStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined2 uStack_5a;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  func_0x000107c5fb10();
  puVar13 = *(undefined1 **)(lVar3 + -8);
  lVar11 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar13 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_80 + lVar5;
  uStack_68 = (undefined1)param_1;
  uStack_67 = (undefined1)((ulong)param_1 >> 8);
  uStack_66 = (undefined1)((ulong)param_1 >> 0x10);
  uStack_65 = (undefined1)((ulong)param_1 >> 0x18);
  uStack_64 = (undefined1)((ulong)param_1 >> 0x20);
  uStack_63 = (undefined1)((ulong)param_1 >> 0x28);
  uStack_62 = (undefined1)((ulong)param_1 >> 0x30);
  uStack_61 = (undefined1)((ulong)param_1 >> 0x38);
  uStack_60 = (undefined1)param_2;
  uStack_5f = (undefined1)((ulong)param_2 >> 8);
  uStack_5e = (undefined1)((ulong)param_2 >> 0x10);
  uStack_5d = (undefined1)((ulong)param_2 >> 0x18);
  uStack_5c = (undefined1)((ulong)param_2 >> 0x20);
  uStack_5b = (undefined1)((ulong)param_2 >> 0x28);
  uStack_5a = (undefined2)((ulong)param_2 >> 0x30);
  func_0x000107c5fb04(puVar8);
  func_0x000100e8b654();
  uVar6 = 0;
  puVar10 = puVar8;
  func_0x000107c60214(puVar8,0,PTR___sSSN_11034da80,lVar11);
  (**(code **)(puVar13 + 8))(puVar8,lVar3);
  if (0xe < uVar6 >> 0x3c) {
    lVar11 = 0;
    puVar9 = (undefined1 *)0xe000000000000000;
    goto LAB_101a52a34;
  }
  puVar8 = (undefined1 *)0x20;
  func_0x000107c5fc70(0x20,PTR___ss5UInt8VN_11034eef8);
  *(undefined8 *)(puVar8 + 0x10) = 0x20;
  *(undefined8 *)(puVar8 + 0x28) = 0;
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x38) = 0;
  *(undefined8 *)(puVar8 + 0x30) = 0;
  puStack_70 = puVar8;
  uVar1 = (uint)(uVar6 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 == 0) {
      uStack_68 = SUB81(puVar10,0);
      uStack_67 = (undefined1)((ulong)puVar10 >> 8);
      uStack_66 = (undefined1)((ulong)puVar10 >> 0x10);
      uStack_65 = (undefined1)((ulong)puVar10 >> 0x18);
      uStack_64 = (undefined1)((ulong)puVar10 >> 0x20);
      uStack_63 = (undefined1)((ulong)puVar10 >> 0x28);
      uStack_62 = (undefined1)((ulong)puVar10 >> 0x30);
      uStack_61 = (undefined1)((ulong)puVar10 >> 0x38);
      uStack_60 = (undefined1)uVar6;
      uStack_5f = (undefined1)(uVar6 >> 8);
      uStack_5e = (undefined1)(uVar6 >> 0x10);
      uStack_5d = (undefined1)(uVar6 >> 0x18);
      uStack_5c = (undefined1)(uVar6 >> 0x20);
      uStack_5b = (undefined1)(uVar6 >> 0x28);
      puVar12 = (undefined1 *)(uVar6 >> 0x30 & 0xff);
      func_0x000107c60730(&uStack_68,puVar12);
    }
    else {
      lVar11 = (long)(int)puVar10;
      puVar13 = (undefined1 *)(((long)puVar10 >> 0x20) - lVar11);
      if ((long)puVar10 >> 0x20 < lVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a52acc);
        (*pcVar2)();
      }
      func_0x000107c5ec30();
      if (puVar8 == (undefined1 *)0x0) {
        func_0x000107c5ec38();
        puVar8 = (undefined1 *)0x0;
      }
      else {
        puVar12 = puVar8;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar11,(long)puVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a52ad8);
          (*pcVar2)();
        }
        puVar8 = puVar8 + (lVar11 - (long)puVar12);
        func_0x000107c5ec38();
        if (puVar8 != (undefined1 *)0x0) {
          if ((long)puVar13 <= (long)puVar12) {
            puVar12 = puVar13;
          }
          puVar12 = puVar12 + (long)puVar8;
          goto LAB_101a529d4;
        }
      }
      puVar12 = (undefined1 *)0x0;
LAB_101a529d4:
      FUN_101a50b08(puVar8,puVar12,&puStack_70);
    }
  }
  else {
    if (uVar7 == 2) {
      lVar11 = *(long *)(puVar10 + 0x10);
      lVar3 = *(long *)(puVar10 + 0x18);
      func_0x000107c5ec30();
      puVar12 = puVar8;
      if (puVar8 != (undefined1 *)0x0) {
        func_0x000107c5ec3c();
        if (SBORROW8(lVar11,(long)puVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a52ad4);
          (*pcVar2)();
        }
        puVar8 = puVar8 + (lVar11 - (long)puVar12);
      }
      puVar13 = (undefined1 *)(lVar3 - lVar11);
      if (SBORROW8(lVar3,lVar11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a52ad0);
        (*pcVar2)();
      }
      func_0x000107c5ec38();
      if (puVar8 == (undefined1 *)0x0) {
        puVar12 = (undefined1 *)0x0;
      }
      else {
        if ((long)puVar13 <= (long)puVar12) {
          puVar12 = puVar13;
        }
        puVar12 = puVar12 + (long)puVar8;
      }
      goto LAB_101a529d4;
    }
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_5e = 0;
    uStack_5d = 0;
    uStack_5c = 0;
    uStack_5b = 0;
    uStack_68 = 0;
    uStack_67 = 0;
    uStack_66 = 0;
    uStack_65 = 0;
    uStack_64 = 0;
    uStack_63 = 0;
    uStack_62 = 0;
    uStack_61 = 0;
    puVar12 = (undefined1 *)0x0;
    func_0x000107c60730(&uStack_68,0);
  }
  puVar8 = puStack_70;
  puVar13 = puStack_70;
  func_0x000107c61434();
  func_0x0001004496cc();
  func_0x000107c6142c(puVar8);
  lVar11 = 0;
  puVar9 = puVar13;
  func_0x000107c5ee24(0,puVar13,puVar12);
  func_0x000100cc36a8(puVar10,uVar6);
  func_0x00010006c090(puVar13,puVar12);
  func_0x000107c6142c(puVar8);
LAB_101a52a34:
  func_0x0001000285a8(0x112deef20,&UNK_10da12e20);
  puVar12 = puVar9;
  func_0x000107c5fadc(lVar11,puVar9);
  func_0x000107c6142c(puVar9);
  uStack_68 = (undefined1)lVar11;
  uStack_67 = (undefined1)((ulong)lVar11 >> 8);
  uStack_66 = (undefined1)((ulong)lVar11 >> 0x10);
  uStack_65 = (undefined1)((ulong)lVar11 >> 0x18);
  uStack_64 = (undefined1)((ulong)lVar11 >> 0x20);
  uStack_63 = (undefined1)((ulong)lVar11 >> 0x28);
  uStack_62 = (undefined1)((ulong)lVar11 >> 0x30);
  uStack_61 = (undefined1)((ulong)lVar11 >> 0x38);
  puVar9 = &uStack_68;
  func_0x000104888f7c();
  lVar3 = lVar11;
  func_0x000107c61170();
  func_0x000103edf0bc();
  puVar10 = puVar9;
  func_0x000107c61574();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    *(undefined1 **)((long)auStack_c8 + lVar5 + 8) = puVar13;
    *(undefined1 **)((long)auStack_c8 + lVar5 + 0x10) = puVar8;
    *(ulong *)((long)auStack_c8 + lVar5 + 0x18) = uVar6;
    *(long *)((long)auStack_c8 + lVar5 + 0x20) = lVar11;
    *(undefined1 **)((long)auStack_c8 + lVar5 + 0x28) = puVar9;
    *(long *)((long)auStack_c8 + lVar5 + 0x30) = lVar3;
    *(undefined1 **)((long)auStack_c8 + lVar5 + 0x38) = &stack0xfffffffffffffff0;
    *(code **)((long)auStack_c8 + lVar5 + 0x40) = FUN_101a52adc;
    puVar8 = puVar10;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    puVar13 = puVar8;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar8);
    puVar8 = puVar13;
    func_0x000107c5ee20(puVar13,puVar12);
    func_0x00010006c090(puVar13,puVar12);
    puVar13 = puVar10;
    func_0x000107c41214();
    func_0x000107c61180();
    puVar9 = puVar13;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar13);
    puVar13 = puVar9;
    func_0x000107c5ee20(puVar9,puVar12);
    func_0x00010006c090(puVar9,puVar12);
    func_0x000107c3e264();
    func_0x000107c61180();
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      puVar9 = puVar10;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar10);
      puVar10 = puVar9;
      func_0x000107c5ee20(puVar9,puVar12);
      func_0x00010006c090(puVar9,puVar12);
    }
    puVar9 = puVar8;
    puVar12 = puVar13;
    func_0x000107c31274(puVar8,puVar13,puVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar10);
    if (puVar9 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
      puVar12 = (undefined1 *)0xf000000000000000;
    }
    else {
      puVar8 = puVar9;
      func_0x000107c5ee30(puVar9);
      func_0x000107c61170(puVar9);
    }
    puVar4 = PTR_PTR_1126a85b8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    if ((ulong)puVar12 >> 0x3c < 0xf) {
      func_0x00010006c00c(puVar8,puVar12);
      puVar10 = puVar8;
      func_0x000107c5ee20(puVar8,puVar12);
      func_0x000100cc36a8(puVar8,puVar12);
    }
    else {
      puVar10 = (undefined1 *)0x0;
    }
    func_0x000107c5454c(puVar4);
    func_0x000107c61170(puVar10);
    func_0x0001000285a8(0x112deef18,&UNK_10d9bc0b0);
    *(undefined **)((long)auStack_c8 + lVar5) = puVar4;
    lVar5 = (long)auStack_c8 + lVar5;
    func_0x000104888f7c(lVar5);
    lVar11 = lVar5;
    func_0x000103edf0bc();
    func_0x000107c61170(puVar4);
    func_0x000107c61574(lVar5);
    func_0x000100cc36a8(puVar8,puVar12);
    return lVar11;
  }
  return lVar3;
}



/* Entry: 101a52adc; end: 101a52cf3;  */

undefined ** FUN_101a52adc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_48;
  
  uVar5 = param_1;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  func_0x000107c5ee20(uVar6,param_2);
  func_0x00010006c090(uVar6,param_2);
  uVar6 = param_1;
  func_0x000107c41214();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar6);
  uVar6 = uVar7;
  func_0x000107c5ee20(uVar7,param_2);
  func_0x00010006c090(uVar7,param_2);
  func_0x000107c3e264();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    uVar7 = uVar1;
    func_0x000107c5ee20(uVar1,param_2);
    func_0x00010006c090(uVar1,param_2);
  }
  uVar1 = uVar5;
  uVar8 = uVar6;
  func_0x000107c31274(uVar5,uVar6,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  if (uVar1 == 0) {
    uVar5 = 0;
    uVar8 = 0xf000000000000000;
  }
  else {
    uVar5 = uVar1;
    func_0x000107c5ee30(uVar1);
    func_0x000107c61170(uVar1);
  }
  puVar2 = PTR_PTR_1126a85b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (uVar8 >> 0x3c < 0xf) {
    func_0x00010006c00c(uVar5,uVar8);
    uVar6 = uVar5;
    func_0x000107c5ee20(uVar5,uVar8);
    func_0x000100cc36a8(uVar5,uVar8);
  }
  else {
    uVar6 = 0;
  }
  func_0x000107c5454c(puVar2);
  func_0x000107c61170(uVar6);
  func_0x0001000285a8(0x112deef18,&UNK_10d9bc0b0);
  ppuVar3 = &puStack_48;
  puStack_48 = puVar2;
  func_0x000104888f7c(ppuVar3);
  ppuVar4 = ppuVar3;
  func_0x000103edf0bc();
  func_0x000107c61170(puVar2);
  func_0x000107c61574(ppuVar3);
  func_0x000100cc36a8(uVar5,uVar8);
  return ppuVar4;
}



/* Entry: 101a52cf4; end: 101a52d8f;  */

void FUN_101a52cf4(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0xf) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a52d90);
        (*pcVar1)();
      }
    }
    else {
      func_0x000107c5ec40();
      func_0x000107c613fc();
      func_0x000107c5ec34(param_1);
      if (0x7ffffffe < param_1) {
        lVar2 = 0;
        func_0x000107c5ee0c();
        func_0x000107c613fc();
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(ulong *)(lVar2 + 0x18) = param_1;
      }
    }
  }
  return;
}



/* Entry: 101a52d90; end: 101a52feb;  */

undefined ** FUN_101a52d90(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_68;
  undefined *apuStack_60 [2];
  undefined *puStack_50;
  long lStack_48;
  
  func_0x000107c4adac();
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a52fe4);
    (*pcVar3)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      puVar10 = (undefined *)(long)param_1;
      if ((long)puVar10 < 1) {
        puVar10 = PTR_PTR_1126a85b0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar5 = 0;
        func_0x000107c5ee20(0,0xc000000000000000);
        func_0x000107c52ed8(puVar10);
        func_0x000107c61170(uVar5);
        func_0x0001000285a8(0x112deef00,&UNK_10d9bc098);
        ppuVar6 = &puStack_50;
        puStack_50 = puVar10;
        func_0x000104888f7c(ppuVar6);
        ppuVar7 = ppuVar6;
        func_0x000103edf0bc();
        func_0x000107c61170(puVar10);
        func_0x000107c61574(ppuVar6);
      }
      else {
        puVar4 = puVar10;
        FUN_101a52cf4();
        ppuVar6 = &puStack_50;
        puStack_50 = puVar4;
        lStack_48 = param_3;
        FUN_101a50c10(ppuVar6,puVar10);
        puVar4 = puStack_50;
        lVar9 = lStack_48;
        if ((int)ppuVar6 != 0) {
          apuStack_60[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_101a50f98(0,puVar10,0);
          do {
            puVar4 = apuStack_60[0];
            uStack_68 = 0;
            lVar9 = 8;
            func_0x000107c61598(&uStack_68,8);
            uVar5 = uStack_68;
            uVar2 = *(ulong *)(puVar4 + 0x10);
            lVar1 = uVar2 + 1;
            apuStack_60[0] = puVar4;
            if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
              lVar9 = lVar1;
              FUN_101a50f98(1 < *(ulong *)(puVar4 + 0x18),lVar1,1);
            }
            puVar8 = apuStack_60[0];
            *(long *)(apuStack_60[0] + 0x10) = lVar1;
            apuStack_60[0][uVar2 + 0x20] = (char)uVar5;
            puVar10 = puVar10 + -1;
          } while (puVar10 != (undefined *)0x0);
          puVar4 = apuStack_60[0];
          func_0x0001004496cc(apuStack_60[0]);
          func_0x000107c6142c(puVar8);
          func_0x00010006c090(puStack_50,lStack_48);
        }
        puVar10 = PTR_PTR_1126a85b0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar8 = puVar4;
        func_0x000107c5ee20(puVar4,lVar9);
        func_0x000107c52ed8(puVar10);
        func_0x000107c61170(puVar8);
        func_0x0001000285a8(0x112deef00,&UNK_10d9bc098);
        ppuVar6 = apuStack_60;
        apuStack_60[0] = puVar10;
        func_0x000104888f7c(ppuVar6);
        ppuVar7 = ppuVar6;
        func_0x000103edf0bc();
        func_0x000107c61574(ppuVar6);
        func_0x000107c61170(puVar10);
        func_0x00010006c090(puVar4,lVar9);
      }
      return ppuVar7;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a52fec);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a52fe8);
  (*pcVar3)();
}



/* Entry: 101a52fec; end: 101a54e2b;  */

undefined ** FUN_101a52fec(undefined *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puStack_68;
  
  puVar18 = param_1;
  func_0x000107c4a7d4();
  func_0x000107c61180();
  puVar3 = (undefined *)0x0;
  FUN_101a54e4c(0,0x112deeee0,&PTR_PTR_1126a8598);
  puVar4 = puVar18;
  puVar19 = puVar3;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar18);
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar18 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar18 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar18 = puVar4;
    }
    func_0x000107c60480();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
  if (puVar18 != (undefined *)0x0) {
    if ((long)puVar18 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a536e0);
      (*pcVar2)();
    }
    puVar21 = (undefined *)0x0;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        puVar5 = *(undefined **)(puVar4 + (long)puVar21 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar21;
        puVar19 = puVar4;
        FUN_101a513e4();
      }
      puVar6 = PTR_PTR_1126a8598;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar23 = puVar5;
      func_0x000107c44fcc();
      func_0x000107c61180();
      puVar15 = puVar19;
      if (puVar23 == (undefined *)0x0) {
        func_0x000107c5faec();
        puVar15 = puVar19;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar19);
      }
      func_0x000107c55210(puVar6);
      func_0x000107c61170(puVar23);
      puVar19 = puVar5;
      func_0x000107c4a8dc();
      func_0x000107c61180();
      puVar23 = puVar19;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      func_0x000107c61170(puVar19);
      puVar19 = puVar15;
      if (puVar23 == (undefined *)0x0) {
LAB_101a53328:
        puVar23 = PTR_PTR_1126a85a0;
        func_0x000107c610f8(PTR_PTR_1126a85a0);
        func_0x000107c453e4();
        func_0x000107c559a4();
        func_0x000107c55938(puVar23);
        func_0x000107c559a8(puVar6);
        func_0x000107c61170(puVar23);
        func_0x000107c61174();
        puVar23 = puVar12;
        func_0x000107c61550();
        if ((((int)puVar23 == 0) || ((long)puVar12 < 0)) ||
           (puVar23 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar12 >> 0x3e == 0) {
            puVar19 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar19 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar12) {
              puVar19 = puVar12;
            }
            func_0x000107c60480();
          }
          puVar19 = puVar19 + 1;
          puVar23 = (undefined *)0x0;
          FUN_101a510a8(0,puVar19,1,puVar12);
        }
        uVar17 = (ulong)puVar23 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar17 + 0x10);
        puVar15 = (undefined *)(uVar1 + 1);
        puVar12 = puVar23;
        if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar1) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
          puVar19 = puVar15;
          FUN_101a510a8(puVar12,puVar15,1,puVar23);
          uVar17 = (ulong)puVar12 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar17 + 0x10) = puVar15;
        *(undefined **)(uVar17 + uVar1 * 8 + 0x20) = puVar6;
        func_0x000107c61170(puVar6);
      }
      else {
        puVar7 = puVar23;
        func_0x000107c5ee30();
        puVar16 = puVar15;
        func_0x000107c61170(puVar23);
        puVar19 = puVar5;
        func_0x000107c4a8dc();
        func_0x000107c61180();
        puVar23 = puVar19;
        func_0x000107c4a804();
        func_0x000107c61180();
        func_0x000107c61170(puVar19);
        if (puVar23 == (undefined *)0x0) {
          func_0x00010006c090(puVar7);
          puVar19 = puVar15;
          goto LAB_101a53328;
        }
        puVar8 = puVar23;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar23);
        puVar23 = puVar7;
        puVar19 = puVar15;
        func_0x000107c5ee20();
        puVar20 = param_1;
        func_0x000107c4c560(param_1);
        func_0x000107c61180();
        puVar11 = puVar20;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar20);
        puVar20 = puVar11;
        func_0x000107c5ee20(puVar11,puVar19);
        func_0x00010006c090(puVar11);
        puVar11 = param_1;
        func_0x000107c4c55c(param_1);
        func_0x000107c61180();
        puVar10 = puVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar11);
        puVar11 = puVar10;
        func_0x000107c5ee20(puVar10,puVar19);
        func_0x00010006c090(puVar10);
        puVar10 = puVar23;
        func_0x000107c51bb4();
        func_0x000107c61180();
        func_0x000107c61170(puVar23);
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar11);
        if (puVar10 == (undefined *)0x0) {
          puVar23 = (undefined *)0x0;
          puVar19 = (undefined *)0xf000000000000000;
        }
        else {
          puVar23 = puVar10;
          func_0x000107c5ee30(puVar10);
          func_0x000107c61170(puVar10);
        }
        puVar20 = puVar8;
        puVar22 = puVar16;
        func_0x000107c5ee20(puVar8,puVar16);
        puVar11 = param_1;
        func_0x000107c4c560(param_1);
        func_0x000107c61180();
        puVar10 = puVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar11);
        puVar11 = puVar10;
        func_0x000107c5ee20(puVar10,puVar22);
        func_0x00010006c090(puVar10,puVar22);
        puVar10 = param_1;
        func_0x000107c4c55c(param_1);
        func_0x000107c61180();
        puVar9 = puVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar10);
        puVar10 = puVar9;
        func_0x000107c5ee20(puVar9,puVar22);
        func_0x00010006c090(puVar9,puVar22);
        puVar9 = puVar20;
        func_0x000107c51bb4();
        func_0x000107c61180();
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
        if (puVar9 == (undefined *)0x0) {
          puVar20 = (undefined *)0x0;
          puVar22 = (undefined *)0xf000000000000000;
        }
        else {
          puVar20 = puVar9;
          func_0x000107c5ee30(puVar9);
          func_0x000107c61170(puVar9);
        }
        FUN_101a54e4c(0,0x112deeef0,&PTR_PTR_1126a85a0);
        func_0x000100de78a0(puVar23,puVar19);
        func_0x000100de78a0(puVar20,puVar22);
        puVar11 = puVar23;
        FUN_101a508dc(puVar23,puVar19,puVar20,puVar22);
        func_0x000107c559a8(puVar6);
        func_0x000107c61170(puVar11);
        func_0x000107c61174();
        puVar11 = puVar12;
        func_0x000107c61550();
        if ((((int)puVar11 == 0) || ((long)puVar12 < 0)) ||
           (puVar11 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar12 >> 0x3e == 0) {
            puVar10 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar12) {
              puVar10 = puVar12;
            }
            func_0x000107c60480(puVar10);
          }
          puVar11 = (undefined *)0x0;
          FUN_101a510a8(0,puVar10 + 1,1,puVar12);
        }
        uVar17 = (ulong)puVar11 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar17 + 0x10);
        puVar12 = puVar11;
        if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar1) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
          FUN_101a510a8(puVar12,uVar1 + 1,1,puVar11);
          uVar17 = (ulong)puVar12 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar17 + 0x10) = uVar1 + 1;
        *(undefined **)(uVar17 + uVar1 * 8 + 0x20) = puVar6;
        func_0x00010006c090(puVar7,puVar15);
        func_0x00010006c090(puVar8,puVar16);
        func_0x000107c61170(puVar5);
        func_0x000100cc36a8(puVar20,puVar22);
        func_0x000100cc36a8(puVar23);
        puVar5 = puVar6;
      }
      puVar21 = puVar21 + 1;
      func_0x000107c61170(puVar5);
    } while (puVar18 != puVar21);
  }
  func_0x000107c6142c(puVar4);
  puVar19 = PTR_PTR_1126a85a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar18 = puVar12;
  func_0x000107c5fc48(puVar12,puVar3);
  func_0x000107c57e9c(puVar19);
  func_0x000107c61170(puVar18);
  func_0x0001000285a8(0x112deeee8,&UNK_10d9bc080);
  ppuVar13 = &puStack_68;
  puStack_68 = puVar19;
  func_0x000104888f7c(ppuVar13);
  ppuVar14 = ppuVar13;
  func_0x000103edf0bc();
  func_0x000107c6142c(puVar12);
  func_0x000107c61574(ppuVar13);
  func_0x000107c61170(puVar19);
  return ppuVar14;
}



/* Entry: 101a54e2c; end: 101a54e4b;  */

void FUN_101a54e2c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f19a8);
  return;
}



/* Entry: 101a54e4c; end: 101a54ecb;  */

void FUN_101a54e4c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a54ecc; end: 101a54ffb;  */

long FUN_101a54ecc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112deef50,&UNK_10d9bc0f0);
  func_0x000107c613fc();
  pcVar1 = FUN_101a54ffc;
  func_0x0001000bdd8c(FUN_101a54ffc,0);
  uVar2 = 0;
  func_0x0001001c7c10(0);
  func_0x000107c610f8();
  func_0x0001027581dc(pcVar1,uVar2);
  func_0x000107c61170(param_1);
  *(code **)(unaff_x20 + 0x10) = pcVar1;
  return unaff_x20;
}



/* Entry: 101a54ffc; end: 101a5502b;  */

void FUN_101a54ffc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101a54e2c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 101a5502c; end: 101a5503b;  */

void FUN_101a5502c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a5503c; end: 101a550db;  */

void FUN_101a5503c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a550dc; end: 101a550ff;  */

void FUN_101a550dc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a55100; end: 101a551c7;  */

undefined1  [16]
FUN_101a55100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,code *param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  lVar1 = param_1;
  uVar3 = param_3;
  (*param_7)(param_1,param_3,param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  if (lVar1 == 0) {
    lVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5ee30(lVar1);
    func_0x000107c61170(lVar1);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 101a551c8; end: 101a551d3; +[MemoriesValdiKDFHelperObjC createAuthKey:::] */

void FUN_101a551c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  (*(code *)&UNK_108dde358)(param_3,param_4,param_5);
  func_0x000107c61180();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c5ee30();
    func_0x000107c61170(param_3);
    lVar2 = lVar1;
    func_0x000107c5ee20(lVar1,param_4);
    func_0x00010006c090(lVar1,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101a551d4; end: 101a551df; +[MemoriesValdiKDFHelperObjC createEncryptionKey:::] */

void FUN_101a551d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  (*(code *)&UNK_108dde51c)(param_3,param_4,param_5);
  func_0x000107c61180();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c5ee30();
    func_0x000107c61170(param_3);
    lVar2 = lVar1;
    func_0x000107c5ee20(lVar1,param_4);
    func_0x00010006c090(lVar1,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101a551e0; end: 101a5525b;  */

void FUN_101a551e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  long lVar1;
  long lVar2;
  
  (*param_6)(param_3,param_4,param_5);
  func_0x000107c61180();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c5ee30();
    func_0x000107c61170(param_3);
    lVar2 = lVar1;
    func_0x000107c5ee20(lVar1,param_4);
    func_0x00010006c090(lVar1,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101a5525c; end: 101a55297; -[MemoriesValdiKDFHelperObjC init] */

void FUN_101a5525c(undefined8 param_1)

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



/* Entry: 101a55298; end: 101a552cb;  */

void FUN_101a55298(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101a552cc; end: 101a552db;  */

undefined1  [16] FUN_101a552cc(void)

{
  return ZEXT816(0x110430cf8);
}



/* Entry: 101a552dc; end: 101a5533f;  */

void FUN_101a552dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127f1a58);
  return;
}



/* Entry: 101a55340; end: 101a5541f;  */

bool FUN_101a55340(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong auStack_50 [2];
  
  func_0x0001000d224c(auStack_50);
  uVar1 = auStack_50[0];
  func_0x000107c5aba4();
  func_0x000107c615e8(auStack_50[0]);
  if ((((uVar1 & 1) == 0) && (param_1 != 0)) && (param_3 != 0)) {
    func_0x000107c615f0(param_1);
    func_0x000107c5fadc(param_2,param_3);
    lVar2 = param_1;
    func_0x000107c43404();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c427b8(lVar2);
      func_0x000107c615e8(param_1);
      func_0x000107c615e8(lVar2);
      return lVar3 == 2;
    }
    func_0x000107c615e8(param_1);
  }
  return false;
}



/* Entry: 101a55420; end: 101a554a7; -[_TtC49MemoriesEncryptedContentManagerHelperServicesImpl18EncryptionDetector shouldSkipDecryptionWithCloudFile:representation:] */

uint FUN_101a55420(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_101a55340(param_3,param_4,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 101a554a8; end: 101a55513; -[_TtC49MemoriesEncryptedContentManagerHelperServicesImpl18EncryptionDetector shouldSkipDecryptionWithEncryptionHint:] */

uint FUN_101a554a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 auStack_40 [2];
  
  func_0x000107c6157c();
  func_0x0001000d224c(auStack_40);
  uVar1 = auStack_40[0];
  func_0x000107c5aba4(auStack_40[0]);
  func_0x000107c615e8(auStack_40[0]);
  func_0x000107c61574(param_1);
  return (uint)(param_3 == 2) & ((uint)uVar1 ^ 0xffffffff);
}



/* Entry: 101a55514; end: 101a555f3;  */

long FUN_101a55514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110430da8;
  func_0x000107c613fc(&UNK_110430da8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112def0f0,&UNK_10d9bc1e0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_101a55640;
  func_0x0001000bdd8c(FUN_101a55640,puVar1);
  uVar3 = 0;
  func_0x000100219520(0);
  func_0x000107c610f8();
  func_0x0001006f5d98(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101a555f4; end: 101a5563f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a555f4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_1130806b8);
  lVar1 = 0;
  func_0x000101a55320();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 101a55640; end: 101a5564f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a55640(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130806b8);
  lVar1 = 0;
  func_0x000101a55320();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 101a55650; end: 101a55673;  */

void FUN_101a55650(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a55674; end: 101a55683;  */

void FUN_101a55674(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a55684; end: 101a5573b;  */

void FUN_101a55684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101a5573c; end: 101a55743;  */

void FUN_101a5573c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c421c8();
  func_0x000107c61180();
  FUN_101a57344(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  uVar3 = uVar1;
  FUN_101a57404(uVar1,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101a55744; end: 101a5575f;  */

/* WARNING: Possible PIC construction at 0x000101a55750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a55754) */

void FUN_101a55744(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a55760; end: 101a557ab;  */

void FUN_101a55760(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a557ac; end: 101a55883;  */

void FUN_101a557ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c3ddb0();
  func_0x000107c61180();
  puVar2 = &UNK_110430eb8;
  func_0x000107c613fc(&UNK_110430eb8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  func_0x0001000285a8(0x112def1c8,&UNK_10d9bc230);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar1);
  pcVar3 = FUN_101a55884;
  func_0x0001000bdd8c(FUN_101a55884,puVar2);
  uVar4 = 0;
  func_0x0001001dfe6c(0);
  func_0x000107c610f8();
  func_0x00010079d1cc(pcVar3,uVar4);
  func_0x000107c61170(uVar1);
  *param_1 = pcVar3;
  return;
}



/* Entry: 101a55884; end: 101a55887;  */

void FUN_101a55884(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c421c8();
  func_0x000107c61180();
  FUN_101a57344(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  uVar3 = uVar1;
  FUN_101a57404(uVar1,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101a55888; end: 101a559a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a55888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112def2b8);
  puVar1 = &UNK_110430f20;
  func_0x000107c613fc(&UNK_110430f20,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110431380;
  func_0x000107c613fc(&UNK_110431380,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  uStack_60 = 0x101a57748;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110431398;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_5);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101a559a8; end: 101a560fb;  */

/* WARNING: Removing unreachable block (ram,0x000101a55ac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a559a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  uStack_d8 = param_2;
  func_0x000107c5f7fc();
  lStack_e0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar14 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar6 = &UNK_1104311a0;
    func_0x000107c613fc(&UNK_1104311a0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_3;
    *(undefined8 *)(puVar6 + 0x18) = param_4;
    pcStack_a0 = (code *)0x101a57730;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000b0c7c;
    puStack_a8 = &UNK_1104311b8;
    ppuVar7 = &puStack_c0;
    puStack_98 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c6157c(param_4);
    func_0x000107c5f808(lVar13);
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = uVar8;
    func_0x0001001c7f30();
    func_0x000107c60264(lVar14,&puStack_c8,uVar8,uVar9,lVar3,param_4);
    func_0x000107c5ffe8(0,lVar13,lVar14,ppuVar7);
    func_0x000107c60bd0(ppuVar7);
    (**(code **)(lStack_e0 + 8))(lVar14,lVar3);
    pcVar12 = *(code **)(lVar15 + 8);
  }
  else {
    lStack_108 = lVar13;
    lStack_100 = lVar14;
    lStack_f8 = param_1;
    lStack_f0 = lVar4;
    lStack_e8 = lVar15;
    func_0x000107c610f8(PTR_PTR_1126bc788);
    func_0x00010006c00c(param_5,param_6);
    lVar5 = param_5;
    FUN_101a57560(param_5,param_6);
    func_0x00010006c090(param_5,param_6);
    lVar10 = lVar5;
    func_0x00010565aaf4();
    func_0x000107c61180();
    lVar2 = lStack_e0;
    lVar15 = lStack_e8;
    lVar4 = lStack_f0;
    lVar14 = lStack_f8;
    if (lVar10 == 0) {
      puVar6 = &UNK_110431240;
      func_0x000107c613fc(&UNK_110431240,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = param_3;
      *(undefined8 *)(puVar6 + 0x18) = param_4;
      pcStack_a0 = (code *)0x101a57738;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000b0c7c;
      puStack_a8 = &UNK_110431258;
      ppuVar7 = &puStack_c0;
      puStack_98 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c6157c(param_4);
      lVar13 = lStack_108;
      func_0x000107c5f808(lStack_108);
      puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar8 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar9 = uVar8;
      func_0x0001001c7f30();
      lVar14 = lStack_100;
      func_0x000107c60264(lStack_100,&puStack_c8,uVar8,uVar9,lVar3,param_4);
      func_0x000107c5ffe8(0,lVar13,lVar14,ppuVar7);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lStack_f8);
      func_0x000107c61170(lVar5);
      (**(code **)(lVar2 + 8))(lVar14,lVar3);
      pcVar12 = *(code **)(lVar15 + 8);
    }
    else {
      lVar13 = *(long *)(lStack_f8 + _DAT_112def2a8);
      lStack_110 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar15 = lStack_100;
      if (lVar13 != 0) {
        puVar6 = &UNK_1104312e0;
        func_0x000107c613fc(&UNK_1104312e0,0x18,7);
        *(long *)(puVar6 + 0x10) = lVar10;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_a0 = FUN_101a57620;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_100ab3660;
        puStack_a8 = &UNK_1104312f8;
        ppuVar7 = &puStack_c0;
        puStack_98 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_98;
        func_0x000107c61174();
        func_0x000107c61574(puVar6);
        puVar6 = &UNK_110431330;
        func_0x000107c613fc(&UNK_110431330,0x30,7);
        uVar8 = uStack_d8;
        *(long *)(puVar6 + 0x10) = lVar10;
        *(undefined8 *)(puVar6 + 0x18) = uStack_d8;
        *(undefined8 *)(puVar6 + 0x20) = param_3;
        *(undefined8 *)(puVar6 + 0x28) = param_4;
        pcStack_a0 = (code *)0x101a57628;
        puStack_c0 = puVar1;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_100ab47f8;
        puStack_a8 = &UNK_110431348;
        ppuVar11 = &puStack_c0;
        puStack_98 = puVar6;
        func_0x000107c60bc4(ppuVar11);
        puVar6 = puStack_98;
        func_0x000107c6157c(param_4);
        func_0x000107c61174(lVar10);
        func_0x000107c61174(uVar8);
        func_0x000107c61574(puVar6);
        func_0x000107c4e55c(lVar13);
        func_0x000107c61170(lVar14);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lStack_110);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar13);
        return;
      }
      func_0x000107c436a4(lVar10);
      func_0x000107c61180();
      func_0x000107c61170();
      puVar6 = &UNK_110431290;
      func_0x000107c613fc(&UNK_110431290,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = param_3;
      *(undefined8 *)(puVar6 + 0x18) = param_4;
      pcStack_a0 = (code *)0x101a5773c;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000b0c7c;
      puStack_a8 = &UNK_1104312a8;
      ppuVar7 = &puStack_c0;
      puStack_98 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c6157c(param_4);
      lVar13 = lStack_108;
      func_0x000107c5f808(lStack_108);
      puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar8 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar9 = uVar8;
      func_0x0001001c7f30();
      func_0x000107c60264(lVar15,&puStack_c8,uVar8,uVar9,lVar3,param_4);
      func_0x000107c5ffe8(0,lVar13,lVar15,ppuVar7);
      func_0x000107c61170(lStack_110);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar14);
      (**(code **)(lVar2 + 8))(lVar15,lVar3);
      pcVar12 = *(code **)(lStack_e8 + 8);
    }
  }
  (*pcVar12)(lVar13,lVar4);
  func_0x000107c61574(puStack_98);
  return;
}



/* Entry: 101a560fc; end: 101a563bf;  */

void FUN_101a560fc(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_a8 = param_4;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_3 == '\x06') {
    puVar3 = &UNK_1104313d0;
    func_0x000107c613fc(&UNK_1104313d0,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_5;
    *(undefined8 *)(puVar3 + 0x28) = param_6;
    uStack_70 = 0x101a57740;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_1104313e8;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_6);
    func_0x000107c5f808(lVar9);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar5 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar6 = uVar5;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar8,&puStack_98,uVar5,uVar6,lVar1,param_6);
    func_0x000107c5ffe8(0,lVar9,puVar8,ppuVar4);
  }
  else {
    puVar3 = &UNK_110431420;
    func_0x000107c613fc(&UNK_110431420,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_5;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    uStack_70 = 0x101a57744;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_110431438;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c6157c(param_6);
    func_0x000107c5f808(lVar9);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar5 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar6 = uVar5;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar8,&puStack_98,uVar5,uVar6,lVar1,param_6);
    func_0x000107c5ffe8(0,lVar9,puVar8,ppuVar4);
  }
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lStack_a0 + 8))(puVar8,lVar1);
  (**(code **)(lVar7 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 101a563c0; end: 101a5645f;  */

void FUN_101a563c0(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  func_0x000107c436a4();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar3 = 0;
    lVar2 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  uVar1 = 6;
  if ((param_1 & 1) == 0) {
    uVar1 = 1;
  }
  FUN_101a560fc(lVar3,lVar2,uVar1,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 101a56460; end: 101a56687; -[_TtC47MemoriesFriendshipFlashbackDatabaseServicesImpl40MemoriesFriendshipFlashbackPersisterImpl persistFriendshipFlashbackWith:completionQueue:completion:] */

/* WARNING: Possible PIC construction at 0x000101a564c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a56520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a564cc) */
/* WARNING: Removing unreachable block (ram,0x000101a56524) */

void FUN_101a56460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101a56688; end: 101a5702b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a56688(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined1 *puVar24;
  ulong uVar25;
  undefined1 auStack_170 [8];
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar2 = 0;
  uStack_100 = param_5;
  func_0x000107c5f7fc();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  puVar24 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar21 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar22 = (long)puVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar5 = &UNK_110430f98;
    func_0x000107c613fc(&UNK_110430f98,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    pcStack_a0 = FUN_101a573a4;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000b0c7c;
    puStack_a8 = &UNK_110430fb0;
    ppuVar6 = &puStack_c0;
    puStack_98 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c6157c(param_4);
    func_0x000107c5f808(lVar22);
    puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar7 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = uVar7;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar24,&puStack_e0,uVar7,uVar8,lVar2,param_4);
    func_0x000107c5ffe8(0,lVar22,puVar24,ppuVar6);
    func_0x000107c60bd0(ppuVar6);
    pcVar16 = *(code **)(lVar17 + 8);
  }
  else {
    lVar4 = *(long *)(param_1 + _DAT_112def2b0);
    uStack_138 = param_4;
    func_0x000107c5c734();
    func_0x000107c61180();
    lStack_f8 = param_1;
    if (lVar4 == 0) {
      puVar5 = &UNK_110430fe8;
      func_0x000107c613fc(&UNK_110430fe8,0x20,7);
      uVar8 = uStack_138;
      *(undefined8 *)(puVar5 + 0x10) = param_3;
      *(undefined8 *)(puVar5 + 0x18) = uStack_138;
      pcStack_a0 = (code *)0x101a57728;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000b0c7c;
      puStack_a8 = &UNK_110431000;
      ppuVar6 = &puStack_c0;
      puStack_98 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c6157c(uVar8);
      func_0x000107c5f808(lVar22);
      puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar7 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar9 = uVar7;
      func_0x0001001c7f30();
      func_0x000107c60264(puVar24,&puStack_e0,uVar7,uVar9,lVar2,uVar8);
      func_0x000107c5ffe8(0,lVar22,puVar24,ppuVar6);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lStack_f8);
      pcVar16 = *(code **)(lVar17 + 8);
    }
    else {
      lStack_148 = lVar4;
      func_0x000107c4d9c0();
      func_0x000107c61180();
      if (lVar4 == 0) {
        uStack_d8 = 0;
        puStack_e0 = (undefined *)0x0;
        puStack_c8 = (undefined *)0x0;
        puStack_d0 = (undefined *)0x0;
      }
      else {
        func_0x000107c60234(&puStack_e0);
        func_0x000107c615e8(lVar4);
      }
      uVar7 = uStack_138;
      uStack_b8 = uStack_d8;
      puStack_c0 = puStack_e0;
      puStack_a8 = puStack_c8;
      puStack_b0 = puStack_d0;
      lStack_140 = lVar17;
      if (puStack_c8 == (undefined *)0x0) {
        func_0x00010006e7f4(&puStack_c0);
      }
      else {
        uVar8 = 0x112dc6598;
        func_0x0001000285a8(0x112dc6598,&UNK_10d9bc300);
        puVar10 = &uStack_e8;
        func_0x000107c6147c(puVar10,&puStack_c0,PTR___sypN_11034f1a8 + 8,uVar8,6);
        if (((ulong)puVar10 & 1) != 0) {
          uVar19 = *(ulong *)(uStack_e8 + 0x10);
          lStack_168 = lVar22;
          lStack_160 = lVar21;
          lStack_158 = lVar2;
          lStack_150 = lVar3;
          uStack_118 = param_3;
          uStack_110 = param_2;
          puStack_108 = puVar24;
          func_0x000107c61434(uStack_e8);
          puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (uVar19 != 0) {
            uVar23 = 0;
            uStack_f0 = uStack_e8 + 0x28;
            uStack_120 = uVar19 - 1;
            do {
              puVar20 = (undefined8 *)(uStack_f0 + uVar23 * 0x10);
              uVar25 = uVar23;
              while( true ) {
                if (*(ulong *)(uStack_e8 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x101a57028);
                  (*pcVar16)();
                }
                uVar1 = puVar20[-1];
                uVar7 = *puVar20;
                uVar23 = uVar25 + 1;
                func_0x00010006c00c(uVar1,uVar7);
                uVar11 = uVar1;
                func_0x000107c5ee20(uVar1,uVar7);
                uVar12 = uVar11;
                func_0x00010565af40();
                func_0x000107c61170(uVar11);
                if ((uVar12 & 1) != 0) break;
                func_0x00010006c090(uVar1,uVar7);
                puVar20 = puVar20 + 2;
                uVar25 = uVar23;
                if (uVar19 == uVar23) goto LAB_101a56b58;
              }
              puVar13 = puVar5;
              func_0x000107c61558();
              puStack_c0 = puVar5;
              if (((ulong)puVar13 & 1) == 0) {
                func_0x0001018740f8(0,*(long *)(puVar5 + 0x10) + 1,1);
              }
              uVar11 = *(ulong *)(puStack_c0 + 0x10);
              if (*(ulong *)(puStack_c0 + 0x18) >> 1 <= uVar11) {
                func_0x0001018740f8(1 < *(ulong *)(puStack_c0 + 0x18),uVar11 + 1,1);
              }
              *(ulong *)(puStack_c0 + 0x10) = uVar11 + 1;
              *(ulong *)(puStack_c0 + uVar11 * 0x10 + 0x20) = uVar1;
              *(undefined8 *)(puStack_c0 + uVar11 * 0x10 + 0x28) = uVar7;
              puVar5 = puStack_c0;
            } while (uStack_120 != uVar25);
          }
LAB_101a56b58:
          func_0x000107c6142c(uStack_e8);
          lVar22 = *(long *)(puVar5 + 0x10);
          func_0x000107c6142c();
          if (lVar22 != 0) {
            func_0x000107c60f34();
            uStack_128 = *(ulong *)(puVar5 + 0x10);
            uStack_120 = uStack_e8;
            if (uStack_128 != 0) {
              lStack_130 = _DAT_112def2b8;
              puVar20 = (undefined8 *)(puVar5 + 0x28);
              uVar19 = 0;
              do {
                if (*(ulong *)(puVar5 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x101a5702c);
                  (*pcVar16)();
                }
                uStack_f0 = uVar19 + 1;
                uVar7 = puVar20[-1];
                uVar8 = *puVar20;
                func_0x00010006c00c(uVar7,uVar8);
                uVar23 = uStack_120;
                func_0x000107c60f38(uStack_120);
                puVar13 = &UNK_110431088;
                func_0x000107c613fc(&UNK_110431088,0x28,7);
                lVar22 = lStack_f8;
                *(ulong *)(puVar13 + 0x10) = uVar19;
                *(undefined **)(puVar13 + 0x18) = puVar5;
                *(ulong *)(puVar13 + 0x20) = uVar23;
                uVar18 = *(undefined8 *)(lStack_f8 + lStack_130);
                puVar14 = &UNK_110430f20;
                func_0x000107c613fc(&UNK_110430f20,0x18,7);
                func_0x000107c61614(puVar14 + 0x10,lVar22);
                puVar15 = &UNK_1104310b0;
                func_0x000107c613fc(&UNK_1104310b0,0x40,7);
                uVar9 = uStack_100;
                *(undefined **)(puVar15 + 0x10) = puVar14;
                *(undefined8 *)(puVar15 + 0x18) = uStack_100;
                *(code **)(puVar15 + 0x20) = FUN_101a573c8;
                *(undefined **)(puVar15 + 0x28) = puVar13;
                *(undefined8 *)(puVar15 + 0x30) = uVar7;
                *(undefined8 *)(puVar15 + 0x38) = uVar8;
                pcStack_a0 = (code *)0x101a573d0;
                puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_b8 = 0x42000000;
                puStack_b0 = &UNK_1000f6b44;
                puStack_a8 = &UNK_1104310c8;
                ppuVar6 = &puStack_c0;
                puStack_98 = puVar15;
                func_0x000107c60bc4(ppuVar6);
                puVar14 = puStack_98;
                func_0x00010006c00c(uVar7,uVar8);
                func_0x000107c6157c(puVar5);
                func_0x000107c61174(uVar23);
                func_0x000107c61174(uVar9);
                func_0x000107c6157c(puVar13);
                func_0x000107c61574(puVar14);
                func_0x000107c4e524(uVar18);
                func_0x000107c60bd0(ppuVar6);
                func_0x000107c61574(puVar13);
                func_0x00010006c090(uVar7,uVar8);
                puVar20 = puVar20 + 2;
                uVar19 = uStack_f0;
              } while (uStack_128 != uStack_f0);
            }
            puVar24 = puStack_108;
            uVar9 = uStack_110;
            uVar8 = uStack_118;
            func_0x000107c61574(puVar5);
            puVar5 = &UNK_110431100;
            func_0x000107c613fc(&UNK_110431100,0x30,7);
            uVar7 = uStack_138;
            lVar2 = lStack_148;
            *(long *)(puVar5 + 0x10) = lStack_148;
            *(undefined8 *)(puVar5 + 0x18) = uVar9;
            *(undefined8 *)(puVar5 + 0x20) = uVar8;
            *(undefined8 *)(puVar5 + 0x28) = uStack_138;
            pcStack_a0 = (code *)0x101a573d4;
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b8 = 0x42000000;
            puStack_b0 = &UNK_1000f6b44;
            puStack_a8 = &UNK_110431118;
            ppuVar6 = &puStack_c0;
            puStack_98 = puVar5;
            func_0x000107c60bc4(ppuVar6);
            func_0x000107c615f4(lVar2,2);
            func_0x000107c6157c(uVar7);
            func_0x000107c61174(uVar9);
            lVar22 = lStack_168;
            func_0x000107c5f808(lStack_168);
            puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x0001001c7eec();
            uVar7 = 0x112d4af90;
            func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
            uVar8 = uVar7;
            func_0x0001001c7f30();
            lVar3 = lStack_158;
            func_0x000107c60264(puVar24,&puStack_e0,uVar7,uVar8,lStack_158,uVar9);
            uVar19 = uStack_120;
            func_0x000107c5ffb8(lVar22,puVar24,uStack_100,ppuVar6);
            func_0x000107c60bd0(ppuVar6);
            func_0x000107c615ec(lVar2,2);
            func_0x000107c61170(uVar19);
            func_0x000107c61170(lStack_f8);
            (**(code **)(lStack_140 + 8))(puVar24,lVar3);
            pcVar16 = *(code **)(lStack_160 + 8);
            lVar3 = lStack_150;
            goto LAB_101a56ff4;
          }
          func_0x000107c61574(puVar5);
          uVar7 = uStack_138;
          lVar3 = lStack_150;
          lVar2 = lStack_158;
          lVar21 = lStack_160;
          lVar22 = lStack_168;
          param_3 = uStack_118;
          puVar24 = puStack_108;
        }
      }
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar5 = &UNK_110431038;
      func_0x000107c613fc(&UNK_110431038,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = param_3;
      *(undefined8 *)(puVar5 + 0x18) = uVar7;
      pcStack_a0 = (code *)0x101a5772c;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000b0c7c;
      puStack_a8 = &UNK_110431050;
      ppuVar6 = &puStack_c0;
      puStack_98 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c6157c(uVar7);
      func_0x000107c5f808(lVar22);
      puStack_e0 = puVar13;
      func_0x0001001c7eec();
      uVar8 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar9 = uVar8;
      func_0x0001001c7f30();
      func_0x000107c60264(puVar24,&puStack_e0,uVar8,uVar9,lVar2,uVar7);
      func_0x000107c5ffe8(0,lVar22,puVar24,ppuVar6);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lStack_148);
      func_0x000107c61170(lStack_f8);
      pcVar16 = *(code **)(lStack_140 + 8);
    }
  }
  (*pcVar16)(puVar24,lVar2);
  pcVar16 = *(code **)(lVar21 + 8);
LAB_101a56ff4:
  (*pcVar16)(lVar22,lVar3);
  func_0x000107c61574(puStack_98);
  return;
}



/* Entry: 101a5702c; end: 101a5720b;  */

void FUN_101a5702c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4ff88(param_1);
  puVar3 = &UNK_110431150;
  func_0x000107c613fc(&UNK_110431150,0x30,7);
  *(undefined8 *)(puVar3 + 0x18) = 0xe500000000000000;
  *(undefined8 *)(puVar3 + 0x10) = 0x70756f7267;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  pcStack_70 = FUN_101a573e0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110431168;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c(param_4);
  func_0x000107c5f808(lVar8);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar7,&puStack_98,uVar5,uVar6,lVar1,param_4);
  func_0x000107c5ffe8(0,lVar8,puVar7,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lVar9 + 8))(puVar7,lVar1);
  (**(code **)(lVar10 + 8))(lVar8,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 101a5720c; end: 101a5729b; -[_TtC47MemoriesFriendshipFlashbackDatabaseServicesImpl40MemoriesFriendshipFlashbackPersisterImpl persistExtensionFriendshipFlashbacksWithCompletionQueue:completion:] */

void FUN_101a5720c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110430ef8;
  func_0x000107c613fc(&UNK_110430ef8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000101a56540(param_3,FUN_101a57364,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101a5729c; end: 101a572fb; -[_TtC47MemoriesFriendshipFlashbackDatabaseServicesImpl40MemoriesFriendshipFlashbackPersisterImpl init] */

void FUN_101a5729c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesFriendshipFlashbackDatabaseServicesImpl.MemoriesFriendshipFlashbackPersisterImpl"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a572c8);
  (*pcVar1)();
}



/* Entry: 101a572fc; end: 101a57343; -[_TtC47MemoriesFriendshipFlashbackDatabaseServicesImpl40MemoriesFriendshipFlashbackPersisterImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a572fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112def2a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112def2b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112def2b8));
  return;
}



/* Entry: 101a57344; end: 101a57363;  */

void FUN_101a57344(void)

{
  func_0x000107c61168(&PTR_PTR_1127f1b08);
  return;
}



/* Entry: 101a57364; end: 101a573a3;  */

void FUN_101a57364(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101a57374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 101a573a4; end: 101a573c7;  */

void FUN_101a573a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 101a573c8; end: 101a573df;  */

void FUN_101a573c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101a573e0; end: 101a57403;  */

void FUN_101a573e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))(1);
  return;
}



/* Entry: 101a57404; end: 101a5755f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a57404(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_112def2a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112def2b0) = param_2;
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efccdd0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + _DAT_112def2b8) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101a57560; end: 101a5761f;  */

long FUN_101a57560(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  char cStack_71;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  lStack_40 = 0;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lStack_68 = lStack_40;
  if (unaff_x20 == 0) {
    param_1 = lStack_40;
    func_0x000107c61174();
    func_0x000107c5ed30();
    lVar1 = param_1;
    func_0x000107c61170(param_1);
    func_0x000107c61654();
  }
  else {
    lVar1 = lStack_40;
    func_0x000107c61174();
    lStack_68 = unaff_x21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  pcStack_48 = FUN_101a57620;
  lStack_70 = param_1;
  lStack_58 = lStack_68;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain();
  func_0x00010565f1a8(uVar2,&cStack_71);
  _objc_retainAutoreleasedReturnValue();
  if (cStack_71 == '\x01') {
    func_0x00010c25ed40(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  return lVar1;
}



/* Entry: 101a57620; end: 101a57633;  */

void FUN_101a57620(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  char cStack_31;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _objc_retain();
  func_0x00010565f1a8(uVar1,&cStack_31);
  _objc_retainAutoreleasedReturnValue();
  if (cStack_31 == '\x01') {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 101a57634; end: 101a5766f;  */

void FUN_101a57634(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a57670; end: 101a5767f;  */

/* WARNING: Removing unreachable block (ram,0x000101a55ac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a57670(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar3 = 0;
  func_0x000107c5f7fc();
  lStack_e0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar15 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar5 + 0x10,auStack_90,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    puVar6 = &UNK_1104311a0;
    func_0x000107c613fc(&UNK_1104311a0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar9;
    *(undefined8 *)(puVar6 + 0x18) = uVar8;
    pcStack_a0 = (code *)0x101a57730;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000b0c7c;
    puStack_a8 = &UNK_1104311b8;
    ppuVar7 = &puStack_c0;
    puStack_98 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c6157c(uVar8);
    func_0x000107c5f808(lVar14);
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar9 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar10 = uVar9;
    func_0x0001001c7f30();
    func_0x000107c60264(lVar15,&puStack_c8,uVar9,uVar10,lVar3,uVar8);
    func_0x000107c5ffe8(0,lVar14,lVar15,ppuVar7);
    func_0x000107c60bd0(ppuVar7);
    (**(code **)(lStack_e0 + 8))(lVar15,lVar3);
    pcVar13 = *(code **)(lVar16 + 8);
  }
  else {
    lStack_108 = lVar14;
    lStack_100 = lVar15;
    lStack_f8 = lVar5;
    lStack_f0 = lVar4;
    lStack_e8 = lVar16;
    func_0x000107c610f8(PTR_PTR_1126bc788);
    func_0x00010006c00c(lVar1,uVar10);
    lVar16 = lVar1;
    FUN_101a57560(lVar1,uVar10);
    func_0x00010006c090(lVar1,uVar10);
    lVar11 = lVar16;
    func_0x00010565aaf4();
    func_0x000107c61180();
    lVar15 = lStack_e0;
    lVar1 = lStack_e8;
    lVar4 = lStack_f0;
    lVar5 = lStack_f8;
    if (lVar11 == 0) {
      puVar6 = &UNK_110431240;
      func_0x000107c613fc(&UNK_110431240,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar9;
      *(undefined8 *)(puVar6 + 0x18) = uVar8;
      pcStack_a0 = (code *)0x101a57738;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000b0c7c;
      puStack_a8 = &UNK_110431258;
      ppuVar7 = &puStack_c0;
      puStack_98 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c6157c(uVar8);
      lVar14 = lStack_108;
      func_0x000107c5f808(lStack_108);
      puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar9 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar10 = uVar9;
      func_0x0001001c7f30();
      lVar5 = lStack_100;
      func_0x000107c60264(lStack_100,&puStack_c8,uVar9,uVar10,lVar3,uVar8);
      func_0x000107c5ffe8(0,lVar14,lVar5,ppuVar7);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lStack_f8);
      func_0x000107c61170(lVar16);
      (**(code **)(lVar15 + 8))(lVar5,lVar3);
      pcVar13 = *(code **)(lVar1 + 8);
    }
    else {
      lVar14 = *(long *)(lStack_f8 + _DAT_112def2a8);
      lStack_110 = lVar16;
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar1 = lStack_100;
      if (lVar14 != 0) {
        puVar6 = &UNK_1104312e0;
        func_0x000107c613fc(&UNK_1104312e0,0x18,7);
        *(long *)(puVar6 + 0x10) = lVar11;
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_a0 = FUN_101a57620;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_100ab3660;
        puStack_a8 = &UNK_1104312f8;
        ppuVar7 = &puStack_c0;
        puStack_98 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_98;
        func_0x000107c61174();
        func_0x000107c61574(puVar6);
        puVar6 = &UNK_110431330;
        func_0x000107c613fc(&UNK_110431330,0x30,7);
        uVar10 = uStack_d8;
        *(long *)(puVar6 + 0x10) = lVar11;
        *(undefined8 *)(puVar6 + 0x18) = uStack_d8;
        *(undefined8 *)(puVar6 + 0x20) = uVar9;
        *(undefined8 *)(puVar6 + 0x28) = uVar8;
        pcStack_a0 = (code *)0x101a57628;
        puStack_c0 = puVar2;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_100ab47f8;
        puStack_a8 = &UNK_110431348;
        ppuVar12 = &puStack_c0;
        puStack_98 = puVar6;
        func_0x000107c60bc4(ppuVar12);
        puVar6 = puStack_98;
        func_0x000107c6157c(uVar8);
        func_0x000107c61174(lVar11);
        func_0x000107c61174(uVar10);
        func_0x000107c61574(puVar6);
        func_0x000107c4e55c(lVar14);
        func_0x000107c61170(lVar5);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lStack_110);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(lVar14);
        return;
      }
      func_0x000107c436a4(lVar11);
      func_0x000107c61180();
      func_0x000107c61170();
      puVar6 = &UNK_110431290;
      func_0x000107c613fc(&UNK_110431290,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar9;
      *(undefined8 *)(puVar6 + 0x18) = uVar8;
      pcStack_a0 = (code *)0x101a5773c;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000b0c7c;
      puStack_a8 = &UNK_1104312a8;
      ppuVar7 = &puStack_c0;
      puStack_98 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c6157c(uVar8);
      lVar14 = lStack_108;
      func_0x000107c5f808(lStack_108);
      puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar9 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar10 = uVar9;
      func_0x0001001c7f30();
      func_0x000107c60264(lVar1,&puStack_c8,uVar9,uVar10,lVar3,uVar8);
      func_0x000107c5ffe8(0,lVar14,lVar1,ppuVar7);
      func_0x000107c61170(lStack_110);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar5);
      (**(code **)(lVar15 + 8))(lVar1,lVar3);
      pcVar13 = *(code **)(lStack_e8 + 8);
    }
  }
  (*pcVar13)(lVar14,lVar4);
  func_0x000107c61574(puStack_98);
  return;
}



/* Entry: 101a57680; end: 101a576ab;  */

void FUN_101a57680(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a576ac; end: 101a5774b;  */

void FUN_101a576ac(long param_1,long param_2)

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



/* Entry: 101a5774c; end: 101a578fb;  */

long FUN_101a5774c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110431528;
  func_0x000107c613fc(&UNK_110431528,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112def2e8,&UNK_10d9bc310);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_101a57988;
  func_0x0001000bdd8c(FUN_101a57988,puVar1);
  uVar3 = 0;
  func_0x0001001dffc4(0);
  func_0x000107c610f8();
  func_0x000103fbd7c0(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101a578fc; end: 101a57987;  */

void FUN_101a578fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000101a57d0c();
  func_0x0001000285a8(0x112dc0fd8,&UNK_10d97e7f0);
  func_0x000107c5cec4();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  FUN_101a57a50();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110431580;
  *param_1 = uVar2;
  return;
}



/* Entry: 101a57988; end: 101a5799f;  */

void FUN_101a57988(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x000101a57d0c();
  func_0x0001000285a8(0x112dc0fd8,&UNK_10d97e7f0);
  func_0x000107c5cec4();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  FUN_101a57a50();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110431580;
  *param_1 = uVar2;
  return;
}



/* Entry: 101a579a0; end: 101a57a3f;  */

void FUN_101a579a0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a57a40; end: 101a57a4f;  */

void FUN_101a57a40(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a57a50; end: 101a57adf;  */

void FUN_101a57a50(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  puVar1 = &UNK_1104315d8;
  func_0x000107c613fc(&UNK_1104315d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(long *)(puVar1 + 0x18) = unaff_x20;
  func_0x0001000285a8(0x112def478,&UNK_10d9bc420);
  func_0x000107c613fc();
  pcVar2 = FUN_101a589a0;
  func_0x0001000bdd8c(FUN_101a589a0,puVar1);
  func_0x000107c613fc();
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return;
}



/* Entry: 101a57ae0; end: 101a57b9b;  */

void FUN_101a57ae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112def480,&UNK_10d9bc428);
  puVar1 = &UNK_110431600;
  func_0x000107c613fc(&UNK_110431600,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  uVar2 = 2;
  func_0x000104887c7c(2,0,0x48,4,0xd000000000000019,0x800000010efcce60,&UNK_10d9bc438,puVar1);
  func_0x000107c61574(puVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101a57b9c; end: 101a57bb3;  */

void FUN_101a57b9c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a57bb4,0,0);
  return;
}



/* Entry: 101a57bb4; end: 101a57ce7;  */

void FUN_101a57bb4(undefined1 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  if (lVar3 == 0) {
    func_0x000101a58a48();
    func_0x000107c613f8(&UNK_11072c3b0,param_1,0,0);
    *param_1 = 0;
    func_0x000107c61654();
  }
  else {
    FUN_101a588a0(0,0x112def460,&PTR_PTR_1126a85e8);
    func_0x000107c614e8();
    puVar1 = (undefined1 *)0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010efcce80);
    lVar2 = lVar3;
    func_0x000107c5cec8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar2 != 0) {
      plVar4 = *(long **)(unaff_x22 + 0x18);
      func_0x000107c615e8(lVar3);
      *plVar4 = lVar2;
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_101a57cd4;
    }
    func_0x000101a58a48();
    func_0x000107c613f8(&UNK_11072c3b0,puVar1,0,0);
    *puVar1 = 1;
    func_0x000107c61654();
    func_0x000107c615e8(lVar3);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101a57cd4:
                    /* WARNING: Could not recover jumptable at 0x000101a57ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a57ce8; end: 101a57d2b;  */

void FUN_101a57ce8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a57d2c; end: 101a57d67;  */

void FUN_101a57d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_12;
  *(undefined8 *)(unaff_x22 + 0xf0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_11;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_10;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_9;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_7;
  *(undefined8 *)(unaff_x22 + 200) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a57d68,0,0);
  return;
}



/* Entry: 101a57d68; end: 101a57e2b;  */

void FUN_101a57d68(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x80);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101a57dd8;
                    /* WARNING: Could not recover jumptable at 0x000101a57dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101a5873c();
  return;
}



/* Entry: 101a57e2c; end: 101a57f77;  */

void FUN_101a57e2c(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  cVar2 = *(char *)(unaff_x22 + 0x110);
  if (cVar2 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x108);
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x88,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
    *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar7;
    uVar4 = 0;
    FUN_101a588a0(0,0x112def460,&PTR_PTR_1126a85e8);
    func_0x0001031acfe4(0,0,0x101a58960,unaff_x22 + 0x10,uVar5,uVar4,PTR___sytN_11034f1b0 + 8);
    FUN_101a5888c(uVar5,cVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a57f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a57f78; end: 101a580bf;  */

void FUN_101a57f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,long param_12,
                  undefined8 param_13,long param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5ee8c();
  func_0x000107c5fadc(param_5,param_6);
  uVar1 = 0;
  if (param_8 != 0) {
    func_0x000107c5fadc(param_7,param_8);
    uVar1 = param_7;
  }
  if (param_10 == 0) {
    param_9 = 0;
  }
  else {
    func_0x000107c5fadc(param_9,param_10);
  }
  if (param_12 == 0) {
    param_11 = 0;
  }
  else {
    func_0x000107c5fadc(param_11,param_12);
  }
  uVar2 = 0;
  if (param_14 != 0) {
    func_0x000107c5fadc(param_13,param_14);
    uVar2 = param_13;
  }
  func_0x000107c2bb48(param_1,param_2,param_3,param_5,uVar1,param_9,param_11,uVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101a580c0; end: 101a580d7;  */

void FUN_101a580c0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a580d8,0,0);
  return;
}



/* Entry: 101a580d8; end: 101a5819b;  */

void FUN_101a580d8(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x28);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101a58148;
                    /* WARNING: Could not recover jumptable at 0x000101a58144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101a5873c();
  return;
}



/* Entry: 101a5819c; end: 101a582cf;  */

void FUN_101a5819c(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x68);
  if (cVar1 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x60);
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x30,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101a582ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  uVar3 = 0;
  FUN_101a588a0(0,0x112def460,&PTR_PTR_1126a85e8);
  uVar5 = 0x112def468;
  func_0x0001000285a8(0x112def468,&UNK_10d9bc408);
  func_0x0001031ac8e8(unaff_x22 + 0x38,0,0,FUN_101a58940,unaff_x22 + 0x10,uVar4,uVar3,uVar5);
  FUN_101a5888c(uVar4,cVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a582cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 101a582d0; end: 101a582e7;  */

void FUN_101a582d0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a582e8,0,0);
  return;
}



/* Entry: 101a582e8; end: 101a583ab;  */

void FUN_101a582e8(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x28);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101a58358;
                    /* WARNING: Could not recover jumptable at 0x000101a58354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101a5873c();
  return;
}



/* Entry: 101a583ac; end: 101a584df;  */

void FUN_101a583ac(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x68);
  if (cVar1 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x60);
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x30,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101a584bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  uVar3 = 0;
  FUN_101a588a0(0,0x112def460,&PTR_PTR_1126a85e8);
  uVar5 = 0x112def468;
  func_0x0001000285a8(0x112def468,&UNK_10d9bc408);
  func_0x0001031ac8e8(unaff_x22 + 0x38,0,0,FUN_101a5886c,unaff_x22 + 0x10,uVar4,uVar3,uVar5);
  FUN_101a5888c(uVar4,cVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a584dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 101a584e0; end: 101a5856b;  */

void FUN_101a584e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5ee8c();
  (*param_4)();
  func_0x000107c61180();
  uVar1 = 0;
  FUN_101a588a0(0,0x112def470,&PTR_PTR_1126dea10);
  uVar2 = param_2;
  func_0x000107c5fc54(param_2,uVar1);
  func_0x000107c61170(param_2);
  *param_1 = uVar2;
  return;
}



/* Entry: 101a5856c; end: 101a58617;  */

void FUN_101a5856c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9,long param_10,long param_11,long param_12)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a58618;
  plVar1[0x1d] = param_12;
  plVar1[0x1e] = lVar2;
  plVar1[0x1c] = param_11;
  plVar1[0x1b] = param_10;
  plVar1[0x1a] = param_9;
  plVar1[0x18] = param_7;
  plVar1[0x19] = param_8;
  plVar1[0x16] = param_5;
  plVar1[0x17] = param_6;
  plVar1[0x14] = param_3;
  plVar1[0x15] = param_4;
  plVar1[0x12] = param_1;
  plVar1[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a57d68,0,0);
  return;
}



/* Entry: 101a58618; end: 101a58653;  */

void FUN_101a58618(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a58650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a58654; end: 101a586a3;  */

void FUN_101a58654(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a58a88;
  plVar1[8] = param_1;
  plVar1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a580d8,0,0);
  return;
}



/* Entry: 101a586a4; end: 101a586f3;  */

void FUN_101a586a4(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a586f4;
  plVar1[8] = param_1;
  plVar1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a582e8,0,0);
  return;
}



/* Entry: 101a586f4; end: 101a5873b;  */

void FUN_101a586f4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a58738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a5873c; end: 101a58753;  */

void FUN_101a5873c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a58754,0,0);
  return;
}



/* Entry: 101a58754; end: 101a5881b;  */

void FUN_101a58754(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101a5879c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a5881c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1104315b0;
  func_0x000107c613fc(&UNK_1104315b0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101a588e0,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a5881c; end: 101a5885b;  */

void FUN_101a5881c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a5885c,0,0);
  return;
}



/* Entry: 101a5885c; end: 101a5886b;  */

void FUN_101a5885c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a58868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101a5886c; end: 101a5888b;  */

void FUN_101a5886c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101a584e0(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_10af24a98);
  return;
}



/* Entry: 101a5888c; end: 101a5889f;  */

void FUN_101a5888c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101a588a0; end: 101a588df;  */

void FUN_101a588a0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a588e0; end: 101a5892b;  */

void FUN_101a588e0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101a5892c(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101a5892c; end: 101a5893f;  */

void FUN_101a5892c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


