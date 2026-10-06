/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021a9d5c; end: 1021a9d7b;  */

void FUN_1021a9d5c(void)

{
  func_0x000107c61168(&PTR_PTR_112824038);
  return;
}



/* Entry: 1021a9d7c; end: 1021a9d7f;  */

void FUN_1021a9d7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5fbe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da67b90;
  func_0x000107c61520(&UNK_10da67b90,&UNK_1104da1e8);
  puRam0000000112e5fbe8 = puVar1;
  return;
}



/* Entry: 1021a9d80; end: 1021a9dbf;  */

void FUN_1021a9d80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5fbe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da67b90;
  func_0x000107c61520(&UNK_10da67b90,&UNK_1104da1e8);
  puRam0000000112e5fbe8 = puVar1;
  return;
}



/* Entry: 1021a9dc0; end: 1021a9deb;  */

void FUN_1021a9dc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1021a9dec();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001021a9e2c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1021a9dec; end: 1021a9e6b;  */

void FUN_1021a9dec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5fbf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da67c58;
  func_0x000107c61520(&UNK_10da67c58,&UNK_1104da1e8);
  puRam0000000112e5fbf0 = puVar1;
  return;
}



/* Entry: 1021a9e6c; end: 1021a9e6f;  */

void FUN_1021a9e6c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e5fc00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e5fc08;
  func_0x00010002969c(0x112e5fc08,&UNK_10da67c50);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e5fc00 = puVar2;
  return;
}



/* Entry: 1021a9e70; end: 1021a9ebf;  */

void FUN_1021a9e70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e5fc00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e5fc08;
  func_0x00010002969c(0x112e5fc08,&UNK_10da67c50);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e5fc00 = puVar2;
  return;
}



/* Entry: 1021a9ec0; end: 1021aa033;  */

undefined1  [16] FUN_1021a9ec0(void)

{
  return ZEXT816(0x1104da158);
}



/* Entry: 1021aa034; end: 1021aa03b; -[_TtC35SCSettingsClearLensesImplementationP33_CFC3BD0A2EECB58D4C4AF86B569B46C420SCLensClearAllPolicy isValidPersistentStore:] */

undefined8 FUN_1021aa034(void)

{
  return 0;
}



/* Entry: 1021aa03c; end: 1021aa07b; -[_TtC35SCSettingsClearLensesImplementationP33_CFC3BD0A2EECB58D4C4AF86B569B46C420SCLensClearAllPolicy init] */

void FUN_1021aa03c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  FUN_1021aa8e8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021aa07c; end: 1021aa0af;  */

void FUN_1021aa07c(void)

{
  FUN_1021aa8e8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021aa0b0; end: 1021aa123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021aa0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5fcd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e5fce0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e5fce8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021aa124; end: 1021aa1b3; -[SCLensClearDataHandler initWithLensPreferences:remoteApiDataProvider:ilcDataService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021aa124(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e5fcd8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e5fce0) = param_4;
  *(undefined8 *)(param_1 + _DAT_112e5fce8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1021aa1b4; end: 1021aa6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021aa1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar12;
  long unaff_x20;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  uStack_b0 = param_1;
  func_0x000107c5f7fc();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar13 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_b8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar14 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 + _DAT_112e5fcd8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112e5fce0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_112e5fce8);
      lStack_c0 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        uVar7 = 0;
        lStack_d8 = lVar6;
        FUN_1021aa8e8();
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar11 = uVar7;
        func_0x000107c60f34();
        lStack_c8 = lVar3;
        func_0x000107c60f38();
        puVar8 = &UNK_1104da330;
        func_0x000107c613fc(&UNK_1104da330,0x18,7);
        *(undefined8 *)(puVar8 + 0x10) = uVar11;
        uStack_80 = 0x1021aa944;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000b0c7c;
        puStack_88 = &UNK_1104da348;
        ppuVar10 = &puStack_a0;
        puStack_78 = puVar8;
        func_0x000107c60bc4(ppuVar10);
        puVar8 = puStack_78;
        uStack_e8 = param_2;
        lStack_d0 = lVar15;
        func_0x000107c61174();
        uStack_e0 = uVar7;
        func_0x000107c61174();
        func_0x000107c61574(puVar8);
        func_0x000107c3facc(lVar4);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(uVar7);
        func_0x000107c60f38(uVar11);
        puVar8 = &UNK_1104da380;
        func_0x000107c613fc(&UNK_1104da380,0x18,7);
        *(undefined8 *)(puVar8 + 0x10) = uVar11;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x1021aa94c;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f3aa0;
        puStack_88 = &UNK_1104da398;
        ppuVar10 = &puStack_a0;
        puStack_78 = puVar8;
        func_0x000107c60bc4(ppuVar10);
        puVar8 = puStack_78;
        func_0x000107c61174();
        func_0x000107c61574(puVar8);
        func_0x000107c3fafc(lStack_c0);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c60f38(uVar11);
        puVar8 = &UNK_1104da3d0;
        func_0x000107c613fc(&UNK_1104da3d0,0x18,7);
        *(undefined8 *)(puVar8 + 0x10) = uVar11;
        uStack_80 = 0x1021aa954;
        puStack_a0 = puVar1;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100ff4e10;
        puStack_88 = &UNK_1104da3e8;
        ppuVar10 = &puStack_a0;
        puStack_78 = puVar8;
        func_0x000107c60bc4(ppuVar10);
        puVar8 = puStack_78;
        func_0x000107c61174(uVar11);
        func_0x000107c61574(puVar8);
        lVar3 = lStack_d8;
        func_0x000107c416a4(lStack_d8);
        func_0x000107c60bd0(ppuVar10);
        uStack_80 = uStack_e8;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_1104da410;
        ppuVar10 = &puStack_a0;
        puStack_78 = (undefined *)param_3;
        func_0x000107c60bc4(ppuVar10);
        func_0x000107c6157c(param_3);
        func_0x000107c5f808(lVar14);
        puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001c7eec();
        uVar7 = 0x112d4af90;
        func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
        uVar9 = uVar7;
        func_0x0001001c7f30();
        func_0x000107c60264(puVar13,&puStack_a8,uVar7,uVar9,lVar2,param_3);
        func_0x000107c5ffb8(lVar14,puVar13,uStack_b0,ppuVar10);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(uStack_e0);
        func_0x000107c61170(uVar11);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lStack_c0);
        func_0x000107c615e8(lVar3);
        (**(code **)(lStack_d0 + 8))(puVar13,lVar2);
        pcVar12 = *(code **)(lStack_b8 + 8);
        lVar3 = lStack_c8;
        goto LAB_1021aa69c;
      }
      func_0x000107c615e8(lVar4);
      lVar4 = lStack_c0;
    }
    func_0x000107c615e8(lVar4);
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000b0c7c;
  puStack_88 = &UNK_1104da2f8;
  ppuVar10 = &puStack_a0;
  uStack_80 = param_2;
  puStack_78 = (undefined *)param_3;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c6157c(param_3);
  func_0x000107c5f808(lVar14);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar11 = uVar7;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar13,&puStack_a8,uVar7,uVar11,lVar2,param_3);
  func_0x000107c5ffe8(0,lVar14,puVar13,ppuVar10);
  func_0x000107c60bd0(ppuVar10);
  (**(code **)(lVar15 + 8))(puVar13,lVar2);
  pcVar12 = *(code **)(lStack_b8 + 8);
LAB_1021aa69c:
  (*pcVar12)(lVar14,lVar3);
  func_0x000107c61574(puStack_78);
  return;
}



/* Entry: 1021aa6cc; end: 1021aa72b; -[SCLensClearDataHandler init] */

void FUN_1021aa6cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsClearLensesImplementation.SCLensClearDataHandler",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021aa6f8);
  (*pcVar1)();
}



/* Entry: 1021aa72c; end: 1021aa773; -[SCLensClearDataHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021aa748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021aa74c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021aa72c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5fcd8));
  return;
}



/* Entry: 1021aa774; end: 1021aa8e7;  */

undefined * FUN_1021aa774(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = 0x112e5fd40;
  func_0x0001000285a8(0x112e5fd40,&UNK_10da67d70);
  lVar11 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e5fd48,&UNK_10da67d78);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar13 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar13 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      FUN_1021aa95c(param_1,puVar9);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021aa8e4);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar12 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      FUN_1021b1430();
      func_0x0001021aa9ac((long)puVar9 + (long)iVar4,
                          lVar12 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021aa8e8);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar13;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 1021aa8e8; end: 1021aa927;  */

void FUN_1021aa8e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128240e8);
  return;
}



/* Entry: 1021aa928; end: 1021aa95b;  */

void FUN_1021aa928(long param_1,long param_2)

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



/* Entry: 1021aa95c; end: 1021aa9ef;  */

undefined8 FUN_1021aa95c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e5fd40;
  func_0x0001000285a8(0x112e5fd40,&UNK_10da67d70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1021aa9f0; end: 1021aaa0f;  */

void FUN_1021aa9f0(long param_1,long param_2)

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



/* Entry: 1021aaa10; end: 1021aac7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1021aaa10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffff80;
  *(undefined8 *)(unaff_x20 + _DAT_112e5fd60) = 0;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112e5fd50) = puVar4;
  puVar4 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + _DAT_112e5fd58) = puVar4;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112e5fd68) = puVar4;
  FUN_1021ab1b4();
  puVar4 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c56f90();
  puVar6 = puVar5;
  func_0x000107c4aba4(puVar5);
  func_0x000107c61180();
  func_0x000107c52e0c(0);
  func_0x000107c61170(puVar6);
  lVar1 = _DAT_112e5fd50;
  func_0x000107c3d89c(puVar5);
  lVar2 = _DAT_112e5fd58;
  func_0x000107c3d89c(puVar5);
  lVar3 = _DAT_112e5fd68;
  func_0x000107c3d89c(puVar5);
  func_0x000107c5a050(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c5a050(*(undefined8 *)(puVar5 + lVar3));
  func_0x000107c5a050(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c59e34(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c5a050(*(undefined8 *)(puVar5 + lVar1));
  uVar7 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c61174(uVar7);
  uVar8 = uVar7;
  func_0x0001021b2014();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar4);
  func_0x000107c59e1c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c59a2c(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c55f80(*(undefined8 *)(puVar5 + lVar1));
  func_0x000107c5a100(*(undefined8 *)(puVar5 + lVar1));
  uVar8 = *(undefined8 *)(puVar5 + lVar1);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar8);
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  func_0x000107c59c78(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar4);
  FUN_1021aad04();
  func_0x000107c61170(puVar5);
  return puVar5;
}



/* Entry: 1021aac7c; end: 1021aac9b; -[_TtC35SCSettingsClearLensesImplementation22SCLensSettingsCellView initWithFrame:] */

void FUN_1021aac7c(void)

{
  FUN_1021aaa10();
  return;
}



/* Entry: 1021aac9c; end: 1021aacff; -[_TtC35SCSettingsClearLensesImplementation22SCLensSettingsCellView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021aac9c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112e5fd60) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "SCSettingsClearLensesImplementation/SCLensSettingsCell.swift",0x3c,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021aad00);
  (*pcVar1)();
}



/* Entry: 1021aad00; end: 1021aad03;  */

void FUN_1021aad00(void)

{
  return;
}



/* Entry: 1021aad04; end: 1021ab14f;  */

/* WARNING: Possible PIC construction at 0x0001021aad74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021aad78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021aad04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = _DAT_112e5fd60;
  lVar6 = *(long *)(unaff_x20 + _DAT_112e5fd60);
  if (lVar6 == 0) {
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 0x13;
    *(undefined8 *)(param_1 + 0x10) = 9;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e5fd68);
    uVar5 = uVar7;
    func_0x000107c44d9c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c40284(0xc020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar5 = uVar7;
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar2 = uVar7;
    func_0x000107c44d9c(uVar7);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    uVar5 = uVar7;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c40284(0x4020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    uVar5 = uVar7;
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c3f764();
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5fd50);
    uVar5 = uVar8;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c5ce8c(uVar7);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c40284(0x4020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e5fd58);
    uVar5 = uVar7;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c40284(0xc010000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    uVar5 = uVar8;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar2 = uVar7;
    func_0x000107c4acb0(uVar7);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c402a8(0xc010000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c3f764();
    func_0x000107c61180();
    uVar5 = uVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(param_1 + 0x58) = uVar5;
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c3f764();
    func_0x000107c61180();
    uVar5 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar5 = 0;
    FUN_1021abbb8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = param_1;
    func_0x000107c5fc48(param_1,uVar5);
    func_0x000107c3d048(puVar4);
    func_0x000107c61170(lVar6);
    lVar6 = *(long *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = param_1;
  }
  else {
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    FUN_1021abbb8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c61434(lVar6);
    func_0x000107c5fc48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar6);
  return;
}



/* Entry: 1021ab150; end: 1021ab15b;  */

void FUN_1021ab150(void)

{
  FUN_1021ab1b4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021ab15c; end: 1021ab1b3; -[_TtC35SCSettingsClearLensesImplementation22SCLensSettingsCellView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021ab178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021ab17c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab15c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5fd50));
  return;
}



/* Entry: 1021ab1b4; end: 1021ab1d3;  */

void FUN_1021ab1b4(void)

{
  func_0x000107c61168(&PTR_PTR_112824270);
  return;
}



/* Entry: 1021ab1d4; end: 1021ab1e3; -[_TtC35SCSettingsClearLensesImplementation18SCLensSettingsCell underlyingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e5fda0));
  return;
}



/* Entry: 1021ab1e4; end: 1021ab217; -[_TtC35SCSettingsClearLensesImplementation18SCLensSettingsCell setUnderlyingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e5fda0);
  *(undefined8 *)(param_1 + _DAT_112e5fda0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1021ab218; end: 1021ab273; -[_TtC35SCSettingsClearLensesImplementation18SCLensSettingsCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab218(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e5fd98);
  uStack_40 = *puVar1;
  uVar2 = puVar1[1];
  uStack_28 = puVar1[3];
  uStack_30 = puVar1[2];
  uStack_38 = uVar2;
  func_0x000107c61434(puVar1[3]);
  func_0x000107c61434(uVar2);
  func_0x000107c6061c(&uStack_40,&UNK_1104da4a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021ab274; end: 1021ab2df; -[_TtC35SCSettingsClearLensesImplementation18SCLensSettingsCell setViewModel:] */

void FUN_1021ab274(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_1021ab2e0(&uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021ab2e0; end: 1021ab41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab2e0(undefined1 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  uVar2 = 0;
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(param_1);
    param_1 = auStack_70;
  }
  else {
    func_0x000107c6147c(&uStack_90,auStack_70,PTR___sypN_11034f1a8 + 8,&UNK_1104da4a0,6);
    if ((uVar2 & 1) != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5fd98);
      uVar3 = puVar1[1];
      uVar4 = puVar1[3];
      *puVar1 = uStack_90;
      puVar1[1] = uStack_88;
      puVar1[2] = uStack_80;
      puVar1[3] = lStack_78;
      func_0x000107c61434(lStack_78);
      func_0x000107c61434(uStack_88);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(uVar4);
      func_0x000107c5d208();
      func_0x000107c61180();
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5fd50);
      if (lStack_78 == 0) {
        uStack_80 = 0;
      }
      else {
        func_0x000107c5fadc(uStack_80,lStack_78);
      }
      func_0x000107c59c6c(uVar3);
      func_0x000107c61170(uStack_80);
      FUN_1021aad04();
      func_0x000107c6142c(lStack_78);
      func_0x000107c6142c(uStack_88);
      func_0x000107c61170(unaff_x20);
    }
  }
  func_0x00010006e7f4(param_1);
  return;
}



/* Entry: 1021ab41c; end: 1021ab4ef; -[_TtC35SCSettingsClearLensesImplementation18SCLensSettingsCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab41c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  *(undefined8 *)(param_5 + _DAT_112e5fda8) = 0;
  *(undefined8 *)(param_5 + _DAT_112e5fdb0) = 0;
  lVar2 = param_5;
  FUN_1021ab1b4();
  func_0x000107c610f8();
  func_0x000107c469a4(param_1,param_2,param_3,param_4);
  *(long *)(param_5 + _DAT_112e5fda0) = lVar2;
  puVar1 = (undefined8 *)(param_5 + _DAT_112e5fd98);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  lVar3 = lVar2;
  FUN_1021ab99c();
  puVar1[2] = 0;
  puVar1[3] = 0;
  lStack_60 = param_5;
  lStack_58 = lVar3;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_60,
                      PTR_s_initWithFrame_underlyingView__1125e2e00,lVar2);
  return;
}



/* Entry: 1021ab4f0; end: 1021ab60f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab4f0(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  FUN_1021ab99c();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_prepareForReuse_112620008);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e5fda8);
  *(undefined8 *)(unaff_x20 + _DAT_112e5fda8) = 0;
  func_0x000107c615e8(uVar1);
  lVar3 = _DAT_112e5fdb0;
  uVar1 = 0;
  if (*(long *)(unaff_x20 + _DAT_112e5fdb0) != 0) {
    func_0x000107c3f474();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar3);
  }
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  func_0x000107c615e8(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_112e5fda0);
  uVar1 = *(undefined8 *)(lVar3 + _DAT_112e5fd58);
  pcStack_50 = FUN_1021aad00;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104da4b8;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61174();
  func_0x000107c56ea0(uVar1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c59c6c(*(undefined8 *)(lVar3 + _DAT_112e5fd50));
  func_0x000107c55258(*(undefined8 *)(lVar3 + _DAT_112e5fd68));
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1021ab610; end: 1021ab637; -[_TtC35SCSettingsClearLensesImplementation18SCLensSettingsCell prepareForReuse] */

void FUN_1021ab610(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021ab4f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021ab638; end: 1021ab7c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab638(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e5fda8);
  *(undefined8 *)(unaff_x20 + _DAT_112e5fda8) = param_1;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar6);
  puVar1 = &UNK_1104da4f0;
  func_0x000107c613fc(&UNK_1104da4f0,0x18,7);
  lVar5 = unaff_x20;
  func_0x000107c61614(puVar1 + 0x10);
  uStack_50 = 0x1021abbb0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101367914;
  puStack_58 = &UNK_1104da508;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c61174();
  lVar3 = unaff_x20;
  func_0x000107c417f0();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(lVar3);
  func_0x0001048b0ec8(0);
  func_0x000107c610f8();
  func_0x0001048b0b48(lVar4,lVar5,0x17);
  uVar6 = 0;
  FUN_1021abbb8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  func_0x000107c43124();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c60bd0(ppuVar2);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e5fdb0);
  *(undefined8 *)(unaff_x20 + _DAT_112e5fdb0) = param_1;
  func_0x000107c615e8(uVar6);
  return;
}



/* Entry: 1021ab7c4; end: 1021ab887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab7c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_2 != 0) {
    func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61618();
    if (param_5 != 0) {
      lVar2 = *(long *)(param_5 + _DAT_112e5fda0);
      func_0x000107c61174(param_2);
      func_0x000107c61174();
      func_0x000107c61170(param_5);
      uVar1 = *(undefined8 *)(lVar2 + _DAT_112e5fd68);
      func_0x000107c61174(uVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c55258(uVar1);
      func_0x000107c56a10(uVar1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar1);
    }
  }
  return;
}



/* Entry: 1021ab888; end: 1021ab8f7; -[_TtC35SCSettingsClearLensesImplementation18SCLensSettingsCell initWithFrame:underlyingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab888(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112e5fda8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5fdb0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000002c,0x800000010f06ae50,
                      "SCSettingsClearLensesImplementation/SCLensSettingsCell.swift",0x3c,2,0x9d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ab8f8);
  (*pcVar1)();
}



/* Entry: 1021ab8f8; end: 1021ab903;  */

void FUN_1021ab8f8(void)

{
  FUN_1021ab99c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021ab904; end: 1021ab933;  */

void FUN_1021ab904(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021ab934; end: 1021ab99b; -[_TtC35SCSettingsClearLensesImplementation18SCLensSettingsCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021ab980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021ab984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ab934(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e5fd98 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e5fd98 + 8));
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5fda0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e5fda8));
  return;
}



/* Entry: 1021ab99c; end: 1021ab9bb;  */

void FUN_1021ab99c(void)

{
  func_0x000107c61168(&PTR_PTR_112e5fdf8);
  return;
}



/* Entry: 1021ab9bc; end: 1021aba4b;  */

long FUN_1021ab9bc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1021aba4c; end: 1021abab7;  */

undefined8 * FUN_1021aba4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1021abab8; end: 1021abafb;  */

undefined8 * FUN_1021abab8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1021abafc; end: 1021abbb7;  */

int FUN_1021abafc(int *param_1,int param_2)

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



/* Entry: 1021abbb8; end: 1021abbf7;  */

void FUN_1021abbb8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1021abbf8; end: 1021abc13;  */

void FUN_1021abbf8(long param_1,long param_2)

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



/* Entry: 1021abc14; end: 1021abcbf;  */

void FUN_1021abc14(void)

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



/* Entry: 1021abcc0; end: 1021abeaf;  */

undefined * FUN_1021abcc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x000107c453e4();
  func_0x000107c566fc(0);
  func_0x000107c566f4(0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x000107c469ac(0,0,0,0);
  uVar3 = 0;
  FUN_1021b1be0(0,0x112d604d8,&PTR_PTR_1126b2780);
  uVar4 = 0x112e5ff58;
  uStack_48 = uVar3;
  func_0x0001000285a8(0x112e5ff58,&UNK_10da67df0);
  puVar5 = &uStack_48;
  func_0x000107c5fb18(puVar5,uVar4);
  func_0x00010257b0f8(uVar3,puVar5,uVar4,uVar3);
  func_0x000107c6142c(uVar4);
  uVar3 = 0;
  FUN_1021ab99c();
  uVar4 = 0x112e5ff50;
  uStack_48 = uVar3;
  func_0x0001000285a8(0x112e5ff50,&UNK_10da67de8);
  puVar5 = &uStack_48;
  func_0x000107c5fb18(puVar5,uVar4);
  func_0x00010257b0f8(uVar3,puVar5,uVar4,uVar3);
  func_0x000107c6142c(uVar4);
  uVar4 = 0x112d604c0;
  uVar6 = 0;
  FUN_1021b1be0(0,0x112d604c0,&PTR_PTR_1126b78f8);
  uVar7 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x000107c5faec(uVar7);
  uVar3 = 0x112d604c8;
  uStack_48 = uVar6;
  func_0x0001000285a8(0x112d604c8,&UNK_10d9269e8);
  puVar5 = &uStack_48;
  func_0x000107c5fb18(puVar5,uVar3);
  func_0x00010257b14c(uVar6,uVar7,uVar4,puVar5,uVar3,uVar6);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar3);
  func_0x000107c5a050(puVar2);
  func_0x000107c53824(0,0,0,0,puVar2);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1021abeb0; end: 1021ac233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1021abeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar5 = auStack_70;
  func_0x000107c610f8();
  lVar1 = _DAT_112e5fef0;
  lVar3 = unaff_x20;
  FUN_1021abcc0();
  *(long *)(unaff_x20 + lVar1) = lVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112e5fef8) = 0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112e5ff00) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112e5ff08;
  FUN_1021aa774();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ff10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ff18) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ff20) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ff28) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ff30) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ff38) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ff40) = param_7;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61154(auStack_70,puVar4);
  if (puVar5 != (undefined1 *)0x0) {
    func_0x000107c61174();
    func_0x000107c53dec();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021ac078);
  (*pcVar2)();
}



/* Entry: 1021ac234; end: 1021ac2f3; -[SCLensSettingsViewController initWithClearDataHandler:notificationPool:cloudService:ilcDataService:scanFromLensFeatureSettings:infoCardProvider:dynamicImageProviderServices:] */

void FUN_1021ac234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x0001021ac078(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 1021ac2f4; end: 1021ac3b3;  */

/* WARNING: Possible PIC construction at 0x0001021ac360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021ac364) */
/* WARNING: Removing unreachable block (ram,0x0001021ac388) */
/* WARNING: Removing unreachable block (ram,0x0001021ac39c) */

void FUN_1021ac2f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  uVar2 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c40b14(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1021ac3b4; end: 1021ac6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ac3b4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  FUN_1021b13e4();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5fef0);
  func_0x000107c53fcc(uVar8);
  func_0x000107c53e08(uVar8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ac6c4);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  func_0x000107c5a050(uVar8);
  lVar2 = 0x112d360b8;
  FUN_1021b09d0(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  uVar3 = uVar8;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ac6c8);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar6 = uVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar2 + 0x20) = uVar6;
  uVar3 = uVar8;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ac6cc);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar6 = uVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar2 + 0x28) = uVar6;
  uVar3 = uVar8;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar6 = uVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar2 + 0x30) = uVar6;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = unaff_x20;
      func_0x000107c50890(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      uVar3 = uVar8;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar4);
      *(undefined8 *)(lVar2 + 0x38) = uVar3;
      uVar8 = 0;
      FUN_1021b1be0(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = lVar2;
      func_0x000107c5fc48(lVar2,uVar8);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ac6d4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ac6d0);
  (*pcVar1)();
}



/* Entry: 1021ac6d4; end: 1021ac6fb; -[SCLensSettingsViewController viewDidLoad] */

void FUN_1021ac6d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021ac3b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021ac6fc; end: 1021ac763; -[SCLensSettingsViewController viewWillAppear:] */

void FUN_1021ac6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  FUN_1021b13e4();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_1021ac798();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021ac764; end: 1021ac797; -[SCLensSettingsViewController getTitle] */

void FUN_1021ac764(undefined8 param_1,undefined8 param_2)

{
  func_0x0001021b2028();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1021ac798; end: 1021acc63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ac798(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  func_0x000107c5f7fc();
  lStack_d8 = *(long *)(lVar4 + -8);
  lStack_f0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar4 = 0;
  puStack_f8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_e8 = *(long *)(lVar4 + -8);
  lStack_e0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  lVar4 = _DAT_112e5ff00;
  lStack_100 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
               (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112e5ff00,auStack_80,1,0);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined **)(unaff_x20 + lVar4) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar5);
  puVar6 = puVar1;
  FUN_1021aa774();
  lVar4 = _DAT_112e5ff08;
  func_0x000107c61428(unaff_x20 + _DAT_112e5ff08,auStack_98,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined **)(unaff_x20 + lVar4) = puVar6;
  func_0x000107c6142c(uVar5);
  *(undefined1 *)(unaff_x20 + _DAT_112e5fef8) = 1;
  func_0x000107c4fd7c(*(undefined8 *)(unaff_x20 + _DAT_112e5fef0));
  puVar6 = &UNK_1104daa18;
  puVar7 = puVar6;
  func_0x000107c613fc(&UNK_1104daa18,0x18,7);
  puVar8 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(puVar7 + 0x10) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c613fc(&UNK_1104daa18,0x18,7);
  *(undefined **)(puVar6 + 0x10) = puVar8;
  puVar8 = &UNK_1104daa40;
  func_0x000107c613fc(&UNK_1104daa40,0x18,7);
  *(undefined **)(puVar8 + 0x10) = puVar1;
  puVar9 = puVar8;
  func_0x000107c60f34();
  func_0x000107c60f38();
  lVar4 = *(long *)(unaff_x20 + _DAT_112e5ff20);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    puVar10 = &UNK_1104dab08;
    func_0x000107c613fc(&UNK_1104dab08,0x28,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined **)(puVar10 + 0x18) = puVar8;
    *(undefined **)(puVar10 + 0x20) = puVar7;
    pcStack_a8 = FUN_1021b1d14;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_1021acd28;
    puStack_b0 = &UNK_1104dab20;
    ppuVar11 = &puStack_c8;
    puStack_a0 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar10 = puStack_a0;
    func_0x000107c61174(puVar9);
    func_0x000107c6157c(puVar8);
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar10);
    func_0x000107c4b68c(lVar4);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c60f38(puVar9);
  lVar4 = *(long *)(unaff_x20 + _DAT_112e5ff28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    puVar10 = &UNK_1104daab8;
    func_0x000107c613fc(&UNK_1104daab8,0x28,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined **)(puVar10 + 0x18) = puVar8;
    *(undefined **)(puVar10 + 0x20) = puVar6;
    pcStack_a8 = (code *)0x1021b1cd4;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x1021acf24;
    puStack_b0 = &UNK_1104daad0;
    ppuVar11 = &puStack_c8;
    puStack_a0 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar10 = puStack_a0;
    func_0x000107c61174(puVar9);
    func_0x000107c6157c(puVar8);
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(puVar10);
    func_0x000107c44000(lVar4);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c615e8(lVar4);
  }
  uVar5 = 0;
  FUN_1021b1be0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar10 = &UNK_1104daa68;
  uStack_108 = uVar5;
  func_0x000107c613fc(&UNK_1104daa68,0x30,7);
  *(long *)(puVar10 + 0x10) = unaff_x20;
  *(undefined **)(puVar10 + 0x18) = puVar8;
  *(undefined **)(puVar10 + 0x20) = puVar7;
  *(undefined **)(puVar10 + 0x28) = puVar6;
  pcStack_a8 = FUN_1021b1cc8;
  puStack_c8 = puVar1;
  uStack_c0 = 0x42000000;
  pcStack_b8 = (code *)&UNK_1000f6b44;
  puStack_b0 = &UNK_1104daa80;
  ppuVar11 = &puStack_c8;
  puStack_a0 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar6);
  func_0x000107c61174();
  lVar4 = lStack_100;
  func_0x000107c5f808(lStack_100);
  puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar12 = uVar5;
  func_0x0001001c7f30();
  lVar3 = lStack_f0;
  puVar2 = puStack_f8;
  func_0x000107c60264(puStack_f8,&puStack_d0,uVar5,uVar12,lStack_f0,unaff_x20);
  uVar5 = uStack_108;
  func_0x000107c5ffb8(lVar4,puVar2,uStack_108,ppuVar11);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  (**(code **)(lStack_d8 + 8))(puVar2,lVar3);
  (**(code **)(lStack_e8 + 8))(lVar4,lStack_e0);
  puVar1 = puStack_a0;
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 1021acc64; end: 1021acd27;  */

void FUN_1021acc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  
  pcVar1 = "loadData()";
  func_0x0001000c10c0("loadData()");
  func_0x000107c61180();
  pcVar2 = pcVar1;
  func_0x000107c614f0();
  puVar3 = &UNK_1104dab58;
  func_0x000107c613fc(&UNK_1104dab58,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  func_0x000107c61434(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x00010090569c(0x1021b1fa8,puVar3,pcVar2);
  func_0x000107c615e8(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1021acd28; end: 1021acdaf;  */

void FUN_1021acd28(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fc54(param_2,PTR___sSSN_11034da80);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1021acdb0; end: 1021ace73;  */

void FUN_1021acdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  
  pcVar1 = "loadData()";
  func_0x0001000c10c0("loadData()");
  func_0x000107c61180();
  pcVar2 = pcVar1;
  func_0x000107c614f0();
  puVar3 = &UNK_1104dab80;
  func_0x000107c613fc(&UNK_1104dab80,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  func_0x000107c61434(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x00010090569c(0x1021b1d5c,puVar3,pcVar2);
  func_0x000107c615e8(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1021ace74; end: 1021acf87;  */

/* WARNING: Possible PIC construction at 0x0001021acef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021acef8) */

void FUN_1021ace74(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0x21,0);
    func_0x000107c61434(param_1);
    func_0x00010109a32c();
    func_0x000107c614a8(auStack_48);
    func_0x000107c61428(param_4 + 0x10,auStack_48,0x21,0);
    func_0x00010040448c(param_1);
    func_0x000107c614a8(auStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(param_2);
  return;
}



/* Entry: 1021acf88; end: 1021ad12f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021acf88(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(param_1 + _DAT_112e5ff38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = uVar8;
    func_0x000107c61434(uVar8);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar8);
    lVar3 = lVar1;
    func_0x000107c44100(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
    puVar4 = &UNK_1104da568;
    func_0x000107c613fc(&UNK_1104da568,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_1);
    puVar5 = &UNK_1104daba8;
    func_0x000107c613fc(&UNK_1104daba8,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    *(undefined8 *)(puVar5 + 0x20) = param_4;
    pcStack_68 = FUN_1021b1dac;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100bcda3c;
    puStack_70 = &UNK_1104dabc0;
    ppuVar6 = &puStack_88;
    puStack_60 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_60;
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar4);
    pcVar7 = "loadData()";
    func_0x0001000c10c0("loadData()");
    func_0x000107c61180();
    func_0x000107c5dc68(lVar3);
    func_0x000107c615e8(pcVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1021ad130; end: 1021ad247;  */

void FUN_1021ad130(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  long alStack_60 [3];
  undefined1 auStack_48 [24];
  
  if (param_2 != 0) {
    return;
  }
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      alStack_60[0] = 0;
      uVar2 = 0;
      FUN_1021b1be0(0,0x112dc0c68,&PTR_PTR_1126c8b58);
      func_0x000107c5fc50(param_1,alStack_60,uVar2);
      lVar1 = alStack_60[0];
      if (alStack_60[0] != 0) {
        func_0x000107c61428(param_4 + 0x10,alStack_60,0,0);
        uVar3 = *(undefined8 *)(param_4 + 0x10);
        func_0x000107c61428(param_5 + 0x10,auStack_78,0,0);
        uVar2 = *(undefined8 *)(param_5 + 0x10);
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uVar2);
        FUN_1021ad248(lVar1,uVar3,uVar2);
        func_0x000107c61170(param_3);
        func_0x000107c6142c(lVar1);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar2);
        return;
      }
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1021ad248; end: 1021ada53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ad248(undefined *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  long extraout_x8;
  long lVar19;
  long lVar20;
  long extraout_x8_00;
  undefined8 *puVar21;
  long lVar22;
  long extraout_x8_01;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  ulong uVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined *puVar31;
  ulong auStack_180 [5];
  undefined1 uStack_12c;
  undefined1 auStack_b0 [80];
  
  lVar5 = 0x112e5ff48;
  puVar10 = &UNK_10da67de0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar25 = (long)auStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_180[1] = lVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar25 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar25 - extraout_x12_00;
  lVar5 = 0;
  FUN_1021b1430();
  lVar20 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  uVar26 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  auStack_180[0] = uVar26;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (undefined8 *)(uVar26 - extraout_x12_01);
  puVar6 = (undefined *)0x0;
  func_0x000107c5ede0();
  lVar22 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar27 = (long)puVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar27 - extraout_x12_02;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar29 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    lVar2 = _DAT_112e5ff00;
  }
  else {
    puVar29 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar29 = param_1;
    }
    func_0x000107c60480();
    lVar2 = _DAT_112e5ff00;
  }
  _DAT_112e5ff00 = lVar2;
  if (puVar29 != (undefined *)0x0) {
    puVar31 = (undefined *)0x0;
    auStack_180[3] = *(undefined8 *)(unaff_x20 + _DAT_112e5fef0);
    auStack_180[2] = _DAT_112e5fef8;
    auStack_180[4] = _DAT_112e5ff08;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar31) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1021ada0c);
          (*pcVar3)();
        }
        puVar7 = *(undefined **)(param_1 + (long)puVar31 * 8 + 0x20);
        func_0x000107c61174();
        puVar14 = puVar10;
      }
      else {
        puVar7 = puVar31;
        puVar14 = param_1;
        FUN_101ceafa0();
      }
      bVar4 = SCARRY8((long)puVar31,1);
      puVar31 = puVar31 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1021ada08);
        (*pcVar3)();
      }
      puVar8 = puVar7;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      puVar10 = puVar14;
      if (puVar8 == (undefined *)0x0) {
LAB_1021ad478:
        func_0x000107c61170(puVar7);
      }
      else {
        puVar9 = puVar8;
        func_0x000107c5faec();
        puVar17 = puVar14;
        func_0x000107c61170(puVar8);
        puVar10 = puVar7;
        func_0x000107c4b260();
        func_0x000107c61180();
        if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1021ada48);
          (*pcVar3)();
        }
        puVar8 = puVar10;
        func_0x000107c4f5f8();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        if (puVar8 == (undefined *)0x0) {
          func_0x000107c6142c(puVar14);
          puVar10 = puVar17;
          goto LAB_1021ad478;
        }
        puVar11 = puVar8;
        func_0x000107c5faec();
        puVar10 = puVar17;
        func_0x000107c61170(puVar8);
        puVar8 = puVar7;
        func_0x000107c4b260();
        func_0x000107c61180();
        if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1021ada4c);
          (*pcVar3)();
        }
        puVar12 = puVar8;
        func_0x000107c44fc0();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        if (puVar12 == (undefined *)0x0) {
          func_0x000107c6142c(puVar17);
        }
        else {
          func_0x000107c5edb4(lVar27,puVar12);
          func_0x000107c61170(puVar12);
          (**(code **)(lVar22 + 0x20))(lVar23,lVar27,puVar6);
          puVar10 = puVar6;
          if (*(long *)(param_2 + 0x10) != 0) {
            func_0x000107c6068c(auStack_b0,*(undefined8 *)(param_2 + 0x28));
            puVar13 = auStack_b0;
            func_0x000107c5fb58(puVar13,puVar9,puVar14);
            func_0x000107c606a8();
            uVar26 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
            uVar28 = (ulong)puVar13 & (uVar26 ^ 0xffffffffffffffff);
            if ((*(ulong *)(param_2 + 0x38 + (uVar28 >> 6) * 8) >> (uVar28 & 0x3f) & 1) != 0) {
              do {
                puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar28 * 0x10);
                puVar8 = (undefined *)*puVar1;
                puVar12 = (undefined *)puVar1[1];
                if ((puVar8 == puVar9 && puVar12 == puVar14) ||
                   (func_0x000107c605b8(puVar8,puVar12,puVar9,puVar14,0), ((ulong)puVar8 & 1) != 0))
                {
                  uStack_12c = 0;
                  goto LAB_1021ad754;
                }
                uVar28 = uVar28 + 1 & ~uVar26;
              } while ((*(ulong *)(param_2 + 0x38 + (uVar28 >> 6) * 8) >> (uVar28 & 0x3f) & 1) != 0)
              ;
            }
          }
          if (*(long *)(param_3 + 0x10) != 0) {
            func_0x000107c6068c(auStack_b0,*(undefined8 *)(param_3 + 0x28));
            puVar13 = auStack_b0;
            func_0x000107c5fb58(puVar13,puVar9,puVar14);
            func_0x000107c606a8();
            uVar26 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
            uVar28 = (ulong)puVar13 & (uVar26 ^ 0xffffffffffffffff);
            if ((*(ulong *)(param_3 + 0x38 + (uVar28 >> 6) * 8) >> (uVar28 & 0x3f) & 1) != 0) {
LAB_1021ad6ac:
              puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar28 * 0x10);
              puVar8 = (undefined *)*puVar1;
              puVar12 = (undefined *)puVar1[1];
              if ((puVar8 != puVar9 || puVar12 != puVar14) &&
                 (func_0x000107c605b8(puVar8,puVar12,puVar9,puVar14,0), ((ulong)puVar8 & 1) == 0))
              goto code_r0x0001021ad6dc;
              uStack_12c = 1;
LAB_1021ad754:
              func_0x000107c6142c(puVar14);
              puVar14 = puVar7;
              func_0x000107c4b1dc();
              func_0x000107c61180();
              if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1021ada54);
                (*pcVar3)();
              }
              puVar8 = puVar14;
              func_0x000107c5faec();
              func_0x000107c61170(puVar14);
              func_0x000107c61428(unaff_x20 + lVar2,auStack_b0,0x21,0);
              uVar30 = *(ulong *)(unaff_x20 + lVar2);
              uVar26 = uVar30;
              func_0x000107c61558();
              *(ulong *)(unaff_x20 + lVar2) = uVar30;
              uVar28 = uVar30;
              if ((uVar26 & 1) == 0) {
                uVar28 = 0;
                func_0x0001000d182c(0,*(long *)(uVar30 + 0x10) + 1,1,uVar30);
                *(ulong *)(unaff_x20 + lVar2) = uVar28;
              }
              uVar26 = *(ulong *)(uVar28 + 0x10);
              uVar30 = uVar28;
              if (*(ulong *)(uVar28 + 0x18) >> 1 <= uVar26) {
                uVar30 = (ulong)(1 < *(ulong *)(uVar28 + 0x18));
                func_0x0001000d182c(uVar30,uVar26 + 1,1,uVar28);
              }
              *(ulong *)(uVar30 + 0x10) = uVar26 + 1;
              lVar18 = uVar30 + uVar26 * 0x10;
              *(undefined **)(lVar18 + 0x20) = puVar8;
              *(undefined **)(lVar18 + 0x28) = puVar12;
              *(ulong *)(unaff_x20 + lVar2) = uVar30;
              func_0x000107c614a8(auStack_b0);
              lVar18 = lVar23;
              (**(code **)(lVar22 + 0x10))
                        ((long)puVar21 + (long)*(int *)(lVar5 + 0x14),lVar23,puVar6);
              *puVar21 = puVar11;
              puVar21[1] = puVar17;
              *(undefined1 *)((long)puVar21 + (long)*(int *)(lVar5 + 0x18)) = uStack_12c;
              puVar14 = puVar7;
              func_0x000107c4b1dc();
              func_0x000107c61180();
              if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1021ada50);
                (*pcVar3)();
              }
              puVar8 = puVar14;
              func_0x000107c5faec();
              func_0x000107c61170(puVar14);
              func_0x0001021b14bc(puVar21,lVar19);
              (**(code **)(lVar20 + 0x38))(lVar19,0,1,lVar5);
              uVar28 = auStack_180[4];
              func_0x000107c61428(unaff_x20 + auStack_180[4],auStack_b0,0x21,0);
              func_0x0001021b1a54(lVar19,lVar25);
              lVar15 = lVar25;
              (**(code **)(lVar20 + 0x30))(lVar25,1,lVar5);
              uVar26 = auStack_180[0];
              if ((int)lVar15 == 1) {
                func_0x0001021b1474();
                uVar26 = auStack_180[1];
                FUN_1021b0ad0(auStack_180[1],puVar8,lVar18);
                func_0x000107c6142c(lVar18);
                func_0x0001021b1474(uVar26);
              }
              else {
                func_0x0001021aa9ac(lVar25,auStack_180[0]);
                uVar16 = *(undefined8 *)(unaff_x20 + uVar28);
                func_0x000107c61558(uVar16);
                uVar24 = *(undefined8 *)(unaff_x20 + uVar28);
                *(undefined8 *)(unaff_x20 + uVar28) = 0x8000000000000000;
                func_0x0001021b0be8(uVar26,puVar8,lVar18,uVar16);
                func_0x000107c6142c(lVar18);
                *(undefined8 *)(unaff_x20 + uVar28) = uVar24;
              }
              func_0x000107c614a8(auStack_b0);
              *(undefined1 *)(unaff_x20 + auStack_180[2]) = 0;
              func_0x000107c4fd7c(auStack_180[3]);
              func_0x000107c61170(puVar7);
              func_0x0001021b1500(puVar21);
              (**(code **)(lVar22 + 8))(lVar23);
              goto LAB_1021ad480;
            }
          }
LAB_1021ad6f8:
          func_0x000107c6142c(puVar14);
          (**(code **)(lVar22 + 8))(lVar23);
          puVar14 = puVar17;
        }
        func_0x000107c6142c(puVar14);
        func_0x000107c61170(puVar7);
      }
LAB_1021ad480:
    } while (puVar31 != puVar29);
  }
  return;
code_r0x0001021ad6dc:
  uVar28 = uVar28 + 1 & ~uVar26;
  if ((*(ulong *)(param_3 + 0x38 + (uVar28 >> 6) * 8) >> (uVar28 & 0x3f) & 1) == 0)
  goto LAB_1021ad6f8;
  goto LAB_1021ad6ac;
}



/* Entry: 1021ada54; end: 1021adaaf; -[SCLensSettingsViewController init] */

void FUN_1021ada54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsClearLensesImplementation.SCLensSettingsViewController",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ada80);
  (*pcVar1)();
}



/* Entry: 1021adab0; end: 1021adb67; -[SCLensSettingsViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021adacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021adafc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021adb1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021adb3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021adb20) */
/* WARNING: Removing unreachable block (ram,0x0001021adb00) */
/* WARNING: Removing unreachable block (ram,0x0001021adad0) */
/* WARNING: Removing unreachable block (ram,0x0001021adb40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021adab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5fef0));
  return;
}



/* Entry: 1021adb68; end: 1021ae117;  */

void FUN_1021adb68(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = param_1;
  func_0x000107c5eff4();
  if ((puVar1 == (undefined *)0x0) && (func_0x000107c5efe4(), puVar1 == (undefined *)0x0)) {
    func_0x0001021b203c();
    uVar2 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x1021b2000;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de205c;
    puStack_88 = &UNK_1104da5a8;
    ppuVar3 = &puStack_a0;
    func_0x000107c60bc4(ppuVar3);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar1);
    puVar6 = puStack_78;
    func_0x000107c61574(puStack_78);
    func_0x0001021b2014();
    puVar1 = &UNK_1104da568;
    func_0x000107c613fc(&UNK_1104da568,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    func_0x000107c6157c(puVar1);
    uVar10 = uVar2;
    func_0x000107c5fadc(puVar6,uVar2);
    func_0x000107c6142c(uVar2);
    uStack_80 = 0x1021b1428;
    puStack_a0 = puVar7;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de205c;
    puStack_88 = &UNK_1104da5d0;
    ppuVar3 = &puStack_a0;
    puStack_78 = puVar1;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar6);
    puVar7 = puStack_78;
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar7);
    func_0x0001021b2050();
    puVar6 = puVar7;
    uVar2 = uVar10;
    func_0x0001021b2070();
    lVar8 = 0x112d360a8;
    FUN_1021b09d0(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 5;
    *(undefined8 *)(lVar8 + 0x10) = 2;
    *(undefined **)(lVar8 + 0x20) = puVar4;
    *(undefined **)(lVar8 + 0x28) = puVar5;
    puVar1 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c61174(puVar4);
    func_0x000107c61174(puVar5);
    func_0x000107c5fadc(puVar7,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c5fadc(puVar6,uVar2);
    func_0x000107c6142c(uVar2);
    uVar2 = 0;
    FUN_1021b1be0(0,0x112d360a8,&PTR_PTR_1126aed70);
    lVar9 = lVar8;
    func_0x000107c5fc48(lVar8,uVar2);
    func_0x000107c61574(lVar8);
  }
  else {
    func_0x000107c5eff4();
    if ((puVar1 != (undefined *)0x1) || (func_0x000107c5efe4(), puVar1 != (undefined *)0x0))
    goto LAB_1021ae0d4;
    func_0x0001021b203c();
    uVar2 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x1021b2004;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de205c;
    puStack_88 = &UNK_1104da530;
    ppuVar3 = &puStack_a0;
    func_0x000107c60bc4(ppuVar3);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar1);
    puVar6 = puStack_78;
    func_0x000107c61574(puStack_78);
    func_0x0001021b2014();
    puVar1 = &UNK_1104da568;
    func_0x000107c613fc(&UNK_1104da568,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    func_0x000107c6157c(puVar1);
    uVar10 = uVar2;
    func_0x000107c5fadc(puVar6,uVar2);
    func_0x000107c6142c(uVar2);
    uStack_80 = 0x1021b1420;
    puStack_a0 = puVar7;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de205c;
    puStack_88 = &UNK_1104da580;
    ppuVar3 = &puStack_a0;
    puStack_78 = puVar1;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar6);
    puVar7 = puStack_78;
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar7);
    func_0x0001021b2050();
    puVar6 = puVar7;
    uVar2 = uVar10;
    func_0x0001021b213c();
    lVar8 = 0x112d360a8;
    FUN_1021b09d0(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 5;
    *(undefined8 *)(lVar8 + 0x10) = 2;
    *(undefined **)(lVar8 + 0x20) = puVar4;
    *(undefined **)(lVar8 + 0x28) = puVar5;
    puVar1 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c61174(puVar4);
    func_0x000107c61174(puVar5);
    func_0x000107c5fadc(puVar7,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c5fadc(puVar6,uVar2);
    func_0x000107c6142c(uVar2);
    uVar2 = 0;
    FUN_1021b1be0(0,0x112d360a8,&PTR_PTR_1126aed70);
    lVar9 = lVar8;
    func_0x000107c5fc48(lVar8,uVar2);
    func_0x000107c61574(lVar8);
  }
  func_0x000107c48d50(puVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar9);
  func_0x000107c4f018(unaff_x20);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
LAB_1021ae0d4:
  func_0x000107c5efd4();
  func_0x000107c41814(param_1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1021ae118; end: 1021ae213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ae118(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112e5ff10);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(lVar1);
    uVar2 = 0;
    FUN_1021b1be0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar3 = &UNK_1104da860;
    func_0x000107c613fc(&UNK_1104da860,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(long *)(puVar3 + 0x18) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(param_2);
    FUN_1021aa1b4(uVar2,FUN_1021b1c20,puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 1021ae214; end: 1021ae2b3;  */

void FUN_1021ae214(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uStack_40 = 0x1021b1c28;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104da878;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1021ae2b4; end: 1021ae317;  */

void FUN_1021ae2b4(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = auStack_38;
  func_0x000107c61428(param_1 + 0x10,puVar1,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001021b2208();
    FUN_1021ac2f4();
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar1);
  }
  return;
}



/* Entry: 1021ae318; end: 1021ae9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ae318(undefined8 param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long extraout_x12;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  uint uStack_e4;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = 0;
  func_0x000107c5f7fc();
  lVar25 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar26 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5f824();
  lVar28 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar28 + 0x40));
  lVar29 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_1021b1430();
  lStack_e0 = *(long *)(lVar7 + -8);
  puStack_d8 = (undefined *)lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar7 = lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar8 = *(long *)(param_2 + _DAT_112e5ff20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      lVar9 = *(long *)(param_2 + _DAT_112e5ff28);
      lStack_f0 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 == 0) {
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lStack_f0);
      }
      else {
        lVar8 = *(long *)(param_2 + _DAT_112e5ff30);
        uStack_138 = param_1;
        lStack_130 = lVar29;
        lStack_128 = lVar28;
        lStack_120 = lVar6;
        lStack_118 = lVar26;
        lStack_110 = lVar25;
        lStack_108 = lVar5;
        lStack_100 = lVar9;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar8 != 0) {
          func_0x000107c54fe4();
          func_0x000107c615e8();
        }
        func_0x000107c60f34();
        lVar5 = _DAT_112e5ff08;
        lStack_f8 = lVar8;
        func_0x000107c61428(param_2 + _DAT_112e5ff08,auStack_98,0,0);
        lVar5 = *(long *)(param_2 + lVar5);
        uVar21 = 1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
        uVar27 = 0xffffffffffffffff;
        if ((*(byte *)(lVar5 + 0x20) & 0x3f) < 6) {
          uVar27 = ~(-1L << (uVar21 & 0x3f));
        }
        uVar27 = uVar27 & *(ulong *)(lVar5 + 0x40);
        lStack_140 = param_2;
        func_0x000107c61434(lVar5);
        uVar19 = 0;
        lVar6 = 0;
        uVar20 = 0;
LAB_1021ae53c:
        do {
          uStack_e4 = uVar20 ^ 1;
          uVar23 = uVar19;
          while( true ) {
            while (uVar27 == 0) {
              bVar4 = SCARRY8(lVar6,1);
              lVar6 = lVar6 + 1;
              if (bVar4) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1021ae9b8);
                (*pcVar3)();
              }
              uVar24 = uVar20;
              uVar22 = uVar23;
              if ((long)(uVar21 + 0x3f >> 6) <= lVar6) goto LAB_1021ae61c;
              uVar27 = ((ulong *)(lVar5 + 0x40))[lVar6];
            }
            uVar2 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
            uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
            uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            uVar27 = uVar27 - 1 & uVar27;
            func_0x0001021b14bc(*(long *)(lVar5 + 0x38) +
                                *(long *)(lStack_e0 + 0x48) *
                                (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar6 << 6),
                                lVar7 - extraout_x12);
            func_0x0001021aa9ac(lVar7 - extraout_x12,lVar7);
            cVar1 = *(char *)(lVar7 + *(int *)((long)puStack_d8 + 0x18));
            func_0x0001021b1500(lVar7);
            if (cVar1 == '\0') {
              uVar19 = 0;
              uVar20 = 1;
              uVar22 = 1;
              uVar24 = 1;
              if (uVar23 != 0) goto LAB_1021ae61c;
              goto LAB_1021ae53c;
            }
            if (cVar1 == '\x01') break;
            uVar19 = uVar20 & uVar23;
            uVar23 = uStack_e4 & uVar23;
            if (uVar19 != 0) {
              uVar24 = 1;
              uVar22 = 1;
              goto LAB_1021ae61c;
            }
          }
          uVar19 = 1;
          bVar4 = uVar20 == 0;
          uVar20 = 0;
        } while (bVar4);
        uVar24 = 1;
        uVar22 = 1;
LAB_1021ae61c:
        func_0x000107c61574(lVar5);
        puVar11 = &UNK_1104da8b0;
        puVar10 = puVar11;
        func_0x000107c613fc(&UNK_1104da8b0,0x11,7);
        puVar10[0x10] = 0;
        func_0x000107c613fc(&UNK_1104da8b0,0x11,7);
        lVar5 = lStack_f8;
        puVar11[0x10] = 0;
        puVar16 = PTR___NSConcreteStackBlock_11034bd00;
        if (uVar24 != 0) {
          func_0x000107c60f38(lStack_f8);
          puVar12 = &UNK_1104da978;
          func_0x000107c613fc(&UNK_1104da978,0x20,7);
          *(undefined **)(puVar12 + 0x10) = puVar10;
          *(long *)(puVar12 + 0x18) = lVar5;
          pcStack_a8 = (code *)0x1021b1ff4;
          puStack_c8 = puVar16;
          uStack_c0 = 0x42000000;
          puStack_b8 = &UNK_100ff4e10;
          puStack_b0 = &UNK_1104da990;
          ppuVar13 = &puStack_c8;
          puStack_a0 = puVar12;
          func_0x000107c60bc4(ppuVar13);
          puVar12 = puStack_a0;
          func_0x000107c6157c(puVar10);
          func_0x000107c61174(lVar5);
          func_0x000107c61574(puVar12);
          func_0x000107c3fa6c(lStack_f0);
          func_0x000107c60bd0(ppuVar13);
        }
        lVar6 = lStack_f8;
        lVar5 = lStack_140;
        if (uVar22 != 0) {
          func_0x000107c60f38(lStack_f8);
          puVar12 = &UNK_1104da928;
          func_0x000107c613fc(&UNK_1104da928,0x20,7);
          *(undefined **)(puVar12 + 0x10) = puVar11;
          *(long *)(puVar12 + 0x18) = lVar6;
          pcStack_a8 = FUN_1021b1c3c;
          puStack_c8 = puVar16;
          uStack_c0 = 0x42000000;
          puStack_b8 = &UNK_100ff4e10;
          puStack_b0 = &UNK_1104da940;
          ppuVar13 = &puStack_c8;
          puStack_a0 = puVar12;
          func_0x000107c60bc4(ppuVar13);
          puVar12 = puStack_a0;
          func_0x000107c61174(lVar6);
          func_0x000107c6157c(puVar11);
          func_0x000107c61574(puVar12);
          func_0x000107c41698(lStack_100);
          func_0x000107c60bd0(ppuVar13);
        }
        uVar14 = 0;
        FUN_1021b1be0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        func_0x000107c5ffdc();
        puVar12 = &UNK_1104da568;
        func_0x000107c613fc(&UNK_1104da568,0x18,7);
        func_0x000107c61614(puVar12 + 0x10,lVar5);
        puVar15 = &UNK_1104da8d8;
        func_0x000107c613fc(&UNK_1104da8d8,0x30,7);
        uVar17 = uStack_138;
        *(undefined8 *)(puVar15 + 0x10) = uStack_138;
        *(undefined **)(puVar15 + 0x18) = puVar12;
        *(undefined **)(puVar15 + 0x20) = puVar10;
        *(undefined **)(puVar15 + 0x28) = puVar11;
        pcStack_a8 = (code *)0x1021b1c30;
        puStack_c8 = puVar16;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_1000f6b44;
        puStack_b0 = &UNK_1104da8f0;
        ppuVar13 = &puStack_c8;
        puStack_a0 = puVar15;
        func_0x000107c60bc4(ppuVar13);
        func_0x000107c6157c(puVar10);
        func_0x000107c6157c(puVar11);
        func_0x000107c61174(uVar17);
        puVar16 = puVar12;
        func_0x000107c6157c(puVar12);
        lVar6 = lStack_130;
        puStack_d8 = puVar11;
        func_0x000107c5f808(lStack_130);
        puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001c7eec();
        uVar17 = 0x112d4af90;
        func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
        uVar18 = uVar17;
        func_0x0001001c7f30();
        lVar25 = lStack_108;
        lVar7 = lStack_118;
        func_0x000107c60264(lStack_118,&puStack_d0,uVar17,uVar18,lStack_108,puVar16);
        lVar26 = lStack_f8;
        func_0x000107c5ffb8(lVar6,lVar7,uVar14,ppuVar13);
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar26);
        func_0x000107c615e8(lStack_f0);
        func_0x000107c615e8(lStack_100);
        func_0x000107c61170(uVar14);
        (**(code **)(lStack_110 + 8))(lVar7,lVar25);
        (**(code **)(lStack_128 + 8))(lVar6,lStack_120);
        puVar11 = puStack_a0;
        func_0x000107c61574(puVar10);
        func_0x000107c61574(puStack_d8);
        func_0x000107c61574(puVar12);
        func_0x000107c61574(puVar11);
      }
    }
  }
  return;
}



/* Entry: 1021ae9b8; end: 1021aea0f;  */

void FUN_1021ae9b8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
    *(undefined1 *)(param_2 + 0x10) = 1;
  }
  func_0x000107c60f3c(param_3);
  return;
}



/* Entry: 1021aea10; end: 1021aeaeb;  */

void FUN_1021aea10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1104da9c8;
  func_0x000107c613fc(&UNK_1104da9c8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  pcStack_50 = FUN_1021b1c80;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104da9e0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1021aeaec; end: 1021aeba7;  */

void FUN_1021aeaec(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  puVar1 = auStack_60;
  func_0x000107c61428(param_2 + 0x10,puVar1,0,0);
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    puVar1 = auStack_78;
    func_0x000107c61428(param_3 + 0x10,puVar1,0,0);
    if (*(char *)(param_3 + 0x10) != '\x01') {
      func_0x0001021b23a0();
      goto LAB_1021aeb78;
    }
  }
  func_0x0001021b22d4();
LAB_1021aeb78:
  FUN_1021ac2f4();
  func_0x000107c6142c(puVar1);
  FUN_1021ac798();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021aeba8; end: 1021aec67; -[SCLensSettingsViewController collectionView:didSelectItemAtIndexPath:] */

void FUN_1021aeba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021adb68(param_3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1021aec68; end: 1021aed7f; -[SCLensSettingsViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_1021aec68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_8)
  ;
  puVar3 = PTR_PTR_1126b2780;
  func_0x000107c61168(PTR_PTR_1126b2780);
  func_0x000107c61174();
  lVar4 = param_6;
  func_0x000107c5efe4();
  if (lVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021aed7c);
    (*pcVar1)();
  }
  func_0x000107c5eff4();
  lVar5 = param_6;
  func_0x000107c4d91c();
  if (-1 < lVar5) {
    func_0x000107c30a60(1,lVar4,lVar5);
    func_0x000107c44da8(puVar3);
    func_0x000107c438d4(param_6);
    func_0x000107c61170(param_6);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    auVar7._8_8_ = param_1;
    auVar7._0_8_ = param_3;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021aed80);
  (*pcVar1)();
}



/* Entry: 1021aed80; end: 1021aedeb; -[SCLensSettingsViewController collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16]
FUN_1021aed80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_PTR_1126b78f0;
  func_0x000107c61168(PTR_PTR_1126b78f0);
  func_0x000107c61174(param_6);
  func_0x000107c44db0(puVar1,param_5,1);
  func_0x000107c438d4(param_6);
  func_0x000107c61170(param_6);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1021aedec; end: 1021af8b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021aedec(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar13;
  long extraout_x8_01;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long unaff_x20;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long alStack_140 [4];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lStack_108 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar19 = (long)alStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_118 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar19 - extraout_x12_00;
  alStack_140[3] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_01;
  lVar4 = 0;
  lStack_120 = lVar14;
  FUN_1021b1430();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  plVar13 = (long *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar14 = 0x112e5ff48;
  plStack_e0 = plVar13;
  func_0x0001000285a8(0x112e5ff48,&UNK_10da67de0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar14 = (long)plVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_f0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_02;
  lStack_f8 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_03;
  lStack_110 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_04;
  func_0x000107c5eff4();
  func_0x000107c4d91c();
  uVar5 = param_1;
  func_0x000107c5efe4();
  if ((long)(uVar5 | param_1) < 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1021af8a8);
    (*pcVar16)();
  }
  puVar6 = (undefined *)0x1;
  func_0x000107c30a60(1,uVar5,param_1);
  func_0x000107c5efe4();
  if (puVar6 == (undefined *)0x0) {
    FUN_1021b1be0();
    uVar17 = 0x112e5ff58;
    puStack_b0 = puVar6;
    func_0x0001000285a8(0x112e5ff58,&UNK_10da67df0);
    ppuVar9 = &puStack_b0;
    func_0x000107c5fb18(ppuVar9,uVar17);
    func_0x00010257af84(puVar6,ppuVar9,uVar17,param_2,puVar6);
    func_0x000107c6142c(uVar17);
    func_0x000107c59a2c(puVar6);
    puVar10 = puVar6;
    func_0x000107c5d200();
    func_0x000107c61180();
    func_0x000107c52170();
    func_0x000107c61170();
    func_0x000107c5eff4();
    puVar7 = puVar6;
    func_0x000107c5d200(puVar6);
    func_0x000107c61180();
    puVar11 = puVar7;
    if (puVar10 == (undefined *)0x0) {
      func_0x0001021b246c();
    }
    else {
      func_0x0001021b2538();
    }
    func_0x000107c5fadc();
    func_0x000107c6142c(ppuVar9);
    func_0x000107c59e44(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar11);
    return puVar6;
  }
  func_0x000107c5efe4();
  lVar15 = _DAT_112e5ff00;
  puVar10 = puVar6 + -1;
  if (SBORROW8((long)puVar6,1)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1021af8ac);
    (*pcVar16)();
  }
  alStack_140[2] = lVar3;
  func_0x000107c61428(unaff_x20 + _DAT_112e5ff00,auStack_80,0,0);
  if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1021af8b0);
    (*pcVar16)();
  }
  if (*(undefined **)(*(long *)(unaff_x20 + lVar15) + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1021af8b4);
    (*pcVar16)();
  }
  lVar3 = *(long *)(unaff_x20 + lVar15) + (long)puVar10 * 0x10;
  uVar5 = *(ulong *)(lVar3 + 0x20);
  uVar2 = *(ulong *)(lVar3 + 0x28);
  puVar7 = (undefined *)0x0;
  alStack_140[1] = lVar19;
  lStack_e8 = lVar20;
  FUN_1021ab99c();
  puStack_b0 = puVar7;
  func_0x000107c61434(uVar2);
  uVar17 = 0x112e5ff50;
  func_0x0001000285a8(0x112e5ff50,&UNK_10da67de8);
  ppuVar9 = &puStack_b0;
  func_0x000107c5fb18(ppuVar9,uVar17);
  func_0x00010257af84(puVar7,ppuVar9,uVar17,param_2,puVar7);
  func_0x000107c6142c(uVar17);
  func_0x000107c59a2c(puVar7);
  puVar6 = &UNK_1104da568;
  func_0x000107c613fc(&UNK_1104da568,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar10 = &UNK_1104da608;
  func_0x000107c613fc(&UNK_1104da608,0x28,7);
  *(undefined **)(puVar10 + 0x10) = puVar6;
  *(ulong *)(puVar10 + 0x18) = uVar5;
  *(ulong *)(puVar10 + 0x20) = uVar2;
  lVar3 = *(long *)(puVar7 + _DAT_112e5fda0);
  uVar17 = *(undefined8 *)(lVar3 + _DAT_112e5fd58);
  pcStack_90 = FUN_1021b1468;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1104da620;
  ppuVar9 = &puStack_b0;
  puStack_100 = puVar7;
  puStack_88 = puVar10;
  func_0x000107c60bc4(ppuVar9);
  puVar7 = puStack_88;
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(puVar6);
  func_0x000107c61174(lVar3);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar7);
  func_0x000107c56ea0(uVar17);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar10);
  func_0x000107c61170(lVar3);
  lVar3 = _DAT_112e5ff08;
  func_0x000107c61428(unaff_x20 + _DAT_112e5ff08,auStack_c8,0,0);
  lVar19 = lStack_e8;
  lVar20 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar20 + 0x10) == 0) {
    pcVar16 = *(code **)(lStack_e8 + 0x38);
    (*pcVar16)(lVar14,1,1,lVar4);
  }
  else {
    func_0x000107c61434(lVar20);
    uVar8 = uVar5;
    uVar12 = uVar2;
    func_0x000100029284(uVar5);
    lVar19 = lStack_e8;
    bVar1 = (uVar12 & 1) == 0;
    if (bVar1) {
      pcVar16 = *(code **)(lStack_e8 + 0x38);
    }
    else {
      func_0x0001021b14bc(*(long *)(lVar20 + 0x38) + *(long *)(lStack_e8 + 0x48) * uVar8,lVar14);
      pcVar16 = *(code **)(lVar19 + 0x38);
    }
    (*pcVar16)(lVar14,bVar1,1,lVar4);
    func_0x000107c6142c(lVar20);
  }
  puVar6 = puStack_100;
  pcVar18 = *(code **)(lVar19 + 0x30);
  lVar20 = lVar14;
  (*pcVar18)(lVar14,1,lVar4);
  plVar13 = plStack_e0;
  if ((int)lVar20 == 0) {
    func_0x0001021b14bc(lVar14,plStack_e0);
    func_0x0001021b1474(lVar14);
    puVar10 = (undefined *)*plVar13;
    lVar20 = plVar13[1];
    func_0x000107c61434(lVar20);
    func_0x0001021b1500(plVar13);
    lVar14 = lStack_110;
    lVar15 = *(long *)(unaff_x20 + lVar3);
    puStack_100 = puVar10;
    if (*(long *)(lVar15 + 0x10) == 0) {
      (*pcVar16)(lStack_110,1,1,lVar4);
    }
    else {
      func_0x000107c61434(lVar15);
      uVar8 = uVar5;
      uVar12 = uVar2;
      func_0x000100029284(uVar5);
      lVar14 = lStack_110;
      bVar1 = (uVar12 & 1) == 0;
      if (!bVar1) {
        func_0x0001021b14bc(*(long *)(lVar15 + 0x38) + *(long *)(lVar19 + 0x48) * uVar8,lStack_110);
      }
      (*pcVar16)(lVar14,bVar1,1,lVar4);
      func_0x000107c6142c(lVar15);
    }
    lVar19 = lVar14;
    (*pcVar18)(lVar14,1,lVar4);
    plVar13 = plStack_e0;
    if ((int)lVar19 == 0) {
      func_0x0001021b14bc(lVar14,plStack_e0);
      func_0x0001021b1474(lVar14);
      lVar15 = lStack_108;
      lVar19 = alStack_140[3];
      lVar3 = alStack_140[2];
      (**(code **)(lStack_108 + 0x10))
                (alStack_140[3],(long)plVar13 + (long)*(int *)(lVar4 + 0x14),alStack_140[2]);
      func_0x0001021b1500(plVar13);
      lVar14 = lStack_120;
      (**(code **)(lVar15 + 0x20))(lStack_120,lVar19,lVar3);
      puStack_98 = &UNK_1104da4a0;
      puVar10 = &UNK_1104da658;
      func_0x000107c613fc(&UNK_1104da658,0x30,7);
      *(ulong *)(puVar10 + 0x10) = uVar5;
      *(ulong *)(puVar10 + 0x18) = uVar2;
      *(undefined **)(puVar10 + 0x20) = puStack_100;
      *(long *)(puVar10 + 0x28) = lVar20;
      puStack_b0 = puVar10;
      func_0x000107c61434(uVar2);
      FUN_1021ab2e0(&puStack_b0);
      FUN_1021aff08(uVar5,uVar2,lVar14);
      func_0x000107c6142c(uVar2);
      if (uVar5 != 0) {
        FUN_1021ab638(uVar5);
        func_0x000107c615e8(uVar5);
      }
      pcVar16 = *(code **)(lVar15 + 8);
      goto LAB_1021af878;
    }
    func_0x000107c6142c(lVar20);
  }
  func_0x0001021b1474(lVar14);
  puStack_98 = &UNK_1104da4a0;
  puVar10 = &UNK_1104da658;
  func_0x000107c613fc(&UNK_1104da658,0x30,7);
  *(ulong *)(puVar10 + 0x10) = uVar5;
  *(ulong *)(puVar10 + 0x18) = uVar2;
  *(undefined8 *)(puVar10 + 0x20) = 0;
  *(undefined8 *)(puVar10 + 0x28) = 0;
  puStack_b0 = puVar10;
  func_0x000107c61434(uVar2);
  FUN_1021ab2e0(&puStack_b0);
  uVar8 = *(ulong *)(puVar6 + _DAT_112e5fd98);
  uVar12 = *(ulong *)((long)(puVar6 + _DAT_112e5fd98) + 8);
  if (((uVar8 != uVar5) || (uVar12 != uVar2)) &&
     (func_0x000107c605b8(uVar8,uVar12,uVar5,uVar2,0), (uVar8 & 1) == 0)) {
    func_0x000107c6142c(uVar2);
    return puVar6;
  }
  lVar14 = lStack_f8;
  lVar19 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar19 + 0x10) == 0) {
    (*pcVar16)(lStack_f8,1,1,lVar4);
  }
  else {
    func_0x000107c61434(lVar19);
    uVar8 = uVar5;
    uVar12 = uVar2;
    func_0x000100029284(uVar5);
    lVar14 = lStack_f8;
    bVar1 = (uVar12 & 1) == 0;
    if (!bVar1) {
      func_0x0001021b14bc(*(long *)(lVar19 + 0x38) + *(long *)(lStack_e8 + 0x48) * uVar8,lStack_f8);
    }
    (*pcVar16)(lVar14,bVar1,1,lVar4);
    func_0x000107c6142c(lVar19);
  }
  lVar19 = lVar14;
  (*pcVar18)(lVar14,1,lVar4);
  plVar13 = plStack_e0;
  if ((int)lVar19 == 0) {
    func_0x0001021b14bc(lVar14,plStack_e0);
    func_0x0001021b1474(lVar14);
    lVar14 = *plVar13;
    lVar19 = plVar13[1];
    func_0x000107c61434(lVar19);
    func_0x0001021b1500(plVar13);
  }
  else {
    func_0x0001021b1474(lVar14);
    lVar14 = 0;
    lVar19 = 0;
  }
  puStack_98 = &UNK_1104da4a0;
  puVar10 = &UNK_1104da658;
  func_0x000107c613fc(&UNK_1104da658,0x30,7);
  *(ulong *)(puVar10 + 0x10) = uVar5;
  *(ulong *)(puVar10 + 0x18) = uVar2;
  *(long *)(puVar10 + 0x20) = lVar14;
  *(long *)(puVar10 + 0x28) = lVar19;
  puStack_b0 = puVar10;
  func_0x000107c61434(uVar2);
  FUN_1021ab2e0(&puStack_b0);
  lVar14 = lStack_f0;
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar3 + 0x10) == 0) {
    (*pcVar16)(lStack_f0,1,1,lVar4);
  }
  else {
    func_0x000107c61434(lVar3);
    uVar8 = uVar5;
    uVar12 = uVar2;
    func_0x000100029284(uVar5);
    lVar14 = lStack_f0;
    bVar1 = (uVar12 & 1) == 0;
    if (!bVar1) {
      func_0x0001021b14bc(*(long *)(lVar3 + 0x38) + *(long *)(lStack_e8 + 0x48) * uVar8,lStack_f0);
    }
    (*pcVar16)(lVar14,bVar1,1,lVar4);
    func_0x000107c6142c(lVar3);
  }
  lVar3 = lVar14;
  (*pcVar18)(lVar14,1,lVar4);
  plVar13 = plStack_e0;
  if ((int)lVar3 != 0) {
    func_0x000107c6142c(uVar2);
    func_0x0001021b1474(lVar14);
    return puVar6;
  }
  func_0x0001021b14bc(lVar14,plStack_e0);
  func_0x0001021b1474(lVar14);
  lVar20 = lStack_108;
  lVar19 = lStack_118;
  lVar3 = alStack_140[2];
  (**(code **)(lStack_108 + 0x10))
            (lStack_118,(long)plVar13 + (long)*(int *)(lVar4 + 0x14),alStack_140[2]);
  func_0x0001021b1500(plVar13);
  lVar14 = alStack_140[1];
  (**(code **)(lVar20 + 0x20))(alStack_140[1],lVar19,lVar3);
  FUN_1021aff08(uVar5,uVar2,lVar14);
  func_0x000107c6142c(uVar2);
  if (uVar5 != 0) {
    FUN_1021ab638(uVar5);
    func_0x000107c615e8(uVar5);
  }
  pcVar16 = *(code **)(lVar20 + 8);
LAB_1021af878:
  (*pcVar16)(lVar14,lVar3);
  return puVar6;
}



/* Entry: 1021af8b4; end: 1021af923;  */

void FUN_1021af8b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1021af924(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1021af924; end: 1021aff07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021af924(long param_1,ulong param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  code *pcVar20;
  long lVar21;
  undefined *apuStack_e0 [3];
  long lStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  FUN_1021b1430();
  lVar21 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)apuStack_e0 + lVar3);
  lVar15 = 0x112e5ff48;
  func_0x0001000285a8(0x112e5ff48,&UNK_10da67de0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  lVar18 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = _DAT_112e5ff08;
  lVar17 = lVar18 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_112e5ff08,auStack_88,0,0);
  lVar14 = *(long *)(unaff_x20 + lVar15);
  lStack_c8 = param_1;
  uStack_c0 = param_2;
  if (*(long *)(lVar14 + 0x10) == 0) {
    bVar19 = true;
  }
  else {
    func_0x000107c61434(lVar14);
    func_0x000100029284(param_1);
    bVar19 = (param_2 & 1) == 0;
    if (!bVar19) {
      func_0x0001021b14bc(*(long *)(lVar14 + 0x38) + *(long *)(lVar21 + 0x48) * param_1,lVar17);
    }
    func_0x000107c6142c(lVar14);
  }
  pcVar16 = *(code **)(lVar21 + 0x38);
  (*pcVar16)(lVar17,bVar19,1,lVar2);
  pcVar20 = *(code **)(lVar21 + 0x30);
  lVar14 = lVar17;
  (*pcVar20)(lVar17,1,lVar2);
  if ((int)lVar14 == 0) {
    func_0x0001021b14bc(lVar17,puVar4);
    func_0x0001021b1474(lVar17);
    apuStack_e0[2] = (undefined *)*puVar4;
    uVar10 = *(undefined8 *)((long)apuStack_e0 + lVar3 + 8);
    func_0x000107c61434(uVar10);
    func_0x0001021b1500(puVar4);
    lVar15 = *(long *)(unaff_x20 + lVar15);
    if (*(long *)(lVar15 + 0x10) == 0) {
      (*pcVar16)(lVar18,1,1,lVar2);
    }
    else {
      func_0x000107c61434(lVar15);
      lVar3 = lStack_c8;
      uVar11 = uStack_c0;
      func_0x000100029284(lStack_c8);
      bVar19 = (uVar11 & 1) == 0;
      if (!bVar19) {
        func_0x0001021b14bc(*(long *)(lVar15 + 0x38) + *(long *)(lVar21 + 0x48) * lVar3,lVar18);
      }
      (*pcVar16)(lVar18,bVar19,1,lVar2);
      func_0x000107c6142c(lVar15);
    }
    lVar15 = lVar18;
    (*pcVar20)(lVar18,1,lVar2);
    if ((int)lVar15 == 0) {
      puVar12 = puVar4;
      func_0x0001021b14bc(lVar18,puVar4);
      func_0x0001021b1474(lVar18);
      uVar1 = *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar2 + 0x18));
      func_0x0001021b1500(puVar4);
      func_0x0001021b203c();
      puVar13 = puVar12;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar12);
      pcStack_98 = (code *)0x1021b2008;
      puStack_90 = (undefined *)0x0;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100de205c;
      puStack_a0 = &UNK_1104da670;
      ppuVar5 = &puStack_b8;
      func_0x000107c60bc4(ppuVar5);
      puVar6 = PTR_PTR_1126aed70;
      func_0x000107c61168();
      puVar7 = puVar6;
      func_0x000107c3dad0();
      func_0x000107c61180();
      apuStack_e0[1] = puVar7;
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(puVar4);
      puVar8 = puStack_90;
      func_0x000107c61574(puStack_90);
      func_0x0001021b2014();
      puVar7 = &UNK_1104da568;
      func_0x000107c613fc(&UNK_1104da568,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar9 = &UNK_1104da6a8;
      func_0x000107c613fc(&UNK_1104da6a8,0x30,7);
      uVar11 = uStack_c0;
      *(undefined **)(puVar9 + 0x10) = puVar7;
      puVar9[0x18] = uVar1;
      *(long *)(puVar9 + 0x20) = lStack_c8;
      *(ulong *)(puVar9 + 0x28) = uStack_c0;
      func_0x000107c6157c(puVar7);
      func_0x000107c61434(uVar11);
      puVar4 = puVar13;
      func_0x000107c5fadc(puVar8,puVar13);
      func_0x000107c6142c(puVar13);
      pcStack_98 = FUN_1021b1ae8;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100de205c;
      puStack_a0 = &UNK_1104da6c0;
      ppuVar5 = &puStack_b8;
      puStack_90 = puVar9;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(puVar8);
      puVar9 = puStack_90;
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar9);
      func_0x0001021b2604();
      lVar15 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar15 + 0x18) = 2;
      *(undefined8 *)(lVar15 + 0x10) = 1;
      *(undefined **)(lVar15 + 0x38) = PTR___sSSN_11034da80;
      lVar3 = lVar15;
      func_0x00010075bbf0();
      *(long *)(lVar15 + 0x40) = lVar3;
      *(undefined **)(lVar15 + 0x20) = apuStack_e0[2];
      *(undefined8 *)(lVar15 + 0x28) = uVar10;
      puVar12 = puVar4;
      func_0x000107c5fafc(puVar9,puVar4,lVar15);
      puVar13 = puVar12;
      func_0x000107c6142c(puVar4);
      func_0x000107c61574(lVar15);
      func_0x0001021b2050();
      lVar3 = 0x112d360a8;
      FUN_1021b09d0(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
      func_0x000107c613fc();
      puVar7 = apuStack_e0[1];
      *(undefined8 *)(lVar3 + 0x18) = 5;
      *(undefined8 *)(lVar3 + 0x10) = 2;
      *(undefined **)(lVar3 + 0x20) = puVar6;
      *(undefined **)(lVar3 + 0x28) = apuStack_e0[1];
      puVar8 = PTR_PTR_1126aed78;
      func_0x000107c610f8(PTR_PTR_1126aed78);
      func_0x000107c61174(puVar6);
      func_0x000107c61174(puVar7);
      func_0x000107c5fadc(lVar15,puVar13);
      func_0x000107c6142c(puVar13);
      func_0x000107c5fadc(puVar9,puVar12);
      func_0x000107c6142c(puVar12);
      uVar10 = 0;
      FUN_1021b1be0(0,0x112d360a8,&PTR_PTR_1126aed70);
      lVar17 = lVar3;
      func_0x000107c5fc48(lVar3,uVar10);
      func_0x000107c61574(lVar3);
      func_0x000107c48d50(puVar8);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(lVar17);
      func_0x000107c4f018();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar8);
      return;
    }
    func_0x000107c6142c(uVar10);
    lVar17 = lVar18;
  }
  func_0x0001021b1474(lVar17);
  return;
}



/* Entry: 1021aff08; end: 1021b00b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021aff08(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5ff40);
  uVar6 = param_2;
  func_0x000107c423b0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else {
      puVar4 = PTR_PTR_1126b08b0;
      func_0x000107c61168(PTR_PTR_1126b08b0);
      puVar5 = puVar4;
      func_0x000107c5ed70();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
      func_0x000107c3f71c(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      uVar6 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      puVar5 = PTR_PTR_1126b08a8;
      func_0x000107c610f8(PTR_PTR_1126b08a8);
      func_0x000107c5fc48(uVar6,PTR___sSSN_11034da80);
      func_0x000107c460f4(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar6);
      puVar4 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c4766c(puVar4);
      func_0x000107c61170(param_1);
      lVar2 = lVar3;
      func_0x000107c409f4(lVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
    }
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b00b4);
  (*pcVar1)();
}



/* Entry: 1021b00b4; end: 1021b017b; -[SCLensSettingsViewController collectionView:cellForItemAtIndexPath:] */

void FUN_1021b00b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1021aedec(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b017c; end: 1021b044b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b017c(undefined8 param_1,long param_2,char param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (param_3 == '\x01') {
    lVar1 = *(long *)(param_2 + _DAT_112e5ff28);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) goto LAB_1021b042c;
    lVar2 = param_4;
    func_0x000107c5fadc(param_4,param_5);
    puVar3 = &UNK_1104da720;
    func_0x000107c613fc(&UNK_1104da720,0x30,7);
    *(long *)(puVar3 + 0x10) = param_2;
    *(long *)(puVar3 + 0x18) = param_4;
    *(undefined8 *)(puVar3 + 0x20) = param_5;
    *(undefined8 *)(puVar3 + 0x28) = param_1;
    pcStack_78 = FUN_1021b1afc;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ff4e10;
    puStack_80 = &UNK_1104da738;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c416d4(lVar1);
    lVar7 = param_2;
    param_2 = lVar2;
  }
  else {
    if (param_3 != '\0') {
      pcVar5 = "clearLensNotification(lensId:sender:error:)";
      func_0x0001000c10c0("clearLensNotification(lensId:sender:error:)");
      func_0x000107c61180();
      pcVar6 = pcVar5;
      func_0x000107c614f0();
      puVar3 = &UNK_1104da6f8;
      func_0x000107c613fc(&UNK_1104da6f8,0x38,7);
      *(undefined8 *)(puVar3 + 0x10) = param_1;
      *(undefined8 *)(puVar3 + 0x18) = 0;
      *(long *)(puVar3 + 0x20) = param_4;
      *(undefined8 *)(puVar3 + 0x28) = param_5;
      *(long *)(puVar3 + 0x30) = param_2;
      func_0x000107c61174(param_2);
      func_0x000107c61434(param_5);
      func_0x000107c61174(param_1);
      func_0x00010090569c(0x1021b1af8,puVar3,pcVar6);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(pcVar5);
      func_0x000107c61574(puVar3);
      return;
    }
    lVar1 = *(long *)(param_2 + _DAT_112e5ff20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) goto LAB_1021b042c;
    lVar2 = param_4;
    func_0x000107c5fadc(param_4,param_5);
    puVar3 = &UNK_1104da770;
    func_0x000107c613fc(&UNK_1104da770,0x30,7);
    *(long *)(puVar3 + 0x10) = param_2;
    *(long *)(puVar3 + 0x18) = param_4;
    *(undefined8 *)(puVar3 + 0x20) = param_5;
    *(undefined8 *)(puVar3 + 0x28) = param_1;
    pcStack_78 = (code *)0x1021b1b5c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ff4e10;
    puStack_80 = &UNK_1104da788;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c416fc(lVar1);
    lVar7 = param_2;
    param_2 = lVar2;
  }
  func_0x000107c61170(lVar7);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(lVar1);
LAB_1021b042c:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1021b044c; end: 1021b051f;  */

void FUN_1021b044c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "clearLensNotification(lensId:sender:error:)";
  func_0x0001000c10c0("clearLensNotification(lensId:sender:error:)");
  func_0x000107c61180();
  pcVar2 = pcVar1;
  func_0x000107c614f0();
  func_0x000107c613fc(param_6,0x38,7);
  *(undefined8 *)(param_6 + 0x10) = param_5;
  *(undefined8 *)(param_6 + 0x18) = param_1;
  *(undefined8 *)(param_6 + 0x20) = param_3;
  *(undefined8 *)(param_6 + 0x28) = param_4;
  *(undefined8 *)(param_6 + 0x30) = param_2;
  func_0x000107c61174(param_5);
  func_0x000107c614b0(param_1);
  func_0x000107c61434(param_4);
  func_0x000107c61174(param_2);
  func_0x00010090569c(param_7,param_6,pcVar2);
  func_0x000107c615e8(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_6);
  return;
}



/* Entry: 1021b0520; end: 1021b05ff;  */

void FUN_1021b0520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1104da810;
  func_0x000107c613fc(&UNK_1104da810,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uStack_50 = 0x1021b1bd4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104da828;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c614b0(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1021b0600; end: 1021b087b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b0600(long param_1,long param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long alStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  FUN_1021b1430();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)alStack_90 + lVar3);
  lVar11 = 0x112e5ff48;
  puVar8 = &UNK_10da67de0;
  func_0x0001000285a8(0x112e5ff48,&UNK_10da67de0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)((long)puVar7 - extraout_x8_00);
  alStack_90[2] = param_1;
  if (param_1 == 0) {
    func_0x0001021b26d0();
  }
  else {
    func_0x0001021b279c();
  }
  lVar5 = 0x112d36008;
  alStack_90[1] = lVar11;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  lVar11 = _DAT_112e5ff08;
  func_0x000107c61428(param_4 + _DAT_112e5ff08,auStack_78,0,0);
  lVar11 = *(long *)(param_4 + lVar11);
  if (*(long *)(lVar11 + 0x10) == 0) {
    (**(code **)(lVar12 + 0x38))(puVar14,1,1,lVar4);
  }
  else {
    func_0x000107c61434(lVar11);
    func_0x000100029284(param_2);
    bVar1 = (param_3 & 1) == 0;
    if (bVar1) {
      pcVar10 = *(code **)(lVar12 + 0x38);
    }
    else {
      func_0x0001021b14bc(*(long *)(lVar11 + 0x38) + *(long *)(lVar12 + 0x48) * param_2,puVar14);
      pcVar10 = *(code **)(lVar12 + 0x38);
    }
    (*pcVar10)(puVar14,bVar1,1,lVar4);
    func_0x000107c6142c(lVar11);
  }
  puVar6 = puVar14;
  (**(code **)(lVar12 + 0x30))(puVar14,1,lVar4);
  if ((int)puVar6 == 0) {
    func_0x0001021b14bc(puVar14,puVar7);
    func_0x0001021b1474(puVar14);
    uVar13 = *puVar7;
    lVar11 = *(long *)((long)alStack_90 + lVar3 + 8);
    func_0x000107c61434(lVar11);
    func_0x0001021b1500();
  }
  else {
    func_0x0001021b1474();
    uVar13 = 0;
    lVar11 = 0;
    puVar7 = puVar14;
  }
  *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined8 **)(lVar5 + 0x40) = puVar7;
  uVar2 = 0;
  if (lVar11 != 0) {
    uVar2 = uVar13;
  }
  lVar3 = -0x2000000000000000;
  if (lVar11 != 0) {
    lVar3 = lVar11;
  }
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(long *)(lVar5 + 0x28) = lVar3;
  lVar11 = alStack_90[1];
  puVar9 = puVar8;
  func_0x000107c5fafc(alStack_90[1],puVar8,lVar5);
  func_0x000107c6142c(puVar8);
  func_0x000107c61574(lVar5);
  FUN_1021ac2f4(lVar11,puVar9);
  if (alStack_90[2] == 0) {
    FUN_1021ac798();
  }
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 1021b087c; end: 1021b096f; -[SCLensSettingsViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_1021b087c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_4);
  func_0x000107c5efdc(puVar3,param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1021b153c(param_3,param_4,param_2,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b0970; end: 1021b0977; -[SCLensSettingsViewController numberOfSectionsInCollectionView:] */

undefined8 FUN_1021b0970(void)

{
  return 2;
}



/* Entry: 1021b0978; end: 1021b09cf; -[SCLensSettingsViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021b0978(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5ff00;
  if (param_4 != 0) {
    func_0x000107c61428(param_1 + _DAT_112e5ff00,auStack_38,0,0);
    return *(long *)(*(long *)(param_1 + lVar1) + 0x10) + 1;
  }
  return 1;
}



/* Entry: 1021b09d0; end: 1021b0acf;  */

void FUN_1021b09d0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1021b1be0(0,param_1,param_2);
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



/* Entry: 1021b0ad0; end: 1021b0d13;  */

void FUN_1021b0ad0(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    FUN_1021b1430();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x0001021b0d14();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    FUN_1021b1430();
    lVar6 = *(long *)(lVar4 + -8);
    func_0x0001021aa9ac(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    func_0x0001021b1214(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001021b0bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 1021b0d14; end: 1021b13e3;  */

void FUN_1021b0d14(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar6 = 0;
  FUN_1021b1430();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x0001000285a8(0x112e5fd48,&UNK_10da67d78);
  lVar13 = *unaff_x20;
  lVar6 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c61574(lVar13);
LAB_1021b0ee4:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar13 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar6 != lVar13) || (lVar1 + uVar8 * 8 <= lVar6 + 0x40U)) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar14 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar13 + 0x40);
  if (uVar8 == 0) goto LAB_1021b0e40;
  do {
    uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar8 = uVar8 - 1 & uVar8;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar7 + 0x48) * uVar10;
      func_0x0001021b14bc(*(long *)(lVar13 + 0x38) + lVar12,
                          &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x0001021aa9ac(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          *(long *)(lVar6 + 0x38) + lVar12);
      func_0x000107c61434(uVar4);
      if (uVar8 != 0) break;
LAB_1021b0e40:
      do {
        lVar11 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1021b0f0c);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar13);
          goto LAB_1021b0ee4;
        }
        uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar8 == 0);
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar14 = lVar11;
    }
  } while( true );
}



/* Entry: 1021b13e4; end: 1021b1403;  */

void FUN_1021b13e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128243c0);
  return;
}



/* Entry: 1021b1404; end: 1021b142f;  */

void FUN_1021b1404(long param_1,long param_2)

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



/* Entry: 1021b1430; end: 1021b1467;  */

void FUN_1021b1430(undefined8 param_1)

{
  if (lRam0000000112e5ffe0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6b56e0);
  return;
}



/* Entry: 1021b1468; end: 1021b1473;  */

void FUN_1021b1468(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1021af924(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1021b1474; end: 1021b153b;  */

undefined8 FUN_1021b1474(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e5ff48;
  func_0x0001000285a8(0x112e5ff48,&UNK_10da67de0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}


