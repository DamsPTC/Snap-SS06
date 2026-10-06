/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011c1bb4; end: 1011c1c1f;  */

void FUN_1011c1bb4(void)

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
    func_0x0001011c242c(0,0x112d64e68,&PTR_PTR_1126b4628);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d64e70;
  plVar5 = (long *)&UNK_10d929f70;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1011c1c20; end: 1011c1c33;  */

void FUN_1011c1c20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d64e78 == (undefined *)0x0 || ((ulong)puRam0000000112d64e78 & 1) != 0) {
    puVar1 = &UNK_10e84ce00;
    func_0x000107c61518(&UNK_10e84ce00,0x2f,0,0);
    puRam0000000112d64e78 = puVar1;
  }
  return;
}



/* Entry: 1011c1c34; end: 1011c1d5b;  */

ulong FUN_1011c1c34(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c1d5c);
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
  FUN_1011c1b34(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c1d58);
      (*pcVar1)();
    }
    FUN_1011c1d5c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1011c1d5c; end: 1011c1e7f;  */

long FUN_1011c1d5c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1011c1e7c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011c1e80);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d64e60;
        func_0x0001000285a8(0x112d64e60,&UNK_10d929f68);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d64e60;
      func_0x0001000285a8(0x112d64e60,&UNK_10d929f68);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1011c1e78);
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



/* Entry: 1011c1e80; end: 1011c2023;  */

ulong FUN_1011c1e80(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c1f58);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c1f5c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000022,0x800000010ef2b970);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c2024);
  (*pcVar2)();
}



/* Entry: 1011c2024; end: 1011c21df;  */

ulong FUN_1011c2024(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c2108);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c210c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
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
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001011c242c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c21e0);
  (*pcVar2)();
}



/* Entry: 1011c21e0; end: 1011c220b;  */

void FUN_1011c21e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  param_1[9] = param_11;
  param_1[8] = param_10;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[0xd] = param_15;
  param_1[0xc] = param_14;
  param_1[0xe] = param_16;
  return;
}



/* Entry: 1011c220c; end: 1011c23cb;  */

undefined * FUN_1011c220c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_70;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (uVar9 != 0) {
    uStack_70 = param_1 & 0xffffffffffffff8;
    uVar10 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_70 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1011c2384);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
          uVar8 = param_2;
        }
        else {
          uVar4 = uVar10;
          uVar8 = param_1;
          FUN_1011c2024(uVar10,param_1,&PTR_PTR_1126b4628,0x112d64e68);
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1011c2380);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c4c99c();
        func_0x000107c61180();
        param_2 = uVar8;
        if (uVar5 == 0) break;
        uVar6 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        param_2 = uVar8;
        func_0x000104032810(uVar6,uVar8);
        func_0x000107c6142c(uVar8);
        if ((uVar6 & 1) == 0) break;
        func_0x000107c61170(uVar4);
        uVar10 = uVar10 + 1;
        if (uVar1 == uVar9) {
          return puVar2;
        }
      }
      puVar7 = puVar2;
      func_0x000107c61558();
      if (((ulong)puVar7 & 1) == 0) {
        param_2 = *(long *)(puVar2 + 0x10) + 1;
        FUN_1011c1898(0,param_2,1);
      }
      uVar8 = *(ulong *)(puVar2 + 0x10);
      uVar10 = uVar8 + 1;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar8) {
        param_2 = uVar10;
        FUN_1011c1898(1 < *(ulong *)(puVar2 + 0x18),uVar10,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar10;
      *(ulong *)(puVar2 + uVar8 * 8 + 0x20) = uVar4;
      uVar10 = uVar1;
    } while (uVar1 != uVar9);
  }
  return puVar2;
}



/* Entry: 1011c23cc; end: 1011c246b;  */

undefined8 FUN_1011c23cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1011c0d4c(param_2,param_1,&UNK_11038f818);
  return param_2;
}



/* Entry: 1011c246c; end: 1011c274f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1011c246c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
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
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined8 unaff_x20;
  undefined1 auStack_158 [120];
  undefined1 auStack_e0 [128];
  
  uVar17 = 0x10;
  func_0x000107c613fc();
  uVar2 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  uVar2 = param_4;
  func_0x000107c4cdcc();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c3e188();
  func_0x000107c61180();
  lVar5 = param_5;
  func_0x000107c406a0();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar6 = param_6;
    func_0x000107c4e6e8();
    func_0x000107c61180();
    uVar7 = param_7;
    func_0x000107c5b42c();
    func_0x000107c61180();
    uVar8 = param_8;
    func_0x000107c4f1c8();
    func_0x000107c61180();
    uVar9 = param_9;
    func_0x000107c5b3c8();
    func_0x000107c61180();
    uVar10 = param_10;
    func_0x000107c4eaf8();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c614f0();
    uVar12 = param_11;
    func_0x000107c4c984();
    func_0x000107c61180();
    uVar13 = param_12;
    func_0x000107c3f854();
    func_0x000107c61180();
    uVar14 = param_13;
    func_0x000107c4d80c();
    func_0x000107c61180();
    func_0x000107c61174();
    uVar15 = param_15;
    func_0x000107c43d48();
    func_0x000107c61180();
    FUN_1011c21e0(auStack_e0,uVar3,uVar17,uVar2,uVar4,lVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12,
                  uVar13,uVar14,param_14,uVar15,uVar11);
    FUN_1011c23cc(auStack_e0,auStack_158);
    puVar16 = auStack_e0;
    FUN_1011c276c(puVar16);
    func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
    func_0x000107c61170(puVar16);
    func_0x0001011c2400(auStack_e0);
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
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c2750);
  (*pcVar1)();
}



/* Entry: 1011c2750; end: 1011c276b;  */

void FUN_1011c2750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011c276c; end: 1011c28ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1011c276c(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long *plVar7;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long alStack_a0 [2];
  undefined **appuStack_90 [10];
  
  appuStack_90[8] = (undefined **)&UNK_11038f818;
  appuStack_90[9] = &PTR_DAT_11038f860;
  ppuVar5 = (undefined **)&UNK_11038f8d0;
  ppuVar2 = ppuVar5;
  func_0x000107c613fc(&UNK_11038f8d0,0x88,7);
  puVar8 = (undefined *)param_1[8];
  puVar10 = (undefined *)param_1[0xb];
  puVar9 = (undefined *)param_1[10];
  ppuVar2[0xb] = (undefined *)param_1[9];
  ppuVar2[10] = puVar8;
  ppuVar2[0xd] = puVar10;
  ppuVar2[0xc] = puVar9;
  puVar8 = (undefined *)param_1[0xc];
  ppuVar2[0xf] = (undefined *)param_1[0xd];
  ppuVar2[0xe] = puVar8;
  ppuVar2[0x10] = (undefined *)param_1[0xe];
  puVar8 = (undefined *)*param_1;
  puVar10 = (undefined *)param_1[3];
  puVar9 = (undefined *)param_1[2];
  ppuVar2[3] = (undefined *)param_1[1];
  ppuVar2[2] = puVar8;
  ppuVar2[5] = puVar10;
  ppuVar2[4] = puVar9;
  puVar8 = (undefined *)param_1[4];
  puVar10 = (undefined *)param_1[7];
  puVar9 = (undefined *)param_1[6];
  ppuVar2[7] = (undefined *)param_1[5];
  ppuVar2[6] = puVar8;
  ppuVar2[9] = puVar10;
  ppuVar2[8] = puVar9;
  lVar3 = 0;
  appuStack_90[5] = ppuVar2;
  FUN_1011c0bb8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001000c6518(appuStack_90 + 5,&UNK_11038f818);
  (*(code *)PTR____chkstk_darwin_11034bd40)(0x78);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))((undefined8 *)((long)alStack_a0 + lVar1));
  appuStack_90[3] = (undefined **)&UNK_11038f818;
  appuStack_90[4] = &PTR_DAT_11038f860;
  func_0x000107c613fc(&UNK_11038f8d0,0x88,7);
  appuStack_90[0] = ppuVar5;
  puVar8 = *(undefined **)((long)appuStack_90 + lVar1 + 0x30);
  puVar10 = *(undefined **)((long)appuStack_90 + lVar1 + 0x48);
  puVar9 = *(undefined **)((long)appuStack_90 + lVar1 + 0x40);
  ppuVar5[0xb] = *(undefined **)((long)appuStack_90 + lVar1 + 0x38);
  ppuVar5[10] = puVar8;
  ppuVar5[0xd] = puVar10;
  ppuVar5[0xc] = puVar9;
  puVar8 = *(undefined **)(&stack0xffffffffffffffc0 + lVar1);
  ppuVar5[0xf] = *(undefined **)(&stack0xffffffffffffffc8 + lVar1);
  ppuVar5[0xe] = puVar8;
  ppuVar5[0x10] = *(undefined **)(&stack0xffffffffffffffd0 + lVar1);
  puVar8 = *(undefined **)((long)alStack_a0 + lVar1);
  puVar10 = *(undefined **)((long)alStack_a0 + lVar1 + 0x18);
  puVar9 = *(undefined **)((long)alStack_a0 + lVar1 + 0x10);
  ppuVar5[3] = *(undefined **)((long)alStack_a0 + lVar1 + 8);
  ppuVar5[2] = puVar8;
  ppuVar5[5] = puVar10;
  ppuVar5[4] = puVar9;
  puVar8 = *(undefined **)((long)alStack_a0 + lVar1 + 0x20);
  puVar10 = *(undefined **)((long)appuStack_90 + lVar1 + 0x28);
  puVar9 = *(undefined **)((long)appuStack_90 + lVar1 + 0x20);
  ppuVar5[7] = *(undefined **)((long)appuStack_90 + lVar1 + 0x18);
  ppuVar5[6] = puVar8;
  ppuVar5[9] = puVar10;
  ppuVar5[8] = puVar9;
  lVar1 = _DAT_112d64e28;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + lVar1) = uVar6;
  FUN_1011c0c04(alStack_a0 + 2,lVar4 + _DAT_112d64e30);
  plVar7 = alStack_a0;
  alStack_a0[0] = lVar4;
  alStack_a0[1] = lVar3;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_a0 + 2);
  func_0x0001000834e4(appuStack_90 + 5);
  return plVar7;
}



/* Entry: 1011c2900; end: 1011c291f;  */

void FUN_1011c2900(void)

{
  func_0x000107c61168(&PTR_PTR_112d64ec8);
  return;
}



/* Entry: 1011c2920; end: 1011c292b; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2920(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f20;
  func_0x000107c61428(param_1 + _DAT_112d64f20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c292c; end: 1011c2937; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c292c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f20;
  func_0x000107c61428(param_1 + _DAT_112d64f20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2938; end: 1011c2943; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2938(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f28;
  func_0x000107c61428(param_1 + _DAT_112d64f28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c2944; end: 1011c294f; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2944(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f28;
  func_0x000107c61428(param_1 + _DAT_112d64f28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2950; end: 1011c295b; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint arroyoChatLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2950(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f30;
  func_0x000107c61428(param_1 + _DAT_112d64f30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c295c; end: 1011c2967; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setArroyoChatLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c295c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f30;
  func_0x000107c61428(param_1 + _DAT_112d64f30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2968; end: 1011c2973; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint messageRenderingPluginServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2968(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f38;
  func_0x000107c61428(param_1 + _DAT_112d64f38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c2974; end: 1011c297f; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setMessageRenderingPluginServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2974(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f38;
  func_0x000107c61428(param_1 + _DAT_112d64f38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2980; end: 1011c298b; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint conversationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2980(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f40;
  func_0x000107c61428(param_1 + _DAT_112d64f40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c298c; end: 1011c2997; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setConversationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c298c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f40;
  func_0x000107c61428(param_1 + _DAT_112d64f40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2998; end: 1011c29a3; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint photoPermissionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2998(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f48;
  func_0x000107c61428(param_1 + _DAT_112d64f48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c29a4; end: 1011c29af; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setPhotoPermissionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c29a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f48;
  func_0x000107c61428(param_1 + _DAT_112d64f48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c29b0; end: 1011c29bb; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint snapVideoFilterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c29b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f50;
  func_0x000107c61428(param_1 + _DAT_112d64f50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c29bc; end: 1011c29c7; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setSnapVideoFilterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c29bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f50;
  func_0x000107c61428(param_1 + _DAT_112d64f50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c29c8; end: 1011c29d3; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint previewVideoProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c29c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f58;
  func_0x000107c61428(param_1 + _DAT_112d64f58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c29d4; end: 1011c29df; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setPreviewVideoProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c29d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f58;
  func_0x000107c61428(param_1 + _DAT_112d64f58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c29e0; end: 1011c29eb; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint snapSavingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c29e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f60;
  func_0x000107c61428(param_1 + _DAT_112d64f60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c29ec; end: 1011c29f7; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setSnapSavingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c29ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f60;
  func_0x000107c61428(param_1 + _DAT_112d64f60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c29f8; end: 1011c2a03; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint polaroidViewTransitionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c29f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f68;
  func_0x000107c61428(param_1 + _DAT_112d64f68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c2a04; end: 1011c2a0f; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setPolaroidViewTransitionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f68;
  func_0x000107c61428(param_1 + _DAT_112d64f68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2a10; end: 1011c2a1b; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint chatMediaFetchingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2a10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f70;
  func_0x000107c61428(param_1 + _DAT_112d64f70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c2a1c; end: 1011c2a27; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setChatMediaFetchingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f70;
  func_0x000107c61428(param_1 + _DAT_112d64f70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2a28; end: 1011c2a33; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint chatContentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2a28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f78;
  func_0x000107c61428(param_1 + _DAT_112d64f78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c2a34; end: 1011c2a3f; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setChatContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f78;
  func_0x000107c61428(param_1 + _DAT_112d64f78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2a40; end: 1011c2a4b; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2a40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f80;
  func_0x000107c61428(param_1 + _DAT_112d64f80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c2a4c; end: 1011c2a57; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f80;
  func_0x000107c61428(param_1 + _DAT_112d64f80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2a58; end: 1011c2a63; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint watermarkingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2a58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f88;
  func_0x000107c61428(param_1 + _DAT_112d64f88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c2a64; end: 1011c2a6f; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setWatermarkingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f88;
  func_0x000107c61428(param_1 + _DAT_112d64f88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2a70; end: 1011c2a7b; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint dreamsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2a70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64f90;
  func_0x000107c61428(param_1 + _DAT_112d64f90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c2a7c; end: 1011c2abf;  */

void FUN_1011c2a7c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c2ac0; end: 1011c2acb; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setDreamsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64f90;
  func_0x000107c61428(param_1 + _DAT_112d64f90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2acc; end: 1011c2b1f;  */

void FUN_1011c2acc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c2b20; end: 1011c328f;  */

/* WARNING: Possible PIC construction at 0x0001011c2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2e6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c31a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c31b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c31c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c31d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c31e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c31f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c30e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c30f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c30a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c30b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c30c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c30d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c3034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c2f34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c2f48) */
/* WARNING: Removing unreachable block (ram,0x0001011c2f68) */
/* WARNING: Removing unreachable block (ram,0x0001011c2f98) */
/* WARNING: Removing unreachable block (ram,0x0001011c2f88) */
/* WARNING: Removing unreachable block (ram,0x0001011c2fc8) */
/* WARNING: Removing unreachable block (ram,0x0001011c2fb8) */
/* WARNING: Removing unreachable block (ram,0x0001011c2fa8) */
/* WARNING: Removing unreachable block (ram,0x0001011c2ff8) */
/* WARNING: Removing unreachable block (ram,0x0001011c2fe8) */
/* WARNING: Removing unreachable block (ram,0x0001011c2fd8) */
/* WARNING: Removing unreachable block (ram,0x0001011c3038) */
/* WARNING: Removing unreachable block (ram,0x0001011c3028) */
/* WARNING: Removing unreachable block (ram,0x0001011c3018) */
/* WARNING: Removing unreachable block (ram,0x0001011c3088) */
/* WARNING: Removing unreachable block (ram,0x0001011c3078) */
/* WARNING: Removing unreachable block (ram,0x0001011c3068) */
/* WARNING: Removing unreachable block (ram,0x0001011c3058) */
/* WARNING: Removing unreachable block (ram,0x0001011c30d8) */
/* WARNING: Removing unreachable block (ram,0x0001011c30c8) */
/* WARNING: Removing unreachable block (ram,0x0001011c30b8) */
/* WARNING: Removing unreachable block (ram,0x0001011c30a8) */
/* WARNING: Removing unreachable block (ram,0x0001011c3098) */
/* WARNING: Removing unreachable block (ram,0x0001011c3128) */
/* WARNING: Removing unreachable block (ram,0x0001011c3118) */
/* WARNING: Removing unreachable block (ram,0x0001011c3108) */
/* WARNING: Removing unreachable block (ram,0x0001011c30f8) */
/* WARNING: Removing unreachable block (ram,0x0001011c30e8) */
/* WARNING: Removing unreachable block (ram,0x0001011c3188) */
/* WARNING: Removing unreachable block (ram,0x0001011c3178) */
/* WARNING: Removing unreachable block (ram,0x0001011c3168) */
/* WARNING: Removing unreachable block (ram,0x0001011c3158) */
/* WARNING: Removing unreachable block (ram,0x0001011c3148) */
/* WARNING: Removing unreachable block (ram,0x0001011c31f8) */
/* WARNING: Removing unreachable block (ram,0x0001011c31e8) */
/* WARNING: Removing unreachable block (ram,0x0001011c31d8) */
/* WARNING: Removing unreachable block (ram,0x0001011c31c8) */
/* WARNING: Removing unreachable block (ram,0x0001011c31b8) */
/* WARNING: Removing unreachable block (ram,0x0001011c31a8) */
/* WARNING: Removing unreachable block (ram,0x0001011c3268) */
/* WARNING: Removing unreachable block (ram,0x0001011c3258) */
/* WARNING: Removing unreachable block (ram,0x0001011c3248) */
/* WARNING: Removing unreachable block (ram,0x0001011c3238) */
/* WARNING: Removing unreachable block (ram,0x0001011c3228) */
/* WARNING: Removing unreachable block (ram,0x0001011c3218) */
/* WARNING: Removing unreachable block (ram,0x0001011c3208) */
/* WARNING: Removing unreachable block (ram,0x0001011c2ef0) */
/* WARNING: Removing unreachable block (ram,0x0001011c2ee0) */
/* WARNING: Removing unreachable block (ram,0x0001011c2ed0) */
/* WARNING: Removing unreachable block (ram,0x0001011c2ec0) */
/* WARNING: Removing unreachable block (ram,0x0001011c2eb0) */
/* WARNING: Removing unreachable block (ram,0x0001011c2ea0) */
/* WARNING: Removing unreachable block (ram,0x0001011c2e90) */
/* WARNING: Removing unreachable block (ram,0x0001011c2e80) */
/* WARNING: Removing unreachable block (ram,0x0001011c2e70) */
/* WARNING: Removing unreachable block (ram,0x0001011c2cf4) */
/* WARNING: Removing unreachable block (ram,0x0001011c328c) */
/* WARNING: Removing unreachable block (ram,0x0001011c2d34) */
/* WARNING: Removing unreachable block (ram,0x0001011c2f38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c2b20(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c3d1c4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3e18c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c4cdd0();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar2 = unaff_x20;
        func_0x000107c406cc();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar1;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c4e6f0();
          func_0x000107c61180();
          if (lVar2 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar1;
          }
          else {
            lVar2 = unaff_x20;
            func_0x000107c5b430();
            func_0x000107c61180();
            if (lVar2 != 0) {
              lVar2 = unaff_x20;
              func_0x000107c4f1dc();
              func_0x000107c61180();
              if (lVar2 != 0) {
                lVar2 = unaff_x20;
                func_0x000107c5b3cc();
                func_0x000107c61180();
                if (lVar2 == 0) {
                  func_0x000107c61170(lVar3);
                  lVar3 = lVar1;
                }
                else {
                  lVar2 = unaff_x20;
                  func_0x000107c4eafc();
                  func_0x000107c61180();
                  if (lVar2 == 0) {
                    func_0x000107c61170(lVar3);
                    lVar3 = lVar1;
                  }
                  else {
                    lVar2 = unaff_x20;
                    func_0x000107c3f8ac();
                    func_0x000107c61180();
                    if (lVar2 != 0) {
                      lVar2 = unaff_x20;
                      func_0x000107c3f858();
                      func_0x000107c61180();
                      if (lVar2 != 0) {
                        lVar2 = unaff_x20;
                        func_0x000107c4d840();
                        func_0x000107c61180();
                        if (lVar2 == 0) {
                          func_0x000107c61170(lVar3);
                          lVar3 = lVar1;
                        }
                        else {
                          lVar2 = unaff_x20;
                          func_0x000107c5e154();
                          func_0x000107c61180();
                          if (lVar2 == 0) {
                            func_0x000107c61170(lVar3);
                            lVar3 = lVar1;
                          }
                          else {
                            func_0x000107c42324();
                            func_0x000107c61180();
                            if (unaff_x20 != 0) {
                              FUN_1011c2900();
                              func_0x000107c613fc();
                              lVar3 = *(long *)(lVar1 + _DAT_113083f78);
                              func_0x000107c5d984();
                              func_0x000107c61180();
                              func_0x000107c5faec();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1011c3290; end: 1011c32b7; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint begin] */

void FUN_1011c3290(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011c2b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011c32b8; end: 1011c32fb; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint end] */

void FUN_1011c32b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c32fc; end: 1011c39e7;  */

void FUN_1011c32fc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_1011c338c;
  }
  if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef1d0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000019;
      if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10d4660)) ||
         (func_0x000107c605b8(0xd000000000000019,0x800000010ef2b9a0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c528f0();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10d55e0)) ||
           (func_0x000107c605b8(0xd00000000000001e,0x800000010ef2aa20,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56648();
        }
        else {
          if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10d4910)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000014,0x800000010ef2b6f0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000017;
              if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10d94b0)) ||
                 (func_0x000107c605b8(0xd000000000000017,0x800000010ef26b50,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57374();
                goto LAB_1011c338c;
              }
              if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10d4b70)) {
                uVar2 = 0xd000000000000017;
                func_0x000107c605b8(0xd000000000000017,0x800000010ef2b490,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10d4b50)) ||
                     (func_0x000107c605b8(0xd00000000000001c,0x800000010ef2b4b0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c5780c();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10d4640)) ||
                       (func_0x000107c605b8(0xd000000000000012,0x800000010ef2b9c0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c59464();
                    }
                    else {
                      if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef10d4620)) {
                        uVar2 = 0;
                        func_0x000107c605b8(0xd00000000000001e,0x800000010ef2b9e0,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10d4bb0))
                          {
                            uVar2 = 0xd000000000000019;
                            func_0x000107c605b8(0xd000000000000019,0x800000010ef2b450,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = 0xd00000000000001b;
                              if (((param_2 == -0x2fffffffffffffe5) &&
                                  (param_3 == -0x7ffffffef10d4bd0)) ||
                                 (func_0x000107c605b8(0xd00000000000001b,0x800000010ef2b430,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c53354();
                              }
                              else {
                                if ((param_2 != -0x2fffffffffffffec) ||
                                   (param_3 != -0x7ffffffef10eec60)) {
                                  uVar2 = 0;
                                  func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,param_2,
                                                      param_3,0);
                                  if ((uVar2 & 1) == 0) {
                                    if ((param_2 != -0x2fffffffffffffec) ||
                                       (param_3 != -0x7ffffffef10d4600)) {
                                      uVar2 = 0;
                                      func_0x000107c605b8(0xd000000000000014,0x800000010ef2ba00,
                                                          param_2,param_3,0);
                                      if ((uVar2 & 1) == 0) {
                                        uVar2 = 0;
                                        if (((param_2 != 0x6553736d61657264) ||
                                            (param_3 != -0x11ff8c9a9c96898e)) &&
                                           (func_0x000107c605b8(0x6553736d61657264,
                                                                0xee00736563697672,param_2,param_3,0
                                                               ), (uVar2 & 1) == 0)) {
                                          func_0x000107c602fc(0x15);
                                          func_0x000107c6142c(0xe000000000000000);
                                          func_0x000107c5fb78(param_2,param_3);
                                          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013
                                                              ,0x800000010ef0fc20,
                                                                                                                            
                                                  "SaveToCameraRollChatActionMenuPlugin/SCSaveToCameraRollChatActionMenuPluginEntryPoint.swift"
                                                  ,0x5b,2,0x67,0);
                    /* WARNING: Does not return */
                                          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c39e8);
                                          (*pcVar1)();
                                        }
                                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18))
                                        ;
                                        func_0x000107c605b0();
                                        func_0x000107c54310();
                                        goto LAB_1011c338c;
                                      }
                                    }
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c5a65c();
                                    goto LAB_1011c338c;
                                  }
                                }
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c56b34();
                              }
                              goto LAB_1011c338c;
                            }
                          }
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c53388();
                          goto LAB_1011c338c;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c575bc();
                    }
                  }
                  goto LAB_1011c338c;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5949c();
              goto LAB_1011c338c;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5397c();
        }
      }
      goto LAB_1011c338c;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52228();
LAB_1011c338c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011c39e8; end: 1011c3a93; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011c39e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1011c32fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011c3a94; end: 1011c3c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c3a94(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d64f20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64f90,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d64f98) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011c3c0c; end: 1011c3c2b; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint init] */

void FUN_1011c3c0c(void)

{
  FUN_1011c3a94();
  return;
}



/* Entry: 1011c3c2c; end: 1011c3c5f;  */

void FUN_1011c3c2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011c3c60; end: 1011c3d77; -[SCSaveToCameraRollChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c3c60(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d64f20);
  func_0x000107c61610(param_1 + _DAT_112d64f28);
  func_0x000107c61610(param_1 + _DAT_112d64f30);
  func_0x000107c61610(param_1 + _DAT_112d64f38);
  func_0x000107c61610(param_1 + _DAT_112d64f40);
  func_0x000107c61610(param_1 + _DAT_112d64f48);
  func_0x000107c61610(param_1 + _DAT_112d64f50);
  func_0x000107c61610(param_1 + _DAT_112d64f58);
  func_0x000107c61610(param_1 + _DAT_112d64f60);
  func_0x000107c61610(param_1 + _DAT_112d64f68);
  func_0x000107c61610(param_1 + _DAT_112d64f70);
  func_0x000107c61610(param_1 + _DAT_112d64f78);
  func_0x000107c61610(param_1 + _DAT_112d64f80);
  func_0x000107c61610(param_1 + _DAT_112d64f88);
  func_0x000107c61610(param_1 + _DAT_112d64f90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64f98));
  return;
}



/* Entry: 1011c3d78; end: 1011c3d97;  */

void FUN_1011c3d78(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6730);
  return;
}



/* Entry: 1011c3d98; end: 1011c3e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c3d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d64fc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d64fd0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d64fd8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011c3e1c; end: 1011c3e23; -[_TtC44SendPriorityNotificationChatActionMenuPlugin44SendPriorityNotificationChatActionMenuPlugin itemType] */

undefined8 FUN_1011c3e1c(void)

{
  return 4;
}



/* Entry: 1011c3e24; end: 1011c3e2b; -[_TtC44SendPriorityNotificationChatActionMenuPlugin44SendPriorityNotificationChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011c3e24(void)

{
  return 0;
}



/* Entry: 1011c3e2c; end: 1011c3f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011c3e2c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = param_1;
  func_0x000107c4cde0();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112d64fd8);
  uVar1 = ((ulong *)(unaff_x20 + _DAT_112d64fd8))[1];
  if (uVar2 == uVar3 && param_2 == uVar1) {
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c605b8(uVar2,param_2,uVar3,uVar1,0);
    func_0x000107c6142c(param_2);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c4ce20();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c4a268();
  if ((((uVar3 & 1) == 0) && (uVar3 = param_1, func_0x000107c41d10(), (int)uVar3 == 0)) ||
     (uVar3 = *(ulong *)(unaff_x20 + _DAT_112d64fd0), uVar3 == 0)) {
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c4a26c();
    func_0x000107c61170(param_1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1011c3f28; end: 1011c410b; -[_TtC44SendPriorityNotificationChatActionMenuPlugin44SendPriorityNotificationChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011c3f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011c3e2c(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1011c410c; end: 1011c437b;  */

undefined * FUN_1011c410c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar8 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar8,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = param_1;
    FUN_1011c3e2c();
    if ((uVar1 & 1) != 0) {
      puVar2 = PTR_PTR_1126a5e70;
      func_0x000107c610f8(PTR_PTR_1126a5e70);
      func_0x000107c453e4();
      puVar3 = puVar2;
      FUN_1011c47d8();
      puVar9 = puVar8;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar8);
      func_0x000107c59e18(puVar2);
      func_0x000107c61170(puVar3);
      puVar3 = PTR_PTR_1126c2cb0;
      func_0x000107c61168();
      func_0x000107c44f9c();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar9);
      }
      func_0x000107c592b0(puVar2);
      func_0x000107c61170(puVar3);
      uVar4 = 0xd000000000000032;
      func_0x000107c5fadc(0xd000000000000032,0x800000010ef2bae0);
      func_0x000107c520f0(puVar2);
      func_0x000107c61170(uVar4);
      uVar1 = param_1;
      func_0x000107c4ce20();
      func_0x000107c61180();
      uVar5 = uVar1;
      func_0x000107c41d10();
      func_0x000107c61170(uVar1);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      if ((int)uVar5 != 0) {
        func_0x000107c46ecc();
        func_0x000107c59a2c(puVar2);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(param_3);
        return puVar2;
      }
      func_0x000107c46ecc();
      func_0x000107c59a2c(puVar2);
      func_0x000107c61170(puVar3);
      puVar3 = &UNK_11038f9a8;
      func_0x000107c613fc(&UNK_11038f9a8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_3);
      puVar6 = &UNK_11038f9f8;
      func_0x000107c613fc(&UNK_11038f9f8,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar3;
      *(ulong *)(puVar6 + 0x18) = param_1;
      pcStack_68 = FUN_1011c45e0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11038fa10;
      ppuVar7 = &puStack_88;
      puStack_60 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar3 = puStack_60;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar3);
      func_0x000107c56ea0(puVar2);
      func_0x000107c61170(param_3);
      func_0x000107c60bd0(ppuVar7);
      return puVar2;
    }
    func_0x000107c61170(param_3);
  }
  return (undefined *)0x0;
}



/* Entry: 1011c437c; end: 1011c4383;  */

undefined * FUN_1011c437c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar9 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar9,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = param_1;
    FUN_1011c3e2c();
    if ((uVar2 & 1) != 0) {
      puVar3 = PTR_PTR_1126a5e70;
      func_0x000107c610f8(PTR_PTR_1126a5e70);
      func_0x000107c453e4();
      puVar4 = puVar3;
      FUN_1011c47d8();
      puVar10 = puVar9;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar9);
      func_0x000107c59e18(puVar3);
      func_0x000107c61170(puVar4);
      puVar4 = PTR_PTR_1126c2cb0;
      func_0x000107c61168();
      func_0x000107c44f9c();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar10);
      }
      func_0x000107c592b0(puVar3);
      func_0x000107c61170(puVar4);
      uVar5 = 0xd000000000000032;
      func_0x000107c5fadc(0xd000000000000032,0x800000010ef2bae0);
      func_0x000107c520f0(puVar3);
      func_0x000107c61170(uVar5);
      uVar2 = param_1;
      func_0x000107c4ce20();
      func_0x000107c61180();
      uVar6 = uVar2;
      func_0x000107c41d10();
      func_0x000107c61170(uVar2);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      if ((int)uVar6 != 0) {
        func_0x000107c46ecc();
        func_0x000107c59a2c(puVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(lVar1);
        return puVar3;
      }
      func_0x000107c46ecc();
      func_0x000107c59a2c(puVar3);
      func_0x000107c61170(puVar4);
      puVar4 = &UNK_11038f9a8;
      func_0x000107c613fc(&UNK_11038f9a8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar1);
      puVar7 = &UNK_11038f9f8;
      func_0x000107c613fc(&UNK_11038f9f8,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar4;
      *(ulong *)(puVar7 + 0x18) = param_1;
      pcStack_68 = FUN_1011c45e0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11038fa10;
      ppuVar8 = &puStack_88;
      puStack_60 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar4 = puStack_60;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar4);
      func_0x000107c56ea0(puVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c60bd0(ppuVar8);
      return puVar3;
    }
    func_0x000107c61170(lVar1);
  }
  return (undefined *)0x0;
}



/* Entry: 1011c4384; end: 1011c446b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c4384(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar2,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x000107c40674();
    func_0x000107c61180();
    puVar3 = puVar2;
    if (lVar1 == 0) {
      func_0x000107c5faec();
      puVar3 = puVar2;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar2);
    }
    func_0x000107c40258();
    func_0x000107c61180();
    if (param_2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar3);
    }
    func_0x000107c51e30(*(undefined8 *)(param_1 + _DAT_112d64fc8));
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1011c446c; end: 1011c449b;  */

void FUN_1011c446c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1011c449c; end: 1011c4513; -[_TtC44SendPriorityNotificationChatActionMenuPlugin44SendPriorityNotificationChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011c449c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001011c3fd0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011c4514; end: 1011c4573; -[_TtC44SendPriorityNotificationChatActionMenuPlugin44SendPriorityNotificationChatActionMenuPlugin init] */

void FUN_1011c4514(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendPriorityNotificationChatActionMenuPlugin.SendPriorityNotificationChatActionMenuPlugin"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c4540);
  (*pcVar1)();
}



/* Entry: 1011c4574; end: 1011c45bf; -[_TtC44SendPriorityNotificationChatActionMenuPlugin44SendPriorityNotificationChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c4574(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d64fc8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d64fd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d64fd8 + 8))
  ;
  return;
}



/* Entry: 1011c45c0; end: 1011c45df;  */

void FUN_1011c45c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6860);
  return;
}



/* Entry: 1011c45e0; end: 1011c4603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c45e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  puVar4 = auStack_48;
  func_0x000107c61428(lVar1 + 0x10,puVar4,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar3;
    func_0x000107c40674();
    func_0x000107c61180();
    puVar5 = puVar4;
    if (lVar2 == 0) {
      func_0x000107c5faec();
      puVar5 = puVar4;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar4);
    }
    func_0x000107c40258();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
    }
    func_0x000107c51e30(*(undefined8 *)(lVar1 + _DAT_112d64fc8));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1011c4604; end: 1011c479b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011c4604(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar9 = &lStack_70;
  uVar10 = 0x10;
  func_0x000107c613fc();
  lVar3 = param_3;
  func_0x000107c406a0();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c4798);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  func_0x000107c3cfbc();
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  if (lVar4 != 0) {
    uVar5 = param_4;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar7 = *(undefined8 *)(param_2 + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar5 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    lVar8 = 0;
    FUN_1011c45c0();
    lVar3 = lVar8;
    func_0x000107c610f8();
    *(long *)(lVar3 + _DAT_112d64fc8) = lVar4;
    *(undefined8 *)(lVar3 + _DAT_112d64fd0) = uVar6;
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d64fd8);
    *puVar1 = uVar5;
    puVar1[1] = uVar10;
    lStack_70 = lVar3;
    lStack_68 = lVar8;
    func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
    func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(plVar9);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c479c);
  (*pcVar2)();
}



/* Entry: 1011c479c; end: 1011c47b7;  */

void FUN_1011c479c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011c47b8; end: 1011c47d7;  */

void FUN_1011c47b8(void)

{
  func_0x000107c61168(&PTR_PTR_112d65048);
  return;
}



/* Entry: 1011c47d8; end: 1011c48a7;  */

undefined1  [16] FUN_1011c47d8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffda;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2bb20);
  uVar3 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010ef2bb50);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c48a8);
  (*pcVar1)();
}



/* Entry: 1011c48a8; end: 1011c48b3; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c48a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d650a0;
  func_0x000107c61428(param_1 + _DAT_112d650a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c48b4; end: 1011c48bf; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c48b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d650a0;
  func_0x000107c61428(param_1 + _DAT_112d650a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c48c0; end: 1011c48cb; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c48c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d650a8;
  func_0x000107c61428(param_1 + _DAT_112d650a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c48cc; end: 1011c48d7; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c48cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d650a8;
  func_0x000107c61428(param_1 + _DAT_112d650a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c48d8; end: 1011c48e3; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint conversationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c48d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d650b0;
  func_0x000107c61428(param_1 + _DAT_112d650b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c48e4; end: 1011c48ef; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint setConversationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c48e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d650b0;
  func_0x000107c61428(param_1 + _DAT_112d650b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c48f0; end: 1011c48fb; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c48f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d650b8;
  func_0x000107c61428(param_1 + _DAT_112d650b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c48fc; end: 1011c493f;  */

void FUN_1011c48fc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c4940; end: 1011c494b; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c4940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d650b8;
  func_0x000107c61428(param_1 + _DAT_112d650b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c494c; end: 1011c499f;  */

void FUN_1011c494c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c49a0; end: 1011c4beb;  */

/* WARNING: Possible PIC construction at 0x0001011c4a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c4acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c4b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c4b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c4b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c4bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c4ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c4bb8) */
/* WARNING: Removing unreachable block (ram,0x0001011c4b60) */
/* WARNING: Removing unreachable block (ram,0x0001011c4b50) */
/* WARNING: Removing unreachable block (ram,0x0001011c4b40) */
/* WARNING: Removing unreachable block (ram,0x0001011c4ad0) */
/* WARNING: Removing unreachable block (ram,0x0001011c4a9c) */
/* WARNING: Removing unreachable block (ram,0x0001011c4ba8) */

void FUN_1011c49a0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c3d1c4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c406cc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4cdfc();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_1011c47b8();
        func_0x000107c613fc();
        func_0x000107c406a0();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c4be8);
          (*pcVar1)();
        }
        lVar2 = lVar3;
        func_0x000107c3cfbc();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c4bec);
          (*pcVar1)();
        }
        func_0x000107c4cdb8(unaff_x20);
        func_0x000107c61180();
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar2 = unaff_x20;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011c4bec; end: 1011c4c13; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint begin] */

void FUN_1011c4bec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011c49a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011c4c14; end: 1011c4c57; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint end] */

void FUN_1011c4c14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c4c58; end: 1011c4ec7;  */

void FUN_1011c4c58(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef1d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10d4910)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000014,0x800000010ef2b6f0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd00000000000001b;
            if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10d6a90)) &&
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SendPriorityNotificationChatActionMenuPlugin/SCSendPriorityNotificationChatActionMenuPluginEntryPoint.swift"
                                  ,0x6b,2,0x30,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c4ec8);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5666c();
            goto LAB_1011c4ce4;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5397c();
        goto LAB_1011c4ce4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52228();
  }
LAB_1011c4ce4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011c4ec8; end: 1011c4f73; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011c4ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1011c4c58(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011c4f74; end: 1011c500f; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c4f74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d650a0,0);
  func_0x000107c61614(param_1 + _DAT_112d650a8,0);
  func_0x000107c61614(param_1 + _DAT_112d650b0,0);
  func_0x000107c61614(param_1 + _DAT_112d650b8,0);
  *(undefined8 *)(param_1 + _DAT_112d650c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011c5010; end: 1011c5043;  */

void FUN_1011c5010(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011c5044; end: 1011c50ab; -[SCSendPriorityNotificationChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c5044(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d650a0);
  func_0x000107c61610(param_1 + _DAT_112d650a8);
  func_0x000107c61610(param_1 + _DAT_112d650b0);
  func_0x000107c61610(param_1 + _DAT_112d650b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d650c0));
  return;
}



/* Entry: 1011c50ac; end: 1011c50cb;  */

void FUN_1011c50ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6930);
  return;
}



/* Entry: 1011c50cc; end: 1011c5113; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin uiContainerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c50cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d650f0;
  func_0x000107c61428(param_1 + _DAT_112d650f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c5114; end: 1011c516b; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin setUiContainerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c5114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d650f0;
  func_0x000107c61428(param_1 + _DAT_112d650f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c516c; end: 1011c51ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c516c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112d650f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d650f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d65100) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d65108) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011c5200; end: 1011c5207; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin itemType] */

undefined8 FUN_1011c5200(void)

{
  return 0x12;
}



/* Entry: 1011c5208; end: 1011c520f; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011c5208(void)

{
  return 0;
}



/* Entry: 1011c5210; end: 1011c5527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c5210(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  ulong uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined2 uStack_72;
  
  uVar9 = param_1;
  func_0x000107c4ca8c();
  func_0x000107c61180();
  if (uVar9 == 0) {
    return;
  }
  uVar2 = 0;
  FUN_1011c5e8c(0,0x112d64e68,&PTR_PTR_1126b4628);
  uVar3 = uVar9;
  func_0x000107c5fc54(uVar9,uVar2);
  func_0x000107c61170(uVar9);
  if (uVar3 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar9 = uVar3;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar3);
  if (uVar9 != 1) {
    return;
  }
  uVar9 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (uVar9 == 0) {
    return;
  }
  uVar3 = uVar9;
  func_0x000107c4ca5c();
  func_0x000107c61170(uVar9);
  if (uVar3 != 0) {
    return;
  }
  uStack_72 = 0;
  uVar2 = *(undefined8 *)(param_2 + _DAT_112f14b88);
  puVar4 = &UNK_11038fc00;
  func_0x000107c613fc(&UNK_11038fc00,0x20,7);
  *(undefined2 **)(puVar4 + 0x10) = &uStack_72;
  *(long *)(puVar4 + 0x18) = (long)&uStack_72 + 1;
  puVar5 = &UNK_11038fc28;
  func_0x000107c613fc(&UNK_11038fc28,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1011c5ecc;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1011c5ed4;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1011b6bc0;
  puStack_90 = &UNK_11038fc40;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_80);
  puVar5 = &UNK_11038fc78;
  func_0x000107c613fc(&UNK_11038fc78,0x18,7);
  *(long *)(puVar5 + 0x10) = (long)&uStack_72 + 1;
  puVar7 = &UNK_11038fca0;
  func_0x000107c613fc(&UNK_11038fca0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x1011c5ef4;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  pcStack_88 = (code *)0x1011c5f18;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1011ac670;
  puStack_90 = &UNK_11038fcb8;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_80);
  func_0x000107c4c6d0(uVar2);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar6);
  if ((uStack_72 & 0x100) != 0) {
    uStack_72 = CONCAT11(1,(char)uStack_72);
    goto LAB_1011c54f8;
  }
  if ((char)uStack_72 == '\x01') {
    uVar9 = *(ulong *)(unaff_x20 + _DAT_112d65108);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar9 == 0) goto LAB_1011c5490;
    uVar3 = uVar9;
    func_0x000107c4a5d8();
    func_0x000107c615e8(uVar9);
    uStack_72 = CONCAT11((char)uVar3,(char)uStack_72);
    if ((uVar3 & 1) != 0) goto LAB_1011c54f8;
  }
  else {
LAB_1011c5490:
    uStack_72 = uStack_72 & 0xff;
  }
  if (((*(long *)(param_2 + _DAT_112f14ba0) != 6) &&
      (uVar9 = param_1, func_0x000107c4a434(), (uVar9 & 1) == 0)) &&
     ((uVar9 = param_1, func_0x000107c4a4a4(), (int)uVar9 == 0 ||
      ((uVar9 = param_1, func_0x000107c4a384(), (uVar9 & 1) == 0 &&
       (uVar9 = param_1, func_0x000107c4a71c(), (uVar9 & 1) == 0)))))) {
    func_0x000107c49ac0(param_1);
  }
LAB_1011c54f8:
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 1011c5528; end: 1011c57ab; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011c5528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1011c5210(param_3,param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1011c57ac; end: 1011c57b3;  */

void FUN_1011c57ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar5 = &puStack_70;
  uVar7 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x00010509ac14();
  func_0x000107c61180();
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd000000000000055;
  func_0x000107c5fadc(0xd000000000000055,0x800000010ef2bc70);
  func_0x000107c55204(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010ef2bcd0);
  func_0x000107c520f0(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = &UNK_11038fb88;
  func_0x000107c613fc(&UNK_11038fb88,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar6);
  puVar4 = &UNK_11038fbb0;
  func_0x000107c613fc(&UNK_11038fbb0,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  pcStack_50 = FUN_1011c5e84;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038fbc8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar5);
  *param_1 = puVar1;
  return;
}


