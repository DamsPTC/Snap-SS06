/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bb5fd4; end: 100bb5fd7;  */

void FUN_100bb5fd4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100bb5fd8; end: 100bb6247;  */

void FUN_100bb5fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  FUN_1000285a8(0x112e31d98,&UNK_10da1aff0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  FUN_10025a71c();
  puVar2 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a9650;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f014ad0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar6);
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f014b00);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f014b20);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb6248);
  (*pcVar1)();
}



/* Entry: 100bb6248; end: 100bb6267;  */

void FUN_100bb6248(void)

{
  func_0x000107c61168(&PTR_PTR_112934b90);
  return;
}



/* Entry: 100bb6268; end: 100bb6407; -[SCSnapDocOperaPageResolverEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6268(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272be88);
  puVar2 = PTR_PTR_1126bfe08;
  func_0x000107c610f4(PTR_PTR_1126bfe08);
  func_0x000107c48780();
  func_0x000107c42c20(uVar5);
  func_0x000107c61170(puVar2);
  lVar3 = param_1 + _DAT_11272be8c;
  func_0x000107c61148();
  lVar4 = lVar3;
  func_0x000107c3ecf4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272be90);
  func_0x000107c61174(puVar1);
  func_0x000107c42c14(uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 100bb6408; end: 100bb664f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6408(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar3 = _DAT_113080d88;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  *(undefined **)(unaff_x20 + _DAT_113080d98) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar3 = _DAT_113080d00;
  uVar2 = 0x113080ca0;
  FUN_1000285a8(0x113080ca0,&UNK_10dd0cb40);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  lVar1 = _DAT_113080d10;
  lVar3 = 0x113080ca8;
  FUN_1000285a8(0x113080ca8,&UNK_10dd0cb08);
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(long *)(unaff_x20 + lVar1) = lVar4;
  lVar1 = _DAT_113080d20;
  uVar2 = 0x113080cb0;
  FUN_1000285a8(0x113080cb0,&UNK_10dd0cb50);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_113080d30;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x000107c5f1f0();
  *(long *)(unaff_x20 + lVar1) = lVar3;
  lVar3 = _DAT_113080d38;
  uVar2 = 0x113080cb8;
  FUN_1000285a8(0x113080cb8,&UNK_10dd0cb10);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  lVar3 = _DAT_113080d48;
  uVar2 = 0x113080cc0;
  FUN_1000285a8(0x113080cc0,&UNK_10dd0cb60);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  lVar3 = _DAT_113080d58;
  uVar2 = 0x113080cc8;
  FUN_1000285a8(0x113080cc8,&UNK_10dd0cb18);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  lVar3 = _DAT_113080d68;
  uVar2 = 0x113080cd0;
  FUN_1000285a8(0x113080cd0,&UNK_10dd0cb70);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  lVar3 = _DAT_113080d78;
  uVar2 = 0x113080cd8;
  FUN_1000285a8(0x113080cd8,&UNK_10dd0cb20);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  FUN_100bb7f50();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bb6650; end: 100bb666f; -[SCLensDataFetcherListenerAnnouncer init] */

void FUN_100bb6650(void)

{
  FUN_100bb6408();
  return;
}



/* Entry: 100bb6670; end: 100bb66c7; -[_TtC29SCSnapDocPageResolverServices34SCSnapDocOperaPageResolverServices initWithSnapDocOperaPageResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6670(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff07e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100bb66c8; end: 100bb6727; -[_TtC29SCSnapDocPageResolverServices46SCDefaultSnapDocPageResolverPluginSaberService buildSaberPlugins] */

void FUN_100bb66c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bb6728();
  func_0x000107c61170(param_1);
  uVar2 = 0x112ff07a0;
  FUN_1000285a8(0x112ff07a0,&UNK_10dc5ade0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100bb6728; end: 100bb682f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6728(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  
  FUN_10008a7c8(&lStack_40);
  if (lStack_40 != 0) {
    FUN_100083b20(&lStack_38);
    func_0x000107c61574(lStack_40);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_38 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61550();
      if (((ulong)puVar3 >> 0x3e != 0) || (((ulong)puVar2 & 1) == 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar2 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar2 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar2 = puVar3;
          }
          func_0x000107c60480(puVar2);
        }
        puVar3 = (undefined *)0x0;
        FUN_100bb68dc(0,puVar2 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar4 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_100bb68dc(uVar4,uVar1 + 1,1,puVar3);
        uVar4 = uVar4 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      *(long *)(uVar4 + uVar1 * 8 + 0x20) = lStack_38;
    }
  }
  return;
}



/* Entry: 100bb6830; end: 100bb68db;  */

void FUN_100bb6830(void)

{
  FUN_1000285a8(0x112dfa420,&UNK_10d9cc2c0);
  FUN_1000823a8(0x100bb68ac,0);
  return;
}



/* Entry: 100bb68dc; end: 100bb6a03;  */

ulong FUN_100bb68dc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb6a04);
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
  FUN_100bb6a18(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb6a00);
      (*pcVar1)();
    }
    FUN_100bb6a98(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 100bb6a04; end: 100bb6a17;  */

void FUN_100bb6a04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff07a8 == (undefined *)0x0 || ((ulong)puRam0000000112ff07a8 & 1) != 0) {
    puVar1 = &UNK_10e9c28e0;
    func_0x000107c61518(&UNK_10e9c28e0,0x29,0,0);
    puRam0000000112ff07a8 = puVar1;
  }
  return;
}



/* Entry: 100bb6a18; end: 100bb6a97;  */

undefined * FUN_100bb6a18(undefined *param_1,undefined *param_2)

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
    FUN_100bb6a04();
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



/* Entry: 100bb6a98; end: 100bb6bbb;  */

long FUN_100bb6a98(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100bb6bb8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100bb6bbc);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ff07a0;
        FUN_1000285a8(0x112ff07a0,&UNK_10dc5ade0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ff07a0;
      FUN_1000285a8(0x112ff07a0,&UNK_10dc5ade0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100bb6bb4);
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



/* Entry: 100bb6bbc; end: 100bb6bbf;  */

void FUN_100bb6bbc(long param_1,long param_2)

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



/* Entry: 100bb6bc0; end: 100bb6c0b;  */

void FUN_100bb6bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bfe10;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  func_0x000107c47f70();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bb6c0c; end: 100bb6c63; -[SCDefaultSnapDocPageResolverScope initWithPlugInRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff07b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100bb6c64; end: 100bb6d03; -[SCCameraAttachmentOperaPageResolverPlugInEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100bb6ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb6cdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb6cac) */
/* WARNING: Removing unreachable block (ram,0x000100bb6ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6c64(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127290a4;
    func_0x000107c61148(param_1);
  }
  func_0x000107c4e2b8(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bb6d04; end: 100bb6d23; -[_TtC32SCAdsSnapDocOperaPageResolverApi43SCCameraAttachmentOperaPageResolverServices pagePropertiesResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6d04(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fef2e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb6d24; end: 100bb6d33; -[SCDefaultSnapDocPageResolverScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff07b0));
  return;
}



/* Entry: 100bb6d34; end: 100bb6ebb;  */

void FUN_100bb6d34(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_2);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6f8;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6f8);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar3 = uVar2;
  FUN_1007f98b8();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(ppuVar1);
  puVar4 = PTR_PTR_1126b29b8;
  if ((int)uVar3 == 2) {
    func_0x000107c42b14(PTR_PTR_1126b29b8);
    func_0x000107c61180();
  }
  else if ((int)uVar3 == 1) {
    func_0x000107c43a64();
    func_0x000107c61180();
  }
  else {
    func_0x000107c5d26c();
    func_0x000107c61180();
  }
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf710;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf710);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  FUN_1008184bc();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(ppuVar1);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf728;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf728);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  FUN_1008184bc();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(ppuVar1);
  puVar5 = PTR_PTR_1126b29c0;
  func_0x000107c610f4(PTR_PTR_1126b29c0);
  func_0x000107c493dc();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100bb6ebc; end: 100bb6f2f; -[SCCommerceSnapDocPagePropertiesResolverEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100bb6f10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb6f14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6ebc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + _DAT_112712cc8;
  func_0x000107c61148(param_1);
  func_0x000107c4e9e4();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126b05f0;
  func_0x000107c61160(PTR_PTR_1126b05f0);
  func_0x000107c4fba8(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100bb6f30; end: 100bb6fa3; -[SCSCNGSMESnapDocResolverServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6f30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fced68,0);
  func_0x000107c61614(param_1 + _DAT_112fced70,0);
  *(undefined8 *)(param_1 + _DAT_112fced78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bb6fa4; end: 100bb704f; -[SCSCNGSMESnapDocResolverServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100bb6fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bb7050(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bb7050; end: 100bb71e7;  */

void FUN_100bb7050(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e75510)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f18aaf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MeActiveUserSessionScopeGraphBridge/SCSCNGSMESnapDocResolverServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb71e8);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c563c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bb71e8; end: 100bb71f3; -[SCSCNGSMESnapDocResolverServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb71e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fced68;
  func_0x000107c61428(param_1 + _DAT_112fced68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bb71f4; end: 100bb7247;  */

void FUN_100bb71f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bb7248; end: 100bb7253; -[SCSCNGSMESnapDocResolverServicesSaberServiceProvider setMeActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7248(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fced70;
  func_0x000107c61428(param_1 + _DAT_112fced70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bb7254; end: 100bb7287; -[SCSCNGSMESnapDocResolverServicesSaberServiceProvider __safeProvide] */

void FUN_100bb7254(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bb7288();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bb7288; end: 100bb736f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7288(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4c910();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bb73cc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fce550);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fced78);
      *(long *)(unaff_x20 + _DAT_112fced78) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bb7370; end: 100bb737b; -[SCSCNGSMESnapDocResolverServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7370(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fced68;
  func_0x000107c61428(param_1 + _DAT_112fced68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb737c; end: 100bb73bf;  */

void FUN_100bb737c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bb73c0; end: 100bb73cb; -[SCSCNGSMESnapDocResolverServicesSaberServiceProvider meActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb73c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fced70;
  func_0x000107c61428(param_1 + _DAT_112fced70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb73cc; end: 100bb74ab;  */

void FUN_100bb73cc(undefined8 param_1)

{
  if (lRam0000000112fcdf60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e79d940);
  return;
}



/* Entry: 100bb74ac; end: 100bb74b7; +[SCLensScheduleNamespaceDataModel table] */

undefined * FUN_100bb74ac(void)

{
  return &UNK_10f6d58a9;
}



/* Entry: 100bb74b8; end: 100bb752b; -[SCSCMemoriesSnapRendererServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb74b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fcebe8,0);
  func_0x000107c61614(param_1 + _DAT_112fcebf0,0);
  *(undefined8 *)(param_1 + _DAT_112fcebf8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bb752c; end: 100bb75d7; -[SCSCMemoriesSnapRendererServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100bb752c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bb75d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bb75d8; end: 100bb776f;  */

void FUN_100bb75d8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e75510)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f18aaf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MeActiveUserSessionScopeGraphBridge/SCSCMemoriesSnapRendererServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb7770);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c563c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bb7770; end: 100bb777b; -[SCSCMemoriesSnapRendererServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7770(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcebe8;
  func_0x000107c61428(param_1 + _DAT_112fcebe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bb777c; end: 100bb77cf;  */

void FUN_100bb777c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bb77d0; end: 100bb77db; -[SCSCMemoriesSnapRendererServicesSaberServiceProvider setMeActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb77d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcebf0;
  func_0x000107c61428(param_1 + _DAT_112fcebf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bb77dc; end: 100bb780f; -[SCSCMemoriesSnapRendererServicesSaberServiceProvider __safeProvide] */

void FUN_100bb77dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bb7810();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bb7810; end: 100bb78f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7810(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4c910();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bb7954();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fce540);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fcebf8);
      *(long *)(unaff_x20 + _DAT_112fcebf8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bb78f8; end: 100bb7903; -[SCSCMemoriesSnapRendererServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb78f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcebe8;
  func_0x000107c61428(param_1 + _DAT_112fcebe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb7904; end: 100bb7947;  */

void FUN_100bb7904(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bb7948; end: 100bb7953; -[SCSCMemoriesSnapRendererServicesSaberServiceProvider meActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7948(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcebf0;
  func_0x000107c61428(param_1 + _DAT_112fcebf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb7954; end: 100bb79cf;  */

void FUN_100bb7954(undefined8 param_1)

{
  if (lRam0000000112fcddc0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e79d878);
  return;
}



/* Entry: 100bb79d0; end: 100bb7a43; -[SCMemoriesLiveRenderingMetricsRecorderSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb79d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fce768,0);
  func_0x000107c61614(param_1 + _DAT_112fce770,0);
  *(undefined8 *)(param_1 + _DAT_112fce778) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bb7a44; end: 100bb7aef; -[SCMemoriesLiveRenderingMetricsRecorderSaberServiceProvider setValue:forIvarName:] */

void FUN_100bb7a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bb7af0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bb7af0; end: 100bb7c87;  */

void FUN_100bb7af0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e75510)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f18aaf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MeActiveUserSessionScopeGraphBridge/SCMemoriesLiveRenderingMetricsRecorderSaberServiceProvider.swift"
                            ,100,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb7c88);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c563c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bb7c88; end: 100bb7c93; -[SCMemoriesLiveRenderingMetricsRecorderSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fce768;
  func_0x000107c61428(param_1 + _DAT_112fce768,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bb7c94; end: 100bb7ce7;  */

void FUN_100bb7c94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bb7ce8; end: 100bb7cf3; -[SCMemoriesLiveRenderingMetricsRecorderSaberServiceProvider setMeActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fce770;
  func_0x000107c61428(param_1 + _DAT_112fce770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bb7cf4; end: 100bb7d27; -[SCMemoriesLiveRenderingMetricsRecorderSaberServiceProvider __safeProvide] */

void FUN_100bb7cf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bb7d28();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bb7d28; end: 100bb7e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7d28(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4c910();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bb7e6c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fce500);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fce778);
      *(long *)(unaff_x20 + _DAT_112fce778) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bb7e10; end: 100bb7e1b; -[SCMemoriesLiveRenderingMetricsRecorderSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7e10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fce768;
  func_0x000107c61428(param_1 + _DAT_112fce768,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb7e1c; end: 100bb7e5f;  */

void FUN_100bb7e1c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bb7e60; end: 100bb7e6b; -[SCMemoriesLiveRenderingMetricsRecorderSaberServiceProvider meActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7e60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fce770;
  func_0x000107c61428(param_1 + _DAT_112fce770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb7e6c; end: 100bb7ee7;  */

void FUN_100bb7e6c(undefined8 param_1)

{
  if (lRam0000000112fcd8e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e79d620);
  return;
}



/* Entry: 100bb7ee8; end: 100bb7f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7ee8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_10028c024();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112fcf2b0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 100bb7f50; end: 100bb7f6f;  */

void FUN_100bb7f50(void)

{
  func_0x000107c61168(&PTR_PTR_1129c4260);
  return;
}



/* Entry: 100bb7f70; end: 100bb807f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb7f70(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar3 = _DAT_113080df0;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  *(undefined **)(unaff_x20 + _DAT_113080df8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_113080dc8;
  lVar3 = 0x113080ce0;
  FUN_1000285a8(0x113080ce0,&UNK_10dd0cbe0);
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(long *)(unaff_x20 + lVar1) = lVar4;
  lVar1 = _DAT_113080dd8;
  uVar2 = 0x113080ce8;
  FUN_1000285a8(0x113080ce8,&UNK_10dd0cb28);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_113080de8;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x000107c5f1f0();
  *(long *)(unaff_x20 + lVar1) = lVar3;
  func_0x000100bb86a4();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bb8080; end: 100bb809f; -[SCLensDataFetcherProgressListenerAnnouncer init] */

void FUN_100bb8080(void)

{
  FUN_100bb7f70();
  return;
}



/* Entry: 100bb80a0; end: 100bb812f; -[SCUserSnapContactsPrivacy initWithUserSnapPrivacy:allowInMyContactOnboarded:allowInMyContactEnabled:] */

undefined1 *
FUN_100bb80a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e0f8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bb8130; end: 100bb8153; -[SCUserSnapPrivacy copyWithZone:] */

undefined8 FUN_100bb8130(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bb8154; end: 100bb82b7; -[SCNGSMEMemoriesOperaResolverEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100bb81c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb81d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb8248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb8258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb8290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb825c) */
/* WARNING: Removing unreachable block (ram,0x000100bb824c) */
/* WARNING: Removing unreachable block (ram,0x000100bb81d8) */
/* WARNING: Removing unreachable block (ram,0x000100bb81c8) */
/* WARNING: Removing unreachable block (ram,0x000100bb8294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb8154(long param_1)

{
  param_1 = param_1 + _DAT_11271f8e0;
  func_0x000107c61148(param_1);
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c3de48();
  func_0x000107c61180();
  func_0x000107c3ebd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bb82b8; end: 100bb82ff;  */

/* WARNING: Possible PIC construction at 0x000100bb82ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb82f0) */

void FUN_100bb82b8(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c25c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bb8300; end: 100bb8417; -[SCChatEligibilityProvider _refreshUserSnapContactsPrivacy:] */

/* WARNING: Possible PIC construction at 0x000100bb8374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb8384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb83d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb83b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb839c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb83d4) */
/* WARNING: Removing unreachable block (ram,0x000100bb8388) */
/* WARNING: Removing unreachable block (ram,0x000100bb83b4) */
/* WARNING: Removing unreachable block (ram,0x000100bb838c) */
/* WARNING: Removing unreachable block (ram,0x000100bb8378) */
/* WARNING: Removing unreachable block (ram,0x000100bb83a0) */
/* WARNING: Removing unreachable block (ram,0x000100bb83e4) */

void FUN_100bb8300(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x48);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x000107c4dfe8();
  func_0x000107c61180();
  func_0x000107c61174(lVar1);
  func_0x000107c61174(param_3);
  if (lVar1 == param_3) {
    func_0x000107c61170(param_3);
  }
  else if (param_3 != 0) {
    func_0x000107c49cec(lVar1,param_2,param_3);
    lVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100bb8418; end: 100bb841f; -[SCChatEligibilityProvider _announceUpdateWithReason:] */

void FUN_100bb8418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_next__112614028);
  return;
}



/* Entry: 100bb8420; end: 100bb8427; -[SCNGSMESnapDocResolverServices ngsmeSnapDocResolver] */

undefined8 FUN_100bb8420(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bb8428; end: 100bb8537; -[SCNGSMEMemoriesSnapDocResolver initWithNGSMESnapDocResolver:memoriesSnapRendererServices:liveRenderingEnabled:liveRenderingMetricsRecorder:] */

undefined1 *
FUN_100bb8428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126e6ec8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bb8538; end: 100bb855f; -[SCChatEligibilityProvider eligibilityUpdates] */

void FUN_100bb8538(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bb8560; end: 100bb8687; -[SCFriendsFeedDataCoordinator _subscribeToPlayedStoryIdsObservable] */

void FUN_100bb8560(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4e97c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100bb8688; end: 100bb86c3;  */

void FUN_100bb8688(void)

{
  func_0x000107c61160(PTR_PTR_1126be880);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb86c4; end: 100bb8747; -[SCStoryReplayManager init] */

undefined1 * FUN_100bb86c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea590;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100bb8748; end: 100bb889f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb8748(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar3 = _DAT_113080e60;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  *(undefined **)(unaff_x20 + _DAT_113080e68) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar3 = _DAT_113080e28;
  uVar2 = 0x113080cf0;
  FUN_1000285a8(0x113080cf0,&UNK_10dd0cc20);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  lVar1 = _DAT_113080e38;
  lVar3 = 0x113080cf8;
  FUN_1000285a8(0x113080cf8,&UNK_10dd0cb30);
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(long *)(unaff_x20 + lVar1) = lVar4;
  lVar1 = _DAT_113080e48;
  lVar4 = lVar3;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x000107c5f1f0();
  *(long *)(unaff_x20 + lVar1) = lVar4;
  lVar1 = _DAT_113080e50;
  lVar4 = lVar3;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x000107c5f1f0();
  *(long *)(unaff_x20 + lVar1) = lVar4;
  lVar1 = _DAT_113080e58;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x000107c5f1f0();
  *(long *)(unaff_x20 + lVar1) = lVar3;
  func_0x000100bb8af0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bb88a0; end: 100bb88bf; -[SCLensDataFetcherEventsListenerAnnouncer init] */

void FUN_100bb88a0(void)

{
  FUN_100bb8748();
  return;
}



/* Entry: 100bb88c0; end: 100bb890f; -[SCStoryReplayManager playedStoryIdsObservable] */

void FUN_100bb88c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c61160(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x000107c5bc40(uVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100bb8910; end: 100bb8937; -[SCFriendsFeedNativeDataProvider startInitialLoad] */

void FUN_100bb8910(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100bb8938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bb8938; end: 100bb8ab3;  */

/* WARNING: Possible PIC construction at 0x000100bb8988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb898c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb8938(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f14418);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c43ad0();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 100bb8ab4; end: 100bb8ac3;  */

void FUN_100bb8ab4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bb8ac4; end: 100bb8b0f;  */

void FUN_100bb8ac4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bb8b10; end: 100bb8b6b; -[SCLensDataFetchingImmediateLoadingQueueFactory warmupLoadingQueue] */

void FUN_100bb8b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbb38;
  func_0x000107c610f4(PTR_PTR_1126bbb38);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5e104(uVar2);
  func_0x000107c61180();
  func_0x000107c4726c(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bb8b6c; end: 100bb8b87; -[SCLensDataFetchingStrategyFactory warmupStrategy] */

void FUN_100bb8b6c(void)

{
  func_0x000107c61160(PTR_PTR_1126df948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb8b88; end: 100bb8c37; -[SCLensImmediateLoadingQueue initWithLensDataFetchingStrategy:] */

undefined1 * FUN_100bb8b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127059d8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bb8c38; end: 100bb8c93; -[SCLensDataFetchingImmediateLoadingQueueFactory lensContentLoadingQueue] */

void FUN_100bb8c38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbb38;
  func_0x000107c610f4(PTR_PTR_1126bbb38);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4afe8(uVar2);
  func_0x000107c61180();
  func_0x000107c4726c(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bb8c94; end: 100bb8d17; -[SCLensDataFetchingStrategyFactory lensContentStrategy] */

void FUN_100bb8c94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126df950;
  func_0x000107c610f4(PTR_PTR_1126df950);
  uVar2 = param_1;
  func_0x000107c415d0(param_1);
  func_0x000107c61180();
  func_0x000107c4b02c(param_1);
  func_0x000107c61180();
  func_0x000107c47268(puVar1,param_2,uVar2,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bb8d18; end: 100bb8ddb; -[SCLensDataFetchingStrategyFactory defaultLensContentDataFethingHelper] */

void FUN_100bb8d18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 == 0) {
    puVar6 = PTR_PTR_1126dfa50;
    func_0x000107c610f4();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    uVar10 = *(undefined8 *)(param_1 + 8);
    lVar8 = param_1;
    func_0x000107c4ed3c();
    func_0x000107c4687c(puVar6,param_2,uVar1,uVar3,uVar2,uVar4,uVar7,uVar5,uVar9,uVar10,(char)lVar8)
    ;
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar6;
    func_0x000107c61170(uVar7);
    lVar8 = *(long *)(param_1 + 0x38);
  }
  func_0x000107c61174(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 100bb8ddc; end: 100bb8e2b; -[SCLensDataFetchingStrategyFactory prefetchOnWWANInBackgroundEnabled] */

uint FUN_100bb8ddc(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x000107c4ae10();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4a748(lVar1);
    uVar3 = (uint)lVar2 ^ 1;
  }
  func_0x000107c61170(lVar1);
  return uVar3;
}



/* Entry: 100bb8e2c; end: 100bb8edf; -[SCLensDataConfigProvider lensBackgroundPrefetchConfig] */

void FUN_100bb8e2c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4f558();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126bc058;
    func_0x000107c610f4(PTR_PTR_1126bc058);
    func_0x000107c4636c();
  }
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100bb8ee0; end: 100bb8ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb8ee0(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar8 = *param_1;
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
  lVar2 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61428(lVar7 + 0x10,auStack_80,0,0);
    uVar1 = *(undefined1 *)(lVar7 + 0x10);
    uVar9 = *(undefined8 *)(lVar2 + _DAT_112f14448);
    puVar3 = &UNK_1105cc750;
    func_0x000107c613fc(&UNK_1105cc750,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar2);
    puVar4 = &UNK_1105cc7a0;
    func_0x000107c613fc(&UNK_1105cc7a0,0x21,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar8;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar4[0x20] = uVar1;
    pcStack_90 = FUN_100bc09b0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_1000f6b44;
    puStack_98 = &UNK_1105cc7b8;
    ppuVar5 = &puStack_b0;
    puStack_88 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_88;
    func_0x000107c61174(uVar8);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar9);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(lVar7 + 0x10,&puStack_b0,0,0);
  if (*(char *)(lVar7 + 0x10) == '\x01') {
    func_0x000107c61428(lVar7 + 0x10,auStack_c8,1,0);
    *(undefined1 *)(lVar7 + 0x10) = 0;
    func_0x000107c61428(lVar6 + 0x10,auStack_e0,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + _DAT_112f14418);
      func_0x000107c61174();
      func_0x000107c61170(lVar6);
      lVar2 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar2 != 0) {
        func_0x000107c4f6ac(lVar2);
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 100bb8ee8; end: 100bb90d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb8ee8(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar7 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
    uVar1 = *(undefined1 *)(param_3 + 0x10);
    uVar8 = *(undefined8 *)(lVar2 + _DAT_112f14448);
    puVar3 = &UNK_1105cc750;
    func_0x000107c613fc(&UNK_1105cc750,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar2);
    puVar4 = &UNK_1105cc7a0;
    func_0x000107c613fc(&UNK_1105cc7a0,0x21,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar7;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar4[0x20] = uVar1;
    pcStack_90 = FUN_100bc09b0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_1000f6b44;
    puStack_98 = &UNK_1105cc7b8;
    ppuVar5 = &puStack_b0;
    puStack_88 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_88;
    func_0x000107c61174(uVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar8);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_3 + 0x10,&puStack_b0,0,0);
  if (*(char *)(param_3 + 0x10) == '\x01') {
    func_0x000107c61428(param_3 + 0x10,auStack_c8,1,0);
    *(undefined1 *)(param_3 + 0x10) = 0;
    func_0x000107c61428(param_2 + 0x10,auStack_e0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar6 = *(long *)(param_2 + _DAT_112f14418);
      func_0x000107c61174();
      func_0x000107c61170(param_2);
      lVar2 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar2 != 0) {
        func_0x000107c4f6ac(lVar2);
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 100bb90d4; end: 100bb90e7;  */

void FUN_100bb90d4(long param_1,long param_2)

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



/* Entry: 100bb90e8; end: 100bb9143; -[SCFriendsFeedEntryStore purgeFetchContexts] */

/* WARNING: Possible PIC construction at 0x000100bb912c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb9130) */

void FUN_100bb90e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c611e8(param_1 + 0x5c);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c40808(uVar2);
  FUN_100bb9144(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bb9144; end: 100bb91bb;  */

void FUN_100bb9144(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110928660,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 100bb91bc; end: 100bb91e3; -[SCFriendsFeedNativeMultiRecipientDataProvider startInitialLoad] */

void FUN_100bb91bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100bb91e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bb91e4; end: 100bb9337;  */

/* WARNING: Possible PIC construction at 0x000100bb9230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb9284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb9234) */
/* WARNING: Removing unreachable block (ram,0x000100bb9288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb91e4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f144d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c43ad0();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 100bb9338; end: 100bb935b;  */

void FUN_100bb9338(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bb935c; end: 100bb93c3; +[BackgroundPrefetchConfig descriptor] */

void FUN_100bb935c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb28b0,
                        &PTR____CFConstantStringClassReference_110df0a98,&PTR_DAT_1133c8e80,
                        &PTR_s_enabled_1133c8e98,0xc,0x20,0x1c);
    puRam00000001137f8ee8 = puVar1;
  }
  return;
}



/* Entry: 100bb93c4; end: 100bb94b7; -[SCFriendsFeedDataCoordinator _observeDidEnterBackgroundObservable] */

void FUN_100bb93c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x000107c4da8c(uVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}


