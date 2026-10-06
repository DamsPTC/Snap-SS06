/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047e562c; end: 1047e56a7; -[SCAdMediaCollectionItem init] */

void FUN_1047e562c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaCollectionItemWrapper.swift",0x2e,2,0x59,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047e5674);
  (*pcVar1)();
}



/* Entry: 1047e56a8; end: 1047e57bb; -[SCAdMediaCollectionItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e56a8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fd78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fd80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308fd88 + 8))
  ;
  return;
}



/* Entry: 1047e57bc; end: 1047e57db;  */

void FUN_1047e57bc(void)

{
  _objc_opt_self(&PTR_PTR_1129d6588);
  return;
}



/* Entry: 1047e57dc; end: 1047e580b;  */

void FUN_1047e57dc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e5f10(param_1);
  return;
}



/* Entry: 1047e580c; end: 1047e5957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e580c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_11308fdc0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047e6e30();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11308fdc8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308fdd0) == 0) {
    lVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047daef8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308fdd8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1048211a0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308fde0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047e5958; end: 1047e5bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047e5958(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long lStack_78;
  long alStack_70 [4];
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x0001047e6c94(param_1,alStack_70,0x112d387f8,&UNK_10d902650);
  if (alStack_70[3] == 0) {
    func_0x0001047e6cdc(alStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar3 = &lStack_78;
    _swift_dynamicCast(plVar3,alStack_70,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar3 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_11308fdc0) == 0) {
        uVar6 = (uint)(*(long *)(lStack_78 + _DAT_11308fdc0) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_78 + _DAT_11308fdc0);
        if (lVar7 == 0) {
          lVar4 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar4 = 0;
          FUN_1047e97cc();
        }
        alStack_70[0] = lVar7;
        alStack_70[3] = lVar4;
        _objc_retain(lVar7);
        uVar6 = 0;
        FUN_1047e7148();
        func_0x0001047e6cdc(alStack_70,0x112d387f8,&UNK_10d902650);
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_11308fdc8);
      if (lVar7 == 0) {
        uVar1 = (uint)(*(long *)(lStack_78 + _DAT_11308fdc8) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar1 = (uint)lVar7;
      }
      if (*(long *)(unaff_x20 + _DAT_11308fdd0) == 0) {
        uVar8 = (uint)(*(long *)(lStack_78 + _DAT_11308fdd0) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_78 + _DAT_11308fdd0);
        if (lVar7 == 0) {
          lVar4 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar4 = 0;
          FUN_1047dd0e0();
        }
        alStack_70[0] = lVar7;
        alStack_70[3] = lVar4;
        _objc_retain(lVar7);
        uVar8 = 0;
        FUN_1047db24c();
        func_0x0001047e6cdc(alStack_70,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11308fdd8) == 0) {
        uVar2 = (uint)(*(long *)(lStack_78 + _DAT_11308fdd8) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_78 + _DAT_11308fdd8);
        if (lVar7 == 0) {
          lVar4 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar4 = 0;
          FUN_104822514();
        }
        alStack_70[0] = lVar7;
        alStack_70[3] = lVar4;
        _objc_retain(lVar7);
        plVar3 = alStack_70;
        FUN_1048212d0(plVar3);
        uVar2 = (uint)plVar3;
        func_0x0001047e6cdc(alStack_70,0x112d387f8,&UNK_10d902650);
      }
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308fde0);
      uVar9 = *(undefined8 *)(lStack_78 + _DAT_11308fde0);
      _objc_release(lStack_78);
      if ((uVar6 & uVar1 & uVar8 & 1) != 0) {
        return uVar2 & (int)uVar5 == (int)uVar9;
      }
    }
  }
  return 0;
}



/* Entry: 1047e5bc0; end: 1047e5d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e5bc0(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_2b0 [608];
  
  bVar1 = *(long *)(param_2 + _DAT_11308fdc0) == 0;
  if (!bVar1) {
    _objc_retain();
    func_0x0001047e75ac(param_1);
  }
  lVar3 = 0;
  FUN_104739264();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,bVar1,1,lVar3);
  lVar3 = _DAT_11308fdc8;
  lVar4 = 0;
  FUN_10472f4dc();
  lVar5 = (long)*(int *)(lVar4 + 0x14);
  if (*(long *)(param_2 + lVar3) == 0) {
    func_0x000101551a34(auStack_2b0);
    _memcpy(param_1 + lVar5,auStack_2b0,0x260);
  }
  else {
    _objc_retain();
    FUN_104833ab4(auStack_2b0);
    _memcpy(param_1 + lVar5,auStack_2b0,0x260);
    func_0x000101553e8c(param_1 + lVar5);
  }
  iVar2 = *(int *)(lVar4 + 0x18);
  bVar1 = *(long *)(param_2 + _DAT_11308fdd0) == 0;
  if (!bVar1) {
    _objc_retain();
    FUN_1047dc600(param_1 + iVar2);
  }
  lVar3 = 0;
  FUN_10470fbcc();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1 + iVar2,bVar1,1,lVar3);
  iVar2 = *(int *)(lVar4 + 0x1c);
  bVar1 = *(long *)(param_2 + _DAT_11308fdd8) == 0;
  if (!bVar1) {
    _objc_retain();
    FUN_10482151c(param_1 + iVar2);
  }
  lVar3 = 0;
  FUN_10475cf44();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1 + iVar2,bVar1,1,lVar3);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11308fde0);
  _objc_release(param_2);
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x20)) = uVar6;
  return;
}



/* Entry: 1047e5d64; end: 1047e5d73; -[SCAdMediaCollectionItemAttachment deepLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e5d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fdc0));
  return;
}



/* Entry: 1047e5d74; end: 1047e5d83; -[SCAdMediaCollectionItemAttachment webviewAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e5d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fdc8));
  return;
}



/* Entry: 1047e5d84; end: 1047e5d93; -[SCAdMediaCollectionItemAttachment appInstall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e5d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fdd0));
  return;
}



/* Entry: 1047e5d94; end: 1047e5da3; -[SCAdMediaCollectionItemAttachment showcaseAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e5d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fdd8));
  return;
}



/* Entry: 1047e5da4; end: 1047e5db3; -[SCAdMediaCollectionItemAttachment adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e5da4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fde0);
}



/* Entry: 1047e5db4; end: 1047e5e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e5db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fdc0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308fdc8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fdd0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308fdd8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308fde0) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e5e50; end: 1047e5f0f; -[SCAdMediaCollectionItemAttachment initWithDeepLink:webviewAttachment:appInstall:showcaseAttachment:adType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e5e50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308fdc0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308fdc8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308fdd0) = param_5;
  *(undefined8 *)(param_1 + _DAT_11308fdd8) = param_6;
  *(undefined8 *)(param_1 + _DAT_11308fde0) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1047e5f10; end: 1047e6417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047e5f10(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_800 [8];
  long lStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  undefined1 *puStack_7e0;
  long lStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  undefined1 auStack_798 [608];
  undefined1 auStack_538 [8];
  long lStack_530;
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [616];
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  lVar2 = 0;
  lStack_7a8 = lVar3;
  FUN_10475cf44();
  lStack_7b8 = *(long *)(lVar2 + -8);
  lStack_7b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_7b8 + 0x40));
  puStack_7e0 = auStack_800 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)(auStack_800 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar3 = 0x112db3cc8;
  lStack_7e8 = lVar5;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar5 - extraout_x8_00;
  lVar3 = 0;
  lStack_7c0 = lVar5;
  FUN_10470fbcc();
  lStack_7d0 = *(long *)(lVar3 + -8);
  lStack_7c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_7d0 + 0x40));
  lVar5 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_7f0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12_00;
  lVar3 = 0x112db3cd8;
  lStack_7f8 = lVar5;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar5 - extraout_x8_02;
  lVar2 = 0;
  lStack_7d8 = lVar5;
  FUN_104739264();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = lVar5 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar5 - extraout_x12_01;
  lVar3 = 0x112db3ce0;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_04;
  func_0x0001047e6c94(param_1,lVar9,0x112db3ce0,&UNK_10d95e240);
  lVar3 = lVar9;
  (**(code **)(lVar7 + 0x30))(lVar9,1,lVar2);
  lVar2 = 0;
  if ((int)lVar3 != 1) {
    func_0x0001047e6d1c(lVar9,lVar8,FUN_104739264);
    func_0x0001047e6d60(lVar8,lVar5,FUN_104739264);
    uVar4 = 0;
    FUN_1047e97cc(0);
    _objc_allocWithZone();
    FUN_1047e7f98(lVar5,uVar4);
    func_0x0001047e6da4(lVar8,FUN_104739264);
    lVar2 = lVar5;
  }
  *(long *)(unaff_x20 + _DAT_11308fdc0) = lVar2;
  lVar3 = 0;
  FUN_10472f4dc();
  _memcpy(auStack_528,param_1 + *(int *)(lVar3 + 0x14),0x260);
  iVar1 = (int)auStack_528;
  func_0x0001015538ec();
  puVar6 = (undefined1 *)0x0;
  if (iVar1 != 1) {
    _memcpy(auStack_2c8,auStack_528,0x260);
    FUN_104834c18(0);
    _objc_allocWithZone();
    func_0x0001047e6c94(auStack_528,auStack_798,0x112db3ce8,&UNK_10d98ff60);
    puVar6 = auStack_2c8;
    FUN_1048331f8();
    func_0x0001047e6cdc(auStack_528,0x112db3ce8,&UNK_10d98ff60);
  }
  lVar5 = lStack_7d8;
  *(undefined1 **)(unaff_x20 + _DAT_11308fdc8) = puVar6;
  func_0x0001047e6c94(param_1 + *(int *)(lVar3 + 0x18),lStack_7d8,0x112db3cd8,&UNK_10dd317d0);
  lVar7 = lVar5;
  (**(code **)(lStack_7d0 + 0x30))(lVar5,1,lStack_7c8);
  lVar2 = lStack_7f8;
  if ((int)lVar7 == 1) {
    lVar5 = 0;
  }
  else {
    func_0x0001047e6d1c(lVar5,lStack_7f8,FUN_10470fbcc);
    lVar5 = lStack_7f0;
    func_0x0001047e6d60(lVar2,lStack_7f0,FUN_10470fbcc);
    FUN_1047dd0e0(0);
    _objc_allocWithZone();
    FUN_1047da204();
    func_0x0001047e6da4(lVar2,FUN_10470fbcc);
  }
  lVar7 = lStack_7c0;
  *(long *)(unaff_x20 + _DAT_11308fdd0) = lVar5;
  func_0x0001047e6c94(param_1 + *(int *)(lVar3 + 0x1c),lStack_7c0,0x112db3cc8,&UNK_10d98e570);
  lVar5 = lVar7;
  (**(code **)(lStack_7b8 + 0x30))(lVar7,1,lStack_7b0);
  lVar2 = lStack_7e8;
  if ((int)lVar5 == 1) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    func_0x0001047e6d1c(lVar7,lStack_7e8,FUN_10475cf44);
    puVar6 = puStack_7e0;
    func_0x0001047e6d60(lVar2,puStack_7e0,FUN_10475cf44);
    FUN_104822514(0);
    _objc_allocWithZone();
    func_0x000104821924();
    func_0x0001047e6da4(lVar2,FUN_10475cf44);
  }
  *(undefined1 **)(unaff_x20 + _DAT_11308fdd8) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_11308fde0) = *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x20));
  lStack_530 = lStack_7a8;
  puVar6 = auStack_538;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  func_0x0001047e6da4(param_1,FUN_10472f4dc);
  return puVar6;
}



/* Entry: 1047e6418; end: 1047e644b; -[SCAdMediaCollectionItemAttachment hash] */

undefined8 FUN_1047e6418(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047e580c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047e644c; end: 1047e64db; -[SCAdMediaCollectionItemAttachment isEqual:] */

uint FUN_1047e644c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047e5958(&uStack_40);
  _objc_release(param_1);
  func_0x0001047e6cdc(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1047e64dc; end: 1047e64df; -[SCAdMediaCollectionItemAttachment copyWithZone:] */

void FUN_1047e64dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047e64e0; end: 1047e665f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e64e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4e494c5f50454544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e494c5f50454544,0xe90000000000004b);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20ecb0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x54534e495f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54534e495f505041,0xeb000000004c4c41);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20ecd0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x455059545f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441,0xe700000000000000);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047e6660; end: 1047e66af; -[SCAdMediaCollectionItemAttachment encodeWithCoder:] */

void FUN_1047e6660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047e64e0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047e66b0; end: 1047e66df;  */

void FUN_1047e66b0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e66e0(param_1);
  return;
}



/* Entry: 1047e66e0; end: 1047e6b0b;  */

undefined8 FUN_1047e66e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0x4e494c5f50454544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e494c5f50454544,0xe90000000000004b);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x0001047e6cdc(&uStack_70,0x112d387f8,&UNK_10d902650);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047e97cc(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar2,6);
    uVar2 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20ecb0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x0001047e6cdc(&uStack_70,0x112d387f8,&UNK_10d902650);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    FUN_104834c18(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar5,6);
    uVar5 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0x54534e495f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54534e495f505041,0xeb000000004c4c41);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x0001047e6cdc(&uStack_70,0x112d387f8,&UNK_10d902650);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    FUN_1047dd0e0(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar6,6);
    uVar6 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar7 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20ecd0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x0001047e6cdc(&uStack_70,0x112d387f8,&UNK_10d902650);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    FUN_104822514(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar7,6);
    uVar7 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
    }
  }
  uVar8 = 0x455059545f4441;
  uVar9 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441);
  lVar3 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar8);
  func_0x0001042a6cc4(lVar3);
  if ((uVar9 & 0xff) == 1) {
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    func_0x00010c009a40();
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  return unaff_x20;
}



/* Entry: 1047e6b0c; end: 1047e6b33; -[SCAdMediaCollectionItemAttachment initWithCoder:] */

void FUN_1047e6b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047e66e0();
  return;
}



/* Entry: 1047e6b34; end: 1047e6bbf; -[SCAdMediaCollectionItemAttachment description] */

void FUN_1047e6b34(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10472f4dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1047e5bc0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001047e6da4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_10472f4dc);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047e6bc0; end: 1047e6c3b; -[SCAdMediaCollectionItemAttachment init] */

void FUN_1047e6bc0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaCollectionItemAttachmentWrapper.swift",0x38,2,0x65,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047e6c08);
  (*pcVar1)();
}



/* Entry: 1047e6c3c; end: 1047e6ddf; -[SCAdMediaCollectionItemAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e6c3c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fdc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fdc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fdd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308fdd8));
  return;
}



/* Entry: 1047e6de0; end: 1047e6dff;  */

void FUN_1047e6de0(void)

{
  _objc_opt_self(&PTR_PTR_1129d6670);
  return;
}



/* Entry: 1047e6e00; end: 1047e6e2f;  */

void FUN_1047e6e00(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e7f98(param_1);
  return;
}



/* Entry: 1047e6e30; end: 1047e7147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e6e30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fe10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308fe10))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fe18))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fe18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fe20))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fe20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fe28))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fe28);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fe30);
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308fe38) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fb684();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308fe40))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fe40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308fe48));
  lVar3 = *(long *)(unaff_x20 + _DAT_11308fe50);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047fc144(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
    lVar4 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  if (*(long *)(unaff_x20 + _DAT_11308fe58) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fe164();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar4);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11308fe60);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    dVar5 = 0.0;
    if (*(double *)(lVar3 + _DAT_11308fa20) != 0.0) {
      dVar5 = *(double *)(lVar3 + _DAT_11308fa20);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar5);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar3 + _DAT_11308fa28));
    uVar2 = *(undefined8 *)(lVar3 + _DAT_11308fa30);
    __ss6HasherV8_combineyySuF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047e7148; end: 1047e79eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047e7148(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long unaff_x20;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  long alStack_80 [4];
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x0001047e9704(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar8 = &lStack_88;
    _swift_dynamicCast(plVar8,alStack_80,PTR___sypN_11034f1a8 + 8,lVar11,6);
    if (((ulong)plVar8 & 1) != 0) {
      lVar11 = *(long *)(unaff_x20 + _DAT_11308fe10);
      if (lVar11 == *(long *)(lStack_88 + _DAT_11308fe10) &&
          ((long *)(unaff_x20 + _DAT_11308fe10))[1] == ((long *)(lStack_88 + _DAT_11308fe10))[1]) {
        uStack_8c = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_8c = (uint)lVar11;
      }
      lVar11 = ((long *)(unaff_x20 + _DAT_11308fe18))[1];
      lVar12 = ((long *)(lStack_88 + _DAT_11308fe18))[1];
      if (lVar11 == 0 || lVar12 == 0) {
        uStack_90 = (uint)(lVar11 == 0 && lVar12 == 0);
      }
      else {
        lVar9 = *(long *)(unaff_x20 + _DAT_11308fe18);
        if (lVar9 == *(long *)(lStack_88 + _DAT_11308fe18) && lVar11 == lVar12) {
          uStack_90 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_90 = (uint)lVar9;
        }
      }
      lVar11 = ((long *)(unaff_x20 + _DAT_11308fe20))[1];
      lVar12 = ((long *)(lStack_88 + _DAT_11308fe20))[1];
      uVar6 = (uint)(lVar11 == 0 && lVar12 == 0);
      if ((lVar11 != 0) && (lVar12 != 0)) {
        lVar9 = *(long *)(unaff_x20 + _DAT_11308fe20);
        if ((lVar9 == *(long *)(lStack_88 + _DAT_11308fe20)) && (lVar11 == lVar12)) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar6 = (uint)lVar9;
        }
      }
      lVar11 = ((long *)(unaff_x20 + _DAT_11308fe28))[1];
      lVar12 = ((long *)(lStack_88 + _DAT_11308fe28))[1];
      uVar14 = (uint)(lVar11 == 0 && lVar12 == 0);
      if ((lVar11 != 0) && (lVar12 != 0)) {
        lVar9 = *(long *)(unaff_x20 + _DAT_11308fe28);
        if ((lVar9 == *(long *)(lStack_88 + _DAT_11308fe28)) && (lVar11 == lVar12)) {
          uVar14 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar14 = (uint)lVar9;
        }
      }
      iVar2 = *(int *)(unaff_x20 + _DAT_11308fe30);
      iVar3 = *(int *)(lStack_88 + _DAT_11308fe30);
      if (*(long *)(unaff_x20 + _DAT_11308fe38) == 0) {
        uVar15 = (uint)(*(long *)(lStack_88 + _DAT_11308fe38) == 0);
      }
      else {
        lVar11 = *(long *)(lStack_88 + _DAT_11308fe38);
        if (lVar11 == 0) {
          lVar12 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar12 = 0;
          FUN_1047fc144();
        }
        alStack_80[0] = lVar11;
        alStack_80[3] = lVar12;
        _objc_retain(lVar11);
        uVar15 = 0;
        func_0x0001047fb744();
        func_0x00010006e7f4(alStack_80);
      }
      lVar11 = ((long *)(unaff_x20 + _DAT_11308fe40))[1];
      lVar12 = ((long *)(lStack_88 + _DAT_11308fe40))[1];
      uVar16 = (uint)(lVar11 == 0 && lVar12 == 0);
      if ((lVar11 != 0) && (lVar12 != 0)) {
        lVar9 = *(long *)(unaff_x20 + _DAT_11308fe40);
        if ((lVar9 == *(long *)(lStack_88 + _DAT_11308fe40)) && (lVar11 == lVar12)) {
          uVar16 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar16 = (uint)lVar9;
        }
      }
      iVar4 = *(int *)(unaff_x20 + _DAT_11308fe48);
      iVar5 = *(int *)(lStack_88 + _DAT_11308fe48);
      lVar12 = *(long *)(unaff_x20 + _DAT_11308fe50);
      lVar11 = *(long *)(lStack_88 + _DAT_11308fe50);
      uVar17 = (uint)(lVar12 == 0 && lVar11 == 0);
      if ((lVar12 != 0) && (lVar11 != 0)) {
        _swift_bridgeObjectRetain(lVar11);
        lVar9 = lVar12;
        _swift_bridgeObjectRetain();
        uVar17 = (uint)lVar9;
        func_0x00010470d328();
        _swift_bridgeObjectRelease(lVar12);
        _swift_bridgeObjectRelease(lVar11);
      }
      if (*(long *)(unaff_x20 + _DAT_11308fe58) == 0) {
        uVar13 = (uint)(*(long *)(lStack_88 + _DAT_11308fe58) == 0);
      }
      else {
        lVar11 = *(long *)(lStack_88 + _DAT_11308fe58);
        if (lVar11 == 0) {
          lVar12 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar12 = 0;
          FUN_1047ff414();
        }
        alStack_80[0] = lVar11;
        alStack_80[3] = lVar12;
        _objc_retain(lVar11);
        plVar8 = alStack_80;
        FUN_1047fe288(plVar8);
        uVar13 = (uint)plVar8;
        func_0x00010006e7f4(alStack_80);
      }
      if (*(long *)(unaff_x20 + _DAT_11308fe60) == 0) {
        lVar12 = *(long *)(lStack_88 + _DAT_11308fe60);
        lVar11 = lVar12;
        _objc_retain(lVar12);
        _objc_release(lStack_88);
        if (lVar12 == 0) {
          uVar7 = 1;
        }
        else {
          _objc_release(lVar11);
          uVar7 = 0;
        }
      }
      else {
        lVar11 = *(long *)(lStack_88 + _DAT_11308fe60);
        if (lVar11 == 0) {
          uVar10 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          uVar10 = 0;
          FUN_1047d81f0();
        }
        alStack_80[0] = lVar11;
        alStack_80[3] = uVar10;
        _objc_retain(lVar11);
        plVar8 = alStack_80;
        FUN_1047d7d48(plVar8);
        uVar7 = (uint)plVar8;
        _objc_release(lStack_88);
        func_0x00010006e7f4(alStack_80);
      }
      uVar1 = 0;
      if (iVar4 == iVar5) {
        uVar1 = uStack_8c & uStack_90 & uVar6 & uVar14 & iVar2 == iVar3 & uVar15 & uVar16;
      }
      if ((uVar1 & uVar17) == 1) {
        uVar13 = uVar13 & uVar7;
        goto LAB_1047e7580;
      }
    }
  }
  uVar13 = 0;
LAB_1047e7580:
  return uVar13 & 1;
}



/* Entry: 1047e79ec; end: 1047e7a37; -[SCAdMediaDeepLink uri] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e79ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308fe10);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308fe10))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e7a38; end: 1047e7a43; -[SCAdMediaDeepLink appTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e7a38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308fe18))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308fe18);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e7a44; end: 1047e7a4f; -[SCAdMediaDeepLink appId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e7a44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308fe20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308fe20);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e7a50; end: 1047e7a5b; -[SCAdMediaDeepLink deepLinkWebFallbackURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e7a50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308fe28))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308fe28);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e7a5c; end: 1047e7a6b; -[SCAdMediaDeepLink deepLinkFallbackType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e7a5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fe30);
}



/* Entry: 1047e7a6c; end: 1047e7a7b; -[SCAdMediaDeepLink iconRenderInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e7a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fe38));
  return;
}



/* Entry: 1047e7a7c; end: 1047e7a87; -[SCAdMediaDeepLink productPageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e7a7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308fe40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308fe40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e7a88; end: 1047e7adf;  */

void FUN_1047e7a88(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e7ae0; end: 1047e7aef; -[SCAdMediaDeepLink ctaActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e7ae0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fe48);
}



/* Entry: 1047e7af0; end: 1047e7b4b; -[SCAdMediaDeepLink screenshots] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e7af0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11308fe50);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1047fc144(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1047e7b4c; end: 1047e7b5b; -[SCAdMediaDeepLink playableInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e7b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fe58));
  return;
}



/* Entry: 1047e7b5c; end: 1047e7b6b; -[SCAdMediaDeepLink appPopularityInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e7b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fe60));
  return;
}



/* Entry: 1047e7b6c; end: 1047e7e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e7b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fe10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fe18);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fe20);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fe28);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11308fe30) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11308fe38) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fe40);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11308fe48) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11308fe50) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11308fe58) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11308fe60) = param_16;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e7e14; end: 1047e7f97; -[SCAdMediaDeepLink initWithUri:appTitle:appId:deepLinkWebFallbackURL:deepLinkFallbackType:iconRenderInfo:productPageId:ctaActivity:screenshots:playableInfo:appPopularityInfo:] */

void FUN_1047e7e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,long param_11,undefined8 param_12,undefined8 param_13)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    uStack_98 = 0;
    uStack_90 = 0;
    uVar5 = param_2;
  }
  else {
    uStack_98 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = uStack_98;
    uStack_90 = param_4;
  }
  if (param_5 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = uVar5;
    uStack_a0 = param_5;
  }
  if (param_6 == 0) {
    uStack_b0 = 0;
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = uVar5;
    uStack_b0 = param_6;
  }
  _objc_retain();
  lVar1 = param_9;
  _objc_retain();
  lVar2 = param_11;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    param_9 = 0;
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar1);
  }
  if (lVar2 == 0) {
    param_11 = 0;
  }
  else {
    uVar3 = 0;
    FUN_1047fc144(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_11,uVar3);
    _objc_release(lVar2);
  }
  func_0x0001047e7cc0(param_3,param_2,uStack_90,uStack_98,uStack_a0,uStack_a8,uStack_b0,uVar4,
                      param_7,param_8,param_9,uVar5,param_10,param_11,param_12,param_13);
  return;
}



/* Entry: 1047e7f98; end: 1047e8697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047e7f98(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  _swift_getObjectType();
  lVar8 = 0;
  FUN_104742f28();
  lVar14 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)&puStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_130 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12;
  lVar16 = 0x112dcbf00;
  lStack_138 = lVar15;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_00;
  uVar3 = param_1[1];
  puVar21 = (undefined8 *)(unaff_x20 + _DAT_11308fe10);
  *puVar21 = *param_1;
  puVar21[1] = uVar3;
  uVar22 = param_1[3];
  uVar20 = param_1[2];
  uVar24 = param_1[5];
  uVar23 = param_1[4];
  puVar21 = (undefined8 *)(unaff_x20 + _DAT_11308fe18);
  puVar21[1] = param_1[3];
  *puVar21 = uVar20;
  uVar20 = param_1[5];
  puVar21 = (undefined8 *)(unaff_x20 + _DAT_11308fe20);
  puVar21[1] = uVar24;
  *puVar21 = uVar23;
  uVar23 = param_1[6];
  puVar21 = (undefined8 *)(unaff_x20 + _DAT_11308fe28);
  puVar21[1] = param_1[7];
  *puVar21 = uVar23;
  uVar23 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11308fe30) = param_1[8];
  lVar16 = param_1[0xf];
  if (lVar16 == 1) {
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar20);
    plVar9 = (long *)0x0;
  }
  else {
    uVar24 = param_1[9];
    uVar4 = param_1[10];
    lVar19 = param_1[0xb];
    uVar5 = param_1[0xc];
    uVar17 = param_1[0xd];
    uVar6 = param_1[0xe];
    lVar11 = 0;
    lStack_128 = lVar8;
    FUN_1047fc144();
    lVar8 = lVar11;
    _objc_allocWithZone();
    if (lVar19 == 1) {
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar20);
      plVar9 = (long *)0x0;
    }
    else {
      lVar12 = 0;
      FUN_1047fcc14();
      lVar10 = lVar12;
      puStack_140 = param_1;
      _objc_allocWithZone();
      *(undefined8 *)(lVar10 + _DAT_113090438) = uVar24;
      puVar21 = (undefined8 *)(lVar10 + _DAT_113090440);
      *puVar21 = uVar4;
      puVar21[1] = lVar19;
      puVar21 = (undefined8 *)(lVar10 + _DAT_113090448);
      *puVar21 = uVar5;
      puVar21[1] = uVar17;
      puVar18 = PTR_s_init_1125d9248;
      lStack_e0 = lVar10;
      lStack_d8 = lVar12;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(lVar19);
      _swift_bridgeObjectRetain(uVar17);
      param_1 = puStack_140;
      plVar9 = &lStack_e0;
      _objc_msgSendSuper2(plVar9,puVar18);
    }
    *(long **)(lVar8 + _DAT_113090400) = plVar9;
    puVar21 = (undefined8 *)(lVar8 + _DAT_113090408);
    *puVar21 = uVar6;
    puVar21[1] = lVar16;
    puVar18 = PTR_s_init_1125d9248;
    lStack_d0 = lVar8;
    lStack_c8 = lVar11;
    _swift_bridgeObjectRetain(lVar16);
    plVar9 = &lStack_d0;
    _objc_msgSendSuper2(plVar9,puVar18);
    lVar8 = lStack_128;
  }
  *(long **)(unaff_x20 + _DAT_11308fe38) = plVar9;
  uVar23 = param_1[0x10];
  puVar21 = (undefined8 *)(unaff_x20 + _DAT_11308fe40);
  puVar21[1] = param_1[0x11];
  *puVar21 = uVar23;
  uVar23 = param_1[0x11];
  *(undefined8 *)(unaff_x20 + _DAT_11308fe48) = param_1[0x12];
  lVar16 = param_1[0x13];
  if (lVar16 == 0) {
    _swift_bridgeObjectRetain(uVar23);
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar19 = *(long *)(lVar16 + 0x10);
    if (lVar19 == 0) {
      _swift_bridgeObjectRetain(uVar23);
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_140 = param_1;
      lStack_128 = lVar8;
      _swift_bridgeObjectRetain(uVar23);
      func_0x0001046c730c(0,lVar19,0);
      puVar18 = puStack_a0;
      lVar11 = 0;
      FUN_1047fc144();
      puVar21 = (undefined8 *)(lVar16 + 0x28);
      do {
        uVar23 = puVar21[-1];
        uVar20 = *puVar21;
        lVar16 = puVar21[1];
        uVar22 = puVar21[2];
        uVar3 = puVar21[3];
        uVar24 = puVar21[4];
        uVar17 = puVar21[5];
        lVar8 = lVar11;
        _objc_allocWithZone();
        if (lVar16 == 1) {
          func_0x00010470dc90(uVar23,uVar20,1,uVar22,uVar3);
          _swift_bridgeObjectRetain(uVar17);
          plVar9 = (long *)0x0;
        }
        else {
          lVar12 = 0;
          FUN_1047fcc14();
          lVar10 = lVar12;
          _objc_allocWithZone();
          *(undefined8 *)(lVar10 + _DAT_113090438) = uVar23;
          puVar1 = (undefined8 *)(lVar10 + _DAT_113090440);
          *puVar1 = uVar20;
          puVar1[1] = lVar16;
          puVar1 = (undefined8 *)(lVar10 + _DAT_113090448);
          *puVar1 = uVar22;
          puVar1[1] = uVar3;
          func_0x00010470dc90(uVar23,uVar20,lVar16,uVar22,uVar3);
          puVar7 = PTR_s_init_1125d9248;
          lStack_c0 = lVar10;
          lStack_b8 = lVar12;
          _swift_bridgeObjectRetain(uVar17);
          _swift_bridgeObjectRetain(lVar16);
          _swift_bridgeObjectRetain(uVar3);
          plVar9 = &lStack_c0;
          _objc_msgSendSuper2(plVar9,puVar7);
        }
        *(long **)(lVar8 + _DAT_113090400) = plVar9;
        puVar1 = (undefined8 *)(lVar8 + _DAT_113090408);
        *puVar1 = uVar24;
        puVar1[1] = uVar17;
        _swift_bridgeObjectRetain(uVar17);
        func_0x000101553c50(uVar23,uVar20,lVar16,uVar22,uVar3);
        _swift_bridgeObjectRelease(uVar17);
        plVar9 = &lStack_b0;
        lStack_b0 = lVar8;
        lStack_a8 = lVar11;
        _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
        uVar2 = *(ulong *)(puVar18 + 0x10);
        puStack_a0 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar2) {
          func_0x0001046c730c(1 < *(ulong *)(puVar18 + 0x18),uVar2 + 1,1);
        }
        puVar21 = puVar21 + 7;
        *(ulong *)(puStack_a0 + 0x10) = uVar2 + 1;
        *(long **)(puStack_a0 + uVar2 * 8 + 0x20) = plVar9;
        lVar19 = lVar19 + -1;
        puVar18 = puStack_a0;
        param_1 = puStack_140;
        lVar8 = lStack_128;
      } while (lVar19 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11308fe50) = puVar18;
  lVar11 = 0;
  FUN_104739264();
  func_0x0001047e9704((long)param_1 + (long)*(int *)(lVar11 + 0x34),lVar15,0x112dcbf00,
                      &UNK_10dd317c0);
  lVar19 = lVar15;
  (**(code **)(lVar14 + 0x30))(lVar15,1,lVar8);
  lVar16 = lStack_138;
  lVar8 = 0;
  if ((int)lVar19 != 1) {
    FUN_1047108c0(lVar15,lStack_138);
    lVar8 = lStack_130;
    func_0x0001047e974c(lVar16,lStack_130);
    FUN_1047ff414(0);
    _objc_allocWithZone();
    FUN_1047fe8dc();
    func_0x0001047e9790(lVar16,FUN_104742f28);
  }
  *(long *)(unaff_x20 + _DAT_11308fe58) = lVar8;
  puVar21 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x38));
  if (*(char *)(puVar21 + 3) == '\x01') {
    plVar9 = (long *)0x0;
  }
  else {
    uVar23 = puVar21[1];
    uVar3 = puVar21[2];
    uVar20 = *puVar21;
    lVar8 = 0;
    FUN_1047d81f0();
    lVar16 = lVar8;
    _objc_allocWithZone();
    *(undefined8 *)(lVar16 + _DAT_11308fa20) = uVar20;
    *(undefined8 *)(lVar16 + _DAT_11308fa28) = uVar23;
    *(undefined8 *)(lVar16 + _DAT_11308fa30) = uVar3;
    plVar9 = &lStack_98;
    lStack_98 = lVar16;
    lStack_90 = lVar8;
    _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11308fe60) = plVar9;
  puVar13 = auStack_88;
  _objc_msgSendSuper2(puVar13,PTR_s_init_1125d9248);
  func_0x0001047e9790(param_1,FUN_104739264);
  return puVar13;
}



/* Entry: 1047e8698; end: 1047e86cb; -[SCAdMediaDeepLink hash] */

undefined8 FUN_1047e8698(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047e6e30();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047e86cc; end: 1047e874b; -[SCAdMediaDeepLink isEqual:] */

uint FUN_1047e86cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047e7148(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047e874c; end: 1047e874f; -[SCAdMediaDeepLink copyWithZone:] */

void FUN_1047e874c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047e8750; end: 1047e8b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e8750(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fe10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308fe10))[1]);
  uVar1 = 0x495255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495255,0xe300000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fe18))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fe18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x4c5449545f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5449545f505041,0xe900000000000045);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fe20))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fe20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x44495f505041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f505041,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fe28))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fe28);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20ed30);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20ed50);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20ed70);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fe40))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fe40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xef44495f45474150);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x495443415f415443;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495443415f415443,0xec00000059544956);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308fe50);
  if (lVar3 != 0) {
    uVar2 = 0;
    FUN_1047fc144(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
  }
  uVar2 = 0x48534e4545524353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x48534e4545524353,0xeb0000000053544f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar2);
  uVar2 = 0x454c424159414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c424159414c50,0xed00004f464e495f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20e840);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047e8b30; end: 1047e8b7f; -[SCAdMediaDeepLink encodeWithCoder:] */

void FUN_1047e8b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047e8750(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047e8b80; end: 1047e8baf;  */

void FUN_1047e8b80(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e8bb0(param_1);
  return;
}



/* Entry: 1047e8bb0; end: 1047e9517;  */

undefined8 FUN_1047e8bb0(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  undefined8 unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_118;
  long lStack_100;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0x495255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495255,0xe300000000000000);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    plVar4 = &lStack_c0;
    _swift_dynamicCast(plVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar8 = lStack_b8;
    lVar5 = lStack_c0;
    if (((ulong)plVar4 & 1) == 0) {
      _objc_release(param_1);
    }
    else {
      uVar2 = 0x4c5449545f505041;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5449545f505041,0xe900000000000045);
      uVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_d0 = 0;
        lVar9 = 0;
      }
      else {
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar9 = lStack_b8;
        lStack_d0 = lStack_c0;
        if ((int)plVar4 == 0) {
          lStack_d0 = 0;
          lVar9 = 0;
        }
      }
      uVar2 = 0x44495f505041;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f505041,0xe600000000000000);
      uVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_d8 = 0;
        lVar11 = 0;
      }
      else {
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar11 = lStack_b8;
        lStack_d8 = lStack_c0;
        if ((int)plVar4 == 0) {
          lStack_d8 = 0;
          lVar11 = 0;
        }
      }
      uVar2 = 0xd00000000000001a;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20ed30);
      uVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        lStack_e0 = 0;
        lVar13 = 0;
      }
      else {
        plVar4 = &lStack_c0;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar13 = lStack_b8;
        lStack_e0 = lStack_c0;
        if ((int)plVar4 == 0) {
          lStack_e0 = 0;
          lVar13 = 0;
        }
      }
      uVar2 = 0xd000000000000017;
      uVar6 = 0xf20ed50;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017);
      func_0x00010bf66f40();
      _objc_release(uVar2);
      FUN_1046b018c();
      if ((uVar6 & 0xff) == 1) {
        _swift_bridgeObjectRelease(lVar8);
        _objc_release(param_1);
        _swift_bridgeObjectRelease(lVar13);
        _swift_bridgeObjectRelease(lVar11);
      }
      else {
        uVar2 = 0xd000000000000010;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20ed70)
        ;
        uVar3 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (uVar3 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
          _swift_unknownObjectRelease(uVar3);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010006e7f4(&uStack_90);
          lStack_e8 = 0;
        }
        else {
          uVar2 = 0;
          FUN_1047fc144(0);
          plVar4 = &lStack_c0;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
          lStack_e8 = lStack_c0;
          if ((int)plVar4 == 0) {
            lStack_e8 = 0;
          }
        }
        uVar2 = 0x5f544355444f5250;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xef44495f45474150)
        ;
        uVar3 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (uVar3 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
          _swift_unknownObjectRelease(uVar3);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010006e7f4(&uStack_90);
          lStack_100 = 0;
          lVar7 = 0;
        }
        else {
          plVar4 = &lStack_c0;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
          lVar7 = lStack_b8;
          lStack_100 = lStack_c0;
          if ((int)plVar4 == 0) {
            lStack_100 = 0;
            lVar7 = 0;
          }
        }
        uVar2 = 0x495443415f415443;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495443415f415443,0xec00000059544956)
        ;
        uVar3 = param_1;
        func_0x00010bf66f40();
        _objc_release(uVar2);
        if (uVar3 < 2) {
          uVar2 = 0x48534e4545524353;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x48534e4545524353,0xeb0000000053544f);
          uVar3 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (uVar3 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
            _swift_unknownObjectRelease(uVar3);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010006e7f4(&uStack_90);
            lVar12 = 0;
          }
          else {
            uVar2 = 0x11308fb08;
            func_0x0001000285a8(0x11308fb08,&UNK_10dd35ac0);
            plVar4 = &lStack_c0;
            _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
            lVar12 = lStack_c0;
            if ((int)plVar4 == 0) {
              lVar12 = 0;
            }
          }
          uVar2 = 0x454c424159414c50;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x454c424159414c50,0xed00004f464e495f);
          uVar3 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (uVar3 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
            _swift_unknownObjectRelease(uVar3);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010006e7f4(&uStack_90);
            lStack_118 = 0;
          }
          else {
            uVar2 = 0;
            FUN_1047ff414(0);
            plVar4 = &lStack_c0;
            _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
            lStack_118 = lStack_c0;
            if ((int)plVar4 == 0) {
              lStack_118 = 0;
            }
          }
          uVar2 = 0xd000000000000013;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000013,0x800000010f20e840);
          uVar3 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (uVar3 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
            _swift_unknownObjectRelease(uVar3);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010006e7f4(&uStack_90);
            lVar10 = 0;
          }
          else {
            uVar2 = 0;
            FUN_1047d81f0(0);
            plVar4 = &lStack_c0;
            _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
            lVar10 = lStack_c0;
            if ((int)plVar4 == 0) {
              lVar10 = 0;
            }
          }
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,lVar8);
          _swift_bridgeObjectRelease(lVar8);
          if (lVar9 == 0) {
            lStack_d0 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_d0,lVar9);
            _swift_bridgeObjectRelease(lVar9);
          }
          if (lVar11 == 0) {
            lStack_d8 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_d8,lVar11);
            _swift_bridgeObjectRelease(lVar11);
          }
          if (lVar13 == 0) {
            lStack_e0 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_e0,lVar13);
            _swift_bridgeObjectRelease(lVar13);
          }
          if (lVar7 == 0) {
            lStack_100 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_100,lVar7);
            _swift_bridgeObjectRelease(lVar7);
          }
          if (lVar12 == 0) {
            lVar8 = 0;
          }
          else {
            uVar2 = 0;
            FUN_1047fc144(0);
            lVar8 = lVar12;
            __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar12,uVar2);
            _swift_bridgeObjectRelease(lVar12);
          }
          func_0x00010c059d80();
          _objc_release(lVar5);
          _objc_release(lStack_d0);
          _objc_release(lStack_d8);
          _objc_release(lStack_e0);
          _objc_release(lStack_100);
          _objc_release(lVar8);
          _objc_release(param_1);
          _objc_release(lStack_118);
          _objc_release(lVar10);
          _objc_release(lStack_e8);
          return unaff_x20;
        }
        _objc_release(lStack_e8);
        _swift_bridgeObjectRelease(lVar8);
        _objc_release(param_1);
        _swift_bridgeObjectRelease(lVar7);
        _swift_bridgeObjectRelease(lVar13);
        _swift_bridgeObjectRelease(lVar11);
      }
      _swift_bridgeObjectRelease(lVar9);
    }
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047e9518; end: 1047e953f; -[SCAdMediaDeepLink initWithCoder:] */

void FUN_1047e9518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047e8bb0();
  return;
}



/* Entry: 1047e9540; end: 1047e95cb; -[SCAdMediaDeepLink description] */

void FUN_1047e9540(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_104739264();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  func_0x0001047e75ac(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001047e9790(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_104739264);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047e95cc; end: 1047e9647; -[SCAdMediaDeepLink init] */

void FUN_1047e95cc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaDeepLinkWrapper.swift",
             0x28,2,0xa7,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047e9614);
  (*pcVar1)();
}



/* Entry: 1047e9648; end: 1047e97cb; -[SCAdMediaDeepLink .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e9648(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fe10 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fe18 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fe20 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fe28 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fe38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fe40 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fe50));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fe58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308fe60));
  return;
}



/* Entry: 1047e97cc; end: 1047e97eb;  */

void FUN_1047e97cc(void)

{
  _objc_opt_self(&PTR_PTR_1129d6760);
  return;
}



/* Entry: 1047e97ec; end: 1047e97fb; -[SCAdMediaInstantCollectionItem productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e97ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fe90);
}



/* Entry: 1047e97fc; end: 1047e9807; -[SCAdMediaInstantCollectionItem variantId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e97fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308fe98);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308fe98))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e9808; end: 1047e9813; -[SCAdMediaInstantCollectionItem imageUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e9808(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308fea0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308fea0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e9814; end: 1047e981f; -[SCAdMediaInstantCollectionItem title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e9814(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308fea8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308fea8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e9820; end: 1047e9867;  */

void FUN_1047e9820(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e9868; end: 1047e9877; -[SCAdMediaInstantCollectionItem priceInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e9868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308feb0));
  return;
}



/* Entry: 1047e9878; end: 1047e993b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e9878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fe90) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fe98);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fea0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fea8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11308feb0) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e993c; end: 1047e9a2b; -[SCAdMediaInstantCollectionItem initWithProductId:variantId:imageUrl:title:priceInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e993c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar5 = uVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_11308fe90) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_11308fe98);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11308fea0);
  *puVar1 = param_5;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_11308fea8);
  *puVar1 = param_6;
  puVar1[1] = uVar5;
  *(undefined8 *)(param_1 + _DAT_11308feb0) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 1047e9a2c; end: 1047e9a5b;  */

void FUN_1047e9a2c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e9a5c(param_1);
  return;
}



/* Entry: 1047e9a5c; end: 1047e9bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e9a5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [56];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11308fe90) = *param_1;
  uStack_48 = param_1[2];
  uStack_50 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fe98);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[4];
  uStack_60 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fea0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[6];
  uStack_70 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fea8);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uStack_a8 = param_1[8];
  uStack_b0 = param_1[7];
  uStack_98 = param_1[10];
  uStack_a0 = param_1[9];
  uStack_88 = param_1[0xc];
  uStack_90 = param_1[0xb];
  uStack_80 = param_1[0xd];
  lVar2 = 0;
  FUN_1047ef78c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308ffc8) = uStack_b0;
  uVar5 = param_1[8];
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ffd0);
  puVar1[1] = param_1[9];
  *puVar1 = uVar5;
  *(undefined8 *)(lVar3 + _DAT_11308ffd8) = uStack_98;
  *(undefined8 *)(lVar3 + _DAT_11308ffe0) = uStack_90;
  *(undefined8 *)(lVar3 + _DAT_11308ffe8) = uStack_88;
  *(undefined8 *)(lVar3 + _DAT_11308fff0) = uStack_80;
  func_0x000100402194(&uStack_50,auStack_e8);
  func_0x000100402194(&uStack_60,auStack_e8);
  func_0x000100402194(&uStack_70,auStack_e8);
  func_0x00010473af04(&uStack_b0,auStack_e8);
  plVar4 = &lStack_f8;
  lStack_f8 = lVar3;
  lStack_f0 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001047ea764(param_1);
  *(long **)(unaff_x20 + _DAT_11308feb0) = plVar4;
  _objc_msgSendSuper2(&stack0xfffffffffffffef8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e9bfc; end: 1047e9c2f; -[SCAdMediaInstantCollectionItem hash] */

undefined8 FUN_1047e9bfc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047e9c30();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047e9c30; end: 1047e9d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e9c30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308fe90));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fe98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308fe98))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fea0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308fea0))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fea8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308fea8))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1047eebe8();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047e9d34; end: 1047e9ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047e9d34(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lStack_78;
  undefined8 auStack_70 [3];
  long lStack_58;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar2 = &lStack_78;
    _swift_dynamicCast(plVar2,auStack_70,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11308fe90);
      lVar9 = *(long *)(lStack_78 + _DAT_11308fe90);
      lVar1 = *(long *)(unaff_x20 + _DAT_11308fe98);
      if (lVar1 == *(long *)(lStack_78 + _DAT_11308fe98) &&
          ((long *)(unaff_x20 + _DAT_11308fe98))[1] == ((long *)(lStack_78 + _DAT_11308fe98))[1]) {
        uVar8 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar8 = (uint)lVar1 ^ 1;
      }
      lVar1 = *(long *)(unaff_x20 + _DAT_11308fea0);
      if (lVar1 == *(long *)(lStack_78 + _DAT_11308fea0) &&
          ((long *)(unaff_x20 + _DAT_11308fea0))[1] == ((long *)(lStack_78 + _DAT_11308fea0))[1]) {
        uVar10 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar10 = (uint)lVar1 ^ 1;
      }
      lVar1 = *(long *)(unaff_x20 + _DAT_11308fea8);
      if (lVar1 == *(long *)(lStack_78 + _DAT_11308fea8) &&
          ((long *)(unaff_x20 + _DAT_11308fea8))[1] == ((long *)(lStack_78 + _DAT_11308fea8))[1]) {
        uVar5 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar5 = (uint)lVar1;
      }
      uVar7 = *(undefined8 *)(lStack_78 + _DAT_11308feb0);
      uVar3 = 0;
      FUN_1047ef78c();
      auStack_70[0] = uVar7;
      lStack_58 = uVar3;
      _objc_retain(uVar7);
      puVar4 = auStack_70;
      FUN_1047eecec(puVar4);
      _objc_release(lStack_78);
      func_0x00010006e7f4(auStack_70);
      if (lVar6 == lVar9 && ((uVar8 | uVar10) & 1) == 0) {
        uVar5 = uVar5 & (uint)puVar4;
        goto LAB_1047e9ebc;
      }
    }
  }
  uVar5 = 0;
LAB_1047e9ebc:
  return uVar5 & 1;
}



/* Entry: 1047e9ee4; end: 1047e9f63; -[SCAdMediaInstantCollectionItem isEqual:] */

uint FUN_1047e9ee4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047e9d34(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047e9f64; end: 1047e9f67; -[SCAdMediaInstantCollectionItem copyWithZone:] */

void FUN_1047e9f64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047e9f68; end: 1047ea11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e9f68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xea00000000004449);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fe98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308fe98))[1]);
  uVar2 = 0x5f544e4149524156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e4149524156,0xea00000000004449);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fea0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308fea0))[1]);
  uVar2 = 0x52555f4547414d49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52555f4547414d49,0xe90000000000004c);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fea8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308fea8))[1]);
  uVar2 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x4e495f4543495250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e495f4543495250,0xea00000000004f46);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047ea11c; end: 1047ea16b; -[SCAdMediaInstantCollectionItem encodeWithCoder:] */

void FUN_1047ea11c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047e9f68(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047ea16c; end: 1047ea19b;  */

void FUN_1047ea16c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047ea19c(param_1);
  return;
}



/* Entry: 1047ea19c; end: 1047ea5d7;  */

undefined8 FUN_1047ea19c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar4 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xea00000000004449);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar4);
  uVar4 = 0x5f544e4149524156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e4149524156,0xea00000000004449);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
  }
  else {
    puVar6 = &uStack_b0;
    _swift_dynamicCast(puVar6,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_a8;
    uVar4 = uStack_b0;
    if (((ulong)puVar6 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1047ea598;
    }
    uVar7 = 0x52555f4547414d49;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52555f4547414d49,0xe90000000000004c);
    lVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (lVar5 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
      _swift_unknownObjectRelease(lVar5);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      puVar6 = &uStack_b0;
      _swift_dynamicCast(puVar6,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar3 = uStack_a8;
      uVar7 = uStack_b0;
      if (((ulong)puVar6 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar8 = 0x454c544954;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
        lVar5 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (lVar5 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
          _swift_unknownObjectRelease(lVar5);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          _objc_release(param_1);
LAB_1047ea55c:
          _swift_bridgeObjectRelease(uVar3);
          goto LAB_1047ea564;
        }
        puVar6 = &uStack_b0;
        _swift_dynamicCast(puVar6,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
        uVar8 = uStack_b0;
        if (((ulong)puVar6 & 1) == 0) {
          _objc_release(param_1);
        }
        else {
          uVar9 = 0x4e495f4543495250;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x4e495f4543495250,0xea00000000004f46);
          lVar5 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          if (lVar5 == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
            _swift_unknownObjectRelease(lVar5);
          }
          uStack_78 = uStack_98;
          uStack_80 = uStack_a0;
          lStack_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 == 0) {
            _objc_release(param_1);
            _swift_bridgeObjectRelease(uStack_a8);
            goto LAB_1047ea55c;
          }
          uVar9 = 0;
          FUN_1047ef78c(0);
          puVar6 = &uStack_b0;
          _swift_dynamicCast(puVar6,&uStack_80,puVar1 + 8,uVar9,6);
          if (((ulong)puVar6 & 1) != 0) {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar2);
            _swift_bridgeObjectRelease(uVar2);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar3);
            _swift_bridgeObjectRelease(uVar3);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uStack_a8);
            _swift_bridgeObjectRelease(uStack_a8);
            func_0x00010c03a7e0();
            _objc_release(uVar4);
            _objc_release(uVar7);
            _objc_release(uVar8);
            _objc_release(param_1);
            _objc_release(uStack_b0);
            return unaff_x20;
          }
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uStack_a8);
        }
        _swift_bridgeObjectRelease(uVar3);
      }
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_1047ea598;
    }
    _objc_release(param_1);
LAB_1047ea564:
    _swift_bridgeObjectRelease(uVar2);
  }
  func_0x00010006e7f4(&uStack_80);
LAB_1047ea598:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047ea5d8; end: 1047ea5ff; -[SCAdMediaInstantCollectionItem initWithCoder:] */

void FUN_1047ea5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047ea19c();
  return;
}



/* Entry: 1047ea600; end: 1047ea647; -[SCAdMediaInstantCollectionItem description] */

void FUN_1047ea600(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1047ea648();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047ea648; end: 1047ea683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1047ea648(void)

{
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x0001047ef6f4(auStack_48,*(undefined8 *)(unaff_x20 + _DAT_11308feb0));
  _swift_bridgeObjectRelease(uStack_38);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1047ea684; end: 1047ea6ff; -[SCAdMediaInstantCollectionItem init] */

void FUN_1047ea684(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaInstantCollectionItemWrapper.swift",0x35,2,0x6b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ea6cc);
  (*pcVar1)();
}



/* Entry: 1047ea700; end: 1047ea797; -[SCAdMediaInstantCollectionItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ea700(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fe98 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fea0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fea8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308feb0));
  return;
}



/* Entry: 1047ea798; end: 1047ea7b7;  */

void FUN_1047ea798(void)

{
  _objc_opt_self(&PTR_PTR_1129d6880);
  return;
}



/* Entry: 1047ea7b8; end: 1047ea863;  */

void FUN_1047ea7b8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ea864; end: 1047ea89f;  */

void FUN_1047ea864(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1047ea8a0; end: 1047ea93b; -[SCAdMediaInstantPage description] */

void FUN_1047ea8a0(undefined8 param_1)

{
  undefined1 auStack_60 [64];
  
  _objc_retain();
  func_0x0001047ed398(auStack_60);
  _objc_release(param_1);
  func_0x0001017b670c(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047ea93c; end: 1047ea983; -[SCAdMediaInstantPage init] */

void FUN_1047ea93c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaInstantPageWrapper.swift",
             0x2b,2,0x7a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ea984);
  (*pcVar1)();
}



/* Entry: 1047ea984; end: 1047ea9b7; -[SCAdMediaInstantPage hash] */

undefined8 FUN_1047ea984(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047ea9b8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047ea9b8; end: 1047eacc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ea9b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11308fee0));
  if (((undefined8 *)(unaff_x20 + _DAT_11308fee8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fee8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308fef0);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047f42fc(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
    lVar4 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11308fef8))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fef8);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308ff00))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308ff00);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308ff08) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047ee314();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11308ff10);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047ea798(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
    lVar4 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11308ff18))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308ff18);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308ff20) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047ee314();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308ff28))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308ff28);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308ff30) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047ee314();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047eacc4; end: 1047eb1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047eacc4(undefined8 param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,&lStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&lStack_70);
  }
  else {
    plVar2 = &lStack_78;
    _swift_dynamicCast(plVar2,&lStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar2 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_11308fee0);
      if (cVar1 != *(char *)(lStack_78 + _DAT_11308fee0)) goto LAB_1047eb1a4;
      if (cVar1 == '\0') {
        uVar10 = ((ulong *)(unaff_x20 + _DAT_11308fee8))[1];
        uVar5 = ((ulong *)(lStack_78 + _DAT_11308fee8))[1];
        if (uVar10 == 0) {
          if (uVar5 == 0) goto LAB_1047eaebc;
        }
        else if ((uVar5 != 0) &&
                ((uVar6 = *(ulong *)(unaff_x20 + _DAT_11308fee8),
                 uVar6 == *(ulong *)(lStack_78 + _DAT_11308fee8) && uVar10 == uVar5 ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar6 & 1) != 0)))) {
LAB_1047eaebc:
          uVar10 = *(ulong *)(unaff_x20 + _DAT_11308fef0);
          lVar8 = *(long *)(lStack_78 + _DAT_11308fef0);
          if (uVar10 == 0) {
            if (lVar8 == 0) {
LAB_1047eb00c:
              uVar3 = *(undefined8 *)(lStack_78 + _DAT_11308fef8);
              uVar5 = ((undefined8 *)(lStack_78 + _DAT_11308fef8))[1];
              uVar10 = *(ulong *)(unaff_x20 + _DAT_11308fef8);
              uVar6 = ((ulong *)(unaff_x20 + _DAT_11308fef8))[1];
              if (uVar6 >> 0x3c < 0xf) {
                if (0xe < uVar5 >> 0x3c) goto LAB_1047eb080;
                func_0x000100de78a0(uVar3,uVar5);
                func_0x000100de78a0(uVar3,uVar5);
                func_0x000100de78a0(uVar10,uVar6);
                uVar4 = uVar10;
                func_0x000100e25fcc(uVar10,uVar6,uVar3,uVar5);
                func_0x0001000b44c0(uVar3,uVar5);
                func_0x0001000b44c0(uVar3,uVar5);
                func_0x0001000b44c0(uVar10,uVar6);
                if ((uVar4 & 1) != 0) goto LAB_1047eb120;
              }
              else {
                if (uVar5 >> 0x3c < 0xf) {
LAB_1047eb080:
                  func_0x000100de78a0(uVar3,uVar5);
                  func_0x000100de78a0(uVar10,uVar6);
                  _objc_release(lStack_78);
                  func_0x0001000b44c0(uVar10,uVar6);
                  func_0x0001000b44c0(uVar3,uVar5);
                  goto LAB_1047eb1a8;
                }
                func_0x000100de78a0(uVar3,uVar5);
                func_0x000100de78a0(uVar10,uVar6);
                func_0x0001000b44c0(uVar10,uVar6);
LAB_1047eb120:
                uVar10 = ((ulong *)(unaff_x20 + _DAT_11308ff00))[1];
                uVar5 = ((ulong *)(lStack_78 + _DAT_11308ff00))[1];
                if (uVar10 == 0) {
                  if (uVar5 == 0) goto LAB_1047eb170;
                }
                else if ((uVar5 != 0) &&
                        (((uVar6 = *(ulong *)(unaff_x20 + _DAT_11308ff00),
                          uVar6 == *(ulong *)(lStack_78 + _DAT_11308ff00) && (uVar10 == uVar5)) ||
                         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (), (uVar6 & 1) != 0)))) {
LAB_1047eb170:
                  lVar9 = *(long *)(unaff_x20 + _DAT_11308ff08);
                  lVar8 = _DAT_11308ff08;
                  goto joined_r0x0001047eb17c;
                }
              }
            }
          }
          else {
            if (lVar8 == 0) goto LAB_1047eaf3c;
            _swift_bridgeObjectRetain(lVar8);
            uVar5 = uVar10;
            _swift_bridgeObjectRetain();
            func_0x00010470d3c8();
            _swift_bridgeObjectRelease(uVar10);
            _swift_bridgeObjectRelease(lVar8);
            if ((uVar5 & 1) != 0) goto LAB_1047eb00c;
          }
        }
      }
      else if (cVar1 == '\x01') {
        uVar10 = *(ulong *)(unaff_x20 + _DAT_11308ff10);
        lVar8 = *(long *)(lStack_78 + _DAT_11308ff10);
        if (uVar10 != 0) {
          if (lVar8 != 0) {
            _swift_bridgeObjectRetain(lVar8);
            uVar5 = uVar10;
            _swift_bridgeObjectRetain();
            func_0x00010470d3dc();
            _swift_bridgeObjectRelease(uVar10);
            _swift_bridgeObjectRelease(lVar8);
            if ((uVar5 & 1) != 0) goto LAB_1047eae5c;
            goto LAB_1047eb1a4;
          }
LAB_1047eaf3c:
          uVar7 = 0;
          _objc_release();
          goto LAB_1047eb1ac;
        }
        if (lVar8 == 0) {
LAB_1047eae5c:
          uVar3 = *(undefined8 *)(lStack_78 + _DAT_11308ff18);
          uVar5 = ((undefined8 *)(lStack_78 + _DAT_11308ff18))[1];
          uVar10 = *(ulong *)(unaff_x20 + _DAT_11308ff18);
          uVar6 = ((ulong *)(unaff_x20 + _DAT_11308ff18))[1];
          if (0xe < uVar6 >> 0x3c) {
            if (uVar5 >> 0x3c < 0xf) goto LAB_1047eb080;
            func_0x000100de78a0(uVar3,uVar5);
            func_0x000100de78a0(uVar10,uVar6);
            func_0x0001000b44c0(uVar10,uVar6);
LAB_1047eafb4:
            lVar9 = *(long *)(unaff_x20 + _DAT_11308ff20);
            lVar8 = _DAT_11308ff20;
joined_r0x0001047eb17c:
            if (lVar9 != 0) {
              lVar8 = *(long *)(lStack_78 + lVar8);
              goto joined_r0x0001047eaf2c;
            }
            lVar8 = *(long *)(lStack_78 + lVar8);
            goto LAB_1047eb188;
          }
          if (0xe < uVar5 >> 0x3c) goto LAB_1047eb080;
          func_0x000100de78a0(uVar3,uVar5);
          func_0x000100de78a0(uVar3,uVar5);
          func_0x000100de78a0(uVar10,uVar6);
          uVar4 = uVar10;
          func_0x000100e25fcc(uVar10,uVar6,uVar3,uVar5);
          func_0x0001000b44c0(uVar3,uVar5);
          func_0x0001000b44c0(uVar3,uVar5);
          func_0x0001000b44c0(uVar10,uVar6);
          if ((uVar4 & 1) != 0) goto LAB_1047eafb4;
        }
      }
      else {
        uVar10 = ((ulong *)(unaff_x20 + _DAT_11308ff28))[1];
        uVar5 = ((ulong *)(lStack_78 + _DAT_11308ff28))[1];
        if (uVar10 == 0) {
          if (uVar5 == 0) goto LAB_1047eaf14;
        }
        else if ((uVar5 != 0) &&
                ((uVar6 = *(ulong *)(unaff_x20 + _DAT_11308ff28),
                 uVar6 == *(ulong *)(lStack_78 + _DAT_11308ff28) && uVar10 == uVar5 ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar6 & 1) != 0)))) {
LAB_1047eaf14:
          if (*(long *)(unaff_x20 + _DAT_11308ff30) != 0) {
            lVar8 = *(long *)(lStack_78 + _DAT_11308ff30);
joined_r0x0001047eaf2c:
            if (lVar8 == 0) {
              uVar3 = 0;
              uStack_68 = 0;
              uStack_60 = 0;
            }
            else {
              uVar3 = 0;
              FUN_1047eeb2c();
            }
            lStack_70 = lVar8;
            lStack_58 = uVar3;
            _objc_retain(lVar8);
            plVar2 = &lStack_70;
            FUN_1047ee3ac(plVar2);
            uVar7 = (uint)plVar2;
            _objc_release(lStack_78);
            func_0x00010006e7f4(&lStack_70);
            goto LAB_1047eb1ac;
          }
          lVar8 = *(long *)(lStack_78 + _DAT_11308ff30);
LAB_1047eb188:
          lVar9 = lVar8;
          _objc_retain(lVar8);
          _objc_release(lStack_78);
          lStack_78 = lVar9;
          if (lVar8 == 0) {
            uVar7 = 1;
            goto LAB_1047eb1ac;
          }
        }
      }
LAB_1047eb1a4:
      _objc_release(lStack_78);
    }
  }
LAB_1047eb1a8:
  uVar7 = 0;
LAB_1047eb1ac:
  return uVar7 & 1;
}



/* Entry: 1047eb1d4; end: 1047eb253; -[SCAdMediaInstantPage isEqual:] */

uint FUN_1047eb1d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047eacc4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047eb254; end: 1047eb257; -[SCAdMediaInstantPage copyWithZone:] */

void FUN_1047eb254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047eb258; end: 1047eb707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047eb258(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  if (*(char *)(unaff_x20 + _DAT_11308fee0) == '\0') {
    if (((undefined8 *)(unaff_x20 + _DAT_11308fee8))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047eb6e8);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fee8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20eed0);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    lVar4 = *(long *)(unaff_x20 + _DAT_11308fef0);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047eb6f4);
      (*pcVar1)();
    }
    uVar2 = 0;
    FUN_1047f42fc(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar2);
    uVar2 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20eef0);
    func_0x00010bf93020(param_1);
    _objc_release(lVar4);
    _objc_release(uVar2);
    if (0xe < (ulong)((undefined8 *)(unaff_x20 + _DAT_11308fef8))[1] >> 0x3c) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047eb700);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fef8);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar3 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20ef10);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (((undefined8 *)(unaff_x20 + _DAT_11308ff00))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047eb704);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ff00);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20ef30);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (*(long *)(unaff_x20 + _DAT_11308ff08) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047eb708);
      (*pcVar1)();
    }
    uVar2 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20ef50);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    uVar2 = 0x5f45505954425553;
    uVar3 = 0xef544355444f5250;
  }
  else if (*(char *)(unaff_x20 + _DAT_11308fee0) == '\x01') {
    lVar4 = *(long *)(unaff_x20 + _DAT_11308ff10);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047eb6e4);
      (*pcVar1)();
    }
    uVar2 = 0;
    FUN_1047ea798(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar2);
    uVar2 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20ee50);
    func_0x00010bf93020(param_1);
    _objc_release(lVar4);
    _objc_release(uVar2);
    if (0xe < (ulong)((undefined8 *)(unaff_x20 + _DAT_11308ff18))[1] >> 0x3c) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047eb6f0);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ff18);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar3 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20ee70);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (*(long *)(unaff_x20 + _DAT_11308ff20) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047eb6fc);
      (*pcVar1)();
    }
    uVar2 = 0xd00000000000001d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f20ee90);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    uVar2 = 0xd000000000000012;
    uVar3 = 0x800000010f20eeb0;
  }
  else {
    if (((undefined8 *)(unaff_x20 + _DAT_11308ff28))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047eb6ec);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ff28);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = 0x4f54535f504f4853;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f54535f504f4853,0xed000044495f4552);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (*(long *)(unaff_x20 + _DAT_11308ff30) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047eb6f8);
      (*pcVar1)();
    }
    uVar2 = 0xd000000000000017;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20ee30);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    uVar2 = 0x5f45505954425553;
    uVar3 = 0xec000000504f4853;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1047eb708; end: 1047eb757; -[SCAdMediaInstantPage encodeWithCoder:] */

void FUN_1047eb708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047eb258(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047eb758; end: 1047eb787;  */

void FUN_1047eb758(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047eb788(param_1);
  return;
}



/* Entry: 1047eb788; end: 1047ec3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047eb788(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long unaff_x20;
  ulong uVar14;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _swift_getObjectType();
  uVar4 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar2 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) goto LAB_1047ebe28;
  plVar6 = &lStack_c0;
  _swift_dynamicCast(plVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar11 = lStack_b8;
  lVar5 = lStack_c0;
  if (((ulong)plVar6 & 1) == 0) {
LAB_1047ebe3c:
    _objc_release(param_1);
    goto LAB_1047ebe44;
  }
  uVar14 = 0x5f45505954425553;
  if (((lStack_c0 == 0x5f45505954425553) && (lStack_b8 == -0x10abbcaabbb0adb0)) ||
     (uVar7 = uVar14,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xef544355444f5250,lStack_c0,lStack_b8,0), (uVar7 & 1) != 0)) {
    _swift_bridgeObjectRelease(lVar11);
    uVar4 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20eed0);
    lVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar5 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
      _swift_unknownObjectRelease(lVar5);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) goto LAB_1047ebe28;
    plVar6 = &lStack_c0;
    _swift_dynamicCast(plVar6,&uStack_90,puVar2 + 8,PTR___sSSN_11034da80,6);
    lVar11 = lStack_b8;
    lVar5 = lStack_c0;
    if (((ulong)plVar6 & 1) == 0) goto LAB_1047ebe3c;
    uVar4 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20eef0);
    lVar8 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar8 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
      _swift_unknownObjectRelease(lVar8);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) goto LAB_1047ec1dc;
    uVar4 = 0x11308ff40;
    func_0x0001000285a8(0x11308ff40,&UNK_10dd35d50);
    plVar6 = &lStack_c0;
    _swift_dynamicCast(plVar6,&uStack_90,puVar2 + 8,uVar4,6);
    lVar8 = lStack_c0;
    if (((ulong)plVar6 & 1) == 0) goto LAB_1047ec1f0;
    uVar4 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20ef10);
    lVar9 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar9 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar9);
      _swift_unknownObjectRelease(lVar9);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      _objc_release(param_1);
      _swift_bridgeObjectRelease(lVar8);
      goto LAB_1047ec1e4;
    }
    plVar6 = &lStack_c0;
    _swift_dynamicCast(plVar6,&uStack_90,puVar2 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
    lVar3 = lStack_b8;
    lVar9 = lStack_c0;
    if (((ulong)plVar6 & 1) == 0) {
      _objc_release(param_1);
      _swift_bridgeObjectRelease(lVar8);
      goto LAB_1047ec1f8;
    }
    uVar4 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20ef30);
    lVar10 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar10 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar10);
      _swift_unknownObjectRelease(lVar10);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 != 0) {
      plVar6 = &lStack_c0;
      _swift_dynamicCast(plVar6,&uStack_90,puVar2 + 8,PTR___sSSN_11034da80,6);
      lVar10 = lStack_c0;
      if (((ulong)plVar6 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar4 = 0xd00000000000001a;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20ef50)
        ;
        lVar12 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (lVar12 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar12);
          _swift_unknownObjectRelease(lVar12);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          _objc_release(param_1);
          _swift_bridgeObjectRelease(lStack_b8);
          goto LAB_1047ec384;
        }
        uVar4 = 0;
        FUN_1047eeb2c(0);
        plVar6 = &lStack_c0;
        _swift_dynamicCast(plVar6,&uStack_90,puVar2 + 8,uVar4,6);
        if (((ulong)plVar6 & 1) != 0) {
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_11308fee0) = 0;
          plVar6 = (long *)(unaff_x20 + _DAT_11308fee8);
          *plVar6 = lVar5;
          plVar6[1] = lVar11;
          *(long *)(unaff_x20 + _DAT_11308fef0) = lVar8;
          plVar6 = (long *)(unaff_x20 + _DAT_11308fef8);
          *plVar6 = lVar9;
          plVar6[1] = lVar3;
          plVar6 = (long *)(unaff_x20 + _DAT_11308ff00);
          *plVar6 = lVar10;
          plVar6[1] = lStack_b8;
          *(long *)(unaff_x20 + _DAT_11308ff08) = lStack_c0;
          *(undefined8 *)(unaff_x20 + _DAT_11308ff10) = 0;
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ff18);
          puVar1[1] = 0xf000000000000000;
          *puVar1 = 0;
          *(undefined8 *)(unaff_x20 + _DAT_11308ff20) = 0;
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ff28);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(unaff_x20 + _DAT_11308ff30) = 0;
          func_0x00010006c00c(lVar9,lVar3);
          puVar2 = PTR_s_init_1125d9248;
          lVar5 = lStack_c0;
          _objc_retain(lStack_c0);
          puVar13 = auStack_f0;
          _objc_msgSendSuper2(puVar13,puVar2);
          _objc_release(lVar5);
          _objc_release(param_1);
          lStack_b8 = lVar3;
          goto LAB_1047ec348;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(lStack_b8);
      }
      _swift_bridgeObjectRelease(lVar8);
      _swift_bridgeObjectRelease(lVar11);
      func_0x00010006c090(lVar9,lVar3);
      goto LAB_1047ebe44;
    }
    _objc_release(param_1);
LAB_1047ec384:
    _swift_bridgeObjectRelease(lVar8);
    _swift_bridgeObjectRelease(lVar11);
    lStack_b8 = lVar3;
LAB_1047ec398:
    func_0x00010006c090(lVar9,lStack_b8);
  }
  else {
    uVar7 = 0;
    if (((lVar5 == -0x2fffffffffffffee) && (lVar11 == -0x7ffffffef0df1150)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000012,0x800000010f20eeb0,lVar5,lVar11,0), (uVar7 & 1) != 0)) {
      _swift_bridgeObjectRelease(lVar11);
      uVar4 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20ee50);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (lVar5 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 != 0) {
        uVar4 = 0x11308ff38;
        func_0x0001000285a8(0x11308ff38,&UNK_10dd35d48);
        plVar6 = &lStack_c0;
        _swift_dynamicCast(plVar6,&uStack_90,puVar2 + 8,uVar4,6);
        lVar11 = lStack_c0;
        if (((ulong)plVar6 & 1) == 0) goto LAB_1047ebe3c;
        uVar4 = 0xd000000000000018;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20ee70)
        ;
        lVar5 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (lVar5 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
          _swift_unknownObjectRelease(lVar5);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) goto LAB_1047ec1dc;
        plVar6 = &lStack_c0;
        _swift_dynamicCast(plVar6,&uStack_90,puVar2 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
        lVar9 = lStack_c0;
        if (((ulong)plVar6 & 1) == 0) goto LAB_1047ec1f0;
        uVar4 = 0xd00000000000001d;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f20ee90)
        ;
        lVar5 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (lVar5 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
          _swift_unknownObjectRelease(lVar5);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 != 0) {
          uVar4 = 0;
          FUN_1047eeb2c(0);
          plVar6 = &lStack_c0;
          _swift_dynamicCast(plVar6,&uStack_90,puVar2 + 8,uVar4,6);
          if (((ulong)plVar6 & 1) == 0) {
            _objc_release(param_1);
            _swift_bridgeObjectRelease(lVar11);
            func_0x00010006c090(lVar9,lStack_b8);
            goto LAB_1047ebe44;
          }
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_11308fee0) = 1;
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fee8);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(unaff_x20 + _DAT_11308fef0) = 0;
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fef8);
          puVar1[1] = 0xf000000000000000;
          *puVar1 = 0;
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ff00);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(unaff_x20 + _DAT_11308ff08) = 0;
          *(long *)(unaff_x20 + _DAT_11308ff10) = lVar11;
          plVar6 = (long *)(unaff_x20 + _DAT_11308ff18);
          *plVar6 = lVar9;
          plVar6[1] = lStack_b8;
          *(long *)(unaff_x20 + _DAT_11308ff20) = lStack_c0;
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ff28);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(unaff_x20 + _DAT_11308ff30) = 0;
          func_0x00010006c00c(lVar9,lStack_b8);
          puVar2 = PTR_s_init_1125d9248;
          lVar5 = lStack_c0;
          _objc_retain(lStack_c0);
          puVar13 = auStack_e0;
          _objc_msgSendSuper2(puVar13,puVar2);
          _objc_release(lVar5);
          _objc_release(param_1);
LAB_1047ec348:
          func_0x00010006c090(lVar9,lStack_b8);
          goto LAB_1047ec34c;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(lVar11);
        goto LAB_1047ec398;
      }
    }
    else {
      if ((lVar5 == 0x5f45505954425553) && (lVar11 == -0x13ffffffafb0b7ad)) {
        _swift_bridgeObjectRelease(0xec000000504f4853);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5f45505954425553,0xec000000504f4853,lVar5,lVar11,0);
        _swift_bridgeObjectRelease(lVar11);
        if ((uVar14 & 1) == 0) goto LAB_1047ebe3c;
      }
      uVar4 = 0x4f54535f504f4853;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f54535f504f4853,0xed000044495f4552);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (lVar5 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 != 0) {
        plVar6 = &lStack_c0;
        _swift_dynamicCast(plVar6,&uStack_90,puVar2 + 8,PTR___sSSN_11034da80,6);
        lVar5 = lStack_c0;
        if (((ulong)plVar6 & 1) == 0) goto LAB_1047ebe3c;
        uVar4 = 0xd000000000000017;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20ee30)
        ;
        lVar11 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (lVar11 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar11);
          _swift_unknownObjectRelease(lVar11);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        lVar11 = lStack_b8;
        if (lStack_98 != 0) {
          uVar4 = 0;
          FUN_1047eeb2c(0);
          plVar6 = &lStack_c0;
          _swift_dynamicCast(plVar6,&uStack_90,puVar2 + 8,uVar4,6);
          if (((ulong)plVar6 & 1) != 0) {
            _objc_allocWithZone();
            *(undefined1 *)(unaff_x20 + _DAT_11308fee0) = 2;
            puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fee8);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11308fef0) = 0;
            puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fef8);
            puVar1[1] = 0xf000000000000000;
            *puVar1 = 0;
            puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ff00);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11308ff08) = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11308ff10) = 0;
            puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ff18);
            puVar1[1] = 0xf000000000000000;
            *puVar1 = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11308ff20) = 0;
            plVar6 = (long *)(unaff_x20 + _DAT_11308ff28);
            *plVar6 = lVar5;
            plVar6[1] = lStack_b8;
            *(long *)(unaff_x20 + _DAT_11308ff30) = lStack_c0;
            puVar2 = PTR_s_init_1125d9248;
            lVar5 = lStack_c0;
            _objc_retain(lStack_c0);
            puVar13 = auStack_d0;
            _objc_msgSendSuper2(puVar13,puVar2);
            _objc_release(lVar5);
            _objc_release(param_1);
LAB_1047ec34c:
            _swift_getObjectType();
            _swift_deallocPartialClassInstance();
            return puVar13;
          }
LAB_1047ec1f0:
          _objc_release(param_1);
LAB_1047ec1f8:
          _swift_bridgeObjectRelease(lVar11);
          goto LAB_1047ebe44;
        }
LAB_1047ec1dc:
        uStack_b0 = uStack_90;
        uStack_a8 = uStack_88;
        uStack_a0 = uStack_80;
        lStack_98 = lStack_78;
        _objc_release(param_1);
LAB_1047ec1e4:
        _swift_bridgeObjectRelease(lVar11);
        goto LAB_1047ebe30;
      }
    }
LAB_1047ebe28:
    uStack_b0 = uStack_90;
    uStack_a8 = uStack_88;
    uStack_a0 = uStack_80;
    lStack_98 = lStack_78;
    _objc_release(param_1);
  }
LAB_1047ebe30:
  func_0x00010006e7f4(&uStack_90);
LAB_1047ebe44:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 1047ec3d0; end: 1047ec3f7; -[SCAdMediaInstantPage initWithCoder:] */

void FUN_1047ec3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047eb788();
  return;
}



/* Entry: 1047ec3f8; end: 1047ec513; +[SCAdMediaInstantPage productWithDefaultVariantId:variants:contextToken:shopifyProductId:shopConfiguration:] */

void FUN_1047ec3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = 0;
  FUN_1047f42fc(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  uVar2 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_5);
  uVar3 = uVar1;
  _objc_release(uVar2);
  uVar2 = param_6;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  _objc_release(param_6);
  FUN_1047edcd0(param_3,param_2,param_4,param_5,uVar1,uVar2,uVar3,param_7);
  _swift_bridgeObjectRelease(uVar3);
  func_0x00010006c090(param_5,uVar1);
  _objc_release(param_7);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1047ec514; end: 1047ec5c7; +[SCAdMediaInstantPage collectionWithItems:contextToken:shopConfiguration:] */

void FUN_1047ec514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_1047ea798(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  uVar2 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_4);
  _objc_release(uVar2);
  uVar2 = param_3;
  FUN_1047ede20(param_3,param_4,uVar1,param_5);
  func_0x00010006c090(param_4,uVar1);
  _objc_release(param_5);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047ec5c8; end: 1047ec62f; +[SCAdMediaInstantPage shopWithStoreId:shopConfiguration:] */

void FUN_1047ec5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_4);
  FUN_1047edf44(param_3,param_2,param_4);
  _objc_release(param_4);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1047ec630; end: 1047ec793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ec630(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11308fee0) == '\0') {
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_11308fee8))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ec774);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11308fef0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ec780);
      (*pcVar1)();
    }
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308fef8))[1];
    if (0xe < uVar3 >> 0x3c) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ec78c);
      (*pcVar1)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_11308ff00))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ec790);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11308ff08) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ec794);
      (*pcVar1)();
    }
    (*param_1)(param_2,*(undefined8 *)(unaff_x20 + _DAT_11308fee8),lVar2,
               *(long *)(unaff_x20 + _DAT_11308fef0),*(undefined8 *)(unaff_x20 + _DAT_11308fef8),
               uVar3,*(undefined8 *)(unaff_x20 + _DAT_11308ff00));
  }
  else if (*(char *)(unaff_x20 + _DAT_11308fee0) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_11308ff10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ec770);
      (*pcVar1)();
    }
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308ff18))[1];
    if (0xe < uVar3 >> 0x3c) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ec77c);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11308ff20) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ec788);
      (*pcVar1)();
    }
    (*param_3)(*(long *)(unaff_x20 + _DAT_11308ff10),*(undefined8 *)(unaff_x20 + _DAT_11308ff18),
               uVar3);
  }
  else {
    if (((undefined8 *)(unaff_x20 + _DAT_11308ff28))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ec778);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11308ff30) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ec784);
      (*pcVar1)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_11308ff28));
  }
  return;
}


