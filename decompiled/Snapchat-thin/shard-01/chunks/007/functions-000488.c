/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101418594; end: 101418687; -[_TtC17COSPasskeyFeature31COSPasskeyPendingViewController presentationAnchorForAuthorizationController:] */

void FUN_101418594(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  puVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIWindow_1126c3e70);
      func_0x000107c453e4();
    }
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101418610);
  (*pcVar1)();
}



/* Entry: 101418688; end: 1014188ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101418688(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [80];
  
  plVar8 = &lStack_c0;
  func_0x000107c40d6c();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialRegistration_1126a5e28;
  func_0x000107c61168(
                     PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialRegistration_1126a5e28
                     );
  lVar4 = param_1;
  func_0x000107c6148c(param_1,puVar3);
  if (lVar4 == 0) {
    func_0x000107c615e8(param_1);
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar9 = auStack_a0;
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar10 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0x20) = uVar10;
    puVar3 = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar4 + 0x28) = puVar9;
    *(undefined8 *)(lVar4 + 0x30) = 0xd000000000000017;
    *(undefined8 *)(lVar4 + 0x38) = 0x800000010ef3d350;
    lVar7 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    FUN_101418a8c((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar10 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010d93c140);
    lVar4 = lVar7;
    func_0x000107c5f9dc(lVar7,puVar3,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar7);
    func_0x000107c466bc();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar4);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d7dcd8);
    lVar7 = 0;
    FUN_101416f04();
    lVar4 = lVar7;
    func_0x000107c610f8();
    puVar2 = (undefined8 *)(lVar4 + _DAT_112d7db98);
    *puVar2 = puVar6;
    *(undefined1 *)(puVar2 + 1) = 1;
    puVar3 = PTR_s_init_1125d9248;
    lStack_b0 = lVar4;
    lStack_a8 = lVar7;
    func_0x000107c61174(puVar6);
    plVar8 = &lStack_b0;
    func_0x000107c61154(plVar8,puVar3);
    func_0x000107c424b8(uVar10);
    func_0x000107c61170(puVar6);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d7dcd8);
    lVar5 = 0;
    FUN_101416f04();
    lVar7 = lVar5;
    func_0x000107c610f8();
    plVar1 = (long *)(lVar7 + _DAT_112d7db98);
    *plVar1 = lVar4;
    *(undefined1 *)(plVar1 + 1) = 0;
    puVar3 = PTR_s_init_1125d9248;
    lStack_c0 = lVar7;
    lStack_b8 = lVar5;
    func_0x000107c615f0(param_1);
    func_0x000107c61154(&lStack_c0,puVar3);
    func_0x000107c424b8(uVar10);
    func_0x000107c615e8(param_1);
  }
  func_0x000107c61170(plVar8);
  return;
}



/* Entry: 101418900; end: 101418a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101418900(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_70;
  lStack_48 = param_1;
  func_0x000107c614b0();
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0;
  func_0x000100e21e2c(0);
  plVar3 = &lStack_50;
  func_0x000107c6147c(plVar3,&lStack_48,uVar8,uVar2,6);
  lVar6 = lStack_50;
  if (((ulong)plVar3 & 1) != 0) {
    lStack_48 = lStack_50;
    FUN_100e27278();
    func_0x000107c5ed1c(&lStack_50,uVar2,plVar3);
    if (lStack_50 == 0x3e9) {
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d7dcd8);
      lVar4 = 0;
      FUN_101416f04();
      lVar5 = lVar4;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar5 + _DAT_112d7db98);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 2;
      lStack_70 = lVar5;
      lStack_68 = lVar4;
      func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
      func_0x000107c424b8(uVar8);
      func_0x000107c61170(lVar6);
      goto LAB_101418a6c;
    }
    func_0x000107c61170(lVar6);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d7dcd8);
  lVar5 = 0;
  FUN_101416f04();
  lVar6 = lVar5;
  func_0x000107c610f8();
  plVar3 = (long *)(lVar6 + _DAT_112d7db98);
  *plVar3 = param_1;
  *(undefined1 *)(plVar3 + 1) = 1;
  func_0x000107c614b0(param_1);
  plVar7 = &lStack_60;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  func_0x000107c424b8(uVar8);
LAB_101418a6c:
  func_0x000107c61170(plVar7);
  return;
}



/* Entry: 101418a8c; end: 101418acb;  */

undefined8 FUN_101418a8c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101418acc; end: 101418aef;  */

void FUN_101418acc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  func_0x0001000bb420(param_1,auStack_40);
  uVar1 = 0;
  func_0x000101418bac(0);
  puVar2 = &uStack_48;
  func_0x000107c6147c(puVar2,auStack_40,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_40,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    func_0x000107c61170(uStack_48);
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 101418af0; end: 101418b2f;  */

void FUN_101418af0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101418b30; end: 101418b4b;  */

void FUN_101418b30(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101418b4c; end: 101418bcb; -[_TtC17COSPasskeyFeature29COSPasskeyPendingViewModelBox init] */

void FUN_101418b4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyPendingViewModelBox",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101418b78);
  (*pcVar1)();
}



/* Entry: 101418bcc; end: 101418d2b;  */

int FUN_101418bcc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101418c48;
        goto LAB_101418c2c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101418c2c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101418c48:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101418d2c; end: 101418e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101418d2c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = 0;
  FUN_101414310();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112d7d990;
  func_0x000107c61614(lVar3 + _DAT_112d7d990,0);
  func_0x000107c61604(lVar3 + lVar1,param_1);
  *(undefined2 *)(lVar3 + _DAT_112d7d998) = 1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  puVar5 = PTR_PTR_1126aec60;
  func_0x000107c610f8();
  func_0x000107c45ab8();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7dd70);
  *(undefined **)(unaff_x20 + _DAT_112d7dd70) = puVar5;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  puVar6 = puVar5;
  func_0x000107c519d4(puVar5);
  func_0x000107c61180();
  uVar7 = 0;
  FUN_101415c34(0);
  func_0x000107c610f8();
  FUN_101414354(puVar6,uVar7);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d7dd68));
  func_0x000107c61170(plVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 101418e54; end: 101418e9b; -[_TtC17COSPasskeyFeature24COSPasskeyUIRouteActions showEnrollmentMainScreenWithDelegate:] */

void FUN_101418e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101418d2c(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101418e9c; end: 101418ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101418e9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar3 = &lStack_60;
  lVar1 = 0;
  FUN_101417300();
  lVar2 = lVar1;
  func_0x000107c610f8();
  lVar6 = _DAT_112d7dbc8;
  func_0x000107c61614(lVar2 + _DAT_112d7dbc8,0);
  func_0x000107c61604(lVar2 + lVar6,param_1);
  *(undefined1 *)(lVar2 + _DAT_112d7dbd0) = 1;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  puVar4 = PTR_PTR_1126aec60;
  func_0x000107c610f8();
  func_0x000107c45ab8();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7dd78);
  *(undefined **)(unaff_x20 + _DAT_112d7dd78) = puVar4;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  puVar5 = puVar4;
  func_0x000107c519d4(puVar4);
  func_0x000107c61180();
  lVar6 = 0;
  func_0x0001014114ec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = 0;
  uVar7 = 0;
  FUN_1014184a4(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  FUN_101419324(puVar5,param_2,lVar6,uVar7);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d7dd68));
  func_0x000107c61170(plVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101418ff8; end: 101419063; -[_TtC17COSPasskeyFeature24COSPasskeyUIRouteActions showPendingScreenWithDelegate:params:] */

/* WARNING: Possible PIC construction at 0x00010141904c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101419050) */

void FUN_101418ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101418e9c(param_3,param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 101419064; end: 1014191bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101419064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  
  plVar5 = &lStack_70;
  lVar3 = 0;
  FUN_10141226c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112d7d7f8;
  func_0x000107c61614(lVar4 + _DAT_112d7d7f8,0);
  func_0x000107c61604(lVar4 + lVar2,param_1);
  puVar1 = (undefined1 *)(lVar4 + _DAT_112d7d800);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(puVar1 + 8) = param_2;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar6 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c61434(param_3);
  func_0x000107c61154(&lStack_70,puVar6);
  puVar6 = PTR_PTR_1126aec60;
  func_0x000107c610f8();
  func_0x000107c45ab8();
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d7dd80);
  *(undefined **)(unaff_x20 + _DAT_112d7dd80) = puVar6;
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  puVar7 = puVar6;
  func_0x000107c519d4(puVar6);
  func_0x000107c61180();
  uVar8 = 0;
  FUN_101413c9c(0);
  func_0x000107c610f8();
  func_0x000101412678(puVar7,uVar8);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d7dd68));
  func_0x000107c61170(plVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1014191c0; end: 10141924b; -[_TtC17COSPasskeyFeature24COSPasskeyUIRouteActions showAuthFailureScreenWithDelegate:errorMessage:showTryAgainButton:showSkipButton:] */

void FUN_1014191c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101419064(param_3,param_4,param_2,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10141924c; end: 1014192ab; -[_TtC17COSPasskeyFeature24COSPasskeyUIRouteActions init] */

void FUN_10141924c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyUIRouteActions",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101419278);
  (*pcVar1)();
}



/* Entry: 1014192ac; end: 101419303; -[_TtC17COSPasskeyFeature24COSPasskeyUIRouteActions .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014192d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014192dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014192ac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7dd68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7dd70));
  return;
}



/* Entry: 101419304; end: 101419323;  */

void FUN_101419304(void)

{
  func_0x000107c61168(&PTR_PTR_1127d4100);
  return;
}



/* Entry: 101419324; end: 1014193df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101419324(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_4;
  func_0x000107c614f0();
  *(undefined1 *)(param_4 + _DAT_112d7dcf0) = 0;
  *(undefined8 *)(param_4 + _DAT_112d7dcf8) = 0;
  *(undefined8 *)(param_4 + _DAT_112d7dd00) = 0;
  *(undefined8 *)(param_4 + _DAT_112d7dd08) = 0;
  *(undefined8 *)(param_4 + _DAT_112d7dcd8) = param_1;
  *(undefined8 *)(param_4 + _DAT_112d7dce0) = param_2;
  puVar1 = (undefined8 *)(param_4 + _DAT_112d7dce8);
  *puVar1 = param_3;
  puVar1[1] = &PTR_DAT_1103b4528;
  lStack_40 = param_4;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 1014193e0; end: 101419443;  */

void FUN_1014193e0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c5aebc(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101419444; end: 10141948b;  */

void FUN_101419444(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 10141948c; end: 1014194e7;  */

void FUN_10141948c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10141a0a4(unaff_x20 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014194e8; end: 1014195af; -[_TtC17COSPasskeyFeature18COSPasskeyWorkflow enrollmentMainDidTapAddPasskey] */

void FUN_1014194e8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = &UNK_1103b4a80;
  func_0x000107c613fc(&UNK_1103b4a80,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_1);
  uStack_40 = 0x10141a124;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101419444;
  puStack_48 = &UNK_1103b4ca0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c50990(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1014195b0; end: 10141988f;  */

/* WARNING: Possible PIC construction at 0x000101419710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101419764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014197b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014197ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101419860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014197f0) */
/* WARNING: Removing unreachable block (ram,0x0001014197bc) */
/* WARNING: Removing unreachable block (ram,0x000101419768) */
/* WARNING: Removing unreachable block (ram,0x000101419714) */
/* WARNING: Removing unreachable block (ram,0x000101419864) */

void FUN_1014195b0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = param_1;
  func_0x000107c4f8ec();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar7 = 0;
    uVar8 = 0xc000000000000000;
    uVar5 = param_2;
  }
  else {
    lVar7 = lVar3;
    func_0x000107c5ee30();
    uVar5 = param_2;
    func_0x000107c61170(lVar3);
    uVar8 = param_2;
  }
  func_0x000107c4f8f8();
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  lVar3 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar3 == 0) {
    uVar6 = (uint)(uVar8 >> 0x3e);
    if (uVar6 != 1) {
      if (uVar6 != 2) {
        return;
      }
      func_0x000107c61574(lVar7);
    }
    puVar2 = (undefined *)(uVar8 & 0x3fffffffffffffff);
  }
  else {
    func_0x000107c5ee20(lVar7,uVar8);
    func_0x000107c5ee20(lVar4,uVar5);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_101419890;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1000f6b44;
    puStack_88 = &UNK_1103b4b10;
    func_0x000107c60bc4();
    puVar2 = &UNK_1103b4a80;
    func_0x000107c613fc(&UNK_1103b4a80,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    pcStack_80 = (code *)0x101419fc4;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100f11160;
    puStack_88 = &UNK_1103b4b38;
    puStack_78 = puVar2;
    func_0x000107c60bc4(&puStack_a0);
    puVar2 = puStack_78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101419890; end: 101419893;  */

void FUN_101419890(void)

{
  return;
}



/* Entry: 101419894; end: 1014199af;  */

void FUN_101419894(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    puVar2 = &UNK_1103b4a80;
    func_0x000107c613fc(&UNK_1103b4a80,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_3);
    func_0x000107c613fc(param_4,0x28,7);
    *(undefined **)(param_4 + 0x10) = puVar2;
    *(undefined8 *)(param_4 + 0x18) = param_1;
    *(undefined8 *)(param_4 + 0x20) = param_2;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_101419444;
    ppuVar3 = &puStack_98;
    uStack_80 = param_6;
    uStack_78 = param_5;
    lStack_70 = param_4;
    func_0x000107c60bc4(ppuVar3);
    lVar1 = lStack_70;
    func_0x000107c61434(param_2);
    func_0x000107c61574(lVar1);
    func_0x000107c50990(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 1014199b0; end: 1014199f3; -[_TtC17COSPasskeyFeature18COSPasskeyWorkflow pendingDidSucceedWith:] */

void FUN_1014199b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1014195b0(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1014199f4; end: 101419aa3; -[_TtC17COSPasskeyFeature18COSPasskeyWorkflow pendingDidFailWith:] */

void FUN_1014199f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_101419ef0(FUN_101419fac,&UNK_1103b4ae8);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101419aa4; end: 101419adb; -[_TtC17COSPasskeyFeature18COSPasskeyWorkflow pendingDidCancel] */

void FUN_101419aa4(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_101419ef0(0x10141a120,&UNK_1103b4ac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101419adc; end: 101419dab;  */

void FUN_101419adc(undefined8 param_1,long param_2,long param_3,undefined1 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_4 == (undefined1 *)0x0) {
      lVar2 = param_2;
      func_0x000107c6157c();
      func_0x000105219840();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101419bcc);
        (*pcVar1)();
      }
      param_3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c6157c();
      puVar3 = param_4;
    }
    func_0x000107c61434(param_4);
    func_0x000107c5fadc(param_3,puVar3);
    func_0x000107c6142c(puVar3);
    func_0x000107c5ae38(param_1);
    func_0x000107c61578(param_2,2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 101419dac; end: 101419e67;  */

void FUN_101419dac(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107c4bfa4();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_1103b4a80;
  func_0x000107c613fc(&UNK_1103b4a80,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_40 = FUN_101419ecc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101419444;
  puStack_48 = &UNK_1103b4a98;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c50990(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101419e68; end: 101419ecb; -[_TtC17COSPasskeyFeature18COSPasskeyWorkflow authFailureDidTapTryAgain] */

void FUN_101419e68(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_101419dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101419ecc; end: 101419eef;  */

void FUN_101419ecc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c5aebc(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101419ef0; end: 101419fab;  */

void FUN_101419ef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107c4bf80();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_1103b4a80;
  func_0x000107c613fc(&UNK_1103b4a80,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101419444;
  uStack_58 = param_2;
  uStack_50 = param_1;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c50990(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101419fac; end: 10141a053;  */

void FUN_101419fac(void)

{
  func_0x000101419a44();
  return;
}



/* Entry: 10141a054; end: 10141a06b;  */

void FUN_10141a054(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  puVar6 = *(undefined1 **)(unaff_x20 + 0x20);
  puVar5 = auStack_58;
  func_0x000107c61428(lVar2 + 0x10,puVar5,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if (puVar6 == (undefined1 *)0x0) {
      lVar3 = lVar2;
      func_0x000107c6157c();
      func_0x000105219840();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101419dac);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c6157c();
      puVar5 = puVar6;
    }
    func_0x000107c61434(puVar6);
    func_0x000107c5fadc(lVar4,puVar5);
    func_0x000107c6142c(puVar5);
    func_0x000107c5ae38(param_1);
    func_0x000107c61578(lVar2,2);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10141a06c; end: 10141a097;  */

void FUN_10141a06c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10141a098; end: 10141a0a3;  */

void FUN_10141a098(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  puVar6 = *(undefined1 **)(unaff_x20 + 0x20);
  puVar5 = auStack_58;
  func_0x000107c61428(lVar2 + 0x10,puVar5,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if (puVar6 == (undefined1 *)0x0) {
      lVar3 = lVar2;
      func_0x000107c6157c();
      func_0x000105219840();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101419bcc);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c6157c();
      puVar5 = puVar6;
    }
    func_0x000107c61434(puVar6);
    func_0x000107c5fadc(lVar4,puVar5);
    func_0x000107c6142c(puVar5);
    func_0x000107c5ae38(param_1);
    func_0x000107c61578(lVar2,2);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10141a0a4; end: 10141a0c7;  */

undefined8 FUN_10141a0a4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10141a0c8; end: 10141a117;  */

void FUN_10141a0c8(long param_1,long param_2)

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



/* Entry: 10141a118; end: 10141a11b; -[_TtC17COSPasskeyFeature18COSPasskeyWorkflow authFailureDidTapSkip] */

void FUN_10141a118(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4e3d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10141a11c; end: 10141a127; -[_TtC17COSPasskeyFeature18COSPasskeyWorkflow pendingDidTapSkip] */

void FUN_10141a11c(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4e3d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10141a128; end: 10141a16f; -[SCCOSPasskeyEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a128(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7de68;
  func_0x000107c61428(param_1 + _DAT_112d7de68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141a170; end: 10141a1c7; -[SCCOSPasskeyEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a170(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7de68;
  func_0x000107c61428(param_1 + _DAT_112d7de68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141a1c8; end: 10141a26b; -[SCCOSPasskeyEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x00010141a228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141a22c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10141a1c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = 0;
    FUN_101411b34();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = lVar1;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    func_0x000107c61174(lVar1);
    FUN_10141153c();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10141a26c; end: 10141a2af; -[SCCOSPasskeyEntryPoint end] */

void FUN_10141a26c(undefined8 param_1)

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



/* Entry: 10141a2b0; end: 10141a3cf;  */

void FUN_10141a2b0(long param_1,long param_2,long param_3)

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
                        "COSPasskeyFeature/SCCOSPasskeyEntryPoint.swift",0x2e,2,0x23,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10141a3d0);
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



/* Entry: 10141a3d0; end: 10141a47b; -[SCCOSPasskeyEntryPoint setValue:forIvarName:] */

void FUN_10141a3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10141a2b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10141a47c; end: 10141a4db; -[SCCOSPasskeyEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a47c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d7de68,0);
  *(undefined8 *)(param_1 + _DAT_112d7de70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10141a4dc; end: 10141a50f;  */

void FUN_10141a4dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10141a510; end: 10141a547; -[SCCOSPasskeyEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a510(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7de68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7de70));
  return;
}



/* Entry: 10141a548; end: 10141a567;  */

void FUN_10141a548(void)

{
  func_0x000107c61168(&PTR_PTR_1127d41d8);
  return;
}



/* Entry: 10141a568; end: 10141a5c3; -[COSPasskeyScopeParams nonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a568(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d7dea0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112d7dea0))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10141a5c4; end: 10141a5cf; -[COSPasskeyScopeParams accountIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a5c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7dea8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7dea8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10141a5d0; end: 10141a5db; -[COSPasskeyScopeParams userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a5d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7deb0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7deb0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10141a5dc; end: 10141a5e7; -[COSPasskeyScopeParams relyingPartyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a5dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7deb8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7deb8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10141a5e8; end: 10141a62f;  */

void FUN_10141a5e8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10141a630; end: 10141a63b; -[COSPasskeyScopeParams userVerificationRequirement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a630(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7dec0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7dec0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10141a63c; end: 10141a647; -[COSPasskeyScopeParams attestationPreference] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a63c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7dec8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7dec8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10141a648; end: 10141a69f;  */

void FUN_10141a648(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10141a6a0; end: 10141a6af; -[COSPasskeyScopeParams shouldSupportExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10141a6a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d7ded0);
}



/* Entry: 10141a6b0; end: 10141a7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7dea0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7dea8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7deb0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7deb8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7dec0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7dec8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_112d7ded0) = param_13;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10141a7c0; end: 10141a887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7dea0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7dea8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7deb0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7deb8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7dec0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7dec8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_112d7ded0) = param_13;
  func_0x00010141a868();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10141a888; end: 10141aa6b; -[COSPasskeyScopeParams initWithNonce:accountIdentifier:userId:relyingPartyId:userVerificationRequirement:attestationPreference:shouldSupportExit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141a888(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,undefined1 param_9)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_70;
  long lStack_68;
  
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar5 = param_8;
  func_0x000107c61174();
  func_0x000107c5ee30();
  lVar8 = param_2;
  func_0x000107c61170(uVar4);
  uVar4 = param_4;
  func_0x000107c5faec();
  lVar9 = lVar8;
  func_0x000107c61170(param_4);
  uVar6 = param_5;
  func_0x000107c5faec();
  lVar10 = lVar9;
  func_0x000107c61170(param_5);
  lVar7 = param_6;
  func_0x000107c5faec();
  lVar11 = lVar10;
  func_0x000107c61170();
  if (param_7 == 0) {
    lVar12 = 0;
    lVar3 = 0;
    lStack_68 = param_6;
    lVar13 = lVar11;
  }
  else {
    lVar12 = param_7;
    func_0x000107c5faec();
    lVar13 = lVar11;
    func_0x000107c61170();
    lVar3 = lVar11;
    lStack_68 = param_7;
  }
  if (lVar5 == 0) {
    param_8 = 0;
    lVar13 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170();
    lStack_68 = lVar5;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7dea0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7dea8);
  *puVar1 = uVar4;
  puVar1[1] = lVar8;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7deb0);
  *puVar1 = uVar6;
  puVar1[1] = lVar9;
  plVar2 = (long *)(param_1 + _DAT_112d7deb8);
  *plVar2 = lVar7;
  plVar2[1] = lVar10;
  plVar2 = (long *)(param_1 + _DAT_112d7dec0);
  *plVar2 = lVar12;
  plVar2[1] = lVar3;
  plVar2 = (long *)(param_1 + _DAT_112d7dec8);
  *plVar2 = param_8;
  plVar2[1] = lVar13;
  *(undefined1 *)(param_1 + _DAT_112d7ded0) = param_9;
  func_0x00010141a868();
  lStack_70 = param_1;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10141aa6c; end: 10141aa97; -[COSPasskeyScopeParams init] */

void FUN_10141aa6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyScope.COSPasskeyScopeParams",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10141aa98);
  (*pcVar1)();
}



/* Entry: 10141aa98; end: 10141aaa3;  */

void FUN_10141aa98(void)

{
  (*(code *)0x10141a868)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10141aaa4; end: 10141ab33; -[COSPasskeyScopeParams .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010141aad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010141ab00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141aadc) */
/* WARNING: Removing unreachable block (ram,0x00010141ab04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141aaa4(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_112d7dea0),
                      ((undefined8 *)(param_1 + _DAT_112d7dea0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7dea8 + 8))
  ;
  return;
}



/* Entry: 10141ab34; end: 10141abbf; -[COSPasskeyScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141ab34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7ded8;
  func_0x000107c61428(param_1 + _DAT_112d7ded8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141abc0; end: 10141ad63; -[COSPasskeyScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141abc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7ded8;
  func_0x000107c61428(param_1 + _DAT_112d7ded8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141ad64; end: 10141ad83; -[COSPasskeyScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141ad64(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d7dee0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141ad84; end: 10141ad93; -[COSPasskeyScope params] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141ad84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d7dee8));
  return;
}



/* Entry: 10141ad94; end: 10141adb3; -[COSPasskeyScope eventLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141ad94(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d7def0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141adb4; end: 10141ae83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10141adb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112d7ded8;
  func_0x000107c61614(unaff_x20 + _DAT_112d7ded8,0);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d7dee0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7dee8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d7def0) = param_4;
  puVar2 = auStack_78;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 10141ae84; end: 10141af43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10141ae84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112d7ded8;
  func_0x000107c61614(unaff_x20 + _DAT_112d7ded8,0);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d7dee0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7dee8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d7def0) = param_4;
  FUN_10141af44();
  puVar2 = &stack0xffffffffffffff98;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 10141af44; end: 10141af63;  */

void FUN_10141af44(void)

{
  func_0x000107c61168(&PTR_PTR_1127d4388);
  return;
}



/* Entry: 10141af64; end: 10141b033; -[COSPasskeyScope initWithDelegate:uiContainer:params:eventLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141af64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112d7ded8;
  func_0x000107c61614(param_1 + _DAT_112d7ded8,0);
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_3);
  *(undefined8 *)(param_1 + _DAT_112d7dee0) = param_4;
  *(undefined8 *)(param_1 + _DAT_112d7dee8) = param_5;
  *(undefined8 *)(param_1 + _DAT_112d7def0) = param_6;
  FUN_10141af44();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 10141b034; end: 10141b05f; -[COSPasskeyScope init] */

void FUN_10141b034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyScope.COSPasskeyScope",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10141b060);
  (*pcVar1)();
}



/* Entry: 10141b060; end: 10141b06b;  */

void FUN_10141b060(void)

{
  FUN_10141af44();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10141b06c; end: 10141b09b;  */

void FUN_10141b06c(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10141b09c; end: 10141b0f3; -[COSPasskeyScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010141b0c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141b0cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141b09c(long param_1)

{
  FUN_10141a0a4(param_1 + _DAT_112d7ded8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d7dee0));
  return;
}



/* Entry: 10141b0f4; end: 10141b1db;  */

long FUN_10141b0f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d7df48,&UNK_10d93c2b0);
  func_0x000107c613fc();
  pcVar1 = FUN_10141b1dc;
  func_0x0001000bdd8c(FUN_10141b1dc,0);
  func_0x0001000285a8(0x112d7df50,&UNK_10d93c7d0);
  uVar2 = param_2;
  func_0x000107c414e4();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  lVar4 = 0;
  func_0x00010141bda4();
  func_0x000107c613fc();
  *(code **)(lVar4 + 0x10) = pcVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar3;
  *(long *)(unaff_x20 + 0x10) = lVar4;
  return unaff_x20;
}



/* Entry: 10141b1dc; end: 10141b20b;  */

void FUN_10141b1dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10141c988();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10141b20c; end: 10141b22f;  */

void FUN_10141b20c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10141b230; end: 10141b27b;  */

void FUN_10141b230(void)

{
  FUN_10141b94c();
  return;
}



/* Entry: 10141b27c; end: 10141b29b;  */

void FUN_10141b27c(void)

{
  func_0x000107c61168(&PTR_PTR_112d7df98);
  return;
}



/* Entry: 10141b29c; end: 10141b2a7; -[SCAppClipServiceEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141b29c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7dff8;
  func_0x000107c61428(param_1 + _DAT_112d7dff8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141b2a8; end: 10141b2b3; -[SCAppClipServiceEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141b2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7dff8;
  func_0x000107c61428(param_1 + _DAT_112d7dff8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141b2b4; end: 10141b2bf; -[SCAppClipServiceEntryPoint deeplinkHandingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141b2b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7e000;
  func_0x000107c61428(param_1 + _DAT_112d7e000,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10141b2c0; end: 10141b303;  */

void FUN_10141b2c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10141b304; end: 10141b30f; -[SCAppClipServiceEntryPoint setDeeplinkHandingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141b304(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7e000;
  func_0x000107c61428(param_1 + _DAT_112d7e000,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141b310; end: 10141b363;  */

void FUN_10141b310(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10141b364; end: 10141b4f7;  */

/* WARNING: Possible PIC construction at 0x00010141b454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010141b464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010141b490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141b468) */
/* WARNING: Removing unreachable block (ram,0x00010141b458) */
/* WARNING: Removing unreachable block (ram,0x00010141b494) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10141b364(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c41528();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    FUN_10141b27c(0);
    func_0x000107c613fc();
    func_0x0001000285a8(0x112d7df48,&UNK_10d93c2b0);
    func_0x000107c613fc();
    func_0x000107c61174(lVar1);
    func_0x000107c61174(unaff_x20);
    func_0x0001000bdd8c(FUN_10141b1dc,0);
    func_0x0001000285a8(0x112d7df50,&UNK_10d93c7d0);
    func_0x000107c414e4(unaff_x20);
    func_0x000107c61180();
    func_0x0001000bda74();
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10141b4f8; end: 10141b51f; -[SCAppClipServiceEntryPoint begin] */

void FUN_10141b4f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10141b364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10141b520; end: 10141b5bb; -[SCAppClipServiceEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141b520(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112d7e008);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar3);
    FUN_10141bc40();
    func_0x000107c61574(lVar3);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 10141b5bc; end: 10141b753;  */

void FUN_10141b5bc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10c1e20)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef3e1e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AppClipServiceEntryPoint/SCAppClipServiceEntryPoint.swift",0x39,2,0x2a,
                            0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10141b754);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53f3c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10141b754; end: 10141b7ff; -[SCAppClipServiceEntryPoint setValue:forIvarName:] */

void FUN_10141b754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10141b5bc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10141b800; end: 10141b873; -[SCAppClipServiceEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141b800(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d7dff8,0);
  func_0x000107c61614(param_1 + _DAT_112d7e000,0);
  *(undefined8 *)(param_1 + _DAT_112d7e008) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10141b874; end: 10141b8a7;  */

void FUN_10141b874(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10141b8a8; end: 10141b8ef; -[SCAppClipServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141b8a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7dff8);
  func_0x000107c61610(param_1 + _DAT_112d7e000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7e008));
  return;
}



/* Entry: 10141b8f0; end: 10141b90f;  */

void FUN_10141b8f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d4478);
  return;
}


