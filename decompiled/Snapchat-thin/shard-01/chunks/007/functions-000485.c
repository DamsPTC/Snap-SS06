/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101409628; end: 10140965b; -[_TtC15COSServicesImplP33_94FB7E36DA0D38B23C6840CAA1AF469A12COSTwoFAView initWithCoder:] */

undefined8 FUN_101409628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10140a88c();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 10140965c; end: 1014098d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140965c(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_c0;
  lVar7 = *(long *)(unaff_x20 + _DAT_112d7d0c0);
  lVar8 = lVar7;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar7);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = &UNK_1103b3c50;
  func_0x000107c613fc(&UNK_1103b3c50,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  puVar3 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10140a85c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x100e1779c;
  puStack_78 = &UNK_1103b3c68;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  pcStack_a0 = FUN_101409b3c;
  uStack_98 = 0;
  puStack_c0 = puVar6;
  uStack_b8 = 0x42000000;
  uStack_b0 = 0x100e17304;
  puStack_a8 = &UNK_1103b3c90;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c61174();
  func_0x000107c47be0(puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(puStack_68);
  bVar1 = *(byte *)(unaff_x20 + _DAT_112d7d108);
  puVar2 = PTR_PTR_1126af358;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      func_0x000107c61168(PTR_PTR_1126af358);
      func_0x000107c40800();
      goto LAB_10140980c;
    }
    lVar8 = ((undefined8 *)(unaff_x20 + _DAT_112d7d100))[1];
    if (lVar8 == 0) {
      uVar10 = 0;
      lVar9 = -0x2000000000000000;
    }
    else {
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d7d100);
      lVar9 = lVar8;
    }
    func_0x000107c61168(PTR_PTR_1126af358);
    func_0x000107c61434(lVar8);
    func_0x000107c5fadc(uVar10,lVar9);
    func_0x000107c6142c(lVar9);
    func_0x000107c407f8(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
  }
  else {
    if (bVar1 != 2) goto LAB_1014098b0;
    func_0x000107c61168(PTR_PTR_1126af358);
    func_0x000107c40800();
LAB_10140980c:
    func_0x000107c61180();
  }
  puVar6 = PTR_PTR_1126af308;
  func_0x000107c610f8(PTR_PTR_1126af308);
  func_0x000107c464ec();
  func_0x000107c42c1c(lVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
LAB_1014098b0:
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1014098d8; end: 101409b3b;  */

/* WARNING: Possible PIC construction at 0x000101409928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014099c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101409ac8) */
/* WARNING: Removing unreachable block (ram,0x000101409a74) */
/* WARNING: Removing unreachable block (ram,0x000101409a20) */
/* WARNING: Removing unreachable block (ram,0x0001014099cc) */
/* WARNING: Removing unreachable block (ram,0x00010140992c) */
/* WARNING: Removing unreachable block (ram,0x000101409b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014098d8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112d7d0d0);
    *(long *)(param_2 + _DAT_112d7d0d0) = param_1;
    func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 101409b3c; end: 101409b5f;  */

void FUN_101409b3c(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 101409b60; end: 101409c7f;  */

/* WARNING: Possible PIC construction at 0x000101409c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101409c3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101409b60(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7d0f8);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7d0c0);
  func_0x000107c615f0(lVar2);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar1 = &UNK_1103b3c00;
    func_0x000107c613fc(&UNK_1103b3c00,0x18,7);
    *(long *)(puVar1 + 0x10) = lVar2;
    pcStack_40 = FUN_10140a828;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_1103b3c18;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c615f0(lVar2);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c5e2a4(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101409c80; end: 101409ca7; -[_TtC15COSServicesImplP33_94FB7E36DA0D38B23C6840CAA1AF469A12COSTwoFAView twoFAExited] */

void FUN_101409c80(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101409b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101409ca8; end: 101409cab; -[_TtC15COSServicesImplP33_94FB7E36DA0D38B23C6840CAA1AF469A12COSTwoFAView twoFAFinishedWithLoginSuccess:] */

void FUN_101409ca8(void)

{
  return;
}



/* Entry: 101409cac; end: 101409d2f; -[_TtC15COSServicesImplP33_94FB7E36DA0D38B23C6840CAA1AF469A12COSTwoFAView twoFACOSFinishedWithRecoveryCodeUsed:] */

/* WARNING: Possible PIC construction at 0x000101409ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101409cec) */
/* WARNING: Removing unreachable block (ram,0x000101409d08) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101409cac(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101409d30; end: 101409e23; -[_TtC15COSServicesImplP33_94FB7E36DA0D38B23C6840CAA1AF469A12COSTwoFAView twoFACOSSMSSubmitCode:wasAutofilled:rememberDevice:success:failure:] */

/* WARNING: Possible PIC construction at 0x000101409e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101409e08) */

void FUN_101409d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1103b3de0;
  func_0x000107c613fc(&UNK_1103b3de0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  puVar2 = &UNK_1103b3e08;
  func_0x000107c613fc(&UNK_1103b3e08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  func_0x000107c61174(param_1);
  FUN_10140a964(param_3,param_2,param_5,0x10140affc,puVar1,0x10140afa8,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101409e24; end: 101409fd3;  */

/* WARNING: Possible PIC construction at 0x000101409f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101409f08) */
/* WARNING: Removing unreachable block (ram,0x000101409f74) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101409e24(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7d0d8);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c615f0();
    func_0x000107c30ef0();
    lVar4 = lVar3;
    func_0x000107c4e5ec();
    func_0x000107c30ef4();
    if ((int)lVar4 == 0) {
      func_0x000105219840();
      func_0x000107c61180();
      if (lVar1 == 0) {
        lVar4 = 0;
        param_2 = 0;
      }
      else {
        lVar4 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
      }
      (*param_3)(lVar4,param_2);
    }
    else {
      lVar1 = unaff_x20 + _DAT_112d7d0c8;
      func_0x000107c61618();
      if (lVar1 == 0) {
        (*param_1)();
      }
      else {
        puVar2 = &UNK_1103b3bd8;
        func_0x000107c613fc(&UNK_1103b3bd8,0x20,7);
        *(code **)(puVar2 + 0x10) = param_3;
        *(undefined8 *)(puVar2 + 0x18) = param_4;
        lVar3 = lVar1 + 0x20;
        func_0x000107c61618();
        if (lVar3 == 0) {
          func_0x000107c6157c(param_4);
          func_0x000107c61574(puVar2);
          lVar3 = lVar1;
        }
        else {
          lVar4 = *(long *)(lVar1 + 0x28);
          lVar1 = lVar3;
          func_0x000107c614f0();
          pcVar5 = *(code **)(lVar4 + 8);
          func_0x000107c6157c(param_4);
          (*pcVar5)(FUN_10140a820,puVar2,lVar1,lVar4);
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 101409fd4; end: 10140a05f;  */

void FUN_101409fd4(long param_1,long param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  lVar2 = param_1;
  if (param_2 == 0) {
    func_0x0001052198e8();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar2 = 0;
      lVar1 = 0;
    }
    else {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
  }
  func_0x000107c61434(param_2);
  (*param_3)(lVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 10140a060; end: 10140a17b; -[_TtC15COSServicesImplP33_94FB7E36DA0D38B23C6840CAA1AF469A12COSTwoFAView twoFACOSSMSResendCodeWithSuccess:failure:] */

/* WARNING: Possible PIC construction at 0x00010140a0fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010140a100) */

void FUN_10140a060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1103b3d90;
  func_0x000107c613fc(&UNK_1103b3d90,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_1103b3db8;
  func_0x000107c613fc(&UNK_1103b3db8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_101409e24(0x10140b004,puVar1,0x10140afa4,puVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10140a17c; end: 10140a24b;  */

void FUN_10140a17c(long param_1,undefined1 *param_2,long param_3,code *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [24];
  
  puVar2 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar2,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puVar3 = param_2;
    if (param_2 == (undefined1 *)0x0) {
      lVar1 = param_3;
      func_0x0001052198e8();
      func_0x000107c61180();
      if (lVar1 == 0) {
        param_1 = 0;
        puVar3 = (undefined1 *)0x0;
      }
      else {
        param_1 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        puVar3 = puVar2;
      }
    }
    func_0x000107c61434(param_2);
    (*param_4)(param_1,puVar3);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(puVar3);
  }
  return;
}



/* Entry: 10140a24c; end: 10140a33f; -[_TtC15COSServicesImplP33_94FB7E36DA0D38B23C6840CAA1AF469A12COSTwoFAView twoFACOSTOTPSubmitCode:wasAutofilled:rememberDevice:success:failure:] */

/* WARNING: Possible PIC construction at 0x00010140a320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010140a324) */

void FUN_10140a24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1103b3cc8;
  func_0x000107c613fc(&UNK_1103b3cc8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  puVar2 = &UNK_1103b3cf0;
  func_0x000107c613fc(&UNK_1103b3cf0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  func_0x000107c61174(param_1);
  func_0x00010140ac28(param_3,param_2,param_5,0x10140a870,puVar1,0x10140a884,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10140a340; end: 10140a3b7; -[_TtC15COSServicesImplP33_94FB7E36DA0D38B23C6840CAA1AF469A12COSTwoFAView twoFACOSTOTPSwitchToSMSWithSuccess:failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140a340(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112d7d0f0);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar1 = lVar2;
    func_0x000107c615f0(lVar2);
    func_0x000107c30ef0();
    func_0x000107c4e5ec(lVar2,param_2,lVar1);
    func_0x000107c30ef4(lVar1);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10140a3b8; end: 10140a417; -[_TtC15COSServicesImplP33_94FB7E36DA0D38B23C6840CAA1AF469A12COSTwoFAView initWithFrame:] */

void FUN_10140a3b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSTwoFAView",0x1c,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10140a3e4);
  (*pcVar1)();
}



/* Entry: 10140a418; end: 10140a4c3; -[_TtC15COSServicesImplP33_94FB7E36DA0D38B23C6840CAA1AF469A12COSTwoFAView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140a418(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7d0c0));
  FUN_100cb0e78(param_1 + _DAT_112d7d0c8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7d0d0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7d0d8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7d0e0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7d0e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7d0f0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7d0f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7d100 + 8))
  ;
  return;
}



/* Entry: 10140a4c4; end: 10140a4e3;  */

void FUN_10140a4c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d2c80);
  return;
}



/* Entry: 10140a4e4; end: 10140a64b;  */

int FUN_10140a4e4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10140a560;
        goto LAB_10140a544;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10140a544:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10140a560:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10140a64c; end: 10140a68b;  */

void FUN_10140a64c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7d138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93bb24;
  func_0x000107c61520(&UNK_10d93bb24,&UNK_1103b3858);
  puRam0000000112d7d138 = puVar1;
  return;
}



/* Entry: 10140a68c; end: 10140a6b7;  */

void FUN_10140a68c(long param_1,long param_2)

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



/* Entry: 10140a6b8; end: 10140a6fb;  */

void FUN_10140a6b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10140a6fc; end: 10140a81f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140a6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20 + _DAT_112d7d0c8;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0f8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7d100);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7d108) = 3;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0c0) = param_5;
  *(undefined8 *)(lVar3 + 8) = param_7;
  func_0x000107c61604();
  FUN_10140a4c4();
  puVar2 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61174(param_5);
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,puVar2);
  return;
}



/* Entry: 10140a820; end: 10140a827;  */

void FUN_10140a820(long param_1,long param_2)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = param_2;
  lVar3 = param_1;
  if (param_2 == 0) {
    func_0x0001052198e8();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar3 = 0;
      lVar2 = 0;
    }
    else {
      lVar3 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
  }
  func_0x000107c61434(param_2);
  (*pcVar1)(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 10140a828; end: 10140a85b;  */

void FUN_10140a828(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c30ef0();
  func_0x000107c4e5ec(uVar1);
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b97f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10140a85c; end: 10140a88b;  */

/* WARNING: Possible PIC construction at 0x000101409928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014099c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101409b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101409ac8) */
/* WARNING: Removing unreachable block (ram,0x000101409a74) */
/* WARNING: Removing unreachable block (ram,0x000101409a20) */
/* WARNING: Removing unreachable block (ram,0x0001014099cc) */
/* WARNING: Removing unreachable block (ram,0x00010140992c) */
/* WARNING: Removing unreachable block (ram,0x000101409b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140a85c(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d7d0d0);
    *(long *)(lVar2 + _DAT_112d7d0d0) = param_1;
    func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10140a88c; end: 10140a963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140a88c(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d7d0c8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7d0f8) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7d100);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7d108) = 3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSTwoFAView.swift",0x22,2,0xcd,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10140a964);
  (*pcVar3)();
}



/* Entry: 10140a964; end: 10140aeeb;  */

/* WARNING: Possible PIC construction at 0x00010140aacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010140ab18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010140abcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010140aad0) */
/* WARNING: Removing unreachable block (ram,0x00010140abd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140a964(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112d7d0e0);
  if (lVar5 != 0) {
    lVar1 = lVar5;
    func_0x000107c615f0(lVar5);
    func_0x000107c30ef0();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c30ef8(lVar1,param_1);
    func_0x000107c61170(param_1);
    func_0x000107c30f00(lVar1,param_3 & 1);
    func_0x000107c4e5ec(lVar5);
    func_0x000107c30ef4(lVar1);
    lVar6 = _DAT_112d7d0c8;
    lVar1 = unaff_x20 + _DAT_112d7d0c8;
    func_0x000107c61618();
    if (lVar1 == 0) {
      lVar6 = unaff_x20 + lVar6;
      func_0x000107c61618();
      if (lVar6 != 0) {
        puVar2 = &UNK_1103b3d18;
        func_0x000107c613fc(&UNK_1103b3d18,0x18,7);
        func_0x000107c61614(puVar2 + 0x10);
        puVar3 = &UNK_1103b3e58;
        func_0x000107c613fc(&UNK_1103b3e58,0x28,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        *(undefined8 *)(puVar3 + 0x18) = param_6;
        *(undefined8 *)(puVar3 + 0x20) = param_7;
        lVar1 = lVar6 + 0x20;
        func_0x000107c61618();
        if (lVar1 == 0) {
          func_0x000107c6157c(puVar2);
          func_0x000107c6157c(param_7);
          func_0x000107c61574(puVar2);
          func_0x000107c615e8(lVar5);
          func_0x000107c61574(puVar3);
          lVar5 = lVar6;
        }
        else {
          lVar6 = *(long *)(lVar6 + 0x28);
          lVar5 = lVar1;
          func_0x000107c614f0();
          pcVar4 = *(code **)(lVar6 + 8);
          func_0x000107c6157c(puVar2);
          func_0x000107c6157c(param_7);
          (*pcVar4)(0x10140af34,puVar3,lVar5,lVar6);
          func_0x000107c61574(puVar2);
          lVar5 = lVar1;
        }
      }
    }
    else {
      puVar2 = &UNK_1103b3d18;
      func_0x000107c613fc(&UNK_1103b3d18,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_1103b3e30;
      func_0x000107c613fc(&UNK_1103b3e30,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = param_4;
      *(undefined8 *)(puVar3 + 0x20) = param_5;
      lVar5 = lVar1 + 0x20;
      func_0x000107c61618();
      if (lVar5 == 0) {
        func_0x000107c6157c(puVar2);
        func_0x000107c6157c(param_5);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(puVar3);
        lVar5 = lVar1;
      }
      else {
        lVar6 = *(long *)(lVar1 + 0x28);
        lVar1 = lVar5;
        func_0x000107c614f0();
        pcVar4 = *(code **)(lVar6 + 0x20);
        func_0x000107c6157c(puVar2);
        func_0x000107c6157c(param_5);
        (*pcVar4)(FUN_10140aeec,puVar3,lVar1,lVar6);
        func_0x000107c61574(puVar2);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
    return;
  }
  return;
}



/* Entry: 10140aeec; end: 10140af4f;  */

void FUN_10140aeec(void)

{
  long unaff_x20;
  
  func_0x00010140a114(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10140af50; end: 10140b00b;  */

void FUN_10140af50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10140a17c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10140b00c; end: 10140b093;  */

void FUN_10140b00c(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec(param_3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 10140b094; end: 10140b12b; -[_TtC15COSServicesImpl17COSViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140b094(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7d1f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7d200);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7d208);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7d210);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSViewController.swift",0x27,2,0x7d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10140b12c);
  (*pcVar2)();
}



/* Entry: 10140b12c; end: 10140bea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140b12c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined *puVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  
  FUN_10140c570();
  func_0x000107c61154(&stack0xffffffffffffff78,PTR_s_loadView_112604be0);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c5a568();
  func_0x000107c61170(puVar5);
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10140be90);
    (*pcVar3)();
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af90();
  func_0x000107c61180();
  func_0x000107c52b50(lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar5);
  puVar7 = PTR_PTR_1126a6d20;
  func_0x000107c610f8(PTR_PTR_1126a6d20);
  func_0x000107c453e4();
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d7d148);
  func_0x000107c5ee20(uVar19,((undefined8 *)(unaff_x20 + _DAT_112d7d148))[1]);
  func_0x000107c532e8(puVar7);
  func_0x000107c61170(uVar19);
  func_0x0001000d224c(&puStack_d0);
  puVar5 = puStack_d0;
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d7d140);
  uVar19 = uVar18;
  FUN_10140d588(uVar18);
  func_0x000107c61574(puVar5);
  func_0x000107c5a6c8(puVar7);
  func_0x000107c615e8(uVar19);
  uVar19 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d7d158) != 0) {
    func_0x0001000d224c(&puStack_d0);
    puVar5 = puStack_d0;
    uVar19 = uVar18;
    func_0x00010140ca7c(uVar18);
    func_0x000107c61574(puVar5);
  }
  func_0x000107c570f4(puVar7);
  func_0x000107c615e8(uVar19);
  func_0x0001000d224c(&puStack_d0);
  puVar5 = puStack_d0;
  func_0x000107c53e14(puVar7);
  func_0x000107c615e8(puVar5);
  func_0x0001000d224c(&puStack_d0);
  puVar5 = puStack_d0;
  func_0x000107c52834(puVar7);
  func_0x000107c615e8(puVar5);
  puVar5 = (undefined *)0x0;
  if (*(long *)(unaff_x20 + _DAT_112d7d180) != 0) {
    func_0x0001000d224c(&puStack_d0);
    puVar5 = puStack_d0;
  }
  func_0x000107c5735c(puVar7);
  func_0x000107c615e8(puVar5);
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d7d198);
  func_0x000107c5ee20(uVar19,((undefined8 *)(unaff_x20 + _DAT_112d7d198))[1]);
  func_0x000107c52a38(puVar7);
  func_0x000107c61170(uVar19);
  func_0x000107c61428(0x112d7cf28,auStack_a0,0,0);
  uVar20 = uRam0000000112d7cf30;
  uVar19 = uRam0000000112d7cf28;
  func_0x000107c61434(uRam0000000112d7cf30);
  func_0x000107c5fadc(uVar19,uVar20);
  func_0x000107c6142c(uVar20);
  func_0x000107c55940(puVar7);
  func_0x000107c61170(uVar19);
  uVar19 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d7d160) != 0) {
    func_0x0001000d224c(&puStack_d0);
    puVar5 = puStack_d0;
    uVar19 = uVar18;
    func_0x00010140d080(uVar18);
    func_0x000107c61574(puVar5);
  }
  func_0x000107c535f4(puVar7);
  func_0x000107c615e8(uVar19);
  uVar19 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d7d168) != 0) {
    func_0x0001000d224c(&puStack_d0);
    puVar5 = puStack_d0;
    uVar19 = uVar18;
    func_0x00010140cce4(uVar18);
    func_0x000107c61574(puVar5);
  }
  func_0x000107c5a0f4(puVar7);
  func_0x000107c615e8(uVar19);
  uVar19 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d7d170) != 0) {
    func_0x0001000d224c(&puStack_d0);
    puVar5 = puStack_d0;
    uVar19 = uVar18;
    func_0x00010140cf4c(uVar18);
    func_0x000107c61574(puVar5);
  }
  func_0x000107c58dc8(puVar7);
  func_0x000107c615e8(uVar19);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(long *)(unaff_x20 + _DAT_112d7d178) == 0) {
    uVar18 = 0;
  }
  else {
    func_0x0001000d224c(&lStack_e8);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7d1e8);
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7d1f0);
    uVar19 = puVar1[1];
    uVar24 = puVar1[1];
    uVar23 = *puVar1;
    uVar20 = puVar2[1];
    uVar22 = puVar2[1];
    uVar21 = *puVar2;
    *(undefined ***)(lStack_e8 + 0x28) = &PTR_DAT_1103b3ec8;
    func_0x000107c61604(lStack_e8 + 0x20);
    puVar8 = &UNK_1103b4018;
    func_0x000107c613fc(&UNK_1103b4018,0x38,7);
    *(long *)(puVar8 + 0x10) = lStack_e8;
    *(undefined8 *)(puVar8 + 0x20) = uVar24;
    *(undefined8 *)(puVar8 + 0x18) = uVar23;
    *(undefined8 *)(puVar8 + 0x30) = uVar22;
    *(undefined8 *)(puVar8 + 0x28) = uVar21;
    pcStack_b0 = (code *)0x10140c930;
    puStack_d0 = puVar5;
    uStack_c8 = 0x42000000;
    pcStack_c0 = (code *)0x100f11710;
    puStack_b8 = &UNK_1103b4030;
    ppuVar9 = &puStack_d0;
    puStack_a8 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar8 = puStack_a8;
    func_0x000107c6157c(lStack_e8);
    func_0x000107c6157c(uVar19);
    func_0x000107c6157c(uVar20);
    func_0x000107c61574(puVar8);
    pcStack_b0 = (code *)0x10140c940;
    puStack_a8 = (undefined *)lStack_e8;
    puStack_d0 = puVar5;
    uStack_c8 = 0x42000000;
    pcStack_c0 = FUN_100f10508;
    puStack_b8 = &UNK_1103b4058;
    ppuVar10 = &puStack_d0;
    func_0x000107c60bc4(ppuVar10);
    puVar8 = puStack_a8;
    func_0x000107c6157c(lStack_e8);
    func_0x000107c61574(puVar8);
    FUN_1013fd66c(0);
    func_0x000107c614e8();
    func_0x000107c4c214(uVar18);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61574(lStack_e8);
  }
  func_0x000107c5725c(puVar7);
  func_0x000107c615e8(uVar18);
  if (((undefined8 *)(unaff_x20 + _DAT_112d7d1a8))[1] == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d7d1a8);
    func_0x000107c5fadc(uVar19);
  }
  func_0x000107c54440(puVar7);
  func_0x000107c61170(uVar19);
  if (((undefined8 *)(unaff_x20 + _DAT_112d7d1b0))[1] == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d7d1b0);
    func_0x000107c5fadc(uVar19);
  }
  func_0x000107c5734c(puVar7);
  func_0x000107c61170(uVar19);
  if (((undefined8 *)(unaff_x20 + _DAT_112d7d1b8))[1] == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d7d1b8);
    func_0x000107c5fadc(uVar19);
  }
  func_0x000107c57354(puVar7);
  func_0x000107c61170(uVar19);
  if (((undefined8 *)(unaff_x20 + _DAT_112d7d220))[1] == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d7d220);
    func_0x000107c5fadc(uVar19);
  }
  func_0x000107c550a0(puVar7);
  func_0x000107c61170(uVar19);
  if (((undefined8 *)(unaff_x20 + _DAT_112d7d228))[1] == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d7d228);
    func_0x000107c5fadc(uVar19);
  }
  func_0x000107c5509c(puVar7);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d7d1a0) + _DAT_113083808);
  func_0x000107c5c734(uVar19);
  func_0x000107c61180();
  func_0x000107c52d78(puVar7);
  func_0x000107c615e8(uVar19);
  puVar8 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  lVar11 = *(long *)(unaff_x20 + _DAT_112d7d1c0);
  func_0x000107c3dae4();
  func_0x000107c61180();
  lVar6 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar6 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar6;
    func_0x000107c4c1e0(lVar6);
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
  }
  func_0x000107c52604(puVar7);
  puVar13 = &UNK_1103b3f00;
  puVar12 = puVar13;
  func_0x000107c613fc(&UNK_1103b3f00,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  pcStack_b0 = FUN_10140c8b4;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  pcStack_c0 = (code *)0x101341328;
  puStack_b8 = &UNK_1103b3f18;
  ppuVar9 = &puStack_d0;
  puStack_a8 = puVar12;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a8);
  func_0x000107c56cb0(puVar7);
  func_0x000107c60bd0(ppuVar9);
  puVar12 = puVar13;
  func_0x000107c613fc(&UNK_1103b3f00,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  pcStack_b0 = (code *)0x10140c8d8;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  pcStack_c0 = (code *)&UNK_1000f6b44;
  puStack_b8 = &UNK_1103b3f40;
  ppuVar9 = &puStack_d0;
  puStack_a8 = puVar12;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a8);
  func_0x000107c56c2c(puVar7);
  func_0x000107c60bd0(ppuVar9);
  puVar12 = puVar13;
  func_0x000107c613fc(&UNK_1103b3f00,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  pcStack_b0 = (code *)0x10140c8e0;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_10140b00c;
  puStack_b8 = &UNK_1103b3f68;
  ppuVar9 = &puStack_d0;
  puStack_a8 = puVar12;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a8);
  func_0x000107c56d44(puVar7);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c56980(puVar7);
  puVar12 = puVar13;
  func_0x000107c613fc(&UNK_1103b3f00,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  pcStack_b0 = FUN_10140c8e8;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_100f11160;
  puStack_b8 = &UNK_1103b3f90;
  ppuVar9 = &puStack_d0;
  puStack_a8 = puVar12;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a8);
  func_0x000107c56e34(puVar7);
  func_0x000107c60bd0(ppuVar9);
  puVar12 = puVar13;
  func_0x000107c613fc(&UNK_1103b3f00,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  pcStack_b0 = (code *)0x10140c908;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_100f11160;
  puStack_b8 = &UNK_1103b3fb8;
  ppuVar9 = &puStack_d0;
  puStack_a8 = puVar12;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a8);
  func_0x000107c56f14(puVar7);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c613fc(&UNK_1103b3f00,0x18,7);
  func_0x000107c61614(puVar13 + 0x10);
  pcStack_b0 = FUN_10140c928;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  pcStack_c0 = (code *)&UNK_1000f6b44;
  puStack_b8 = &UNK_1103b3fe0;
  ppuVar9 = &puStack_d0;
  puStack_a8 = puVar13;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a8);
  func_0x000107c56cec(puVar7);
  func_0x000107c60bd0(ppuVar9);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c52644(puVar7);
  func_0x000107c61170(puVar5);
  iVar4 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar4 != 0) {
    lVar14 = 0;
    FUN_1013fa598();
    lVar15 = lVar14;
    func_0x000107c610f8();
    lVar6 = _DAT_112d7c5c8;
    func_0x000107c61614(lVar15 + _DAT_112d7c5c8,0);
    *(undefined8 *)(lVar15 + _DAT_112d7c5d0) = 0;
    *(undefined8 *)(lVar15 + _DAT_112d7c5d8) = 0;
    func_0x000107c61604(lVar15 + lVar6);
    plVar16 = &lStack_e0;
    lStack_e0 = lVar15;
    lStack_d8 = lVar14;
    func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
    func_0x000107c57254(puVar7);
    func_0x000107c61170(plVar16);
  }
  puVar5 = PTR_PTR_1126a6d18;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61180();
  func_0x000107c5a050();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10140be94);
    (*pcVar3)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 9;
  *(undefined8 *)(lVar6 + 0x10) = 4;
  puVar13 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar15 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10140be98);
    (*pcVar3)();
  }
  lVar14 = lVar15;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  puVar12 = puVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar14);
  *(undefined **)(lVar6 + 0x20) = puVar12;
  puVar13 = puVar5;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar15 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar15 != 0) {
    lVar14 = lVar15;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar15);
    puVar12 = puVar13;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    func_0x000107c61170(lVar14);
    *(undefined **)(lVar6 + 0x28) = puVar12;
    puVar13 = puVar5;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar15 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10140bea0);
      (*pcVar3)();
    }
    lVar14 = lVar15;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar15);
    puVar12 = puVar13;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    func_0x000107c61170(lVar14);
    *(undefined **)(lVar6 + 0x30) = puVar12;
    puVar13 = puVar5;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar15 = unaff_x20;
      func_0x000107c5ce8c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar17 = puVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(lVar15);
      *(undefined **)(lVar6 + 0x38) = puVar17;
      uVar19 = 0;
      func_0x000100847984(0);
      lVar15 = lVar6;
      func_0x000107c5fc48(lVar6,uVar19);
      func_0x000107c61574(lVar6);
      func_0x000107c3d048(puVar12);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar15);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10140bea4);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10140be9c);
  (*pcVar3)();
}



/* Entry: 10140bea4; end: 10140bfd3;  */

/* WARNING: Removing unreachable block (ram,0x00010140bf2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140bea4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c610f8(PTR_PTR_1126af830);
    func_0x00010006c00c(param_1,param_2);
    uVar3 = param_1;
    FUN_10140d1f4(param_1,param_2);
    func_0x00010006c090(param_1,param_2);
    pcVar1 = *(code **)(param_3 + _DAT_112d7d1c8);
    uVar2 = ((undefined8 *)(param_3 + _DAT_112d7d1c8))[1];
    func_0x000107c6157c(uVar2);
    (*pcVar1)(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10140bfd4; end: 10140c04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140bfd4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + _DAT_112d7d1d8);
    uVar2 = ((undefined8 *)(param_1 + _DAT_112d7d1d8))[1];
    func_0x000107c6157c(uVar2);
    (*pcVar1)();
    func_0x000107c61170(param_1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10140c050; end: 10140c1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140c050(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    func_0x000107c49820(param_1);
    pcVar1 = *(code **)(param_4 + _DAT_112d7d1d0);
    uVar2 = ((undefined8 *)(param_4 + _DAT_112d7d1d0))[1];
    func_0x000107c6157c(uVar2);
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c49820(param_1);
    }
    FUN_10140d2b4();
    (*pcVar1)();
    func_0x000107c614ac(param_1);
    func_0x000107c61170(param_4);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10140c1f4; end: 10140c2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140c1f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112d7d210);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 == (code *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = puVar1[1];
      func_0x000107c6157c(uVar3);
      (*pcVar4)();
      func_0x000100cb0ec0(pcVar4,uVar3);
      uVar3 = *puVar1;
    }
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100cb0ec0(uVar3,uVar2);
    puVar1 = (undefined8 *)(param_1 + _DAT_112d7d1f8);
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100cb0ec0(uVar3,uVar2);
    puVar1 = (undefined8 *)(param_1 + _DAT_112d7d208);
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100cb0ec0(uVar3,uVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10140c2c4; end: 10140c2eb; -[_TtC15COSServicesImpl17COSViewController loadView] */

void FUN_10140c2c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10140b12c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10140c2ec; end: 10140c347; -[_TtC15COSServicesImpl17COSViewController initWithNibName:bundle:] */

void FUN_10140c2ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSViewController",0x21,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10140c318);
  (*pcVar1)();
}



/* Entry: 10140c348; end: 10140c56f; -[_TtC15COSServicesImpl17COSViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010140c440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010140c468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010140c550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010140c46c) */
/* WARNING: Removing unreachable block (ram,0x00010140c444) */
/* WARNING: Removing unreachable block (ram,0x00010140c554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140c348(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7d140));
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_112d7d148),
                      ((undefined8 *)(param_1 + _DAT_112d7d148))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7d150));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7d158));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7d160));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7d168));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7d170));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7d178));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7d180));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7d188));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7d190));
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_112d7d198),
                      ((undefined8 *)(param_1 + _DAT_112d7d198))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7d1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7d1a8 + 8))
  ;
  return;
}



/* Entry: 10140c570; end: 10140c58f;  */

void FUN_10140c570(void)

{
  func_0x000107c61168(&PTR_PTR_1127d2ea0);
  return;
}



/* Entry: 10140c590; end: 10140c5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140c590(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7d1f8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c6157c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010140c624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x10140d504)(uVar2,uVar3);
  return;
}



/* Entry: 10140c5e0; end: 10140c627;  */

void FUN_10140c5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_5);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c6157c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010140c624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uVar3);
  return;
}



/* Entry: 10140c628; end: 10140c673; -[_TtC15COSServicesImplP33_C93D5D512B41766AAFEADFFE0FC8465125COSNativeLoggingCallbacks onChallengeReceivedWithChallengeType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140c628(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7d258);
  func_0x000107c61174();
  func_0x000107c31190(param_3);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10140c674; end: 10140c6e7; -[_TtC15COSServicesImplP33_C93D5D512B41766AAFEADFFE0FC8465125COSNativeLoggingCallbacks onChallengeAttemptedWithChallengeType:loggingData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140c674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7d260);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c31190(param_3);
  (*pcVar1)();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
  return;
}



/* Entry: 10140c6e8; end: 10140c7df; -[_TtC15COSServicesImplP33_C93D5D512B41766AAFEADFFE0FC8465125COSNativeLoggingCallbacks onChallengeResultWithChallengeType:grpcStatusCode:protoStatusCode:statusCode:loggingData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140c6e8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  pcVar1 = *(code **)(param_1 + _DAT_112d7d268);
  func_0x000107c61174();
  func_0x000107c615f0(param_7);
  func_0x000107c31190(param_3);
  if (param_2 == 0) {
    param_6 = 0;
  }
  else {
    func_0x000107c5fadc(param_6,param_2);
  }
  lVar2 = param_6;
  func_0x000107c3118c(param_6);
  func_0x000107c61170(param_6);
  (*pcVar1)(param_3,param_4,param_5,lVar2,param_7);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_7);
  return;
}



/* Entry: 10140c7e0; end: 10140c83f; -[_TtC15COSServicesImplP33_C93D5D512B41766AAFEADFFE0FC8465125COSNativeLoggingCallbacks init] */

void FUN_10140c7e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSNativeLoggingCallbacks",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10140c80c);
  (*pcVar1)();
}



/* Entry: 10140c840; end: 10140c893; -[_TtC15COSServicesImplP33_C93D5D512B41766AAFEADFFE0FC8465125COSNativeLoggingCallbacks .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010140c860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010140c864) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140c840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7d258 + 8));
  return;
}



/* Entry: 10140c894; end: 10140c8b3;  */

void FUN_10140c894(void)

{
  func_0x000107c61168(&PTR_PTR_1127d30d8);
  return;
}



/* Entry: 10140c8b4; end: 10140c8e7;  */

/* WARNING: Removing unreachable block (ram,0x00010140bf2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140c8b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c610f8(PTR_PTR_1126af830);
    func_0x00010006c00c(param_1,param_2);
    uVar4 = param_1;
    FUN_10140d1f4(param_1,param_2);
    func_0x00010006c090(param_1,param_2);
    pcVar1 = *(code **)(lVar3 + _DAT_112d7d1c8);
    uVar2 = ((undefined8 *)(lVar3 + _DAT_112d7d1c8))[1];
    func_0x000107c6157c(uVar2);
    (*pcVar1)(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10140c8e8; end: 10140c927;  */

void FUN_10140c8e8(void)

{
  func_0x00010140c120();
  return;
}



/* Entry: 10140c928; end: 10140c947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140c928(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + _DAT_112d7d210);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 == (code *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      func_0x000100cb0ec0(pcVar5,uVar4);
      uVar4 = *puVar1;
    }
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100cb0ec0(uVar4,uVar3);
    puVar1 = (undefined8 *)(lVar2 + _DAT_112d7d1f8);
    uVar4 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100cb0ec0(uVar4,uVar3);
    puVar1 = (undefined8 *)(lVar2 + _DAT_112d7d208);
    uVar4 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100cb0ec0(uVar4,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10140c948; end: 10140d1b3;  */

undefined8 FUN_10140c948(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  *(undefined ***)(param_3 + 0x60) = &PTR_DAT_1103b1530;
  func_0x000107c61604(param_3 + 0x58);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x10140d508;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)0x100f11710;
  puStack_68 = &UNK_1103b41c0;
  lStack_58 = param_3;
  func_0x000107c60bc4(&puStack_80);
  lVar2 = lStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(lVar2);
  uStack_60 = 0x10140d4f8;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100f10508;
  puStack_68 = &UNK_1103b41e8;
  lStack_58 = param_3;
  func_0x000107c60bc4(&puStack_80);
  lVar2 = lStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(lVar2);
  uVar5 = 0;
  FUN_1013f9104(0);
  func_0x000107c614e8();
  func_0x000107c4c214(param_1,param_2,ppuVar3,ppuVar4,uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return param_1;
}



/* Entry: 10140d1b4; end: 10140d1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10140d1b4(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = 0;
  FUN_1013f9b24();
  lVar8 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112d7c570) = 0;
  *(undefined8 *)(lVar8 + _DAT_112d7c578) = 0;
  puVar1 = (undefined4 *)(lVar8 + _DAT_112d7c580);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined8 *)(lVar8 + _DAT_112d7c588);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar6 = lVar8 + _DAT_112d7c590;
  *(undefined8 *)(lVar6 + 8) = 0;
  func_0x000107c61614(lVar6,0);
  *(undefined ***)(lVar6 + 8) = &PTR_DAT_1103b1838;
  func_0x000107c61604();
  *(undefined8 *)(lVar8 + _DAT_112d7c598) = uVar9;
  puVar4 = PTR_s_init_1125d9248;
  lStack_90 = lVar8;
  lStack_88 = lVar5;
  func_0x000107c61174();
  plVar7 = &lStack_90;
  func_0x000107c61154(plVar7,puVar4);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
  *(long **)(unaff_x20 + 0x50) = plVar7;
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar8 = 0;
  FUN_1013f9104();
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d7c4f0) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c4f8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c500) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c508) = 0;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112d7c510);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar1 = (undefined4 *)(lVar6 + _DAT_112d7c518);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112d7c520);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar6 + _DAT_112d7c528) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c530) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c538) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c540) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7c4c8) = uVar9;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112d7c4d0);
  puVar2[1] = uVar14;
  *puVar2 = uVar13;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112d7c4e0);
  *puVar2 = uVar10;
  puVar2[1] = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112d7c4e8) = uVar11;
  *(long **)(lVar6 + _DAT_112d7c4d8) = plVar7;
  puVar4 = PTR_s_initWithFrame__1125e2948;
  lStack_a0 = lVar6;
  lStack_98 = lVar8;
  func_0x000107c61174(uVar9);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar11);
  func_0x000107c6157c(uVar12);
  plVar7 = &lStack_a0;
  func_0x000107c61154(uVar15,uVar16,uVar17,uVar18,plVar7,puVar4);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  *(long **)(unaff_x20 + 0x48) = plVar7;
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  return plVar7;
}



/* Entry: 10140d1f4; end: 10140d2b3;  */

undefined * FUN_10140d1f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_e0 [80];
  undefined8 uStack_40;
  long lStack_38;
  
  puVar6 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  uStack_40 = 0;
  lVar7 = param_1;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  if (unaff_x20 == (undefined *)0x0) {
    uVar4 = uStack_40;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  puVar5 = auStack_e0;
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  lVar2 = *(long *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(long *)(lVar1 + 0x20) = lVar2;
  *(undefined1 **)(lVar1 + 0x28) = puVar5;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  puVar8 = (undefined1 *)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    func_0x000105219840();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar7 = 0;
      puVar8 = (undefined1 *)0xe000000000000000;
    }
    else {
      lVar7 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      puVar8 = puVar5;
    }
  }
  *(long *)(lVar1 + 0x30) = lVar7;
  *(undefined1 **)(lVar1 + 0x38) = puVar8;
  func_0x000107c61434(puVar6);
  lVar7 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  FUN_100f15a0c((long *)(lVar1 + 0x20));
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef3ce40);
  lVar1 = lVar7;
  func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c466bc(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar1);
  return puVar3;
}



/* Entry: 10140d2b4; end: 10140d44f;  */

undefined * FUN_10140d2b4(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [80];
  
  puVar5 = auStack_a0;
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  lVar2 = *(long *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(long *)(lVar1 + 0x20) = lVar2;
  *(undefined1 **)(lVar1 + 0x28) = puVar5;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  puVar6 = param_4;
  if (param_4 == (undefined1 *)0x0) {
    func_0x000105219840();
    func_0x000107c61180();
    if (lVar2 == 0) {
      param_3 = 0;
      puVar6 = (undefined1 *)0xe000000000000000;
    }
    else {
      param_3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      puVar6 = puVar5;
    }
  }
  *(long *)(lVar1 + 0x30) = param_3;
  *(undefined1 **)(lVar1 + 0x38) = puVar6;
  func_0x000107c61434(param_4);
  lVar2 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  FUN_100f15a0c((long *)(lVar1 + 0x20));
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef3ce40);
  lVar1 = lVar2;
  func_0x000107c5f9dc(lVar2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar2);
  func_0x000107c466bc(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar1);
  return puVar3;
}



/* Entry: 10140d450; end: 10140d513;  */

void FUN_10140d450(long param_1,long param_2)

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



/* Entry: 10140d514; end: 10140d587;  */

void FUN_10140d514(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 10140d588; end: 10140d68f;  */

undefined8 FUN_10140d588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar3 = &puStack_80;
  pcStack_60 = FUN_10140e438;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)0x100f11710;
  puStack_68 = &UNK_1103b42b8;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  pcStack_60 = FUN_10140d6f8;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100f10508;
  puStack_68 = &UNK_1103b42e0;
  func_0x000107c60bc4(&puStack_80);
  uVar4 = 0;
  FUN_10140e100(0);
  func_0x000107c614e8();
  func_0x000107c4c214(param_1,param_2,ppuVar2,ppuVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  return param_1;
}



/* Entry: 10140d690; end: 10140d6f7;  */

long FUN_10140d690(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  if (lVar2 == 0) {
    lVar1 = 0;
    FUN_10140e100();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 10140d6f8; end: 10140d8c7;  */

void FUN_10140d6f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_80;
    ppuVar4 = &puStack_80;
    ppuVar5 = &puStack_80;
    ppuVar6 = &puStack_80;
    func_0x000107c615f0();
    uVar2 = 0x6465524c52556e6f;
    func_0x000107c5fadc(0x6465524c52556e6f,0xed00007463657269);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_10140d8c8;
    uStack_58 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = (code *)0x10140e4c4;
    puStack_68 = &UNK_1103b4308;
    func_0x000107c60bc4(&puStack_80);
    pcStack_60 = FUN_10140d948;
    uStack_58 = 0;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    pcStack_70 = (code *)0x10127a6c0;
    puStack_68 = &UNK_1103b4330;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6e697274536c7275;
    func_0x000107c5fadc(0x6e697274536c7275,0xe900000000000067);
    pcStack_60 = FUN_10140d94c;
    uStack_58 = 0;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101137fac;
    puStack_68 = &UNK_1103b4358;
    func_0x000107c60bc4(&puStack_80);
    pcStack_60 = FUN_10140d9d0;
    uStack_58 = 0;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    pcStack_70 = (code *)0x101138058;
    puStack_68 = &UNK_1103b4380;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10140d8c8; end: 10140d947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140d8c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_10140e100(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112d7d358);
    *(undefined8 *)(lVar2 + _DAT_112d7d358) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 10140d948; end: 10140d94b;  */

void FUN_10140d948(void)

{
  return;
}



/* Entry: 10140d94c; end: 10140d9cf;  */

bool FUN_10140d94c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_10140e100(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0 && param_3 != 0) {
    func_0x000107c61174(param_1);
    FUN_10140da18(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return lVar2 != 0 && param_3 != 0;
}



/* Entry: 10140d9d0; end: 10140d9d3;  */

void FUN_10140d9d0(void)

{
  return;
}



/* Entry: 10140d9d4; end: 10140da17;  */

void FUN_10140d9d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10140da18; end: 10140dedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140da18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x13;
  undefined8 extraout_x14;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar10 - extraout_x8_00;
  lVar3 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = _DAT_112d7d360;
  lVar9 = (lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  if (*(long *)(unaff_x20 + _DAT_112d7d360) == 0) {
    uStack_98 = extraout_x14;
    lStack_90 = lVar10;
    lStack_88 = lVar8;
    func_0x000107c5edd0(lVar12,param_5,param_6);
    lVar8 = lVar12;
    (**(code **)(extraout_x13 + 0x30))(lVar12,1,lVar3);
    if ((int)lVar8 == 1) {
      func_0x0001000293e4(lVar12);
    }
    else {
      lStack_b0 = extraout_x13;
      (**(code **)(extraout_x13 + 0x20))(lVar9,lVar12,lVar3);
      puVar4 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puStack_a0 = puVar4;
      func_0x000107c438d4();
      puVar4 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
      func_0x000107c610f8();
      func_0x000107c469b0(param_1,param_2,param_3,param_4);
      uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined **)(unaff_x20 + lVar2) = puVar4;
      func_0x000107c61174();
      func_0x000107c61170(uVar11);
      func_0x000107c569dc(puVar4);
      func_0x000107c61174();
      func_0x000107c5a050();
      func_0x000107c3d89c();
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar2 = 0x112d360b8;
      FUN_10140e144(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                    &UNK_10d9011a0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 9;
      *(undefined8 *)(lVar2 + 0x10) = 4;
      puVar6 = puVar4;
      func_0x000107c4acb0();
      func_0x000107c61180();
      lVar8 = unaff_x20;
      lStack_a8 = lVar1;
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar8);
      *(undefined **)(lVar2 + 0x20) = puVar7;
      puVar6 = puVar4;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      lVar1 = unaff_x20;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar1);
      *(undefined **)(lVar2 + 0x28) = puVar7;
      puVar6 = puVar4;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar1 = unaff_x20;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar1);
      *(undefined **)(lVar2 + 0x30) = puVar7;
      puVar6 = puVar4;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(unaff_x20);
      *(undefined **)(lVar2 + 0x38) = puVar7;
      uVar11 = 0;
      FUN_10140e45c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar1 = lVar2;
      func_0x000107c5fc48(lVar2,uVar11);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar5);
      func_0x000107c61170(lVar1);
      (**(code **)(lStack_b0 + 0x10))(uStack_98,lVar9,lVar3);
      lVar2 = lStack_90;
      func_0x000107c5eaec(lStack_90,0x404e000000000000,uStack_98,0);
      uVar11 = uStack_98;
      func_0x000107c5eae0();
      puVar5 = puVar4;
      func_0x000107c4b768(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puStack_a0);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar5);
      (**(code **)(lStack_88 + 8))(lVar2,lStack_a8);
      (**(code **)(lStack_b0 + 8))(lVar9,lVar3);
    }
  }
  return;
}



/* Entry: 10140dedc; end: 10140df6f; -[_TtC15COSServicesImplP33_981D50DED2916CBA815DE725D21C575510COSWebView webView:decidePolicyForNavigationAction:decisionHandler:] */

/* WARNING: Possible PIC construction at 0x00010140df50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010140df54) */

void FUN_10140dedc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10140e23c(param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10140df70; end: 10140dff7; -[_TtC15COSServicesImplP33_981D50DED2916CBA815DE725D21C575510COSWebView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140df70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lStack_50;
  undefined8 uStack_48;
  
  *(undefined8 *)(param_5 + _DAT_112d7d358) = 0;
  *(undefined8 *)(param_5 + _DAT_112d7d360) = 0;
  uVar1 = 0;
  FUN_10140e100();
  lStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10140dff8; end: 10140e093; -[_TtC15COSServicesImplP33_981D50DED2916CBA815DE725D21C575510COSWebView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10140dff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar3 = &lStack_40;
  *(undefined8 *)(param_1 + _DAT_112d7d358) = 0;
  *(undefined8 *)(param_1 + _DAT_112d7d360) = 0;
  uVar2 = 0;
  FUN_10140e100();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 10140e094; end: 10140e0c7;  */

void FUN_10140e094(void)

{
  FUN_10140e100();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10140e0c8; end: 10140e0ff; -[_TtC15COSServicesImplP33_981D50DED2916CBA815DE725D21C575510COSWebView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e0c8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7d358));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7d360));
  return;
}



/* Entry: 10140e100; end: 10140e11f;  */

void FUN_10140e100(void)

{
  func_0x000107c61168(&PTR_PTR_1127d31a8);
  return;
}



/* Entry: 10140e120; end: 10140e143;  */

void FUN_10140e120(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d7d398;
  plVar5 = (long *)&UNK_10d93bbe0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10140e45c(0,0x112d60470,&PTR__OBJC_CLASS___UITextField_1126af060);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10140e144; end: 10140e1bb;  */

void FUN_10140e144(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10140e45c(0,param_1,param_2);
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



/* Entry: 10140e1bc; end: 10140e23b;  */

void FUN_10140e1bc(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d7d390;
  plVar5 = (long *)&UNK_10db2a050;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10140e45c(0,0x112d7b960,&PTR__OBJC_CLASS___UILabel_1126aec30);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10140e23c; end: 10140e437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e23c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c50300(param_1);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar6);
  func_0x000107c61170(param_1);
  func_0x000107c5eaf0(puVar4);
  (**(code **)(lVar8 + 8))(lVar6,lVar1);
  puVar3 = puVar4;
  (**(code **)(lVar7 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar4);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar5,puVar4,lVar2);
    lVar1 = *(long *)(param_2 + _DAT_112d7d358);
    if (lVar1 != 0) {
      lVar6 = lVar1;
      func_0x000107c615f0(lVar1);
      func_0x000107c30ef0();
      lVar8 = lVar6;
      func_0x000107c5ed70();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar4);
      func_0x000107c30ef8(lVar6,lVar8);
      func_0x000107c61170(lVar8);
      func_0x000107c4e5ec(lVar1);
      func_0x000107c30ef4(lVar6);
      func_0x000107c615e8(lVar1);
    }
    (**(code **)(lVar7 + 8))(lVar5,lVar2);
  }
  (**(code **)(param_3 + 0x10))(param_3,1);
  return;
}



/* Entry: 10140e438; end: 10140e45b;  */

long FUN_10140e438(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar2;
  if (lVar2 == 0) {
    lVar1 = 0;
    FUN_10140e100();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 10140e45c; end: 10140e49b;  */

void FUN_10140e45c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10140e49c; end: 10140e4c7;  */

void FUN_10140e49c(long param_1,long param_2)

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



/* Entry: 10140e4c8; end: 10140e4d3; -[SCCOSServicesProvider blizzardClientIdProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e4c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7d3a8;
  func_0x000107c61428(param_1 + _DAT_112d7d3a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10140e4d4; end: 10140e4df; -[SCCOSServicesProvider setBlizzardClientIdProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e4d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7d3a8;
  func_0x000107c61428(param_1 + _DAT_112d7d3a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10140e4e0; end: 10140e4eb; -[SCCOSServicesProvider appAttestServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e4e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7d3b0;
  func_0x000107c61428(param_1 + _DAT_112d7d3b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10140e4ec; end: 10140e4f7; -[SCCOSServicesProvider setAppAttestServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e4ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7d3b0;
  func_0x000107c61428(param_1 + _DAT_112d7d3b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10140e4f8; end: 10140e503; -[SCCOSServicesProvider deviceCheckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e4f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7d3b8;
  func_0x000107c61428(param_1 + _DAT_112d7d3b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10140e504; end: 10140e50f; -[SCCOSServicesProvider setDeviceCheckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e504(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7d3b8;
  func_0x000107c61428(param_1 + _DAT_112d7d3b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10140e510; end: 10140e51b; -[SCCOSServicesProvider logInSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e510(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7d3c0;
  func_0x000107c61428(param_1 + _DAT_112d7d3c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10140e51c; end: 10140e527; -[SCCOSServicesProvider setLogInSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7d3c0;
  func_0x000107c61428(param_1 + _DAT_112d7d3c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10140e528; end: 10140e533; -[SCCOSServicesProvider deviceInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e528(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7d3c8;
  func_0x000107c61428(param_1 + _DAT_112d7d3c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10140e534; end: 10140e53f; -[SCCOSServicesProvider setDeviceInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e534(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7d3c8;
  func_0x000107c61428(param_1 + _DAT_112d7d3c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10140e540; end: 10140e54b; -[SCCOSServicesProvider authSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e540(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7d3d0;
  func_0x000107c61428(param_1 + _DAT_112d7d3d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10140e54c; end: 10140e557; -[SCCOSServicesProvider setAuthSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e54c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7d3d0;
  func_0x000107c61428(param_1 + _DAT_112d7d3d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10140e558; end: 10140e563; -[SCCOSServicesProvider circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e558(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7d3d8;
  func_0x000107c61428(param_1 + _DAT_112d7d3d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10140e564; end: 10140e56f; -[SCCOSServicesProvider setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7d3d8;
  func_0x000107c61428(param_1 + _DAT_112d7d3d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10140e570; end: 10140e57b; -[SCCOSServicesProvider configVersionProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e570(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7d3e0;
  func_0x000107c61428(param_1 + _DAT_112d7d3e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10140e57c; end: 10140e587; -[SCCOSServicesProvider setConfigVersionProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7d3e0;
  func_0x000107c61428(param_1 + _DAT_112d7d3e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10140e588; end: 10140e593; -[SCCOSServicesProvider fideliusClientInitServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e588(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7d3e8;
  func_0x000107c61428(param_1 + _DAT_112d7d3e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10140e594; end: 10140e59f; -[SCCOSServicesProvider setFideliusClientInitServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e594(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7d3e8;
  func_0x000107c61428(param_1 + _DAT_112d7d3e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10140e5a0; end: 10140e5ab; -[SCCOSServicesProvider multiSourceCountryProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e5a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7d3f0;
  func_0x000107c61428(param_1 + _DAT_112d7d3f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10140e5ac; end: 10140e5b7; -[SCCOSServicesProvider setMultiSourceCountryProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140e5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7d3f0;
  func_0x000107c61428(param_1 + _DAT_112d7d3f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


