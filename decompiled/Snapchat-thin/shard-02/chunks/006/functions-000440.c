/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101feb294; end: 101feb2a7;  */

void FUN_101feb294(void)

{
  return;
}



/* Entry: 101feb2a8; end: 101feb2c7;  */

void FUN_101feb2a8(void)

{
  func_0x000107c61168(&PTR_PTR_112e4db50);
  return;
}



/* Entry: 101feb2c8; end: 101feb2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101feb2c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x18) != 0) {
      func_0x000107c6157c(*(long *)(lVar2 + 0x18));
      func_0x000107c61574(lVar2);
      func_0x000101feb388(uVar1,*(undefined8 *)(param_1 + _DAT_112fe6710),
                          *(undefined8 *)(param_1 + _DAT_112fe6718),
                          ((undefined8 *)(param_1 + _DAT_112fe6718))[1]);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101feb2f0; end: 101feb5d7;  */

void FUN_101feb2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  return;
}



/* Entry: 101feb5d8; end: 101feb83b;  */

void FUN_101feb5d8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *in_x6;
  undefined8 in_x7;
  long lVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if ((param_2 == 0) && (param_1 != 0)) {
      lVar7 = *(long *)(param_3 + 0x58);
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 != 0) {
        lVar1 = lVar7;
        func_0x000101feb98c();
        func_0x000107c613fc();
        *(undefined8 *)(lVar1 + 0x18) = 3;
        *(undefined8 *)(lVar1 + 0x10) = 1;
        *(long *)(lVar1 + 0x20) = param_1;
        uVar2 = 0;
        func_0x000101feba24(0,0x112e0fd70,&PTR_PTR_1126c2098);
        func_0x000107c61174(param_1);
        lVar3 = lVar1;
        func_0x000107c5fc48(lVar1,uVar2);
        func_0x000107c61574(lVar1);
        func_0x000107c5d63c(lVar7);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(lVar3);
      }
      lVar7 = *(long *)(param_3 + 0x60);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 != 0) {
        puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar5 = puVar4;
        func_0x000107c5f9dc();
        func_0x000107c6142c(puVar4);
        puVar4 = &UNK_1104b76c0;
        func_0x000107c613fc(&UNK_1104b76c0,0x20,7);
        *(code **)(puVar4 + 0x10) = in_x6;
        *(undefined8 *)(puVar4 + 0x18) = in_x7;
        uStack_78 = 0x101feb9f8;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_1000f3aa0;
        puStack_80 = &UNK_1104b76d8;
        ppuVar6 = &puStack_98;
        puStack_70 = puVar4;
        func_0x000107c60bc4();
        puVar4 = puStack_70;
        func_0x000107c6157c(in_x7);
        func_0x000107c61574(puVar4);
        func_0x000107c4ed24(lVar7);
        func_0x000107c61170(param_1);
        func_0x000107c61574(param_3);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(puVar5);
        return;
      }
      func_0x000107c61170(param_1);
    }
    else {
      (*in_x6)(1);
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 101feb83c; end: 101feb8b3;  */

/* WARNING: Possible PIC construction at 0x000101feb898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101feb89c) */

void FUN_101feb83c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101feb8b4; end: 101feb93f;  */

void FUN_101feb8b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101feb940; end: 101feb96b;  */

void FUN_101feb940(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if ((param_2 == 0) && (param_1 != 0)) {
      lVar10 = *(long *)(lVar3 + 0x58);
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 != 0) {
        lVar4 = lVar10;
        func_0x000101feb98c();
        func_0x000107c613fc();
        *(undefined8 *)(lVar4 + 0x18) = 3;
        *(undefined8 *)(lVar4 + 0x10) = 1;
        *(long *)(lVar4 + 0x20) = param_1;
        uVar5 = 0;
        func_0x000101feba24(0,0x112e0fd70,&PTR_PTR_1126c2098);
        func_0x000107c61174(param_1);
        lVar6 = lVar4;
        func_0x000107c5fc48(lVar4,uVar5);
        func_0x000107c61574(lVar4);
        func_0x000107c5d63c(lVar10);
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(lVar6);
      }
      lVar10 = *(long *)(lVar3 + 0x60);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 != 0) {
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar8 = puVar7;
        func_0x000107c5f9dc();
        func_0x000107c6142c(puVar7);
        puVar7 = &UNK_1104b76c0;
        func_0x000107c613fc(&UNK_1104b76c0,0x20,7);
        *(code **)(puVar7 + 0x10) = pcVar1;
        *(undefined8 *)(puVar7 + 0x18) = uVar2;
        uStack_78 = 0x101feb9f8;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_1000f3aa0;
        puStack_80 = &UNK_1104b76d8;
        ppuVar9 = &puStack_98;
        puStack_70 = puVar7;
        func_0x000107c60bc4();
        puVar7 = puStack_70;
        func_0x000107c6157c(uVar2);
        func_0x000107c61574(puVar7);
        func_0x000107c4ed24(lVar10);
        func_0x000107c61170(param_1);
        func_0x000107c61574(lVar3);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(puVar8);
        return;
      }
      func_0x000107c61170(param_1);
    }
    else {
      (*pcVar1)(1);
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 101feb96c; end: 101feb9f7;  */

void FUN_101feb96c(void)

{
  func_0x000107c61168(&PTR_PTR_112e4dc00);
  return;
}



/* Entry: 101feb9f8; end: 101feba63;  */

void FUN_101feb9f8(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if ((param_1 & 1) == 0) {
    uVar1 = 2;
  }
  (**(code **)(unaff_x20 + 0x10))(uVar1);
  return;
}



/* Entry: 101feba64; end: 101feba6b;  */

void FUN_101feba64(long param_1,long param_2)

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



/* Entry: 101feba6c; end: 101febad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101feba6c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101febe5c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4dcd0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101febad4; end: 101febb1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101febad4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4dcd0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101febb20; end: 101febc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101febb20(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  func_0x00010431b3a0();
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    func_0x000107c6142c(param_1);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar8 = 0x20;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uStack_61 = *(undefined1 *)(param_1 + lVar8);
      func_0x00010008a7c8(&lStack_60,&uStack_61);
      lVar2 = lStack_60;
      if (lStack_60 != 0) {
        func_0x000100083b20(&lStack_58);
        func_0x000107c61574(lVar2);
        lVar2 = lStack_58;
        if (lStack_58 != 0) {
          puVar4 = puVar5;
          func_0x000107c61550();
          if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
             (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar5 >> 0x3e == 0) {
              puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar5) {
                puVar3 = puVar5;
              }
              func_0x000107c60480(puVar3);
            }
            puVar4 = (undefined *)0x0;
            FUN_101febd24(0,puVar3 + 1,1,puVar5);
          }
          uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar6 + 0x10);
          puVar5 = puVar4;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
            FUN_101febd24(puVar5,uVar1 + 1,1,puVar4);
            uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
          *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    func_0x000107c6142c(param_1);
  }
  return puVar5;
}



/* Entry: 101febc80; end: 101febcdf; -[_TtC49DiscoverFeedSectionExtensionServiceImplementation54DiscoverFeedSectionExtensionSaberServiceImplementation buildSaberPlugins] */

void FUN_101febc80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101febb20();
  func_0x000107c61170(param_1);
  uVar2 = 0x112e4dd00;
  func_0x0001000285a8(0x112e4dd00,&UNK_10da48bb8);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101febce0; end: 101febd13;  */

void FUN_101febce0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101febd14; end: 101febd23; -[_TtC49DiscoverFeedSectionExtensionServiceImplementation54DiscoverFeedSectionExtensionSaberServiceImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101febd14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4dcd0));
  return;
}



/* Entry: 101febd24; end: 101febe4b;  */

ulong FUN_101febd24(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101febe4c);
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
  FUN_101febe7c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101febe48);
      (*pcVar1)();
    }
    FUN_101febefc(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101febe4c; end: 101febe5b;  */

undefined1  [16] FUN_101febe4c(void)

{
  return ZEXT816(0x1104b7798);
}



/* Entry: 101febe5c; end: 101febe7b;  */

void FUN_101febe5c(void)

{
  func_0x000107c61168(&PTR_PTR_112813e48);
  return;
}



/* Entry: 101febe7c; end: 101febefb;  */

undefined * FUN_101febe7c(undefined *param_1,undefined *param_2)

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
    FUN_101fec020();
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



/* Entry: 101febefc; end: 101fec01f;  */

long FUN_101febefc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101fec01c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101fec020);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e4dd00;
        func_0x0001000285a8(0x112e4dd00,&UNK_10da48bb8);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e4dd00;
      func_0x0001000285a8(0x112e4dd00,&UNK_10da48bb8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101fec018);
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



/* Entry: 101fec020; end: 101fec033;  */

void FUN_101fec020(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4dd08 == (undefined *)0x0 || ((ulong)puRam0000000112e4dd08 & 1) != 0) {
    puVar1 = &UNK_10e8d2414;
    func_0x000107c61518(&UNK_10e8d2414,0x2b,0,0);
    puRam0000000112e4dd08 = puVar1;
  }
  return;
}



/* Entry: 101fec034; end: 101fec3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fec034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(&puStack_a8);
  puVar2 = puStack_a8;
  func_0x000107c4cfc4();
  func_0x000107c61180();
  func_0x000107c61170(puStack_a8);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c5c734(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000100083b20(auStack_70);
    uVar4 = auStack_70[0];
    func_0x000107c43980();
    func_0x000107c61180();
    func_0x000107c61170(auStack_70[0]);
    func_0x000100083b20(&uStack_78);
    uVar5 = uStack_78;
    func_0x000107c3e550();
    func_0x000107c61180();
    func_0x000107c61170(uStack_78);
    func_0x000107c5fadc(param_1,param_2);
    uVar6 = 0;
    FUN_101fec808(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar2 = &UNK_1104b78d0;
    func_0x000107c613fc(&UNK_1104b78d0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_5;
    *(undefined8 *)(puVar2 + 0x18) = param_6;
    pcStack_88 = FUN_101fec69c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101feb83c;
    puStack_90 = &UNK_1104b78e8;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar2;
    func_0x000107c60bc4();
    puVar8 = puStack_80;
    func_0x000107c6157c(param_6);
    func_0x000107c61574();
    func_0x000100083b20(&puStack_a8);
    puVar2 = puStack_a8;
    func_0x0001003d1364();
    func_0x000107c61170(puVar2);
    func_0x000100083b20(&uStack_b0);
    uVar9 = uStack_b0;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(uStack_b0);
    func_0x000100083b20(&uStack_b8);
    uVar10 = uStack_b8;
    func_0x000107c5b4b0();
    func_0x000107c61180();
    func_0x000107c61170(uStack_b8);
    func_0x000100083b20(&lStack_c0);
    uVar11 = *(undefined8 *)(lStack_c0 + _DAT_113080ad0);
    func_0x000107c61174();
    func_0x000107c61170();
    func_0x000100083b20(&uStack_c8);
    lVar12 = lStack_c0;
    func_0x00010040e098();
    func_0x000107c61170(uStack_c8);
    func_0x00010846f16c(puVar3,5,param_3,uVar4,uVar5,param_1,0,uVar6,ppuVar7,puVar8,uVar9,uVar10,
                        uVar11,0,lVar12);
    func_0x000107c61170(puVar8);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(lVar12);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fec3a4);
  (*pcVar1)();
}



/* Entry: 101fec3a4; end: 101fec473; -[_TtC45SCDiscoverFeedEngagementLookupServiceProvider40DiscoverFeedEngagementMetadataLookupImpl fetchEngagementMetadataForCompositeStoryId:requestSource:completion:] */

void FUN_101fec3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  puVar1 = &UNK_1104b78a8;
  func_0x000107c613fc(&UNK_1104b78a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_101fec034(param_3,param_2,param_4,uVar2,0x101fec68c,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101fec474; end: 101fec4a7;  */

void FUN_101fec474(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fec4a8; end: 101fec53f; -[_TtC45SCDiscoverFeedEngagementLookupServiceProvider40DiscoverFeedEngagementMetadataLookupImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fec4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fec4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fec504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fec524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fec508) */
/* WARNING: Removing unreachable block (ram,0x000101fec4e8) */
/* WARNING: Removing unreachable block (ram,0x000101fec4c8) */
/* WARNING: Removing unreachable block (ram,0x000101fec528) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fec4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4dd18));
  return;
}



/* Entry: 101fec540; end: 101fec65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fec540(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar11 = &lStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  FUN_101fec65c();
  lVar10 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112e4dd18) = uVar1;
  *(undefined8 *)(lVar10 + _DAT_112e4dd20) = uVar5;
  *(undefined8 *)(lVar10 + _DAT_112e4dd28) = uVar2;
  *(undefined8 *)(lVar10 + _DAT_112e4dd30) = uVar6;
  *(undefined8 *)(lVar10 + _DAT_112e4dd38) = uVar3;
  *(undefined8 *)(lVar10 + _DAT_112e4dd40) = uVar7;
  *(undefined8 *)(lVar10 + _DAT_112e4dd48) = uVar4;
  *(undefined8 *)(lVar10 + _DAT_112e4dd50) = uVar8;
  puVar9 = PTR_s_init_1125d9248;
  lStack_70 = lVar10;
  lStack_68 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c61154(&lStack_70,puVar9);
  *param_1 = plVar11;
  return;
}



/* Entry: 101fec65c; end: 101fec67b;  */

void FUN_101fec65c(void)

{
  func_0x000107c61168(&PTR_PTR_112813f08);
  return;
}



/* Entry: 101fec67c; end: 101fec69b;  */

undefined1  [16] FUN_101fec67c(void)

{
  return ZEXT816(0x1104b7888);
}



/* Entry: 101fec69c; end: 101fec7eb;  */

/* WARNING: Possible PIC construction at 0x000101fec6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fec724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fec7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fec7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fec728) */
/* WARNING: Removing unreachable block (ram,0x000101fec774) */
/* WARNING: Removing unreachable block (ram,0x000101fec77c) */
/* WARNING: Removing unreachable block (ram,0x000101fec730) */
/* WARNING: Removing unreachable block (ram,0x000101fec788) */
/* WARNING: Removing unreachable block (ram,0x000101fec73c) */
/* WARNING: Removing unreachable block (ram,0x000101fec7d8) */
/* WARNING: Removing unreachable block (ram,0x000101fec744) */
/* WARNING: Removing unreachable block (ram,0x000101fec7e8) */
/* WARNING: Removing unreachable block (ram,0x000101fec750) */
/* WARNING: Removing unreachable block (ram,0x000101fec758) */
/* WARNING: Removing unreachable block (ram,0x000101fec78c) */
/* WARNING: Removing unreachable block (ram,0x000101fec6e0) */
/* WARNING: Removing unreachable block (ram,0x000101fec76c) */
/* WARNING: Removing unreachable block (ram,0x000101fec6e4) */
/* WARNING: Removing unreachable block (ram,0x000101fec7c0) */

void FUN_101fec69c(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x000107c5bfc4();
  func_0x000107c61180();
  if (param_1 == 0) {
    (*pcVar1)(0);
    param_1 = 0;
  }
  else {
    func_0x000107c2bcc4();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fec7ec; end: 101fec807;  */

void FUN_101fec7ec(long param_1,long param_2)

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



/* Entry: 101fec808; end: 101fec847;  */

void FUN_101fec808(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101fec848; end: 101fec857;  */

undefined1  [16] FUN_101fec848(void)

{
  return ZEXT816(0x1104b7a50);
}



/* Entry: 101fec858; end: 101fec913;  */

void FUN_101fec858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b7af8;
  func_0x000107c613fc(&UNK_1104b7af8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_101fec914,puVar1);
  return;
}



/* Entry: 101fec914; end: 101feca67;  */

void FUN_101fec914(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000a0a8c(0);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1104b7bd8;
  func_0x000107c613fc(&UNK_1104b7bd8,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar8;
  uStack_70 = 0x101fecf50;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104b7bf0;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar6 = puVar5;
  func_0x000100a0dc54(puVar5,0xd00000000000001d,0x800000010f052d00);
  func_0x000107c61170(puVar5);
  *param_1 = puVar6;
  return;
}



/* Entry: 101feca68; end: 101fecb23;  */

void FUN_101feca68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b7b20;
  func_0x000107c613fc(&UNK_1104b7b20,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_101fecb24,puVar1);
  return;
}



/* Entry: 101fecb24; end: 101fecd27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fecb24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000100083b20(&puStack_90);
  plVar6 = *(long **)(puStack_90 + _DAT_11302e640);
  func_0x000107c61174();
  func_0x000107c61170(puStack_90);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (plVar6 != (long *)0x0) {
    func_0x000103733ae0();
    plVar7 = plVar6;
    func_0x000107c497f8();
    if (0 < (long)plVar7) {
      func_0x000103733b8c();
      plVar7 = plVar6;
      func_0x000107c497f8();
      plVar8 = plVar7;
      func_0x000103f1b530();
      if (*plVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101fecd28);
        (*pcVar5)();
      }
      if (*plVar8 < (long)plVar7) {
        func_0x0001000a0a8c();
        puVar9 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        puVar12 = &UNK_1104b7b88;
        func_0x000107c613fc(&UNK_1104b7b88,0x38,7);
        *(undefined8 *)(puVar12 + 0x10) = uVar1;
        *(undefined8 *)(puVar12 + 0x18) = uVar3;
        *(undefined8 *)(puVar12 + 0x20) = uVar2;
        *(undefined8 *)(puVar12 + 0x28) = uVar11;
        *(undefined8 *)(puVar12 + 0x30) = uVar4;
        uStack_70 = 0x101fecd48;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_101443eec;
        puStack_78 = &UNK_1104b7ba0;
        ppuVar10 = &puStack_90;
        puStack_68 = puVar12;
        func_0x000107c60bc4(ppuVar10);
        puVar12 = puStack_68;
        func_0x000107c6157c(uVar1);
        func_0x000107c6157c(uVar3);
        func_0x000107c6157c(uVar2);
        func_0x000107c6157c(uVar11);
        func_0x000107c6157c(uVar4);
        func_0x000107c61574(puVar12);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        puVar12 = puVar9;
        func_0x000100a0dc54(puVar9,0xd00000000000001d,0x800000010f052ce0);
        func_0x000107c615e8(plVar6);
        func_0x000107c61170(puVar9);
        goto LAB_101fecd00;
      }
    }
    func_0x000107c615e8(plVar6);
  }
  puVar12 = (undefined *)0x0;
LAB_101fecd00:
  *param_1 = puVar12;
  return;
}



/* Entry: 101fecd28; end: 101fecd67;  */

undefined1  [16] FUN_101fecd28(void)

{
  return ZEXT816(0x1104b7b48);
}



/* Entry: 101fecd68; end: 101fecdab;  */

void FUN_101fecd68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fecdac; end: 101fecf47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fecdac(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&lStack_78);
  func_0x000100083b20(&lStack_80);
  func_0x000100083b20(&uStack_88);
  uVar2 = uStack_70;
  func_0x000107c4ac3c(uStack_70);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(lStack_78 + _DAT_11302ce60);
  uVar6 = *(undefined8 *)(lStack_80 + _DAT_11302e640);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar6);
  uVar4 = uStack_88;
  func_0x000107c3fa04(uStack_88);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126d1558;
  func_0x000107c610f8();
  func_0x000107c48964();
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(uStack_88);
    func_0x000107c61170(lStack_80);
    func_0x000107c61170(lStack_78);
    func_0x000107c61170(uStack_70);
    func_0x000107c61170(uStack_68);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fecf48);
  (*pcVar1)();
}



/* Entry: 101fecf48; end: 101fecf53;  */

void FUN_101fecf48(long param_1,long param_2)

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



/* Entry: 101fecf54; end: 101fed01b;  */

void FUN_101fecf54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b7ca8;
  func_0x000107c613fc(&UNK_1104b7ca8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_101fed01c,puVar1);
  return;
}



/* Entry: 101fed01c; end: 101fed27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fed01c(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  uVar3 = *(ulong *)(lStack_68 + _DAT_11302e640);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5bf2c();
    func_0x000107c615e8(uVar3);
    if ((uVar4 & 1) != 0) {
      func_0x000100083b20(&lStack_68);
      uVar5 = *(undefined8 *)(lStack_68 + _DAT_113091ad8);
      func_0x000107c61174(uVar5);
      func_0x000107c61170(lStack_68);
      func_0x000100083b20(&uStack_70);
      uVar6 = uStack_70;
      func_0x000107c5bf44(uStack_70);
      func_0x000107c61180();
      func_0x000107c61170(uStack_70);
      func_0x000100083b20(&uStack_78);
      uVar7 = uStack_78;
      func_0x000107c5bf64(uStack_78);
      func_0x000107c61180();
      func_0x000107c61170(uStack_78);
      func_0x000100083b20(&uStack_80);
      uVar8 = uStack_80;
      func_0x000107c5bf94(uStack_80);
      func_0x000107c61180();
      func_0x000107c61170(uStack_80);
      func_0x000100083b20(&uStack_88);
      uVar9 = uStack_88;
      func_0x000107c3fa04(uStack_88);
      func_0x000107c61180();
      func_0x000107c61170(uStack_88);
      func_0x000100083b20(&lStack_90);
      uVar12 = *(undefined8 *)(lStack_90 + _DAT_11307d3e0);
      func_0x000107c615f0(uVar12);
      func_0x000107c61170(lStack_90);
      puVar10 = PTR_PTR_1126a9d68;
      func_0x000107c610f8();
      func_0x000107c4939c();
      func_0x000107c615e8(uVar12);
      func_0x000107c615e8(uVar9);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101fed280);
        (*pcVar2)();
      }
      func_0x0001000a0a8c(0);
      func_0x000107c61174();
      puVar11 = puVar10;
      func_0x000104494b00();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar1);
      goto LAB_101fed258;
    }
  }
  func_0x000107c61170(lVar1);
  puVar11 = (undefined *)0x0;
LAB_101fed258:
  *param_1 = puVar11;
  return;
}



/* Entry: 101fed280; end: 101fed28f;  */

undefined1  [16] FUN_101fed280(void)

{
  return ZEXT816(0x1104b7cd0);
}



/* Entry: 101fed290; end: 101fed2fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fed290(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101fed684();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4dd88) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101fed2fc; end: 101fed367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fed2fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4dd88) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fed368; end: 101fed3c7; -[_TtC47CustomStoryCreationScopedFactoryServiceProvider35SCCustomStoryCreationScopedServices init] */

void FUN_101fed368(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryCreationScopedFactoryServiceProvider.SCCustomStoryCreationScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fed394);
  (*pcVar1)();
}



/* Entry: 101fed3c8; end: 101fed3d7; -[_TtC47CustomStoryCreationScopedFactoryServiceProvider35SCCustomStoryCreationScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fed3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4dd88));
  return;
}



/* Entry: 101fed3d8; end: 101fed443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fed3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b7ea8;
  func_0x000107c613fc(&UNK_1104b7ea8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101fed71c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101fed444; end: 101fed4df;  */

void FUN_101fed444(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104b7db8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b7db8;
  return;
}



/* Entry: 101fed4e0; end: 101fed517;  */

void FUN_101fed4e0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101fed518; end: 101fed51f;  */

undefined8 FUN_101fed518(void)

{
  return 0x1b;
}



/* Entry: 101fed520; end: 101fed653;  */

void FUN_101fed520(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104b7ed0;
  func_0x000107c613fc(&UNK_1104b7ed0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fed6f4;
  func_0x00010058fa64(FUN_101fed6f4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fed654; end: 101fed683;  */

undefined ** FUN_101fed654(void)

{
  return &PTR_DAT_112ff1898;
}



/* Entry: 101fed684; end: 101fed6a3;  */

void FUN_101fed684(void)

{
  func_0x000107c61168(&PTR_PTR_112814000);
  return;
}



/* Entry: 101fed6a4; end: 101fed6f3;  */

undefined1  [16] FUN_101fed6a4(void)

{
  return ZEXT816(0x1104b7e08);
}



/* Entry: 101fed6f4; end: 101fed71b;  */

void FUN_101fed6f4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101fed71c; end: 101fed71f;  */

void FUN_101fed71c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101fed720; end: 101fed833;  */

/* WARNING: Possible PIC construction at 0x000101fed7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fed7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fed800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fed810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fed804) */
/* WARNING: Removing unreachable block (ram,0x000101fed7f4) */
/* WARNING: Removing unreachable block (ram,0x000101fed7e4) */
/* WARNING: Removing unreachable block (ram,0x000101fed814) */

void FUN_101fed720(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104b7f58;
  func_0x000107c613fc(&UNK_1104b7f58,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  uVar2 = 0x112e4ddf8;
  func_0x0001000285a8(0x112e4ddf8,&UNK_10da48fd8);
  func_0x000107c613fc();
  uVar3 = 0x101fedd04;
  func_0x0001000841fc(0x101fedd04,puVar1,uVar2);
  func_0x000100084214(&UNK_10da48fa0,0x31,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101fed834; end: 101fed857;  */

/* WARNING: Possible PIC construction at 0x000101fed7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fed7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fed800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fed810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fed804) */
/* WARNING: Removing unreachable block (ram,0x000101fed7f4) */
/* WARNING: Removing unreachable block (ram,0x000101fed7e4) */
/* WARNING: Removing unreachable block (ram,0x000101fed814) */

void FUN_101fed834(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_1104b7f58;
  func_0x000107c613fc(&UNK_1104b7f58,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112e4ddf8;
  func_0x0001000285a8(0x112e4ddf8,&UNK_10da48fd8);
  func_0x000107c613fc();
  uVar9 = 0x101fedd04;
  func_0x0001000841fc(0x101fedd04,puVar7,uVar8);
  func_0x000100084214(&UNK_10da48fa0,0x31,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101fed858; end: 101fedca7;  */

void FUN_101fed858(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112e4de00,&UNK_10da48fe0);
  puVar1 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000101fef7d8();
  pcVar3 = "SCRecipientPickerScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCRecipientPickerScopeExposerSubjectServiceProvider",0x33,2);
  FUN_101fef824();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar4 = puVar2;
  FUN_101fef818();
  func_0x000100082720("SCRecipientPickerScopeExposerObservableServiceProvider",0x36,2);
  pcVar5 = pcVar3;
  FUN_101fef8b0();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_101fed4e0;
  func_0x0001000823a8(FUN_101fed4e0,0);
  func_0x000100082720("SCCustomStoryCreationScopedServicesCleanupRelayServiceProvider",0x3e,2);
  puVar7 = puVar2;
  FUN_101fef62c(puVar2,pcVar3);
  func_0x000100082720("CustomStoryCreationScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e4de08,&UNK_10da48ff0);
  puVar8 = &UNK_1104b7f80;
  func_0x000107c613fc(&UNK_1104b7f80,0x68,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  *(undefined8 *)(puVar8 + 0x28) = param_5;
  *(undefined8 *)(puVar8 + 0x30) = param_6;
  *(undefined8 *)(puVar8 + 0x38) = param_7;
  *(undefined8 *)(puVar8 + 0x40) = param_8;
  *(undefined8 *)(puVar8 + 0x48) = param_9;
  *(undefined8 *)(puVar8 + 0x50) = param_10;
  *(undefined8 **)(puVar8 + 0x58) = puVar4;
  *(char **)(puVar8 + 0x60) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar5);
  uVar12 = 0x101fedd34;
  func_0x0001000823a8(0x101fedd34,puVar8);
  func_0x000100082720("SCCustomStoryCreationEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e4de10,&UNK_10da48ff8);
  puVar8 = &UNK_1104b7fa8;
  func_0x000107c613fc(&UNK_1104b7fa8,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar12;
  *(code **)(puVar8 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(pcVar6);
  pcVar9 = FUN_101fedd70;
  func_0x0001000823a8(FUN_101fedd70,puVar8);
  func_0x000100082720("SCCustomStoryCreationScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e4dd90,&UNK_10da48d70);
  func_0x000107c6157c(pcVar9);
  uVar10 = 0x101fedd7c;
  func_0x0001000823a8(0x101fedd7c,pcVar9);
  func_0x000100082720("SCCustomStoryCreationScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e4dd80,&UNK_10da48d60);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x101fedd84;
  func_0x0001000823a8(0x101fedd84,uVar10);
  func_0x000100082720("SCCustomStoryCreationScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_1104b7fd0;
  func_0x000107c613fc(&UNK_1104b7fd0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x101fedd8c;
  func_0x0001000823a8(0x101fedd8c,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCCustomStoryCreationScopeEntryPointProvider",0x2c,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 101fedca8; end: 101fedd6f;  */

void FUN_101fedca8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fedd70; end: 101fedd93;  */

void FUN_101fedd70(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101feed58(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCCustomStoryCreationScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 101fedd94; end: 101feeb0f;  */

void FUN_101fedd94(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  FUN_101feeca8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  func_0x0001000285a8(0x112e4de18,&UNK_10db46090);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x18) = puVar10;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar9 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x20) = puVar10;
  puVar10 = PTR_PTR_1126a9d70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar9 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f052f40);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar11 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f052f60);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f052f80);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_c0);
  *param_1 = param_2;
  return;
}



/* Entry: 101feeb10; end: 101feeb9b;  */

void FUN_101feeb10(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101feeb9c; end: 101feeba3;  */

undefined8 FUN_101feeb9c(void)

{
  return 0x1b;
}



/* Entry: 101feeba4; end: 101feec27;  */

void FUN_101feeba4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101feece8,param_2,FUN_101feecec,param_2,FUN_101feed14,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101feec28; end: 101feec77;  */

undefined8 FUN_101feec28(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101feec78; end: 101feeca7;  */

undefined ** FUN_101feec78(void)

{
  return &PTR_DAT_112ff1898;
}



/* Entry: 101feeca8; end: 101feecc7;  */

void FUN_101feeca8(void)

{
  func_0x000107c61168(&PTR_PTR_112e4de90);
  return;
}



/* Entry: 101feecc8; end: 101feeceb;  */

undefined1  [16] FUN_101feecc8(void)

{
  return ZEXT816(0x1104b8028);
}



/* Entry: 101feecec; end: 101feed13;  */

void FUN_101feecec(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101feed14; end: 101feed1b;  */

undefined8 FUN_101feed14(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101feed1c; end: 101feed57;  */

void FUN_101feed1c(undefined8 *param_1,undefined8 param_2)

{
  FUN_101feed58();
  func_0x0001000a7f38("SCCustomStoryCreationScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 101feed58; end: 101feef43;  */

void FUN_101feed58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106dc3d0;
  ppuVar4 = &PTR_DAT_112ff1898;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104b8078;
  func_0x000107c613fc(&UNK_1104b8078,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e4df40;
  func_0x0001000285a8(0x112e4df40,&UNK_10da49188);
  func_0x0001000a6ee8(&UNK_1104b82e0,
                      "CustomStoryCreationScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_101feef44,puVar2,uVar3,&UNK_1104b82e0,&PTR_DAT_112e4dfe0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104b8028,
                      "SCCustomStoryCreationEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_101feeff8,param_3,uVar3,&UNK_1104b8028,&PTR_DAT_112e4de28);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104b80a0;
  func_0x000107c613fc(&UNK_1104b80a0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104b7e48,
                      "SCCustomStoryCreationScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_101fef0a8,puVar2,uVar3,&UNK_1104b7e48,&PTR_DAT_112e4dd98);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4df48;
  func_0x0001000285a8(0x112e4df48,&UNK_10da49190);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101feef44; end: 101feef83;  */

void FUN_101feef44(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000101fef950(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CustomStoryCreationScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 101feef84; end: 101feeff7;  */

void FUN_101feef84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101fef0e4;
  func_0x0001000823a8(0x101fef0e4,param_3);
  func_0x000100082720("SCCustomStoryCreationEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101feeff8; end: 101feefff;  */

void FUN_101feeff8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101fef0e4;
  func_0x0001000823a8();
  func_0x000100082720("SCCustomStoryCreationEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fef000; end: 101fef0a7;  */

void FUN_101fef000(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b80c8;
  func_0x000107c613fc(&UNK_1104b80c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101fef0dc;
  func_0x0001000823a8(FUN_101fef0dc,puVar1);
  func_0x000100082720("SCCustomStoryCreationScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 101fef0a8; end: 101fef0af;  */

void FUN_101fef0a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b80c8;
  func_0x000107c613fc(&UNK_1104b80c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101fef0dc;
  func_0x0001000823a8(FUN_101fef0dc,puVar3);
  func_0x000100082720("SCCustomStoryCreationScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 101fef0b0; end: 101fef0db;  */

void FUN_101fef0b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fef0dc; end: 101fef0eb;  */

void FUN_101fef0dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104b7ed0;
  func_0x000107c613fc(&UNK_1104b7ed0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fed6f4;
  func_0x00010058fa64(FUN_101fed6f4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fef0ec; end: 101fef203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101fef0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_101fef53c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e4df50) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e4df58) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fef204);
  (*pcVar2)();
}



/* Entry: 101fef204; end: 101fef263; -[_TtC35CustomStoryCreationScopeGraphBridge50CustomStoryCreationScopeGraphBridgeSaberEntryPoint init] */

void FUN_101fef204(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryCreationScopeGraphBridge.CustomStoryCreationScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fef230);
  (*pcVar1)();
}



/* Entry: 101fef264; end: 101fef29b; -[_TtC35CustomStoryCreationScopeGraphBridge50CustomStoryCreationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fef280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fef284) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fef264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4df50));
  return;
}



/* Entry: 101fef29c; end: 101fef2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fef29c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4df58),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4df50));
  return;
}



/* Entry: 101fef2c4; end: 101fef2e3;  */

void FUN_101fef2c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128140c0);
  return;
}



/* Entry: 101fef2e4; end: 101fef36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fef2e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4df88) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4df90);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fef36c);
  (*pcVar2)();
}



/* Entry: 101fef36c; end: 101fef453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fef36c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4df88);
  *(undefined **)(unaff_x20 + _DAT_112e4df88) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4df90);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4df90))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b8198;
  func_0x000107c613fc(&UNK_1104b8198,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101fef458,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101fef454; end: 101fef45f;  */

void FUN_101fef454(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fef460; end: 101fef4bf; -[_TtC35CustomStoryCreationScopeGraphBridge50SCCustomStoryCreationScopedServicesSaberEntryPoint init] */

void FUN_101fef460(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryCreationScopeGraphBridge.SCCustomStoryCreationScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fef48c);
  (*pcVar1)();
}



/* Entry: 101fef4c0; end: 101fef4f7; -[_TtC35CustomStoryCreationScopeGraphBridge50SCCustomStoryCreationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fef4c0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4df90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4df88));
  return;
}



/* Entry: 101fef4f8; end: 101fef4fb;  */

void FUN_101fef4f8(void)

{
  return;
}



/* Entry: 101fef4fc; end: 101fef51b;  */

void FUN_101fef4fc(void)

{
  FUN_101fef36c();
  return;
}



/* Entry: 101fef51c; end: 101fef53b;  */

void FUN_101fef51c(void)

{
  func_0x000107c61168(&PTR_PTR_112814188);
  return;
}



/* Entry: 101fef53c; end: 101fef60b;  */

undefined8 FUN_101fef53c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e4dfc0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_101fef60c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101fef60c; end: 101fef62b;  */

void FUN_101fef60c(void)

{
  func_0x000107c61168(&PTR_PTR_112814250);
  return;
}



/* Entry: 101fef62c; end: 101fef64f;  */

void FUN_101fef62c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b81e0;
  func_0x0001000285a8(0x112e4dfc8,&UNK_10da49268);
  func_0x000107c613fc(&UNK_1104b81e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101fef6d4,puVar1);
  return;
}



/* Entry: 101fef650; end: 101fef6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fef650(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101fef60c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e4dfd0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e4dfd8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}


