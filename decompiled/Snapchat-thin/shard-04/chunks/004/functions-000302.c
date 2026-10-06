/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1034e1ba4; end: 1034e1d63;  */

/* WARNING: Possible PIC construction at 0x0001034e1c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034e1cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034e1c7c) */
/* WARNING: Removing unreachable block (ram,0x0001034e1d30) */
/* WARNING: Removing unreachable block (ram,0x0001034e1c9c) */
/* WARNING: Removing unreachable block (ram,0x0001034e1ca8) */
/* WARNING: Removing unreachable block (ram,0x0001034e1cac) */
/* WARNING: Removing unreachable block (ram,0x0001034e1d34) */
/* WARNING: Removing unreachable block (ram,0x0001034e1cb0) */
/* WARNING: Removing unreachable block (ram,0x0001034e1cb8) */
/* WARNING: Removing unreachable block (ram,0x0001034e1cbc) */
/* WARNING: Removing unreachable block (ram,0x0001034e1d38) */
/* WARNING: Removing unreachable block (ram,0x0001034e1cc0) */
/* WARNING: Removing unreachable block (ram,0x0001034e1d04) */
/* WARNING: Removing unreachable block (ram,0x0001034e1cd0) */
/* WARNING: Removing unreachable block (ram,0x0001034e1d00) */
/* WARNING: Removing unreachable block (ram,0x0001034e1d0c) */

void FUN_1034e1ba4(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  if (param_4 == 0) {
    uVar3 = 0xe600000000000000;
    uVar4 = 0x79636167656c;
  }
  else if (param_4 == 2) {
    uVar3 = 0xe200000000000000;
    uVar4 = 0x3276;
  }
  else {
    if (param_4 != 1) {
      lStack_68 = param_4;
      func_0x000107c61174();
      func_0x000107c60614(&UNK_11065c6e0,&lStack_68,&UNK_11065c6e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034e1d64);
      (*pcVar1)();
    }
    uVar3 = 0xe600000000000000;
    uVar4 = 0x776f64616873;
  }
  func_0x000107c61174();
  func_0x000107c5fadc(uVar4,uVar3);
  if ((param_1 & 1) == 0) {
    func_0x000106bc7958(lVar2,uVar4,1);
  }
  else {
    func_0x000106bc77e4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1034e1d64; end: 1034e1e7b;  */

/* WARNING: Possible PIC construction at 0x0001034e1e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034e1e34) */

void FUN_1034e1d64(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  if (param_2 == 0) {
    uVar4 = 0xe600000000000000;
    uVar5 = 0x79636167656c;
  }
  else if (param_2 == 2) {
    uVar4 = 0xe200000000000000;
    uVar5 = 0x3276;
  }
  else {
    if (param_2 != 1) {
      lStack_38 = param_2;
      func_0x000107c61174();
      func_0x000107c60614(&UNK_11065c6e0,&lStack_38,&UNK_11065c6e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034e1e7c);
      (*pcVar1)();
    }
    uVar4 = 0xe600000000000000;
    uVar5 = 0x776f64616873;
  }
  func_0x000107c61174();
  uVar3 = uVar4;
  func_0x000107c5fadc(uVar5,uVar4);
  func_0x000107c6142c(uVar4);
  FUN_1034e0530(param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000106bc7d30(lVar2,uVar5,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1034e1e7c; end: 1034e1e9b;  */

void FUN_1034e1e7c(void)

{
  func_0x000107c61168(&PTR_PTR_112f73aa8);
  return;
}



/* Entry: 1034e1e9c; end: 1034e1ea7; -[_TtC29AdProtoImpressionDataServices32AdProtoImpressionDataBuildParams thirdPartyImpressionURLs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034e1e9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113807330);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034e1ea8; end: 1034e1eb3; -[_TtC29AdProtoImpressionDataServices32AdProtoImpressionDataBuildParams thirdPartyClickURLs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034e1ea8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113807338);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034e1eb4; end: 1034e1ebf; -[_TtC29AdProtoImpressionDataServices32AdProtoImpressionDataBuildParams thirdPartyEngagedViewClickURLs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034e1eb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113807340);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034e1ec0; end: 1034e1f03;  */

void FUN_1034e1ec0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034e1f04; end: 1034e1fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1034e1f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar1 = auStack_60;
  func_0x000107c610f8();
  func_0x000107c610b4(unaff_x20 + _DAT_112f73b08,param_1,0x17d0);
  func_0x000101681be8(param_2,unaff_x20 + _DAT_113807328);
  *(undefined8 *)(unaff_x20 + _DAT_113807330) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113807338) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113807340) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x00010168561c(param_2);
  return puVar1;
}



/* Entry: 1034e1fd0; end: 1034e2163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1034e1fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 auStack_1850 [8];
  undefined1 auStack_1848 [16];
  undefined1 auStack_1838 [6104];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_1850 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61174(param_1);
  func_0x0001042ac4f4(auStack_1838);
  func_0x000107c61174(param_2);
  func_0x0001047b6fb0(puVar3);
  func_0x000107c610f8();
  func_0x000107c610b4(unaff_x20 + _DAT_112f73b08,auStack_1838,0x17d0);
  func_0x000101681be8(puVar3,unaff_x20 + _DAT_113807328);
  *(undefined8 *)(unaff_x20 + _DAT_113807330) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113807338) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113807340) = param_5;
  puVar2 = auStack_1848;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x00010168561c(puVar3);
  func_0x000107c614f0();
  func_0x000107c61464();
  return puVar2;
}



/* Entry: 1034e2164; end: 1034e220f; -[_TtC29AdProtoImpressionDataServices32AdProtoImpressionDataBuildParams initWithAdTrackInfo:adResponseObjc:thirdPartyImpressionURLs:thirdPartyClickURLs:thirdPartyEngagedViewClickURLs:] */

void FUN_1034e2164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  func_0x000107c5fc54(param_6,puVar1);
  func_0x000107c5fc54(param_7,puVar1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_1034e1fd0(param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1034e2210; end: 1034e226f; -[_TtC29AdProtoImpressionDataServices32AdProtoImpressionDataBuildParams init] */

void FUN_1034e2210(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProtoImpressionDataServices.AdProtoImpressionDataBuildParams",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034e223c);
  (*pcVar1)();
}



/* Entry: 1034e2270; end: 1034e22d7; -[_TtC29AdProtoImpressionDataServices32AdProtoImpressionDataBuildParams .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001034e22ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034e22b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034e2270(long param_1)

{
  func_0x000101897de4(param_1 + _DAT_112f73b08);
  func_0x00010168561c(param_1 + _DAT_113807328);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113807330));
  return;
}



/* Entry: 1034e22d8; end: 1034e22df;  */

void FUN_1034e22d8(void)

{
  if (lRam0000000112f73b38 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e76ad18);
  return;
}



/* Entry: 1034e22e0; end: 1034e2317;  */

void FUN_1034e22e0(undefined8 param_1)

{
  if (lRam0000000112f73b38 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e76ad18);
  return;
}



/* Entry: 1034e2318; end: 1034e239f;  */

void FUN_1034e2318(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dbcf5c8;
  lVar1 = 0x13f;
  func_0x000100b91d00();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBbWV_11034d660 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    func_0x000107c61630(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 1034e23a0; end: 1034e23af; -[SCAdProtoImpressionDataParserService builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034e23a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f73b50));
  return;
}



/* Entry: 1034e23b0; end: 1034e2413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034e23b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f73b48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f73b50) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034e2414; end: 1034e2473; -[SCAdProtoImpressionDataParserService init] */

void FUN_1034e2414(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProtoImpressionDataServices.AdProtoImpressionDataParserService",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034e2440);
  (*pcVar1)();
}



/* Entry: 1034e2474; end: 1034e24ab; -[SCAdProtoImpressionDataParserService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034e2474(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f73b48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f73b50));
  return;
}



/* Entry: 1034e24ac; end: 1034e24cb;  */

void FUN_1034e24ac(void)

{
  func_0x000107c61168(&PTR_PTR_1128dee00);
  return;
}



/* Entry: 1034e24cc; end: 1034e27b3;  */

void FUN_1034e24cc(code *param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [40];
  
  (*param_1)();
  if (((ulong)param_1 & 1) == 0) {
    if (lRam0000000112f73b80 != -1) {
      param_1 = (code *)0x112f73b80;
      param_2 = FUN_1034e28d0;
      func_0x000107c61568();
    }
    lVar1 = lRam0000000113807348;
    (*param_4)();
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    FUN_1034e27b4(param_3,auStack_78);
    puVar2 = &UNK_11065cd78;
    func_0x000107c613fc(&UNK_11065cd78,0x68,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    FUN_1034e27f8(auStack_78,puVar2 + 0x18);
    *(code **)(puVar2 + 0x40) = param_1;
    *(code **)(puVar2 + 0x48) = param_2;
    *(undefined8 *)(puVar2 + 0x50) = param_6;
    *(undefined8 *)(puVar2 + 0x58) = param_7;
    *(undefined8 *)(puVar2 + 0x60) = param_8;
    uStack_88 = 0x1034e2810;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11065cd90;
    ppuVar3 = &puStack_a8;
    puStack_80 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_80;
    func_0x000107c61434(param_7);
    func_0x000107c615f0(uVar4);
    func_0x000107c6157c(lVar1);
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c6142c(param_2);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 1034e27b4; end: 1034e27f7;  */

long FUN_1034e27b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1034e27f8; end: 1034e282f;  */

undefined8 * FUN_1034e27f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1034e2830; end: 1034e286b;  */

void FUN_1034e2830(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1034e286c; end: 1034e288f;  */

void FUN_1034e286c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [16];
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar8 = *(undefined8 *)(lVar4 + 0x10);
  uVar5 = uVar8;
  func_0x000107c614f0(uVar8);
  func_0x000107c615f0(uVar8);
  func_0x000100bc7fa4(uVar5);
  func_0x000107c615e8(uVar8);
  FUN_1034e27b4(unaff_x20 + 0x18,auStack_a0);
  lVar6 = lVar4 + 0x18;
  uStack_b0 = uVar1;
  uStack_a8 = uVar3;
  uStack_78 = uVar9;
  uStack_70 = uVar2;
  uStack_68 = uVar7;
  func_0x000107c61618();
  if (lVar6 == 0) {
    uVar9 = *(undefined8 *)(lVar4 + 0x20);
    puStack_c0 = &uStack_b0;
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar2);
    func_0x000107c6157c(uVar9);
    func_0x000100075034(FUN_1034e3324,auStack_d0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar9);
  }
  else {
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar2);
    func_0x000107c615e8(lVar6);
    FUN_1034e2a30(&uStack_b0);
  }
  func_0x0001034e3024(&uStack_b0);
  return;
}



/* Entry: 1034e2890; end: 1034e28cf;  */

undefined8 FUN_1034e2890(void)

{
  if (lRam0000000112f73b80 != -1) {
    func_0x000107c61568(0x112f73b80,FUN_1034e28d0);
  }
  return 0x113807348;
}



/* Entry: 1034e28d0; end: 1034e2907;  */

void FUN_1034e28d0(undefined8 param_1)

{
  func_0x0001034e30a8();
  func_0x000107c613fc();
  FUN_1034e333c();
  uRam0000000113807348 = param_1;
  return;
}



/* Entry: 1034e2908; end: 1034e2a2f;  */

void FUN_1034e2908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d0 [16];
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = uVar2;
  func_0x000107c614f0(uVar2);
  func_0x000107c615f0(uVar2);
  func_0x000100bc7fa4(uVar3);
  func_0x000107c615e8(uVar2);
  FUN_1034e27b4(param_2,auStack_a0);
  lVar1 = param_1 + 0x18;
  uStack_b0 = param_5;
  uStack_a8 = param_6;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_7;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_c0 = &uStack_b0;
    func_0x000107c61434(param_6);
    func_0x000107c61434(param_4);
    func_0x000107c6157c(uVar3);
    func_0x000100075034(FUN_1034e3324,auStack_d0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
  }
  else {
    func_0x000107c61434(param_6);
    func_0x000107c61434(param_4);
    func_0x000107c615e8(lVar1);
    FUN_1034e2a30(&uStack_b0);
  }
  func_0x0001034e3024(&uStack_b0);
  return;
}



/* Entry: 1034e2a30; end: 1034e2b7f;  */

/* WARNING: Possible PIC construction at 0x0001034e2b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034e2b60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034e2b54) */
/* WARNING: Removing unreachable block (ram,0x0001034e2b64) */

void FUN_1034e2a30(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = uVar4;
  func_0x000107c614f0(uVar4);
  func_0x000107c615f0(uVar4);
  func_0x000100bc7fa4(uVar2);
  func_0x000107c615e8(uVar4);
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1[1] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *param_1;
      func_0x000107c5fadc(uVar2);
    }
    uVar4 = param_1[5];
    lVar3 = param_1[6];
    func_0x0001000a8868(param_1 + 2,uVar4);
    (**(code **)(lVar3 + 0x10))(uVar4,lVar3);
    func_0x000107c5fadc(param_1[7],param_1[8]);
    uVar4 = param_1[5];
    lVar3 = param_1[6];
    func_0x0001000a8868(param_1 + 2,uVar4);
    (**(code **)(lVar3 + 8))(uVar4,lVar3);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar3);
    func_0x000107c3e200(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1034e2b80; end: 1034e2c53;  */

void FUN_1034e2b80(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001034e2ff0(param_2,&uStack_90);
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034e347c(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_1034e347c(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  lVar3 = uVar4 + uVar1 * 0x50;
  *(undefined8 *)(lVar3 + 0x28) = uStack_88;
  *(undefined8 *)(lVar3 + 0x20) = uStack_90;
  *(undefined8 *)(lVar3 + 0x58) = uStack_58;
  *(undefined8 *)(lVar3 + 0x50) = uStack_60;
  *(undefined8 *)(lVar3 + 0x68) = uStack_48;
  *(undefined8 *)(lVar3 + 0x60) = uStack_50;
  *(undefined8 *)(lVar3 + 0x38) = uStack_78;
  *(undefined8 *)(lVar3 + 0x30) = uStack_80;
  *(undefined8 *)(lVar3 + 0x48) = uStack_68;
  *(undefined8 *)(lVar3 + 0x40) = uStack_70;
  *param_1 = uVar4;
  return;
}



/* Entry: 1034e2c54; end: 1034e2d27;  */

void FUN_1034e2c54(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11065ce18;
  func_0x000107c613fc(&UNK_11065ce18,0x20,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  pcStack_50 = FUN_1034e2d28;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11065ce30;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f0(uVar3);
  func_0x000107c6157c();
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 1034e2d28; end: 1034e2d4b;  */

void FUN_1034e2d28(void)

{
  long unaff_x20;
  
  FUN_1034e2d68(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1034e2d4c; end: 1034e2d67;  */

void FUN_1034e2d4c(long param_1,long param_2)

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



/* Entry: 1034e2d68; end: 1034e2fb7;  */

void FUN_1034e2d68(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = uVar6;
  func_0x000107c614f0(uVar6);
  func_0x000107c615f0(uVar6);
  func_0x000100bc7fa4(uVar7);
  func_0x000107c615e8(uVar6);
  func_0x000107c61604(unaff_x20 + 0x18,param_1);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar7);
  func_0x0001000c74f0(&lStack_b8);
  func_0x000107c61574(uVar7);
  lVar1 = lStack_b8;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar7);
  func_0x000100075034(0x1034e2fb8,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar7);
  uVar8 = *(ulong *)(lVar1 + 0x10);
  func_0x000107c6157c();
  if (uVar8 != 0) {
    uVar10 = 0;
    lVar9 = lVar1 + 0x20;
    do {
      if (*(ulong *)(lVar1 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034e2fb8);
        (*pcVar2)();
      }
      func_0x0001034e2ff0(lVar9,&lStack_b8);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar7 = uVar6;
      func_0x000107c614f0(uVar6);
      func_0x000107c615f0(uVar6);
      func_0x000100bc7fa4(uVar7);
      func_0x000107c615e8(uVar6);
      lVar4 = unaff_x20 + 0x18;
      func_0x000107c61618();
      if (lVar4 != 0) {
        if (lStack_b0 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = lStack_b8;
          func_0x000107c5fadc(lStack_b8);
        }
        lVar5 = lStack_88;
        uVar7 = uStack_90;
        func_0x0001000a8868(auStack_a8,uStack_90);
        (**(code **)(lVar5 + 0x10))(uVar7,lVar5);
        uVar3 = uStack_80;
        func_0x000107c5fadc(uStack_80,uStack_78);
        lVar5 = lStack_88;
        uVar6 = uStack_90;
        func_0x0001000a8868(auStack_a8,uStack_90);
        (**(code **)(lVar5 + 8))(uVar6,lVar5);
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar5);
        func_0x000107c3e200(lVar4);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar6);
      }
      uVar10 = uVar10 + 1;
      func_0x0001034e3024(&lStack_b8);
      lVar9 = lVar9 + 0x50;
    } while (uVar8 != uVar10);
  }
  func_0x000107c61574(unaff_x20);
  func_0x000107c6142c(lVar1);
  return;
}



/* Entry: 1034e2fb8; end: 1034e3073;  */

void FUN_1034e2fb8(undefined8 *param_1)

{
  func_0x000107c6142c(*param_1);
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 1034e3074; end: 1034e30c7;  */

void FUN_1034e3074(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001034e3050(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034e30c8; end: 1034e3123;  */

long FUN_1034e30c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1034e3124; end: 1034e3213;  */

undefined8 * FUN_1034e3124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar3;
  pcVar2 = (code *)**(undefined8 **)(lVar3 + -8);
  func_0x000107c61434();
  (*pcVar2)(param_1 + 2,param_2 + 2,lVar3);
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  param_1[9] = param_2[9];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1034e3214; end: 1034e3277;  */

undefined8 * FUN_1034e3214(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  func_0x0001000834e4(param_1 + 2);
  uVar2 = param_2[2];
  uVar3 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[5] = uVar3;
  param_1[4] = uVar1;
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6142c(uVar2);
  param_1[9] = param_2[9];
  return param_1;
}



/* Entry: 1034e3278; end: 1034e3323;  */

int FUN_1034e3278(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1034e3324; end: 1034e333b;  */

void FUN_1034e3324(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1034e2b80(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1034e333c; end: 1034e347b;  */

void FUN_1034e333c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined *puStack_48;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  (**(code **)(lVar5 + 0x68))
            (auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f154c40);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar5 + 8))(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61614(unaff_x20 + 0x18,0);
  puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112f73b88,&UNK_10dbcf630);
  func_0x000107c613fc();
  ppuVar4 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + 0x20) = ppuVar4;
  return;
}



/* Entry: 1034e347c; end: 1034e3597;  */

undefined * FUN_1034e347c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034e3598);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f73c40;
    func_0x0001000285a8(0x112f73c40,&UNK_10dbcf690);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11065cec0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x50 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1034e3598; end: 1034e359f;  */

undefined8 FUN_1034e3598(void)

{
  return 1;
}



/* Entry: 1034e35a0; end: 1034e363f;  */

void FUN_1034e35a0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(10000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1034e3640; end: 1034e3667;  */

void FUN_1034e3640(undefined8 param_1,int *param_2)

{
  *(bool *)param_1 = *param_2 != 10000;
  return;
}



/* Entry: 1034e3668; end: 1034e36a7;  */

void FUN_1034e3668(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f73c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf6a0;
  func_0x000107c61520(&UNK_10dbcf6a0,&UNK_11065cf78);
  puRam0000000112f73c48 = puVar1;
  return;
}



/* Entry: 1034e36a8; end: 1034e36df;  */

undefined * FUN_1034e36a8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c30a04();
  return puVar1;
}



/* Entry: 1034e36e0; end: 1034e37cb;  */

uint FUN_1034e36e0(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1034e37cc; end: 1034e37f7;  */

void FUN_1034e37cc(undefined8 param_1)

{
  undefined1 *unaff_x20;
  undefined1 uStack_11;
  
  uStack_11 = *unaff_x20;
  func_0x000107c5fb18(&uStack_11,param_1);
  return;
}



/* Entry: 1034e37f8; end: 1034e380b;  */

void FUN_1034e37f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb77f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS10describingSSx_tclufC_11034d8f0)(param_1,param_1);
  return;
}



/* Entry: 1034e380c; end: 1034e38ab;  */

void FUN_1034e380c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(10000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1034e38ac; end: 1034e38d3;  */

void FUN_1034e38ac(undefined8 param_1,int *param_2)

{
  *(bool *)param_1 = *param_2 != 10000;
  return;
}



/* Entry: 1034e38d4; end: 1034e3913;  */

void FUN_1034e38d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f73c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf790;
  func_0x000107c61520(&UNK_10dbcf790,&UNK_11065d080);
  puRam0000000112f73c50 = puVar1;
  return;
}



/* Entry: 1034e3914; end: 1034e394b;  */

undefined * FUN_1034e3914(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c30a0c();
  return puVar1;
}



/* Entry: 1034e394c; end: 1034e3a4b;  */

uint FUN_1034e394c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1034e3a4c; end: 1034e3b2f;  */

void FUN_1034e3a4c(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(bVar1 + 10000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1034e3b30; end: 1034e3b43;  */

void FUN_1034e3b30(int *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *unaff_x20 + 10000;
  return;
}



/* Entry: 1034e3b44; end: 1034e3b83;  */

undefined * FUN_1034e3b44(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c30a08();
  return puVar1;
}



/* Entry: 1034e3b84; end: 1034e3b9f;  */

uint FUN_1034e3b84(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 10000;
  if (10 < uVar1) {
    uVar1 = 0xb;
  }
  return uVar1;
}



/* Entry: 1034e3ba0; end: 1034e3bdf;  */

void FUN_1034e3ba0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f73c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf860;
  func_0x000107c61520(&UNK_10dbcf860,&UNK_11065d188);
  puRam0000000112f73c58 = puVar1;
  return;
}



/* Entry: 1034e3be0; end: 1034e3d4b;  */

int FUN_1034e3be0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1034e3c5c;
        goto LAB_1034e3c40;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1034e3c40:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_1034e3c5c:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1034e3d4c; end: 1034e3deb;  */

void FUN_1034e3d4c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(10000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1034e3dec; end: 1034e3e13;  */

void FUN_1034e3dec(undefined8 param_1,int *param_2)

{
  *(bool *)param_1 = *param_2 != 10000;
  return;
}



/* Entry: 1034e3e14; end: 1034e3e53;  */

void FUN_1034e3e14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f73c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf930;
  func_0x000107c61520(&UNK_10dbcf930,&UNK_11065d290);
  puRam0000000112f73c60 = puVar1;
  return;
}



/* Entry: 1034e3e54; end: 1034e3e8b;  */

undefined * FUN_1034e3e54(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c30a10();
  return puVar1;
}



/* Entry: 1034e3e8c; end: 1034e3f8f;  */

uint FUN_1034e3e8c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1034e3f90; end: 1034e3faf;  */

void FUN_1034e3f90(void)

{
  func_0x000107c61168(&PTR_PTR_112f740f8);
  return;
}



/* Entry: 1034e3fb0; end: 1034e408f;  */

void FUN_1034e3fb0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar5 = param_1[1];
  uVar4 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  uVar3 = param_1[4];
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_538 = uVar4;
  uStack_530 = uVar5;
  uStack_528 = uVar6;
  uStack_520 = uVar7;
  uStack_518 = uVar3;
  FUN_1034e92a4(&uStack_538);
  func_0x000107c610b4(auStack_390,&uStack_538,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4090; end: 1034e414b;  */

void FUN_1034e4090(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 auStack_878 [424];
  undefined1 auStack_6d0 [424];
  undefined1 auStack_528 [424];
  undefined1 auStack_380 [424];
  undefined1 auStack_1d8 [424];
  
  func_0x000107c610b4(auStack_380,param_3 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1d8,param_3 + 0x20,0x1a1);
  iVar1 = (int)auStack_380;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_528,auStack_1d8,0x1a1);
    iVar1 = (int)auStack_1d8;
    func_0x0001034e9264();
    if (iVar1 == 1) {
      func_0x0001034e92b0();
      func_0x000107c610b4(auStack_6d0,auStack_380,0x1a1);
      FUN_1034e9270(auStack_6d0,auStack_878);
      return;
    }
  }
  FUN_1035967c0();
  return;
}



/* Entry: 1034e414c; end: 1034e4157;  */

void FUN_1034e414c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_3a0 [424];
  undefined1 auStack_1f8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_548 = param_1;
  uStack_540 = param_2;
  uStack_538 = param_3;
  (*(code *)0x1034e92b4)(&uStack_548);
  func_0x000107c610b4(auStack_3a0,&uStack_548,0x1a1);
  func_0x0001034e92ac(auStack_3a0);
  func_0x000107c610b4(auStack_1f8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_3a0,0x1a1);
  FUN_10350317c(auStack_1f8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4158; end: 1034e4213;  */

void FUN_1034e4158(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 auStack_878 [424];
  undefined1 auStack_6d0 [424];
  undefined1 auStack_528 [424];
  undefined1 auStack_380 [424];
  undefined1 auStack_1d8 [424];
  
  func_0x000107c610b4(auStack_380,param_3 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1d8,param_3 + 0x20,0x1a1);
  iVar1 = (int)auStack_380;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_528,auStack_1d8,0x1a1);
    iVar1 = (int)auStack_1d8;
    func_0x0001034e9264();
    if (iVar1 == 3) {
      FUN_1034e930c();
      func_0x000107c610b4(auStack_6d0,auStack_380,0x1a1);
      FUN_1034e9270(auStack_6d0,auStack_878);
      return;
    }
  }
  FUN_1035c72ac();
  return;
}



/* Entry: 1034e4214; end: 1034e421f;  */

void FUN_1034e4214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_3a0 [424];
  undefined1 auStack_1f8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_548 = param_1;
  uStack_540 = param_2;
  uStack_538 = param_3;
  FUN_1034e930c(&uStack_548);
  func_0x000107c610b4(auStack_3a0,&uStack_548,0x1a1);
  func_0x0001034e92ac(auStack_3a0);
  func_0x000107c610b4(auStack_1f8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_3a0,0x1a1);
  FUN_10350317c(auStack_1f8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4220; end: 1034e4303;  */

void FUN_1034e4220(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_3a0 [424];
  undefined1 auStack_1f8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_548 = param_1;
  uStack_540 = param_2;
  uStack_538 = param_3;
  (*param_4)(&uStack_548);
  func_0x000107c610b4(auStack_3a0,&uStack_548,0x1a1);
  func_0x0001034e92ac(auStack_3a0);
  func_0x000107c610b4(auStack_1f8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_3a0,0x1a1);
  FUN_10350317c(auStack_1f8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4304; end: 1034e430f;  */

void FUN_1034e4304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_3a0 [424];
  undefined1 auStack_1f8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_548 = param_1;
  uStack_540 = param_2;
  uStack_538 = param_3;
  FUN_1034e9368(&uStack_548);
  func_0x000107c610b4(auStack_3a0,&uStack_548,0x1a1);
  func_0x0001034e92ac(auStack_3a0);
  func_0x000107c610b4(auStack_1f8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_3a0,0x1a1);
  FUN_10350317c(auStack_1f8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4310; end: 1034e44bf;  */

void FUN_1034e4310(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_538 [424];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c610b4(auStack_538,param_1,0x1a0);
  func_0x0001034e937c(auStack_538);
  func_0x000107c610b4(auStack_390,auStack_538,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e44c0; end: 1034e457b;  */

void FUN_1034e44c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 auStack_878 [424];
  undefined1 auStack_6d0 [424];
  undefined1 auStack_528 [424];
  undefined1 auStack_380 [424];
  undefined1 auStack_1d8 [424];
  
  func_0x000107c610b4(auStack_380,param_3 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1d8,param_3 + 0x20,0x1a1);
  iVar1 = (int)auStack_380;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_528,auStack_1d8,0x1a1);
    iVar1 = (int)auStack_1d8;
    func_0x0001034e9264();
    if (iVar1 == 8) {
      func_0x0001034e9398();
      func_0x000107c610b4(auStack_6d0,auStack_380,0x1a1);
      FUN_1034e9270(auStack_6d0,auStack_878);
      return;
    }
  }
  FUN_10357f588();
  return;
}



/* Entry: 1034e457c; end: 1034e4593;  */

void FUN_1034e457c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_3a0 [424];
  undefined1 auStack_1f8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_548 = param_1;
  uStack_540 = param_2;
  uStack_538 = param_3;
  (*(code *)0x1034e939c)(&uStack_548);
  func_0x000107c610b4(auStack_3a0,&uStack_548,0x1a1);
  func_0x0001034e92ac(auStack_3a0);
  func_0x000107c610b4(auStack_1f8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_3a0,0x1a1);
  FUN_10350317c(auStack_1f8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4594; end: 1034e4757;  */

void FUN_1034e4594(undefined8 *param_1,code *param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  (*param_2)(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4758; end: 1034e477b;  */

void FUN_1034e4758(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  uStack_4f8 = param_1[9];
  uStack_500 = param_1[8];
  uStack_4e8 = param_1[0xb];
  uStack_4f0 = param_1[10];
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  (*(code *)0x1034e9428)(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e477c; end: 1034e4953;  */

void FUN_1034e477c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_4b8 = param_1[0x11];
  uStack_4c0 = param_1[0x10];
  uStack_4a8 = param_1[0x13];
  uStack_4b0 = param_1[0x12];
  uStack_498 = param_1[0x15];
  uStack_4a0 = param_1[0x14];
  uStack_488 = param_1[0x17];
  uStack_490 = param_1[0x16];
  uStack_4f8 = param_1[9];
  uStack_500 = param_1[8];
  uStack_4e8 = param_1[0xb];
  uStack_4f0 = param_1[10];
  uStack_4d8 = param_1[0xd];
  uStack_4e0 = param_1[0xc];
  uStack_4c8 = param_1[0xf];
  uStack_4d0 = param_1[0xe];
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  FUN_1034e9564(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4954; end: 1034e495f;  */

void FUN_1034e4954(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  uStack_4f8 = param_1[9];
  uStack_500 = param_1[8];
  uStack_4f0 = param_1[10];
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  FUN_1034e95c0(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4960; end: 1034e4a2f;  */

void FUN_1034e4960(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_538 = param_1;
  uStack_530 = param_2;
  FUN_1034e960c(&uStack_538);
  func_0x000107c610b4(auStack_390,&uStack_538,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4a30; end: 1034e4a3b;  */

void FUN_1034e4a30(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  uStack_4f8 = param_1[9];
  uStack_500 = param_1[8];
  uStack_4e8 = param_1[0xb];
  uStack_4f0 = param_1[10];
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  (*(code *)0x1034e9620)(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4a3c; end: 1034e4b1f;  */

void FUN_1034e4a3c(undefined8 *param_1,code *param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  uStack_4f8 = param_1[9];
  uStack_500 = param_1[8];
  uStack_4e8 = param_1[0xb];
  uStack_4f0 = param_1[10];
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  (*param_2)(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4b20; end: 1034e4b2b;  */

void FUN_1034e4b20(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  uStack_4f8 = param_1[9];
  uStack_500 = param_1[8];
  uStack_4f0 = param_1[10];
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  FUN_1034e9668(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4b2c; end: 1034e4c17;  */

void FUN_1034e4b2c(undefined8 *param_1,code *param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  uStack_4f8 = param_1[9];
  uStack_500 = param_1[8];
  uStack_4f0 = param_1[10];
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  (*param_2)(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4c18; end: 1034e4d17;  */

void FUN_1034e4c18(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_498 = param_1[0x15];
  uStack_4a0 = param_1[0x14];
  uStack_488 = param_1[0x17];
  uStack_490 = param_1[0x16];
  uStack_478 = param_1[0x19];
  uStack_480 = param_1[0x18];
  uStack_4d8 = param_1[0xd];
  uStack_4e0 = param_1[0xc];
  uStack_4c8 = param_1[0xf];
  uStack_4d0 = param_1[0xe];
  uStack_4b8 = param_1[0x11];
  uStack_4c0 = param_1[0x10];
  uStack_4a8 = param_1[0x13];
  uStack_4b0 = param_1[0x12];
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  uStack_4f8 = param_1[9];
  uStack_500 = param_1[8];
  uStack_4e8 = param_1[0xb];
  uStack_4f0 = param_1[10];
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  FUN_1034e96b4(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4d18; end: 1034e4d23;  */

void FUN_1034e4d18(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_4f8 = param_1[9];
  uStack_500 = param_1[8];
  uStack_4e8 = param_1[0xb];
  uStack_4f0 = param_1[10];
  uStack_4e0 = param_1[0xc];
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  (*(code *)0x1034e96c8)(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4d24; end: 1034e4ecf;  */

void FUN_1034e4d24(undefined8 *param_1,code *param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_4f8 = param_1[9];
  uStack_500 = param_1[8];
  uStack_4e8 = param_1[0xb];
  uStack_4f0 = param_1[10];
  uStack_4e0 = param_1[0xc];
  uStack_538 = param_1[1];
  uStack_540 = *param_1;
  uStack_528 = param_1[3];
  uStack_530 = param_1[2];
  uStack_518 = param_1[5];
  uStack_520 = param_1[4];
  uStack_508 = param_1[7];
  uStack_510 = param_1[6];
  (*param_2)(&uStack_540);
  func_0x000107c610b4(auStack_390,&uStack_540,0x1a1);
  func_0x0001034e92ac(auStack_390);
  func_0x000107c610b4(auStack_1e8,lVar2 + 0x20,0x1a1);
  func_0x000107c610b4(lVar2 + 0x20,auStack_390,0x1a1);
  FUN_10350317c(auStack_1e8,0x112f73c68,&UNK_10dbcfb78);
  return;
}



/* Entry: 1034e4ed0; end: 1034e4eeb;  */

undefined8 FUN_1034e4ed0(void)

{
  if (lRam0000000112f73c70 != -1) {
    func_0x000107c61568(0x112f73c70,FUN_1034f569c);
  }
  func_0x000107c6157c(uRam0000000112f73c78);
  return 0;
}



/* Entry: 1034e4eec; end: 1034e4f8f;  */

void FUN_1034e4eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x1d0,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x1d0);
  uVar1 = *(undefined8 *)(lVar5 + 0x1d8);
  uVar4 = *(undefined8 *)(lVar5 + 0x1e0);
  *(undefined8 *)(lVar5 + 0x1d0) = param_1;
  *(undefined8 *)(lVar5 + 0x1d8) = param_2;
  *(undefined8 *)(lVar5 + 0x1e0) = param_3;
  FUN_103503054(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1034e4f90; end: 1034e502f;  */

bool FUN_1034e4f90(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x1d0,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x1d0);
  uVar2 = *(undefined8 *)(param_3 + 0x1d8);
  lVar3 = *(long *)(param_3 + 0x1e0);
  if (lVar3 == 0) {
    FUN_103500a58(uVar1,uVar2,0);
  }
  else {
    FUN_103500a58(uVar1,uVar2,lVar3);
    FUN_103503054(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  FUN_103503054(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 1034e5030; end: 1034e5493;  */

void FUN_1034e5030(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_118 [24];
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4();
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  puVar1 = (undefined8 *)(lVar3 + 0x1e8);
  func_0x000107c61428(puVar1,auStack_118,1,0);
  uStack_78 = *(undefined8 *)(lVar3 + 0x210);
  uStack_80 = *(undefined8 *)(lVar3 + 0x208);
  uStack_68 = *(undefined8 *)(lVar3 + 0x220);
  uStack_70 = *(undefined8 *)(lVar3 + 0x218);
  uStack_58 = *(undefined8 *)(lVar3 + 0x230);
  uStack_60 = *(undefined8 *)(lVar3 + 0x228);
  uStack_98 = *(undefined8 *)(lVar3 + 0x1f0);
  uStack_a0 = *puVar1;
  uStack_88 = *(undefined8 *)(lVar3 + 0x200);
  uStack_90 = *(undefined8 *)(lVar3 + 0x1f8);
  uStack_50 = *(undefined8 *)(lVar3 + 0x238);
  *(undefined8 *)(lVar3 + 0x210) = uStack_d8;
  *(undefined8 *)(lVar3 + 0x208) = uStack_e0;
  *(undefined8 *)(lVar3 + 0x220) = uStack_c8;
  *(undefined8 *)(lVar3 + 0x218) = uStack_d0;
  *(undefined8 *)(lVar3 + 0x230) = uStack_b8;
  *(undefined8 *)(lVar3 + 0x228) = uStack_c0;
  *(undefined8 *)(lVar3 + 0x238) = uStack_b0;
  *(undefined8 *)(lVar3 + 0x1f0) = uStack_f8;
  *puVar1 = uStack_100;
  *(undefined8 *)(lVar3 + 0x200) = uStack_e8;
  *(undefined8 *)(lVar3 + 0x1f8) = uStack_f0;
  FUN_10350317c(&uStack_a0,0x112f73c80,&UNK_10dbcfb80);
  return;
}



/* Entry: 1034e5494; end: 1034e55ab;  */

void FUN_1034e5494(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x368,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x368);
  *(undefined8 *)(lVar3 + 0x368) = param_1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1034e55ac; end: 1034e565b;  */

void FUN_1034e55ac(uint param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x388,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x388);
  uVar3 = *(undefined8 *)(lVar5 + 0x390);
  uVar4 = *(undefined8 *)(lVar5 + 0x398);
  *(ulong *)(lVar5 + 0x388) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x390) = param_2;
  *(undefined8 *)(lVar5 + 0x398) = param_3;
  func_0x000100d54cd0(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1034e565c; end: 1034e56e7;  */

void FUN_1034e565c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x3a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x3a0);
  *(undefined8 *)(lVar3 + 0x3a0) = param_1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1034e56e8; end: 1034e5f4b;  */

void FUN_1034e56e8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034e3f90(0);
    func_0x000107c613fc();
    FUN_1034e81e4(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x3a8,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x3a8);
  uVar3 = *(undefined8 *)(lVar5 + 0x3b0);
  uVar4 = *(undefined8 *)(lVar5 + 0x3b8);
  *(ulong *)(lVar5 + 0x3a8) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x3b0) = param_2;
  *(undefined8 *)(lVar5 + 0x3b8) = param_3;
  func_0x000101556278(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1034e5f4c; end: 1034e5f9f;  */

uint FUN_1034e5f4c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_370 [424];
  undefined1 auStack_1c8 [424];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_370,param_1,0x1a1);
  func_0x000107c610b4(auStack_1c8,param_2,0x1a1);
  FUN_1034fea40(auStack_370,auStack_1c8);
  return uVar1 & 1;
}



/* Entry: 1034e5fa0; end: 1034e5fbb;  */

undefined8 FUN_1034e5fa0(void)

{
  if (lRam0000000112f73cd0 != -1) {
    func_0x000107c61568(0x112f73cd0,FUN_1034e7fd0);
  }
  func_0x000107c6157c(uRam0000000112f73cd8);
  return 0;
}


