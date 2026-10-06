/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10297d69c; end: 10297d6b3;  */

void FUN_10297d69c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010297d6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10297d6b4; end: 10297d6d3; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider43MyProfileCreatorFanPassSectionActionHandler presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297d6b4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ed0dd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10297d6d4; end: 10297d6e7; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider43MyProfileCreatorFanPassSectionActionHandler setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297d6d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ed0dd0,param_3);
  return;
}



/* Entry: 10297d6e8; end: 10297d84b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297d6e8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = _DAT_112ed0de0;
  lVar2 = unaff_x20 + _DAT_112ed0de0;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = unaff_x20 + _DAT_112ed0dd0;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    uVar4 = 0;
    func_0x00010439b5f4(0);
    func_0x000107c610f8();
    uVar5 = 9;
    func_0x00010439b428(9,3,uVar4);
    func_0x000100386218(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    uVar4 = uVar5;
    func_0x000107c61174(uVar5);
    puVar6 = puVar3;
    func_0x0001039271e4(puVar3,0,uVar5);
    puStack_60 = puVar6;
    func_0x00010008a7c8(&uStack_58,&puStack_60);
    func_0x000100083b20(&puStack_60);
    func_0x000107c61574(uStack_58);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61604(unaff_x20 + lVar1,puStack_60);
  }
  func_0x000107c61170();
  return;
}



/* Entry: 10297d84c; end: 10297d90f; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider43MyProfileCreatorFanPassSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

uint FUN_10297d84c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_10297d9d8(&uStack_50,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10297d910; end: 10297d96f; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider43MyProfileCreatorFanPassSectionActionHandler init] */

void FUN_10297d910(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfileCreatorFanPassSectionPluginProvider.MyProfileCreatorFanPassSectionActionHandler"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297d93c);
  (*pcVar1)();
}



/* Entry: 10297d970; end: 10297d9b7; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider43MyProfileCreatorFanPassSectionActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297d970(long param_1)

{
  func_0x0001012a9c58(param_1 + _DAT_112ed0dd0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed0dd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ed0de0);
  return;
}



/* Entry: 10297d9b8; end: 10297d9d7;  */

void FUN_10297d9b8(void)

{
  func_0x000107c61168(&PTR_PTR_112874c20);
  return;
}



/* Entry: 10297d9d8; end: 10297daa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10297d9d8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar8 = param_2;
  func_0x000107c44fdc();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar7 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    if ((uVar7 == 0xd00000000000003f) && (uVar8 == 0x800000010f0d0b10)) {
      func_0x000107c6142c(0x800000010f0d0b10);
    }
    else {
      func_0x000107c605b8(uVar7,uVar8,0xd00000000000003f,0x800000010f0d0b10,0);
      func_0x000107c6142c(uVar8);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
    }
    lVar1 = _DAT_112ed0de0;
    lVar2 = unaff_x20 + _DAT_112ed0de0;
    func_0x000107c61618();
    if (lVar2 == 0) {
      lVar2 = unaff_x20 + _DAT_112ed0dd0;
      func_0x000107c61618();
      if (lVar2 == 0) {
        return 0;
      }
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      uVar4 = 0;
      func_0x00010439b5f4(0);
      func_0x000107c610f8();
      uVar5 = 9;
      func_0x00010439b428(9,3,uVar4);
      func_0x000100386218(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      uVar4 = uVar5;
      func_0x000107c61174(uVar5);
      puVar6 = puVar3;
      func_0x0001039271e4(puVar3,0,uVar5);
      puStack_60 = puVar6;
      func_0x00010008a7c8(&uStack_58,&puStack_60);
      func_0x000100083b20(&puStack_60);
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61604(unaff_x20 + lVar1,puStack_60);
    }
    func_0x000107c61170();
    return 1;
  }
  return 0;
}



/* Entry: 10297daa4; end: 10297dc3b;  */

void FUN_10297daa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed0e10,&UNK_10daf7c60);
  puVar1 = &UNK_110575750;
  func_0x000107c613fc(&UNK_110575750,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_10297dc3c,puVar1);
  return;
}



/* Entry: 10297dc3c; end: 10297dc4b;  */

void FUN_10297dc3c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_10297e2a0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_70;
  *(undefined8 *)(lVar1 + 0x18) = uStack_68;
  *(undefined8 *)(lVar1 + 0x30) = uStack_60;
  *(undefined8 *)(lVar1 + 0x38) = uStack_78;
  *(undefined8 *)(lVar1 + 0x20) = uStack_80;
  *(undefined8 *)(lVar1 + 0x28) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 10297dc4c; end: 10297dcaf;  */

void FUN_10297dc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return;
}



/* Entry: 10297dcb0; end: 10297df47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10297dcb0(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c42dc8();
    if ((int)lVar3 != 0) {
      iVar2 = (int)*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113041e50);
      func_0x000107c40cf0();
      if (iVar2 != 0) {
        lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_113093a98);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          uVar5 = 0xd000000000000024;
          func_0x000107c5fadc(0xd000000000000024,0x800000010f0d0b50);
          lVar6 = lVar3;
          func_0x000107c4e60c();
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
          puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_112ed1848);
          uVar9 = *puVar1;
          uVar10 = puVar1[1];
          uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
          func_0x000107c61434(uVar10);
          func_0x000107c5dbd4();
          func_0x000107c61180();
          puVar7 = &UNK_110575798;
          func_0x000107c613fc(&UNK_110575798,0x18,7);
          *(undefined8 *)(puVar7 + 0x10) = uVar5;
          func_0x0001000285a8(0x112ecfce8,&UNK_10daf6400);
          func_0x000107c613fc();
          func_0x000107c61174(uVar5);
          pcVar8 = FUN_10297e2c0;
          func_0x0001000bdd8c(FUN_10297e2c0,puVar7);
          puVar7 = &UNK_1105757c0;
          func_0x000107c613fc(&UNK_1105757c0,0x30,7);
          *(undefined8 *)(puVar7 + 0x10) = uVar11;
          *(undefined8 *)(puVar7 + 0x18) = uVar9;
          *(undefined8 *)(puVar7 + 0x20) = uVar10;
          *(long *)(puVar7 + 0x28) = lVar6;
          func_0x0001000285a8(0x112ecfce0,&UNK_10daf65b0);
          func_0x000107c613fc();
          func_0x000107c61174(uVar11);
          func_0x000107c615f0(lVar6);
          uVar5 = 0x10297e2c8;
          func_0x0001000bdd8c(0x10297e2c8,puVar7);
          uVar9 = uVar5;
          func_0x0001000bf56c();
          uVar10 = uVar9;
          func_0x0001000bf56c();
          puVar7 = PTR_PTR_1126afda8;
          func_0x000107c610f8(PTR_PTR_1126afda8);
          func_0x000107c47cac();
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar3);
          func_0x000107c61574(pcVar8);
          func_0x000107c61574(uVar5);
          func_0x000107c615e8(lVar6);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar10);
          return puVar7;
        }
      }
    }
    func_0x000107c615e8(lVar4);
  }
  return (undefined *)0x0;
}



/* Entry: 10297df48; end: 10297dfe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297df48(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_10297d9b8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112ed0dd0,0);
  func_0x000107c61614(lVar3 + _DAT_112ed0de0,0);
  *(undefined8 *)(lVar3 + _DAT_112ed0dd8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10297dfe8; end: 10297e243;  */

/* WARNING: Removing unreachable block (ram,0x00010297e218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297dfe8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_b0 [80];
  long lStack_60;
  long lStack_58;
  
  puVar11 = auStack_b0;
  lVar2 = 0;
  FUN_10297e724();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ed0ef0) = 0;
  func_0x000107c61614(lVar3 + _DAT_112ed0ef8,0);
  *(undefined8 *)(lVar3 + _DAT_112ed0f00) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed0f08) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed0ee0) = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ed0ee8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar9 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61434(param_4);
  func_0x000107c61174(param_2);
  plVar4 = &lStack_60;
  func_0x000107c61154(plVar4,puVar9);
  ppuVar5 = &PTR____CFConstantStringClassReference_110f12338;
  func_0x000107c61174();
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  ppuVar6 = &PTR____CFConstantStringClassReference_110eb4ff8;
  func_0x000107c5faec();
  *(undefined8 *)(lVar3 + 0x20) = ppuVar6;
  *(undefined1 **)(lVar3 + 0x28) = puVar11;
  uVar7 = 0;
  func_0x0001000e2834();
  *(undefined8 *)(lVar3 + 0x48) = uVar7;
  *(undefined ***)(lVar3 + 0x30) = ppuVar5;
  func_0x000107c61174(ppuVar5);
  lVar2 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  func_0x000100f15a0c((undefined8 *)(lVar3 + 0x20));
  plVar8 = plVar4;
  func_0x000107c61174(plVar4);
  lVar3 = lVar2;
  func_0x00010018cc3c(lVar2);
  func_0x000107c6142c(lVar2);
  puVar9 = PTR_PTR_1126b2b48;
  func_0x000107c610f8();
  func_0x000107c615f0(param_5);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar3);
  func_0x000107c45f0c();
  func_0x000107c61170(plVar8);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(lVar2);
  if (puVar9 != (undefined *)0x0) {
    puVar10 = puVar9;
    func_0x000107c61174(puVar9);
    func_0x000107c5a1fc();
    func_0x000107c61170(puVar10);
  }
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(plVar4);
  *param_1 = puVar9;
  return;
}



/* Entry: 10297e244; end: 10297e28f;  */

void FUN_10297e244(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10297e290; end: 10297e29f;  */

undefined1  [16] FUN_10297e290(void)

{
  return ZEXT816(0x110575778);
}



/* Entry: 10297e2a0; end: 10297e2bf;  */

void FUN_10297e2a0(void)

{
  func_0x000107c61168(&PTR_PTR_112ed0e58);
  return;
}



/* Entry: 10297e2c0; end: 10297e2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e2c0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_10297d9b8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112ed0dd0,0);
  func_0x000107c61614(lVar3 + _DAT_112ed0de0,0);
  *(undefined8 *)(lVar3 + _DAT_112ed0dd8) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10297e2d4; end: 10297e2f3; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider contextProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e2d4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ed0ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10297e2f4; end: 10297e307; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider setContextProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e2f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ed0ef8,param_3);
  return;
}



/* Entry: 10297e308; end: 10297e327; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e308(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed0f00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10297e328; end: 10297e333; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e328(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed0f00);
  *(undefined8 *)(param_1 + _DAT_112ed0f00) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10297e334; end: 10297e353; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e334(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed0f08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10297e354; end: 10297e35f; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed0f08);
  *(undefined8 *)(param_1 + _DAT_112ed0f08) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10297e360; end: 10297e38f;  */

void FUN_10297e360(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10297e390; end: 10297e52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e390(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + _DAT_112ed0f08);
    if (lVar5 != 0) {
      puVar1 = PTR_PTR_1126b02a8;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar5);
      uVar2 = 0xd00000000000003f;
      func_0x000107c5fadc(0xd00000000000003f,0x800000010f0d0b10);
      func_0x000107c46d50();
      func_0x000107c61170(uVar2);
      puVar3 = &UNK_1105757e8;
      func_0x000107c613fc(&UNK_1105757e8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_1);
      puVar4 = &UNK_110575838;
      func_0x000107c613fc(&UNK_110575838,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = lVar5;
      *(undefined **)(puVar4 + 0x20) = puVar1;
      puVar3 = &UNK_110575860;
      func_0x000107c613fc(&UNK_110575860,0x20,7);
      *(undefined **)(puVar3 + 0x10) = &UNK_10daf7d50;
      *(undefined **)(puVar3 + 0x18) = puVar4;
      func_0x000107c615f0(lVar5);
      func_0x000107c61174(puVar1);
      uVar2 = 1;
      func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf7d60,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar1);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10297e52c; end: 10297e59b;  */

void FUN_10297e52c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10297e59c,uVar1,uVar2);
  return;
}



/* Entry: 10297e59c; end: 10297e647;  */

void FUN_10297e59c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c445ac(*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010297e608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10297e648; end: 10297e6a7; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider init] */

void FUN_10297e648(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfileCreatorFanPassSectionPluginProvider.MyProfileCreatorFanPassSectionComposerContextProvider"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297e674);
  (*pcVar1)();
}



/* Entry: 10297e6a8; end: 10297e723; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010297e6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010297e708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010297e6ec) */
/* WARNING: Removing unreachable block (ram,0x00010297e70c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e6a8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed0ee0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed0ee8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed0ef0));
  return;
}



/* Entry: 10297e724; end: 10297e743;  */

void FUN_10297e724(void)

{
  func_0x000107c61168(&PTR_PTR_112874cf0);
  return;
}



/* Entry: 10297e744; end: 10297e77b; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider valdiContext] */

void FUN_10297e744(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10297e7e0();
  func_0x000107c615f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10297e77c; end: 10297e7c7; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider setUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e77c(long param_1)

{
  param_1 = param_1 + _DAT_112ed0ef8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c5dbc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10297e7c8; end: 10297e7df; -[_TtC44MyProfileCreatorFanPassSectionPluginProvider53MyProfileCreatorFanPassSectionComposerContextProvider tearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297e7c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed0ef0);
  *(undefined8 *)(param_1 + _DAT_112ed0ef0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10297e7e0; end: 10297e9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10297e7e0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  puVar3 = PTR_PTR_1126abb50;
  func_0x000107c610f8(PTR_PTR_1126abb50);
  func_0x000107c453e4();
  lVar1 = _DAT_112ed0ef0;
  uVar11 = *(ulong *)(unaff_x20 + _DAT_112ed0ef0);
  if (uVar11 != 0) {
    uVar4 = uVar11;
    func_0x000107c615f0();
    func_0x000107c41854();
    if ((uVar4 & 1) == 0) {
      func_0x000107c5a588(uVar11);
      func_0x000107c615e8(uVar11);
      func_0x000107c61170(puVar3);
      goto LAB_10297e9bc;
    }
    func_0x000107c615e8(uVar11);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112ed0ee0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
LAB_10297e984:
    func_0x000107c61170(puVar3);
    lVar5 = 0;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    if (lVar6 == 0) goto LAB_10297e984;
    FUN_10297e9e0(0);
    func_0x000107c614e8();
    puVar7 = &UNK_1105757e8;
    func_0x000107c613fc(&UNK_1105757e8,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = PTR_PTR_1126abb60;
    func_0x000107c610f8(PTR_PTR_1126abb60);
    pcStack_70 = FUN_10297ea24;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110575800;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61174(puVar3);
    func_0x000107c6157c(puVar7);
    func_0x000107c4803c(puVar8);
    func_0x000107c60bd0(ppuVar9);
    puVar2 = puStack_68;
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar2);
    lVar5 = lVar6;
    func_0x000107c40994();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
  }
  uVar10 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = lVar5;
  func_0x000107c615e8(uVar10);
LAB_10297e9bc:
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 10297e9e0; end: 10297ea23;  */

void FUN_10297e9e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126abb58;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ed0f38 = puVar1;
  return;
}



/* Entry: 10297ea24; end: 10297ea47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297ea24(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + _DAT_112ed0f08);
    if (lVar6 != 0) {
      puVar2 = PTR_PTR_1126b02a8;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar6);
      uVar3 = 0xd00000000000003f;
      func_0x000107c5fadc(0xd00000000000003f,0x800000010f0d0b10);
      func_0x000107c46d50();
      func_0x000107c61170(uVar3);
      puVar4 = &UNK_1105757e8;
      func_0x000107c613fc(&UNK_1105757e8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar1);
      puVar5 = &UNK_110575838;
      func_0x000107c613fc(&UNK_110575838,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(long *)(puVar5 + 0x18) = lVar6;
      *(undefined **)(puVar5 + 0x20) = puVar2;
      puVar4 = &UNK_110575860;
      func_0x000107c613fc(&UNK_110575860,0x20,7);
      *(undefined **)(puVar4 + 0x10) = &UNK_10daf7d50;
      *(undefined **)(puVar4 + 0x18) = puVar5;
      func_0x000107c615f0(lVar6);
      func_0x000107c61174(puVar2);
      uVar3 = 1;
      func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf7d60,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(puVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10297ea48; end: 10297eaa7;  */

void FUN_10297ea48(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10297eaa8;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10297e59c,lVar1,lVar2);
  return;
}



/* Entry: 10297eaa8; end: 10297eae3;  */

void FUN_10297eaa8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010297eae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10297eae4; end: 10297eb53;  */

void FUN_10297eae4(undefined8 param_1)

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
  plVar3[1] = (long)FUN_10297eb54;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10297eb54; end: 10297eb57;  */

void FUN_10297eb54(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010297eae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10297eb58; end: 10297eba3;  */

void FUN_10297eb58(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10297ec64,param_1);
  return;
}



/* Entry: 10297eba4; end: 10297ec63;  */

void FUN_10297eba4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_10297dcb0();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_2;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10297ec64; end: 10297ec7b;  */

void FUN_10297ec64(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_10297dcb0();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (unaff_x20 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = unaff_x20;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10297ec7c; end: 10297ecc7;  */

void FUN_10297ec7c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10297ecc8,param_1);
  return;
}



/* Entry: 10297ecc8; end: 10297ed83;  */

void FUN_10297ecc8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_102980220();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_2;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10297ed84; end: 10297ed93;  */

undefined1  [16] FUN_10297ed84(void)

{
  return ZEXT816(0x110575928);
}



/* Entry: 10297ed94; end: 10297edb3; -[_TtC47MyProfileSubscriberFanPassSectionImplementation46MyProfileSubscriberFanPassSectionActionHandler presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297ed94(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ed0f40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10297edb4; end: 10297edc7; -[_TtC47MyProfileSubscriberFanPassSectionImplementation46MyProfileSubscriberFanPassSectionActionHandler setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297edb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ed0f40,param_3);
  return;
}



/* Entry: 10297edc8; end: 10297f037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10297edc8(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puVar8;
  
  lVar2 = unaff_x20 + _DAT_112ed0f40;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x00010439b5f4(0);
    func_0x000107c610f8();
    uVar4 = 9;
    func_0x00010439b428(9,0x102);
    func_0x00010036604c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x000107c61174(uVar4);
    puVar6 = puVar3;
    func_0x000103928328(puVar3,uVar4,0);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed0f58);
    puVar7 = &UNK_1105759d0;
    func_0x000107c613fc(&UNK_1105759d0,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar4;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    puVar8 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c61168();
    iVar1 = (int)puVar8;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c4a02c();
    if (iVar1 == 0) {
      pcVar9 = "launchSubscriptionManagement()";
      func_0x0001000c10c0("launchSubscriptionManagement()");
      func_0x000107c61180();
      puVar8 = &UNK_1105759f8;
      func_0x000107c613fc(&UNK_1105759f8,0x20,7);
      *(code **)(puVar8 + 0x10) = FUN_10297ff24;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      uStack_60 = 0x102980010;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_110575a10;
      ppuVar10 = &puStack_80;
      puStack_58 = puVar8;
      func_0x000107c60bc4(ppuVar10);
      puVar8 = puStack_58;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar8);
      func_0x000107c4e524(pcVar9);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c615e8(pcVar9);
    }
    else {
      puStack_88 = puVar6;
      func_0x00010008a7c8(&puStack_80,&puStack_88);
      func_0x000100083b20(&puStack_88);
      func_0x000107c61574(puStack_80);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar5);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puStack_88);
    }
  }
  return lVar2 != 0;
}



/* Entry: 10297f038; end: 10297f22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10297f038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar6;
  char *pcVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puVar5;
  
  ppuVar8 = &puStack_90;
  lVar2 = unaff_x20 + _DAT_112ed0f40;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = &UNK_110575a48;
    func_0x000107c613fc(&UNK_110575a48,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110575a70;
    func_0x000107c613fc(&UNK_110575a70,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = lVar2;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = param_2;
    *(undefined8 *)(puVar4 + 0x30) = param_3;
    *(undefined8 *)(puVar4 + 0x38) = param_4;
    puVar5 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c61168();
    iVar1 = (int)puVar5;
    func_0x000107c6157c(puVar3);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_2);
    lVar6 = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c4a02c();
    if (iVar1 == 0) {
      func_0x000107c61574(puVar3);
      pcVar7 = "launchCreatorPaywall(creatorId:displayName:)";
      func_0x0001000c10c0("launchCreatorPaywall(creatorId:displayName:)");
      func_0x000107c61180();
      puVar3 = &UNK_110575a98;
      func_0x000107c613fc(&UNK_110575a98,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x10297ff48;
      *(undefined **)(puVar3 + 0x18) = puVar4;
      pcStack_70 = FUN_10297ff54;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_110575ab0;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      puVar3 = puStack_68;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(pcVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(lVar6);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(pcVar7);
    }
    else {
      FUN_10297f39c(puVar3,lVar6,param_1,param_2,param_3,param_4);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(lVar6);
      func_0x000107c61574(puVar4);
    }
  }
  return lVar2 != 0;
}



/* Entry: 10297f22c; end: 10297f2ef; -[_TtC47MyProfileSubscriberFanPassSectionImplementation46MyProfileSubscriberFanPassSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

uint FUN_10297f22c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_10297fb58(&uStack_50,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10297f2f0; end: 10297f39b; -[_TtC47MyProfileSubscriberFanPassSectionImplementation46MyProfileSubscriberFanPassSectionActionHandler didDismissFanPassSubscriptionScopeWithError:] */

void FUN_10297f2f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_10297fe90();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10297f39c; end: 10297f6e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297f39c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined **ppuVar7;
  ulong **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    puVar3 = &UNK_110575a48;
    func_0x000107c613fc(&UNK_110575a48,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    puVar4 = &UNK_110575ae8;
    func_0x000107c613fc(&UNK_110575ae8,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(undefined8 *)(puVar4 + 0x28) = param_4;
    *(undefined8 *)(puVar4 + 0x30) = param_5;
    *(undefined8 *)(puVar4 + 0x38) = param_6;
    puVar5 = &UNK_110575b10;
    func_0x000107c613fc(&UNK_110575b10,0x18,7);
    *(undefined **)(puVar5 + 0x10) = puVar2;
    puVar6 = (ulong *)PTR_PTR_1126aeaf8;
    func_0x000107c610f8();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_10297ff74;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100e1779c;
    puStack_a0 = &UNK_110575b28;
    ppuVar7 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar7);
    uStack_c8 = 0x10297ff84;
    puStack_e8 = (ulong *)puVar1;
    uStack_e0 = 0x42000000;
    puStack_d8 = &UNK_100e17304;
    puStack_d0 = &UNK_110575b50;
    ppuVar8 = &puStack_e8;
    puStack_c0 = puVar5;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61174(puVar2);
    func_0x000107c61174();
    func_0x000107c6157c(puVar3);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c47be0();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puStack_c0);
    puVar4 = puStack_90;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    func_0x00010439b5f4(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    uVar9 = 9;
    func_0x00010439b428(9,0x102);
    uVar10 = 0;
    func_0x00010036604c(0);
    func_0x000107c610f8();
    puVar11 = puVar6;
    func_0x000103928328(puVar6,uVar9,0,uVar10);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_b8 = puVar3;
    func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
    func_0x000107c613fc();
    ppuVar7 = &puStack_b8;
    func_0x00010042e6a0();
    uVar9 = *(undefined8 *)(param_1 + _DAT_112ed0f68);
    *(undefined ***)(param_1 + _DAT_112ed0f68) = ppuVar7;
    func_0x000107c61580();
    func_0x000107c61574(uVar9);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar11) + 0xb0))(ppuVar7);
    puStack_e8 = puVar11;
    func_0x00010008a7c8(&puStack_b8,&puStack_e8);
    puVar3 = puStack_b8;
    func_0x000100083b20(&puStack_e8);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61574(ppuVar7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puStack_e8);
  }
  return;
}



/* Entry: 10297f6e4; end: 10297f827;  */

void FUN_10297f6e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar1 = &UNK_110575a48;
  func_0x000107c613fc(&UNK_110575a48,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar2 = &UNK_110575bb0;
  func_0x000107c613fc(&UNK_110575bb0,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  pcStack_78 = FUN_10297ffc8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000b0c7c;
  puStack_80 = &UNK_110575bc8;
  ppuVar3 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_70;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_7);
  func_0x000107c61574(puVar1);
  func_0x000107c3e2c4(param_2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10297f828; end: 10297f9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297f828(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x00010439b5f4(0);
    func_0x000107c610f8();
    puVar3 = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    uVar4 = 9;
    func_0x00010439b428(9,3);
    func_0x0001003604c8(0);
    func_0x000107c610f8();
    lVar5 = param_1;
    func_0x000107c61174();
    func_0x000103b67ad8(puVar2,param_3,param_4,param_5,param_6,1,0,uVar4,param_1);
    puStack_88 = puVar2;
    func_0x00010008a7c8(&uStack_80,&puStack_88);
    func_0x000100083b20(&puStack_88);
    func_0x000107c61574(uStack_80);
    puVar1 = puStack_88;
    func_0x000107c3e2c0(puVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10297f9b8; end: 10297fa57;  */

void FUN_10297f9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  if (param_1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110575b78;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10297fa58; end: 10297fab7; -[_TtC47MyProfileSubscriberFanPassSectionImplementation46MyProfileSubscriberFanPassSectionActionHandler init] */

void FUN_10297fa58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfileSubscriberFanPassSectionImplementation.MyProfileSubscriberFanPassSectionActionHandler"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297fa84);
  (*pcVar1)();
}



/* Entry: 10297fab8; end: 10297fb37; -[_TtC47MyProfileSubscriberFanPassSectionImplementation46MyProfileSubscriberFanPassSectionActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297fab8(long param_1)

{
  func_0x0001012a9c58(param_1 + _DAT_112ed0f40);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed0f48 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed0f50 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed0f58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed0f60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed0f68));
  return;
}



/* Entry: 10297fb38; end: 10297fb57;  */

void FUN_10297fb38(void)

{
  func_0x000107c61168(&PTR_PTR_112874dd8);
  return;
}



/* Entry: 10297fb58; end: 10297fe8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10297fb58(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puVar8;
  
  uVar14 = 0;
  uVar15 = 0;
  if (param_2 != 0) {
    uVar11 = param_2;
    uVar13 = param_2;
    func_0x000107c44fdc();
    func_0x000107c61180();
    uVar16 = uVar13;
    if (uVar11 != 0) {
      uVar12 = uVar11;
      func_0x000107c5faec();
      func_0x000107c61170(uVar11);
      if (uVar12 == *(ulong *)(unaff_x20 + _DAT_112ed0f48) &&
          uVar13 == ((ulong *)(unaff_x20 + _DAT_112ed0f48))[1]) {
        func_0x000107c6142c(uVar13);
FUN_10297edc8:
        lVar2 = unaff_x20 + _DAT_112ed0f40;
        func_0x000107c61618();
        if (lVar2 != 0) {
          puVar3 = PTR_PTR_1126aead8;
          func_0x000107c610f8();
          func_0x000107c4807c();
          func_0x00010439b5f4(0);
          func_0x000107c610f8();
          uVar4 = 9;
          func_0x00010439b428(9,0x102);
          func_0x00010036604c(0);
          func_0x000107c610f8();
          func_0x000107c61174();
          uVar5 = uVar4;
          func_0x000107c61174(uVar4);
          puVar6 = puVar3;
          func_0x000103928328(puVar3,uVar4,0);
          uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed0f58);
          puVar7 = &UNK_1105759d0;
          func_0x000107c613fc(&UNK_1105759d0,0x20,7);
          *(undefined8 *)(puVar7 + 0x10) = uVar4;
          *(undefined **)(puVar7 + 0x18) = puVar6;
          puVar8 = PTR__OBJC_CLASS___NSThread_1126b47e0;
          func_0x000107c61168();
          iVar1 = (int)puVar8;
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c4a02c();
          if (iVar1 == 0) {
            pcVar9 = "launchSubscriptionManagement()";
            func_0x0001000c10c0("launchSubscriptionManagement()");
            func_0x000107c61180();
            puVar8 = &UNK_1105759f8;
            func_0x000107c613fc(&UNK_1105759f8,0x20,7);
            *(code **)(puVar8 + 0x10) = FUN_10297ff24;
            *(undefined **)(puVar8 + 0x18) = puVar7;
            puStack_60 = (undefined *)0x102980010;
            puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
            lStack_78 = 0x42000000;
            puStack_70 = &UNK_1000f6b44;
            puStack_68 = &UNK_110575a10;
            ppuVar10 = &puStack_80;
            puStack_58 = puVar8;
            func_0x000107c60bc4(ppuVar10);
            puVar8 = puStack_58;
            func_0x000107c6157c(puVar7);
            func_0x000107c61574(puVar8);
            func_0x000107c4e524(pcVar9);
            func_0x000107c61574(puVar7);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(uVar5);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(lVar2);
            func_0x000107c60bd0(ppuVar10);
            func_0x000107c615e8(pcVar9);
          }
          else {
            puStack_88 = puVar6;
            func_0x00010008a7c8(&puStack_80,&puStack_88);
            func_0x000100083b20(&puStack_88);
            func_0x000107c61574(puStack_80);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(uVar5);
            func_0x000107c61574(puVar7);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puStack_88);
          }
        }
        return (uint)(lVar2 != 0);
      }
      uVar16 = uVar13;
      func_0x000107c605b8();
      func_0x000107c6142c(uVar13);
      if ((uVar12 & 1) != 0) goto FUN_10297edc8;
    }
    uVar11 = param_2;
    func_0x000107c44fdc();
    func_0x000107c61180();
    if (uVar11 != 0) {
      uVar12 = uVar11;
      func_0x000107c5faec();
      func_0x000107c61170(uVar11);
      uVar11 = *(ulong *)(unaff_x20 + _DAT_112ed0f50);
      uVar13 = ((ulong *)(unaff_x20 + _DAT_112ed0f50))[1];
      if (uVar12 == uVar11 && uVar16 == uVar13) {
        func_0x000107c6142c(uVar16);
      }
      else {
        func_0x000107c605b8(uVar12,uVar16,uVar11,uVar13,0);
        func_0x000107c6142c(uVar16);
        if ((uVar12 & 1) == 0) goto LAB_10297fe6c;
      }
      func_0x000107c3cfb0();
      func_0x000107c61180();
      if (param_2 != 0) {
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x000107c61168(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        uVar11 = param_2;
        func_0x000107c6148c(param_2,puVar7);
        if (uVar11 != 0) {
          puStack_90 = (undefined *)0x49726f7461657263;
          puStack_88 = (undefined *)0xe900000000000064;
          ppuVar10 = &puStack_90;
          func_0x000107c6061c(ppuVar10,PTR___sSSN_11034da80);
          uVar13 = uVar11;
          func_0x000107c3ac74();
          func_0x000107c61180();
          func_0x000107c615e8(ppuVar10);
          if (uVar13 == 0) {
            puStack_88 = (undefined *)0x0;
            puStack_90 = (undefined *)0x0;
            lStack_78 = 0;
            puStack_80 = (undefined *)0x0;
          }
          else {
            func_0x000107c60234(&puStack_90,uVar13);
            func_0x000107c615e8(uVar13);
          }
          puVar7 = PTR___sypN_11034f1a8;
          puStack_68 = puStack_88;
          puStack_70 = puStack_90;
          puStack_58 = (undefined *)lStack_78;
          puStack_60 = puStack_80;
          if (lStack_78 == 0) {
LAB_10297fe48:
            func_0x000107c615e8(param_2);
            func_0x00010006e7f4(&puStack_70);
            goto LAB_10297fe6c;
          }
          func_0x000107c6147c(&uStack_a0,&puStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6
                             );
          uVar4 = uStack_98;
          uVar5 = uStack_a0;
          if ((uVar14 & 1) != 0) {
            puStack_90 = (undefined *)0x4e79616c70736964;
            puStack_88 = (undefined *)0xeb00000000656d61;
            ppuVar10 = &puStack_90;
            func_0x000107c6061c(ppuVar10,PTR___sSSN_11034da80);
            func_0x000107c3ac74();
            func_0x000107c61180();
            func_0x000107c615e8(ppuVar10);
            if (uVar11 == 0) {
              puStack_88 = (undefined *)0x0;
              puStack_90 = (undefined *)0x0;
              lStack_78 = 0;
              puStack_80 = (undefined *)0x0;
            }
            else {
              func_0x000107c60234(&puStack_90,uVar11);
              func_0x000107c615e8(uVar11);
            }
            puStack_68 = puStack_88;
            puStack_70 = puStack_90;
            puStack_58 = (undefined *)lStack_78;
            puStack_60 = puStack_80;
            if (lStack_78 == 0) {
              func_0x000107c6142c(uVar4);
              goto LAB_10297fe48;
            }
            func_0x000107c6147c(&uStack_a0,&puStack_70,puVar7 + 8,PTR___sSSN_11034da80,6);
            if ((uVar15 & 1) != 0) {
              FUN_10297f038(uVar5,uVar4,uStack_a0,uStack_98);
              uVar17 = (uint)uVar5;
              func_0x000107c615e8(param_2);
              func_0x000107c6142c(uVar4);
              func_0x000107c6142c(uStack_98);
              goto LAB_10297fe70;
            }
            func_0x000107c6142c(uVar4);
          }
        }
        func_0x000107c615e8(param_2);
      }
    }
  }
LAB_10297fe6c:
  uVar17 = 0;
LAB_10297fe70:
  return uVar17 & 1;
}



/* Entry: 10297fe90; end: 10297ff23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297fe90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_38;
  
  lVar1 = _DAT_112ed0f68;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ed0f68);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c6157c(lVar4);
    func_0x000107c45a48(puVar2,param_2,1);
    puStack_38 = puVar2;
    func_0x0001007d6d78(&puStack_38);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 10297ff24; end: 10297ff53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297ff24(void)

{
  long unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010008a7c8(&uStack_28,&uStack_30);
  func_0x000100083b20(&uStack_30);
  func_0x000107c61574(uStack_28);
  func_0x000107c61170(uStack_30);
  return;
}



/* Entry: 10297ff54; end: 10297ff73;  */

void FUN_10297ff54(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10297ff74; end: 10297ff8b;  */

void FUN_10297ff74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_110575a48;
  func_0x000107c613fc(&UNK_110575a48,0x18,7);
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618(lVar7);
  func_0x000107c61614(puVar6 + 0x10,lVar7);
  func_0x000107c61170(lVar7);
  puVar8 = &UNK_110575bb0;
  func_0x000107c613fc(&UNK_110575bb0,0x40,7);
  *(undefined **)(puVar8 + 0x10) = puVar6;
  *(undefined8 *)(puVar8 + 0x18) = param_1;
  *(undefined8 *)(puVar8 + 0x20) = uVar2;
  *(undefined8 *)(puVar8 + 0x28) = uVar4;
  *(undefined8 *)(puVar8 + 0x30) = uVar3;
  *(undefined8 *)(puVar8 + 0x38) = uVar5;
  pcStack_78 = FUN_10297ffc8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000b0c7c;
  puStack_80 = &UNK_110575bc8;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar6 = puStack_70;
  func_0x000107c61174(param_1);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c3e2c4(uVar1);
  func_0x000107c60bd0(ppuVar9);
  return;
}



/* Entry: 10297ff8c; end: 10297ffc7;  */

void FUN_10297ff8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10297ffc8; end: 102980013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297ffc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    puVar7 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x00010439b5f4(0);
    func_0x000107c610f8();
    puVar8 = puVar7;
    func_0x000107c61174(puVar7);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    uVar9 = 9;
    func_0x00010439b428(9,3);
    func_0x0001003604c8(0);
    func_0x000107c610f8();
    lVar10 = lVar6;
    func_0x000107c61174();
    func_0x000103b67ad8(puVar7,uVar1,uVar3,uVar2,uVar4,1,0,uVar9,lVar6);
    puStack_88 = puVar7;
    func_0x00010008a7c8(&uStack_80,&puStack_88);
    func_0x000100083b20(&puStack_88);
    func_0x000107c61574(uStack_80);
    puVar5 = puStack_88;
    func_0x000107c3e2c0(puVar8);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 102980014; end: 1029801ab;  */

void FUN_102980014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed0f98,&UNK_10daf7e30);
  puVar1 = &UNK_110575c00;
  func_0x000107c613fc(&UNK_110575c00,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1029801ac,puVar1);
  return;
}



/* Entry: 1029801ac; end: 1029801bb;  */

void FUN_1029801ac(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_1029809d0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x30) = uStack_68;
  *(undefined8 *)(lVar1 + 0x38) = uStack_70;
  *(undefined8 *)(lVar1 + 0x10) = uStack_78;
  *(undefined8 *)(lVar1 + 0x18) = uStack_58;
  *(undefined8 *)(lVar1 + 0x20) = uStack_80;
  *(undefined8 *)(lVar1 + 0x28) = uStack_60;
  *param_1 = lVar1;
  return;
}



/* Entry: 1029801bc; end: 10298021f;  */

void FUN_1029801bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 102980220; end: 1029804c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102980220(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar10 = *unaff_x20;
  lVar1 = unaff_x20[2];
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c42df4();
    if (((int)lVar1 != 0) && (lVar1 = lVar2, func_0x000107c40cec(), (int)lVar1 != 0)) {
      lVar1 = lVar2;
      func_0x000107c40cec();
      lVar3 = lVar2;
      func_0x000107c40d00();
      lVar4 = *(long *)(unaff_x20[4] + _DAT_113093a98);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        uVar5 = 0xd000000000000027;
        func_0x000107c5fadc(0xd000000000000027,0x800000010f0d0ca0);
        lVar6 = lVar4;
        func_0x000107c4e60c();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        uVar5 = unaff_x20[6];
        uVar9 = unaff_x20[7];
        uVar12 = unaff_x20[3];
        uVar11 = unaff_x20[5];
        puVar7 = &UNK_110575c28;
        func_0x000107c613fc(&UNK_110575c28,0x28,7);
        *(undefined8 *)(puVar7 + 0x10) = uVar5;
        *(undefined8 *)(puVar7 + 0x18) = uVar9;
        *(undefined8 *)(puVar7 + 0x20) = uVar10;
        func_0x0001000285a8(0x112ecfce8,&UNK_10daf6400);
        func_0x000107c613fc();
        func_0x000107c61174(uVar5);
        func_0x000107c61174(uVar9);
        pcVar8 = FUN_102980950;
        func_0x0001000bdd8c(FUN_102980950,puVar7);
        puVar7 = &UNK_110575c50;
        func_0x000107c613fc(&UNK_110575c50,0x38,7);
        *(undefined8 *)(puVar7 + 0x10) = uVar12;
        *(undefined8 *)(puVar7 + 0x18) = uVar11;
        *(long *)(puVar7 + 0x20) = lVar6;
        puVar7[0x28] = (char)lVar1;
        puVar7[0x29] = (char)lVar3;
        *(undefined8 *)(puVar7 + 0x30) = uVar10;
        func_0x0001000285a8(0x112ecfce0,&UNK_10daf65b0);
        func_0x000107c613fc();
        func_0x000107c61174(uVar12);
        func_0x000107c61174(uVar11);
        func_0x000107c615f0(lVar6);
        uVar10 = 0x10298095c;
        func_0x0001000bdd8c(0x10298095c,puVar7);
        uVar5 = uVar10;
        func_0x0001000bf56c();
        uVar9 = uVar5;
        func_0x0001000bf56c();
        puVar7 = PTR_PTR_1126afda8;
        func_0x000107c610f8(PTR_PTR_1126afda8);
        func_0x000107c47cac();
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar4);
        func_0x000107c61574(pcVar8);
        func_0x000107c61574(uVar10);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar9);
        return puVar7;
      }
    }
    func_0x000107c615e8(lVar2);
  }
  return (undefined *)0x0;
}



/* Entry: 1029804c4; end: 1029805cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029804c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  lVar3 = 0;
  FUN_10297fb38();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112ed0f40,0);
  *(undefined8 *)(lVar4 + _DAT_112ed0f68) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ed0f48);
  *puVar1 = 0xd000000000000042;
  puVar1[1] = 0x800000010f0d0cd0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ed0f50);
  *puVar1 = 0xd00000000000003c;
  puVar1[1] = 0x800000010f0d0d20;
  *(undefined8 *)(lVar4 + _DAT_112ed0f58) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112ed0f60) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_60,puVar2);
  *param_1 = plVar5;
  return;
}



/* Entry: 1029805d0; end: 10298094f;  */

/* WARNING: Removing unreachable block (ram,0x000102980918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029805d0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_c0 [80];
  long lStack_70;
  long lStack_68;
  
  puVar11 = auStack_c0;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_3 + _DAT_113041e48);
  lVar2 = 0;
  FUN_102981368();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar3 + _DAT_112ed1098) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar3 + _DAT_112ed10a0) = 0;
  *(undefined1 *)(lVar3 + _DAT_112ed10a8) = 0;
  *(undefined **)(lVar3 + _DAT_112ed10b0) = puVar7;
  *(undefined8 *)(lVar3 + _DAT_112ed10b8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed10c0) = 0;
  func_0x000107c61614(lVar3 + _DAT_112ed10c8,0);
  *(undefined8 *)(lVar3 + _DAT_112ed10d0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed10d8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed1068) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ed1070) = uVar12;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ed1078);
  *puVar1 = 0xd000000000000042;
  puVar1[1] = 0x800000010f0d0cd0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ed1080);
  *puVar1 = 0xd00000000000003c;
  puVar1[1] = 0x800000010f0d0d20;
  *(undefined1 *)(lVar3 + _DAT_112ed1088) = param_5;
  *(undefined1 *)(lVar3 + _DAT_112ed1090) = param_6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c615f0(uVar12);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar7);
  plVar5 = plVar4;
  FUN_10298402c();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar7);
  plVar6 = plVar5;
  func_0x000108f728c0(plVar5);
  func_0x000107c61180();
  func_0x000107c61170(plVar5);
  puVar7 = PTR_PTR_1126b1100;
  func_0x000107c610f8(PTR_PTR_1126b1100);
  func_0x000107c48538();
  func_0x000107c61170(plVar6);
  ppuVar8 = &PTR____CFConstantStringClassReference_110f12338;
  func_0x000107c61174();
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  ppuVar9 = &PTR____CFConstantStringClassReference_110eb4ff8;
  func_0x000107c5faec();
  *(undefined8 *)(lVar3 + 0x20) = ppuVar9;
  *(undefined1 **)(lVar3 + 0x28) = puVar11;
  uVar12 = 0;
  func_0x0001000e2834();
  *(undefined8 *)(lVar3 + 0x48) = uVar12;
  *(undefined ***)(lVar3 + 0x30) = ppuVar8;
  func_0x000107c61174(ppuVar8);
  lVar2 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  func_0x000100f15a0c((undefined8 *)(lVar3 + 0x20));
  func_0x000107c61174(puVar7);
  lVar3 = lVar2;
  func_0x00010018cc3c(lVar2);
  func_0x000107c6142c(lVar2);
  puVar10 = PTR_PTR_1126b2b48;
  func_0x000107c610f8();
  func_0x000107c61174(plVar4);
  func_0x000107c615f0(param_4);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar3);
  func_0x000107c45f0c();
  func_0x000107c61170(ppuVar8);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(lVar2);
  *param_1 = puVar10;
  return;
}



/* Entry: 102980950; end: 102980973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102980950(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar7 = &lStack_60;
  lVar5 = 0;
  FUN_10297fb38(0,uVar3,*(undefined8 *)(unaff_x20 + 0x20));
  lVar6 = lVar5;
  func_0x000107c610f8();
  func_0x000107c61614(lVar6 + _DAT_112ed0f40,0);
  *(undefined8 *)(lVar6 + _DAT_112ed0f68) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ed0f48);
  *puVar1 = 0xd000000000000042;
  puVar1[1] = 0x800000010f0d0cd0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ed0f50);
  *puVar1 = 0xd00000000000003c;
  puVar1[1] = 0x800000010f0d0d20;
  *(undefined8 *)(lVar6 + _DAT_112ed0f58) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112ed0f60) = uVar3;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61154(&lStack_60,puVar4);
  *param_1 = plVar7;
  return;
}



/* Entry: 102980974; end: 1029809bf;  */

void FUN_102980974(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029809c0; end: 1029809cf;  */

undefined1  [16] FUN_1029809c0(void)

{
  return ZEXT816(0x110575c78);
}



/* Entry: 1029809d0; end: 1029809ef;  */

void FUN_1029809d0(void)

{
  func_0x000107c61168(&PTR_PTR_112ed0fe0);
  return;
}



/* Entry: 1029809f0; end: 102980a0f; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider contextProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029809f0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ed10c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102980a10; end: 102980a23; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider setContextProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102980a10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ed10c8,param_3);
  return;
}



/* Entry: 102980a24; end: 102980a43; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102980a24(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed10d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102980a44; end: 102980a4f; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102980a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed10d0);
  *(undefined8 *)(param_1 + _DAT_112ed10d0) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102980a50; end: 102980a6f; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102980a50(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed10d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102980a70; end: 102980a7b; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102980a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed10d8);
  *(undefined8 *)(param_1 + _DAT_112ed10d8) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102980a7c; end: 102980aab;  */

void FUN_102980a7c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102980aac; end: 102980c07;  */

undefined * FUN_102980aac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar7 = &puStack_80;
  puVar6 = &UNK_110575c98;
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_110575c98,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = PTR_PTR_1126abb78;
  func_0x000107c610f8(PTR_PTR_1126abb78);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x102983d90;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110575df0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c6157c(puVar3);
  func_0x000107c48044(puVar4);
  func_0x000107c60bd0(ppuVar5);
  puVar2 = puStack_58;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c613fc(&UNK_110575c98,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  uStack_60 = 0x102983d98;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f26cb8;
  puStack_68 = &UNK_110575e18;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c576fc(puVar4);
  func_0x000107c60bd0(ppuVar7);
  return puVar4;
}



/* Entry: 102980c08; end: 102980e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102980c08(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar6 = *(long *)(param_1 + _DAT_112ed10d8);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_112ed1078);
      uVar1 = ((undefined8 *)(param_1 + _DAT_112ed1078))[1];
      puVar2 = PTR_PTR_1126b02a8;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar6);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c46d50();
      func_0x000107c61170(uVar5);
      puVar3 = &UNK_110575c98;
      func_0x000107c613fc(&UNK_110575c98,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_1);
      puVar4 = &UNK_110575ea0;
      func_0x000107c613fc(&UNK_110575ea0,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = lVar6;
      *(undefined **)(puVar4 + 0x20) = puVar2;
      puVar3 = &UNK_110575ec8;
      func_0x000107c613fc(&UNK_110575ec8,0x20,7);
      *(undefined **)(puVar3 + 0x10) = &UNK_10daf7fb8;
      *(undefined **)(puVar3 + 0x18) = puVar4;
      func_0x000107c615f0(lVar6);
      func_0x000107c61174(puVar2);
      uVar5 = 1;
      func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf7fc0,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(puVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar5);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102980e30; end: 1029810ab;  */

/* WARNING: Possible PIC construction at 0x000102981064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102981068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102980e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112ed10d8);
  if (lVar7 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed1080);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed1080))[1];
    lVar2 = 0x112d9f930;
    func_0x0001000285a8(0x112d9f930,&UNK_10db9f4c0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 4;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    puVar5 = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar2 + 0x20) = 0x49726f7461657263;
    *(undefined8 *)(lVar2 + 0x28) = 0xe900000000000064;
    *(undefined **)(lVar2 + 0x38) = puVar5;
    *(undefined8 *)(lVar2 + 0x40) = param_1;
    *(undefined8 *)(lVar2 + 0x48) = param_2;
    *(undefined **)(lVar2 + 0x58) = puVar5;
    *(undefined8 *)(lVar2 + 0x60) = 0x4e79616c70736964;
    *(undefined8 *)(lVar2 + 0x68) = 0xeb00000000656d61;
    *(undefined **)(lVar2 + 0x98) = puVar5;
    *(undefined **)(lVar2 + 0x78) = puVar5;
    *(undefined8 *)(lVar2 + 0x80) = param_3;
    *(undefined8 *)(lVar2 + 0x88) = param_4;
    FUN_102983da0(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c615f0(lVar7);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c5ff4c(lVar2);
    puVar3 = PTR_PTR_1126b02a8;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c46d50();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
    puVar5 = &UNK_110575c98;
    func_0x000107c613fc(&UNK_110575c98,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_110575e50;
    func_0x000107c613fc(&UNK_110575e50,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(long *)(puVar6 + 0x18) = lVar7;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    puVar5 = &UNK_110575e78;
    func_0x000107c613fc(&UNK_110575e78,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10daf7f98;
    *(undefined **)(puVar5 + 0x18) = puVar6;
    func_0x000107c615f0(lVar7);
    func_0x000107c61174(puVar3);
    func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf7fa8,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1029810ac; end: 10298111b;  */

void FUN_1029810ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102984000,uVar1,uVar2);
  return;
}



/* Entry: 10298111c; end: 102981157;  */

void FUN_10298111c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102981154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102981158; end: 1029811c7;  */

void FUN_102981158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029811c8,uVar1,uVar2);
  return;
}



/* Entry: 1029811c8; end: 102981237;  */

void FUN_1029811c8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c445ac(*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102981234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102981238; end: 102981297; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider init] */

void FUN_102981238(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfileSubscriberFanPassSectionImplementation.MyProfileSubscriberFanPassSectionComposerContextProvider"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102981264);
  (*pcVar1)();
}



/* Entry: 102981298; end: 102981367; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029812c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010298134c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029812c8) */
/* WARNING: Removing unreachable block (ram,0x000102981350) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102981298(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed1068));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed1070));
  return;
}



/* Entry: 102981368; end: 102981387;  */

void FUN_102981368(void)

{
  func_0x000107c61168(&PTR_PTR_112874ec0);
  return;
}



/* Entry: 102981388; end: 1029815db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102981388(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  lVar6 = _DAT_112ed10a0;
  if ((*(char *)(unaff_x20 + _DAT_112ed1088) == '\x01') &&
     (((*(byte *)(unaff_x20 + _DAT_112ed1090) & 1) != 0 ||
      (0 < *(long *)(unaff_x20 + _DAT_112ed10a0) || *(char *)(unaff_x20 + _DAT_112ed10a8) != '\0')))
     ) {
    puVar1 = PTR_PTR_1126abb68;
    func_0x000107c610f8(PTR_PTR_1126abb68);
    func_0x000107c453e4();
    puVar2 = puVar1;
    FUN_102980aac();
    func_0x000107c52218((double)*(long *)(unaff_x20 + lVar6),puVar1);
    lVar6 = _DAT_112ed10b0;
    uVar8 = *(ulong *)(unaff_x20 + _DAT_112ed10b0);
    if (uVar8 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar8 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar8) {
        uVar3 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + lVar6);
      FUN_102983da0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar4 = uVar9;
      func_0x000107c61434(uVar9);
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar9);
      func_0x000107c53174(puVar1);
      func_0x000107c61170(uVar4);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c52134(puVar1);
    func_0x000107c61170(puVar5);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ed1098);
    FUN_102983da0(0,0x112dc3fe0,&PTR_PTR_1126a7a80);
    uVar4 = uVar9;
    func_0x000107c61434(uVar9);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar9);
    func_0x000107c5a25c(puVar1);
    func_0x000107c61170(uVar4);
    lVar6 = *(long *)(unaff_x20 + _DAT_112ed1068);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      if (lVar7 != 0) {
        FUN_102983da0(0,0x112ed1118,&PTR_PTR_1126abb70);
        func_0x000107c614e8();
        lVar6 = lVar7;
        func_0x000107c40994(lVar7);
        func_0x000107c61180();
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar2);
        return lVar6;
      }
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  return 0;
}



/* Entry: 1029815dc; end: 10298160f; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider valdiContext] */

void FUN_1029815dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102981388();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102981610; end: 1029817f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102981610(void)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar3 = _DAT_112ed10b8;
  if (*(long *)(unaff_x20 + _DAT_112ed10b8) == 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ed1070);
    uVar7 = uVar10;
    func_0x000107c40cfc();
    func_0x000107c61180();
    puVar5 = &UNK_110575c98;
    func_0x000107c613fc(&UNK_110575c98,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_50 = FUN_102982a50;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10104e6fc;
    puStack_58 = &UNK_110575cb0;
    ppuVar6 = &puStack_70;
    puStack_48 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_48);
    uVar9 = uVar7;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar7);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = uVar9;
    func_0x000107c61170(uVar7);
    if (*(char *)(unaff_x20 + _DAT_112ed1088) == '\x01') {
      cVar2 = *(char *)(unaff_x20 + _DAT_112ed1090);
      puVar5 = &UNK_110575c98;
      func_0x000107c613fc(&UNK_110575c98,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      bVar4 = cVar2 == '\0';
      puVar8 = &UNK_110575d10;
      if (bVar4) {
        puVar8 = &UNK_110575ce8;
      }
      puVar1 = &UNK_10daf7f38;
      if (bVar4) {
        puVar1 = &UNK_10daf7f28;
      }
      func_0x000107c613fc(puVar8,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar5;
      *(undefined8 *)(puVar8 + 0x18) = uVar10;
      func_0x000107c615f0(uVar10);
      uVar7 = 1;
      func_0x0001001ca524(1,0x100,0x60,4,0,0,puVar1,puVar8,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar8);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ed10c0);
      *(undefined8 *)(unaff_x20 + _DAT_112ed10c0) = uVar7;
      func_0x000107c61574(uVar9);
    }
  }
  return;
}



/* Entry: 1029817f4; end: 102981993;  */

void FUN_1029817f4(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar5;
  undefined8 uVar6;
  long alStack_70 [2];
  long lStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  undefined *puVar4;
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    alStack_70[0] = 0;
    uVar3 = 0;
    func_0x000103fd7dd8(0);
    func_0x000107c5f9e4(param_1,alStack_70,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
    lVar1 = alStack_70[0];
    if (alStack_70[0] != 0) {
      puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x000107c61168();
      iVar2 = (int)puVar4;
      func_0x000107c4a02c();
      if (iVar2 == 0) {
        puVar4 = &UNK_110575c98;
        func_0x000107c613fc(&UNK_110575c98,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,param_2);
        puVar5 = &UNK_110575db0;
        func_0x000107c613fc(&UNK_110575db0,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(long *)(puVar5 + 0x18) = lVar1;
        puVar4 = &UNK_110575dd8;
        func_0x000107c613fc(&UNK_110575dd8,0x20,7);
        *(undefined **)(puVar4 + 0x10) = &UNK_10daf7f60;
        *(undefined **)(puVar4 + 0x18) = puVar5;
        uVar3 = 0x112d518a8;
        func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
        uVar6 = 1;
        func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf7f70,puVar4,uVar3);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(uVar6);
      }
      else {
        func_0x000107c5fcec(0);
        lStack_58 = lVar1;
        lStack_60 = param_2;
        func_0x000100f7a598(FUN_1029832a0,alStack_70,
                            "MyProfileSubscriberFanPassSectionImplementation/MyProfileSubscriberFanPassSectionComposerContextProvider.swift"
                            ,0x6e,2,0xb5);
        func_0x000107c6142c(lVar1);
      }
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102981994; end: 102981f6f;  */

/* WARNING: Removing unreachable block (ram,0x000102981f64) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102981994(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  undefined *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined1 auStack_b8 [32];
  undefined *apuStack_98 [3];
  undefined *puStack_80;
  undefined *apuStack_78 [3];
  
  puVar13 = (ulong *)(param_1 + 0x40);
  uVar16 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (-uVar16 < 0x40) {
    uVar19 = ~(-1L << (-uVar16 & 0x3f));
  }
  uVar19 = uVar19 & *puVar13;
  func_0x000107c61434();
  lVar14 = 0;
  lVar4 = lVar14;
  lVar5 = _DAT_113041e98;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    while (_DAT_113041e98 = lVar5, uVar19 != 0) {
      uVar3 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar19 - 1 & uVar19;
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 +
                        lVar14 * 0x200);
      func_0x000107c61428(lVar11 + lVar5,auStack_b8,0,0);
      pbVar1 = (byte *)(lVar11 + lVar5);
      lVar4 = lVar14;
      lVar5 = _DAT_113041e98;
      if ((*pbVar1 & 1) != 0) {
        func_0x000107c61174();
        puVar8 = puVar12;
        func_0x000107c61558();
        apuStack_78[0] = puVar12;
        if (((ulong)puVar8 & 1) == 0) {
          FUN_102983c3c(0,*(long *)(puVar12 + 0x10) + 1,1);
        }
        uVar3 = *(ulong *)(apuStack_78[0] + 0x10);
        if (*(ulong *)(apuStack_78[0] + 0x18) >> 1 <= uVar3) {
          FUN_102983c3c(1 < *(ulong *)(apuStack_78[0] + 0x18),uVar3 + 1,1);
        }
        *(ulong *)(apuStack_78[0] + 0x10) = uVar3 + 1;
        *(long *)(apuStack_78[0] + uVar3 * 8 + 0x20) = lVar11;
        lVar5 = _DAT_113041e98;
        puVar12 = apuStack_78[0];
      }
    }
    bVar7 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102981d48);
      (*pcVar6)();
    }
    if ((long)(0x3f - uVar16 >> 6) <= lVar14) break;
    uVar19 = puVar13[lVar14];
  }
  func_0x000101714b0c(param_1,puVar13,~uVar16,lVar4,0);
  if (((long)puVar12 < 0) || (((ulong)puVar12 >> 0x3e & 1) != 0)) {
    puVar8 = puVar12;
    func_0x000107c60480();
    puVar17 = puVar12;
    func_0x000107c60480();
  }
  else {
    puVar17 = *(undefined **)(puVar12 + 0x10);
    puVar8 = puVar17;
  }
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar17 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar12 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar12 + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102981d50);
            (*pcVar6)();
          }
          puVar9 = *(undefined **)(puVar12 + (long)puVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar9 = puVar15;
          FUN_102982e0c(puVar15,puVar12);
        }
        lVar14 = _DAT_113041eb8;
        puVar2 = puVar15 + 1;
        if (SCARRY8((long)puVar15,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102981d4c);
          (*pcVar6)();
        }
        func_0x000107c61428(puVar9 + _DAT_113041eb8,apuStack_78,0,0);
        if (*(long *)(puVar9 + lVar14) != 4) break;
        puVar15 = puVar10;
        func_0x000107c61558();
        apuStack_98[0] = puVar10;
        if (((ulong)puVar15 & 1) == 0) {
          FUN_102983c3c(0,*(long *)(puVar10 + 0x10) + 1,1);
        }
        uVar19 = *(ulong *)(apuStack_98[0] + 0x10);
        if (*(ulong *)(apuStack_98[0] + 0x18) >> 1 <= uVar19) {
          FUN_102983c3c(1 < *(ulong *)(apuStack_98[0] + 0x18),uVar19 + 1,1);
        }
        *(ulong *)(apuStack_98[0] + 0x10) = uVar19 + 1;
        *(undefined **)(apuStack_98[0] + uVar19 * 8 + 0x20) = puVar9;
        puVar15 = puVar2;
        puVar10 = apuStack_98[0];
        if (puVar2 == puVar17) goto LAB_102981c4c;
      }
      func_0x000107c61170(puVar9);
      puVar15 = puVar15 + 1;
    } while (puVar2 != puVar17);
  }
LAB_102981c4c:
  func_0x000107c61574(puVar12);
  if (((long)puVar10 < 0) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
    puVar12 = puVar10;
    func_0x000107c60480();
  }
  else {
    puVar12 = *(undefined **)(puVar10 + 0x10);
  }
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c61574(puVar10);
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010173f28c(0,(ulong)puVar12 & ((long)puVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102981f64);
      (*pcVar6)();
    }
    puVar15 = (undefined *)0x0;
    do {
      puVar17 = puStack_80;
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        puVar9 = *(undefined **)(puVar10 + (long)puVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar9 = puVar15;
        FUN_102982e0c(puVar15,puVar10);
      }
      lVar14 = _DAT_113041ea8;
      func_0x000107c61428(puVar9 + _DAT_113041ea8,apuStack_98,0,0);
      uVar18 = *(undefined8 *)(puVar9 + lVar14);
      func_0x000107c61170(puVar9);
      uVar19 = *(ulong *)(puVar17 + 0x10);
      puStack_80 = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar19) {
        func_0x00010173f28c(1 < *(ulong *)(puVar17 + 0x18),uVar19 + 1,1);
      }
      puVar17 = puStack_80;
      puVar15 = puVar15 + 1;
      *(ulong *)(puStack_80 + 0x10) = uVar19 + 1;
      *(undefined8 *)(puStack_80 + uVar19 * 8 + 0x20) = uVar18;
    } while (puVar12 != puVar15);
    func_0x000107c61574(puVar10);
  }
  puStack_80 = puVar17;
  func_0x000107c61434(puVar17);
  FUN_102983328(&puStack_80);
  func_0x000107c6142c(puVar17);
  puVar12 = puStack_80;
  lVar14 = *(long *)(puStack_80 + 0x10);
  if (lVar14 == 0) {
    func_0x000107c61574(puStack_80);
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001002ecff4(0,lVar14,0);
    do {
      puVar17 = puStack_80;
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c47580();
      uVar19 = *(ulong *)(puVar17 + 0x10);
      puStack_80 = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar19) {
        func_0x0001002ecff4(1 < *(ulong *)(puVar17 + 0x18),uVar19 + 1,1);
      }
      puVar17 = puStack_80;
      *(ulong *)(puStack_80 + 0x10) = uVar19 + 1;
      *(undefined **)(puStack_80 + uVar19 * 8 + 0x20) = puVar10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    func_0x000107c61574(puVar12);
  }
  lVar14 = _DAT_112ed10a0;
  puVar12 = *(undefined **)(unaff_x20 + _DAT_112ed10a0);
  if (puVar8 == puVar12) {
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112ed10b0);
    func_0x000107c61434(uVar18);
    puVar12 = puVar17;
    FUN_102982bb4(puVar17,uVar18,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c6142c(uVar18);
    if (((ulong)puVar12 & 1) != 0) {
      func_0x000107c6142c(puVar17);
      return;
    }
    puVar12 = *(undefined **)(unaff_x20 + lVar14);
  }
  if ((long)puVar12 < (long)puVar8) {
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112ed1098);
    *(undefined **)(unaff_x20 + _DAT_112ed1098) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar18);
  }
  *(undefined **)(unaff_x20 + lVar14) = puVar8;
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112ed10b0);
  *(undefined **)(unaff_x20 + _DAT_112ed10b0) = puVar17;
  func_0x000107c6142c(uVar18);
  lVar14 = unaff_x20 + _DAT_112ed10c8;
  func_0x000107c61618();
  if (lVar14 != 0) {
    func_0x000107c5dbc4();
    func_0x000107c615e8(lVar14);
  }
  return;
}


