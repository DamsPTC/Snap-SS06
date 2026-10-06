/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cfd260; end: 102cfd26f; -[AdItemLoadStatus updateItemCloseTimestampInSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfd260(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112f0d518) = param_1;
  return;
}



/* Entry: 102cfd270; end: 102cfd2df;  */

void FUN_102cfd270(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cfd2e0; end: 102cfd317;  */

void FUN_102cfd2e0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102cfd318; end: 102cfd3df; -[AdLogger initWithAudioSession:userBlizzard:grapheneRegistry:crashLogger:flipper:] */

undefined8
FUN_102cfd318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  uVar2 = param_3;
  FUN_102d025f4(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_7);
  return uVar2;
}



/* Entry: 102cfd3e0; end: 102cfe017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfd3e0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x20;
  long lVar20;
  undefined **ppuStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [256];
  
  func_0x000107c614f0();
  puVar4 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c3d300();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cfdffc);
    (*pcVar2)();
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110f24a98;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f24a98);
  lVar10 = param_1;
  func_0x000107c49d8c();
  bVar3 = (int)lVar10 == 0;
  uVar18 = 0x534559;
  if (bVar3) {
    uVar18 = 0x4f4e;
  }
  uVar14 = 0xe300000000000000;
  if (bVar3) {
    uVar14 = 0xe200000000000000;
  }
  uVar15 = uVar14;
  func_0x000107c5fadc(uVar18,uVar14);
  func_0x000107c6142c(uVar14);
  puVar7 = puVar5;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(uVar18);
  ppuVar6 = &PTR____CFConstantStringClassReference_110ddd2d8;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110ddd2d8);
  func_0x000107c3d3e0(param_1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  puVar8 = puVar5;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar18 = uVar15;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    func_0x000107c5faec(0);
    uVar18 = uVar15;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar15);
  }
  puVar5 = puVar7;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(puVar8);
  ppuVar6 = &PTR____CFConstantStringClassReference_110ddfd98;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110ddfd98);
  func_0x000107c3d514(param_1);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar8 = puVar7;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  uVar14 = uVar18;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    func_0x000107c5faec(0);
    uVar14 = uVar18;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar18);
  }
  puVar7 = puVar5;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(puVar8);
  ppuVar6 = &PTR____CFConstantStringClassReference_110f24d58;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f24d58);
  func_0x000107c5cd14(param_1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  puVar8 = puVar5;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar18 = uVar14;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    func_0x000107c5faec(0);
    uVar18 = uVar14;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar14);
  }
  puVar5 = puVar7;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(puVar8);
  lVar20 = *(long *)(unaff_x20 + _DAT_112f0d558);
  lVar10 = lVar20;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar19 = lVar10;
    func_0x000107c3d2d8();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cfe004);
      (*pcVar2)();
    }
    func_0x000107c45314(lVar19);
    func_0x000107c61170(lVar19);
  }
  lVar10 = param_1;
  func_0x000107c4ed40();
  if ((int)lVar10 != 0) {
    puVar7 = puVar4;
    func_0x000107c4ecd8();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cfe014);
      (*pcVar2)();
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110ddfd98;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110ddfd98);
    func_0x000107c3d3e0(param_1);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d4();
    puVar9 = puVar8;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar9 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar18);
    }
    puVar8 = puVar7;
    func_0x000107c5e508(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61170(puVar9);
    lVar10 = lVar20;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar10 != 0) {
      lVar19 = lVar10;
      func_0x000107c3d2d8();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar19 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cfe018);
        (*pcVar2)();
      }
      func_0x000107c45314(lVar19);
      func_0x000107c61170(lVar19);
    }
    func_0x000107c61170(puVar8);
  }
  func_0x000107c3d2fc();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cfe000);
    (*pcVar2)();
  }
  uVar18 = 0x75646f72705f6461;
  uVar14 = 0xea00000000007463;
  func_0x000107c5fadc(0x75646f72705f6461,0xea00000000007463);
  func_0x000107c3d3e0(param_1);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  puVar8 = puVar7;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar14);
  }
  puVar7 = puVar4;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(puVar8);
  uVar14 = 0x735f747265736e69;
  uVar15 = 0xed0000656372756f;
  func_0x000107c5fadc(0x735f747265736e69,0xed0000656372756f);
  func_0x000107c49760(param_1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar8 = puVar4;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar18 = uVar15;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    func_0x000107c5faec(0);
    uVar18 = uVar15;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar15);
  }
  puVar4 = puVar7;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar20 != 0) {
    lVar10 = lVar20;
    func_0x000107c3d2d8();
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cfe008);
      (*pcVar2)();
    }
    func_0x000107c45314(lVar10);
    func_0x000107c61170(lVar10);
  }
  puVar7 = PTR_PTR_1126ca910;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c49d8c(param_1);
  func_0x000107c5564c(puVar7);
  func_0x000107c3d3e0(param_1);
  func_0x0001084b952c();
  func_0x000107c52384(puVar7);
  lVar10 = param_1;
  func_0x000107c3d2dc(param_1);
  func_0x000107c61180();
  func_0x000107c522e0(puVar7);
  func_0x000107c61170(lVar10);
  lVar10 = param_1;
  func_0x000107c3d450(param_1);
  func_0x000107c61180();
  func_0x000107c523c4(puVar7);
  func_0x000107c61170(lVar10);
  lVar10 = param_1;
  func_0x000107c4b640(param_1);
  func_0x000107c61180();
  func_0x000107c55f90(puVar7);
  func_0x000107c61170(lVar10);
  lVar10 = param_1;
  func_0x000107c5c04c();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = lVar10;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    if (lVar20 == 0) {
      lVar20 = 0;
      func_0x000107c5faec(0);
      uVar14 = uVar18;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar18);
      uVar18 = uVar14;
    }
  }
  func_0x000107c5999c(puVar7);
  func_0x000107c61170(lVar20);
  lVar10 = param_1;
  func_0x000107c51f70(param_1);
  func_0x000107c61180();
  func_0x000107c58f88(puVar7);
  func_0x000107c61170(lVar10);
  lVar10 = param_1;
  func_0x000107c3d514(param_1);
  func_0x000103bfd6b4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar18);
  func_0x000107c52444(puVar7);
  func_0x000107c61170(lVar10);
  func_0x000107c4dfc4(param_1);
  func_0x0001084b951c();
  func_0x000107c57058(puVar7);
  func_0x000107c3d4c8(param_1);
  func_0x000107c523f4(puVar7);
  func_0x000107c4ec9c(param_1);
  func_0x0001084b94a8();
  func_0x000107c57684(puVar7);
  func_0x000107c3ec7c(param_1);
  func_0x0001084b94cc();
  func_0x000107c52e4c(puVar7);
  lVar10 = param_1;
  func_0x000107c3d288();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c522a8(puVar7);
    func_0x000107c61170(lVar10);
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_112f0d560);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar10);
  }
  lVar10 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  puVar16 = auStack_160;
  func_0x000107c61534();
  *(undefined8 *)(lVar10 + 0x18) = 6;
  *(undefined8 *)(lVar10 + 0x10) = 3;
  ppuVar6 = &PTR____CFConstantStringClassReference_110e4fbf8;
  func_0x000107c5faec();
  ppuStack_170 = ppuVar6;
  puStack_168 = puVar16;
  func_0x000107c61434(puVar16);
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c602d4(lVar10 + 0x20,&ppuStack_170,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar20 = param_1;
  func_0x000107c3d2dc();
  func_0x000107c61180();
  if (lVar20 == 0) {
    lVar19 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar19 = lVar20;
    func_0x000107c5faec();
    func_0x000107c61170(lVar20);
  }
  puVar9 = puVar8;
  FUN_102cfe018(lVar10 + 0x48,lVar19);
  func_0x000107c6142c(puVar8);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e4fc38;
  func_0x000107c5faec();
  ppuStack_170 = ppuVar6;
  puStack_168 = puVar9;
  func_0x000107c61434(puVar9);
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c602d4(lVar10 + 0x68,&ppuStack_170,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar20 = param_1;
  func_0x000107c3d3e0();
  func_0x0001084b952c();
  func_0x000107c31154();
  func_0x000107c61180();
  if (lVar20 == 0) {
    lVar19 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar19 = lVar20;
    func_0x000107c5faec();
    func_0x000107c61170(lVar20);
  }
  puVar17 = puVar8;
  FUN_102cfe018(lVar10 + 0x90,lVar19);
  func_0x000107c6142c(puVar8);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e4fc78;
  func_0x000107c5faec();
  ppuStack_170 = ppuVar6;
  puStack_168 = puVar17;
  func_0x000107c61434(puVar17);
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c602d4(lVar10 + 0xb0,&ppuStack_170,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar20 = param_1;
  func_0x000107c51f70();
  func_0x000107c61180();
  if (lVar20 == 0) {
    lVar19 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar19 = lVar20;
    func_0x000107c5faec();
    func_0x000107c61170(lVar20);
  }
  FUN_102cfe018(lVar10 + 0xd8,lVar19,puVar8);
  func_0x000107c6142c(puVar17);
  func_0x000107c6142c(puVar16);
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(puVar8);
  lVar20 = lVar10;
  func_0x000100dfa3f0(lVar10);
  func_0x000107c61588(lVar10);
  uVar18 = 0x112d377a0;
  func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
  uVar14 = 3;
  func_0x000107c61408(lVar10 + 0x20,3,uVar18);
  lVar10 = *(long *)(unaff_x20 + _DAT_112f0d568);
  if (lVar10 == 0) {
    func_0x000107c6142c(lVar20);
  }
  else {
    puVar8 = puVar7;
    func_0x000107c44044();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cfe00c);
      (*pcVar2)();
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110e4fcd8;
    func_0x000107c61174();
    func_0x000107c3d450();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar19 = 0;
      uVar14 = 0xe000000000000000;
    }
    else {
      lVar19 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    func_0x000107c5fadc(lVar19,uVar14);
    func_0x000107c6142c(uVar14);
    puVar1 = PTR___sypN_11034f1a8;
    lVar11 = lVar20;
    func_0x000107c5f9dc(lVar20,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar20);
    puVar12 = puVar7;
    func_0x000107c3e1c4();
    func_0x000107c61180();
    puVar17 = PTR___ss11AnyHashableVSHsWP_11034e450;
    puVar9 = PTR___ss11AnyHashableVN_11034e448;
    if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cfe010);
      (*pcVar2)();
    }
    puVar13 = puVar12;
    func_0x000107c5f9e8();
    func_0x000107c61170(puVar12);
    puVar12 = puVar13;
    func_0x000107c5f9dc(puVar13,puVar9,puVar1 + 8,puVar17);
    func_0x000107c6142c(puVar13);
    func_0x000107c4e12c(lVar10);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar12);
  }
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 102cfe018; end: 102cfe0b3;  */

void FUN_102cfe018(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uStack_50 = 0;
  if (param_3 != 0) {
    uStack_50 = param_2;
  }
  puStack_38 = (undefined *)0x0;
  if (param_3 != 0) {
    puStack_38 = PTR___sSSN_11034da80;
  }
  uStack_40 = 0;
  lStack_48 = param_3;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar2 = 0;
    FUN_102d029f8(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
    param_1[3] = uVar2;
    *param_1 = puVar1;
  }
  else {
    func_0x000100102924(&uStack_50,param_1);
    func_0x000107c61434(param_3);
  }
  return;
}



/* Entry: 102cfe0b4; end: 102cfe103; -[AdLogger logAdInserted:] */

/* WARNING: Possible PIC construction at 0x000102cfe0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cfe0f0) */

void FUN_102cfe0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102cfd3e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cfe104; end: 102cfe327;  */

/* WARNING: Possible PIC construction at 0x000102cfe19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfe1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfe21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfe22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfe2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfe2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfe2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cfe300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cfe2b4) */
/* WARNING: Removing unreachable block (ram,0x000102cfe304) */
/* WARNING: Removing unreachable block (ram,0x000102cfe2d0) */
/* WARNING: Removing unreachable block (ram,0x000102cfe2a4) */
/* WARNING: Removing unreachable block (ram,0x000102cfe230) */
/* WARNING: Removing unreachable block (ram,0x000102cfe24c) */
/* WARNING: Removing unreachable block (ram,0x000102cfe254) */
/* WARNING: Removing unreachable block (ram,0x000102cfe220) */
/* WARNING: Removing unreachable block (ram,0x000102cfe1b0) */
/* WARNING: Removing unreachable block (ram,0x000102cfe1a0) */
/* WARNING: Removing unreachable block (ram,0x000102cfe2ec) */
/* WARNING: Removing unreachable block (ram,0x000102cfe324) */
/* WARNING: Removing unreachable block (ram,0x000102cfe2f0) */

void FUN_102cfe104(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b8d98;
  uVar3 = param_2;
  func_0x000107c61168();
  func_0x000107c3d2f4();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110ddd2d8);
    func_0x000104840e10(param_2);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cfe324);
  (*pcVar1)();
}



/* Entry: 102cfe328; end: 102cfe3ab; -[AdLogger logAdInsertionFailure:adProductType:errorReason:] */

void FUN_102cfe328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_1);
  FUN_102cfe104(param_3,param_4,param_5,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cfe3ac; end: 102cfff23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cfe3ac(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined **param_5,ulong param_6)

{
  double *pdVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long unaff_x20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  double dVar25;
  double dVar26;
  undefined **ppuStack_230;
  undefined1 *puStack_228;
  undefined *puStack_218;
  undefined1 auStack_210 [400];
  
  func_0x000107c614f0();
  puVar4 = PTR_PTR_1126ca918;
  func_0x000107c610f8();
  func_0x000107c453e4();
  ppuVar22 = param_5;
  func_0x000107c3d288();
  func_0x000107c61180();
  if (ppuVar22 != (undefined **)0x0) {
    func_0x000107c522a8(puVar4);
    func_0x000107c61170(ppuVar22);
  }
  ppuVar22 = param_5;
  func_0x000107c4aa20();
  func_0x000107c61180();
  if (ppuVar22 != (undefined **)0x0) {
    uVar5 = 0;
    func_0x000104273684(0);
    ppuVar12 = ppuVar22;
    func_0x000107c5fc54(ppuVar22,uVar5);
    func_0x000107c61170(ppuVar22);
    if ((ulong)ppuVar12 >> 0x3e == 0) {
      ppuVar22 = *(undefined ***)(((ulong)ppuVar12 & 0xffffffffffffff8) + 0x10);
      if (ppuVar22 == (undefined **)0x0) goto LAB_102cfe554;
LAB_102cfe478:
      ppuStack_230 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102d024a4(0,(ulong)ppuVar22 & ((long)ppuVar22 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)ppuVar22 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102cffee4);
        (*pcVar3)();
      }
      ppuVar23 = (undefined **)0x0;
      do {
        ppuVar21 = ppuStack_230;
        if (((ulong)ppuVar12 & 0xc000000000000001) == 0) {
          ppuVar7 = (undefined **)ppuVar12[(long)((long)ppuVar23 + 4)];
          func_0x000107c61174();
        }
        else {
          ppuVar7 = ppuVar23;
          func_0x00010167a4c4(ppuVar23,ppuVar12);
        }
        ppuVar6 = ppuVar7;
        FUN_102d02778();
        func_0x000107c61170(ppuVar7);
        puVar24 = ppuVar21[2];
        ppuStack_230 = ppuVar21;
        if ((undefined *)((ulong)ppuVar21[3] >> 1) <= puVar24) {
          func_0x000102d024a4((undefined *)0x1 < ppuVar21[3],puVar24 + 1,1);
        }
        ppuVar21 = ppuStack_230;
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
        ppuStack_230[2] = puVar24 + 1;
        ppuStack_230[(long)(puVar24 + 4)] = (undefined *)ppuVar6;
      } while (ppuVar22 != ppuVar23);
      func_0x000107c6142c(ppuVar12);
    }
    else {
      ppuVar22 = (undefined **)((ulong)ppuVar12 & 0xffffffffffffff8);
      if ((undefined **)0x7fffffffffffffff < ppuVar12) {
        ppuVar22 = ppuVar12;
      }
      func_0x000107c60480();
      if (ppuVar22 != (undefined **)0x0) goto LAB_102cfe478;
LAB_102cfe554:
      func_0x000107c6142c(ppuVar12);
      ppuVar21 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    param_6 = 0;
    FUN_102d029f8(0,0x112f0d580,&PTR_PTR_1126ca960);
    ppuVar22 = ppuVar21;
    func_0x000107c5fc48(ppuVar21);
    func_0x000107c6142c(ppuVar21);
    func_0x000107c55a58(puVar4);
    func_0x000107c61170(ppuVar22);
  }
  ppuVar22 = param_5;
  func_0x000107c5b548();
  func_0x000107c61180();
  if (ppuVar22 != (undefined **)0x0) {
    uVar5 = 0;
    func_0x000104273684(0);
    ppuVar12 = ppuVar22;
    func_0x000107c5fc54(ppuVar22,uVar5);
    func_0x000107c61170(ppuVar22);
    if ((ulong)ppuVar12 >> 0x3e == 0) {
      ppuVar22 = *(undefined ***)(((ulong)ppuVar12 & 0xffffffffffffff8) + 0x10);
      if (ppuVar22 == (undefined **)0x0) goto LAB_102cfe6d0;
LAB_102cfe5f4:
      ppuStack_230 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102d024a4(0,(ulong)ppuVar22 & ((long)ppuVar22 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)ppuVar22 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102cffee8);
        (*pcVar3)();
      }
      ppuVar23 = (undefined **)0x0;
      do {
        ppuVar21 = ppuStack_230;
        if (((ulong)ppuVar12 & 0xc000000000000001) == 0) {
          ppuVar7 = (undefined **)ppuVar12[(long)((long)ppuVar23 + 4)];
          func_0x000107c61174();
        }
        else {
          ppuVar7 = ppuVar23;
          func_0x00010167a4c4(ppuVar23,ppuVar12);
        }
        ppuVar6 = ppuVar7;
        FUN_102d02778();
        func_0x000107c61170(ppuVar7);
        puVar24 = ppuVar21[2];
        ppuStack_230 = ppuVar21;
        if ((undefined *)((ulong)ppuVar21[3] >> 1) <= puVar24) {
          func_0x000102d024a4((undefined *)0x1 < ppuVar21[3],puVar24 + 1,1);
        }
        ppuVar21 = ppuStack_230;
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
        ppuStack_230[2] = puVar24 + 1;
        ppuStack_230[(long)(puVar24 + 4)] = (undefined *)ppuVar6;
      } while (ppuVar22 != ppuVar23);
      func_0x000107c6142c(ppuVar12);
    }
    else {
      ppuVar22 = (undefined **)((ulong)ppuVar12 & 0xffffffffffffff8);
      if ((undefined **)0x7fffffffffffffff < ppuVar12) {
        ppuVar22 = ppuVar12;
      }
      func_0x000107c60480();
      if (ppuVar22 != (undefined **)0x0) goto LAB_102cfe5f4;
LAB_102cfe6d0:
      func_0x000107c6142c(ppuVar12);
      ppuVar21 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    param_6 = 0;
    FUN_102d029f8(0,0x112f0d580,&PTR_PTR_1126ca960);
    ppuVar22 = ppuVar21;
    func_0x000107c5fc48(ppuVar21);
    func_0x000107c6142c(ppuVar21);
    func_0x000107c594f4(puVar4);
    func_0x000107c61170(ppuVar22);
  }
  ppuVar22 = param_5;
  func_0x000107c4ba84();
  if ((int)ppuVar22 != 0) {
    func_0x000107c5e240(param_5);
    func_0x000107c5a6fc(puVar4);
    func_0x000107c5e244(param_5);
    func_0x000107c5a700(puVar4);
    func_0x000107c414e0(param_5);
    func_0x000107c53f04(puVar4);
    func_0x000107c414d0(param_5);
    func_0x000107c53ef4(puVar4);
    func_0x000107c414d8(param_5);
    func_0x000107c53efc(puVar4);
    func_0x000107c414d4(param_5);
    func_0x000107c53ef8(puVar4);
    func_0x000107c49af0(param_5);
    func_0x000107c55590(puVar4);
  }
  ppuVar22 = param_5;
  func_0x000107c4bf2c();
  if ((int)ppuVar22 != 0) {
    func_0x000107c5c704(param_5);
    FUN_102d02958();
    func_0x000107c59bdc(puVar4);
    func_0x000107c5c70c(param_5);
    FUN_102d02958();
    func_0x000107c59be4(puVar4);
    func_0x000107c5c708(param_5);
    func_0x000107c59be0(puVar4);
    func_0x000107c5c710(param_5);
    func_0x000107c59be8(puVar4);
  }
  ppuVar22 = param_5;
  func_0x000107c4ba90();
  if ((int)ppuVar22 != 0) {
    func_0x000107c3fd88(param_5);
    func_0x000107c55470(puVar4);
    func_0x000107c3fd8c(param_5);
    func_0x000107c5548c(puVar4);
    func_0x000107c3fd90(param_5);
    func_0x000107c5546c(puVar4);
    ppuVar22 = param_5;
    func_0x000107c3fd7c();
    if (SCARRY8((long)ppuVar22,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102cffee0);
      (*pcVar3)();
    }
    func_0x000107c55478(puVar4);
    func_0x000107c55484(puVar4);
    ppuVar22 = param_5;
    func_0x000107c4aa04();
    func_0x000107c61180();
    if (ppuVar22 != (undefined **)0x0) {
      func_0x000107c4c0a8();
      func_0x000107c55474(puVar4);
      func_0x000107c61170(ppuVar22);
    }
  }
  ppuVar22 = param_5;
  func_0x000107c3d2c4();
  if (ppuVar22 != (undefined **)0x0) {
    func_0x000107c3d2c4(param_5);
    func_0x000107c522c8(puVar4);
  }
  func_0x000107c3d2c8(param_5);
  if (param_1 != 0.0) {
    func_0x000107c3d2c8(param_5);
    func_0x000107c522cc(puVar4);
  }
  func_0x000107c5df1c(param_5);
  func_0x000107c5a590(puVar4);
  func_0x000107c49e38(param_5);
  func_0x000107c5567c(puVar4);
  func_0x000107c5ddf8(param_5);
  func_0x000107c57f08(puVar4);
  func_0x000107c5ddf4(param_5);
  func_0x000107c57f04(puVar4);
  func_0x000107c5a458(puVar4);
  func_0x000107c52358(puVar4);
  func_0x000107c5cc10(param_5);
  dVar25 = (double)(long)(param_1 * 1000.0) / 1000.0;
  func_0x000107c59484(puVar4);
  ppuVar22 = param_5;
  func_0x000107c51f70(param_5);
  func_0x000107c61180();
  func_0x000107c58f88(puVar4);
  func_0x000107c61170(ppuVar22);
  ppuVar22 = param_5;
  func_0x000107c3d514(param_5);
  func_0x000103bfd6b4();
  uVar16 = param_6;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_6);
  func_0x000107c52444(puVar4);
  func_0x000107c61170(ppuVar22);
  func_0x000107c4dfc4(param_5);
  func_0x0001084b951c();
  func_0x000107c57058(puVar4);
  func_0x000107c3ec7c(param_5);
  func_0x0001084b94cc();
  func_0x000107c52e4c(puVar4);
  func_0x000107c4dfc4(param_5);
  func_0x0001084b951c();
  func_0x000107c57058(puVar4);
  func_0x000107c3d4d4(param_5);
  FUN_102d02958();
  func_0x000107c52400(puVar4);
  ppuVar22 = param_5;
  func_0x000107c3d26c();
  if ((undefined **)0x4 < ppuVar22) {
    puVar4 = &UNK_110796f00;
    ppuStack_230 = ppuVar22;
LAB_102cfff0c:
    func_0x000107c60614(puVar4,&ppuStack_230,puVar4,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cfff24);
    (*pcVar3)();
  }
  func_0x000107c52280(puVar4);
  ppuVar22 = param_5;
  func_0x000107c4ca5c();
  if (ppuVar22 != (undefined **)0x2) {
    func_0x000107c4a5f8(param_5);
    func_0x000107c54d24(puVar4);
    func_0x000107c5de54(param_5);
    if (dVar25 != 0.0) {
      func_0x000107c5de54(param_5);
      dVar25 = (double)(long)(dVar25 * 1000.0) / 1000.0;
      func_0x000107c5a560(puVar4);
    }
  }
  ppuVar22 = param_5;
  func_0x000107c4f660();
  func_0x000107c61180();
  if (ppuVar22 != (undefined **)0x0) {
    ppuVar12 = ppuVar22;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar22);
    func_0x000107c6142c(uVar16);
    uVar2 = (ulong)ppuVar12 & 0xffffffffffff;
    if ((uVar16 & 0x2000000000000000) != 0) {
      uVar2 = uVar16 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      ppuVar22 = param_5;
      func_0x000107c3d4b0();
      if ((undefined **)0x3 < ppuVar22) {
        puVar4 = &UNK_110798368;
        ppuStack_230 = ppuVar22;
        goto LAB_102cfff0c;
      }
      func_0x000107c523e8(puVar4);
      ppuVar22 = param_5;
      func_0x000107c42948();
      if (-1 < (long)ppuVar22) {
        func_0x000102d029e8();
      }
      func_0x000107c545e4(puVar4);
      ppuVar22 = param_5;
      func_0x000107c4b770();
      func_0x000107c61180();
      if (ppuVar22 != (undefined **)0x0) {
        func_0x000107c5b31c();
        func_0x000107c61170(ppuVar22);
      }
      func_0x000107c56440(puVar4);
      ppuVar22 = param_5;
      func_0x000107c4b770();
      func_0x000107c61180();
      if (ppuVar22 != (undefined **)0x0) {
        func_0x000107c5b320();
        func_0x000107c61170(ppuVar22);
      }
      func_0x000107c56444(puVar4);
      ppuVar22 = param_5;
      func_0x000107c4b770();
      func_0x000107c61180();
      if (ppuVar22 == (undefined **)0x0) {
        dVar25 = 0.0;
      }
      else {
        func_0x000107c4c9bc();
        func_0x000107c61170(ppuVar22);
      }
      func_0x000107c55ff8(puVar4);
      func_0x000107c5cc10(param_5);
      dVar25 = (double)(long)(dVar25 * 1000.0) / 1000.0;
      func_0x000107c59484(puVar4);
      uVar5 = 0x74756f74706f;
      func_0x000107c5fadc(0x74756f74706f,0xe600000000000000);
      func_0x000107c5a2e4(puVar4);
      func_0x000107c61170(uVar5);
    }
  }
  ppuVar22 = param_5;
  func_0x000107c3d3f0();
  func_0x000107c61180();
  if (ppuVar22 != (undefined **)0x0) {
    ppuVar12 = (undefined **)PTR_PTR_1126ca920;
    func_0x000107c610f8(PTR_PTR_1126ca920);
    func_0x000107c453e4();
    func_0x000107c54b68();
    func_0x000107c54b64(ppuVar12);
    func_0x000107c54b58(ppuVar12);
    func_0x000107c54b54(ppuVar12);
    func_0x000107c54b60(ppuVar12);
    func_0x000107c54b5c(ppuVar12);
    ppuVar23 = param_5;
    func_0x000107c51f70(param_5);
    func_0x000107c61180();
    func_0x000107c58f88(ppuVar12);
    func_0x000107c61170(ppuVar23);
    lVar8 = *(long *)(unaff_x20 + _DAT_112f0d560);
    func_0x000107c5c734();
    func_0x000107c61180();
    ppuVar23 = ppuVar22;
    if (lVar8 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar8);
      ppuVar23 = ppuVar12;
      ppuVar12 = ppuVar22;
    }
    func_0x000107c61170(ppuVar23);
    func_0x000107c61170(ppuVar12);
  }
  ppuVar22 = param_5;
  func_0x000107c41888();
  func_0x000107c61180();
  if (ppuVar22 == (undefined **)0x0) {
    ppuVar22 = param_5;
    func_0x000107c42b78();
    if ((ppuVar22 != (undefined **)0x6) ||
       (lVar8 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar8 == 0)) goto LAB_102cff874;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 == 0) goto LAB_102cff874;
    ppuVar12 = param_5;
    func_0x000107c3d2dc(param_5);
    func_0x000107c61180();
    FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
    uVar10 = 0xc;
    func_0x000103dec218(0xc);
    uVar5 = 0xd00000000000003b;
    func_0x000107c5fadc(0xd00000000000003b,0x800000010f109750);
    ppuVar22 = (undefined **)0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f109790);
    func_0x000107c3e200(lVar8);
    func_0x000107c615e8(lVar8);
    func_0x000107c61170(ppuVar12);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar5);
  }
  else {
    puVar24 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar24);
    lVar8 = _DAT_11308f378;
    dVar26 = *(double *)((long)ppuVar22 + _DAT_11308f378);
    if (dVar26 <= 0.0) {
LAB_102cfef4c:
      lVar9 = *(long *)(unaff_x20 + _DAT_112f0d570);
      if (lVar9 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar9 != 0) {
          FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
          uVar5 = 2;
          func_0x000103dec218(2);
          uVar10 = 0xd000000000000024;
          func_0x000107c5fadc(0xd000000000000024,0x800000010f109b60);
          uVar11 = 0xd000000000000021;
          func_0x000107c5fadc(0xd000000000000021,0x800000010f109b90);
          func_0x000107c3e1fc(lVar9);
          func_0x000107c615e8(lVar9);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar11);
        }
      }
    }
    else {
      lVar9 = *(long *)(unaff_x20 + _DAT_112f0d578);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 == 0) {
        dVar25 = 0.0;
      }
      else {
        func_0x000107c3ceac();
        func_0x000107c615e8(lVar9);
      }
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c51b38();
      if (dVar25 < dVar26) goto LAB_102cfef4c;
    }
    FUN_102d02958(*(undefined8 *)((long)ppuVar22 + lVar8));
    func_0x000107c59b10(puVar4);
    lVar8 = _DAT_11308f370;
    if ((*(double *)((long)ppuVar22 + _DAT_11308f370) < 0.0) &&
       (lVar9 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar9 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 != 0) {
        FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar5 = 3;
        func_0x000103dec218(3);
        uVar10 = 0xd000000000000027;
        func_0x000107c5fadc(0xd000000000000027,0x800000010f109b10);
        uVar11 = 0xd00000000000001f;
        func_0x000107c5fadc(0xd00000000000001f,0x800000010f109b40);
        func_0x000107c3e1fc(lVar9);
        func_0x000107c615e8(lVar9);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar11);
      }
    }
    FUN_102d02958(*(undefined8 *)((long)ppuVar22 + lVar8));
    func_0x000107c59b0c(puVar4);
    pdVar1 = (double *)((long)ppuVar22 + _DAT_11308f340);
    if (((*pdVar1 < 0.0) || (param_3 < *pdVar1)) &&
       (lVar8 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar8 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar10 = 4;
        func_0x000103dec218(4);
        uVar5 = 0xd00000000000002a;
        func_0x000107c5fadc(0xd00000000000002a,0x800000010f109ab0);
        uVar11 = 0xd000000000000027;
        func_0x000107c5fadc(0xd000000000000027,0x800000010f109ae0);
        func_0x000107c3e1fc(lVar8);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar11);
      }
    }
    FUN_102d02958(*pdVar1);
    func_0x000107c597c8(puVar4);
    if (((pdVar1[1] < 0.0) || (param_4 < pdVar1[1])) &&
       (lVar8 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar8 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar10 = 5;
        func_0x000103dec218(5);
        uVar5 = 0xd00000000000002a;
        func_0x000107c5fadc(0xd00000000000002a,0x800000010f109a50);
        uVar11 = 0xd000000000000027;
        func_0x000107c5fadc(0xd000000000000027,0x800000010f109a80);
        func_0x000107c3e1fc(lVar8);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar11);
      }
    }
    FUN_102d02958(pdVar1[1]);
    func_0x000107c597d0(puVar4);
    pdVar1 = (double *)((long)ppuVar22 + _DAT_11308f348);
    if (((*pdVar1 < 0.0) || (1.0 < *pdVar1)) &&
       (lVar8 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar8 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar11 = 6;
        func_0x000103dec218(6);
        uVar5 = 0xd000000000000033;
        func_0x000107c5fadc(0xd000000000000033,0x800000010f1099d0);
        uVar10 = 0xd000000000000030;
        func_0x000107c5fadc(0xd000000000000030,0x800000010f109a10);
        func_0x000107c3e1fc(lVar8);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar10);
      }
    }
    func_0x000107c597cc(*pdVar1,puVar4);
    if (((pdVar1[1] < 0.0) || (1.0 < pdVar1[1])) &&
       (lVar8 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar8 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar11 = 7;
        func_0x000103dec218(7);
        uVar5 = 0xd000000000000033;
        func_0x000107c5fadc(0xd000000000000033,0x800000010f109950);
        uVar10 = 0xd000000000000030;
        func_0x000107c5fadc(0xd000000000000030,0x800000010f109990);
        func_0x000107c3e1fc(lVar8);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar10);
      }
    }
    func_0x000107c597d4(pdVar1[1],puVar4);
    pdVar1 = (double *)((long)ppuVar22 + _DAT_11308f360);
    if (((*pdVar1 < 0.0) || (param_3 < *pdVar1)) &&
       (lVar8 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar8 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar10 = 8;
        func_0x000103dec218(8);
        uVar5 = 0xd000000000000028;
        func_0x000107c5fadc(0xd000000000000028,0x800000010f1098f0);
        uVar11 = 0xd000000000000025;
        func_0x000107c5fadc(0xd000000000000025,0x800000010f109920);
        func_0x000107c3e1fc(lVar8);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar11);
      }
    }
    FUN_102d02958(*pdVar1);
    func_0x000107c5459c(puVar4);
    if (((pdVar1[1] < 0.0) || (param_4 < pdVar1[1])) &&
       (lVar8 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar8 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar10 = 9;
        func_0x000103dec218(9);
        uVar5 = 0xd000000000000028;
        func_0x000107c5fadc(0xd000000000000028,0x800000010f109890);
        uVar11 = 0xd000000000000025;
        func_0x000107c5fadc(0xd000000000000025,0x800000010f1098c0);
        func_0x000107c3e1fc(lVar8);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar11);
      }
    }
    FUN_102d02958(pdVar1[1]);
    func_0x000107c545a4(puVar4);
    pdVar1 = (double *)((long)ppuVar22 + _DAT_11308f368);
    if (((*pdVar1 < 0.0) || (1.0 < *pdVar1)) &&
       (lVar8 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar8 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar11 = 10;
        func_0x000103dec218(10);
        uVar5 = 0xd000000000000031;
        func_0x000107c5fadc(0xd000000000000031,0x800000010f109820);
        uVar10 = 0xd00000000000002e;
        func_0x000107c5fadc(0xd00000000000002e,0x800000010f109860);
        func_0x000107c3e1fc(lVar8);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar10);
      }
    }
    func_0x000107c545a0(*pdVar1,puVar4);
    if (((pdVar1[1] < 0.0) || (1.0 < pdVar1[1])) &&
       (lVar8 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar8 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar11 = 0xb;
        func_0x000103dec218(0xb);
        uVar5 = 0xd000000000000031;
        func_0x000107c5fadc(0xd000000000000031,0x800000010f1097b0);
        uVar10 = 0xd00000000000002e;
        func_0x000107c5fadc(0xd00000000000002e,0x800000010f1097f0);
        func_0x000107c3e1fc(lVar8);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar10);
      }
    }
    func_0x000107c545a8(pdVar1[1],puVar4);
    FUN_102cfff24(param_5);
  }
  func_0x000107c61170(ppuVar22);
LAB_102cff874:
  ppuVar22 = param_5;
  func_0x000107c3d26c();
  if ((((int)ppuVar22 == 2) || (ppuVar22 = param_5, func_0x000107c3d26c(), (int)ppuVar22 == 1)) &&
     ((ppuVar22 = param_5, func_0x000107c42b78(), ppuVar22 != (undefined **)0x6 &&
      (((ppuVar22 = param_5, func_0x000107c42b78(), ppuVar22 != (undefined **)0xc &&
        (ppuVar22 = param_5, func_0x000107c42b78(), ppuVar22 != (undefined **)0x0)) &&
       (lVar8 = *(long *)(unaff_x20 + _DAT_112f0d570), lVar8 != 0)))))) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      ppuVar22 = param_5;
      func_0x000107c3d2dc(param_5);
      func_0x000107c61180();
      FUN_102d029f8(0,0x112dcf430,&PTR_PTR_1126b3e90);
      uVar10 = 2;
      func_0x000103dec290(2);
      uVar5 = 0xd00000000000002e;
      func_0x000107c5fadc(0xd00000000000002e,0x800000010f109700);
      uVar11 = 0xd000000000000016;
      func_0x000107c5fadc(0xd000000000000016,0x800000010f109730);
      func_0x000107c3e200(lVar8);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(ppuVar22);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar11);
    }
  }
  FUN_102d0026c(param_5,puVar4);
  lVar8 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  puVar17 = auStack_210;
  func_0x000107c61534();
  uVar5 = 5;
  *(undefined8 *)(lVar8 + 0x18) = 10;
  *(undefined8 *)(lVar8 + 0x10) = 5;
  ppuVar22 = &PTR____CFConstantStringClassReference_110e4fbf8;
  func_0x000107c5faec();
  ppuStack_230 = ppuVar22;
  puStack_228 = puVar17;
  func_0x000107c61434(puVar17);
  puVar24 = PTR___sSSN_11034da80;
  func_0x000107c602d4(lVar8 + 0x20,&ppuStack_230,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  ppuVar22 = param_5;
  func_0x000107c3d2dc();
  func_0x000107c61180();
  if (ppuVar22 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    puVar24 = (undefined *)0x0;
  }
  else {
    ppuVar12 = ppuVar22;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar22);
  }
  puVar18 = puVar24;
  FUN_102cfe018(lVar8 + 0x48,ppuVar12);
  func_0x000107c6142c(puVar24);
  ppuVar22 = &PTR____CFConstantStringClassReference_110e4fc38;
  func_0x000107c5faec();
  ppuStack_230 = ppuVar22;
  puStack_228 = puVar18;
  func_0x000107c61434(puVar18);
  puVar24 = PTR___sSSN_11034da80;
  func_0x000107c602d4(lVar8 + 0x68,&ppuStack_230,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  ppuVar22 = param_5;
  func_0x000107c3d3dc();
  func_0x000107c31154();
  func_0x000107c61180();
  if (ppuVar22 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    puVar24 = (undefined *)0x0;
  }
  else {
    ppuVar12 = ppuVar22;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar22);
  }
  puVar19 = puVar24;
  FUN_102cfe018(lVar8 + 0x90,ppuVar12);
  func_0x000107c6142c(puVar24);
  ppuVar22 = &PTR____CFConstantStringClassReference_110e4fc78;
  func_0x000107c5faec();
  ppuStack_230 = ppuVar22;
  puStack_228 = puVar19;
  func_0x000107c61434(puVar19);
  puVar24 = PTR___sSSN_11034da80;
  puVar20 = PTR___sSSN_11034da80;
  func_0x000107c602d4(lVar8 + 0xb0,&ppuStack_230,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  ppuVar22 = param_5;
  func_0x000107c51f70();
  func_0x000107c61180();
  if (ppuVar22 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    puVar20 = (undefined *)0x0;
  }
  else {
    ppuVar12 = ppuVar22;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar22);
  }
  puVar14 = puVar20;
  FUN_102cfe018(lVar8 + 0xd8,ppuVar12);
  func_0x000107c6142c(puVar20);
  ppuVar22 = &PTR____CFConstantStringClassReference_110e4fc58;
  func_0x000107c5faec();
  ppuStack_230 = ppuVar22;
  puStack_228 = puVar14;
  func_0x000107c61434(puVar14);
  puVar20 = PTR___sSSSHsWP_11034da90;
  puVar15 = puVar24;
  func_0x000107c602d4(lVar8 + 0xf8,&ppuStack_230,puVar24,PTR___sSSSHsWP_11034da90);
  func_0x000107c5ca24(param_5);
  ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(uVar5);
  ppuVar12 = ppuVar22;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar22);
  ppuVar22 = ppuVar12;
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar12);
  puStack_218 = puVar24;
  lVar9 = lVar8 + 0x120;
  ppuStack_230 = ppuVar22;
  puStack_228 = puVar15;
  func_0x000100102924(&ppuStack_230);
  ppuVar22 = &PTR____CFConstantStringClassReference_110e4fc98;
  func_0x000107c5faec();
  ppuStack_230 = ppuVar22;
  puStack_228 = (undefined1 *)lVar9;
  func_0x000107c61434(lVar9);
  func_0x000107c602d4(lVar8 + 0x140,&ppuStack_230,puVar24,puVar20);
  ppuVar22 = param_5;
  func_0x000107c42b6c();
  func_0x0001008e41d4();
  func_0x000107c61180();
  if (ppuVar22 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    puVar24 = (undefined *)0x0;
  }
  else {
    ppuVar12 = ppuVar22;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar22);
  }
  FUN_102cfe018(lVar8 + 0x168,ppuVar12,puVar24);
  func_0x000107c6142c(puVar14);
  func_0x000107c6142c(lVar9);
  func_0x000107c6142c(puVar17);
  func_0x000107c6142c(puVar18);
  func_0x000107c6142c(puVar19);
  func_0x000107c6142c(puVar24);
  lVar9 = lVar8;
  func_0x000100dfa3f0(lVar8);
  func_0x000107c61588(lVar8);
  uVar5 = 0x112d377a0;
  func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
  uVar10 = 5;
  func_0x000107c61408(lVar8 + 0x20,5,uVar5);
  lVar8 = *(long *)(unaff_x20 + _DAT_112f0d568);
  if (lVar8 == 0) {
    func_0x000107c6142c(lVar9);
  }
  else {
    puVar24 = puVar4;
    func_0x000107c44044();
    func_0x000107c61180();
    if (puVar24 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102cffeec);
      (*pcVar3)();
    }
    ppuVar12 = &PTR____CFConstantStringClassReference_110e4fcd8;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110e4fcd8);
    ppuVar22 = param_5;
    func_0x000107c3d450();
    func_0x000107c61180();
    if (ppuVar22 == (undefined **)0x0) {
      ppuVar23 = (undefined **)0x0;
      uVar10 = 0xe000000000000000;
    }
    else {
      ppuVar23 = ppuVar22;
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar22);
    }
    func_0x000107c5fadc(ppuVar23,uVar10);
    func_0x000107c6142c(uVar10);
    puVar20 = PTR___sypN_11034f1a8;
    lVar13 = lVar9;
    func_0x000107c5f9dc(lVar9,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar9);
    puVar14 = puVar4;
    func_0x000107c3e1c4();
    func_0x000107c61180();
    puVar19 = PTR___ss11AnyHashableVSHsWP_11034e450;
    puVar18 = PTR___ss11AnyHashableVN_11034e448;
    if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102cffef0);
      (*pcVar3)();
    }
    puVar15 = puVar14;
    func_0x000107c5f9e8();
    func_0x000107c61170(puVar14);
    puVar14 = puVar15;
    func_0x000107c5f9dc(puVar15,puVar18,puVar20 + 8,puVar19);
    func_0x000107c6142c(puVar15);
    func_0x000107c4e12c(lVar8);
    func_0x000107c61170(puVar24);
    func_0x000107c61170(ppuVar12);
    func_0x000107c61170(ppuVar23);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(puVar14);
  }
  FUN_102d00764(param_5);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 102cfff24; end: 102d0026b;  */

/* WARNING: Possible PIC construction at 0x000102cfffac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cffff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d00000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d00058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d0009c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d000ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d000fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d00140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d00150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d00198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d001dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d001ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d00224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d0023c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d001f0) */
/* WARNING: Removing unreachable block (ram,0x000102d00240) */
/* WARNING: Removing unreachable block (ram,0x000102d0020c) */
/* WARNING: Removing unreachable block (ram,0x000102d001e0) */
/* WARNING: Removing unreachable block (ram,0x000102d0019c) */
/* WARNING: Removing unreachable block (ram,0x000102d001a0) */
/* WARNING: Removing unreachable block (ram,0x000102d001bc) */
/* WARNING: Removing unreachable block (ram,0x000102d00154) */
/* WARNING: Removing unreachable block (ram,0x000102d00264) */
/* WARNING: Removing unreachable block (ram,0x000102d0015c) */
/* WARNING: Removing unreachable block (ram,0x000102d00144) */
/* WARNING: Removing unreachable block (ram,0x000102d00100) */
/* WARNING: Removing unreachable block (ram,0x000102d00104) */
/* WARNING: Removing unreachable block (ram,0x000102d00120) */
/* WARNING: Removing unreachable block (ram,0x000102d000b0) */
/* WARNING: Removing unreachable block (ram,0x000102d00260) */
/* WARNING: Removing unreachable block (ram,0x000102d000c0) */
/* WARNING: Removing unreachable block (ram,0x000102d000a0) */
/* WARNING: Removing unreachable block (ram,0x000102d0005c) */
/* WARNING: Removing unreachable block (ram,0x000102d00060) */
/* WARNING: Removing unreachable block (ram,0x000102d0007c) */
/* WARNING: Removing unreachable block (ram,0x000102d00004) */
/* WARNING: Removing unreachable block (ram,0x000102cffff4) */
/* WARNING: Removing unreachable block (ram,0x000102cfffb0) */
/* WARNING: Removing unreachable block (ram,0x000102cfffb4) */
/* WARNING: Removing unreachable block (ram,0x000102cfffd0) */
/* WARNING: Removing unreachable block (ram,0x000102d00228) */
/* WARNING: Removing unreachable block (ram,0x000102d00268) */
/* WARNING: Removing unreachable block (ram,0x000102d0022c) */

void FUN_102cfff24(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5159c();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110ddfd98);
    func_0x000107c3d514(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c5c1d4();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d00260);
  (*pcVar1)();
}



/* Entry: 102d0026c; end: 102d00763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0026c(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long lVar4;
  double dVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c5def0();
  func_0x000107c5a584(param_3);
  func_0x000107c5df1c(param_2);
  func_0x000107c5a590(param_3);
  func_0x000107c3d52c(param_2);
  func_0x000107c52454(param_3);
  func_0x000107c5b634(param_2);
  func_0x000107c59558(param_3);
  lVar1 = param_2;
  func_0x000107c3d314(param_2);
  func_0x000107c61180();
  func_0x000107c52560(param_3);
  func_0x000107c61170(lVar1);
  lVar1 = param_2;
  func_0x000107c3d3a0(param_2);
  func_0x000107c61180();
  func_0x000107c52568(param_3);
  func_0x000107c61170(lVar1);
  lVar1 = param_2;
  func_0x000107c3d33c(param_2);
  func_0x000107c61180();
  func_0x000107c52564(param_3);
  func_0x000107c61170(lVar1);
  lVar1 = param_2;
  func_0x000107c3d2dc(param_2);
  func_0x000107c61180();
  func_0x000107c522e0(param_3);
  func_0x000107c61170(lVar1);
  func_0x000107c42b6c(param_2);
  func_0x000107c54744(param_3);
  func_0x000107c5ca24(param_2);
  func_0x000107c59d8c(param_3);
  lVar1 = param_2;
  func_0x000107c3d454(param_2);
  func_0x000107c61180();
  func_0x000107c523c8(param_3);
  func_0x000107c61170(lVar1);
  lVar1 = param_2;
  func_0x000107c3d450(param_2);
  func_0x000107c61180();
  func_0x000107c523c4(param_3);
  func_0x000107c61170(lVar1);
  lVar1 = param_2;
  func_0x000107c3d520(param_2);
  func_0x000107c61180();
  func_0x000107c5244c(param_3);
  func_0x000107c61170(lVar1);
  func_0x000107c4ca5c(param_2);
  func_0x000107c56498(param_3);
  func_0x000107c3e4a8(param_2);
  func_0x000107c52a54(param_3);
  func_0x000107c5c080(param_2);
  func_0x000107c599b4(param_3);
  func_0x000107c5c084(param_2);
  func_0x000107c599b8(param_3);
  lVar1 = param_2;
  func_0x000107c4ebfc(param_2);
  func_0x000107c61180();
  func_0x000107c57634(param_3);
  func_0x000107c61170(lVar1);
  func_0x000107c3d3dc(param_2);
  func_0x000107c52384(param_3);
  func_0x000107c4ca5c(param_2);
  func_0x000107c56498(param_3);
  func_0x000107c5ca24(param_2);
  func_0x000107c59d8c(param_3);
  lVar1 = param_2;
  func_0x000107c5c04c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4c0a8();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c5999c(param_3);
  func_0x000107c3d2e8(param_2);
  func_0x000107c522f4(param_3);
  func_0x000107c3d2e4(param_2);
  func_0x000107c522f0(param_3);
  func_0x000107c3d2f8(param_2);
  func_0x000107c52300(param_3);
  func_0x000107c5b2f8(param_2);
  func_0x000107c593f0(param_3);
  func_0x000107c5b2f4(param_2);
  func_0x000107c593ec(param_3);
  func_0x000107c59488(param_3);
  func_0x000107c42954(param_2);
  func_0x000107c545f4(param_3);
  func_0x000107c42b78(param_2);
  func_0x000107c5474c(param_3);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f0d588);
  lVar1 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    dVar5 = 0.0;
  }
  else {
    func_0x000107c4e144();
    func_0x000107c615e8(lVar1);
    dVar5 = (double)param_1;
  }
  func_0x000107c574f8(dVar5,param_3);
  func_0x000107c49c90(param_2);
  func_0x000107c54390(param_3);
  func_0x000107c4a750(param_2);
  func_0x000107c55788(param_3);
  lVar1 = param_2;
  func_0x000107c4f660();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    lVar1 = param_2;
    func_0x000107c4f660(param_2);
    func_0x000107c61180();
    func_0x000107c53af8(param_3);
    func_0x000107c61170(lVar1);
    lVar1 = param_2;
    func_0x000107c42420(param_2);
    func_0x000107c61180();
    func_0x000107c59950(param_3);
    func_0x000107c61170(lVar1);
    func_0x000107c49a50(param_2);
    func_0x000107c5554c(param_3);
    func_0x000107c4241c(param_2);
    func_0x000107c59944(param_3);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    puVar2 = &UNK_1105c19d0;
    func_0x000107c613fc(&UNK_1105c19d0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(long *)(puVar2 + 0x18) = unaff_x20;
    pcStack_60 = FUN_102d02a68;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_102d02350;
    puStack_68 = &UNK_1105c19e8;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    func_0x000107c61574(puVar2);
    func_0x000107c40ecc(lVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 102d00764; end: 102d009d3;  */

/* WARNING: Possible PIC construction at 0x000102d007bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d008c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d008d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d00924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d00934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d0096c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d00984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d00938) */
/* WARNING: Removing unreachable block (ram,0x000102d00988) */
/* WARNING: Removing unreachable block (ram,0x000102d00954) */
/* WARNING: Removing unreachable block (ram,0x000102d00928) */
/* WARNING: Removing unreachable block (ram,0x000102d008d8) */
/* WARNING: Removing unreachable block (ram,0x000102d008c8) */
/* WARNING: Removing unreachable block (ram,0x000102d007c0) */
/* WARNING: Removing unreachable block (ram,0x000102d00970) */
/* WARNING: Removing unreachable block (ram,0x000102d009ac) */
/* WARNING: Removing unreachable block (ram,0x000102d00974) */

void FUN_102d00764(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  
  uVar3 = 0x4e574f4e4b4e55;
  puVar2 = param_1;
  func_0x000107c3d3dc();
  func_0x000107c31154();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b8d98;
    func_0x000107c61168();
    func_0x000107c3d530();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d009ac);
      (*pcVar1)();
    }
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f24ff8);
    func_0x000107c3d2c0();
    if ((long)param_1 < 2) {
      if (param_1 == (undefined *)0x0) {
        uVar4 = 0xe700000000000000;
      }
      else {
        if (param_1 != (undefined *)0x1) {
LAB_102d009b0:
          puStack_58 = param_1;
          func_0x000107c60614(&UNK_110797600,&puStack_58,&UNK_110797600,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102d009d4);
          (*pcVar1)();
        }
        uVar4 = 0xe400000000000000;
        uVar3 = 0x50414e53;
      }
    }
    else if (param_1 == (undefined *)0x4) {
      uVar4 = 0xe600000000000000;
      uVar3 = 0x3036335f5644;
    }
    else if (param_1 == (undefined *)0x3) {
      uVar4 = 0xe90000000000004e;
      uVar3 = 0x49564f4c5f505041;
    }
    else {
      if (param_1 != (undefined *)0x2) goto LAB_102d009b0;
      uVar4 = 0xe600000000000000;
      uVar3 = 0x4f434f4c4f4d;
    }
    func_0x000107c5fadc(uVar3,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
  }
  else {
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 102d009d4; end: 102d00a23; -[AdLogger logStoryAdTopSnapViewWithParams:] */

/* WARNING: Possible PIC construction at 0x000102d00a0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d00a10) */

void FUN_102d009d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102cfe3ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d00a24; end: 102d01103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d00a24(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined **ppuStack_220;
  undefined1 *puStack_218;
  undefined *puStack_208;
  undefined1 auStack_200 [400];
  
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126ca928;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56150();
  func_0x000107c5e240(param_1);
  func_0x000107c571b8(puVar2);
  func_0x000107c5e244(param_1);
  func_0x000107c571bc(puVar2);
  func_0x000107c5e270(param_1);
  func_0x000107c55ff8(puVar2);
  func_0x000107c5e258(param_1);
  func_0x000107c571fc(puVar2);
  func_0x000107c5e25c(param_1);
  func_0x000107c571cc(puVar2);
  func_0x000107c5e26c(param_1);
  func_0x000107c5a3bc(puVar2);
  func_0x000107c5e268(param_1);
  func_0x000107c5a3b8(puVar2);
  lVar13 = param_1;
  func_0x000107c5e22c(param_1);
  func_0x000107c61180();
  func_0x000107c5a6e8(puVar2);
  func_0x000107c61170(lVar13);
  lVar13 = param_1;
  func_0x000107c5e230(param_1);
  func_0x000107c61180();
  func_0x000107c5a6ec(puVar2);
  func_0x000107c61170(lVar13);
  lVar13 = param_1;
  func_0x000107c5e254(param_1);
  func_0x000107c61180();
  func_0x000107c56d34(puVar2);
  func_0x000107c61170(lVar13);
  lVar13 = param_1;
  func_0x000107c4ba90();
  if ((int)lVar13 != 0) {
    func_0x000107c3fd88(param_1);
    func_0x000107c55470(puVar2);
    func_0x000107c55484(puVar2);
    lVar13 = param_1;
    func_0x000107c4aa04();
    func_0x000107c61180();
    if (lVar13 != 0) {
      func_0x000107c4c0a8();
      func_0x000107c55474(puVar2);
      func_0x000107c61170(lVar13);
    }
  }
  FUN_102d0026c(param_1,puVar2);
  lVar13 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  puVar8 = auStack_200;
  func_0x000107c61534();
  uVar17 = 5;
  *(undefined8 *)(lVar13 + 0x18) = 10;
  *(undefined8 *)(lVar13 + 0x10) = 5;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e4fbf8;
  func_0x000107c5faec();
  ppuStack_220 = ppuVar3;
  puStack_218 = puVar8;
  func_0x000107c61434(puVar8);
  puVar16 = PTR___sSSN_11034da80;
  func_0x000107c602d4(lVar13 + 0x20,&ppuStack_220,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar4 = param_1;
  func_0x000107c3d2dc();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar14 = 0;
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar14 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  puVar9 = puVar16;
  FUN_102cfe018(lVar13 + 0x48,lVar14);
  func_0x000107c6142c(puVar16);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e4fc38;
  func_0x000107c5faec();
  ppuStack_220 = ppuVar3;
  puStack_218 = puVar9;
  func_0x000107c61434(puVar9);
  puVar16 = PTR___sSSN_11034da80;
  func_0x000107c602d4(lVar13 + 0x68,&ppuStack_220,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar4 = param_1;
  func_0x000107c3d3dc();
  func_0x000107c31154();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar14 = 0;
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar14 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  puVar10 = puVar16;
  FUN_102cfe018(lVar13 + 0x90,lVar14);
  func_0x000107c6142c(puVar16);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e4fc78;
  func_0x000107c5faec();
  ppuStack_220 = ppuVar3;
  puStack_218 = puVar10;
  func_0x000107c61434(puVar10);
  puVar16 = PTR___sSSN_11034da80;
  puVar15 = PTR___sSSN_11034da80;
  func_0x000107c602d4(lVar13 + 0xb0,&ppuStack_220,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar4 = param_1;
  func_0x000107c51f70();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar14 = 0;
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar14 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  puVar6 = puVar15;
  FUN_102cfe018(lVar13 + 0xd8,lVar14);
  func_0x000107c6142c(puVar15);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e4fc58;
  func_0x000107c5faec();
  ppuStack_220 = ppuVar3;
  puStack_218 = puVar6;
  func_0x000107c61434(puVar6);
  puVar15 = PTR___sSSSHsWP_11034da90;
  puVar7 = puVar16;
  func_0x000107c602d4(lVar13 + 0xf8,&ppuStack_220,puVar16,PTR___sSSSHsWP_11034da90);
  func_0x000107c5ca24(param_1);
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(uVar17);
  ppuVar5 = ppuVar3;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar3);
  ppuVar3 = ppuVar5;
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar5);
  puStack_208 = puVar16;
  lVar4 = lVar13 + 0x120;
  ppuStack_220 = ppuVar3;
  puStack_218 = puVar7;
  func_0x000100102924(&ppuStack_220);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e4fc98;
  func_0x000107c5faec();
  ppuStack_220 = ppuVar3;
  puStack_218 = (undefined1 *)lVar4;
  func_0x000107c61434(lVar4);
  func_0x000107c602d4(lVar13 + 0x140,&ppuStack_220,puVar16,puVar15);
  lVar14 = param_1;
  func_0x000107c42b6c();
  func_0x0001008e41d4();
  func_0x000107c61180();
  if (lVar14 == 0) {
    lVar12 = 0;
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar12 = lVar14;
    func_0x000107c5faec();
    func_0x000107c61170(lVar14);
  }
  FUN_102cfe018(lVar13 + 0x168,lVar12,puVar16);
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(lVar4);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(puVar16);
  lVar4 = lVar13;
  func_0x000100dfa3f0(lVar13);
  func_0x000107c61588(lVar13);
  uVar17 = 0x112d377a0;
  func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
  uVar11 = 5;
  func_0x000107c61408(lVar13 + 0x20,5,uVar17);
  lVar13 = *(long *)(unaff_x20 + _DAT_112f0d568);
  if (lVar13 == 0) {
    func_0x000107c6142c(lVar4);
  }
  else {
    puVar16 = puVar2;
    func_0x000107c44044();
    func_0x000107c61180();
    if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d01100);
      (*pcVar1)();
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110e4fcd8;
    func_0x000107c61174();
    func_0x000107c3d450();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar14 = 0;
      uVar11 = 0xe000000000000000;
    }
    else {
      lVar14 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    func_0x000107c5fadc(lVar14,uVar11);
    func_0x000107c6142c(uVar11);
    puVar15 = PTR___sypN_11034f1a8;
    lVar12 = lVar4;
    func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar4);
    puVar6 = puVar2;
    func_0x000107c3e1c4();
    func_0x000107c61180();
    puVar10 = PTR___ss11AnyHashableVSHsWP_11034e450;
    puVar9 = PTR___ss11AnyHashableVN_11034e448;
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d01104);
      (*pcVar1)();
    }
    puVar7 = puVar6;
    func_0x000107c5f9e8();
    func_0x000107c61170(puVar6);
    puVar6 = puVar7;
    func_0x000107c5f9dc(puVar7,puVar9,puVar15 + 8,puVar10);
    func_0x000107c6142c(puVar7);
    func_0x000107c4e12c(lVar13);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102d01104; end: 102d01153; -[AdLogger logStoryAdWebViewWithParams:] */

/* WARNING: Possible PIC construction at 0x000102d0113c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d01140) */

void FUN_102d01104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d00a24(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d01154; end: 102d01267;  */

/* WARNING: Possible PIC construction at 0x000102d011b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d011ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d011f0) */
/* WARNING: Removing unreachable block (ram,0x000102d011b4) */
/* WARNING: Removing unreachable block (ram,0x000102d0122c) */

void FUN_102d01154(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ca928;
  func_0x000107c610f8(PTR_PTR_1126ca928);
  func_0x000107c453e4();
  func_0x000107c56150();
  puVar2 = param_1;
  func_0x000107c3ddec();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c571b8(puVar1);
    puVar2 = param_1;
    func_0x000107c3ddec();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c571bc(puVar1);
      puVar2 = param_1;
      func_0x000107c3ddec();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c55ff8(0,puVar1);
        FUN_102d0026c(param_1,puVar1);
      }
      else {
        func_0x000107c4c9bc();
        puVar1 = puVar2;
      }
    }
    else {
      func_0x000107c5b320();
      puVar1 = puVar2;
    }
  }
  else {
    func_0x000107c5b31c();
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102d01268; end: 102d01373; -[AdLogger logStoryAdAppInstallAttachmentWithParams:] */

/* WARNING: Possible PIC construction at 0x000102d012a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d012a4) */

void FUN_102d01268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d01154(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d01374; end: 102d013c3; -[AdLogger logStoryAdCameraViewWithParams:] */

/* WARNING: Possible PIC construction at 0x000102d013ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d013b0) */

void FUN_102d01374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102d012b8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d013c4; end: 102d01657; -[AdLogger logStoryAdPlaceViewWithParams:] */

/* WARNING: Possible PIC construction at 0x000102d01428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d0142c) */

void FUN_102d013c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca928;
  func_0x000107c610f8(PTR_PTR_1126ca928);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c56150();
  FUN_102d0026c(param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102d01658; end: 102d0187f; -[AdLogger logStoryAdShareViewWithParams:] */

/* WARNING: Possible PIC construction at 0x000102d01690: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d01694) */

void FUN_102d01658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102d01448(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d01880; end: 102d018cf; -[AdLogger logStoryAdScreenShotViewWithParams:] */

/* WARNING: Possible PIC construction at 0x000102d018b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d018bc) */

void FUN_102d01880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102d016a8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d018d0; end: 102d01c7f;  */

/* WARNING: Possible PIC construction at 0x000102d01920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d01c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d01c10) */
/* WARNING: Removing unreachable block (ram,0x000102d01b6c) */
/* WARNING: Removing unreachable block (ram,0x000102d01bb4) */
/* WARNING: Removing unreachable block (ram,0x000102d01bc4) */
/* WARNING: Removing unreachable block (ram,0x000102d01bdc) */
/* WARNING: Removing unreachable block (ram,0x000102d01bcc) */
/* WARNING: Removing unreachable block (ram,0x000102d01be0) */
/* WARNING: Removing unreachable block (ram,0x000102d01c28) */
/* WARNING: Removing unreachable block (ram,0x000102d01c2c) */
/* WARNING: Removing unreachable block (ram,0x000102d01bfc) */
/* WARNING: Removing unreachable block (ram,0x000102d01b44) */
/* WARNING: Removing unreachable block (ram,0x000102d01b1c) */
/* WARNING: Removing unreachable block (ram,0x000102d01b08) */
/* WARNING: Removing unreachable block (ram,0x000102d01ad8) */
/* WARNING: Removing unreachable block (ram,0x000102d01ab0) */
/* WARNING: Removing unreachable block (ram,0x000102d01a88) */
/* WARNING: Removing unreachable block (ram,0x000102d01a60) */
/* WARNING: Removing unreachable block (ram,0x000102d0194c) */
/* WARNING: Removing unreachable block (ram,0x000102d01964) */
/* WARNING: Removing unreachable block (ram,0x000102d019f0) */
/* WARNING: Removing unreachable block (ram,0x000102d01a08) */
/* WARNING: Removing unreachable block (ram,0x000102d01c14) */
/* WARNING: Removing unreachable block (ram,0x000102d01a10) */
/* WARNING: Removing unreachable block (ram,0x000102d01924) */
/* WARNING: Removing unreachable block (ram,0x000102d01c24) */
/* WARNING: Removing unreachable block (ram,0x000102d01c38) */
/* WARNING: Removing unreachable block (ram,0x000102d01c54) */
/* WARNING: Removing unreachable block (ram,0x000102d01c68) */

void FUN_102d018d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca950;
  func_0x000107c610f8(PTR_PTR_1126ca950);
  func_0x000107c453e4();
  func_0x000107c3d454(param_1);
  func_0x000107c61180();
  func_0x000107c523c8(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d01c80; end: 102d01f03; -[AdLogger logAdSkip:] */

/* WARNING: Possible PIC construction at 0x000102d01cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d01cbc) */

void FUN_102d01c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d018d0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d01f04; end: 102d0207b; -[AdLogger logStoryAdShareCreateTopSnapViewWithParams:] */

/* WARNING: Possible PIC construction at 0x000102d01f3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d01f40) */

void FUN_102d01f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102d01cd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d0207c; end: 102d020cb; -[AdLogger logPromotedStoryShare:] */

/* WARNING: Possible PIC construction at 0x000102d020b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d020b8) */

void FUN_102d0207c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102d01f54(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d020cc; end: 102d02213;  */

/* WARNING: Possible PIC construction at 0x000102d0214c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d02174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d02150) */
/* WARNING: Removing unreachable block (ram,0x000102d02154) */
/* WARNING: Removing unreachable block (ram,0x000102d02164) */
/* WARNING: Removing unreachable block (ram,0x000102d02178) */
/* WARNING: Removing unreachable block (ram,0x000102d021e0) */
/* WARNING: Removing unreachable block (ram,0x000102d021f4) */

void FUN_102d020cc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca958;
  func_0x000107c610f8(PTR_PTR_1126ca958);
  func_0x000107c453e4();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1);
  }
  func_0x000107c522e0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d02214; end: 102d022eb; -[AdLogger logDisabledCollectionAdTapWithAdId:serveItemId:tapPosition:tapPositionRelative:itemIndex:] */

/* WARNING: Possible PIC construction at 0x000102d022c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d022cc) */

void FUN_102d02214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  )

{
  undefined8 uVar1;
  
  if (param_7 == 0) {
    param_7 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
    uVar1 = param_6;
  }
  if (param_8 == 0) {
    param_8 = 0;
    param_6 = 0;
  }
  else {
    func_0x000107c5faec(param_8);
  }
  func_0x000107c61174(param_5);
  FUN_102d020cc(param_1,param_2,param_3,param_4,param_7,uVar1,param_8,param_6,param_9);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
  return;
}



/* Entry: 102d022ec; end: 102d0234f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d022ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c574c4(param_2,param_2,param_1);
  lVar1 = *(long *)(param_3 + _DAT_112f0d560);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4bfb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102d02350; end: 102d0238b;  */

void FUN_102d02350(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102d0238c; end: 102d023bf;  */

void FUN_102d0238c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d023c0; end: 102d02437; -[AdLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d023dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d023fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d023e0) */
/* WARNING: Removing unreachable block (ram,0x000102d02400) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d023c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0d588));
  return;
}



/* Entry: 102d02438; end: 102d024bf;  */

void FUN_102d02438(void)

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
    FUN_102d029f8(0,0x112f0d580,&PTR_PTR_1126ca960);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f0d5b8;
  plVar5 = (long *)&UNK_10db40358;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102d024c0; end: 102d025f3;  */

undefined * FUN_102d024c0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d025f4);
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
    FUN_102d02438();
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
    FUN_102d029f8(0,0x112f0d580,&PTR_PTR_1126ca960);
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



/* Entry: 102d025f4; end: 102d02777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d025f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = &stack0xffffffffffffff60;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f0d588) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d560) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d558) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d570) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d568) = param_5;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_70 = 0x102cfd2c4;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102cfd2e0;
  puStack_78 = &UNK_1105c1a10;
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + _DAT_112f0d578) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_initWithAudioSession_userBlizzar_1125daf28,
                      param_1,param_2,param_3,param_4,param_5);
  if (puVar4 != (undefined1 *)0x0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d02778);
  (*pcVar1)();
}



/* Entry: 102d02778; end: 102d02957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d02778(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ca960;
  func_0x000107c610f8(PTR_PTR_1126ca960);
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(param_1 + _DAT_113069f60);
  func_0x000107c5fadc(uVar2,((undefined8 *)(param_1 + _DAT_113069f60))[1]);
  func_0x000107c593e4(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c55534(puVar1);
  func_0x000107c59f24(*(undefined8 *)(param_1 + _DAT_113069f78),puVar1);
  func_0x000107c52e30(*(undefined8 *)(param_1 + _DAT_113069f80),puVar1);
  func_0x000107c59b1c(puVar1);
  lVar3 = ((undefined8 *)(param_1 + _DAT_113069fa0))[1];
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113069fa0);
    func_0x000107c5fadc(uVar2);
  }
  func_0x000107c554cc(puVar1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113069fa8);
  func_0x0001084b94dc(uVar2);
  func_0x000107c61180();
  func_0x000107c554c8(puVar1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113069fb0);
  func_0x000103bfd6b4(uVar2);
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar3);
  func_0x000107c52444(puVar1);
  func_0x000107c61170(uVar2);
  if (((undefined8 *)(param_1 + _DAT_113069fd8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113069fd8);
    func_0x000107c5fadc(uVar2);
  }
  func_0x000107c31198(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c54744(puVar1);
  func_0x000107c54fb4(puVar1);
  return puVar1;
}



/* Entry: 102d02958; end: 102d029f7;  */

long FUN_102d02958(double param_1)

{
  code *pcVar1;
  double dVar2;
  
  dVar2 = (double)(long)param_1;
  if (NAN(dVar2)) {
    return 0;
  }
  if (9.223372036854776e+18 <= dVar2) {
    return 0x7fffffffffffffff;
  }
  if (dVar2 <= -9.223372036854776e+18) {
    return -0x8000000000000000;
  }
  if ((ulong)ABS(dVar2) < 0x7ff0000000000000) {
    if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d029dc);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d029e0);
      (*pcVar1)();
    }
    return (long)dVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d029d8);
  (*pcVar1)();
}



/* Entry: 102d029f8; end: 102d02a37;  */

void FUN_102d029f8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d02a38; end: 102d02a47;  */

undefined1  [16] FUN_102d02a38(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x18) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x17 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 102d02a48; end: 102d02a67;  */

void FUN_102d02a48(void)

{
  func_0x000107c61168(&PTR_PTR_1128a0350);
  return;
}



/* Entry: 102d02a68; end: 102d02a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d02a68(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c574c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x10),param_1);
  lVar1 = *(long *)(lVar1 + _DAT_112f0d560);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4bfb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102d02a94; end: 102d02b03;  */

void FUN_102d02a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_40 [8];
  
  func_0x000107c61574(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_1);
  func_0x000107c610f8();
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d02b04; end: 102d02b3f; -[AdPerformanceReportingSession initWithAdDataSource:adConfigProvider:adConfigProviderV2:logLatency:] */

void FUN_102d02b04(undefined8 param_1)

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



/* Entry: 102d02b40; end: 102d02b63; -[AdPerformanceReportingSession registeredEventsForOperaSession] */

void FUN_102d02b40(void)

{
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d02b64; end: 102d02b67; -[AdPerformanceReportingSession setPlaylistItemController:] */

void FUN_102d02b64(void)

{
  return;
}



/* Entry: 102d02b68; end: 102d02b6b; -[AdPerformanceReportingSession operaViewDidSendEvent:page:params:] */

void FUN_102d02b68(void)

{
  return;
}



/* Entry: 102d02b6c; end: 102d02b6f; -[AdPerformanceReportingSession beginObservationWithAdUnifiedEventStreams:] */

void FUN_102d02b6c(void)

{
  return;
}



/* Entry: 102d02b70; end: 102d02bc3;  */

void FUN_102d02b70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d02bc4; end: 102d02ca3; +[PromotedStoryDataModelUtils discoverFeedPromotedSnapsFromAdResponse:requestId:serveItemId:] */

void FUN_102d02bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_102d033dc(param_3,param_4,uVar2,param_5,param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  uVar1 = 0;
  FUN_102d043b0(0,0x112f0d610,&PTR_PTR_1126d9d70);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d02ca4; end: 102d02d07; +[PromotedStoryDataModelUtils discoverFeedStoryFromAdResponse:adConfigProvider:] */

void FUN_102d02ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  FUN_102d03ba0(param_3,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d02d08; end: 102d02d43; -[PromotedStoryDataModelUtils init] */

void FUN_102d02d08(undefined8 param_1)

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



/* Entry: 102d02d44; end: 102d02d77;  */

void FUN_102d02d44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d02d78; end: 102d02def;  */

void FUN_102d02d78(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102d043b0(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102d02df0; end: 102d02f17;  */

ulong FUN_102d02df0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d02f18);
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
  FUN_102d02f18(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d02f14);
      (*pcVar1)();
    }
    FUN_102d02fb8(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102d02f18; end: 102d02fb7;  */

undefined * FUN_102d02f18(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112f0d610;
    FUN_102d02d78(0x112f0d610,&PTR_PTR_1126d9d70,0x112f0d628,&UNK_10db40488);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102d02fb8; end: 102d030cf;  */

long FUN_102d02fb8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d030cc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d030d0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102d043b0(0,0x112f0d610,&PTR_PTR_1126d9d70);
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
      FUN_102d043b0(0,0x112f0d610,&PTR_PTR_1126d9d70);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d030c8);
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



/* Entry: 102d030d0; end: 102d0326b;  */

ulong FUN_102d030d0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d031a0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d031a4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001047d7574(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar4 = 0;
    func_0x0001047d7574(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f109c00);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0326c);
  (*pcVar2)();
}



/* Entry: 102d0326c; end: 102d03287;  */

void FUN_102d0326c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102d03288();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102d03288; end: 102d033db;  */

undefined * FUN_102d03288(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d033dc);
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
    puVar3 = (undefined *)0x112f0d618;
    FUN_102d02d78(0x112f0d618,&PTR_PTR_1126d9d60,0x112f0d620,&UNK_10db40478);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_102d043b0(0,0x112f0d618,&PTR_PTR_1126d9d60);
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



/* Entry: 102d033dc; end: 102d03b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102d033dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  double dVar35;
  undefined8 uStack_c0;
  long lStack_98;
  
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 == 0) {
    return puVar18;
  }
  func_0x000107c61174();
  lVar32 = param_1;
  func_0x0001084c63d4();
  func_0x000107c61180();
  lVar11 = lVar32;
  func_0x000107c5fc54();
  func_0x000107c61170(lVar32);
  puVar4 = puVar18;
  if (*(undefined **)(param_1 + _DAT_113815208) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + _DAT_113815208);
  }
  uVar28 = *(long *)(lVar11 + 0x10) - 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_11308f138);
  puVar2 = (undefined8 *)(param_1 + _DAT_11308f148);
  func_0x000107c61434();
  bVar9 = false;
  puVar21 = puVar18;
  if ((long)uVar28 < 1) goto LAB_102d034d0;
LAB_102d034c8:
  uVar23 = uVar28 - 1;
  do {
    if (((ulong)puVar4 & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x102d03b8c);
        (*pcVar10)();
      }
      uVar12 = *(ulong *)(puVar4 + uVar28 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar12 = uVar28;
      func_0x000100e471e4(uVar28,puVar4);
    }
    lVar32 = *(long *)(uVar12 + _DAT_11308f1d8);
    lVar5 = ((long *)(uVar12 + _DAT_11308f1d8))[1];
    lVar22 = 0;
    if (lVar5 != 0) {
      func_0x000107c61438(lVar5,2);
      lVar22 = lVar32;
      func_0x000107c5fadc(lVar32,lVar5);
      func_0x000107c6142c(lVar5);
    }
    lVar13 = lVar22;
    func_0x0001084c6210(lVar22,param_1);
    func_0x000107c61180();
    func_0x000107c61170(lVar22);
    if (lVar13 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      uVar24 = *(ulong *)(lVar13 + _DAT_11308f980);
      if (uVar24 >> 0x3e == 0) {
        uVar29 = *(ulong *)((uVar24 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar29 = uVar24 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar24) {
          uVar29 = uVar24;
        }
        func_0x000107c60480();
      }
      if (uVar29 != 0) {
        FUN_102d0326c(0,uVar29 & ((long)uVar29 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar29 < 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x102d03b98);
          (*pcVar10)();
        }
        uVar31 = 0;
        do {
          if ((uVar24 & 0xc000000000000001) == 0) {
            if (*(long *)((uVar24 & 0xffffffffffffff8) + 0x10) <= (long)uVar31) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x102d03b88);
              (*pcVar10)();
            }
            uVar14 = *(ulong *)(uVar24 + uVar31 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar14 = uVar31;
            FUN_102d030d0(uVar31,uVar24);
          }
          uVar16 = *(undefined8 *)(uVar14 + _DAT_11308f9c0);
          lVar22 = ((undefined8 *)(uVar14 + _DAT_11308f9c0))[1];
          if (((undefined8 *)(uVar14 + _DAT_11308f9b8))[1] == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(undefined8 *)(uVar14 + _DAT_11308f9b8);
            func_0x000107c5fadc(uVar15);
          }
          uVar30 = 0;
          if (lVar22 != 0) {
            func_0x000107c5fadc(uVar16,lVar22);
            uVar30 = uVar16;
          }
          puVar25 = PTR_PTR_1126d9d60;
          func_0x000107c610f8();
          func_0x000107c48494();
          func_0x000107c61170(uVar15);
          func_0x000107c61170(uVar30);
          if (puVar25 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x102d03b9c);
            (*pcVar10)();
          }
          func_0x000107c61170(uVar14);
          uVar14 = *(ulong *)(puVar18 + 0x10);
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar14) {
            FUN_102d0326c(1 < *(ulong *)(puVar18 + 0x18),uVar14 + 1,1);
          }
          uVar31 = uVar31 + 1;
          *(ulong *)(puVar18 + 0x10) = uVar14 + 1;
          *(undefined **)(puVar18 + uVar14 * 8 + 0x20) = puVar25;
        } while (uVar29 != uVar31);
      }
      puVar25 = PTR_PTR_1126d9d68;
      func_0x000107c610f8();
      uVar16 = 0;
      FUN_102d043b0(0,0x112f0d618,&PTR_PTR_1126d9d60);
      puVar17 = puVar18;
      func_0x000107c5fc48(puVar18,uVar16);
      func_0x000107c6142c(puVar18);
      func_0x000107c4734c();
      func_0x000107c61170(lVar13);
      func_0x000107c61170(puVar17);
    }
    dVar35 = 0.0;
    if ((*(long *)(uVar12 + _DAT_11308f208) != 0) &&
       (lVar22 = *(long *)(*(long *)(uVar12 + _DAT_11308f208) + _DAT_113091068), lVar22 != 0)) {
      dVar35 = (double)*(long *)(lVar22 + _DAT_1130905e0);
    }
    lStack_98 = param_1;
    uVar24 = uVar12;
    func_0x0001084c659c(param_1,uVar12);
    func_0x000107c61180();
    if (lStack_98 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar24);
    }
    if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x102d03b90);
      (*pcVar10)();
    }
    if (*(ulong *)(lVar11 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x102d03b94);
      (*pcVar10)();
    }
    puVar3 = (undefined8 *)(lVar11 + 0x20 + uVar28 * 0x10);
    uVar16 = *puVar3;
    uVar34 = puVar3[1];
    uStack_c0 = *(undefined8 *)(uVar12 + _DAT_11308f200);
    lVar22 = ((undefined8 *)(uVar12 + _DAT_11308f200))[1];
    uVar15 = *(undefined8 *)(uVar12 + _DAT_11308f1f8);
    lVar13 = ((undefined8 *)(uVar12 + _DAT_11308f1f8))[1];
    uVar30 = *puVar1;
    lVar6 = puVar1[1];
    uVar26 = *puVar2;
    lVar7 = puVar2[1];
    puVar18 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c61434(uVar34);
    func_0x000107c4cec4(dVar35,puVar18);
    uVar27 = *(undefined8 *)(uVar12 + _DAT_11308f228);
    lVar8 = ((undefined8 *)(uVar12 + _DAT_11308f228))[1];
    func_0x000107c61174();
    func_0x000107c5fadc(uVar16,uVar34);
    func_0x000107c6142c(uVar34);
    if (lVar22 == 0) {
      uStack_c0 = 0;
    }
    else {
      func_0x000107c5fadc(uStack_c0,lVar22);
    }
    uVar34 = 0;
    if (lVar13 != 0) {
      func_0x000107c5fadc(uVar15,lVar13);
      uVar34 = uVar15;
    }
    if (param_3 == 0) {
      uVar15 = 0;
      if (param_5 == 0) goto LAB_102d03998;
LAB_102d03914:
      uVar33 = param_4;
      func_0x000107c5fadc(param_4);
      if (lVar6 != 0) goto LAB_102d03924;
LAB_102d039a0:
      uVar30 = 0;
      if (lVar5 == 0) goto LAB_102d039a8;
LAB_102d03938:
      func_0x000107c5fadc(lVar32,lVar5);
      func_0x000107c6142c(lVar5);
      if (lVar7 != 0) goto LAB_102d03958;
LAB_102d039b4:
      uVar26 = 0;
      if (lVar8 == 0) goto LAB_102d039bc;
LAB_102d03968:
      func_0x000107c5fadc(uVar27,lVar8);
    }
    else {
      uVar15 = param_2;
      func_0x000107c5fadc(param_2);
      if (param_5 != 0) goto LAB_102d03914;
LAB_102d03998:
      uVar33 = 0;
      if (lVar6 == 0) goto LAB_102d039a0;
LAB_102d03924:
      func_0x000107c5fadc(uVar30,lVar6);
      if (lVar5 != 0) goto LAB_102d03938;
LAB_102d039a8:
      lVar32 = 0;
      if (lVar7 == 0) goto LAB_102d039b4;
LAB_102d03958:
      func_0x000107c5fadc();
      if (lVar8 != 0) goto LAB_102d03968;
LAB_102d039bc:
      uVar27 = 0;
    }
    puVar17 = PTR_PTR_1126d9d70;
    func_0x000107c610f8();
    func_0x000107c487a0(dVar35);
    func_0x000107c61170(puVar25);
    func_0x000107c61170(lStack_98);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(lVar32);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x102d03ba0);
      (*pcVar10)();
    }
    puVar20 = puVar21;
    func_0x000107c61550();
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((((int)puVar20 == 0) || ((long)puVar21 < 0)) ||
       (puVar20 = puVar21, ((ulong)puVar21 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar21 >> 0x3e == 0) {
        puVar19 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar19 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar21) {
          puVar19 = puVar21;
        }
        func_0x000107c60480(puVar19);
      }
      puVar20 = (undefined *)0x0;
      FUN_102d02df0(0,puVar19 + 1,1,puVar21);
    }
    uVar24 = (ulong)puVar20 & 0xffffffffffffff8;
    uVar28 = *(ulong *)(uVar24 + 0x10);
    puVar21 = puVar20;
    if (*(ulong *)(uVar24 + 0x18) >> 1 <= uVar28) {
      puVar21 = (undefined *)(ulong)(1 < *(ulong *)(uVar24 + 0x18));
      FUN_102d02df0(puVar21,uVar28 + 1,1,puVar20);
      uVar24 = (ulong)puVar21 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar24 + 0x10) = uVar28 + 1;
    *(undefined **)(uVar24 + uVar28 * 8 + 0x20) = puVar17;
    func_0x000107c61170(puVar25);
    func_0x000107c61170(uVar12);
    uVar28 = uVar23;
    if (0 < (long)uVar23) goto LAB_102d034c8;
LAB_102d034d0:
    if (uVar28 != 0 || bVar9) {
      func_0x000107c6142c(puVar4);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(lVar11);
      return puVar21;
    }
    uVar23 = 0;
    bVar9 = true;
  } while( true );
}



/* Entry: 102d03ba0; end: 102d0438f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d03ba0(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  undefined1 *puVar26;
  long lVar27;
  long alStack_120 [12];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar16 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  puVar26 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = (long)puVar26 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar27 - extraout_x12_01;
  if (param_1 == 0) {
    uVar19 = 0;
    uVar13 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + _DAT_11308f140);
    uVar13 = ((undefined8 *)(param_1 + _DAT_11308f140))[1];
    func_0x000107c61434(uVar13);
  }
  lVar5 = param_1;
  FUN_102d033dc(param_1,0,0xe000000000000000,uVar19,uVar13);
  func_0x000107c6142c(uVar13);
  puStack_80 = (undefined1 *)lVar5;
  puStack_68 = (undefined *)param_1;
  if (param_1 == 0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    pcVar24 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    (*pcVar24)(lVar22,1,1,lVar5);
    (*pcVar24)(lVar27,1,1,lVar5);
LAB_102d03e5c:
    lVar5 = 0;
  }
  else {
    if (*(long *)(param_1 + _DAT_113815228) == 0) {
LAB_102d03d20:
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar22,1,1,lVar5);
    }
    else {
      puVar1 = (ulong *)(*(long *)(param_1 + _DAT_113815228) + _DAT_1130910d0);
      uVar14 = puVar1[1];
      if (uVar14 == 0) goto LAB_102d03d20;
      uVar17 = *puVar1;
      uVar18 = uVar17 & 0xffffffffffff;
      if ((uVar14 & 0x2000000000000000) != 0) {
        uVar18 = uVar14 >> 0x38 & 0xf;
      }
      if (uVar18 == 0) goto LAB_102d03d20;
      func_0x000107c61434(uVar14);
      func_0x000107c5edd0(lVar22,uVar17,uVar14);
      func_0x000107c6142c(uVar14);
    }
    if (*(long *)((long)puStack_68 + _DAT_113815228) == 0) {
LAB_102d03da8:
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar27,1,1,lVar5);
    }
    else {
      puVar1 = (ulong *)(*(long *)((long)puStack_68 + _DAT_113815228) + _DAT_1130910d8);
      uVar14 = puVar1[1];
      if (uVar14 == 0) goto LAB_102d03da8;
      uVar17 = *puVar1;
      uVar18 = uVar17 & 0xffffffffffff;
      if ((uVar14 & 0x2000000000000000) != 0) {
        uVar18 = uVar14 >> 0x38 & 0xf;
      }
      if (uVar18 == 0) goto LAB_102d03da8;
      func_0x000107c61434(uVar14);
      func_0x000107c5edd0(lVar27,uVar17,uVar14);
      func_0x000107c6142c(uVar14);
    }
    uVar14 = *(ulong *)((long)puStack_68 + _DAT_113815208);
    if (uVar14 == 0) goto LAB_102d03e5c;
    uVar18 = uVar14 & 0xffffffffffffff8;
    if (uVar14 >> 0x3e == 0) {
      uVar17 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar17 = uVar14;
      if (-1 < (long)uVar14) {
        uVar17 = uVar18;
      }
      func_0x000107c60480();
    }
    if (uVar17 == 0) goto LAB_102d03e5c;
    if ((uVar14 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar18 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x102d04390);
        (*pcVar24)();
      }
      lVar5 = *(long *)(uVar14 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar5 = 0;
      func_0x000100e471e4(0,uVar14);
    }
  }
  lStack_78 = lVar5;
  lStack_70 = lVar22;
  if (param_2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar3 = puStack_68;
    if (param_2 != 0) {
      if (lVar5 == 0) {
        if (puStack_68 != (undefined *)0x0) goto LAB_102d03ec8;
LAB_102d03efc:
        uVar19 = 0;
      }
      else {
        if (puStack_68 == (undefined *)0x0) goto LAB_102d03efc;
LAB_102d03ec8:
        if (*(long *)((long)puStack_68 + _DAT_113815228) == 0) goto LAB_102d03efc;
        uVar19 = *(undefined8 *)(*(long *)((long)puStack_68 + _DAT_113815228) + _DAT_113091100);
        func_0x000107c61174(uVar19);
      }
      lVar21 = param_2;
      func_0x000107c4f45c();
      func_0x000107c61180();
      func_0x000107c615e8(param_2);
      func_0x000107c61170(uVar19);
      lVar5 = lStack_78;
      lVar23 = lStack_70;
      goto joined_r0x000102d03f34;
    }
  }
  lVar21 = 0;
  lVar23 = lVar22;
  puVar3 = puStack_68;
joined_r0x000102d03f34:
  if ((puVar3 == (undefined *)0x0) || (*(long *)((long)puVar3 + _DAT_113815228) == 0)) {
    uVar19 = 0;
    lVar15 = 0;
  }
  else {
    puVar2 = (undefined8 *)(*(long *)((long)puVar3 + _DAT_113815228) + _DAT_1130910e0);
    uVar19 = *puVar2;
    lVar15 = puVar2[1];
    func_0x000107c61434(lVar15);
  }
  lStack_88 = lVar27;
  func_0x000100029394(lVar27,lVar16);
  func_0x000100029394(lVar23,puVar26);
  if (puVar3 == (undefined *)0x0) {
    uStack_a8 = 0;
    lVar27 = 0;
  }
  else {
    uStack_a8 = *(undefined8 *)((long)puVar3 + _DAT_11308f140);
    lVar27 = ((undefined8 *)((long)puVar3 + _DAT_11308f140))[1];
    func_0x000107c61434(lVar27);
  }
  if (lVar5 == 0) {
    uStack_b0 = 0;
    lVar5 = 0;
    puVar7 = puStack_80;
  }
  else {
    uStack_b0 = *(undefined8 *)(lVar5 + _DAT_11308f1f8);
    lVar5 = ((undefined8 *)(lVar5 + _DAT_11308f1f8))[1];
    func_0x000107c61434(lVar5);
    puVar7 = puStack_80;
  }
  puStack_80 = puVar7;
  if (puVar3 == (undefined *)0x0) {
    uStack_b8 = 0;
    lVar23 = 0;
  }
  else {
    uStack_b8 = *(undefined8 *)((long)puVar3 + _DAT_11308f138);
    lVar23 = ((undefined8 *)((long)puVar3 + _DAT_11308f138))[1];
    func_0x000107c61434(lVar23);
  }
  lStack_90 = lVar21;
  if (lVar15 == 0) {
    func_0x000107c61174(lVar21);
    uStack_98 = 0;
  }
  else {
    func_0x000107c61174(lVar21);
    func_0x000107c5fadc(uVar19,lVar15);
    uStack_98 = uVar19;
    func_0x000107c6142c(lVar15);
  }
  uVar19 = 0;
  FUN_102d043b0(0,0x112f0d610,&PTR_PTR_1126d9d70);
  lVar21 = (long)puVar7;
  func_0x000107c5fc48(puVar7,uVar19);
  lStack_a0 = lVar21;
  func_0x000107c6142c(puVar7);
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar25 = *(long *)(lVar6 + -8);
  pcVar24 = *(code **)(lVar25 + 0x30);
  lVar21 = lVar16;
  (*pcVar24)(lVar16,1,lVar6);
  lVar15 = 0;
  if ((int)lVar21 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar25 + 8))(lVar16,lVar6);
    lVar15 = lVar21;
  }
  puVar7 = puVar26;
  (*pcVar24)(puVar26,1,lVar6);
  if ((int)puVar7 == 1) {
    puStack_80 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ed90();
    puStack_80 = puVar7;
    (**(code **)(lVar25 + 8))(puVar26,lVar6);
  }
  uVar19 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  if (lVar27 == 0) {
    uStack_a8 = 0;
    uVar13 = uStack_b0;
  }
  else {
    func_0x000107c5fadc(uStack_a8,lVar27);
    func_0x000107c6142c(lVar27);
    uVar13 = uStack_b0;
  }
  uStack_b0 = uVar13;
  if (lVar5 == 0) {
    uVar13 = 0;
    uVar20 = uStack_b8;
  }
  else {
    func_0x000107c5fadc(uVar13,lVar5);
    func_0x000107c6142c(lVar5);
    uVar20 = uStack_b8;
  }
  uStack_b8 = uVar20;
  if (lVar23 == 0) {
    uVar20 = 0;
  }
  else {
    func_0x000107c5fadc(uVar20,lVar23);
    func_0x000107c6142c(lVar23);
  }
  puVar8 = PTR_PTR_1126d9810;
  uStack_b0 = uVar20;
  func_0x000107c610f8();
  uVar9 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar10 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  *(undefined8 *)(lVar22 + -8) = 0;
  *(undefined8 *)(lVar22 + -0x10) = 0;
  lVar27 = lStack_90;
  *(long *)(lVar22 + -0x18) = lStack_90;
  *(undefined8 *)(lVar22 + -0x20) = 0;
  *(undefined8 *)(lVar22 + -0x28) = 0;
  *(undefined8 *)(lVar22 + -0x30) = 0;
  *(undefined8 *)(lVar22 + -0x38) = 0;
  *(undefined8 *)(lVar22 + -0x48) = uVar9;
  *(undefined8 *)(lVar22 + -0x40) = uVar10;
  puVar3 = puStack_68;
  *(undefined8 *)(lVar22 + -0x58) = uVar20;
  *(undefined **)(lVar22 + -0x50) = puVar3;
  *(undefined8 *)(lVar22 + -0x60) = uVar13;
  puVar26 = puStack_80;
  uVar4 = uStack_98;
  lVar16 = lStack_a0;
  uVar20 = uStack_a8;
  func_0x000107c46cd0();
  puStack_68 = puVar8;
  func_0x000107c61170(lVar27);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  puVar8 = PTR_PTR_1126c6d78;
  func_0x000107c610f8(PTR_PTR_1126c6d78);
  func_0x000107c453e4();
  func_0x000107c5e80c();
  func_0x000107c61180();
  func_0x000107c61170();
  puVar11 = PTR_PTR_1126c6d88;
  func_0x000107c61168(PTR_PTR_1126c6d88);
  puVar3 = puStack_68;
  func_0x000107c4f460();
  func_0x000107c61180();
  puVar12 = puVar8;
  func_0x000107c5e7f4(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c5e774(puVar8);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar11 = puVar8;
  func_0x000107c3ecc8(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lStack_78);
  func_0x0001000293e4(lStack_88);
  func_0x0001000293e4(lStack_70);
  return puVar11;
}



/* Entry: 102d04390; end: 102d043af;  */

void FUN_102d04390(void)

{
  func_0x000107c61168(&PTR_PTR_1128a04e8);
  return;
}



/* Entry: 102d043b0; end: 102d043ef;  */

void FUN_102d043b0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d043f0; end: 102d0452b; +[PromotedStoryLoggingUtils adTileTrackInfoWithAdResponse:screenSize:promotedStoryTileSize:tileTimeViewedInMillis:adReportTrackInfo:adHideTrackInfo:tileAttachmentTrackInfo:hasCta:intermediateTrack:viewContext:tileAutoPlayEligible:tileAutoPlayed:tileAutoPlayTimeMs:] */

void FUN_102d043f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_8;
  func_0x000107c61174();
  uVar2 = param_9;
  func_0x000107c61174();
  uVar3 = param_10;
  func_0x000107c61174(param_10);
  uVar4 = param_11;
  func_0x000107c61174(param_11);
  uVar5 = param_14;
  func_0x000107c61174(param_14);
  FUN_102d0459c(param_1,param_2,param_3,param_4,param_5,param_8,param_9,param_10,param_11,param_12,
                param_13,param_14,param_15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_8);
  return;
}



/* Entry: 102d0452c; end: 102d04567; -[PromotedStoryLoggingUtils init] */

void FUN_102d0452c(undefined8 param_1)

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



/* Entry: 102d04568; end: 102d0459b;  */

void FUN_102d04568(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d0459c; end: 102d04a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0459c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,long param_9,
                  undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_ffffffffffff98a8;
  undefined1 auStack_66e8 [2744];
  undefined1 auStack_5c30 [2936];
  undefined1 auStack_50b8 [2744];
  undefined1 auStack_4600 [2936];
  undefined1 auStack_3a88 [6096];
  undefined1 auStack_22b8 [2744];
  undefined1 auStack_1800 [2936];
  ulong uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined1 auStack_b88 [2744];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((param_6 == 0) || (*(int *)(param_6 + _DAT_113815200) != 7)) {
    if (param_9 == 0) {
      func_0x000101895c44(auStack_50b8);
    }
    else {
      func_0x000107c61174(param_9);
      func_0x0001042a357c(auStack_1800);
      func_0x00010178e4a0(auStack_1800);
      func_0x000107c610b4(auStack_3a88,auStack_1800,0xab2);
      func_0x00010178e4a4(auStack_3a88);
      func_0x000107c610b4(auStack_50b8,auStack_3a88,0xab2);
    }
    func_0x000107c610b4(auStack_b88,auStack_50b8,0xab2);
    if (param_6 == 0) {
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      if (*(long *)(param_6 + _DAT_113815228) == 0) {
        uVar8 = 0;
        uVar9 = 0;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(param_6 + _DAT_113815228) + _DAT_1130910c8);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        func_0x000107c61434(uVar9);
      }
      func_0x0001084c63d4();
      func_0x000107c61180();
      lVar3 = param_6;
      func_0x000107c5fc54();
      func_0x000107c61170(param_6);
      uVar10 = *(undefined8 *)(lVar3 + 0x10);
      func_0x000107c6142c(lVar3);
    }
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    FUN_102d04a94(auStack_50b8,auStack_3a88);
    func_0x0001042687a4(auStack_4600,0,param_5,uVar8,uVar9,uVar10,0,0,0,0,0,0xffffffffffffffff,0,0,
                        CONCAT71((int7)((ulong)in_stack_ffffffffffff98a8 >> 8),param_10) &
                        0xffffffffffffff01,auStack_b88,0,0x200);
    if (param_7 == 0) {
      uVar4 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 1;
      uVar7 = 0;
    }
    else {
      uVar4 = (ulong)*(byte *)(param_7 + _DAT_11306ad48);
      uVar8 = *(undefined8 *)(param_7 + _DAT_11306ad50);
      uVar10 = ((undefined8 *)(param_7 + _DAT_11306ad50))[1];
      uVar9 = *(undefined8 *)(param_7 + _DAT_11306ad58);
      uVar7 = ((undefined8 *)(param_7 + _DAT_11306ad58))[1];
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar10);
    }
    if (param_8 == 0) {
      uVar6 = 2;
      uVar5 = 0;
    }
    else {
      uVar6 = *(undefined1 *)(param_8 + _DAT_11306a798);
      uVar5 = *(undefined8 *)(param_8 + _DAT_11306a7a0);
    }
    uStack_c88 = uVar4;
    uStack_c80 = uVar8;
    uStack_c78 = uVar10;
    uStack_c70 = uVar9;
    uStack_c68 = uVar7;
    func_0x0001018a91f0(auStack_66e8);
    func_0x000107c610b4(auStack_22b8,auStack_66e8,0xab2);
    uStack_c58 = 0;
    uStack_c60 = 0;
    uStack_c48 = 0;
    uStack_c50 = 0;
    uStack_c38 = 0;
    uStack_c40 = 0;
    uStack_c30 = 0;
    uStack_c28 = 1;
    uStack_c18 = 0;
    uStack_c20 = 0;
    uStack_c08 = 0;
    uStack_c10 = 0;
    uStack_bf8 = 0;
    uStack_c00 = 0;
    uStack_be8 = 0;
    uStack_bf0 = 0;
    uStack_bd8 = 0;
    uStack_be0 = 0;
    uStack_bc8 = 0;
    uStack_bd0 = 0;
    uStack_bc0 = 1;
    uStack_ba8 = 0;
    uStack_bb0 = 0;
    uStack_bb8 = 0;
    uStack_ba0 = 1;
    uStack_b90 = 0;
    uStack_b98 = 0;
    func_0x000107c610b4(auStack_5c30,auStack_4600,0xb78);
    func_0x00010178e4a8(auStack_5c30);
    func_0x000107c610b4(auStack_1800,auStack_5c30,0xb78);
    func_0x000107c61174(param_12);
    func_0x00010178e408(auStack_4600,auStack_3a88);
    func_0x00010422af04(auStack_3a88,param_3,param_4,param_1,param_2,0,5,4,0,param_12,auStack_22b8,
                        auStack_1800,&uStack_c88,uVar6,uVar5,&uStack_c60,0,0,0,1,0);
    func_0x0001042afc28(0);
    func_0x000107c610f8();
    func_0x0001042accb4(auStack_3a88);
    func_0x00010178e444(auStack_4600);
    func_0x000102d04ae4(auStack_50b8);
  }
  else {
    lVar3 = 4;
    func_0x0001084984a4(4,0,0);
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d04640);
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 102d04a74; end: 102d04a93;  */

void FUN_102d04a74(void)

{
  func_0x000107c61168(&PTR_PTR_1128a0598);
  return;
}



/* Entry: 102d04a94; end: 102d04b2b;  */

undefined8 FUN_102d04a94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dcbc80;
  func_0x0001000285a8(0x112dcbc80,&UNK_10d98ff10);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102d04b2c; end: 102d04b6f; +[AdTrackingAuthorization notDeterminedForAdsTrackingWithAdPromptUXType:adConfigProvider:] */

uint FUN_102d04b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_4);
  func_0x000102d04e44(param_3,param_4);
  func_0x000107c615e8(param_4);
  return (uint)param_3 & 1;
}



/* Entry: 102d04b70; end: 102d04bc7; +[AdTrackingAuthorization requestTrackingAuthorizationWithAdPromptUXType:adConfigProvider:adTrackingAuthorizationMetricsManager:] */

/* WARNING: Possible PIC construction at 0x000102d04bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d04bb4) */

void FUN_102d04b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  FUN_102d04ed8(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
  return;
}



/* Entry: 102d04bc8; end: 102d04c27; +[AdTrackingAuthorization requestTrackingAuthorizationWithAdPromptUXType:adProductType:adConfigProvider:adTrackingAuthorizationMetricsManager:] */

/* WARNING: Possible PIC construction at 0x000102d04c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d04c14) */

void FUN_102d04bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  FUN_102d051d4(param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_5);
  return;
}



/* Entry: 102d04c28; end: 102d04cdf;  */

void FUN_102d04c28(double param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  code *param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  if (param_3 != 0) {
    dVar2 = param_1;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c4101c();
    func_0x000107c4ba00(dVar2 - param_1,param_3);
  }
  if (param_2 < 3) {
    if (param_6 == (code *)0x0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    if (param_6 == (code *)0x0) {
      return;
    }
    uVar1 = 1;
  }
  (*param_6)(uVar1);
  return;
}



/* Entry: 102d04ce0; end: 102d04d1b;  */

void FUN_102d04ce0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102d04d1c; end: 102d04dd3; +[AdTrackingAuthorization requestTrackingAuthorizationWithAdPromptUXType:adProductType:adConfigProvider:adTrackingAuthorizationMetricsManager:completion:] */

/* WARNING: Possible PIC construction at 0x000102d04db8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d04dbc) */

void FUN_102d04d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_7 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1105c1ce8;
    func_0x000107c613fc(&UNK_1105c1ce8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_7;
    pcVar2 = FUN_102d05364;
  }
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  FUN_102d05048(param_3,param_4,param_5,param_6,pcVar2,puVar1);
  func_0x000101237350(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_5);
  return;
}



/* Entry: 102d04dd4; end: 102d04e0f; -[AdTrackingAuthorization init] */

void FUN_102d04dd4(undefined8 param_1)

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



/* Entry: 102d04e10; end: 102d04ed7;  */

void FUN_102d04e10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d04ed8; end: 102d05047;  */

void FUN_102d04ed8(undefined8 param_1,undefined *param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  if (param_2 != (undefined *)0x0) {
    if (param_2 == (undefined *)0x1) {
      if (param_3 == 0) {
        return;
      }
      uVar2 = param_3;
      func_0x000107c42570();
      if ((uVar2 & 1) == 0) {
        return;
      }
      func_0x000107c42570();
      if ((param_3 & 1) == 0) {
        return;
      }
    }
    else {
      if (param_2 != (undefined *)0x2) {
        puStack_70 = param_2;
        func_0x000107c60614(&UNK_110730ba0,&puStack_70,&UNK_110730ba0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05048);
        (*pcVar1)();
      }
      if (param_3 == 0) {
        return;
      }
      uVar2 = param_3;
      func_0x000107c4256c();
      if ((uVar2 & 1) == 0) {
        return;
      }
      func_0x000107c4256c();
      if ((int)param_3 == 0) {
        return;
      }
    }
    puVar3 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
    func_0x000107c61168();
    puVar4 = puVar3;
    func_0x000107c5ce48();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c4101c();
      puVar4 = &UNK_1105c1db0;
      func_0x000107c613fc(&UNK_1105c1db0,0x40,7);
      *(undefined8 *)(puVar4 + 0x10) = param_4;
      *(undefined **)(puVar4 + 0x18) = param_2;
      *(undefined8 *)(puVar4 + 0x20) = 10;
      *(undefined8 *)(puVar4 + 0x28) = param_1;
      *(undefined8 *)(puVar4 + 0x30) = 0;
      *(undefined8 *)(puVar4 + 0x38) = 0;
      uStack_50 = 0x102d053f4;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      pcStack_60 = FUN_102d04ce0;
      puStack_58 = &UNK_1105c1dc8;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      puVar4 = puStack_48;
      func_0x000107c615f0(param_4);
      func_0x000107c61574(puVar4);
      func_0x000107c50430(puVar3);
      func_0x000107c60bd0(ppuVar5);
    }
  }
  return;
}



/* Entry: 102d05048; end: 102d051d3;  */

void FUN_102d05048(undefined8 param_1,undefined *param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  if (param_2 != (undefined *)0x0) {
    if (param_2 == (undefined *)0x1) {
      if (param_4 == 0) {
        return;
      }
      uVar2 = param_4;
      func_0x000107c42570();
      if ((uVar2 & 1) == 0) {
        return;
      }
      func_0x000107c42570();
      if ((param_4 & 1) == 0) {
        return;
      }
    }
    else {
      if (param_2 != (undefined *)0x2) {
        puStack_80 = param_2;
        func_0x000107c60614(&UNK_110730ba0,&puStack_80,&UNK_110730ba0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d051d4);
        (*pcVar1)();
      }
      if (param_4 == 0) {
        return;
      }
      uVar2 = param_4;
      func_0x000107c4256c();
      if ((uVar2 & 1) == 0) {
        return;
      }
      func_0x000107c4256c();
      if ((int)param_4 == 0) {
        return;
      }
    }
    puVar3 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
    func_0x000107c61168();
    puVar4 = puVar3;
    func_0x000107c5ce48();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c4101c();
      puVar4 = &UNK_1105c1d60;
      func_0x000107c613fc(&UNK_1105c1d60,0x40,7);
      *(undefined8 *)(puVar4 + 0x10) = param_5;
      *(undefined **)(puVar4 + 0x18) = param_2;
      *(undefined8 *)(puVar4 + 0x20) = param_3;
      *(undefined8 *)(puVar4 + 0x28) = param_1;
      *(undefined8 *)(puVar4 + 0x30) = param_6;
      *(undefined8 *)(puVar4 + 0x38) = param_7;
      uStack_60 = 0x102d053f0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_102d04ce0;
      puStack_68 = &UNK_1105c1d78;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c615f0(param_5);
      func_0x000101237340(param_6,param_7);
      func_0x000107c61574(puVar4);
      func_0x000107c50430(puVar3);
      func_0x000107c60bd0(ppuVar5);
    }
  }
  return;
}



/* Entry: 102d051d4; end: 102d05343;  */

void FUN_102d051d4(undefined8 param_1,undefined *param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  if (param_2 != (undefined *)0x0) {
    if (param_2 == (undefined *)0x1) {
      if (param_4 == 0) {
        return;
      }
      uVar2 = param_4;
      func_0x000107c42570();
      if ((uVar2 & 1) == 0) {
        return;
      }
      func_0x000107c42570();
      if ((param_4 & 1) == 0) {
        return;
      }
    }
    else {
      if (param_2 != (undefined *)0x2) {
        puStack_70 = param_2;
        func_0x000107c60614(&UNK_110730ba0,&puStack_70,&UNK_110730ba0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05344);
        (*pcVar1)();
      }
      if (param_4 == 0) {
        return;
      }
      uVar2 = param_4;
      func_0x000107c4256c();
      if ((uVar2 & 1) == 0) {
        return;
      }
      func_0x000107c4256c();
      if ((int)param_4 == 0) {
        return;
      }
    }
    puVar3 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
    func_0x000107c61168();
    puVar4 = puVar3;
    func_0x000107c5ce48();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c4101c();
      puVar4 = &UNK_1105c1d10;
      func_0x000107c613fc(&UNK_1105c1d10,0x40,7);
      *(undefined8 *)(puVar4 + 0x10) = param_5;
      *(undefined **)(puVar4 + 0x18) = param_2;
      *(undefined8 *)(puVar4 + 0x20) = param_3;
      *(undefined8 *)(puVar4 + 0x28) = param_1;
      *(undefined8 *)(puVar4 + 0x30) = 0;
      *(undefined8 *)(puVar4 + 0x38) = 0;
      uStack_50 = 0x102d05378;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      pcStack_60 = FUN_102d04ce0;
      puStack_58 = &UNK_1105c1d28;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      puVar4 = puStack_48;
      func_0x000107c615f0(param_5);
      func_0x000107c61574(puVar4);
      func_0x000107c50430(puVar3);
      func_0x000107c60bd0(ppuVar5);
    }
  }
  return;
}



/* Entry: 102d05344; end: 102d05363;  */

void FUN_102d05344(void)

{
  func_0x000107c61168(&PTR_PTR_1128a0648);
  return;
}



/* Entry: 102d05364; end: 102d05397;  */

void FUN_102d05364(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102d05374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102d05398; end: 102d053cb;  */

void FUN_102d05398(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d053cc; end: 102d053f7;  */

void FUN_102d053cc(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  dVar5 = *(double *)(unaff_x20 + 0x28);
  pcVar2 = *(code **)(unaff_x20 + 0x30);
  if (lVar1 != 0) {
    dVar4 = dVar5;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c4101c();
    func_0x000107c4ba00(dVar4 - dVar5,lVar1);
  }
  if (param_1 < 3) {
    if (pcVar2 == (code *)0x0) {
      return;
    }
    uVar3 = 0;
  }
  else {
    if (param_1 != 3) {
      return;
    }
    if (pcVar2 == (code *)0x0) {
      return;
    }
    uVar3 = 1;
  }
  (*pcVar2)(uVar3);
  return;
}



/* Entry: 102d053f8; end: 102d05483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d053f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f0d680;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d688) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d690) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d05484; end: 102d0552b; -[AdWebviewPerformanceGrapheneLogger initWithGrapheneRegistry:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d05484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f0d680;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c615f0(param_4);
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + _DAT_112f0d688) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f0d690) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d0552c; end: 102d05633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0552c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f0d6c0);
  func_0x000107c4da88(uVar1,param_2,*(undefined8 *)(unaff_x20 + _DAT_112f0d690));
  func_0x000107c61180();
  puVar2 = &UNK_1105c1ea8;
  func_0x000107c613fc(&UNK_1105c1ea8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_102d05690;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x102d05a28;
  puStack_48 = &UNK_1105c1ec0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102d05634; end: 102d0568f;  */

void FUN_102d05634(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102d05698(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102d05690; end: 102d05697;  */

void FUN_102d05690(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102d05698(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102d05698; end: 102d05a73;  */

/* WARNING: Possible PIC construction at 0x000102d056fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d05744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d0578c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d057d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d0581c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d05864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d058ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d058f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d0593c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d05984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d059dc: Changing call to branch */

void FUN_102d05698(double param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = param_2;
  func_0x0001063bd72c();
  func_0x000107c61180();
  func_0x0001063bdc4c();
  if (param_1 < 0.0) {
    func_0x0001063bdc60(puVar2);
    if (param_1 < 0.0) {
      func_0x0001063bdc74(puVar2);
      if (param_1 < 0.0) {
        func_0x0001063bdc88(puVar2);
        if (param_1 < 0.0) {
          func_0x0001063bdc9c(puVar2);
          if (param_1 < 0.0) {
            func_0x0001063bdcb0(puVar2);
            if (param_1 < 0.0) {
              func_0x0001063bdcc4(puVar2);
              if (param_1 < 0.0) {
                func_0x0001063bdcd8(puVar2);
                if (param_1 < 0.0) {
                  func_0x0001063bdcec(puVar2);
                  if (param_1 < 0.0) {
                    func_0x0001063bdd00(puVar2);
                    if (param_1 < 0.0) {
                      func_0x0001063bd738(param_2);
                      func_0x000107c61180();
                      func_0x0001063be584();
                      if (param_1 < 0.0) {
                        func_0x000107c61170(puVar2);
                      }
                      else {
                        puVar2 = PTR_PTR_1126ca458;
                        func_0x000107c61168();
                        func_0x000107c5ba3c();
                        func_0x000107c61180();
                        if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a28);
                          (*pcVar1)();
                        }
                        func_0x0001063be584(param_2);
                        FUN_102d05ae0(puVar2);
                        param_2 = puVar2;
                      }
                    }
                    else {
                      param_2 = PTR_PTR_1126ca458;
                      func_0x000107c61168();
                      func_0x000107c3fb48();
                      func_0x000107c61180();
                      if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a24);
                        (*pcVar1)();
                      }
                      func_0x0001063bdd00(puVar2);
                      FUN_102d05ae0(param_2);
                    }
                  }
                  else {
                    param_2 = PTR_PTR_1126ca458;
                    func_0x000107c61168();
                    func_0x000107c3fb44();
                    func_0x000107c61180();
                    if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a20);
                      (*pcVar1)();
                    }
                    func_0x0001063bdcec(puVar2);
                    FUN_102d05ae0(param_2);
                  }
                }
                else {
                  param_2 = PTR_PTR_1126ca458;
                  func_0x000107c61168();
                  func_0x000107c3fb50();
                  func_0x000107c61180();
                  if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a1c);
                    (*pcVar1)();
                  }
                  func_0x0001063bdcd8(puVar2);
                  FUN_102d05ae0(param_2);
                }
              }
              else {
                param_2 = PTR_PTR_1126ca458;
                func_0x000107c61168();
                func_0x000107c3fb40();
                func_0x000107c61180();
                if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a18);
                  (*pcVar1)();
                }
                func_0x0001063bdcc4(puVar2);
                FUN_102d05ae0(param_2);
              }
            }
            else {
              param_2 = PTR_PTR_1126ca458;
              func_0x000107c61168();
              func_0x000107c42220();
              func_0x000107c61180();
              if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a14);
                (*pcVar1)();
              }
              func_0x0001063bdcb0(puVar2);
              FUN_102d05ae0(param_2);
            }
          }
          else {
            param_2 = PTR_PTR_1126ca458;
            func_0x000107c61168();
            func_0x000107c44f40();
            func_0x000107c61180();
            if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a10);
              (*pcVar1)();
            }
            func_0x0001063bdc9c(puVar2);
            FUN_102d05ae0(param_2);
          }
        }
        else {
          param_2 = PTR_PTR_1126ca458;
          func_0x000107c61168();
          func_0x000107c44f3c();
          func_0x000107c61180();
          if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a0c);
            (*pcVar1)();
          }
          func_0x0001063bdc88(puVar2);
          FUN_102d05ae0(param_2);
        }
      }
      else {
        param_2 = PTR_PTR_1126ca458;
        func_0x000107c61168();
        func_0x000107c4d53c();
        func_0x000107c61180();
        if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a08);
          (*pcVar1)();
        }
        func_0x0001063bdc74(puVar2);
        FUN_102d05ae0(param_2);
      }
    }
    else {
      param_2 = PTR_PTR_1126ca458;
      func_0x000107c61168();
      func_0x000107c3fb4c();
      func_0x000107c61180();
      if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a04);
        (*pcVar1)();
      }
      func_0x0001063bdc60(puVar2);
      FUN_102d05ae0(param_2);
    }
  }
  else {
    param_2 = PTR_PTR_1126ca458;
    func_0x000107c61168();
    func_0x000107c5de68();
    func_0x000107c61180();
    if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05a00);
      (*pcVar1)();
    }
    func_0x0001063bdc4c(puVar2);
    FUN_102d05ae0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102d05a74; end: 102d05a8f;  */

void FUN_102d05a74(long param_1,long param_2)

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



/* Entry: 102d05a90; end: 102d05adf; -[AdWebviewPerformanceGrapheneLogger beginWithPerformanceMetricsTracker:] */

/* WARNING: Possible PIC construction at 0x000102d05ac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d05acc) */

void FUN_102d05a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d0552c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d05ae0; end: 102d05bbf;  */

/* WARNING: Possible PIC construction at 0x000102d05b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d05b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d05b80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d05b34) */
/* WARNING: Removing unreachable block (ram,0x000102d05b58) */
/* WARNING: Removing unreachable block (ram,0x000102d05b38) */
/* WARNING: Removing unreachable block (ram,0x000102d05b84) */
/* WARNING: Removing unreachable block (ram,0x000102d05bac) */
/* WARNING: Removing unreachable block (ram,0x000102d05b88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d05ae0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f0d688);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3d55c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d05bc0; end: 102d05c1f; -[AdWebviewPerformanceGrapheneLogger init] */

void FUN_102d05bc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdWebviewPerformanceTrackerSwift.AdWebviewPerformanceGrapheneLogger",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05bec);
  (*pcVar1)();
}



/* Entry: 102d05c20; end: 102d05c67; -[AdWebviewPerformanceGrapheneLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d05c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d05c40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d05c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0d688));
  return;
}



/* Entry: 102d05c68; end: 102d05c87;  */

void FUN_102d05c68(void)

{
  func_0x000107c61168(&PTR_PTR_1128a06f8);
  return;
}



/* Entry: 102d05c88; end: 102d05d0b;  */

long FUN_102d05c88(double param_1)

{
  code *pcVar1;
  double dVar2;
  
  dVar2 = (double)(long)param_1;
  if (9.223372036854776e+18 <= dVar2) {
    return 0x7fffffffffffffff;
  }
  if (dVar2 <= -9.223372036854776e+18) {
    return -0x8000000000000000;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
    return 0;
  }
  if (-9.223372036854778e+18 < dVar2) {
    if (dVar2 < 9.223372036854776e+18) {
      return (long)dVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05d0c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d05d08);
  (*pcVar1)();
}



/* Entry: 102d05d0c; end: 102d05e67;  */

void FUN_102d05d0c(long param_1)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dStack_60;
  double dStack_58;
  
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x40);
  dVar5 = *(double *)(param_1 + 0x48);
  bVar2 = dVar4 == 0.0;
  dVar6 = *(double *)(param_1 + 0x50);
  if (dVar5 == 0.0) {
    dVar10 = *(double *)(param_1 + 0x58);
    dStack_60 = -1.0;
    dStack_58 = -1.0;
  }
  else {
    dStack_58 = -1.0;
    if (dVar6 != 0.0) {
      dStack_58 = dVar6 - dVar5;
    }
    dVar10 = *(double *)(param_1 + 0x58);
    dStack_60 = dVar10 - dVar5;
    if (dVar10 == 0.0) {
      dStack_60 = -1.0;
    }
  }
  dVar7 = *(double *)(param_1 + 0x10);
  if (dVar3 == 0.0) {
    bVar2 = true;
    dVar8 = -1.0;
    dVar9 = -1.0;
  }
  else {
    dVar8 = -1.0;
    if (*(double *)(param_1 + 0x70) != 0.0) {
      dVar8 = *(double *)(param_1 + 0x70) - dVar3;
    }
    dVar9 = -1.0;
    if (dVar10 != 0.0) {
      dVar9 = dVar10 - dVar3;
    }
  }
  bVar1 = true;
  if ((*(double *)(param_1 + 0x60) != 0.0) && (bVar1 = false, !NAN(dVar6))) {
    bVar1 = dVar6 == 0.0;
  }
  dVar10 = -1.0;
  if (!bVar1) {
    dVar10 = *(double *)(param_1 + 0x60) - dVar6;
  }
  bVar1 = true;
  if ((dVar5 != 0.0) && (bVar1 = false, !NAN(dVar4))) {
    bVar1 = dVar4 == 0.0;
  }
  dVar6 = -1.0;
  if (!bVar1) {
    dVar6 = dVar5 - dVar4;
  }
  dVar5 = -1.0;
  if (!bVar2) {
    dVar5 = dVar4 - dVar3;
  }
  bVar2 = true;
  if ((*(double *)(param_1 + 0x18) != 0.0) && (bVar2 = false, !NAN(dVar7))) {
    bVar2 = dVar7 == 0.0;
  }
  dVar3 = -1.0;
  if (!bVar2) {
    dVar3 = *(double *)(param_1 + 0x18) - dVar7;
  }
  func_0x000107c610f8(PTR_PTR_1126ca470);
  func_0x0001063bd774(dVar3,dVar5,dVar6,dStack_58,dStack_60,dVar10,dVar8,dVar9);
  return;
}



/* Entry: 102d05e68; end: 102d06217;  */

void FUN_102d05e68(double param_1,undefined8 param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  func_0x0001063beb60();
  dVar2 = param_1;
  func_0x0001063bead4(param_2);
  bVar1 = true;
  if ((dVar2 != 0.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 == 0.0;
  }
  dVar3 = -1.0;
  if (!bVar1) {
    dVar3 = dVar2 - param_1;
  }
  dVar2 = dVar3;
  func_0x0001063beb60(param_2);
  dVar4 = dVar2;
  func_0x0001063beb74(param_2);
  bVar1 = true;
  if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar2))) {
    bVar1 = dVar2 == 0.0;
  }
  dVar5 = -1.0;
  if (!bVar1) {
    dVar5 = dVar4 - dVar2;
  }
  dVar2 = dVar5;
  func_0x0001063beb60(param_2);
  dVar4 = dVar2;
  func_0x0001063beb10(param_2);
  bVar1 = true;
  if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar2))) {
    bVar1 = dVar2 == 0.0;
  }
  dVar6 = -1.0;
  if (!bVar1) {
    dVar6 = dVar4 - dVar2;
  }
  dVar2 = dVar6;
  func_0x0001063bead4(param_2);
  dVar4 = dVar2;
  func_0x0001063beafc(param_2);
  bVar1 = true;
  if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar2))) {
    bVar1 = dVar2 == 0.0;
  }
  dVar7 = -1.0;
  if (!bVar1) {
    dVar7 = dVar4 - dVar2;
  }
  dVar2 = dVar7;
  func_0x0001063beb10(param_2);
  dVar4 = dVar2;
  func_0x0001063beafc(param_2);
  bVar1 = true;
  if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar2))) {
    bVar1 = dVar2 == 0.0;
  }
  dVar8 = -1.0;
  if (!bVar1) {
    dVar8 = dVar4 - dVar2;
  }
  dVar2 = dVar8;
  func_0x0001063bead4(param_2);
  dVar4 = dVar2;
  func_0x0001063beb10(param_2);
  bVar1 = true;
  if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar2))) {
    bVar1 = dVar2 == 0.0;
  }
  dVar9 = -1.0;
  if (!bVar1) {
    dVar9 = dVar4 - dVar2;
  }
  dVar2 = dVar9;
  func_0x0001063bead4(param_2);
  dVar4 = dVar2;
  func_0x0001063beb24(param_2);
  bVar1 = true;
  if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar2))) {
    bVar1 = dVar2 == 0.0;
  }
  dVar10 = -1.0;
  if (!bVar1) {
    dVar10 = dVar4 - dVar2;
  }
  dVar2 = dVar10;
  func_0x0001063bead4(param_2);
  dVar4 = dVar2;
  func_0x0001063beb4c(param_2);
  bVar1 = true;
  if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar2))) {
    bVar1 = dVar2 == 0.0;
  }
  dVar11 = -1.0;
  if (!bVar1) {
    dVar11 = dVar4 - dVar2;
  }
  func_0x0001063beb10(param_2);
  func_0x0001063beb38(param_2);
  func_0x0001063beb10(param_2);
  func_0x0001063beb4c(param_2);
  func_0x0001063beb4c(param_2);
  func_0x0001063beafc(param_2);
  func_0x0001063bead4(param_2);
  func_0x0001063beb74(param_2);
  func_0x0001063beb74(param_2);
  func_0x0001063beb10(param_2);
  func_0x0001063beb10(param_2);
  func_0x0001063beb24(param_2);
  func_0x0001063beb24(param_2);
  func_0x0001063beb38(param_2);
  func_0x0001063beb38(param_2);
  func_0x0001063beb4c(param_2);
  func_0x0001063beb4c(param_2);
  func_0x0001063beae8(param_2);
  func_0x0001063beae8(param_2);
  func_0x0001063beafc(param_2);
  func_0x0001063beb88(param_2);
  func_0x0001063beb74(param_2);
  func_0x0001063beb88(param_2);
  func_0x0001063bead4(param_2);
  func_0x000107c610f8(PTR_PTR_1126ca478);
  func_0x0001063bdd14(dVar3,dVar5,dVar6,dVar7,dVar8,dVar9,dVar10,dVar11);
  return;
}



/* Entry: 102d06218; end: 102d06507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d06218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f0d6c0;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f0d6c8;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f0d6d0;
  puVar2 = PTR_PTR_1126ca460;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112f0d6d8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d6e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d6e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d6f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d6f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d700) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d708) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d710) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d718) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d720) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d730) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d738) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d740) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d748) = param_4;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}


