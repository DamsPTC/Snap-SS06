/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10398e884; end: 10398e88b;  */

void FUN_10398e884(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10398e88c; end: 10398e8cb;  */

void FUN_10398e88c(void)

{
  undefined *puVar1;
  
  if (puRam000000011356fe00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2ce50;
  func_0x000107c61520(&UNK_10dc2ce50,&UNK_1106b5000);
  puRam000000011356fe00 = puVar1;
  return;
}



/* Entry: 10398e8cc; end: 10398e9db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398e8cc(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  bVar1 = *(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112fbb108) = 0;
    lVar3 = _DAT_11380c048;
    if ((param_2 == 0) && (param_1 != 0)) {
      func_0x000107c61428(lVar2 + _DAT_11380c048,auStack_70,0,0);
      lVar3 = lVar2 + lVar3;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar4 = lVar2;
        func_0x000107c61174((ulong)bVar1 + 0x18,lVar2);
        lVar5 = lVar4;
        func_0x000107c5ed90();
        func_0x000107c5c8e4(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c615e8(lVar3);
      }
    }
    else {
      FUN_1039891d0(param_2);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10398e9dc; end: 10398e9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398e9dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&puStack_c0 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar11 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar9 - extraout_x12;
  uVar8 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_11356fde0;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_11356fde0,auStack_90,0,0);
    FUN_10398eaf8(lVar1 + lVar3,lVar11,0x112d36580,&UNK_10d9016d0);
    lVar3 = lVar11;
    (**(code **)(lVar13 + 0x30))(lVar11,1,lVar2);
    if ((int)lVar3 == 1) {
      func_0x000107c61170(lVar1);
      func_0x00010398e4d0(lVar11,0x112d36580,&UNK_10d9016d0);
    }
    else {
      pcVar14 = *(code **)(lVar13 + 0x20);
      (*pcVar14)(lVar7,lVar11,lVar2);
      uVar12 = *(undefined8 *)(lVar1 + _DAT_112fbb118);
      (**(code **)(lVar13 + 0x10))(lVar9,lVar7,lVar2);
      uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
      uVar15 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
      puVar4 = &UNK_1106b4f58;
      func_0x000107c613fc(&UNK_1106b4f58,uVar15 + lVar10,uVar6 | 7);
      *(long *)(puVar4 + 0x10) = lVar1;
      *(undefined8 *)(puVar4 + 0x18) = uVar8;
      (*pcVar14)(puVar4 + uVar15,lVar9,lVar2);
      pcStack_a0 = FUN_10398e9e4;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1106b4f70;
      ppuVar5 = &puStack_c0;
      puStack_98 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_98;
      func_0x000107c61174(lVar1);
      func_0x000107c61174(uVar8);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(uVar12);
      func_0x000107c60bd0(ppuVar5);
      (**(code **)(lVar13 + 8))(lVar7,lVar2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10398e9e4; end: 10398ea77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398e9e4(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lStack_50 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lStack_48 = unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff));
  *(undefined1 *)(lStack_50 + _DAT_112fbb108) = 0;
  lStack_30 = lStack_50;
  func_0x00010399dc78(uVar1,0x10398ea58,auStack_40,FUN_10398ea78,auStack_60);
  return;
}



/* Entry: 10398ea78; end: 10398eaf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398ea78(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11380c048;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + _DAT_11380c048,auStack_48,0,0);
  lVar1 = lVar1 + lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5ed90();
    func_0x000107c5c8e4(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10398eaf8; end: 10398eb9b;  */

undefined8 FUN_10398eaf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10398eb9c; end: 10398ec7b;  */

undefined8 * FUN_10398eb9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 10398ec7c; end: 10398eccf;  */

undefined8 * FUN_10398ec7c(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 10398ecd0; end: 10398ed73;  */

int FUN_10398ecd0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10398ed74; end: 10398edb3;  */

void FUN_10398ed74(void)

{
  undefined *puVar1;
  
  if (puRam000000011356fe90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2cf44;
  func_0x000107c61520(&UNK_10dc2cf44,&UNK_1106b50a0);
  puRam000000011356fe90 = puVar1;
  return;
}



/* Entry: 10398edb4; end: 10398ef3b;  */

void FUN_10398edb4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010398edc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10398ef3c; end: 10398ef7b;  */

void FUN_10398ef3c(void)

{
  undefined *puVar1;
  
  if (puRam000000011356ffa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2cf1c;
  func_0x000107c61520(&UNK_10dc2cf1c,&UNK_1106b50a0);
  puRam000000011356ffa0 = puVar1;
  return;
}



/* Entry: 10398ef7c; end: 10398ef7f;  */

void FUN_10398ef7c(void)

{
  undefined *puVar1;
  
  if (puRam00000001135700b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2ceb4;
  func_0x000107c61520(&UNK_10dc2ceb4,&UNK_1106b50a0);
  puRam00000001135700b0 = puVar1;
  return;
}



/* Entry: 10398ef80; end: 10398efbf;  */

void FUN_10398ef80(void)

{
  undefined *puVar1;
  
  if (puRam00000001135700b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2ceb4;
  func_0x000107c61520(&UNK_10dc2ceb4,&UNK_1106b50a0);
  puRam00000001135700b0 = puVar1;
  return;
}



/* Entry: 10398efc0; end: 10398efc3;  */

void FUN_10398efc0(void)

{
  undefined *puVar1;
  
  if (puRam00000001135700b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2ce8c;
  func_0x000107c61520(&UNK_10dc2ce8c,&UNK_1106b50a0);
  puRam00000001135700b8 = puVar1;
  return;
}



/* Entry: 10398efc4; end: 10398f003;  */

void FUN_10398efc4(void)

{
  undefined *puVar1;
  
  if (puRam00000001135700b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2ce8c;
  func_0x000107c61520(&UNK_10dc2ce8c,&UNK_1106b50a0);
  puRam00000001135700b8 = puVar1;
  return;
}



/* Entry: 10398f004; end: 10398f05b;  */

void FUN_10398f004(long param_1,long param_2)

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



/* Entry: 10398f05c; end: 10398f063; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler httpCookieController] */

void FUN_10398f05c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10398f064; end: 10398f0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10398f064(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10398f424();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fbb1a0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fbb1a8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10398f0ec);
  (*pcVar1)();
}



/* Entry: 10398f0ec; end: 10398f14b; -[_TtC53WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridge68WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint init] */

void FUN_10398f0ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridge.WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint"
                      ,0x7a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10398f118);
  (*pcVar1)();
}



/* Entry: 10398f14c; end: 10398f183; -[_TtC53WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridge68WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010398f168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010398f16c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398f14c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbb1a0));
  return;
}



/* Entry: 10398f184; end: 10398f1ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398f184(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fbb1a8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fbb1a0));
  return;
}



/* Entry: 10398f1ac; end: 10398f1cb;  */

void FUN_10398f1ac(void)

{
  func_0x000107c61168(&PTR_PTR_1129092f8);
  return;
}



/* Entry: 10398f1cc; end: 10398f253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10398f1cc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbb1d8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112fbb1e0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10398f254);
  (*pcVar2)();
}



/* Entry: 10398f254; end: 10398f33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10398f254(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fbb1d8);
  *(undefined **)(unaff_x20 + _DAT_112fbb1d8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fbb1e0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112fbb1e0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106b5258;
  func_0x000107c613fc(&UNK_1106b5258,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10398f340,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10398f33c; end: 10398f347;  */

void FUN_10398f33c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10398f348; end: 10398f3a7; -[_TtC53WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridge66WebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint init] */

void FUN_10398f348(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridge.WebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint"
                      ,0x78,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10398f374);
  (*pcVar1)();
}



/* Entry: 10398f3a8; end: 10398f3df; -[_TtC53WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridge66WebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398f3a8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fbb1e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbb1d8));
  return;
}



/* Entry: 10398f3e0; end: 10398f3e3;  */

void FUN_10398f3e0(void)

{
  return;
}



/* Entry: 10398f3e4; end: 10398f403;  */

void FUN_10398f3e4(void)

{
  FUN_10398f254();
  return;
}



/* Entry: 10398f404; end: 10398f423;  */

void FUN_10398f404(void)

{
  func_0x000107c61168(&PTR_PTR_1129093c0);
  return;
}



/* Entry: 10398f424; end: 10398f4f3;  */

undefined8 FUN_10398f424(void)

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
  
  func_0x000107c61428(0x112fbb210,&uStack_40,0x20,0);
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
    FUN_10398f4f4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10398f4f4; end: 10398f513;  */

void FUN_10398f4f4(void)

{
  func_0x000107c61168(&PTR_PTR_112909488);
  return;
}



/* Entry: 10398f514; end: 10398f57f;  */

void FUN_10398f514(void)

{
  func_0x0001000285a8(0x112fbb218,&UNK_10dc2d098);
  func_0x0001000823a8(0x10398f554,0);
  return;
}



/* Entry: 10398f580; end: 10398f5bb; -[_TtC53WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridge61WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeServices init] */

void FUN_10398f580(undefined8 param_1)

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



/* Entry: 10398f5bc; end: 10398f5ef;  */

void FUN_10398f5bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10398f5f0; end: 10398f5f7;  */

undefined8 FUN_10398f5f0(void)

{
  return 0x1b;
}



/* Entry: 10398f5f8; end: 10398f76f;  */

void FUN_10398f5f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b52a0;
  func_0x000107c613fc(&UNK_1106b52a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10398f770,puVar1);
  return;
}



/* Entry: 10398f770; end: 10398f777;  */

void FUN_10398f770(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112fbb210,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fbb210,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106b5338;
  func_0x000107c613fc(&UNK_1106b5338,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10398f824;
  func_0x00010058fa64(0x10398f824,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10398f778; end: 10398f7d3;  */

void FUN_10398f778(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fbb210,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112fbb210,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10398f7d4; end: 10398f82b;  */

undefined ** FUN_10398f7d4(void)

{
  return &PTR_DAT_113067180;
}



/* Entry: 10398f82c; end: 10398f873; -[SCWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398f82c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb270;
  func_0x000107c61428(param_1 + _DAT_112fbb270,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10398f874; end: 10398f8cb; -[SCWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398f874(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb270;
  func_0x000107c61428(param_1 + _DAT_112fbb270,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10398f8cc; end: 10398f913; -[SCWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint webBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398f8cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb278;
  func_0x000107c61428(param_1 + _DAT_112fbb278,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10398f914; end: 10398f977; -[SCWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint setWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398f914(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb278;
  func_0x000107c61428(param_1 + _DAT_112fbb278,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10398f978; end: 10398faab;  */

/* WARNING: Possible PIC construction at 0x00010398fa30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010398fa4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010398fa68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010398fa34) */
/* WARNING: Removing unreachable block (ram,0x00010398fa50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398f978(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5e1e0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10398f1ac();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10398f424();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10398faac);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112fbb1a0) = lVar5;
    *(long *)(lVar4 + _DAT_112fbb1a8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10398faac; end: 10398fad3; -[SCWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10398faac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10398f978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10398fad4; end: 10398fb17; -[SCWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint end] */

void FUN_10398fad4(undefined8 param_1)

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



/* Entry: 10398fb18; end: 10398fcaf;  */

void FUN_10398fb18(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffbc) || (param_3 != -0x7ffffffef0e81550)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000044,0x800000010f17eab0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridge/SCWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x82,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10398fcb0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a69c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10398fcb0; end: 10398fd5b; -[SCWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10398fcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10398fb18(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10398fd5c; end: 10398fdc7; -[SCWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398fd5c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbb270,0);
  *(undefined8 *)(param_1 + _DAT_112fbb278) = 0;
  *(undefined8 *)(param_1 + _DAT_112fbb280) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10398fdc8; end: 10398fdfb;  */

void FUN_10398fdc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10398fdfc; end: 10398fe43; -[SCWebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010398fe28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010398fe2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398fdfc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbb270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbb278));
  return;
}



/* Entry: 10398fe44; end: 10398fe63;  */

void FUN_10398fe44(void)

{
  func_0x000107c61168(&PTR_PTR_112909538);
  return;
}



/* Entry: 10398fe64; end: 10398feab; -[SCWebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398fe64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb2b0;
  func_0x000107c61428(param_1 + _DAT_112fbb2b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10398feac; end: 10398ff03; -[SCWebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398feac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb2b0;
  func_0x000107c61428(param_1 + _DAT_112fbb2b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10398ff04; end: 10398ffdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398ff04(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_10398f404();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112fbb1d8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10398ffdc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112fbb1e0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fbb2b8);
    *(long **)(unaff_x20 + _DAT_112fbb2b8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10398ffdc; end: 103990003; -[SCWebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint begin] */

void FUN_10398ffdc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10398ff04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103990004; end: 10399017b;  */

/* WARNING: Possible PIC construction at 0x00010399006c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103990104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103990070) */
/* WARNING: Removing unreachable block (ram,0x000103990108) */
/* WARNING: Removing unreachable block (ram,0x000103990120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103990004(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112fbb2b8);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10399017c; end: 103990183;  */

void FUN_10399017c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103990184; end: 1039901b7; -[SCWebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint end] */

void FUN_103990184(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103990004();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039901b8; end: 1039902d7;  */

void FUN_1039901b8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridge/SCWebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint.swift"
                        ,0x80,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1039902d8);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039902d8; end: 103990383; -[SCWebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1039902d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039901b8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103990384; end: 1039903e3; -[SCWebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103990384(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbb2b0,0);
  *(undefined8 *)(param_1 + _DAT_112fbb2b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039903e4; end: 103990417;  */

void FUN_1039903e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103990418; end: 10399044f; -[SCWebBrowsingThirdPartyLoginSaberPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103990418(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbb2b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbb2b8));
  return;
}



/* Entry: 103990450; end: 10399046f;  */

void FUN_103990450(void)

{
  func_0x000107c61168(&PTR_PTR_112909600);
  return;
}



/* Entry: 103990470; end: 1039904f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103990470(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a91740();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fbb2e8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fbb2f0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039904f8);
  (*pcVar1)();
}



/* Entry: 1039904f8; end: 103990557; -[_TtC38ActivActiveUserSessionScopeGraphBridge53ActivActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039904f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActivActiveUserSessionScopeGraphBridge.ActivActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103990524);
  (*pcVar1)();
}



/* Entry: 103990558; end: 10399058f; -[_TtC38ActivActiveUserSessionScopeGraphBridge53ActivActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103990574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103990578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103990558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbb2e8));
  return;
}



/* Entry: 103990590; end: 1039905b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103990590(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fbb2f0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fbb2e8));
  return;
}



/* Entry: 1039905b8; end: 103990653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039905b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fbb6c0);
  *(undefined8 *)(unaff_x20 + _DAT_112fbb320) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbb328) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103990654; end: 1039906b3; -[_TtC38ActivActiveUserSessionScopeGraphBridge37SCPasskeyStoreServicesSaberEntryPoint init] */

void FUN_103990654(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActivActiveUserSessionScopeGraphBridge.SCPasskeyStoreServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103990680);
  (*pcVar1)();
}



/* Entry: 1039906b4; end: 103990747; -[_TtC38ActivActiveUserSessionScopeGraphBridge37SCPasskeyStoreServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039906b4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbb320));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbb328));
  return;
}



/* Entry: 103990748; end: 10399074f;  */

undefined8 FUN_103990748(void)

{
  return 0;
}



/* Entry: 103990750; end: 1039907b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103990750(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbb6a8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039907b4; end: 1039907bb;  */

void FUN_1039907b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039907bc; end: 1039907df;  */

void FUN_1039907bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039907e0; end: 1039907ff;  */

void FUN_1039907e0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103990800; end: 103990863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103990800(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbb6b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103990864; end: 10399086b;  */

void FUN_103990864(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10399086c; end: 10399090b;  */

void FUN_10399086c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10399090c; end: 10399092b;  */

void FUN_10399090c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10399092c; end: 10399098f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10399092c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbb6b8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103990990; end: 103990997;  */

void FUN_103990990(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103990998; end: 103990a37;  */

void FUN_103990998(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103990a38; end: 103990a57;  */

void FUN_103990a38(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103990a58; end: 103990abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103990a58(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbb6c8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103990abc; end: 103990ac3;  */

void FUN_103990abc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103990ac4; end: 103990b63;  */

void FUN_103990ac4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103990b64; end: 103990b83;  */

void FUN_103990b64(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103990b84; end: 103990c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103990b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbb6a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbb6b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbb6b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbb6c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fbb6c8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103990c20; end: 103990c7f; -[_TtC38ActivActiveUserSessionScopeGraphBridge46ActivActiveUserSessionScopeGraphBridgeServices init] */

void FUN_103990c20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActivActiveUserSessionScopeGraphBridge.ActivActiveUserSessionScopeGraphBridgeServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103990c4c);
  (*pcVar1)();
}



/* Entry: 103990c80; end: 103990d43; -[_TtC38ActivActiveUserSessionScopeGraphBridge46ActivActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103990c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103990cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103990ca0) */
/* WARNING: Removing unreachable block (ram,0x000103990cc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103990c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbb6c0));
  return;
}



/* Entry: 103990d44; end: 103990d7b;  */

undefined1  [16] FUN_103990d44(void)

{
  return ZEXT816(0x1106b5518);
}



/* Entry: 103990d7c; end: 103990dbf; -[SCActivActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103990d7c(undefined8 param_1)

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



/* Entry: 103990dc0; end: 103990df3;  */

void FUN_103990dc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103990df4; end: 103990e3b; -[SCActivActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103990e20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103990e24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103990df4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbb720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbb728));
  return;
}



/* Entry: 103990e3c; end: 103990e5b;  */

void FUN_103990e3c(void)

{
  func_0x000107c61168(&PTR_PTR_112909930);
  return;
}


