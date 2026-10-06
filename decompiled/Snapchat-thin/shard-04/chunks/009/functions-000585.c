/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10399d770; end: 10399d7af;  */

void FUN_10399d770(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10399d7b0; end: 10399d83b; -[SCThirdPartyLoginAmazonHandshakeData description] */

void FUN_10399d7b0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x00010399d10c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c61174(param_1);
  FUN_10399d83c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x00010399ddec(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      0x10399d10c);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10399d83c; end: 10399da53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399d83c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 auStack_70 [2];
  
  lVar3 = 0x112fbd578;
  func_0x0001000285a8(0x112fbd578,&UNK_10dc2ea70);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = (undefined8 *)(lVar5 - extraout_x12);
  lVar3 = 0;
  func_0x00010399d10c();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x38);
  (*pcVar9)(puVar6,1,1,lVar3);
  if (*(char *)(param_2 + _DAT_112fbd560) == '\x01') {
    lVar10 = *(long *)(param_2 + _DAT_112fbd570);
    auStack_70[1] = param_1;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10399da54);
      (*pcVar9)();
    }
    func_0x00010399de28(puVar6);
    lVar2 = _DAT_11380c058;
    *puVar6 = *(undefined8 *)(lVar10 + _DAT_112fbd5b0);
    uVar7 = ((undefined8 *)(lVar10 + _DAT_112fbd5b8))[1];
    puVar6[1] = *(undefined8 *)(lVar10 + _DAT_112fbd5b8);
    puVar6[2] = uVar7;
    lVar4 = 0;
    FUN_10399d354();
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))((long)puVar6 + (long)iVar1,lVar10 + lVar2,lVar4);
    func_0x000107c6159c(puVar6,lVar3,1);
    func_0x000107c61434(uVar7);
    param_1 = auStack_70[1];
  }
  else {
    func_0x00010399de28(puVar6);
    uVar7 = *(undefined8 *)(param_2 + _DAT_112fbd568);
    *puVar6 = uVar7;
    func_0x000107c6159c(puVar6,lVar3,0);
    func_0x000107c614b0(uVar7);
  }
  (*pcVar9)(puVar6,0,1,lVar3);
  func_0x00010399de70(puVar6,lVar5);
  lVar10 = lVar5;
  (**(code **)(lVar8 + 0x30))(lVar5,1,lVar3);
  if ((int)lVar10 != 1) {
    func_0x00010399de28(puVar6);
    func_0x000107c61170(param_2);
    func_0x00010399dec0(lVar5,param_1,0x10399d10c);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10399da50);
  (*pcVar9)();
}



/* Entry: 10399da54; end: 10399da9b; -[SCThirdPartyLoginAmazonHandshakeData init] */

void FUN_10399da54(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "ThirdPartyLoginServices/ThirdPartyLoginAmazonHandshakeDataWrapper.swift",0x47
                      ,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399da9c);
  (*pcVar1)();
}



/* Entry: 10399da9c; end: 10399da9f; -[SCThirdPartyLoginAmazonHandshakeData copyWithZone:] */

void FUN_10399da9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10399daa0; end: 10399db17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399daa0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112fbd560) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fbd568) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbd570) = 0;
  func_0x000107c614b0(param_1);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399db18; end: 10399dbff; +[SCThirdPartyLoginAmazonHandshakeData handshakeErrorWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399db18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fbd560) = 0;
  *(undefined8 *)(lVar2 + _DAT_112fbd568) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112fbd570) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10399dc00; end: 10399dcdb; +[SCThirdPartyLoginAmazonHandshakeData loginDataWithData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399dc00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fbd560) = 1;
  *(undefined8 *)(lVar2 + _DAT_112fbd568) = 0;
  *(undefined8 *)(lVar2 + _DAT_112fbd570) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10399dcdc; end: 10399dd7f; -[SCThirdPartyLoginAmazonHandshakeData matchHandshakeError:loginData:] */

/* WARNING: Possible PIC construction at 0x00010399dd64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399dd68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399dcdc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_112fbd560) != '\x01') {
    lVar2 = *(long *)(param_1 + _DAT_112fbd568);
    if (lVar2 == 0) {
      func_0x000107c61174();
    }
    else {
      func_0x000107c61174();
      func_0x000107c5ed2c(lVar2);
    }
    (**(code **)(param_3 + 0x10))(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (*(long *)(param_1 + _DAT_112fbd570) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010399dd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399dd80);
  (*pcVar1)();
}



/* Entry: 10399dd80; end: 10399ddb3;  */

void FUN_10399dd80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10399ddb4; end: 10399df03; -[SCThirdPartyLoginAmazonHandshakeData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ddb4(long param_1)

{
  func_0x000107c614ac(*(undefined8 *)(param_1 + _DAT_112fbd568));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbd570));
  return;
}



/* Entry: 10399df04; end: 10399df23;  */

void FUN_10399df04(void)

{
  func_0x000107c61168(&PTR_PTR_11290b3b8);
  return;
}



/* Entry: 10399df24; end: 10399e08b;  */

int FUN_10399df24(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10399dfa0;
        goto LAB_10399df84;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10399df84:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10399dfa0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10399e08c; end: 10399e0cb;  */

void FUN_10399e08c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbd5a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2eadc;
  func_0x000107c61520(&UNK_10dc2eadc,&UNK_1106b6888);
  puRam0000000112fbd5a8 = puVar1;
  return;
}



/* Entry: 10399e0cc; end: 10399e193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10399e0cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar7 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd5b0) = *param_1;
  uVar2 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbd5b8);
  *puVar1 = param_1[1];
  puVar1[1] = uVar2;
  lVar6 = 0;
  FUN_10399d354();
  lVar5 = _DAT_11380c058;
  iVar3 = *(int *)(lVar6 + 0x18);
  lVar6 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(unaff_x20 + lVar5,(long)param_1 + (long)iVar3,lVar6);
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61434(uVar2);
  func_0x000107c61154(auStack_50,puVar4);
  FUN_10399e458(param_1);
  return puVar7;
}



/* Entry: 10399e194; end: 10399e1a3; -[SCThirdPartyLoginData loginSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10399e194(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fbd5b0);
}



/* Entry: 10399e1a4; end: 10399e1ef; -[SCThirdPartyLoginData accessToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399e1a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fbd5b8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fbd5b8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10399e1f0; end: 10399e287; -[SCThirdPartyLoginData expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399e1f0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_11380c058,lVar1);
  func_0x000107c5ee70();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10399e288; end: 10399e347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10399e288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd5b0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbd5b8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar2 = _DAT_11380c058;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_4,lVar3);
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_4,lVar3);
  return puVar4;
}



/* Entry: 10399e348; end: 10399e457; -[SCThirdPartyLoginData initWithLoginSource:accessToken:expirationDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10399e348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec();
  func_0x000107c5ee94(lVar5,param_5);
  *(undefined8 *)(param_1 + _DAT_112fbd5b0) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd5b8);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  (**(code **)(lVar6 + 0x10))(param_1 + _DAT_11380c058,lVar5,lVar3);
  plVar4 = &lStack_70;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar6 + 8))(lVar5,lVar3);
  return plVar4;
}



/* Entry: 10399e458; end: 10399e493;  */

undefined8 FUN_10399e458(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10399d354();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10399e494; end: 10399e497; -[SCThirdPartyLoginData copyWithZone:] */

void FUN_10399e494(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10399e498; end: 10399e5b7;  */

/* WARNING: Possible PIC construction at 0x00010399e4f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010399e544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010399e5a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399e548) */
/* WARNING: Removing unreachable block (ram,0x00010399e4f4) */
/* WARNING: Removing unreachable block (ram,0x00010399e5a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399e498(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4f535f4e49474f4c;
  func_0x000107c5fadc(0x4f535f4e49474f4c,0xec00000045435255);
  func_0x000107c42740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10399e5b8; end: 10399e607; -[SCThirdPartyLoginData encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x00010399e5f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399e5f4) */

void FUN_10399e5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10399e498(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10399e608; end: 10399e637;  */

void FUN_10399e608(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_10399e638(param_1);
  return;
}



/* Entry: 10399e638; end: 10399e9f7;  */

undefined8 FUN_10399e638(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 auStack_c0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)auStack_c0 - extraout_x8);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0x4f535f4e49474f4c;
  func_0x000107c5fadc(0x4f535f4e49474f4c,0xec00000045435255);
  uVar3 = param_1;
  func_0x000107c41470();
  func_0x000107c61170(uVar2);
  if (uVar3 < 3) {
    uVar2 = 0x545f535345434341;
    func_0x000107c5fadc(0x545f535345434341,0xec0000004e454b4f);
    uVar3 = param_1;
    func_0x000107c41478();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x000107c60234(&uStack_a0,uVar3);
      func_0x000107c615e8(uVar3);
    }
    puVar7 = PTR___sypN_11034f1a8;
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      func_0x000107c61170(param_1);
      uVar2 = 0x112d387f8;
      puVar7 = &UNK_10d902650;
      puVar5 = &uStack_80;
    }
    else {
      puVar4 = auStack_c0 + 2;
      func_0x000107c6147c(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar4 & 1) == 0) goto LAB_10399e828;
      auStack_c0[0] = auStack_c0[2];
      auStack_c0[1] = auStack_c0[3];
      uVar2 = 0x4954415249505845;
      func_0x000107c5fadc(0x4954415249505845,0xef455441445f4e4f);
      uVar3 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (uVar3 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x000107c60234(&uStack_a0,uVar3);
        func_0x000107c615e8(uVar3);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(auStack_c0[1]);
        FUN_10399e9f8(&uStack_80,0x112d387f8,&UNK_10d902650);
        (**(code **)(lVar9 + 0x38))(puVar5,1,1,lVar1);
      }
      else {
        puVar4 = puVar5;
        func_0x000107c6147c(puVar5,&uStack_80,puVar7 + 8,lVar1,6);
        (**(code **)(lVar9 + 0x38))(puVar5,(uint)puVar4 ^ 1,1,lVar1);
        puVar4 = puVar5;
        (**(code **)(lVar9 + 0x30))(puVar5,1,lVar1);
        if ((int)puVar4 != 1) {
          (**(code **)(lVar9 + 0x20))(lVar8,puVar5,lVar1);
          uVar2 = auStack_c0[1];
          uVar6 = auStack_c0[0];
          func_0x000107c5fadc(auStack_c0[0],auStack_c0[1]);
          func_0x000107c6142c(uVar2);
          func_0x000107c5ee70();
          func_0x000107c47578();
          func_0x000107c61170(param_1);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar2);
          (**(code **)(lVar9 + 8))(lVar8,lVar1);
          return unaff_x20;
        }
        func_0x000107c61170(param_1);
        func_0x000107c6142c(auStack_c0[1]);
      }
      uVar2 = 0x112d373d8;
      puVar7 = &UNK_10d9014c0;
    }
    FUN_10399e9f8(puVar5,uVar2,puVar7);
  }
  else {
LAB_10399e828:
    func_0x000107c61170(param_1);
  }
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10399e9f8; end: 10399ea37;  */

undefined8 FUN_10399e9f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10399ea38; end: 10399ea5f; -[SCThirdPartyLoginData initWithCoder:] */

void FUN_10399ea38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10399e638();
  return;
}



/* Entry: 10399ea60; end: 10399eb2f; -[SCThirdPartyLoginData description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ea60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  undefined8 *puVar7;
  
  lVar5 = 0;
  FUN_10399d354();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar4 = _DAT_11380c058;
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fbd5b8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112fbd5b8))[1];
  *puVar7 = *(undefined8 *)(param_1 + _DAT_112fbd5b0);
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar6) = uVar1;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar6) = uVar2;
  iVar3 = *(int *)(lVar5 + 0x18);
  lVar6 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))
            ((undefined1 *)((long)puVar7 + (long)iVar3),param_1 + lVar4,lVar6);
  func_0x000107c61434(uVar2);
  FUN_10399e458(puVar7);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10399eb30; end: 10399ebab; -[SCThirdPartyLoginData init] */

void FUN_10399eb30(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "ThirdPartyLoginServices/ThirdPartyLoginDataWrapper.swift",0x38,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399eb78);
  (*pcVar1)();
}



/* Entry: 10399ebac; end: 10399ebfb; -[SCThirdPartyLoginData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ebac(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fbd5b8 + 8));
  lVar1 = _DAT_11380c058;
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x00010399ebf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 10399ebfc; end: 10399ec03;  */

void FUN_10399ebfc(void)

{
  if (lRam0000000112fbd5e8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e794ebc);
  return;
}



/* Entry: 10399ec04; end: 10399ec3b;  */

void FUN_10399ec04(undefined8 param_1)

{
  if (lRam0000000112fbd5e8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e794ebc);
  return;
}



/* Entry: 10399ec3c; end: 10399ecbf;  */

void FUN_10399ec3c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_30 = &UNK_10dc2eb98;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 10399ecc0; end: 10399ed47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10399ecc0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a9ad88();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fbd5f8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fbd600) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399ed48);
  (*pcVar1)();
}



/* Entry: 10399ed48; end: 10399eda7; -[_TtC36AdlActiveUserSessionScopeGraphBridge51AdlActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_10399ed48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdlActiveUserSessionScopeGraphBridge.AdlActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399ed74);
  (*pcVar1)();
}



/* Entry: 10399eda8; end: 10399eddf; -[_TtC36AdlActiveUserSessionScopeGraphBridge51AdlActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010399edc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399edc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399eda8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbd5f8));
  return;
}



/* Entry: 10399ede0; end: 10399ee07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ede0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fbd600),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fbd5f8));
  return;
}



/* Entry: 10399ee08; end: 10399eea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10399ee08(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fbdb58);
  *(undefined8 *)(unaff_x20 + _DAT_112fbd630) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbd638) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10399eea4; end: 10399ef03; -[_TtC36AdlActiveUserSessionScopeGraphBridge35SCLegacyTalkServicesSaberEntryPoint init] */

void FUN_10399eea4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdlActiveUserSessionScopeGraphBridge.SCLegacyTalkServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399eed0);
  (*pcVar1)();
}



/* Entry: 10399ef04; end: 10399ef97; -[_TtC36AdlActiveUserSessionScopeGraphBridge35SCLegacyTalkServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ef04(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbd630));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbd638));
  return;
}



/* Entry: 10399ef98; end: 10399ef9f;  */

undefined8 FUN_10399ef98(void)

{
  return 0;
}



/* Entry: 10399efa0; end: 10399f003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10399efa0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbdb60);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10399f004; end: 10399f00b;  */

void FUN_10399f004(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10399f00c; end: 10399f0ab;  */

void FUN_10399f00c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10399f0ac; end: 10399f0cb;  */

void FUN_10399f0ac(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10399f0cc; end: 10399f12f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10399f0cc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbdb68);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10399f130; end: 10399f137;  */

void FUN_10399f130(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10399f138; end: 10399f1d7;  */

void FUN_10399f138(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10399f1d8; end: 10399f1f7;  */

void FUN_10399f1d8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10399f1f8; end: 10399f25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10399f1f8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbdb70);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10399f25c; end: 10399f263;  */

void FUN_10399f25c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10399f264; end: 10399f303;  */

void FUN_10399f264(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10399f304; end: 10399f323;  */

void FUN_10399f304(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10399f324; end: 10399f387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10399f324(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbdb78);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10399f388; end: 10399f38f;  */

void FUN_10399f388(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10399f390; end: 10399f42f;  */

void FUN_10399f390(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10399f430; end: 10399f44f;  */

void FUN_10399f430(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10399f450; end: 10399f4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10399f450(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbdb80);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10399f4b4; end: 10399f4bb;  */

void FUN_10399f4b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10399f4bc; end: 10399f55b;  */

void FUN_10399f4bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10399f55c; end: 10399f57b;  */

void FUN_10399f55c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10399f57c; end: 10399f5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10399f57c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbdb88);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10399f5e0; end: 10399f5e7;  */

void FUN_10399f5e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10399f5e8; end: 10399f687;  */

void FUN_10399f5e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10399f688; end: 10399f6a7;  */

void FUN_10399f688(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10399f6a8; end: 10399f76b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399f6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbdb58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbdb60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbdb68) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbdb70) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fbdb78) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fbdb80) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fbdb88) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399f76c; end: 10399f7cb; -[_TtC36AdlActiveUserSessionScopeGraphBridge44AdlActiveUserSessionScopeGraphBridgeServices init] */

void FUN_10399f76c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdlActiveUserSessionScopeGraphBridge.AdlActiveUserSessionScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399f798);
  (*pcVar1)();
}



/* Entry: 10399f7cc; end: 10399f8af; -[_TtC36AdlActiveUserSessionScopeGraphBridge44AdlActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010399f7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010399f808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010399f828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399f80c) */
/* WARNING: Removing unreachable block (ram,0x00010399f7ec) */
/* WARNING: Removing unreachable block (ram,0x00010399f82c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399f7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbdb58));
  return;
}



/* Entry: 10399f8b0; end: 10399f8e7;  */

undefined1  [16] FUN_10399f8b0(void)

{
  return ZEXT816(0x1106b6ad0);
}



/* Entry: 10399f8e8; end: 10399f92b; -[SCAdlActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_10399f8e8(undefined8 param_1)

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



/* Entry: 10399f92c; end: 10399f95f;  */

void FUN_10399f92c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10399f960; end: 10399f9a7; -[SCAdlActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010399f98c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399f990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399f960(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbdbe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbdbe8));
  return;
}



/* Entry: 10399f9a8; end: 10399f9c7;  */

void FUN_10399f9a8(void)

{
  func_0x000107c61168(&PTR_PTR_11290b7f0);
  return;
}



/* Entry: 10399f9c8; end: 10399fa0b; -[SCSCLegacyTalkServicesSaberEntryPoint end] */

void FUN_10399f9c8(undefined8 param_1)

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



/* Entry: 10399fa0c; end: 10399fa3f;  */

void FUN_10399fa0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10399fa40; end: 10399fa97; -[SCSCLegacyTalkServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010399fa7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399fa80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399fa40(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbdc20);
  func_0x000107c61610(param_1 + _DAT_112fbdc28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbdc30));
  return;
}



/* Entry: 10399fa98; end: 10399fab7;  */

void FUN_10399fa98(void)

{
  func_0x000107c61168(&PTR_PTR_11290b8b8);
  return;
}



/* Entry: 10399fab8; end: 10399fac3; -[SCSCSoundServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399fab8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbdc68;
  func_0x000107c61428(param_1 + _DAT_112fbdc68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10399fac4; end: 10399facf; -[SCSCSoundServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399fac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbdc68;
  func_0x000107c61428(param_1 + _DAT_112fbdc68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10399fad0; end: 10399fadb; -[SCSCSoundServicesSaberServiceProvider adlActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399fad0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbdc70;
  func_0x000107c61428(param_1 + _DAT_112fbdc70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10399fadc; end: 10399fb1f;  */

void FUN_10399fadc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10399fb20; end: 10399fb2b; -[SCSCSoundServicesSaberServiceProvider setAdlActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399fb20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbdc70;
  func_0x000107c61428(param_1 + _DAT_112fbdc70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10399fb2c; end: 10399fb7f;  */

void FUN_10399fb2c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10399fb80; end: 10399fd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10399fb80(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d9c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010399f030();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbdb60);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbdc78);
      *(long *)(unaff_x20 + _DAT_112fbdc78) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "AdlActiveUserSessionScopeGraphBridge/SCSCSoundServicesSaberServiceProvider.swift"
                      ,0x50,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399fcac);
  (*pcVar1)();
}



/* Entry: 10399fd94; end: 10399fdc7; -[SCSCSoundServicesSaberServiceProvider provide] */

void FUN_10399fd94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10399fb80();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10399fdc8; end: 10399fdfb; -[SCSCSoundServicesSaberServiceProvider __safeProvide] */

void FUN_10399fdc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010399fcac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10399fdfc; end: 10399fe3f; -[SCSCSoundServicesSaberServiceProvider end] */

void FUN_10399fdfc(undefined8 param_1)

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



/* Entry: 10399fe40; end: 10399ffd7;  */

void FUN_10399fe40(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e7fa20)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f1805e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdlActiveUserSessionScopeGraphBridge/SCSCSoundServicesSaberServiceProvider.swift"
                            ,0x50,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10399ffd8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52528();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10399ffd8; end: 1039a0083; -[SCSCSoundServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10399ffd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10399fe40(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039a0084; end: 1039a00f7; -[SCSCSoundServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a0084(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbdc68,0);
  func_0x000107c61614(param_1 + _DAT_112fbdc70,0);
  *(undefined8 *)(param_1 + _DAT_112fbdc78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a00f8; end: 1039a012b;  */

void FUN_1039a00f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a012c; end: 1039a0173; -[SCSCSoundServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a012c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbdc68);
  func_0x000107c61610(param_1 + _DAT_112fbdc70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbdc78));
  return;
}



/* Entry: 1039a0174; end: 1039a0193;  */

void FUN_1039a0174(void)

{
  func_0x000107c61168(&PTR_PTR_112fbdcc0);
  return;
}



/* Entry: 1039a0194; end: 1039a019f; -[SCSCTalkServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a0194(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbdd28;
  func_0x000107c61428(param_1 + _DAT_112fbdd28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a01a0; end: 1039a01ab; -[SCSCTalkServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a01a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbdd28;
  func_0x000107c61428(param_1 + _DAT_112fbdd28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a01ac; end: 1039a01b7; -[SCSCTalkServicesSaberServiceProvider adlActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a01ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbdd30;
  func_0x000107c61428(param_1 + _DAT_112fbdd30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a01b8; end: 1039a01fb;  */

void FUN_1039a01b8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039a01fc; end: 1039a0207; -[SCSCTalkServicesSaberServiceProvider setAdlActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a01fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbdd30;
  func_0x000107c61428(param_1 + _DAT_112fbdd30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a0208; end: 1039a025b;  */

void FUN_1039a0208(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


