/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10241d72c; end: 10241d89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241d72c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e97ee8);
  puVar1 = &UNK_110504470;
  func_0x000107c613fc(&UNK_110504470,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110504588;
  func_0x000107c613fc(&UNK_110504588,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_40 = FUN_10241f698;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105045a0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10241d89c; end: 10241d8ff; -[_TtC52ComposerSendToSessionVisibilityLoggerServiceProvider41ComposerSendToSessionVisibilityLoggerImpl setRecipientRankingFeaturesMap:] */

void FUN_10241d89c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61174(param_1);
  FUN_10241d72c(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10241d900; end: 10241d91b; -[_TtC52ComposerSendToSessionVisibilityLoggerServiceProvider41ComposerSendToSessionVisibilityLoggerImpl setBackendSyncSessionId:] */

void FUN_10241d900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10241d91c(param_3,param_2,&UNK_110504538,0x10241f674,&UNK_110504550);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10241d91c; end: 10241da0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241d91c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e97ee8);
  puVar2 = &UNK_110504470;
  func_0x000107c613fc(&UNK_110504470,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(param_3,0x28,7);
  *(undefined **)(param_3 + 0x10) = puVar2;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_5;
  uStack_60 = param_4;
  lStack_58 = param_3;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c61434(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10241da0c; end: 10241da8f;  */

void FUN_10241da0c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + *param_4);
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000107c6142c(uVar2);
    func_0x000107c61434(param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10241da90; end: 10241daab; -[_TtC52ComposerSendToSessionVisibilityLoggerServiceProvider41ComposerSendToSessionVisibilityLoggerImpl setContextualServerSessionId:] */

void FUN_10241da90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10241d91c(param_3,param_2,&UNK_1105044e8,FUN_10241f624,&UNK_110504500);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10241daac; end: 10241dc13;  */

void FUN_10241daac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10241d91c(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10241dc14; end: 10241dc97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241dc14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112e97f10);
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000107c61434(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 10241dc98; end: 10241dd03; -[_TtC52ComposerSendToSessionVisibilityLoggerServiceProvider41ComposerSendToSessionVisibilityLoggerImpl setRankingResultsId:] */

void FUN_10241dc98(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  func_0x00010241db24(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10241dd04; end: 10241e2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241dd04(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puStack_108;
  ulong uStack_100;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uVar19 = param_2;
  func_0x000107c51ec0();
  func_0x000107c61180();
  uVar2 = uVar19;
  func_0x000107c5faec();
  func_0x000107c61170(uVar19);
  uVar19 = param_2;
  puStack_108 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_pageTabTypeSourcePage_11261a178);
  if ((uVar19 & 1) == 0) {
    puStack_108 = (undefined *)0x1;
    uStack_100 = 0;
  }
  else {
    uVar19 = param_2;
    func_0x000107c4e2d0();
    func_0x000107c61180();
    if (uVar19 == 0) {
      puStack_108 = (undefined *)0x0;
      uStack_100 = 0;
    }
    else {
      uStack_100 = uVar19;
      func_0x000107c5faec();
      func_0x000107c61170(uVar19);
    }
  }
  uVar19 = param_2;
  func_0x000107c3d008();
  func_0x000107c61180();
  uVar14 = 0x112e97f40;
  func_0x0001000285a8(0x112e97f40,&UNK_10daa3320);
  uVar16 = uVar19;
  func_0x000107c5fc54(uVar19,uVar14);
  func_0x000107c61170(uVar19);
  if (uVar16 >> 0x3e == 0) {
    uVar19 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar19 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar19 = uVar16;
    }
    func_0x000107c60480();
  }
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar19 == 0) {
    func_0x000107c6142c(uVar16);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010241ef9c(0,uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10241e2b8);
      (*pcVar1)();
    }
    uVar20 = 0;
    do {
      puVar18 = puStack_a8;
      uVar10 = uVar16;
      if ((uVar16 & 0xc000000000000001) == 0) {
        uVar17 = *(ulong *)(uVar16 + uVar20 * 8 + 0x20);
        func_0x000107c615f0(uVar17);
        uVar14 = param_1;
      }
      else {
        uVar17 = uVar20;
        func_0x00010241eddc();
        uVar14 = param_1;
      }
      uVar3 = uVar17;
      func_0x000107c506d4();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      uVar11 = uVar10;
      func_0x000107c61170(uVar3);
      uVar3 = uVar17;
      func_0x000107c506f8();
      func_0x000107c61180();
      uVar5 = uVar3;
      func_0x000107c5faec();
      uVar12 = uVar11;
      func_0x000107c61170(uVar3);
      uVar3 = uVar17;
      func_0x000107c506ec();
      func_0x000107c61180();
      uVar6 = uVar3;
      func_0x000107c5faec();
      uVar13 = uVar12;
      func_0x000107c61170(uVar3);
      func_0x000107c506f0(uVar17);
      uVar3 = uVar17;
      param_1 = uVar14;
      func_0x000107c506e8();
      func_0x000107c61180();
      uVar7 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(uVar17);
      uVar17 = *(ulong *)(puVar18 + 0x10);
      puStack_a8 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar17) {
        func_0x00010241ef9c(1 < *(ulong *)(puVar18 + 0x18),uVar17 + 1,1);
      }
      puVar15 = puStack_a8;
      uVar20 = uVar20 + 1;
      *(ulong *)(puStack_a8 + 0x10) = uVar17 + 1;
      *(ulong *)(puStack_a8 + uVar17 * 0x48 + 0x20) = uVar4;
      *(ulong *)(puStack_a8 + uVar17 * 0x48 + 0x28) = uVar10;
      *(ulong *)(puStack_a8 + uVar17 * 0x48 + 0x30) = uVar5;
      *(ulong *)(puStack_a8 + uVar17 * 0x48 + 0x38) = uVar11;
      *(ulong *)(puStack_a8 + uVar17 * 0x48 + 0x40) = uVar6;
      *(ulong *)(puStack_a8 + uVar17 * 0x48 + 0x48) = uVar12;
      *(undefined8 *)(puStack_a8 + uVar17 * 0x48 + 0x50) = uVar14;
      *(ulong *)(puStack_a8 + uVar17 * 0x48 + 0x58) = uVar7;
      *(ulong *)(puStack_a8 + uVar17 * 0x48 + 0x60) = uVar13;
    } while (uVar19 != uVar20);
    func_0x000107c6142c(uVar16);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  func_0x000107c5070c();
  func_0x000107c61180();
  uVar14 = 0x112e97f48;
  func_0x0001000285a8(0x112e97f48,&UNK_10daa3328);
  uVar19 = param_2;
  func_0x000107c5fc54(param_2,uVar14);
  func_0x000107c61170(param_2);
  if (uVar19 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar19 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar19) {
      uVar16 = uVar19;
    }
    func_0x000107c60480();
  }
  if (uVar16 == 0) {
    func_0x000107c6142c();
  }
  else {
    puStack_a8 = puVar18;
    func_0x00010241ef80(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10241e2bc);
      (*pcVar1)();
    }
    uVar20 = 0;
    do {
      puVar18 = puStack_a8;
      uVar10 = uVar19;
      if ((uVar19 & 0xc000000000000001) == 0) {
        uVar17 = *(ulong *)(uVar19 + uVar20 * 8 + 0x20);
        func_0x000107c615f0(uVar17);
        uVar14 = param_1;
      }
      else {
        uVar17 = uVar20;
        func_0x00010241ec38();
        uVar14 = param_1;
      }
      uVar3 = uVar17;
      func_0x000107c506d4();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      uVar11 = uVar10;
      func_0x000107c61170(uVar3);
      uVar3 = uVar17;
      func_0x000107c506f8();
      func_0x000107c61180();
      uVar5 = uVar3;
      func_0x000107c5faec();
      uVar12 = uVar11;
      func_0x000107c61170(uVar3);
      uVar3 = uVar17;
      func_0x000107c506ec();
      func_0x000107c61180();
      uVar6 = uVar3;
      func_0x000107c5faec();
      uVar13 = uVar12;
      func_0x000107c61170(uVar3);
      func_0x000107c506f0(uVar17);
      uVar3 = uVar17;
      param_1 = uVar14;
      func_0x000107c506e8();
      func_0x000107c61180();
      uVar7 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      uVar3 = uVar17;
      func_0x000107c5af24();
      func_0x000107c615e8(uVar17);
      uVar17 = *(ulong *)(puVar18 + 0x10);
      puStack_a8 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar17) {
        func_0x00010241ef80(1 < *(ulong *)(puVar18 + 0x18),uVar17 + 1,1);
      }
      puVar18 = puStack_a8;
      uVar20 = uVar20 + 1;
      *(ulong *)(puStack_a8 + 0x10) = uVar17 + 1;
      *(ulong *)(puStack_a8 + uVar17 * 0x50 + 0x20) = uVar4;
      *(ulong *)(puStack_a8 + uVar17 * 0x50 + 0x28) = uVar10;
      *(ulong *)(puStack_a8 + uVar17 * 0x50 + 0x30) = uVar5;
      *(ulong *)(puStack_a8 + uVar17 * 0x50 + 0x38) = uVar11;
      *(ulong *)(puStack_a8 + uVar17 * 0x50 + 0x40) = uVar6;
      *(ulong *)(puStack_a8 + uVar17 * 0x50 + 0x48) = uVar12;
      *(undefined8 *)(puStack_a8 + uVar17 * 0x50 + 0x50) = uVar14;
      *(ulong *)(puStack_a8 + uVar17 * 0x50 + 0x58) = uVar7;
      *(ulong *)(puStack_a8 + uVar17 * 0x50 + 0x60) = uVar13;
      *(int *)(puStack_a8 + uVar17 * 0x50 + 0x68) = (int)uVar3;
    } while (uVar16 != uVar20);
    func_0x000107c6142c(uVar19);
  }
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112e97ee8);
  puVar8 = &UNK_110504420;
  func_0x000107c613fc(&UNK_110504420,0x48,7);
  *(long *)(puVar8 + 0x10) = unaff_x20;
  *(ulong *)(puVar8 + 0x18) = uVar2;
  *(undefined8 *)(puVar8 + 0x20) = param_3;
  *(ulong *)(puVar8 + 0x28) = uStack_100;
  *(undefined **)(puVar8 + 0x30) = puStack_108;
  *(undefined **)(puVar8 + 0x38) = puVar15;
  *(undefined **)(puVar8 + 0x40) = puVar18;
  pcStack_88 = FUN_10241efb8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110504438;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar18 = puStack_80;
  func_0x000107c61174(unaff_x20);
  func_0x000107c61574(puVar18);
  func_0x000107c4e524(uVar14);
  func_0x000107c60bd0(ppuVar9);
  return;
}



/* Entry: 10241e2bc; end: 10241e69b;  */

/* WARNING: Possible PIC construction at 0x00010241e348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e3e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010241e34c) */
/* WARNING: Removing unreachable block (ram,0x00010241e398) */
/* WARNING: Removing unreachable block (ram,0x00010241e3e4) */
/* WARNING: Removing unreachable block (ram,0x00010241e430) */
/* WARNING: Removing unreachable block (ram,0x00010241e434) */
/* WARNING: Removing unreachable block (ram,0x00010241e460) */
/* WARNING: Removing unreachable block (ram,0x00010241e43c) */
/* WARNING: Removing unreachable block (ram,0x00010241e44c) */
/* WARNING: Removing unreachable block (ram,0x00010241e3f8) */
/* WARNING: Removing unreachable block (ram,0x00010241e3ac) */
/* WARNING: Removing unreachable block (ram,0x00010241e360) */
/* WARNING: Removing unreachable block (ram,0x00010241e504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241e2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e97ef0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d1e60;
    func_0x000107c610f8(PTR_PTR_1126d1e60);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c58f1c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10241e69c; end: 10241e6e3; -[_TtC52ComposerSendToSessionVisibilityLoggerServiceProvider41ComposerSendToSessionVisibilityLoggerImpl logSessionVisibilityWithPayload:] */

void FUN_10241e69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10241dd04(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10241e6e4; end: 10241e84b;  */

void FUN_10241e6e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  
  uVar7 = *param_2;
  uVar1 = param_2[1];
  uVar8 = param_2[2];
  uVar2 = param_2[3];
  uVar9 = param_2[4];
  uVar3 = param_2[5];
  dVar11 = (double)param_2[6];
  uVar10 = param_2[7];
  uVar4 = param_2[8];
  puVar6 = PTR_PTR_1126d1e50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c5fadc(uVar7,uVar1);
  func_0x000107c58eec(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(uVar8,uVar2);
  func_0x000107c58f04(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c5fadc(uVar9,uVar3);
  func_0x000107c58ef8(puVar6);
  func_0x000107c61170(uVar9);
  if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10241e844);
    (*pcVar5)();
  }
  if (-9.223372036854778e+18 < dVar11) {
    if (dVar11 < 9.223372036854776e+18) {
      func_0x000107c58efc(puVar6);
      func_0x000107c5fadc(uVar10,uVar4);
      func_0x000107c58ef4(puVar6);
      func_0x000107c61170(uVar10);
      *param_1 = puVar6;
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10241e84c);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10241e848);
  (*pcVar5)();
}



/* Entry: 10241e84c; end: 10241eabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241e84c(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  undefined1 auStack_78 [24];
  
  lVar13 = *param_2;
  uVar15 = param_2[1];
  lVar16 = param_2[2];
  lVar2 = param_2[3];
  uVar12 = param_2[4];
  lVar3 = param_2[5];
  dVar17 = (double)param_2[6];
  lVar11 = param_2[7];
  lVar4 = param_2[8];
  lVar6 = param_2[9];
  puVar8 = PTR_PTR_1126d1e58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar9 = lVar13;
  func_0x000107c5fadc(lVar13,uVar15);
  func_0x000107c58eec(puVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c5fadc(lVar16,lVar2);
  func_0x000107c58f04(puVar8);
  func_0x000107c61170(lVar16);
  uVar10 = uVar12;
  func_0x000107c5fadc(uVar12,lVar3);
  func_0x000107c58ef8(puVar8);
  func_0x000107c61170(uVar10);
  if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10241eab4);
    (*pcVar7)();
  }
  if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10241eab8);
    (*pcVar7)();
  }
  if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10241eabc);
    (*pcVar7)();
  }
  func_0x000107c58efc(puVar8);
  func_0x000107c5fadc(lVar11,lVar4);
  func_0x000107c58ef4(puVar8);
  func_0x000107c61170(lVar11);
  if (((int)lVar6 == 1) || ((int)lVar6 == 2)) {
    func_0x000107c58f00(puVar8);
  }
  if (((uVar12 == 0x53544e45434552) && (lVar3 == -0x1900000000000000)) ||
     (func_0x000107c605b8(uVar12,lVar3,0x53544e45434552,0xe700000000000000,0), (uVar12 & 1) != 0)) {
    lVar16 = _DAT_112e97ef8;
    func_0x000107c61428(param_3 + _DAT_112e97ef8,auStack_78,0x20,0);
    lVar16 = *(long *)(param_3 + lVar16);
    if (*(long *)(lVar16 + 0x10) != 0) {
      func_0x000107c61434(lVar16);
      func_0x000100029284();
      if ((uVar15 & 1) != 0) {
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar13 * 0x10);
        uVar14 = *puVar1;
        uVar5 = puVar1[1];
        func_0x000107c61434(uVar5);
        func_0x000107c614a8(auStack_78);
        func_0x000107c6142c(lVar16);
        func_0x000107c5fadc(uVar14,uVar5);
        func_0x000107c6142c(uVar5);
        func_0x000107c58ef0(puVar8);
        func_0x000107c61170(uVar14);
        goto LAB_10241ea84;
      }
      func_0x000107c6142c(lVar16);
    }
    func_0x000107c614a8(auStack_78);
  }
LAB_10241ea84:
  *param_1 = puVar8;
  return;
}



/* Entry: 10241eabc; end: 10241eb1b; -[_TtC52ComposerSendToSessionVisibilityLoggerServiceProvider41ComposerSendToSessionVisibilityLoggerImpl init] */

void FUN_10241eabc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSendToSessionVisibilityLoggerServiceProvider.ComposerSendToSessionVisibilityLoggerImpl"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10241eae8);
  (*pcVar1)();
}



/* Entry: 10241eb1c; end: 10241eb9f; -[_TtC52ComposerSendToSessionVisibilityLoggerServiceProvider41ComposerSendToSessionVisibilityLoggerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010241eb58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241eb80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241eb5c) */
/* WARNING: Removing unreachable block (ram,0x00010241eb84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241eb1c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e97ee8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e97ef0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e97ef8));
  return;
}



/* Entry: 10241eba0; end: 10241ebbf;  */

void FUN_10241eba0(void)

{
  func_0x000107c61168(&PTR_PTR_11283d280);
  return;
}



/* Entry: 10241ebc0; end: 10241ec37;  */

void FUN_10241ebc0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10241f518(0,param_1,param_2);
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



/* Entry: 10241ec38; end: 10241ef7f;  */

ulong FUN_10241ec38(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10241ed10);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10241ed14);
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
  func_0x000107c5fb78(0xd000000000000028,0x800000010f09a020);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10241eddc);
  (*pcVar2)();
}



/* Entry: 10241ef80; end: 10241efb7;  */

void FUN_10241ef80(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10241f060();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10241efb8; end: 10241efe7;  */

/* WARNING: Possible PIC construction at 0x00010241e348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e3e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241e500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010241e34c) */
/* WARNING: Removing unreachable block (ram,0x00010241e398) */
/* WARNING: Removing unreachable block (ram,0x00010241e3e4) */
/* WARNING: Removing unreachable block (ram,0x00010241e430) */
/* WARNING: Removing unreachable block (ram,0x00010241e434) */
/* WARNING: Removing unreachable block (ram,0x00010241e460) */
/* WARNING: Removing unreachable block (ram,0x00010241e43c) */
/* WARNING: Removing unreachable block (ram,0x00010241e44c) */
/* WARNING: Removing unreachable block (ram,0x00010241e3f8) */
/* WARNING: Removing unreachable block (ram,0x00010241e3ac) */
/* WARNING: Removing unreachable block (ram,0x00010241e360) */
/* WARNING: Removing unreachable block (ram,0x00010241e504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241efb8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e97ef0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d1e60;
    func_0x000107c610f8(PTR_PTR_1126d1e60);
    func_0x000107c453e4();
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c58f1c(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 10241efe8; end: 10241f05f;  */

void FUN_10241efe8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10241f29c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10241f060; end: 10241f29b;  */

undefined * FUN_10241f060(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10241f178);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e97f70;
    func_0x0001000285a8(0x112e97f70,&UNK_10daa3348);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x50) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1105046c0);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x50 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 10241f29c; end: 10241f517;  */

undefined *
FUN_10241f29c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10241f3e8);
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
    puVar3 = param_5;
    FUN_10241ebc0(param_5,param_6,param_7,param_8);
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
    FUN_10241f518(0,param_5,param_6);
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



/* Entry: 10241f518; end: 10241f617;  */

void FUN_10241f518(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10241f618; end: 10241f623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241f618(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112e97f10);
    uVar5 = puVar1[1];
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    func_0x000107c61434(uVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(uVar5);
  }
  return;
}



/* Entry: 10241f624; end: 10241f697;  */

void FUN_10241f624(void)

{
  long unaff_x20;
  
  FUN_10241da0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_112e97f08);
  return;
}



/* Entry: 10241f698; end: 10241f69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241f698(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112e97ef8;
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_112e97ef8,auStack_60,1,0);
    uVar4 = *(undefined8 *)(lVar3 + lVar2);
    *(undefined8 *)(lVar3 + lVar2) = uVar1;
    func_0x000107c61434(uVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 10241f6a0; end: 10241f7bf;  */

undefined8 * FUN_10241f6a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  uVar3 = param_2[8];
  param_1[8] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 10241f7c0; end: 10241f82b;  */

undefined8 * FUN_10241f7c0(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10241f82c; end: 10241f8d3;  */

int FUN_10241f82c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10241f8d4; end: 10241f90b;  */

/* WARNING: Possible PIC construction at 0x00010241f8e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010241f8f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241f8ec) */
/* WARNING: Removing unreachable block (ram,0x00010241f8fc) */

void FUN_10241f8d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10241f90c; end: 10241fa3b;  */

undefined8 * FUN_10241f90c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  uVar3 = param_2[8];
  param_1[8] = uVar3;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 10241fa3c; end: 10241faaf;  */

undefined8 * FUN_10241fa3c(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  return param_1;
}



/* Entry: 10241fab0; end: 10241fb5b;  */

int FUN_10241fab0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x13] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10241fb5c; end: 10241fbab;  */

void FUN_10241fb5c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e97f80 != 0) {
    return;
  }
  puVar1 = &UNK_1105046f8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e97f80 = param_1;
  return;
}



/* Entry: 10241fbac; end: 10241fbdb;  */

void FUN_10241fbac(long param_1,long param_2)

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



/* Entry: 10241fbdc; end: 10241fc17;  */

void FUN_10241fbdc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10241fc18; end: 10241fc23;  */

void FUN_10241fc18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10241fc24; end: 10241fd33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10241fc24(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083868);
  puVar1 = &UNK_110504718;
  func_0x000107c613fc(&UNK_110504718,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112e97f88,&UNK_10daa33b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  pcVar2 = FUN_10241fd34;
  func_0x0001000bdd8c(FUN_10241fd34,puVar1);
  uVar3 = 0;
  FUN_1024253b0(0);
  func_0x000107c610f8();
  func_0x0001024252f4(pcVar2,uVar3);
  func_0x000107c61170(uVar4);
  return pcVar2;
}



/* Entry: 10241fd34; end: 10241fd3b;  */

void FUN_10241fd34(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10241eba0(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  FUN_10241d5a8();
  *param_1 = uVar1;
  return;
}



/* Entry: 10241fd3c; end: 10241fd57;  */

/* WARNING: Possible PIC construction at 0x00010241fd48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010241fd4c) */

void FUN_10241fd3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10241fd58; end: 10241fda3;  */

void FUN_10241fd58(void)

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



/* Entry: 10241fda4; end: 10241fe1f;  */

void FUN_10241fda4(undefined8 param_1)

{
  if (lRam0000000112e97fb8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d6518);
  return;
}



/* Entry: 10241fe20; end: 10241fef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10241fe20(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083868);
  puVar1 = &UNK_110504740;
  func_0x000107c613fc(&UNK_110504740,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112e97f88,&UNK_10daa33b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  pcVar2 = FUN_10241fef4;
  func_0x0001000bdd8c(FUN_10241fef4,puVar1);
  uVar3 = 0;
  FUN_1024253b0(0);
  func_0x000107c610f8();
  func_0x0001024252f4(pcVar2,uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10241fef4; end: 10241fef7;  */

void FUN_10241fef4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10241eba0(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  FUN_10241d5a8();
  *param_1 = uVar1;
  return;
}



/* Entry: 10241fef8; end: 10242014f;  */

void FUN_10241fef8(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  if (param_1 != 0) {
    lVar6 = param_2;
    func_0x000107c40c54();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c40d14();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5faec(lVar1);
        func_0x000107c61170(lVar1);
        if (param_2 != 0) {
          func_0x000107c615f0(param_2);
          func_0x000107c5fadc(lVar2,lVar6);
          func_0x000107c6142c(lVar6);
          uVar3 = 0;
          FUN_102420df4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          func_0x000107c5ffdc();
          puVar4 = &UNK_110504990;
          func_0x000107c613fc(&UNK_110504990,0x20,7);
          *(code **)(puVar4 + 0x10) = param_3;
          *(undefined8 *)(puVar4 + 0x18) = param_4;
          uStack_50 = 0x102420e8c;
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0x42000000;
          puStack_60 = &UNK_101043a98;
          puStack_58 = &UNK_1105049a8;
          puStack_48 = puVar4;
          func_0x000107c60bc4(&puStack_70);
          puVar4 = puStack_48;
          func_0x000107c6157c(param_4);
          func_0x000107c61574(puVar4);
          func_0x000107c5b49c(param_2);
          func_0x000107c60bd0(ppuVar5);
          func_0x000107c615e8(param_2);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(uVar3);
          return;
        }
        func_0x000107c6142c(lVar6);
      }
    }
  }
  (*param_3)(0,0xe000000000000000);
  return;
}



/* Entry: 102420150; end: 10242015b; -[_TtC44ComposerSendToStoryOnboardingServiceProvider45ComposerSendToOnboardingStoryMetadataProvider getStoryCreatorNameWithStoryId:callback:] */

void FUN_102420150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c61174(param_1);
  FUN_102420804(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10242015c; end: 102420233;  */

void FUN_10242015c(long param_1,long param_2,long param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    lVar3 = param_2;
    func_0x000107c40c54();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c40d14();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        if ((lVar2 == param_2) && (lVar3 == param_3)) {
          uVar4 = 1;
        }
        else {
          func_0x000107c605b8(lVar2,lVar3,param_2,param_3,0);
          uVar4 = (uint)lVar2;
        }
        func_0x000107c6142c(lVar3);
        goto LAB_102420214;
      }
    }
  }
  uVar4 = 0;
LAB_102420214:
  (*param_4)(uVar4 & 1);
  return;
}



/* Entry: 102420234; end: 10242023f; -[_TtC44ComposerSendToStoryOnboardingServiceProvider45ComposerSendToOnboardingStoryMetadataProvider isUserCreatorOfStoryWithStoryId:callback:] */

void FUN_102420234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x1024209f0)(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102420240; end: 10242040b;  */

/* WARNING: Possible PIC construction at 0x000102420320: Changing call to branch */

void FUN_102420240(undefined *param_1,code *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar7 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar7 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar7 = param_1;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar7 != (undefined *)0x0) {
    puVar5 = (undefined *)((ulong)puVar7 & ((long)puVar7 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,puVar5,0);
    if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10242040c);
      (*pcVar3)();
    }
    puVar8 = (undefined *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        puVar4 = *(undefined **)(param_1 + (long)puVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar8;
        puVar5 = param_1;
        func_0x00010103193c();
      }
      puVar9 = puVar4;
      func_0x000107c42120();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
        puVar9 = puVar4;
        func_0x000107c5db08();
        func_0x000107c61180();
        if (puVar9 != (undefined *)0x0) {
          puVar10 = puVar9;
          func_0x000107c5faec();
          puVar6 = puVar5;
          func_0x000107c61170(puVar4);
          puVar4 = puVar9;
          puVar9 = puVar5;
          goto LAB_102420354;
        }
        func_0x000107c61170(puVar4);
        puVar10 = (undefined *)0x0;
        puVar9 = (undefined *)0xe000000000000000;
      }
      else {
        puVar10 = puVar9;
        func_0x000107c5faec();
        puVar6 = puVar5;
        func_0x000107c61170(puVar9);
        uVar1 = (ulong)puVar10 & 0xffffffffffff;
        if (((ulong)puVar5 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)puVar5 >> 0x38 & 0xf;
        }
        puVar9 = puVar5;
        if (uVar1 == 0) goto code_r0x000107c6142c;
LAB_102420354:
        func_0x000107c61170(puVar4);
        puVar5 = puVar6;
      }
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puVar4 = (undefined *)(uVar1 + 1);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        puVar5 = puVar4;
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),puVar4,1);
      }
      puVar8 = puVar8 + 1;
      *(undefined **)(puVar2 + 0x10) = puVar4;
      *(undefined **)(puVar2 + uVar1 * 0x10 + 0x20) = puVar10;
      *(undefined **)(puVar2 + uVar1 * 0x10 + 0x28) = puVar9;
    } while (puVar7 != puVar8);
  }
  (*param_2)(puVar2);
  puVar5 = puVar2;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar5);
  return;
}



/* Entry: 10242040c; end: 102420477;  */

void FUN_10242040c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_102420df4(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102420478; end: 102420483; -[_TtC44ComposerSendToStoryOnboardingServiceProvider45ComposerSendToOnboardingStoryMetadataProvider getBlockedSnapchattersInStoryWithStoryId:callback:] */

void FUN_102420478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c61174(param_1);
  FUN_102420bd4(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102420484; end: 102420517;  */

void FUN_102420484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102420518; end: 1024206cf;  */

/* WARNING: Possible PIC construction at 0x000102420584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102420634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102420644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102420654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024206a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010242067c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102420658) */
/* WARNING: Removing unreachable block (ram,0x000102420648) */
/* WARNING: Removing unreachable block (ram,0x000102420638) */
/* WARNING: Removing unreachable block (ram,0x000102420588) */
/* WARNING: Removing unreachable block (ram,0x000102420680) */
/* WARNING: Removing unreachable block (ram,0x00010242058c) */
/* WARNING: Removing unreachable block (ram,0x000102420678) */
/* WARNING: Removing unreachable block (ram,0x0001024205a0) */
/* WARNING: Removing unreachable block (ram,0x0001024205b8) */
/* WARNING: Removing unreachable block (ram,0x00010242069c) */
/* WARNING: Removing unreachable block (ram,0x0001024206a0) */
/* WARNING: Removing unreachable block (ram,0x0001024205d8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001024206ac) */
/* WARNING: Removing unreachable block (ram,0x0001024206b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102420518(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e98068);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c41140(lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1024206d0; end: 10242072b; -[_TtC44ComposerSendToStoryOnboardingServiceProvider45ComposerSendToOnboardingStoryMetadataProvider addSharedStoryBlockExceptionsWithStoryId:] */

void FUN_1024206d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102420518(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10242072c; end: 10242078b; -[_TtC44ComposerSendToStoryOnboardingServiceProvider45ComposerSendToOnboardingStoryMetadataProvider init] */

void FUN_10242072c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSendToStoryOnboardingServiceProvider.ComposerSendToOnboardingStoryMetadataProvider"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102420758);
  (*pcVar1)();
}



/* Entry: 10242078c; end: 1024207e3; -[_TtC44ComposerSendToStoryOnboardingServiceProvider45ComposerSendToOnboardingStoryMetadataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024207a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024207c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024207ac) */
/* WARNING: Removing unreachable block (ram,0x0001024207cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242078c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e98068));
  return;
}



/* Entry: 1024207e4; end: 102420803;  */

void FUN_1024207e4(void)

{
  func_0x000107c61168(&PTR_PTR_11283d368);
  return;
}



/* Entry: 102420804; end: 102420bd3;  */

/* WARNING: Possible PIC construction at 0x000102420984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102420988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102420804(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = &UNK_110504918;
  func_0x000107c613fc(&UNK_110504918,0x18,7);
  *(long *)(puVar1 + 0x10) = param_4;
  lVar5 = *(long *)(param_3 + _DAT_112e98068);
  func_0x000107c60bc4(param_4);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c5fadc();
    (**(code **)(param_4 + 0x10))(param_4,lVar5);
    func_0x000107c61574(puVar1);
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + _DAT_112e98080);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5fadc(param_1,param_2);
    FUN_102420df4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar3 = &UNK_110504940;
    func_0x000107c613fc(&UNK_110504940,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar2;
    *(code **)(puVar3 + 0x18) = FUN_102420e48;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    pcStack_60 = FUN_102420e80;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1012f2a74;
    puStack_68 = &UNK_110504958;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c615f0(uVar2);
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c41138(lVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar5);
    func_0x000107c615e8(uVar2);
    lVar5 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 102420bd4; end: 102420d8f;  */

/* WARNING: Possible PIC construction at 0x000102420d20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102420d24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102420bd4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = &UNK_110504828;
  func_0x000107c613fc(&UNK_110504828,0x18,7);
  *(long *)(puVar1 + 0x10) = param_4;
  lVar4 = *(long *)(param_3 + _DAT_112e98068);
  func_0x000107c60bc4(param_4);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    (**(code **)(param_4 + 0x10))(param_4,param_1);
    func_0x000107c61574(puVar1);
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    FUN_102420df4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar2 = &UNK_110504850;
    func_0x000107c613fc(&UNK_110504850,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_102420d90;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    pcStack_50 = FUN_102420dd0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_10242040c;
    puStack_58 = &UNK_110504868;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c5aa3c(lVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102420d90; end: 102420dcf;  */

void FUN_102420d90(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102420dd0; end: 102420df3;  */

/* WARNING: Possible PIC construction at 0x000102420320: Changing call to branch */

void FUN_102420dd0(undefined *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  pcVar3 = *(code **)(unaff_x20 + 0x10);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar7 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar7 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar7 = param_1;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar7 != (undefined *)0x0) {
    puVar5 = (undefined *)((ulong)puVar7 & ((long)puVar7 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,puVar5,0);
    if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10242040c);
      (*pcVar3)();
    }
    puVar8 = (undefined *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        puVar4 = *(undefined **)(param_1 + (long)puVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar8;
        puVar5 = param_1;
        func_0x00010103193c();
      }
      puVar9 = puVar4;
      func_0x000107c42120();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
        puVar9 = puVar4;
        func_0x000107c5db08();
        func_0x000107c61180();
        if (puVar9 != (undefined *)0x0) {
          puVar10 = puVar9;
          func_0x000107c5faec();
          puVar6 = puVar5;
          func_0x000107c61170(puVar4);
          puVar4 = puVar9;
          puVar9 = puVar5;
          goto LAB_102420354;
        }
        func_0x000107c61170(puVar4);
        puVar10 = (undefined *)0x0;
        puVar9 = (undefined *)0xe000000000000000;
      }
      else {
        puVar10 = puVar9;
        func_0x000107c5faec();
        puVar6 = puVar5;
        func_0x000107c61170(puVar9);
        uVar1 = (ulong)puVar10 & 0xffffffffffff;
        if (((ulong)puVar5 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)puVar5 >> 0x38 & 0xf;
        }
        puVar9 = puVar5;
        if (uVar1 == 0) goto code_r0x000107c6142c;
LAB_102420354:
        func_0x000107c61170(puVar4);
        puVar5 = puVar6;
      }
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puVar4 = (undefined *)(uVar1 + 1);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        puVar5 = puVar4;
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),puVar4,1);
      }
      puVar8 = puVar8 + 1;
      *(undefined **)(puVar2 + 0x10) = puVar4;
      *(undefined **)(puVar2 + uVar1 * 0x10 + 0x20) = puVar10;
      *(undefined **)(puVar2 + uVar1 * 0x10 + 0x28) = puVar9;
    } while (puVar7 != puVar8);
  }
  (*pcVar3)(puVar2);
  puVar5 = puVar2;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar5);
  return;
}



/* Entry: 102420df4; end: 102420e33;  */

void FUN_102420df4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102420e34; end: 102420e47;  */

void FUN_102420e34(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102421b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102420e48; end: 102420e7f;  */

void FUN_102420e48(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102420e80; end: 102420eab;  */

void FUN_102420e80(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar7 = &puStack_70;
  if (param_1 != 0) {
    lVar8 = lVar1;
    func_0x000107c40c54();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar3 = param_1;
      func_0x000107c40d14();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        if (lVar1 != 0) {
          func_0x000107c615f0(lVar1);
          func_0x000107c5fadc(lVar4,lVar8);
          func_0x000107c6142c(lVar8);
          uVar5 = 0;
          FUN_102420df4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          func_0x000107c5ffdc();
          puVar6 = &UNK_110504990;
          func_0x000107c613fc(&UNK_110504990,0x20,7);
          *(code **)(puVar6 + 0x10) = pcVar2;
          *(undefined8 *)(puVar6 + 0x18) = uVar9;
          uStack_50 = 0x102420e8c;
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0x42000000;
          puStack_60 = &UNK_101043a98;
          puStack_58 = &UNK_1105049a8;
          puStack_48 = puVar6;
          func_0x000107c60bc4(&puStack_70);
          puVar6 = puStack_48;
          func_0x000107c6157c(uVar9);
          func_0x000107c61574(puVar6);
          func_0x000107c5b49c(lVar1);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(uVar5);
          return;
        }
        func_0x000107c6142c(lVar8);
      }
    }
  }
  (*pcVar2)(0,0xe000000000000000);
  return;
}



/* Entry: 102420eac; end: 102420f27; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager hasSeenPrivateStoryIntroWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102420eac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c42180();
    func_0x000107c615e8(lVar1);
  }
  (**(code **)(param_3 + 0x10))(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102420f28; end: 102420f7f; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setPrivateStoryIntroSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102420f28(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c54264();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102420f80; end: 102420ffb; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager hasSeenCustomStoryIntroWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102420f80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c42178();
    func_0x000107c615e8(lVar1);
  }
  (**(code **)(param_3 + 0x10))(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102420ffc; end: 102421053; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setCustomStoryIntroSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102420ffc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5425c();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102421054; end: 1024210cf; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager hasSeenCommunityStoryIntroWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102421054(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c42174();
    func_0x000107c615e8(lVar1);
  }
  (**(code **)(param_3 + 0x10))(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024210d0; end: 102421127; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setCommunityStoryIntroSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024210d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c54258();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102421128; end: 1024211b3; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager hasSeenOurStoryIntroWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102421128(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b8);
  if (lVar1 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4a490();
      func_0x000107c615e8(lVar1);
      goto LAB_102421190;
    }
  }
  lVar2 = 1;
LAB_102421190:
  (**(code **)(param_3 + 0x10))(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024211b4; end: 10242121b; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setOurStoryIntroSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024211b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c59400();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10242121c; end: 1024212a7; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager hasSeenOurStoryAttributionWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242121c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980c0);
  if (lVar1 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c44ad4();
      func_0x000107c615e8(lVar1);
      goto LAB_102421284;
    }
  }
  lVar2 = 1;
LAB_102421284:
  (**(code **)(param_3 + 0x10))(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024212a8; end: 10242130f; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setOurStoryAttributionSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024212a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980c0);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c58dbc();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102421310; end: 10242138b; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager hasSeenCustomStoryWithBlockedUsersIntroWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102421310(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4217c();
    func_0x000107c615e8(lVar1);
  }
  (**(code **)(param_3 + 0x10))(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10242138c; end: 1024213e3; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setCustomStoryWithBlockedUsersIntroSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242138c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c54260();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024213e4; end: 10242145f; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager hasSeenSharedStoryTrustAndSafetyWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024213e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5aa54();
    func_0x000107c615e8(lVar1);
  }
  (**(code **)(param_3 + 0x10))(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102421460; end: 1024214b7; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setSharedStoryTrustAndSafetySeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102421460(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c590a0();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024214b8; end: 102421543; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager isSpotlightOnboardingCompleteWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024214b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b8);
  if (lVar1 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4a4f8();
      func_0x000107c615e8(lVar1);
      goto LAB_102421520;
    }
  }
  lVar2 = 1;
LAB_102421520:
  (**(code **)(param_3 + 0x10))(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102421544; end: 1024215ab; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setSpotlightOnboardingComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102421544(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c59740();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1024215ac; end: 102421637; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager hasSeenSpotlightTermsUpdatedWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024215ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112e980b8);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar1 = lVar3;
      func_0x000107c5adb0();
      func_0x000107c615e8(lVar3);
      uVar2 = (uint)lVar1 ^ 1;
      goto LAB_102421618;
    }
  }
  uVar2 = 1;
LAB_102421618:
  (**(code **)(param_3 + 0x10))(param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102421638; end: 10242169b; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setSpotlightTermsUpdatedSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102421638(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980b8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c3ced0();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10242169c; end: 102421727; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager hasSeenSpotlightAttributionWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242169c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980c0);
  if (lVar1 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c44adc();
      func_0x000107c615e8(lVar1);
      goto LAB_102421704;
    }
  }
  lVar2 = 1;
LAB_102421704:
  (**(code **)(param_3 + 0x10))(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102421728; end: 10242178f; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setSpotlightAttributionSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102421728(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e980c0);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c58dc4();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102421790; end: 10242181f; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager shouldShowAutosaveToMemoriesWithCallback:] */

/* WARNING: Possible PIC construction at 0x0001024217f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024217f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102421790(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112e980c8);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    lVar1 = lVar2;
    func_0x000108e00d7c();
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102421820; end: 102421937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102421820(double param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112e980c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c4d8f4();
    if (0xfffffffffffffffe < uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10242192c);
      (*pcVar1)();
    }
    func_0x000107c56b98(uVar3);
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102421930);
      (*pcVar1)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102421934);
      (*pcVar1)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102421938);
      (*pcVar1)();
    }
    func_0x000107c55aa0(uVar3);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 102421938; end: 1024219df; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setAutosaveToMemoriesSeen] */

void FUN_102421938(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102421820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024219e0; end: 102421a07; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager setAutosaveToMemoriesEnabled] */

void FUN_1024219e0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102421960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102421a08; end: 102421a67; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager init] */

void FUN_102421a08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSendToStoryOnboardingServiceProvider.ComposerSendToOnboardingStoryOnboardingManager"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102421a34);
  (*pcVar1)();
}



/* Entry: 102421a68; end: 102421acf; -[_TtC44ComposerSendToStoryOnboardingServiceProvider46ComposerSendToOnboardingStoryOnboardingManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102421a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102421aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102421a88) */
/* WARNING: Removing unreachable block (ram,0x000102421aa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102421a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e980b0));
  return;
}



/* Entry: 102421ad0; end: 102421aef;  */

void FUN_102421ad0(void)

{
  func_0x000107c61168(&PTR_PTR_11283d440);
  return;
}



/* Entry: 102421af0; end: 102421b03;  */

void FUN_102421af0(uint param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000102421b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,param_1 & 1);
  return;
}



/* Entry: 102421b04; end: 102421f27;  */

void FUN_102421b04(undefined1 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  pcVar1 = 
  "presentPublicProfileAttributionNuxWith(forSpotlight:isFriendsOnlyProfile:onComplete:onCancel:onDisplayFallback:)"
  ;
  func_0x0001000c10c0(
                     "presentPublicProfileAttributionNuxWith(forSpotlight:isFriendsOnlyProfile:onComplete:onCancel:onDisplayFallback:)"
                     );
  func_0x000107c61180();
  puVar2 = &UNK_1105049f0;
  func_0x000107c613fc(&UNK_1105049f0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110504ba8;
  func_0x000107c613fc(&UNK_110504ba8,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_7;
  *(undefined8 *)(puVar3 + 0x20) = param_8;
  puVar3[0x28] = param_1;
  puVar3[0x29] = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  *(undefined8 *)(puVar3 + 0x40) = param_5;
  *(undefined8 *)(puVar3 + 0x48) = param_6;
  pcStack_70 = FUN_10242286c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110504bc0;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102421f28; end: 10242215f; -[_TtC44ComposerSendToStoryOnboardingServiceProvider38ComposerSendToStoryOnboardingPresenter presentPublicProfileAttributionNuxWithForSpotlight:isFriendsOnlyProfile:onComplete:onCancel:onDisplayFallback:] */

/* WARNING: Possible PIC construction at 0x000102422014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102422018) */

void FUN_102421f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_110504b30;
  func_0x000107c613fc(&UNK_110504b30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_110504b58;
  func_0x000107c613fc(&UNK_110504b58,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  puVar3 = &UNK_110504b80;
  func_0x000107c613fc(&UNK_110504b80,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  func_0x000107c61174(param_1);
  FUN_102421b04(param_3,param_4,0x102422960,puVar1,FUN_102422860,puVar2,0x102422964,puVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102422160; end: 102422333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102422160(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    lVar4 = *(long *)(param_1 + _DAT_112e98100);
    if (lVar4 == 0) {
      (*param_2)(0);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112e98110);
      uVar5 = *(undefined8 *)(param_1 + _DAT_112e98108);
      func_0x00010431a6f8(0);
      func_0x000107c610f8();
      func_0x000107c615f0(lVar4);
      func_0x000107c61174();
      func_0x000107c61174(uVar5);
      func_0x00010431a194(uVar3,uVar5);
      puVar1 = &UNK_110504ae0;
      func_0x000107c613fc(&UNK_110504ae0,0x28,7);
      *(undefined8 *)(puVar1 + 0x10) = uVar3;
      *(code **)(puVar1 + 0x18) = param_2;
      *(undefined8 *)(puVar1 + 0x20) = param_3;
      puVar2 = &UNK_110504b08;
      func_0x000107c613fc(&UNK_110504b08,0x28,7);
      *(undefined8 *)(puVar2 + 0x10) = uVar3;
      *(code **)(puVar2 + 0x18) = param_2;
      *(undefined8 *)(puVar2 + 0x20) = param_3;
      func_0x000107c61174(uVar3);
      func_0x000107c61580(param_3,2);
      func_0x000107c61174(uVar3);
      func_0x0001043197f8(param_4,param_5,lVar4,FUN_1024227e8,puVar1,0x102422824,puVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(puVar2);
      func_0x00010431a288(param_4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(param_4);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102422334; end: 1024225d7; -[_TtC44ComposerSendToStoryOnboardingServiceProvider38ComposerSendToStoryOnboardingPresenter presentBusinessProfileOnboardingWithStoryId:onComplete:] */

void FUN_102422334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_110504a68;
  func_0x000107c613fc(&UNK_110504a68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  func_0x00010242203c(param_3,param_2,0x1024227c4,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1024225d8; end: 102422633; -[_TtC44ComposerSendToStoryOnboardingServiceProvider38ComposerSendToStoryOnboardingPresenter openStoryDetailsWithStoryId:] */

void FUN_1024225d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x0001024223d4(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}


