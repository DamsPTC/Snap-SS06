/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103291280; end: 10329144f;  */

undefined8 FUN_103291280(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  func_0x000107c5bfc4();
  func_0x000107c61180();
  if (param_1 == 0) {
    pcVar7 = (code *)0x0;
    puVar5 = (undefined *)0x0;
    uVar9 = 0;
    puVar8 = (undefined *)0x0;
    uVar6 = 0;
  }
  else {
    puVar5 = &UNK_110631698;
    func_0x000107c613fc(&UNK_110631698,0x18,7);
    *(undefined8 **)(puVar5 + 0x10) = &uStack_68;
    puVar8 = &UNK_1106316c0;
    func_0x000107c613fc(&UNK_1106316c0,0x20,7);
    pcVar7 = FUN_1032915b0;
    *(code **)(puVar8 + 0x10) = FUN_1032915b0;
    *(undefined **)(puVar8 + 0x18) = puVar5;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x1032915b8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_101f02948;
    puStack_80 = &UNK_1106316d8;
    ppuVar2 = &puStack_98;
    puStack_70 = puVar8;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_70);
    puVar8 = &UNK_110631710;
    func_0x000107c613fc(&UNK_110631710,0x18,7);
    *(undefined8 **)(puVar8 + 0x10) = &uStack_68;
    puVar3 = &UNK_110631738;
    func_0x000107c613fc(&UNK_110631738,0x20,7);
    uVar9 = 0x1032915dc;
    *(undefined8 *)(puVar3 + 0x10) = 0x1032915dc;
    *(undefined **)(puVar3 + 0x18) = puVar8;
    uStack_78 = 0x1032915e4;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_101f02944;
    puStack_80 = &UNK_110631750;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_70);
    func_0x000107c4c6e0(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
    uVar6 = uStack_68;
  }
  func_0x000100d3fe2c(pcVar7,puVar5);
  func_0x000100d3fe2c(uVar9,puVar8);
  return uVar6;
}



/* Entry: 103291450; end: 10329158f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103291450(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_1 + _DAT_112f50ff8);
  lVar2 = lVar5;
  FUN_103291280();
  if (lVar2 == 0) {
    return (undefined *)0x0;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f50fe8);
  func_0x000107c5fadc(uVar3,((undefined8 *)(param_1 + _DAT_112f50fe8))[1]);
  func_0x000107c4004c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(lVar5 + _DAT_11307fe98);
    lVar1 = ((undefined8 *)(lVar5 + _DAT_11307fe98))[1];
    func_0x000107c61434(lVar1);
    func_0x000107c61170(lVar5);
    if (lVar1 != 0) {
      func_0x000107c5fadc(uVar6,lVar1);
      func_0x000107c6142c(lVar1);
      goto LAB_103291508;
    }
  }
  uVar6 = 0;
LAB_103291508:
  puVar4 = PTR_PTR_1126acf90;
  func_0x000107c61168(PTR_PTR_1126acf90);
  func_0x000107c5c080();
  func_0x000107c4c93c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
  return puVar4;
}



/* Entry: 103291590; end: 1032915af;  */

void FUN_103291590(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5f18);
  return;
}



/* Entry: 1032915b0; end: 1032915eb;  */

/* WARNING: Possible PIC construction at 0x000103290fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103290fac) */
/* WARNING: Removing unreachable block (ram,0x000103290fec) */
/* WARNING: Removing unreachable block (ram,0x000103290ff4) */
/* WARNING: Removing unreachable block (ram,0x000103290fb4) */
/* WARNING: Removing unreachable block (ram,0x000103291000) */
/* WARNING: Removing unreachable block (ram,0x000103290fc0) */
/* WARNING: Removing unreachable block (ram,0x000103291024) */
/* WARNING: Removing unreachable block (ram,0x000103290fc8) */
/* WARNING: Removing unreachable block (ram,0x000103291034) */
/* WARNING: Removing unreachable block (ram,0x000103290fd4) */
/* WARNING: Removing unreachable block (ram,0x000103290fdc) */

void FUN_1032915b0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c5b538();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = *plVar2;
    *plVar2 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1032915ec(0);
    func_0x000107c5fc54(param_1,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032915ec; end: 10329162f;  */

void FUN_1032915ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0fd78 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126cbc90;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e0fd78 = puVar1;
  return;
}



/* Entry: 103291630; end: 103291637;  */

void FUN_103291630(long param_1,long param_2)

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



/* Entry: 103291638; end: 10329184f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103291638(void)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_60;
  undefined *puStack_58;
  
  iVar3 = (int)&puStack_60;
  puVar9 = *(undefined **)(unaff_x20 + _DAT_112f50b78);
  puVar8 = puVar9;
  func_0x000107c614f0();
  FUN_1032922b4();
  uVar4 = 0x112f50ba8;
  puStack_58 = puVar8;
  func_0x0001000285a8(0x112f50ba8,&UNK_10dba5c38);
  uVar5 = 0x112f50bb0;
  func_0x0001000285a8(0x112f50bb0,&UNK_10dba5c40);
  func_0x000107c6147c(&puStack_60,&puStack_58,uVar4,uVar5,6);
  if (iVar3 == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  if ((ulong)puStack_60 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puStack_60 & 0xffffffffffffff8) + 0x10);
    if (puVar8 == (undefined *)0x0) {
LAB_1032917e0:
      func_0x000107c6142c();
      func_0x000102763dc4();
      puVar8 = puStack_60;
      func_0x000107c613fc();
      *(undefined8 *)(puVar8 + 0x18) = 3;
      *(undefined8 *)(puVar8 + 0x10) = 1;
      func_0x000107c4e9e0();
      func_0x000107c61180();
      *(undefined **)(puVar8 + 0x20) = puVar9;
      return puVar8;
    }
  }
  else {
    puVar8 = (undefined *)((ulong)puStack_60 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_60) {
      puVar8 = puStack_60;
    }
    puVar7 = puVar8;
    func_0x000107c60480();
    if (puVar7 == (undefined *)0x0) goto LAB_1032917e0;
    func_0x000107c60480();
    if (puVar8 == (undefined *)0x0) {
      func_0x000107c6142c(puStack_60);
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102761580(0,(ulong)puVar8 & ((long)puVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
  if (-1 < (long)puVar8) {
    puVar9 = (undefined *)0x0;
    do {
      puVar7 = puStack_58;
      if (((ulong)puStack_60 & 0xc000000000000001) == 0) {
        puVar10 = *(undefined **)(puStack_60 + (long)puVar9 * 8 + 0x20);
        func_0x000107c615f0(puVar10);
      }
      else {
        puVar10 = puVar9;
        FUN_10328ec34(puVar9,puStack_60);
      }
      puVar6 = puVar10;
      func_0x000107c4e9e0();
      func_0x000107c61180();
      func_0x000107c615e8(puVar10);
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puStack_58 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        func_0x000102761580(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      puVar7 = puStack_58;
      puVar9 = puVar9 + 1;
      *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_58 + uVar1 * 8 + 0x20) = puVar6;
    } while (puVar8 != puVar9);
    func_0x000107c6142c(puStack_60);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103291850);
  (*pcVar2)();
}



/* Entry: 103291850; end: 1032918c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103291850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f50b70) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50b68);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f50b78) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032918c8; end: 103291953; -[SCSpotlightCustomInterstitialOperaGroup initWithId:item:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032918c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  *(undefined8 *)(param_1 + _DAT_112f50b70) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f50b68);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112f50b78) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 103291954; end: 1032919df; -[SCSpotlightCustomInterstitialOperaGroup playlistItemGroupModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103291954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f50b68);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f50b68))[1];
  ppuVar3 = &PTR____CFConstantStringClassReference_110ed3ab8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110ed3ab8);
  func_0x000104445170(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x000104444a48(uVar1,uVar2,ppuVar3,param_2,0,1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032919e0; end: 103291a23; -[SCSpotlightCustomInterstitialOperaGroup insertionIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1032919e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f50b70;
  func_0x000107c61428(param_1 + _DAT_112f50b70,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103291a24; end: 103291a73; -[SCSpotlightCustomInterstitialOperaGroup setInsertionIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103291a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f50b70;
  func_0x000107c61428(param_1 + _DAT_112f50b70,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103291a74; end: 103291ad3; -[SCSpotlightCustomInterstitialOperaGroup init] */

void FUN_103291a74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightCustomInterstitialOperaGroup",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103291aa0);
  (*pcVar1)();
}



/* Entry: 103291ad4; end: 103291b0f; -[SCSpotlightCustomInterstitialOperaGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103291ad4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f50b68 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f50b78));
  return;
}



/* Entry: 103291b10; end: 103291b2f;  */

void FUN_103291b10(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5fe0);
  return;
}



/* Entry: 103291b30; end: 103291b7f;  */

void FUN_103291b30(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002a;
  func_0x000100442ccc(0xd00000000000002a,0x800000010f134f30,0);
  uRam00000001138071b8 = uVar1;
  return;
}



/* Entry: 103291b80; end: 103291b9b; +[SCSpotlightCustomInterstitialsConfigKeys tiledInterstitialSelectorEnabled] */

void FUN_103291b80(void)

{
  if (lRam0000000112f50bb8 != -1) {
    func_0x000107c61568(0x112f50bb8,FUN_103291b30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138071b8);
  return;
}



/* Entry: 103291b9c; end: 103291beb;  */

void FUN_103291b9c(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000038;
  func_0x000100bd65fc(0xd000000000000038,0x800000010f134ef0,2);
  uRam00000001138071c0 = uVar1;
  return;
}



/* Entry: 103291bec; end: 103291c07; +[SCSpotlightCustomInterstitialsConfigKeys tiledInterstitialInsertionPosition] */

void FUN_103291bec(void)

{
  if (lRam0000000112f50bc0 != -1) {
    func_0x000107c61568(0x112f50bc0,FUN_103291b9c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138071c0);
  return;
}



/* Entry: 103291c08; end: 103291c57;  */

void FUN_103291c08(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002a;
  func_0x000100442ccc(0xd00000000000002a,0x800000010f134ec0,0);
  uRam00000001138071c8 = uVar1;
  return;
}



/* Entry: 103291c58; end: 103291c73; +[SCSpotlightCustomInterstitialsConfigKeys tiledInterstitialAutoplayEnabled] */

void FUN_103291c58(void)

{
  if (lRam0000000112f50bc8 != -1) {
    func_0x000107c61568(0x112f50bc8,FUN_103291c08);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138071c8);
  return;
}



/* Entry: 103291c74; end: 103291cc3;  */

void FUN_103291c74(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002b;
  func_0x000100bd65fc(0xd00000000000002b,0x800000010f134e90,0xffffffffffffffff);
  uRam00000001138071d0 = uVar1;
  return;
}



/* Entry: 103291cc4; end: 103291cdf; +[SCSpotlightCustomInterstitialsConfigKeys tiledInterstitialImpressionCap] */

void FUN_103291cc4(void)

{
  if (lRam0000000112f50bd0 != -1) {
    func_0x000107c61568(0x112f50bd0,FUN_103291c74);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138071d0);
  return;
}



/* Entry: 103291ce0; end: 103291d2f;  */

void FUN_103291ce0(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000031;
  func_0x000100bd65fc(0xd000000000000031,0x800000010f134e50,0xffffffffffffffff);
  uRam00000001138071d8 = uVar1;
  return;
}



/* Entry: 103291d30; end: 103291d4b; +[SCSpotlightCustomInterstitialsConfigKeys interstitialImpressionCapTTLSeconds] */

void FUN_103291d30(void)

{
  if (lRam0000000112f50bd8 != -1) {
    func_0x000107c61568(0x112f50bd8,FUN_103291ce0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138071d8);
  return;
}



/* Entry: 103291d4c; end: 103291d8f;  */

void FUN_103291d4c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 103291d90; end: 103291dcb; -[SCSpotlightCustomInterstitialsConfigKeys init] */

void FUN_103291d90(undefined8 param_1)

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



/* Entry: 103291dcc; end: 103291dff;  */

void FUN_103291dcc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103291e00; end: 103291e03; -[SCSpotlightCustomInterstitialsConfigKeys .cxx_destruct] */

void FUN_103291e00(void)

{
  return;
}



/* Entry: 103291e04; end: 103291e23;  */

void FUN_103291e04(void)

{
  func_0x000107c61168(&PTR_PTR_1128c60b0);
  return;
}



/* Entry: 103291e24; end: 103291f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103291e24(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  func_0x000100420238(param_1,unaff_x20 + _DAT_112f50c08);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 103291f04; end: 103291f93; -[_TtC28SpotlightCustomInterstitials54SpotlightCustomInterstitialsLayerViewControllerFactory supportedLayers] */

void FUN_103291f04(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112eff120;
  func_0x0001000285a8(0x112eff120,&UNK_10db32400);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar2 = 0;
  FUN_10328a96c();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0;
  FUN_10329650c();
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  uVar2 = 0x112eff150;
  func_0x0001000285a8(0x112eff150,&UNK_10db32440);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103291f94; end: 1032920fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103291f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  plVar8 = &lStack_b0;
  uVar2 = 0;
  FUN_10328a96c(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 == 0) {
    FUN_10329650c();
    func_0x000107c61480(param_1,lVar3);
    lVar3 = _DAT_112f50c08;
    if (param_1 != 0) {
      lVar4 = 0;
      FUN_103298f1c();
      lVar5 = lVar4;
      func_0x000107c610f8();
      lVar6 = 0;
      FUN_103297a34();
      func_0x000107c614e8();
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(long *)(lVar5 + _DAT_112f50df0) = lVar6;
      func_0x000100420238(unaff_x20 + lVar3,auStack_88);
      lVar3 = _DAT_112f50d38;
      func_0x000107c61428(lVar6 + _DAT_112f50d38,auStack_a0,0x21,0);
      lVar7 = lVar6;
      func_0x000107c61174(lVar6);
      FUN_1032920fc(auStack_88,lVar6 + lVar3);
      func_0x000107c614a8(auStack_a0);
      func_0x000107c61170(lVar7);
      lStack_b0 = lVar5;
      lStack_a8 = lVar4;
      func_0x000107c61154(&lStack_b0,PTR_s_initWithConfiguration_layerViewC_1125de030,param_2,
                          param_3,param_4,param_5);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032920fc);
        (*pcVar1)();
      }
    }
  }
  else {
    FUN_10328ad18(0);
    func_0x000107c610f8();
    func_0x000107c45ff8();
  }
  return;
}



/* Entry: 1032920fc; end: 10329214b;  */

undefined8 FUN_1032920fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f50c10;
  func_0x0001000285a8(0x112f50c10,&UNK_10dba5d10);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10329214c; end: 103292223; -[_TtC28SpotlightCustomInterstitials54SpotlightCustomInterstitialsLayerViewControllerFactory layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_10329214c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103291f94(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103292224; end: 103292283; -[_TtC28SpotlightCustomInterstitials54SpotlightCustomInterstitialsLayerViewControllerFactory init] */

void FUN_103292224(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightCustomInterstitialsLayerViewControllerFactory"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103292250);
  (*pcVar1)();
}



/* Entry: 103292284; end: 103292293; -[_TtC28SpotlightCustomInterstitials54SpotlightCustomInterstitialsLayerViewControllerFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103292284(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112f50c08))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f50c08));
  return;
}



/* Entry: 103292294; end: 1032922b3;  */

void FUN_103292294(void)

{
  func_0x000107c61168(&PTR_PTR_1128c6160);
  return;
}



/* Entry: 1032922b4; end: 103292413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032922b4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x20;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined *puStack_48;
  
  puVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000107c61440();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0 && unaff_x20 != (undefined *)0x0) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (unaff_x20[_DAT_112f50c98] == '\x01') {
      FUN_1032955a8();
      puVar5 = puVar1;
    }
    if ((ulong)puVar5 >> 0x3e == 0) {
      uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
      puVar4 = puVar5;
      func_0x000107c61434();
      func_0x000107c605f8();
      uVar3 = 0x112f50b20;
      func_0x0001000285a8(0x112f50b20,&UNK_10dba5bc0);
      func_0x000107c61488(puVar4,uVar3);
      if (puVar4 == (undefined *)0x0) {
        lVar7 = *(long *)(uVar6 + 0x10);
        plVar8 = (long *)(uVar6 + 0x20);
        do {
          if (lVar7 == 0) goto LAB_103292364;
          lVar2 = *plVar8;
          puStack_48 = PTR_DAT_1126a2b80;
          func_0x000107c61494(lVar2,1,&puStack_48);
          lVar7 = lVar7 + -1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != 0);
        func_0x000107c6142c(puVar5);
        puVar4 = (undefined *)(uVar6 | 1);
      }
      else {
LAB_103292364:
        func_0x000107c6142c(puVar5);
        puVar4 = puVar5;
      }
    }
    else {
      puVar4 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar4 = puVar5;
      }
      func_0x000107c61434(puVar5);
      uVar3 = 0x112f50b20;
      func_0x0001000285a8(0x112f50b20,&UNK_10dba5bc0);
      func_0x000107c60458(puVar4,uVar3);
      func_0x000107c61430(puVar5,2);
    }
  }
  return puVar4;
}



/* Entry: 103292414; end: 1032927f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103292414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar2 = _DAT_112f50c40;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f50c48) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50c50);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar5 = puVar4;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c539d4(0x4028000000000000,puVar6);
  func_0x000107c61170(puVar6);
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c562fc(puVar6);
  func_0x000107c61170(puVar6);
  lVar2 = _DAT_112f50c40;
  func_0x000107c5a050(*(undefined8 *)(puVar4 + _DAT_112f50c40));
  func_0x000107c53840(*(undefined8 *)(puVar4 + lVar2));
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(puVar5);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 9;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  uVar8 = *(undefined8 *)(puVar4 + lVar2);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar9 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x20) = uVar9;
  uVar8 = *(undefined8 *)(puVar4 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar9 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x28) = uVar9;
  uVar8 = *(undefined8 *)(puVar4 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar9 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  uVar8 = *(undefined8 *)(puVar4 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar6 = puVar5;
  func_0x000107c3ec1c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar9 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x38) = uVar9;
  uVar9 = 0;
  func_0x000103294f40(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar10 = puVar7;
  func_0x000107c5fc48(puVar7,uVar9);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar10);
  return puVar4;
}



/* Entry: 1032927f4; end: 103292813; -[_TtC28SpotlightCustomInterstitials30SpotlightTiledInterstitialCell initWithFrame:] */

void FUN_1032927f4(void)

{
  FUN_103292414();
  return;
}



/* Entry: 103292814; end: 1032928c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103292814(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  lVar2 = _DAT_112f50c40;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f50c48) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50c50);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar4 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar4);
  }
  return puVar4;
}



/* Entry: 1032928c8; end: 1032928ef; -[_TtC28SpotlightCustomInterstitials30SpotlightTiledInterstitialCell initWithCoder:] */

void FUN_1032928c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103292814();
  return;
}



/* Entry: 1032928f0; end: 103292b03;  */

/* WARNING: Possible PIC construction at 0x00010329297c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103292a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103292ad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103292a7c) */
/* WARNING: Removing unreachable block (ram,0x000103292980) */
/* WARNING: Removing unreachable block (ram,0x000103292aa8) */
/* WARNING: Removing unreachable block (ram,0x00010329298c) */
/* WARNING: Removing unreachable block (ram,0x000103292acc) */
/* WARNING: Removing unreachable block (ram,0x000103292a08) */
/* WARNING: Removing unreachable block (ram,0x000103292ad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032928f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  func_0x000107c614f0();
  if (param_1 == 0) {
    return;
  }
  lVar2 = param_1;
  func_0x000107c61174();
  lVar4 = lVar2;
  func_0x000107c5bfd8();
  lVar1 = _DAT_112f50c48;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f50c48);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c5bfd8();
    if (lVar4 == lVar3) goto code_r0x000107c61170;
    lVar4 = *(long *)(unaff_x20 + lVar1);
  }
  *(long *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61174(lVar2);
  lVar2 = lVar4;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103292b04; end: 103293513;  */

undefined * FUN_103292b04(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined8 unaff_x20;
  undefined *puVar22;
  code *pcVar23;
  code *pcVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined *puVar27;
  code *pcVar28;
  undefined *puVar29;
  undefined *puVar30;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *apuStack_80 [2];
  
  apuStack_80[0] = (undefined *)0x0;
  func_0x000107c5bfc4();
  func_0x000107c61180();
  if (param_1 == 0) {
    puVar20 = (undefined *)0x0;
    puVar29 = (undefined *)0x0;
    uVar18 = 0;
    puVar30 = (undefined *)0x0;
    pcStack_118 = (code *)0x0;
    puVar22 = (undefined *)0x0;
    pcVar24 = (code *)0x0;
    puVar26 = (undefined *)0x0;
    pcVar23 = (code *)0x0;
    puVar27 = (undefined *)0x0;
    pcVar28 = (code *)0x0;
    goto LAB_1032934a8;
  }
  puVar30 = &UNK_1106318f0;
  func_0x000107c613fc(&UNK_1106318f0,0x18,7);
  *(undefined ***)(puVar30 + 0x10) = apuStack_80;
  puVar29 = &UNK_110631918;
  func_0x000107c613fc(&UNK_110631918,0x20,7);
  *(code **)(puVar29 + 0x10) = FUN_103294bf4;
  *(undefined **)(puVar29 + 0x18) = puVar30;
  puVar27 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_f0 = (code *)0x103295048;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0x42000000;
  pcStack_100 = (code *)&UNK_101f02948;
  puStack_f8 = &UNK_110631930;
  ppuVar5 = &puStack_110;
  puStack_e8 = puVar29;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_e8);
  puVar29 = &UNK_110631968;
  func_0x000107c613fc(&UNK_110631968,0x18,7);
  *(undefined ***)(puVar29 + 0x10) = apuStack_80;
  puVar20 = &UNK_110631990;
  func_0x000107c613fc(&UNK_110631990,0x20,7);
  *(undefined8 *)(puVar20 + 0x10) = 0x103295050;
  *(undefined **)(puVar20 + 0x18) = puVar29;
  pcStack_f0 = (code *)0x103295044;
  puStack_110 = puVar27;
  uStack_108 = 0x42000000;
  pcStack_100 = (code *)&UNK_101f02944;
  puStack_f8 = &UNK_1106319a8;
  ppuVar6 = &puStack_110;
  puStack_e8 = puVar20;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_e8);
  pcStack_f0 = FUN_103293948;
  puStack_e8 = (undefined *)0x0;
  puStack_110 = puVar27;
  uStack_108 = 0x42000000;
  pcStack_100 = (code *)0x103006128;
  puStack_f8 = &UNK_1106319d0;
  ppuVar7 = &puStack_110;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_e8);
  puVar20 = &UNK_110631a08;
  func_0x000107c613fc(&UNK_110631a08,0x20,7);
  *(undefined ***)(puVar20 + 0x10) = apuStack_80;
  *(undefined8 *)(puVar20 + 0x18) = unaff_x20;
  puVar26 = &UNK_110631a30;
  func_0x000107c613fc(&UNK_110631a30,0x20,7);
  *(code **)(puVar26 + 0x10) = FUN_103294c0c;
  *(undefined **)(puVar26 + 0x18) = puVar20;
  pcStack_f0 = FUN_103294c14;
  puStack_110 = puVar27;
  uStack_108 = 0x42000000;
  pcStack_100 = (code *)&UNK_101f0294c;
  puStack_f8 = &UNK_110631a48;
  ppuVar8 = &puStack_110;
  puStack_e8 = puVar26;
  func_0x000107c60bc4(ppuVar8);
  puVar26 = puStack_e8;
  func_0x000107c61174();
  func_0x000107c61574(puVar26);
  pcStack_f0 = FUN_10329466c;
  puStack_e8 = (undefined *)0x0;
  puStack_110 = puVar27;
  uStack_108 = 0x42000000;
  pcStack_100 = (code *)&UNK_101f01f20;
  puStack_f8 = &UNK_110631a70;
  ppuVar9 = &puStack_110;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_e8);
  pcStack_f0 = (code *)0x103294670;
  puStack_e8 = (undefined *)0x0;
  puStack_110 = puVar27;
  uStack_108 = 0x42000000;
  pcStack_100 = FUN_103006124;
  puStack_f8 = &UNK_110631a98;
  ppuVar10 = &puStack_110;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_e8);
  pcStack_f0 = (code *)0x103294674;
  puStack_e8 = (undefined *)0x0;
  puStack_110 = puVar27;
  uStack_108 = 0x42000000;
  pcStack_100 = (code *)0x10300612c;
  puStack_f8 = &UNK_110631ac0;
  ppuVar11 = &puStack_110;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_e8);
  pcStack_f0 = (code *)0x103294678;
  puStack_e8 = (undefined *)0x0;
  puStack_110 = puVar27;
  uStack_108 = 0x42000000;
  pcStack_100 = (code *)0x103006130;
  puStack_f8 = &UNK_110631ae8;
  ppuVar12 = &puStack_110;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_e8);
  pcStack_f0 = (code *)0x10329467c;
  puStack_e8 = (undefined *)0x0;
  puStack_110 = puVar27;
  uStack_108 = 0x42000000;
  pcStack_100 = (code *)0x103006134;
  puStack_f8 = &UNK_110631b10;
  ppuVar13 = &puStack_110;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_e8);
  func_0x000107c4c6e0(param_1);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_1);
  puVar14 = apuStack_80[0];
  if (apuStack_80[0] == (undefined *)0x0) {
    pcVar24 = (code *)0x0;
    puVar26 = (undefined *)0x0;
    pcVar23 = (code *)0x0;
    puVar27 = (undefined *)0x0;
    puVar22 = (undefined *)0x0;
  }
  else {
    uStack_90 = 0;
    lStack_88 = 0;
    uStack_98 = 0xf000000000000000;
    lStack_a0 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    cStack_d8 = '\x01';
    puVar26 = &UNK_110631800;
    func_0x000107c613fc(&UNK_110631800,0x38,7);
    *(undefined8 **)(puVar26 + 0x10) = &uStack_90;
    *(ulong **)(puVar26 + 0x18) = &uStack_b0;
    *(undefined8 **)(puVar26 + 0x20) = &uStack_e0;
    *(ulong **)(puVar26 + 0x28) = &uStack_c0;
    *(ulong **)(puVar26 + 0x30) = &uStack_d0;
    puVar27 = &UNK_110631828;
    func_0x000107c613fc(&UNK_110631828,0x20,7);
    *(code **)(puVar27 + 0x10) = FUN_103294b18;
    *(undefined **)(puVar27 + 0x18) = puVar26;
    puVar15 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_f0 = FUN_103294b54;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0x42000000;
    pcStack_100 = (code *)0x103294750;
    puStack_f8 = &UNK_110631840;
    ppuVar5 = &puStack_110;
    puStack_e8 = puVar27;
    func_0x000107c60bc4(ppuVar5);
    puVar27 = puStack_e8;
    func_0x000107c61174(puVar14);
    func_0x000107c61574(puVar27);
    puVar27 = &UNK_110631878;
    func_0x000107c613fc(&UNK_110631878,0x38,7);
    *(undefined8 **)(puVar27 + 0x10) = &uStack_90;
    *(long **)(puVar27 + 0x18) = &lStack_a0;
    *(undefined8 **)(puVar27 + 0x20) = &uStack_e0;
    *(ulong **)(puVar27 + 0x28) = &uStack_c0;
    *(ulong **)(puVar27 + 0x30) = &uStack_d0;
    puVar22 = &UNK_1106318a0;
    func_0x000107c613fc(&UNK_1106318a0,0x20,7);
    *(code **)(puVar22 + 0x10) = FUN_103294b8c;
    *(undefined **)(puVar22 + 0x18) = puVar27;
    pcStack_f0 = FUN_103294bc4;
    puStack_110 = puVar15;
    uStack_108 = 0x42000000;
    pcStack_100 = (code *)0x10329491c;
    puStack_f8 = &UNK_1106318b8;
    ppuVar6 = &puStack_110;
    puStack_e8 = puVar22;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_e8);
    func_0x000107c4c774(puVar14);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    uVar21 = uStack_98;
    lVar3 = lStack_a0;
    if (uStack_98 >> 0x3c < 0xf) {
      uVar2 = (uint)(uStack_98 >> 0x20);
      uVar19 = uVar2 >> 0x1e;
      if (1 < uVar2 >> 0x1e) {
        if (uVar19 == 2) {
          if (*(long *)(lStack_a0 + 0x10) != *(long *)(lStack_a0 + 0x18)) goto LAB_1032931c4;
        }
        else {
LAB_1032930d8:
          func_0x0001000b44c0(lStack_a0,uStack_98);
        }
        goto LAB_1032930f8;
      }
      if (uVar19 == 0) {
        if ((uStack_98 & 0xff000000000000) == 0) goto LAB_1032930d8;
      }
      else {
        if ((long)(int)lStack_a0 == lStack_a0 >> 0x20) goto LAB_1032930f8;
LAB_1032931c4:
        func_0x000100de78a0(lStack_a0,uStack_98);
      }
      puVar15 = PTR_PTR_1126b08b0;
      func_0x000107c61168(PTR_PTR_1126b08b0);
      lVar16 = lVar3;
      func_0x000107c5ee20(lVar3,uVar21);
      func_0x000107c40498(puVar15);
      func_0x000107c61180();
      func_0x000107c61170(lVar16);
      puVar22 = PTR_PTR_1126b08a8;
      func_0x000107c610f8();
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c460f4();
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar17);
      func_0x0001000b44c0(lVar3,uVar21);
    }
    else {
LAB_1032930f8:
      uVar25 = uStack_a8;
      uVar21 = uStack_b0;
      if (uStack_a8 != 0) {
        uVar1 = uStack_b0 & 0xffffffffffff;
        if ((uStack_a8 & 0x2000000000000000) != 0) {
          uVar1 = uStack_a8 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          puVar15 = PTR_PTR_1126b08b0;
          func_0x000107c61168(PTR_PTR_1126b08b0);
          func_0x000107c61434(uVar25);
          func_0x000107c5fadc(uVar21,uVar25);
          func_0x000107c6142c(uVar25);
          func_0x000107c3f71c(puVar15);
          func_0x000107c61180();
          func_0x000107c61170(uVar21);
          puVar22 = PTR_PTR_1126b08a8;
          func_0x000107c610f8();
          puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
          func_0x000107c460f4();
          func_0x000107c61170(puVar15);
          func_0x000107c61170(puVar17);
          goto LAB_10329326c;
        }
      }
      puVar22 = (undefined *)0x0;
    }
LAB_10329326c:
    uVar25 = uStack_b8;
    uVar21 = uStack_c0;
    if (uStack_c8 == 0) {
      if (uStack_b8 != 0) {
        bVar4 = false;
        goto LAB_1032932b8;
      }
LAB_1032932d8:
      if (puVar22 == (undefined *)0x0) goto LAB_103293448;
      if (lStack_88 == 0) {
LAB_10329343c:
        func_0x000107c61170(puVar14);
        puVar14 = puVar22;
        goto LAB_103293448;
      }
LAB_103293374:
      lVar3 = lStack_88;
      uVar18 = uStack_90;
      if (cStack_d8 == '\x01') goto LAB_10329343c;
      puVar15 = puVar22;
      func_0x000107c61174(puVar22);
      func_0x000107c61434(lVar3);
      func_0x000107c3ecd0(puVar22);
      func_0x000107c61180();
      puVar17 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      func_0x000107c5fadc(uVar18,lVar3);
      func_0x000107c6142c(lVar3);
      func_0x000107c4766c(puVar17);
      func_0x000107c61170(uVar18);
      uVar18 = 0;
      func_0x00010447a810(0);
      func_0x000104479eec(puVar22,puVar17,1,uVar18);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar14);
    }
    else {
      uVar1 = uStack_d0 & 0xffffffffffff;
      if ((uStack_c8 & 0x2000000000000000) != 0) {
        uVar1 = uStack_c8 >> 0x38 & 0xf;
      }
      bVar4 = uVar1 != 0;
      if (uStack_b8 != 0) {
LAB_1032932b8:
        uVar1 = uStack_c0 & 0xffffffffffff;
        if ((uStack_b8 & 0x2000000000000000) != 0) {
          uVar1 = uStack_b8 >> 0x38 & 0xf;
        }
        if ((!bVar4) && (uVar1 == 0)) goto LAB_1032932d8;
        if (puVar22 == (undefined *)0x0) goto LAB_103293448;
        func_0x000107c61434(uStack_b8);
        func_0x000107c5fadc(uVar21,uVar25);
        func_0x000107c6142c(uVar25);
        if (uStack_c8 != 0) goto LAB_103293314;
        uVar25 = 0;
LAB_103293348:
        func_0x000107c54584(puVar22);
        func_0x000107c61170(uVar21);
        func_0x000107c61170(uVar25);
        if (lStack_88 != 0) goto LAB_103293374;
        goto LAB_10329343c;
      }
      if (uVar1 == 0) goto LAB_1032932d8;
      if (puVar22 != (undefined *)0x0) {
        uVar21 = 0;
LAB_103293314:
        uVar1 = uStack_c8;
        uVar25 = uStack_d0;
        func_0x000107c61434(uStack_c8);
        func_0x000107c5fadc(uVar25,uVar1);
        func_0x000107c6142c(uVar1);
        goto LAB_103293348;
      }
LAB_103293448:
      func_0x000107c61170(puVar14);
      puVar22 = (undefined *)0x0;
    }
    func_0x000107c6142c(uStack_c8);
    func_0x000107c6142c(uStack_b8);
    func_0x000107c6142c(uStack_a8);
    func_0x0001000b44c0(lStack_a0,uStack_98);
    func_0x000107c6142c(lStack_88);
    pcVar23 = FUN_103294b8c;
    pcVar24 = FUN_103294b18;
  }
  pcStack_118 = FUN_103294bf4;
  uVar18 = 0x103295050;
  pcVar28 = FUN_103294c0c;
LAB_1032934a8:
  func_0x000107c61170(apuStack_80[0]);
  func_0x000100d3feb4(pcStack_118,puVar30);
  func_0x000100d3feb4(uVar18,puVar29);
  func_0x000100d3feb4(pcVar28,puVar20);
  func_0x000100d3feb4(pcVar24,puVar26);
  func_0x000100d3feb4(pcVar23,puVar27);
  return puVar22;
}



/* Entry: 103293514; end: 103293947;  */

void FUN_103293514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  uVar1 = (uint)param_3 >> 8 & 0xff;
  if (uVar1 != 1) {
    uVar4 = 0;
    func_0x000107c60714(param_5,0);
    puVar2 = &UNK_1106317b0;
    func_0x000107c613fc(&UNK_1106317b0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    uStack_70 = 0x103294ac4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1106317c8;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c61174(param_4);
    func_0x000103294b04(param_1,param_2,param_3,uVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c5fb28(param_5,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000100162d98(param_5 + 0x20,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_5);
  }
  return;
}



/* Entry: 103293948; end: 10329394b;  */

void FUN_103293948(void)

{
  return;
}



/* Entry: 10329394c; end: 103294547;  */

void FUN_10329394c(ulong param_1,ulong *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0;
  uVar11 = param_1;
  func_0x000107c5b538();
  func_0x000107c61180();
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032940b4);
    (*pcVar2)();
  }
  uVar3 = 0;
  func_0x000103294f40(0,0x112e0fd80,&PTR_PTR_1126ced58);
  uVar4 = uVar11;
  func_0x000107c5fc54(uVar11,uVar3);
  func_0x000107c61170(uVar11);
  if (uVar4 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar11 = uVar4;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar4);
  if ((long)uVar11 < 1) {
LAB_103293bc4:
    puStack_d0 = (undefined *)0x0;
    pcStack_c8 = (code *)0x0;
    puVar18 = (undefined *)0x0;
    uVar14 = 0;
  }
  else {
    uVar11 = param_1;
    func_0x000107c5b538();
    func_0x000107c61180();
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032940bc);
      (*pcVar2)();
    }
    uVar4 = uVar11;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar11);
    if (uVar4 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar11 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar11 == 0) {
      func_0x000107c6142c(uVar4);
      goto LAB_103293bc4;
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032940b0);
        (*pcVar2)();
      }
      uVar5 = *(undefined8 *)(uVar4 + 0x20);
      func_0x000107c61174(uVar5);
    }
    else {
      uVar5 = 0;
      func_0x000101eff210(0,uVar4);
    }
    func_0x000107c6142c(uVar4);
    puVar18 = &UNK_110631c38;
    func_0x000107c613fc(&UNK_110631c38,0x20,7);
    *(ulong *)(puVar18 + 0x10) = param_1;
    *(ulong **)(puVar18 + 0x18) = &uStack_78;
    puVar15 = &UNK_110631c60;
    func_0x000107c613fc(&UNK_110631c60,0x20,7);
    pcStack_c8 = FUN_103294f04;
    *(code **)(puVar15 + 0x10) = FUN_103294f04;
    *(undefined **)(puVar15 + 0x18) = puVar18;
    puVar16 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = (code *)0x10329504c;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101c82810;
    puStack_98 = &UNK_110631c78;
    ppuVar6 = &puStack_b0;
    puStack_88 = puVar15;
    func_0x000107c60bc4(ppuVar6);
    puVar15 = puStack_88;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar15);
    puStack_d0 = &UNK_110631cb0;
    func_0x000107c613fc(&UNK_110631cb0,0x18,7);
    *(ulong **)(puStack_d0 + 0x10) = &uStack_78;
    puVar15 = &UNK_110631cd8;
    func_0x000107c613fc(&UNK_110631cd8,0x20,7);
    uVar14 = 0x103294f0c;
    *(undefined8 *)(puVar15 + 0x10) = 0x103294f0c;
    *(undefined **)(puVar15 + 0x18) = puStack_d0;
    pcStack_90 = (code *)0x103295040;
    puStack_b0 = puVar16;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101c82894;
    puStack_98 = &UNK_110631cf0;
    ppuVar7 = &puStack_b0;
    puStack_88 = puVar15;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_88);
    func_0x000107c4c698(uVar5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar5);
  }
  uStack_80 = 0;
  uVar11 = param_1;
  func_0x000107c5b538();
  func_0x000107c61180();
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032940b8);
    (*pcVar2)();
  }
  uVar4 = uVar11;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar11);
  if (uVar4 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    if (uVar11 == 0) goto LAB_103293fa4;
LAB_103293c18:
    if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10329409c);
      (*pcVar2)();
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      uVar5 = *(undefined8 *)(uVar4 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = 0;
      func_0x000101eff210(0,uVar4);
    }
    puVar15 = &UNK_110631b48;
    func_0x000107c613fc(&UNK_110631b48,0x20,7);
    *(ulong *)(puVar15 + 0x10) = param_1;
    *(ulong **)(puVar15 + 0x18) = &uStack_80;
    func_0x000107c61174();
    func_0x000100d3feb4(0,0);
    puVar16 = &UNK_110631b70;
    func_0x000107c613fc(&UNK_110631b70,0x20,7);
    *(code **)(puVar16 + 0x10) = FUN_103294c34;
    *(undefined **)(puVar16 + 0x18) = puVar15;
    puVar17 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = FUN_103294c3c;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101c82810;
    puStack_98 = &UNK_110631b88;
    ppuVar6 = &puStack_b0;
    puStack_88 = puVar16;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_88);
    puVar16 = &UNK_110631bc0;
    func_0x000107c613fc(&UNK_110631bc0,0x18,7);
    *(ulong **)(puVar16 + 0x10) = &uStack_80;
    func_0x000100d3feb4(0,0);
    puVar8 = &UNK_110631be8;
    uVar3 = 0x20;
    func_0x000107c613fc(&UNK_110631be8,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_103294c5c;
    *(undefined **)(puVar8 + 0x18) = puVar16;
    pcStack_90 = FUN_103294c64;
    puStack_b0 = puVar17;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101c82894;
    puStack_98 = &UNK_110631c00;
    ppuVar7 = &puStack_b0;
    puStack_88 = puVar8;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_88);
    func_0x000107c4c698(uVar5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar5);
    lVar13 = uVar11 - 1;
    if (lVar13 != 0) {
      lVar19 = 5;
      puVar8 = puVar15;
      puVar17 = puVar16;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          lVar9 = *(long *)(uVar4 + lVar19 * 8);
          func_0x000107c61174(lVar9);
        }
        else {
          lVar9 = lVar19 + -4;
          func_0x000101eff210(lVar9,uVar4);
        }
        puVar15 = &UNK_110631b48;
        func_0x000107c613fc(&UNK_110631b48,0x20,7);
        *(ulong *)(puVar15 + 0x10) = param_1;
        *(ulong **)(puVar15 + 0x18) = &uStack_80;
        func_0x000107c61174(param_1);
        func_0x000100d3feb4(FUN_103294c34,puVar8);
        puVar16 = &UNK_110631b70;
        func_0x000107c613fc(&UNK_110631b70,0x20,7);
        *(code **)(puVar16 + 0x10) = FUN_103294c34;
        *(undefined **)(puVar16 + 0x18) = puVar15;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_90 = FUN_103294c3c;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_101c82810;
        puStack_98 = &UNK_110631b88;
        ppuVar6 = &puStack_b0;
        puStack_88 = puVar16;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_88);
        puVar16 = &UNK_110631bc0;
        func_0x000107c613fc(&UNK_110631bc0,0x18,7);
        *(ulong **)(puVar16 + 0x10) = &uStack_80;
        func_0x000100d3feb4(FUN_103294c5c,puVar17);
        puVar8 = &UNK_110631be8;
        uVar3 = 0x20;
        func_0x000107c613fc(&UNK_110631be8,0x20,7);
        *(code **)(puVar8 + 0x10) = FUN_103294c5c;
        *(undefined **)(puVar8 + 0x18) = puVar16;
        pcStack_90 = FUN_103294c64;
        puStack_b0 = puVar1;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_101c82894;
        puStack_98 = &UNK_110631c00;
        ppuVar7 = &puStack_b0;
        puStack_88 = puVar8;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_88);
        func_0x000107c4c698(lVar9);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(lVar9);
        lVar19 = lVar19 + 1;
        lVar13 = lVar13 + -1;
        puVar8 = puVar15;
        puVar17 = puVar16;
      } while (lVar13 != 0);
    }
    func_0x000107c6142c(uVar4);
    if (uStack_80 == 0) {
      pcVar2 = FUN_103294c34;
      pcVar12 = FUN_103294c5c;
      uVar11 = uStack_78;
      goto joined_r0x000103293fbc;
    }
    uVar11 = uStack_80;
    func_0x000107c61174();
    pcVar2 = FUN_103294c34;
    pcVar12 = FUN_103294c5c;
LAB_103294010:
    uVar3 = uVar11;
    FUN_103294c84();
    func_0x000107c61170(uVar11);
    uVar11 = *param_2;
    *param_2 = uVar3;
  }
  else {
    uVar11 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar11 = uVar4;
    }
    func_0x000107c60480();
    if (uVar11 != 0) goto LAB_103293c18;
LAB_103293fa4:
    pcVar2 = (code *)0x0;
    func_0x000107c6142c(uVar4);
    puVar16 = (undefined *)0x0;
    pcVar12 = (code *)0x0;
    puVar15 = (undefined *)0x0;
    uVar11 = uStack_78;
joined_r0x000103293fbc:
    uStack_78 = uVar11;
    if (uVar11 == 0) goto LAB_103294038;
    func_0x000107c61174();
    uVar4 = uVar11;
    func_0x000107c45124();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar10 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uVar10 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar4 = uVar3 >> 0x38 & 0xf;
      }
      if (uVar4 != 0) goto LAB_103294010;
    }
  }
  func_0x000107c61170(uVar11);
LAB_103294038:
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_78);
  func_0x000100d3feb4(pcStack_c8,puVar18);
  func_0x000100d3feb4(uVar14,puStack_d0);
  func_0x000100d3feb4(pcVar2,puVar15);
  func_0x000100d3feb4(pcVar12,puVar16);
  return;
}



/* Entry: 103294548; end: 10329466b;  */

/* WARNING: Possible PIC construction at 0x00010329458c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032945a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329462c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103294630) */
/* WARNING: Removing unreachable block (ram,0x0001032945a8) */
/* WARNING: Removing unreachable block (ram,0x0001032945dc) */
/* WARNING: Removing unreachable block (ram,0x000103294654) */
/* WARNING: Removing unreachable block (ram,0x0001032945e4) */
/* WARNING: Removing unreachable block (ram,0x0001032945b8) */
/* WARNING: Removing unreachable block (ram,0x000103294628) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x0001032945bc) */
/* WARNING: Removing unreachable block (ram,0x0001032945f8) */
/* WARNING: Removing unreachable block (ram,0x0001032945d8) */
/* WARNING: Removing unreachable block (ram,0x000103294590) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_103294548(long param_1)

{
  func_0x000107c5c97c();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5b070();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10329466c; end: 10329467f;  */

void FUN_10329466c(void)

{
  return;
}



/* Entry: 103294680; end: 103294a1f;  */

/* WARNING: Possible PIC construction at 0x0001032946d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032946f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103294714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032946f4) */
/* WARNING: Removing unreachable block (ram,0x0001032946dc) */
/* WARNING: Removing unreachable block (ram,0x000103294718) */

void FUN_103294680(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *in_stack_00000010;
  
  uVar1 = in_stack_00000010[1];
  *in_stack_00000010 = param_1;
  in_stack_00000010[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103294a20; end: 103294a53;  */

void FUN_103294a20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103294a54; end: 103294a9b; -[_TtC28SpotlightCustomInterstitials30SpotlightTiledInterstitialCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103294a54(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f50c40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f50c48));
  param_1 = param_1 + _DAT_112f50c50;
  lVar1 = 0x112f50c10;
  func_0x0001000285a8(0x112f50c10,&UNK_10dba5d10);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103294a9c; end: 103294abb;  */

void FUN_103294a9c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c6220);
  return;
}



/* Entry: 103294abc; end: 103294b17;  */

void FUN_103294abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_90;
  uVar2 = (uint)param_3 >> 8 & 0xff;
  if (uVar2 != 1) {
    uVar6 = 0;
    func_0x000107c60714(lVar3,0);
    puVar4 = &UNK_1106317b0;
    func_0x000107c613fc(&UNK_1106317b0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar1;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    uStack_70 = 0x103294ac4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1106317c8;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c61174(uVar1);
    func_0x000103294b04(param_1,param_2,param_3,uVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c5fb28(lVar3,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x000100162d98(lVar3 + 0x20,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 103294b18; end: 103294b53;  */

void FUN_103294b18(void)

{
  FUN_103294680();
  return;
}



/* Entry: 103294b54; end: 103294b8b;  */

void FUN_103294b54(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103294b8c; end: 103294bc3;  */

void FUN_103294b8c(void)

{
  func_0x00010329484c();
  return;
}



/* Entry: 103294bc4; end: 103294bf3;  */

void FUN_103294bc4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103294bf4; end: 103294c0b;  */

void FUN_103294bf4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010329363c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103294c0c; end: 103294c13;  */

void FUN_103294c0c(ulong param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar1 = *(ulong **)(unaff_x20 + 0x10);
  uStack_78 = 0;
  uVar12 = param_1;
  func_0x000107c5b538(param_1,puVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  if (uVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1032940b4);
    (*pcVar3)();
  }
  uVar4 = 0;
  func_0x000103294f40(0,0x112e0fd80,&PTR_PTR_1126ced58);
  uVar5 = uVar12;
  func_0x000107c5fc54(uVar12,uVar4);
  func_0x000107c61170(uVar12);
  if (uVar5 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar12 = uVar5;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar5);
  if ((long)uVar12 < 1) {
LAB_103293bc4:
    puStack_d0 = (undefined *)0x0;
    pcStack_c8 = (code *)0x0;
    puVar19 = (undefined *)0x0;
    uVar15 = 0;
  }
  else {
    uVar12 = param_1;
    func_0x000107c5b538();
    func_0x000107c61180();
    if (uVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032940bc);
      (*pcVar3)();
    }
    uVar5 = uVar12;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar12);
    if (uVar5 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar12 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar12 == 0) {
      func_0x000107c6142c(uVar5);
      goto LAB_103293bc4;
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032940b0);
        (*pcVar3)();
      }
      uVar6 = *(undefined8 *)(uVar5 + 0x20);
      func_0x000107c61174(uVar6);
    }
    else {
      uVar6 = 0;
      func_0x000101eff210(0,uVar5);
    }
    func_0x000107c6142c(uVar5);
    puVar19 = &UNK_110631c38;
    func_0x000107c613fc(&UNK_110631c38,0x20,7);
    *(ulong *)(puVar19 + 0x10) = param_1;
    *(ulong **)(puVar19 + 0x18) = &uStack_78;
    puVar16 = &UNK_110631c60;
    func_0x000107c613fc(&UNK_110631c60,0x20,7);
    pcStack_c8 = FUN_103294f04;
    *(code **)(puVar16 + 0x10) = FUN_103294f04;
    *(undefined **)(puVar16 + 0x18) = puVar19;
    puVar17 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = (code *)0x10329504c;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101c82810;
    puStack_98 = &UNK_110631c78;
    ppuVar7 = &puStack_b0;
    puStack_88 = puVar16;
    func_0x000107c60bc4(ppuVar7);
    puVar16 = puStack_88;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar16);
    puStack_d0 = &UNK_110631cb0;
    func_0x000107c613fc(&UNK_110631cb0,0x18,7);
    *(ulong **)(puStack_d0 + 0x10) = &uStack_78;
    puVar16 = &UNK_110631cd8;
    func_0x000107c613fc(&UNK_110631cd8,0x20,7);
    uVar15 = 0x103294f0c;
    *(undefined8 *)(puVar16 + 0x10) = 0x103294f0c;
    *(undefined **)(puVar16 + 0x18) = puStack_d0;
    pcStack_90 = (code *)0x103295040;
    puStack_b0 = puVar17;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101c82894;
    puStack_98 = &UNK_110631cf0;
    ppuVar8 = &puStack_b0;
    puStack_88 = puVar16;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_88);
    func_0x000107c4c698(uVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar6);
  }
  uStack_80 = 0;
  uVar12 = param_1;
  func_0x000107c5b538();
  func_0x000107c61180();
  if (uVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1032940b8);
    (*pcVar3)();
  }
  uVar5 = uVar12;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar12);
  if (uVar5 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    if (uVar12 == 0) goto LAB_103293fa4;
LAB_103293c18:
    if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10329409c);
      (*pcVar3)();
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      uVar6 = *(undefined8 *)(uVar5 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar6 = 0;
      func_0x000101eff210(0,uVar5);
    }
    puVar16 = &UNK_110631b48;
    func_0x000107c613fc(&UNK_110631b48,0x20,7);
    *(ulong *)(puVar16 + 0x10) = param_1;
    *(ulong **)(puVar16 + 0x18) = &uStack_80;
    func_0x000107c61174();
    func_0x000100d3feb4(0,0);
    puVar17 = &UNK_110631b70;
    func_0x000107c613fc(&UNK_110631b70,0x20,7);
    *(code **)(puVar17 + 0x10) = FUN_103294c34;
    *(undefined **)(puVar17 + 0x18) = puVar16;
    puVar18 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = FUN_103294c3c;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101c82810;
    puStack_98 = &UNK_110631b88;
    ppuVar7 = &puStack_b0;
    puStack_88 = puVar17;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_88);
    puVar17 = &UNK_110631bc0;
    func_0x000107c613fc(&UNK_110631bc0,0x18,7);
    *(ulong **)(puVar17 + 0x10) = &uStack_80;
    func_0x000100d3feb4(0,0);
    puVar9 = &UNK_110631be8;
    uVar4 = 0x20;
    func_0x000107c613fc(&UNK_110631be8,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_103294c5c;
    *(undefined **)(puVar9 + 0x18) = puVar17;
    pcStack_90 = FUN_103294c64;
    puStack_b0 = puVar18;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101c82894;
    puStack_98 = &UNK_110631c00;
    ppuVar8 = &puStack_b0;
    puStack_88 = puVar9;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_88);
    func_0x000107c4c698(uVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar6);
    lVar14 = uVar12 - 1;
    if (lVar14 != 0) {
      lVar20 = 5;
      puVar9 = puVar16;
      puVar18 = puVar17;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          lVar10 = *(long *)(uVar5 + lVar20 * 8);
          func_0x000107c61174(lVar10);
        }
        else {
          lVar10 = lVar20 + -4;
          func_0x000101eff210(lVar10,uVar5);
        }
        puVar16 = &UNK_110631b48;
        func_0x000107c613fc(&UNK_110631b48,0x20,7);
        *(ulong *)(puVar16 + 0x10) = param_1;
        *(ulong **)(puVar16 + 0x18) = &uStack_80;
        func_0x000107c61174(param_1);
        func_0x000100d3feb4(FUN_103294c34,puVar9);
        puVar17 = &UNK_110631b70;
        func_0x000107c613fc(&UNK_110631b70,0x20,7);
        *(code **)(puVar17 + 0x10) = FUN_103294c34;
        *(undefined **)(puVar17 + 0x18) = puVar16;
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_90 = FUN_103294c3c;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_101c82810;
        puStack_98 = &UNK_110631b88;
        ppuVar7 = &puStack_b0;
        puStack_88 = puVar17;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_88);
        puVar17 = &UNK_110631bc0;
        func_0x000107c613fc(&UNK_110631bc0,0x18,7);
        *(ulong **)(puVar17 + 0x10) = &uStack_80;
        func_0x000100d3feb4(FUN_103294c5c,puVar18);
        puVar9 = &UNK_110631be8;
        uVar4 = 0x20;
        func_0x000107c613fc(&UNK_110631be8,0x20,7);
        *(code **)(puVar9 + 0x10) = FUN_103294c5c;
        *(undefined **)(puVar9 + 0x18) = puVar17;
        pcStack_90 = FUN_103294c64;
        puStack_b0 = puVar2;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_101c82894;
        puStack_98 = &UNK_110631c00;
        ppuVar8 = &puStack_b0;
        puStack_88 = puVar9;
        func_0x000107c60bc4(ppuVar8);
        func_0x000107c61574(puStack_88);
        func_0x000107c4c698(lVar10);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lVar10);
        lVar20 = lVar20 + 1;
        lVar14 = lVar14 + -1;
        puVar9 = puVar16;
        puVar18 = puVar17;
      } while (lVar14 != 0);
    }
    func_0x000107c6142c(uVar5);
    if (uStack_80 == 0) {
      pcVar3 = FUN_103294c34;
      pcVar13 = FUN_103294c5c;
      uVar12 = uStack_78;
      goto joined_r0x000103293fbc;
    }
    uVar12 = uStack_80;
    func_0x000107c61174();
    pcVar3 = FUN_103294c34;
    pcVar13 = FUN_103294c5c;
LAB_103294010:
    uVar4 = uVar12;
    FUN_103294c84();
    func_0x000107c61170(uVar12);
    uVar12 = *puVar1;
    *puVar1 = uVar4;
  }
  else {
    uVar12 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar12 = uVar5;
    }
    func_0x000107c60480();
    if (uVar12 != 0) goto LAB_103293c18;
LAB_103293fa4:
    pcVar3 = (code *)0x0;
    func_0x000107c6142c(uVar5);
    puVar17 = (undefined *)0x0;
    pcVar13 = (code *)0x0;
    puVar16 = (undefined *)0x0;
    uVar12 = uStack_78;
joined_r0x000103293fbc:
    uStack_78 = uVar12;
    if (uVar12 == 0) goto LAB_103294038;
    func_0x000107c61174();
    uVar5 = uVar12;
    func_0x000107c45124();
    func_0x000107c61180();
    if (uVar5 != 0) {
      uVar11 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar4);
      uVar5 = uVar11 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar5 = uVar4 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) goto LAB_103294010;
    }
  }
  func_0x000107c61170(uVar12);
LAB_103294038:
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_78);
  func_0x000100d3feb4(pcStack_c8,puVar19);
  func_0x000100d3feb4(uVar15,puStack_d0);
  func_0x000100d3feb4(pcVar3,puVar16);
  func_0x000100d3feb4(pcVar13,puVar17);
  return;
}



/* Entry: 103294c14; end: 103294c33;  */

void FUN_103294c14(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103294c34; end: 103294c3b;  */

/* WARNING: Possible PIC construction at 0x00010329437c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103294418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032943e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103294500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032943ec) */
/* WARNING: Removing unreachable block (ram,0x00010329441c) */
/* WARNING: Removing unreachable block (ram,0x00010329444c) */
/* WARNING: Removing unreachable block (ram,0x000103294498) */
/* WARNING: Removing unreachable block (ram,0x000103294454) */
/* WARNING: Removing unreachable block (ram,0x000103294430) */
/* WARNING: Removing unreachable block (ram,0x000103294468) */
/* WARNING: Removing unreachable block (ram,0x000103294434) */
/* WARNING: Removing unreachable block (ram,0x00010329447c) */
/* WARNING: Removing unreachable block (ram,0x000103294488) */
/* WARNING: Removing unreachable block (ram,0x000103294380) */
/* WARNING: Removing unreachable block (ram,0x000103294398) */
/* WARNING: Removing unreachable block (ram,0x0001032943f0) */
/* WARNING: Removing unreachable block (ram,0x0001032943f4) */
/* WARNING: Removing unreachable block (ram,0x000103294504) */
/* WARNING: Removing unreachable block (ram,0x0001032944ac) */

void FUN_103294c34(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5e148();
  func_0x000107c61180();
  if (lVar2 != 0) {
    if (param_4 >> 0x3e == 0) {
      uVar4 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = param_4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_4) {
        uVar4 = param_4;
      }
      func_0x000107c60480();
    }
    lVar3 = lVar2;
    if (uVar4 != 0) {
      if ((param_4 & 0xc000000000000001) == 0) {
        if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1032944b4);
          (*pcVar1)();
        }
        lVar3 = *(long *)(param_4 + 0x20);
        func_0x000107c61174(lVar3);
      }
      else {
        lVar3 = 0;
        FUN_10328ef94(0,param_4);
      }
      func_0x000107c5bc68(lVar3);
      func_0x000107c5dde0();
      if (param_1 <= (double)lVar2) {
        func_0x000107c5c97c(lVar3);
        func_0x000107c61180();
      }
    }
    goto code_r0x000107c61170;
  }
  if (param_4 >> 0x3e == 0) {
    if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_1032944e4;
LAB_1032943c0:
    if ((param_4 & 0xc000000000000001) == 0) {
      if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103294548);
        (*pcVar1)();
      }
      lVar3 = *(long *)(param_4 + 0x20);
      func_0x000107c61174(lVar3);
    }
    else {
      lVar3 = 0;
      FUN_10328ef94(0,param_4);
    }
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar4 = param_4;
    }
    func_0x000107c60480();
    if (uVar4 != 0) goto LAB_1032943c0;
LAB_1032944e4:
    lVar3 = 0;
  }
  func_0x000107c5c97c(lVar3);
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103294c3c; end: 103294c5b;  */

void FUN_103294c3c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103294c5c; end: 103294c63;  */

/* WARNING: Possible PIC construction at 0x00010329458c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032945a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329462c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103294630) */
/* WARNING: Removing unreachable block (ram,0x0001032945a8) */
/* WARNING: Removing unreachable block (ram,0x0001032945dc) */
/* WARNING: Removing unreachable block (ram,0x000103294654) */
/* WARNING: Removing unreachable block (ram,0x0001032945e4) */
/* WARNING: Removing unreachable block (ram,0x0001032945b8) */
/* WARNING: Removing unreachable block (ram,0x000103294628) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x0001032945bc) */
/* WARNING: Removing unreachable block (ram,0x0001032945f8) */
/* WARNING: Removing unreachable block (ram,0x0001032945d8) */
/* WARNING: Removing unreachable block (ram,0x000103294590) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_103294c5c(long param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c5c97c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5b070();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103294c64; end: 103294c83;  */

void FUN_103294c64(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103294c84; end: 103294f03;  */

undefined * FUN_103294c84(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  
  uVar5 = param_1;
  func_0x000107c5b070();
  func_0x000107c61180();
  uVar11 = uVar5;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar5);
  uVar3 = (uint)(param_2 >> 0x20);
  uVar8 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar8 == 0) {
      uVar5 = param_2;
      func_0x00010006c090(uVar11);
      uVar11 = param_2 >> 0x30;
      param_2 = uVar5;
      if ((uVar11 & 0xff) == 0) goto LAB_103294d94;
    }
    else {
      func_0x00010006c090(uVar11);
      iVar10 = (int)(uVar11 >> 0x20);
      if (SBORROW4(iVar10,(int)uVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103294f04);
        (*pcVar4)();
      }
      uVar5 = param_2;
      if (iVar10 - (int)uVar11 < 1) goto LAB_103294d94;
    }
LAB_103294d3c:
    uVar5 = param_1;
    func_0x000107c45124();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar11 = 0;
      param_2 = 0xe000000000000000;
    }
    else {
      uVar11 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
    }
    puVar9 = PTR_PTR_1126c21e0;
    func_0x000107c61168(PTR_PTR_1126c21e0);
    func_0x000107c5fb78(uVar11,param_2);
    func_0x000107c6142c(param_2);
    uVar6 = 0x72665f7473726966;
    uVar7 = 0xec0000005f656d61;
    func_0x000107c5fadc(0x72665f7473726966,0xec0000005f656d61);
    func_0x000107c6142c(0xec0000005f656d61);
    func_0x000107c5b070(param_1);
    func_0x000107c61180();
    uVar5 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    param_1 = uVar5;
    func_0x000107c5ee20(uVar5,uVar7);
    func_0x00010006c090(uVar5,uVar7);
    func_0x000107c5c914(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
LAB_103294ec8:
    func_0x000107c61170(param_1);
  }
  else {
    if (uVar8 == 2) {
      lVar1 = *(long *)(uVar11 + 0x10);
      lVar2 = *(long *)(uVar11 + 0x18);
      func_0x00010006c090(uVar11);
      if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103294f00);
        (*pcVar4)();
      }
      uVar5 = param_2;
      if (0 < lVar2 - lVar1) goto LAB_103294d3c;
    }
    else {
      func_0x00010006c090(uVar11);
      uVar5 = param_2;
    }
LAB_103294d94:
    func_0x000107c45124();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar11 = param_1;
      func_0x000107c5faec();
      func_0x000107c6142c(uVar5);
      uVar11 = uVar11 & 0xffffffffffff;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar11 = uVar5 >> 0x38 & 0xf;
      }
      if (uVar11 != 0) {
        puVar9 = PTR_PTR_1126c21e0;
        func_0x000107c61168(PTR_PTR_1126c21e0);
        func_0x000107c5c95c();
        func_0x000107c61180();
        goto LAB_103294ec8;
      }
      func_0x000107c61170(param_1);
    }
    puVar9 = (undefined *)0x0;
  }
  return puVar9;
}



/* Entry: 103294f04; end: 103294f0b;  */

/* WARNING: Possible PIC construction at 0x000103294188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329426c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329418c) */
/* WARNING: Removing unreachable block (ram,0x0001032941a4) */
/* WARNING: Removing unreachable block (ram,0x000103294200) */
/* WARNING: Removing unreachable block (ram,0x000103294270) */
/* WARNING: Removing unreachable block (ram,0x000103294210) */

void FUN_103294f04(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5e148();
  func_0x000107c61180();
  if (lVar4 != 0) {
    if (param_4 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_4) {
        uVar5 = param_4;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((param_4 & 0xc000000000000001) == 0) {
        if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103294218);
          (*pcVar1)();
        }
        lVar2 = *(long *)(param_4 + 0x20);
        func_0x000107c61174(lVar2);
      }
      else {
        lVar2 = 0;
        FUN_10328ef94(0,param_4);
      }
      func_0x000107c5bc68(lVar2);
      lVar3 = lVar4;
      func_0x000107c5dde0();
      if (param_1 <= (double)lVar3) {
        func_0x000107c5c97c(lVar2);
        func_0x000107c61180();
        lVar4 = lVar2;
      }
      else {
        func_0x000107c61170(lVar4);
        lVar4 = lVar2;
      }
    }
    goto code_r0x000107c61170;
  }
  if (param_4 >> 0x3e == 0) {
    if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1032941cc;
LAB_103294250:
    lVar4 = 0;
  }
  else {
    uVar5 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar5 = param_4;
    }
    func_0x000107c60480();
    if (uVar5 == 0) goto LAB_103294250;
LAB_1032941cc:
    if ((param_4 & 0xc000000000000001) == 0) {
      if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032942b0);
        (*pcVar1)();
      }
      lVar4 = *(long *)(param_4 + 0x20);
      func_0x000107c61174(lVar4);
    }
    else {
      lVar4 = 0;
      FUN_10328ef94(0,param_4);
    }
  }
  func_0x000107c5c97c(lVar4);
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 103294f0c; end: 103294fc7;  */

void FUN_103294f0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c5c97c();
  func_0x000107c61180();
  uVar1 = *puVar2;
  *puVar2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103294fc8; end: 103295053;  */

void FUN_103294fc8(long param_1,long param_2)

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



/* Entry: 103295054; end: 1032950eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103295054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50c80);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f50c88) = param_3;
  *(undefined **)(unaff_x20 + _DAT_112f50c90) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112f50c98) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032950ec; end: 10329520f; -[SCSpotlightTiledInterstitialItem initWithId:stories:autoplayEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032950ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = 0;
  FUN_103296154(0,0x112e0fd70,&PTR_PTR_1126c2098);
  func_0x000107c5fc54(param_4,uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_112f50c80);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112f50c88) = param_4;
  *(undefined **)(param_1 + _DAT_112f50c90) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_1 + _DAT_112f50c98) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103295210; end: 10329545f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103295210(undefined8 param_1,undefined8 param_2,ulong param_3,byte param_4)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50c80);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(ulong *)(unaff_x20 + _DAT_112f50c90) = param_3;
  if (param_3 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar8 = param_3;
    }
    func_0x000107c60480();
  }
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(param_3);
    func_0x000103035c50(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103295460);
      (*pcVar3)();
    }
    if ((param_3 & 0xc000000000000001) == 0) {
      plVar7 = (long *)(param_3 + 0x20);
      puVar10 = puStack_68;
      do {
        lVar2 = _DAT_112f51068;
        lVar6 = *plVar7;
        func_0x000107c61428(lVar6 + _DAT_112f51068,auStack_80,0,0);
        uVar5 = *(undefined8 *)(lVar6 + lVar2);
        uVar9 = *(ulong *)(puVar10 + 0x10);
        uVar4 = *(ulong *)(puVar10 + 0x18);
        puStack_68 = puVar10;
        func_0x000107c61174();
        if (uVar4 >> 1 <= uVar9) {
          func_0x000103035c50(1 < uVar4,uVar9 + 1,1);
          puVar10 = puStack_68;
        }
        *(ulong *)(puVar10 + 0x10) = uVar9 + 1;
        *(undefined8 *)(puVar10 + uVar9 * 8 + 0x20) = uVar5;
        uVar8 = uVar8 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar8 != 0);
    }
    else {
      uVar9 = 0;
      do {
        puVar10 = puStack_68;
        uVar4 = uVar9;
        func_0x000101f19730(uVar9,param_3);
        lVar2 = _DAT_112f51068;
        func_0x000107c61428(uVar4 + _DAT_112f51068,auStack_80,0,0);
        uVar5 = *(undefined8 *)(uVar4 + lVar2);
        func_0x000107c61174();
        func_0x000107c615e8(uVar4);
        uVar4 = *(ulong *)(puVar10 + 0x10);
        puStack_68 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar4) {
          func_0x000103035c50(1 < *(ulong *)(puVar10 + 0x18),uVar4 + 1,1);
        }
        uVar9 = uVar9 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
        *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar5;
        puVar10 = puStack_68;
      } while (uVar8 != uVar9);
    }
    func_0x000107c6142c(param_3);
  }
  *(undefined **)(unaff_x20 + _DAT_112f50c88) = puVar10;
  *(byte *)(unaff_x20 + _DAT_112f50c98) = param_4 & 1;
  func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103295460; end: 1032954cf; -[SCSpotlightTiledInterstitialItem initWithId:candidates:autoplayEnabled:] */

void FUN_103295460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = 0;
  FUN_10329b290(0);
  func_0x000107c5fc54(param_4,uVar1);
  FUN_103295210(param_3,param_2,param_4,param_5);
  return;
}



/* Entry: 1032954d0; end: 10329551b; -[SCSpotlightTiledInterstitialItem itemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032954d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f50c80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f50c80))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329551c; end: 1032955a7; -[SCSpotlightTiledInterstitialItem playlistItemModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329551c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110ed3ab8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110ed3ab8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f50c80);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f50c80))[1];
  func_0x0001044443ac(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x00010444388c(ppuVar3,param_2,uVar1,uVar2,PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032955a8; end: 103295813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032955a8(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar14 = *(ulong *)(unaff_x20 + _DAT_112f50c88);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103295c5c(0,0,0);
  puVar15 = puStack_68;
  if (uVar14 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    lVar4 = _DAT_112f50c90;
    puVar12 = puStack_68;
  }
  else {
    uVar17 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar17 = uVar14;
    }
    func_0x000107c60480();
    lVar4 = _DAT_112f50c90;
    puVar12 = puStack_68;
  }
  puStack_68 = puVar15;
  _DAT_112f50c90 = lVar4;
  if (uVar17 != 0) {
    uVar16 = 0;
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f50c80);
    puStack_68 = puVar12;
    do {
      if ((uVar14 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1032957d8);
          (*pcVar7)();
        }
        uVar8 = *(ulong *)(uVar14 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar16;
        func_0x000101eff02c(uVar16,uVar14);
      }
      uVar1 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1032957d4);
        (*pcVar7)();
      }
      uStack_78 = *puVar2;
      uStack_70 = puVar2[1];
      func_0x000107c61434();
      func_0x000107c5fb78(0x5f70616e735f,0xe600000000000000);
      puVar12 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      uStack_80 = uVar16;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar12);
      uVar6 = uStack_70;
      uVar5 = uStack_78;
      uVar13 = *(undefined8 *)(unaff_x20 + lVar4);
      lVar9 = 0;
      FUN_10329a964();
      lVar10 = lVar9;
      func_0x000107c610f8();
      puVar3 = (undefined8 *)(lVar10 + _DAT_112f50fe8);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      *(ulong *)(lVar10 + _DAT_112f50ff0) = uVar16;
      *(ulong *)(lVar10 + _DAT_112f50ff8) = uVar8;
      *(ulong *)(lVar10 + _DAT_112f51000) = uVar14;
      *(undefined8 *)(lVar10 + _DAT_112f51008) = uVar13;
      puVar12 = PTR_s_init_1125d9248;
      lStack_90 = lVar10;
      lStack_88 = lVar9;
      func_0x000107c61434(uVar14);
      func_0x000107c61434(uVar13);
      plVar11 = &lStack_90;
      func_0x000107c61154(plVar11,puVar12);
      uVar8 = *(ulong *)(puVar15 + 0x10);
      puStack_68 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar8) {
        func_0x000103295c5c(1 < *(ulong *)(puVar15 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
      *(long **)(puStack_68 + uVar8 * 8 + 0x20) = plVar11;
      uVar16 = uVar16 + 1;
      puVar15 = puStack_68;
    } while (uVar1 != uVar17);
  }
  return puStack_68;
}



/* Entry: 103295814; end: 103295b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103295814(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  long unaff_x20;
  undefined1 *puVar12;
  undefined1 *apuStack_70 [3];
  undefined8 uStack_58;
  
  ppuVar4 = apuStack_70;
  ppuVar7 = apuStack_70;
  ppuVar10 = apuStack_70;
  ppuVar11 = apuStack_70;
  uVar2 = 0;
  func_0x0001044410f4(0);
  uVar3 = uVar2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c610f8(uVar2);
  func_0x000107c453e4();
  func_0x000104440658(*(undefined8 *)(unaff_x20 + _DAT_112f50c80),
                      ((undefined8 *)(unaff_x20 + _DAT_112f50c80))[1]);
  func_0x000107c61170();
  puVar12 = *(undefined1 **)(unaff_x20 + _DAT_112f50c88);
  uVar5 = 0x112e400c0;
  func_0x0001000285a8(0x112e400c0,&UNK_10da2e120);
  apuStack_70[0] = puVar12;
  uStack_58 = uVar5;
  func_0x000107c61434(puVar12);
  func_0x000104440854(apuStack_70,0xd000000000000024,0x800000010f134fc0);
  func_0x000107c61170();
  func_0x00010006e7f4(apuStack_70);
  puVar12 = *(undefined1 **)(unaff_x20 + _DAT_112f50c90);
  uVar5 = 0x112f50ca0;
  func_0x0001000285a8(0x112f50ca0,&UNK_10dba5d18);
  apuStack_70[0] = puVar12;
  uStack_58 = uVar5;
  func_0x000107c61434(puVar12);
  func_0x000104440854(apuStack_70,0xd000000000000027,0x800000010f134ff0);
  func_0x000107c61170();
  func_0x00010006e7f4();
  func_0x00010328a37c();
  func_0x000107c613fc();
  *(undefined8 *)((long)ppuVar4 + 0x18) = 2;
  *(undefined8 *)((long)ppuVar4 + 0x10) = 1;
  uVar5 = 0;
  FUN_10329650c();
  *(undefined8 *)((long)ppuVar4 + 0x20) = uVar5;
  uVar5 = 0x112f50ca8;
  puVar8 = &UNK_10dba5d20;
  func_0x0001000285a8(0x112f50ca8,&UNK_10dba5d20);
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0e2b8;
  apuStack_70[0] = (undefined1 *)ppuVar4;
  uStack_58 = uVar5;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e2b8);
  func_0x000104440854(apuStack_70,ppuVar6,puVar8);
  func_0x000107c6142c(puVar8);
  func_0x000107c61170(ppuVar7);
  func_0x00010006e7f4(apuStack_70);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  uVar5 = 0x112d38c88;
  uVar9 = 0;
  FUN_103296154(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0e258;
  apuStack_70[0] = puVar8;
  uStack_58 = uVar9;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e258);
  func_0x000104440854(apuStack_70,ppuVar6,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(ppuVar10);
  func_0x00010006e7f4(apuStack_70);
  func_0x000104440b54();
  apuStack_70[0] = (undefined1 *)0x0;
  func_0x000107c5f9e4();
  func_0x000107c61170(ppuVar11);
  puVar12 = apuStack_70[0];
  func_0x000104440b54();
  apuStack_70[0] = (undefined1 *)0x0;
  func_0x000107c5f9e4();
  func_0x000107c61170(ppuVar11);
  puVar1 = apuStack_70[0];
  uVar5 = 0;
  func_0x000104445474(0);
  func_0x000107c610f8();
  func_0x000104445210(puVar12,puVar1,uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  return puVar12;
}



/* Entry: 103295b28; end: 103295b5b; -[SCSpotlightTiledInterstitialItem pageData] */

void FUN_103295b28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103295814();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103295b5c; end: 103295bbb; -[SCSpotlightTiledInterstitialItem init] */

void FUN_103295b5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightTiledInterstitialItem",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103295b88);
  (*pcVar1)();
}



/* Entry: 103295bbc; end: 103295c07; -[SCSpotlightTiledInterstitialItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103295bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103295be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103295bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f50c80 + 8))
  ;
  return;
}



/* Entry: 103295c08; end: 103295ca7;  */

void FUN_103295c08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103295ca8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103295ca8; end: 103295dc3;  */

undefined * FUN_103295ca8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103295dc4);
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
    puVar3 = (undefined *)0x112f50cf0;
    func_0x0001000285a8(0x112f50cf0,&UNK_10dba5d78);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110631e98);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103295dc4; end: 103295dd7;  */

undefined * FUN_103295dc4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103296154);
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
    (*(code *)0x10328a260)();
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
    (*(code *)0x103299ad0)(0);
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



/* Entry: 103295dd8; end: 103295ef3;  */

undefined * FUN_103295dd8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103295ef4);
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
    puVar3 = (undefined *)0x112f50ce8;
    func_0x0001000285a8(0x112f50ce8,&UNK_10dba5d70);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110631e10);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103295ef4; end: 103296023;  */

undefined * FUN_103295ef4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103296024);
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
    puVar3 = (undefined *)0x112f50cd8;
    func_0x0001000285a8(0x112f50cd8,&UNK_10dba5d60);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f50ce0;
    func_0x0001000285a8(0x112f50ce0,&UNK_10dba5d68);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103296024; end: 103296153;  */

undefined *
FUN_103296024(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             code *param_6)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103296154);
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
    (*param_5)();
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
    (*param_6)(0);
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



/* Entry: 103296154; end: 1032961d3;  */

void FUN_103296154(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032961d4; end: 10329621f; -[_TtC28SpotlightCustomInterstitials31SpotlightTiledInterstitialLayer initWithPage:] */

undefined8 FUN_1032961d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_1032962d8(param_3);
  func_0x000107c61170(uVar1);
  return param_3;
}



/* Entry: 103296220; end: 103296227; -[_TtC28SpotlightCustomInterstitials31SpotlightTiledInterstitialLayer type] */

undefined8 FUN_103296220(void)

{
  return 0x19;
}



/* Entry: 103296228; end: 10329622f; -[_TtC28SpotlightCustomInterstitials31SpotlightTiledInterstitialLayer layerContentType] */

undefined8 FUN_103296228(void)

{
  return 1;
}



/* Entry: 103296230; end: 10329628f; -[_TtC28SpotlightCustomInterstitials31SpotlightTiledInterstitialLayer init] */

void FUN_103296230(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightTiledInterstitialLayer",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329625c);
  (*pcVar1)();
}



/* Entry: 103296290; end: 1032962d7; -[_TtC28SpotlightCustomInterstitials31SpotlightTiledInterstitialLayer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032962ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032962b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103296290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f50cf8));
  return;
}



/* Entry: 1032962d8; end: 10329650b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032962d8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000107c614f0();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10329650c);
    (*pcVar1)();
  }
  uVar8 = *(undefined8 *)(param_1 + _DAT_11307abc8);
  uVar2 = uVar8;
  func_0x000107c61434();
  func_0x00010018cc3c();
  func_0x000107c6142c(uVar8);
  *(undefined8 *)(unaff_x20 + _DAT_112f50cf8) = uVar2;
  lVar7 = *(long *)(param_1 + _DAT_11307abc8);
  if (*(long *)(lVar7 + 0x10) == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
LAB_1032963fc:
    func_0x00010006e7f4(&uStack_70);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar7);
    uVar5 = 0;
    lVar3 = -0x2fffffffffffffdc;
    func_0x000100029284(0xd000000000000024);
    if ((uVar5 & 1) == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
      func_0x000107c6142c(lVar7);
      goto LAB_1032963fc;
    }
    func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,&uStack_70);
    func_0x000107c6142c(lVar7);
    if (lStack_58 == 0) goto LAB_1032963fc;
    uVar2 = 0x112e400c0;
    func_0x0001000285a8(0x112e400c0,&UNK_10da2e120);
    ppuVar4 = &puStack_88;
    func_0x000107c6147c(ppuVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)ppuVar4 & 1) != 0) {
      puVar6 = puStack_88;
    }
  }
  *(undefined **)(unaff_x20 + _DAT_112f50d00) = puVar6;
  if (*(long *)(lVar7 + 0x10) == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
LAB_1032964bc:
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    func_0x000107c61434(lVar7);
    lVar3 = -0x2fffffffffffffd9;
    uVar5 = 0;
    func_0x000100029284(0xd000000000000027);
    if ((uVar5 & 1) == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,&uStack_70);
    }
    func_0x000107c6142c(lVar7);
    if (lStack_58 == 0) goto LAB_1032964bc;
    uVar2 = 0x112f50ca0;
    func_0x0001000285a8(0x112f50ca0,&UNK_10dba5d18);
    ppuVar4 = &puStack_88;
    func_0x000107c6147c(ppuVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)ppuVar4 & 1) != 0) goto LAB_1032964cc;
  }
  puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1032964cc:
  *(undefined **)(unaff_x20 + _DAT_112f50d08) = puStack_88;
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329650c; end: 10329652b;  */

void FUN_10329650c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c63c8);
  return;
}



/* Entry: 10329652c; end: 1032969df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10329652c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f50d48;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f50d48);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    FUN_103297ffc();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2,param_2,puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(uVar5);
    lVar4 = 0;
  }
  func_0x000107c61174(lVar4);
  return lVar2;
}



/* Entry: 1032969e0; end: 103296abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032969e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = _DAT_112f50d68;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f50d68);
  lVar5 = lVar2;
  if (lVar2 == 0) {
    func_0x000103296824();
    lVar3 = lVar2;
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f50d60);
    func_0x000107c5e308(uVar4);
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c4028c(0x3ff5555555555555,0x4034000000000000,lVar3,param_2,uVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar5;
    func_0x000107c61174(lVar5);
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar5;
}



/* Entry: 103296abc; end: 103296bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103296abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50d38);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50d40);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d88) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_103296bd8();
  func_0x000107c61170(puVar2);
  return puVar2;
}



/* Entry: 103296bd8; end: 1032973e3;  */

/* WARNING: Possible PIC construction at 0x000103296c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103296fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103297008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329708c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032970e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329713c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103297174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329719c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032971f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103297224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032972b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103297308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103297348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329730c) */
/* WARNING: Removing unreachable block (ram,0x0001032972b4) */
/* WARNING: Removing unreachable block (ram,0x000103297228) */
/* WARNING: Removing unreachable block (ram,0x0001032971fc) */
/* WARNING: Removing unreachable block (ram,0x0001032971a0) */
/* WARNING: Removing unreachable block (ram,0x000103297178) */
/* WARNING: Removing unreachable block (ram,0x000103297140) */
/* WARNING: Removing unreachable block (ram,0x0001032970e8) */
/* WARNING: Removing unreachable block (ram,0x000103297090) */
/* WARNING: Removing unreachable block (ram,0x00010329700c) */
/* WARNING: Removing unreachable block (ram,0x000103296fd0) */
/* WARNING: Removing unreachable block (ram,0x000103296f90) */
/* WARNING: Removing unreachable block (ram,0x000103296f38) */
/* WARNING: Removing unreachable block (ram,0x000103296ee0) */
/* WARNING: Removing unreachable block (ram,0x000103296ebc) */
/* WARNING: Removing unreachable block (ram,0x000103296e3c) */
/* WARNING: Removing unreachable block (ram,0x000103296e00) */
/* WARNING: Removing unreachable block (ram,0x000103296dac) */
/* WARNING: Removing unreachable block (ram,0x000103296d58) */
/* WARNING: Removing unreachable block (ram,0x000103296d04) */
/* WARNING: Removing unreachable block (ram,0x000103296cb0) */
/* WARNING: Removing unreachable block (ram,0x000103296c14) */
/* WARNING: Removing unreachable block (ram,0x00010329734c) */

void FUN_103296bd8(undefined8 param_1)

{
  FUN_10329652c();
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032973e4; end: 103297403; -[_TtC28SpotlightCustomInterstitials35SpotlightTiledInterstitialLayerView initWithFrame:] */

void FUN_1032973e4(void)

{
  FUN_103296abc();
  return;
}


