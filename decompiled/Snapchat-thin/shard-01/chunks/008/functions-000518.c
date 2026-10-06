/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014a9084; end: 1014a908b;  */

long FUN_1014a9084(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1014a908c();
    func_0x000107c61574(lVar1);
  }
  return lVar2;
}



/* Entry: 1014a908c; end: 1014a9143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a908c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5dc44();
  func_0x000107c61180();
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = 0;
    FUN_1014a87d0();
    lVar6 = lVar5;
    func_0x000107c610f8();
    *(undefined8 *)(lVar6 + _DAT_112da3dd0) = 0;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112da3dd8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(lVar6 + _DAT_112da3dc0) = uVar3;
    *(long *)(lVar6 + _DAT_112da3dc8) = lVar4;
    lStack_40 = lVar6;
    lStack_38 = lVar5;
    func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a9144);
  (*pcVar2)();
}



/* Entry: 1014a9144; end: 1014a917b;  */

void FUN_1014a9144(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1014a917c; end: 1014a9197;  */

void FUN_1014a917c(long param_1,long param_2)

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



/* Entry: 1014a9198; end: 1014a91b3;  */

/* WARNING: Possible PIC construction at 0x0001014a91a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014a91a8) */

void FUN_1014a9198(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1014a91b4; end: 1014a91ff;  */

void FUN_1014a91b4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014a9200; end: 1014a927b;  */

void FUN_1014a9200(undefined8 param_1)

{
  if (lRam0000000112da3e50 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63c95c);
  return;
}



/* Entry: 1014a927c; end: 1014a9363;  */

void FUN_1014a927c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1103c7fa8;
  func_0x000107c613fc(&UNK_1103c7fa8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x1014a936c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1014a9144;
  puStack_48 = &UNK_1103c7fe8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x00010009a530(0);
  func_0x000107c610f8();
  func_0x00010405e3fc();
  *param_1 = puVar1;
  return;
}



/* Entry: 1014a9364; end: 1014a936f;  */

void FUN_1014a9364(long param_1,long param_2)

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



/* Entry: 1014a9370; end: 1014a93ab; -[_TtC23GoogleSignInServiceImpl26GoogleSignInManagerDefault currentUser] */

void FUN_1014a9370(long param_1)

{
  func_0x000107c41038(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014a93ac; end: 1014a93db;  */

void FUN_1014a93ac(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1014a93dc; end: 1014a95a7;  */

/* WARNING: Possible PIC construction at 0x0001014a943c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a944c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a9518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a9578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a9544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014a951c) */
/* WARNING: Removing unreachable block (ram,0x0001014a9450) */
/* WARNING: Removing unreachable block (ram,0x0001014a9454) */
/* WARNING: Removing unreachable block (ram,0x0001014a9440) */
/* WARNING: Removing unreachable block (ram,0x0001014a957c) */

void FUN_1014a93dc(long param_1)

{
  long lVar1;
  
  FUN_1014aa3cc();
  if (param_1 == 0) {
    func_0x000104065534(0);
    param_1 = 0;
    func_0x000104065554(0);
    func_0x00010406528c();
    func_0x000104064c94();
  }
  else {
    lVar1 = param_1;
    func_0x000107c508f0();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61174();
      FUN_1014a9ca4(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014a95a8; end: 1014a9717;  */

void FUN_1014a95a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  }
  puVar1 = &UNK_1103c8298;
  func_0x000107c613fc(&UNK_1103c8298,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  pcStack_50 = FUN_1014aacb8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1014a96a0;
  puStack_58 = &UNK_1103c82b0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c5afc0(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1014a9718; end: 1014a979f; -[_TtC23GoogleSignInServiceImpl26GoogleSignInManagerDefault signInWith:additionalScopes:completion:] */

void FUN_1014a9718(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  func_0x000107c60bc4(param_5);
  func_0x000107c6157c(param_1);
  FUN_1014aa78c(param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1014a97a0; end: 1014a99db;  */

/* WARNING: Possible PIC construction at 0x0001014a9800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a9810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a98f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a99bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a99d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a9960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a992c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014a99d4) */
/* WARNING: Removing unreachable block (ram,0x0001014a99c0) */
/* WARNING: Removing unreachable block (ram,0x0001014a98fc) */
/* WARNING: Removing unreachable block (ram,0x0001014a9814) */
/* WARNING: Removing unreachable block (ram,0x0001014a9818) */
/* WARNING: Removing unreachable block (ram,0x0001014a9990) */
/* WARNING: Removing unreachable block (ram,0x0001014a982c) */
/* WARNING: Removing unreachable block (ram,0x0001014a9804) */
/* WARNING: Removing unreachable block (ram,0x0001014a9964) */
/* WARNING: Removing unreachable block (ram,0x0001014a9974) */

void FUN_1014a97a0(long param_1)

{
  long lVar1;
  
  FUN_1014aa3cc();
  if (param_1 == 0) {
    func_0x000104065534(0);
    param_1 = 0;
    func_0x000104065554(0);
    func_0x00010406528c();
    func_0x000104064c94();
  }
  else {
    lVar1 = param_1;
    func_0x000107c508f0();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61174();
      FUN_1014a9ca4(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014a99dc; end: 1014a9bef;  */

void FUN_1014a99dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  puVar1 = &UNK_1103c8248;
  func_0x000107c613fc(&UNK_1103c8248,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  uStack_50 = 0x1014aad38;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1014a96a0;
  puStack_58 = &UNK_1103c8260;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c3d830(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1014a9bf0; end: 1014a9c73; -[_TtC23GoogleSignInServiceImpl26GoogleSignInManagerDefault addScopes:completion:] */

void FUN_1014a9bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c60bc4(param_4);
  func_0x000107c6157c(param_1);
  func_0x0001014aa998(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1014a9c74; end: 1014a9c8b;  */

void FUN_1014a9c74(void)

{
  long unaff_x20;
  
  func_0x000107c44a48(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1014a9c8c; end: 1014a9c9b; -[_TtC23GoogleSignInServiceImpl26GoogleSignInManagerDefault hasPreviousSignIn] */

void FUN_1014a9c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfda910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_hasPreviousSignIn_1125d4400);
  return;
}



/* Entry: 1014a9c9c; end: 1014a9ca3; -[_TtC23GoogleSignInServiceImpl26GoogleSignInManagerDefault signOut] */

void FUN_1014a9c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23bdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_signOut_11266c9a0);
  return;
}



/* Entry: 1014a9ca4; end: 1014a9dd7;  */

long FUN_1014a9ca4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
LAB_1014a9dbc:
    func_0x000107c61174(param_1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    func_0x000107c61168(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    lVar2 = param_1;
    func_0x000107c6148c(param_1,puVar1);
    if (lVar2 == 0) {
LAB_1014a9d04:
      puVar1 = PTR__OBJC_CLASS___UITabBarController_1126d5098;
      func_0x000107c61168(PTR__OBJC_CLASS___UITabBarController_1126d5098);
      lVar2 = param_1;
      func_0x000107c6148c(param_1,puVar1);
      if (lVar2 != 0) {
        lVar3 = param_1;
        func_0x000107c61174(param_1);
        func_0x000107c51cc4();
        func_0x000107c61180();
        if (lVar2 != 0) goto LAB_1014a9d44;
        func_0x000107c61170(lVar3);
      }
      lVar2 = param_1;
      func_0x000107c4f078();
      func_0x000107c61180();
      if (lVar2 == 0) goto LAB_1014a9dbc;
      lVar4 = lVar2;
      func_0x000107c61174();
      FUN_1014a9ca4(lVar2);
      func_0x000107c61170(lVar4);
    }
    else {
      lVar3 = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c5dff4();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar3);
        goto LAB_1014a9d04;
      }
LAB_1014a9d44:
      lVar4 = lVar2;
      func_0x000107c61174();
      FUN_1014a9ca4(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar4);
    param_1 = lVar2;
  }
  return param_1;
}



/* Entry: 1014a9dd8; end: 1014aa09b;  */

undefined * FUN_1014a9dd8(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_1014aacd0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    FUN_100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_1014aa058:
        puStack_58 = (undefined *)0x0;
LAB_1014aa05c:
        FUN_100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_1014aacd0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014aa09c);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_1014aa058;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_1014aa05c;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        FUN_10109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_10109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 1014aa09c; end: 1014aa0db;  */

void FUN_1014aa09c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014aa0dc; end: 1014aa20f;  */

undefined * FUN_1014aa0dc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014aa210);
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
    FUN_10109912c();
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
    FUN_1014aacd0(0,0x112d59528,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
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



/* Entry: 1014aa210; end: 1014aa3cb;  */

ulong FUN_1014aa210(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014aa2f4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014aa2f8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1014aacd0(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014aa3cc);
  (*pcVar2)();
}



/* Entry: 1014aa3cc; end: 1014aa757;  */

ulong FUN_1014aa3cc(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  
  puVar17 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar5 = puVar17;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar17);
  uVar6 = 0;
  FUN_1014aacd0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar11 = uVar6;
  FUN_100deaee4();
  puVar17 = puVar5;
  func_0x000107c5fe10(puVar5,uVar6,uVar11);
  func_0x000107c61170(puVar5);
  puVar5 = puVar17;
  FUN_1014a9dd8();
  func_0x000107c6142c(puVar17);
  puVar17 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar15 = *(undefined **)(puVar17 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = puVar17;
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar15 = puVar5;
    }
    func_0x000107c60480();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (puVar15 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar17 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014aa588);
            (*pcVar4)();
          }
          puVar7 = *(undefined **)(puVar5 + (long)puVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar7 = puVar9;
          FUN_1014aa210(puVar9,puVar5,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
        }
        puVar1 = puVar9 + 1;
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014aa584);
          (*pcVar4)();
        }
        puVar8 = puVar7;
        func_0x000107c3d0e4();
        if (puVar8 == (undefined *)0x0) break;
        func_0x000107c61170(puVar7);
        puVar9 = puVar9 + 1;
        if (puVar1 == puVar15) goto LAB_1014aa5a4;
      }
      puVar9 = puVar3;
      func_0x000107c61558();
      if (((ulong)puVar9 & 1) == 0) {
        func_0x0001014aa0c0(0,*(long *)(puVar3 + 0x10) + 1,1);
      }
      uVar10 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar10) {
        func_0x0001014aa0c0(1 < *(ulong *)(puVar3 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
      *(undefined **)(puVar3 + uVar10 * 8 + 0x20) = puVar7;
      puVar9 = puVar1;
    } while (puVar1 != puVar15);
  }
LAB_1014aa5a4:
  func_0x000107c6142c(puVar5);
  if (((long)puVar3 < 0) || (((ulong)puVar3 >> 0x3e & 1) != 0)) {
    puVar17 = puVar3;
    func_0x000107c60480();
  }
  else {
    puVar17 = *(undefined **)(puVar3 + 0x10);
  }
  if (puVar17 == (undefined *)0x0) {
    func_0x000107c61574(puVar3);
  }
  else {
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar3 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014aa758);
        (*pcVar4)();
      }
      uVar10 = *(ulong *)(puVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar10 = 0;
      FUN_1014aa210(0,puVar3,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
    }
    func_0x000107c61574(puVar3);
    uVar14 = uVar10;
    func_0x000107c5e408();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar11 = 0;
    FUN_1014aacd0(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
    uVar10 = uVar14;
    func_0x000107c5fc54(uVar14,uVar11);
    func_0x000107c61170(uVar14);
    if (uVar10 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar14 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014aa6d4);
            (*pcVar4)();
          }
          uVar12 = *(ulong *)(uVar10 + uVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar12 = uVar16;
          FUN_1014aa210(uVar16,uVar10,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
        }
        uVar2 = uVar16 + 1;
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014aa6d0);
          (*pcVar4)();
        }
        uVar13 = uVar12;
        func_0x000107c49f64();
        if ((uVar13 & 1) != 0) {
          func_0x000107c6142c(uVar10);
          return uVar12;
        }
        func_0x000107c61170(uVar12);
        uVar16 = uVar16 + 1;
      } while (uVar2 != uVar14);
    }
    func_0x000107c6142c(uVar10);
  }
  return 0;
}



/* Entry: 1014aa758; end: 1014aa78b;  */

void FUN_1014aa758(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar3 = &puStack_70;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c5fc48(lVar6,PTR___sSSN_11034da80);
  }
  puVar2 = &UNK_1103c8298;
  func_0x000107c613fc(&UNK_1103c8298,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  pcStack_50 = FUN_1014aacb8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1014a96a0;
  puStack_58 = &UNK_1103c82b0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5afc0(uVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 1014aa78c; end: 1014aac1b;  */

/* WARNING: Possible PIC construction at 0x0001014aa810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014aa820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014aa8fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014aa95c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014aa928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014aa900) */
/* WARNING: Removing unreachable block (ram,0x0001014aa824) */
/* WARNING: Removing unreachable block (ram,0x0001014aa828) */
/* WARNING: Removing unreachable block (ram,0x0001014aa814) */
/* WARNING: Removing unreachable block (ram,0x0001014aa960) */

void FUN_1014aa78c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_1103c81d0;
  func_0x000107c613fc(&UNK_1103c81d0,0x18,7);
  *(long *)(puVar1 + 0x10) = param_3;
  func_0x000107c60bc4();
  FUN_1014aa3cc();
  if (param_3 == 0) {
    func_0x000104065534(0);
    param_3 = 0;
    func_0x000104065554(0);
    func_0x00010406528c();
    func_0x000104064c94();
  }
  else {
    lVar2 = param_3;
    func_0x000107c508f0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c61174();
      FUN_1014a9ca4(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1014aac1c; end: 1014aac2b;  */

void FUN_1014aac1c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001014aac28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1014aac2c; end: 1014aaca3;  */

void FUN_1014aac2c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014aaca4; end: 1014aacb7;  */

void FUN_1014aaca4(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001014aacb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1014aacb8; end: 1014aaccf;  */

void FUN_1014aacb8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001014a9ac8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1014aacd0; end: 1014aad0f;  */

void FUN_1014aacd0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1014aad10; end: 1014aad47;  */

void FUN_1014aad10(long param_1,long param_2)

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



/* Entry: 1014aad48; end: 1014aad67;  */

void FUN_1014aad48(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1014aad68; end: 1014aad77;  */

void FUN_1014aad68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014aad78; end: 1014aadd7;  */

void FUN_1014aad78(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  puVar1 = &uStack_28;
  func_0x000100979bb0();
  uVar2 = 0;
  func_0x000100095cc4(0);
  func_0x000107c610f8();
  func_0x00010097a9f4(puVar1,uVar2);
  func_0x000107c61574(uStack_28);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1014aadd8; end: 1014aae47;  */

undefined8 FUN_1014aadd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100a00250(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1014aae48; end: 1014aae7b;  */

void FUN_1014aae48(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014aae7c; end: 1014aaecb;  */

undefined8 FUN_1014aae7c(void)

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



/* Entry: 1014aaecc; end: 1014aaf07;  */

undefined1  [16] FUN_1014aaecc(void)

{
  return ZEXT816(0x1103c8410);
}



/* Entry: 1014aaf08; end: 1014ab26b;  */

long FUN_1014aaf08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126a7230;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85540);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  return unaff_x20;
}



/* Entry: 1014ab26c; end: 1014ab2d7;  */

void FUN_1014ab26c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1014ab2d8; end: 1014ab327;  */

undefined8 FUN_1014ab2d8(void)

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



/* Entry: 1014ab328; end: 1014ab36b;  */

undefined1  [16] FUN_1014ab328(void)

{
  return ZEXT816(0x1103c84b8);
}



/* Entry: 1014ab36c; end: 1014ab393;  */

void FUN_1014ab36c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014ab394; end: 1014ab39b;  */

undefined8 FUN_1014ab394(void)

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



/* Entry: 1014ab39c; end: 1014aba6f;  */

long FUN_1014ab39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c615f0(param_12);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7238;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef85580);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef855a0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef855c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef855e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c615f0(param_12);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85600);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_12);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef85620);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c615e8(param_12);
    *(undefined **)(unaff_x20 + 0x78) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014aba70);
  (*pcVar1)();
}



/* Entry: 1014aba70; end: 1014abb13;  */

void FUN_1014aba70(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1014abb14; end: 1014abb63;  */

undefined8 FUN_1014abb14(void)

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



/* Entry: 1014abb64; end: 1014abba7;  */

undefined1  [16] FUN_1014abb64(void)

{
  return ZEXT816(0x1103c8580);
}



/* Entry: 1014abba8; end: 1014abbcf;  */

void FUN_1014abba8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014abbd0; end: 1014abbd7;  */

undefined8 FUN_1014abbd0(void)

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



/* Entry: 1014abbd8; end: 1014abeab;  */

void FUN_1014abbd8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x00010009d31c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  puVar1 = PTR_PTR_1126a7240;
  func_0x000107c610f8();
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar5 = 0x7265536f69647561;
  func_0x000107c5fadc(0x7265536f69647561,0xed00007365636976);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 1014abeac; end: 1014abed7;  */

void FUN_1014abeac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014abed8; end: 1014abf0b;  */

undefined1  [16] FUN_1014abed8(void)

{
  return ZEXT816(0x1103c86e8);
}



/* Entry: 1014abf0c; end: 1014abf33;  */

void FUN_1014abf0c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014abf34; end: 1014abf7f;  */

undefined8 FUN_1014abf34(void)

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



/* Entry: 1014abf80; end: 1014abfcb;  */

undefined8 FUN_1014abf80(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001004ef1bc(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1014abfcc; end: 1014abfff;  */

void FUN_1014abfcc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ac000; end: 1014ac043;  */

undefined1  [16] FUN_1014ac000(void)

{
  return ZEXT816(0x1103c8810);
}



/* Entry: 1014ac044; end: 1014ac06b;  */

void FUN_1014ac044(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014ac06c; end: 1014ac0b7;  */

undefined8 FUN_1014ac06c(void)

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



/* Entry: 1014ac0b8; end: 1014ac18f;  */

long FUN_1014ac0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001009d7ad0(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001009d7af0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  func_0x0001009d7b74();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 1014ac190; end: 1014ac1c3;  */

void FUN_1014ac190(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ac1c4; end: 1014ac1f7;  */

undefined1  [16] FUN_1014ac1c4(void)

{
  return ZEXT816(0x1103c8958);
}



/* Entry: 1014ac1f8; end: 1014ac223;  */

undefined8 FUN_1014ac1f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 1014ac224; end: 1014ac283;  */

void FUN_1014ac224(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100093a08();
  func_0x000107c613fc();
  FUN_1014ac2c8(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1014ac284; end: 1014ac28b;  */

void FUN_1014ac284(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100093a08();
  func_0x000107c613fc();
  FUN_1014ac2c8(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1014ac28c; end: 1014ac2c7;  */

undefined8 FUN_1014ac28c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1014ac2c8(param_1);
  return unaff_x20;
}



/* Entry: 1014ac2c8; end: 1014ac393;  */

void FUN_1014ac2c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126a7250;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  return;
}



/* Entry: 1014ac394; end: 1014ac3bf;  */

void FUN_1014ac394(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ac3c0; end: 1014ac413;  */

void FUN_1014ac3c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014ac414; end: 1014ac41b;  */

void FUN_1014ac414(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014ac41c; end: 1014ac46b;  */

undefined8 FUN_1014ac41c(void)

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



/* Entry: 1014ac46c; end: 1014ac4af;  */

undefined1  [16] FUN_1014ac46c(void)

{
  return ZEXT816(0x1103c89d8);
}



/* Entry: 1014ac4b0; end: 1014ac4d7;  */

void FUN_1014ac4b0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014ac4d8; end: 1014ac4df;  */

undefined8 FUN_1014ac4d8(void)

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



/* Entry: 1014ac4e0; end: 1014ac52b;  */

undefined8 FUN_1014ac4e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100a0cff8(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1014ac52c; end: 1014ac55f;  */

void FUN_1014ac52c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ac560; end: 1014ac5af;  */

undefined8 FUN_1014ac560(void)

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



/* Entry: 1014ac5b0; end: 1014ac5f3;  */

undefined1  [16] FUN_1014ac5b0(void)

{
  return ZEXT816(0x1103c8aa0);
}



/* Entry: 1014ac5f4; end: 1014ac61b;  */

void FUN_1014ac5f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014ac61c; end: 1014ac623;  */

undefined8 FUN_1014ac61c(void)

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



/* Entry: 1014ac624; end: 1014ac66f;  */

undefined8 FUN_1014ac624(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001003d270c(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1014ac670; end: 1014ac6a3;  */

void FUN_1014ac670(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ac6a4; end: 1014ac6f3;  */

undefined8 FUN_1014ac6a4(void)

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



/* Entry: 1014ac6f4; end: 1014ac737;  */

undefined1  [16] FUN_1014ac6f4(void)

{
  return ZEXT816(0x1103c8b68);
}



/* Entry: 1014ac738; end: 1014ac75f;  */

void FUN_1014ac738(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014ac760; end: 1014ac767;  */

undefined8 FUN_1014ac760(void)

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



/* Entry: 1014ac768; end: 1014ac7b3;  */

undefined8 FUN_1014ac768(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001009c7974(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1014ac7b4; end: 1014ac7e7;  */

void FUN_1014ac7b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ac7e8; end: 1014ac837;  */

undefined8 FUN_1014ac7e8(void)

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



/* Entry: 1014ac838; end: 1014ac87b;  */

undefined1  [16] FUN_1014ac838(void)

{
  return ZEXT816(0x1103c8c30);
}



/* Entry: 1014ac87c; end: 1014ac8a3;  */

void FUN_1014ac87c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014ac8a4; end: 1014ac8ab;  */

undefined8 FUN_1014ac8a4(void)

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



/* Entry: 1014ac8ac; end: 1014ac8ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ac8ac(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112da4a18) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014ac900; end: 1014ac973; -[_TtC27SCNetworkRegulationServices43NetworkRegulationConnectivityChangeNotifier dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ac900(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112da4a18);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c4218c(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014ac974; end: 1014ac9bb; -[_TtC27SCNetworkRegulationServices43NetworkRegulationConnectivityChangeNotifier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ac974(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da4a08));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112da4a10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da4a18));
  return;
}



/* Entry: 1014ac9bc; end: 1014acaa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ac9bc(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112da4a10;
  func_0x000107c61428(unaff_x20 + _DAT_112da4a10,auStack_58,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014acaa8);
      (*pcVar2)();
    }
    func_0x000107c61434(uVar4);
    uVar6 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = uVar6;
        FUN_1014acb10(uVar6,uVar4);
      }
      uVar6 = uVar6 + 1;
      func_0x000107c4db88();
      func_0x000107c61170(uVar3);
    } while (uVar5 != uVar6);
    func_0x000107c6142c(uVar4);
  }
  return;
}


