/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ac4fcc; end: 103ac5003;  */

void FUN_103ac4fcc(long param_1)

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



/* Entry: 103ac5004; end: 103ac501f;  */

void FUN_103ac5004(long param_1,long param_2)

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



/* Entry: 103ac5020; end: 103ac502f; -[_TtC26SCSearchDeploymentServices24SearchDeploymentServices deploymentProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac5020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe6dd0));
  return;
}



/* Entry: 103ac5030; end: 103ac50c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac5030(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe6dd0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ac50c8; end: 103ac511f; -[_TtC26SCSearchDeploymentServices24SearchDeploymentServices initWithDeploymentProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac50c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fe6dd0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103ac5120; end: 103ac5153;  */

void FUN_103ac5120(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ac5154; end: 103ac5163; -[_TtC26SCSearchDeploymentServices24SearchDeploymentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac5154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe6dd0));
  return;
}



/* Entry: 103ac5164; end: 103ac5223;  */

long FUN_103ac5164(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 103ac5224; end: 103ac52c3;  */

void FUN_103ac5224(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
    uVar2 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f19aec0);
    func_0x000107c56bcc(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 103ac52c4; end: 103ac52df;  */

void FUN_103ac52c4(void)

{
  long unaff_x20;
  
  FUN_103ac5224(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103ac52e0; end: 103ac534b;  */

undefined8 FUN_103ac52e0(void)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_38;
  
  uVar1 = 0x112d445a8;
  func_0x0001000285a8(0x112d445a8,&UNK_10d990150);
  func_0x000100087bd4(&uStack_38,FUN_103ac5434,auStack_60,uVar1);
  return uStack_38;
}



/* Entry: 103ac534c; end: 103ac5433;  */

void FUN_103ac534c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lStack_38;
  
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f19aec0);
    lVar3 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      uVar2 = 0x112d373e8;
      lStack_38 = lVar3;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      uVar4 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      puVar5 = param_1;
      func_0x000107c6147c(param_1,&lStack_38,uVar2,uVar4,6);
      if (((ulong)puVar5 & 1) != 0) {
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 103ac5434; end: 103ac544b;  */

void FUN_103ac5434(void)

{
  long unaff_x20;
  
  FUN_103ac534c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103ac544c; end: 103ac54a3;  */

void FUN_103ac544c(void)

{
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x20),FUN_103ac5598,auStack_50,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 103ac54a4; end: 103ac5597;  */

void FUN_103ac54a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    func_0x000107c5fdd0();
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    uVar4 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f19ae90);
    func_0x000107c56bcc(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103ac5598; end: 103ac55af;  */

void FUN_103ac5598(void)

{
  long unaff_x20;
  
  FUN_103ac54a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103ac55b0; end: 103ac561f;  */

undefined1  [16] FUN_103ac55b0(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_60 [16];
  unkuint9 Stack_40;
  
  uVar1 = 0x112dc10e8;
  func_0x0001000285a8(0x112dc10e8,&UNK_10d97dc20);
  func_0x000100087bd4(&Stack_40,FUN_103ac5810,auStack_60,uVar1);
  auVar2._9_7_ = 0;
  auVar2._0_9_ = Stack_40;
  return auVar2;
}



/* Entry: 103ac5620; end: 103ac580f;  */

void FUN_103ac5620(double *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double *pdVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  long extraout_x8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_80 [8];
  double dStack_78;
  long lStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    bVar8 = false;
    dVar10 = 28800.0;
  }
  else {
    uVar3 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f19ae90);
    lVar4 = lVar2;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (lVar4 != 0) {
      uVar3 = 0x112d373e8;
      lStack_58 = lVar4;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      pdVar5 = &dStack_78;
      func_0x000107c6147c(pdVar5,&lStack_58,uVar3,PTR___sSdN_11034dd90,6);
      if (((ulong)pdVar5 & 1) != 0) {
        puVar6 = *(undefined8 **)(param_2 + 0x18);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (puVar6 == (undefined8 *)0x0) {
          dVar10 = 28800.0;
        }
        else {
          puVar7 = puVar6;
          FUN_103ac8914();
          uVar3 = *puVar7;
          func_0x000107c61174(uVar3);
          puVar7 = puVar6;
          func_0x000107c497f8();
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(puVar6);
          dVar10 = (double)(long)puVar7;
        }
        dVar11 = dStack_78 + dVar10;
        func_0x000107c5eea0(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000107c5ee8c();
        func_0x000107c61170(lVar2);
        (**(code **)(lVar9 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
        dVar11 = dVar11 - dVar10;
        bVar8 = dVar11 <= 0.0;
        dVar10 = 0.0;
        if (0.0 < dVar11) {
          dVar10 = dVar11;
        }
        goto LAB_103ac57e0;
      }
    }
    func_0x000107c61170(lVar2);
    bVar8 = true;
    dVar10 = 0.0;
  }
LAB_103ac57e0:
  *param_1 = dVar10;
  *(bool *)(param_1 + 1) = bVar8;
  return;
}



/* Entry: 103ac5810; end: 103ac587b;  */

void FUN_103ac5810(void)

{
  long unaff_x20;
  
  FUN_103ac5620(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103ac587c; end: 103ac58c3; -[_TtC37SCSearchPreTypeNetworkingServicesImpl29SearchPreTypeNetworkRequester delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac587c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe6eb0;
  func_0x000107c61428(param_1 + _DAT_112fe6eb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ac58c4; end: 103ac591b; -[_TtC37SCSearchPreTypeNetworkingServicesImpl29SearchPreTypeNetworkRequester setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac58c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe6eb0;
  func_0x000107c61428(param_1 + _DAT_112fe6eb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ac591c; end: 103ac5c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103ac591c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  
  lVar3 = 0;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_88 = param_3;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  lVar1 = _DAT_112fe6eb8;
  (**(code **)(lVar12 + 0x68))
            (lVar13,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3
            );
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f19ae60);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar12 + 8))(lVar13,lVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6ec0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6ec8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112fe6eb0,0);
  uVar10 = uStack_88;
  uVar2 = uStack_90;
  uVar6 = uStack_98;
  uVar5 = uStack_a0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6ed0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6ed8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6ee0) = uStack_88;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6ee8) = uStack_a0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6ef0) = uStack_98;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6ef8) = uStack_90;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174();
  uStack_78 = param_1;
  func_0x000107c61174();
  uStack_80 = param_2;
  func_0x000107c61174();
  uStack_88 = uVar10;
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c6157c(uVar2);
  puVar7 = auStack_70;
  func_0x000107c61154(puVar7,puVar4);
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  func_0x0001048d6b34(0);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  puVar8 = puVar7;
  func_0x0001048d69d4();
  puVar9 = puVar8;
  func_0x0001048ba9a8();
  func_0x000107c61170(puVar8);
  uVar10 = 0;
  func_0x0001000aad1c(0);
  func_0x0001000aad3c();
  puVar4 = &UNK_1106cb558;
  func_0x000107c613fc(&UNK_1106cb558,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar7);
  func_0x000107c61170(puVar7);
  puVar11 = &UNK_1106cb580;
  func_0x000107c613fc(&UNK_1106cb580,0x20,7);
  *(undefined **)(puVar11 + 0x10) = puVar4;
  *(undefined8 *)(puVar11 + 0x18) = uVar2;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar4);
  puVar8 = puVar9;
  func_0x0001009107f0(puVar9,uVar10,0,0,FUN_103ac5de0,puVar11);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c615e8(puVar8);
  return puVar7;
}



/* Entry: 103ac5c70; end: 103ac5ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac5c70(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long alStack_98 [3];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [24];
  
  uVar5 = *param_3;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = 0x112d445a8;
    puStack_70 = param_3;
    puStack_68 = (undefined *)uVar5;
    func_0x0001000285a8(0x112d445a8,&UNK_10d990150);
    func_0x000100087bd4(alStack_98,FUN_103ac7e34,&puStack_80,uVar1);
    if (alStack_98[0] != 0) {
      func_0x000107c6142c();
      lVar2 = _DAT_112fe6eb0;
      func_0x000107c61428(param_2 + _DAT_112fe6eb0,alStack_98,0,0);
      lVar2 = param_2 + lVar2;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c51ad4();
        func_0x000107c615e8(lVar2);
      }
    }
    uVar5 = *(undefined8 *)(param_2 + _DAT_112fe6eb8);
    puVar3 = &UNK_1106cb558;
    func_0x000107c613fc(&UNK_1106cb558,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_2);
    uStack_60 = 0x103ac7e98;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = (undefined8 *)&UNK_1000f6b44;
    puStack_68 = &UNK_1106cb7a0;
    ppuVar4 = &puStack_80;
    puStack_58 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_58);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103ac5de0; end: 103ac5de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac5de0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  long alStack_98 [3];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar7 = *puVar1;
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = 0x112d445a8;
    puStack_70 = puVar1;
    puStack_68 = (undefined *)uVar7;
    func_0x0001000285a8(0x112d445a8,&UNK_10d990150);
    func_0x000100087bd4(alStack_98,FUN_103ac7e34,&puStack_80,uVar3);
    if (alStack_98[0] != 0) {
      func_0x000107c6142c();
      lVar4 = _DAT_112fe6eb0;
      func_0x000107c61428(lVar2 + _DAT_112fe6eb0,alStack_98,0,0);
      lVar4 = lVar2 + lVar4;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x000107c51ad4();
        func_0x000107c615e8(lVar4);
      }
    }
    uVar7 = *(undefined8 *)(lVar2 + _DAT_112fe6eb8);
    puVar5 = &UNK_1106cb558;
    func_0x000107c613fc(&UNK_1106cb558,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar2);
    uStack_60 = 0x103ac7e98;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = (undefined8 *)&UNK_1000f6b44;
    puStack_68 = &UNK_1106cb7a0;
    ppuVar6 = &puStack_80;
    puStack_58 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_58);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103ac5de8; end: 103ac5e53; -[_TtC37SCSearchPreTypeNetworkingServicesImpl29SearchPreTypeNetworkRequester cachedTrendingTopics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac5de8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  puVar2 = param_1;
  FUN_103ac52e0();
  func_0x000107c61170(param_1);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = puVar1;
  func_0x000107c5fc48(puVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103ac5e54; end: 103ac5f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac5e54(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fe6eb8);
  puVar1 = &UNK_1106cb558;
  func_0x000107c613fc(&UNK_1106cb558,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_103ac5f60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106cb598;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 103ac5f0c; end: 103ac5f5f;  */

void FUN_103ac5f0c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103ac5f68();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103ac5f60; end: 103ac5f67;  */

void FUN_103ac5f60(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_103ac5f68();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103ac5f68; end: 103ac6017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac5f68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *unaff_x20;
  
  func_0x000107c614f0();
  FUN_103ac52e0();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (unaff_x20 != (undefined *)0x0) {
    puVar1 = unaff_x20;
  }
  puVar2 = &UNK_1106cb558;
  func_0x000107c613fc(&UNK_1106cb558,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c6157c(puVar2);
  func_0x000107c61434(puVar1);
  FUN_103ac73d0();
  func_0x000107c61430(puVar1,2);
  func_0x000107c61578(puVar2,2);
  return;
}



/* Entry: 103ac6018; end: 103ac6033;  */

void FUN_103ac6018(long param_1,long param_2)

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



/* Entry: 103ac6034; end: 103ac605b; -[_TtC37SCSearchPreTypeNetworkingServicesImpl29SearchPreTypeNetworkRequester refreshTrendingTopics] */

void FUN_103ac6034(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103ac5e54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ac605c; end: 103ac619b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac605c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + _DAT_112fe6eb8);
    puVar1 = &UNK_1106cb670;
    func_0x000107c613fc(&UNK_1106cb670,0x38,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    puVar1[0x18] = (char)param_2;
    *(long *)(puVar1 + 0x20) = param_3;
    *(undefined8 *)(puVar1 + 0x28) = param_4;
    *(undefined8 *)(puVar1 + 0x30) = param_5;
    uStack_78 = 0x103ac7dec;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1106cb688;
    ppuVar2 = &puStack_98;
    puStack_70 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_70;
    func_0x000107c615f0(uVar3);
    func_0x000103ac7e00(param_1,param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 103ac619c; end: 103ac63fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac619c(undefined8 param_1,char param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar2 = _DAT_112fe6ec0;
  ppuVar6 = &puStack_70;
  ppuVar8 = &puStack_70;
  if (param_2 == '\x01') {
    lVar9 = *(long *)(param_3 + _DAT_112fe6ec0);
    lVar1 = lVar9 + 1;
    if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac63f8);
      (*pcVar3)();
    }
    *(long *)(param_3 + _DAT_112fe6ec0) = lVar1;
    if (lVar1 < 4) {
      if (!SBORROW8(lVar1,1)) {
        func_0x000107c60fa8((double)lVar9);
        FUN_103ac6488();
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac63fc);
      (*pcVar3)();
    }
    FUN_103ac544c();
    *(undefined8 *)(param_3 + lVar2) = 0;
    uVar10 = *(undefined8 *)(param_3 + _DAT_112fe6eb8);
    puVar7 = &UNK_1106cb558;
    func_0x000107c613fc(&UNK_1106cb558,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,param_3);
    uStack_50 = 0x103ac7e14;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_58 = &UNK_1106cb6b0;
    puStack_48 = puVar7;
  }
  else {
    *(undefined8 *)(param_3 + _DAT_112fe6ec0) = 0;
    FUN_103ac544c();
    func_0x000103ac51c8(param_1);
    func_0x00010142cfc4(param_4,param_1);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    if ((param_4 & 1) == 0) {
      pcVar4 = "fetchTrendingTopicsInBackground()";
      func_0x0001000c10c0("fetchTrendingTopicsInBackground()");
      func_0x000107c61180();
      puVar5 = &UNK_1106cb558;
      func_0x000107c613fc(&UNK_1106cb558,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,param_3);
      uStack_50 = 0x103ac7e1c;
      puStack_70 = puVar7;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_1106cb6d8;
      puStack_48 = puVar5;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c4e524(pcVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(pcVar4);
    }
    uVar10 = *(undefined8 *)(param_3 + _DAT_112fe6eb8);
    puVar5 = &UNK_1106cb558;
    func_0x000107c613fc(&UNK_1106cb558,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_3);
    uStack_50 = 0x103ac7e94;
    puStack_70 = puVar7;
    puStack_58 = &UNK_1106cb700;
    puStack_48 = puVar5;
  }
  puStack_60 = &UNK_1000f6b44;
  uStack_68 = 0x42000000;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4e524(uVar10);
  func_0x000107c60bd0(ppuVar8);
  return;
}



/* Entry: 103ac63fc; end: 103ac6487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac63fc(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112fe6eb0;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112fe6eb0,auStack_50,0,0);
    lVar1 = param_1 + lVar1;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c51ad4();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103ac6488; end: 103ac677b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac6488(double param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_d0 [8];
  undefined **ppuStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5f83c();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar11 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = ((long)puVar11 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (0.0 < param_1) {
    puVar5 = &UNK_1106cb558;
    func_0x000107c613fc(&UNK_1106cb558,0x18,7);
    lStack_b0 = (long)puVar11 - extraout_x12;
    func_0x000107c61614(puVar5 + 0x10);
    uStack_80 = 0x103ac7e24;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1106cb728;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4();
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuStack_c8 = ppuVar6;
    func_0x0001001c7eec();
    lStack_b8 = lVar2;
    func_0x000107c6157c(puVar5);
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar7 = uVar8;
    lStack_c0 = lVar14;
    func_0x0001001c7f30();
    func_0x000107c60264(lVar13,&puStack_a8,uVar8,uVar7,lVar4,ppuVar6);
    func_0x000107c5f850();
    func_0x000107c613fc();
    func_0x000107c5f844(lVar13,ppuStack_c8);
    puVar1 = puStack_78;
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar1);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fe6ec8);
    *(long *)(unaff_x20 + _DAT_112fe6ec8) = lVar13;
    func_0x000107c6157c(lVar13);
    func_0x000107c61574(uVar8);
    FUN_103ac7d98(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar10 + 0x68))
              (lVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
               lVar3);
    lVar4 = lVar12;
    func_0x000107c5fff0(lVar12);
    (**(code **)(lVar10 + 8))(lVar12,lVar3);
    func_0x000107c5f830(puVar11);
    lVar3 = lStack_b0;
    func_0x000107c5f85c(lStack_b0,param_1,puVar11);
    lVar2 = lStack_b8;
    pcVar9 = *(code **)(lStack_c0 + 8);
    (*pcVar9)(puVar11,lStack_b8);
    func_0x000107c5ffcc(lVar3,lVar13);
    func_0x000107c61574(lVar13);
    func_0x000107c61170(lVar4);
    (*pcVar9)(lVar3,lVar2);
  }
  return;
}



/* Entry: 103ac677c; end: 103ac688b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac677c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar4,0,0);
  uVar3 = (uint)puVar4;
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112fe6ec8;
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + _DAT_112fe6ec8);
    if (lVar5 != 0) {
      func_0x000107c6157c(lVar5);
      func_0x000107c5f848();
      func_0x000107c61574(lVar5);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      func_0x000107c61574(uVar1);
    }
    lVar2 = _DAT_112fe6ef8;
    uVar6 = *(undefined8 *)(param_1 + _DAT_112fe6ef8);
    uVar1 = uVar6;
    func_0x000107c6157c(uVar6);
    FUN_103ac55b0();
    func_0x000107c61574(uVar6);
    if ((uVar3 & 0xff) == 1) {
      FUN_103ac5f68();
    }
    else {
      lVar5 = *(long *)(param_1 + lVar2);
      lVar2 = lVar5;
      func_0x000107c6157c();
      FUN_103ac52e0();
      func_0x000107c61574(lVar5);
      if (lVar2 != 0) {
        func_0x000107c6142c(lVar2);
      }
      FUN_103ac6488(uVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103ac688c; end: 103ac6a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac688c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112fe6eb8);
    puVar1 = &UNK_1106cb760;
    func_0x000107c613fc(&UNK_1106cb760,0x18,7);
    *(long *)(puVar1 + 0x10) = param_1;
    uStack_58 = 0x103ac7e2c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1106cb778;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_50;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 103ac6a4c; end: 103ac711b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ac6a4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5efa8();
  lStack_80 = *(long *)(lVar1 + -8);
  lStack_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar9 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ef14();
  lStack_90 = *(long *)(lVar1 + -8);
  lStack_88 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined8 *)0x0;
  func_0x000107c5eea4();
  lStack_a0 = puVar2[-1];
  puStack_98 = puVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar13 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)0x0;
  func_0x000107c5eec8();
  lVar11 = puVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126d3330;
  func_0x000107c610f8(PTR_PTR_1126d3330);
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107c5eec4(lVar1);
  func_0x000107c5eeac();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  pcVar12 = *(code **)(lVar11 + 8);
  puVar2 = puVar3;
  (*pcVar12)(lVar1,puVar3);
  func_0x000107c58fc0(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c5eec4(lVar1);
  func_0x000107c5eeac();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar2);
  (*pcVar12)(lVar1);
  func_0x000107c58fe8(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c570b0(puVar4);
  puVar5 = PTR_PTR_1126bb028;
  func_0x000107c610f8(PTR_PTR_1126bb028);
  func_0x000107c453e4();
  lVar1 = *(long *)(unaff_x20 + _DAT_112fe6ee0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar11 = lVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar11 != 0) {
      uStack_70 = 0;
      puStack_68 = (undefined8 *)0x0;
      puVar3 = &uStack_70;
      func_0x000107c5fae8(lVar11);
      func_0x000107c61170(lVar11);
      puVar2 = puStack_68;
      if (puStack_68 != (undefined8 *)0x0) {
        uVar6 = uStack_70;
        puVar3 = puStack_68;
        func_0x000107c5fadc(uStack_70);
        func_0x000107c6142c(puVar2);
        func_0x000107c52cc4(puVar5);
        func_0x000107c61170(uVar6);
      }
    }
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112fe6ee8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar11 = lVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar11 != 0) {
      func_0x000107c5eea0(lVar13);
      func_0x000107c5ee70();
      puVar3 = puStack_98;
      (**(code **)(lStack_a0 + 8))(lVar13);
      lVar13 = lVar11;
      func_0x000107c3da20();
      func_0x000107c61170(lVar1);
      if (lVar13 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x103ac6e64);
        (*pcVar12)();
      }
      if (0x7fffffff < lVar13) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x103ac6e68);
        (*pcVar12)();
      }
      func_0x000107c5258c(puVar5);
      func_0x000107c61170(lVar11);
      lVar1 = lVar11;
    }
  }
  func_0x000107c5ef04(lVar10);
  func_0x000107c5eed8();
  if (puVar3 == (undefined8 *)0x0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar3);
  }
  lVar11 = lStack_88;
  (**(code **)(lStack_90 + 8))(lVar10,lStack_88);
  func_0x000107c53a20(puVar5);
  func_0x000107c61170(lVar1);
  puVar7 = puVar5;
  func_0x000107c52fa0(puVar5);
  func_0x000107c5efa4(lVar9);
  func_0x000107c5ef94();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar11);
  (**(code **)(lStack_80 + 8))(lVar9,lStack_78);
  func_0x000107c59df4(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c5a360(puVar4);
  puVar7 = PTR_PTR_1126d3328;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar8 = puVar7;
  func_0x000107c51bb0();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c3d93c();
    func_0x000107c61170(puVar8);
    func_0x000107c57dec(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar7);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x103ac6e6c);
  (*pcVar12)();
}



/* Entry: 103ac711c; end: 103ac725b;  */

void FUN_103ac711c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x3;
  ulong in_x4;
  undefined *in_x5;
  long in_x6;
  code *in_x7;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(in_x6 + 0x10,auStack_58,0,0);
  puVar1 = (undefined8 *)(in_x6 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  if (in_x5 == (undefined *)0x0) {
    if (in_x4 >> 0x3c < 0xf) {
      func_0x000100de78a0(in_x3,in_x4);
      uVar4 = in_x3;
      FUN_103ac7920(in_x3,in_x4);
      (*in_x7)();
      func_0x000107c6142c(uVar4);
      func_0x0001000b44c0(in_x3,in_x4);
      goto LAB_103ac7200;
    }
    puVar3 = puVar1;
    FUN_103ac77f8();
    in_x5 = &UNK_1106cb930;
    func_0x000107c613f8(&UNK_1106cb930,puVar3,0,0);
    *puVar3 = 0;
    (*in_x7)();
  }
  else {
    puVar3 = puVar1;
    FUN_103ac77f8();
    puVar2 = &UNK_1106cb930;
    func_0x000107c613f8(&UNK_1106cb930,puVar3,0,0);
    *puVar3 = in_x5;
    func_0x000107c614b0(in_x5);
    func_0x000107c614b0(in_x5);
    (*in_x7)(puVar2,1);
    func_0x000107c614ac(puVar2);
  }
  func_0x000107c614ac(in_x5);
LAB_103ac7200:
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 103ac725c; end: 103ac7283;  */

void FUN_103ac725c(undefined8 param_1)

{
  func_0x000107c5d880();
                    /* WARNING: Could not recover jumptable at 0x00010c290a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_useSnapTokenHeaderWithAccessType_112681cb8,6)
  ;
  return;
}



/* Entry: 103ac7284; end: 103ac72e3; -[_TtC37SCSearchPreTypeNetworkingServicesImpl29SearchPreTypeNetworkRequester init] */

void FUN_103ac7284(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSearchPreTypeNetworkingServicesImpl.SearchPreTypeNetworkRequester",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ac72b0);
  (*pcVar1)();
}



/* Entry: 103ac72e4; end: 103ac738b; -[_TtC37SCSearchPreTypeNetworkingServicesImpl29SearchPreTypeNetworkRequester .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103ac72e4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6ed0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6ed8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6ee0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6ee8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6ef0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe6ef8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fe6eb8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe6ec8));
  param_1 = param_1 + _DAT_112fe6eb0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103ac738c; end: 103ac73ab;  */

void FUN_103ac738c(void)

{
  func_0x000107c61168(&PTR_PTR_112924388);
  return;
}



/* Entry: 103ac73ac; end: 103ac73cf;  */

undefined8 FUN_103ac73ac(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103ac73d0; end: 103ac77a7;  */

/* WARNING: Possible PIC construction at 0x000103ac74a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac7674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac7684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac7694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac76ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac7768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ac76b0) */
/* WARNING: Removing unreachable block (ram,0x000103ac7698) */
/* WARNING: Removing unreachable block (ram,0x000103ac7688) */
/* WARNING: Removing unreachable block (ram,0x000103ac7678) */
/* WARNING: Removing unreachable block (ram,0x000103ac74a4) */
/* WARNING: Removing unreachable block (ram,0x000103ac7720) */
/* WARNING: Removing unreachable block (ram,0x000103ac7538) */
/* WARNING: Removing unreachable block (ram,0x000103ac776c) */

void FUN_103ac73d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &UNK_1106cb5d0;
  func_0x000107c613fc(&UNK_1106cb5d0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 **)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c61434();
  FUN_103ac6a4c();
  puVar3 = param_3;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    FUN_103ac77f8();
    puVar4 = &UNK_1106cb930;
    func_0x000107c613f8(&UNK_1106cb930,puVar3,0,0);
    *puVar3 = 0;
    FUN_103ac605c();
    func_0x000107c614ac(puVar4);
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x000107c5ee30();
    param_3 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103ac77a8; end: 103ac77eb;  */

void FUN_103ac77a8(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103ac77ec; end: 103ac77f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac77ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112fe6eb8);
    puVar3 = &UNK_1106cb670;
    func_0x000107c613fc(&UNK_1106cb670,0x38,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    puVar3[0x18] = (char)param_2;
    *(long *)(puVar3 + 0x20) = lVar2;
    *(undefined8 *)(puVar3 + 0x28) = uVar1;
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
    uStack_78 = 0x103ac7dec;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1106cb688;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c615f0(uVar6);
    func_0x000103ac7e00(param_1,param_2);
    func_0x000107c61174(lVar2);
    func_0x000107c61434(uVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 103ac77f8; end: 103ac785f;  */

void FUN_103ac77f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4ddd0;
  func_0x000107c61520(&UNK_10dc4ddd0,&UNK_1106cb930);
  puRam0000000112fe6f28 = puVar1;
  return;
}



/* Entry: 103ac7860; end: 103ac791f;  */

/* WARNING: Removing unreachable block (ram,0x000103ac79dc) */

undefined * FUN_103ac7860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long extraout_x8;
  undefined *puVar12;
  long extraout_x12;
  undefined *unaff_x20;
  long lVar13;
  long lVar14;
  long lStack_190;
  undefined1 *puStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined1 auStack_150 [32];
  long alStack_130 [4];
  undefined1 auStack_110 [24];
  long lStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [24];
  long lStack_b8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar3 = 0;
  if (unaff_x20 == (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)&lStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610f8(PTR_PTR_1126ad870);
  func_0x00010006c00c(lVar3,param_2);
  lVar11 = lVar3;
  FUN_103ac7860(lVar3,param_2);
  func_0x00010006c090(lVar3,param_2);
  puStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 != 0) {
    lVar3 = lVar11;
    func_0x000107c51ba8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac7d94);
      (*pcVar2)();
    }
    func_0x000107c600f4(lVar13 - extraout_x12);
    func_0x000107c61170(lVar3);
    func_0x000107c5ed4c(auStack_d0);
    puVar1 = PTR___sypN_11034f1a8;
    if (lStack_b8 == 0) {
      puStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        func_0x000100102924(auStack_d0,auStack_f0);
        func_0x0001000bb420(auStack_f0,auStack_110);
        uVar5 = 0;
        FUN_103ac7d98(0,0x112fe6f30,&PTR_PTR_1126d3338);
        plVar6 = alStack_130;
        func_0x000107c6147c(plVar6,auStack_110,puVar1 + 8,uVar5,6);
        if ((int)plVar6 != 0) {
          lStack_168 = alStack_130[0];
          lVar3 = alStack_130[0];
          func_0x000107c50704();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac7d98);
            (*pcVar2)();
          }
          func_0x000107c600f4(lVar13);
          func_0x000107c61170(lVar3);
          while (func_0x000107c5ed4c(auStack_110), lStack_f8 != 0) {
            func_0x000100102924(auStack_110,alStack_130);
            func_0x0001000bb420(alStack_130,auStack_150);
            uVar5 = 0;
            FUN_103ac7d98(0,0x112fe6f38,&PTR_PTR_1126d3340);
            puVar7 = &uStack_158;
            puVar10 = auStack_150;
            func_0x000107c6147c(puVar7,puVar10,puVar1 + 8,uVar5,6);
            uVar9 = uStack_158;
            if ((int)puVar7 == 0) {
LAB_103ac7b50:
              func_0x000100183ab8(alStack_130);
            }
            else {
              uVar8 = uStack_158;
              func_0x000107c5cc18();
              func_0x000107c61180();
              if (uVar8 == 0) {
                func_0x000107c61170(uVar9);
                func_0x000100183ab8(alStack_130);
              }
              else {
                uStack_170 = uVar9;
                uVar9 = uVar8;
                lStack_178 = lVar11;
                func_0x000107c5c82c();
                func_0x000107c61180();
                func_0x000107c61170(uVar8);
                if (uVar9 == 0) {
                  func_0x000100183ab8(alStack_130);
                  func_0x000107c61170(uStack_170);
                  lVar11 = lStack_178;
                }
                else {
                  uVar8 = uVar9;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar9);
                  uVar9 = uVar8 & 0xffffffffffff;
                  if (((ulong)puVar10 & 0x2000000000000000) != 0) {
                    uVar9 = (ulong)puVar10 >> 0x38 & 0xf;
                  }
                  if (uVar9 != 0) {
                    puVar12 = puStack_160;
                    uStack_180 = uVar8;
                    func_0x000107c61558();
                    lVar11 = lStack_178;
                    puStack_188 = puVar10;
                    if (((ulong)puVar12 & 1) == 0) {
                      puVar12 = (undefined *)0x0;
                      func_0x0001000d182c(0,*(long *)(puStack_160 + 0x10) + 1,1);
                      puStack_160 = puVar12;
                    }
                    uVar9 = *(ulong *)(puStack_160 + 0x10);
                    lVar3 = uVar9 + 1;
                    puVar12 = puStack_160;
                    if (*(ulong *)(puStack_160 + 0x18) >> 1 <= uVar9) {
                      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_160 + 0x18));
                      lStack_190 = lVar3;
                      func_0x0001000d182c(puVar12,lVar3,1,puStack_160);
                      lVar3 = lStack_190;
                    }
                    *(long *)(puVar12 + 0x10) = lVar3;
                    *(ulong *)(puVar12 + uVar9 * 0x10 + 0x20) = uStack_180;
                    *(undefined1 **)(puVar12 + uVar9 * 0x10 + 0x28) = puStack_188;
                    puStack_160 = puVar12;
                    func_0x000107c61170(uStack_170);
                    goto LAB_103ac7b50;
                  }
                  func_0x000100183ab8(alStack_130);
                  func_0x000107c6142c(puVar10);
                  func_0x000107c61170(uStack_170);
                  lVar11 = lStack_178;
                }
              }
            }
          }
          func_0x000107c61170(lStack_168);
          (**(code **)(lVar14 + 8))(lVar13,lVar4);
        }
        func_0x000100183ab8(auStack_f0);
        func_0x000107c5ed4c(auStack_d0);
      } while (lStack_b8 != 0);
    }
    (**(code **)(lVar14 + 8))(lVar13 - extraout_x12,lVar4);
    func_0x000107c61170(lVar11);
  }
  return puStack_160;
}



/* Entry: 103ac7920; end: 103ac7d97;  */

/* WARNING: Removing unreachable block (ram,0x000103ac79dc) */

undefined * FUN_103ac7920(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long extraout_x8;
  undefined *puVar12;
  long extraout_x12;
  long lVar13;
  long lVar14;
  long lStack_150;
  undefined1 *puStack_148;
  ulong uStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined1 auStack_110 [32];
  long alStack_f0 [4];
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)&lStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610f8(PTR_PTR_1126ad870);
  func_0x00010006c00c(param_1,param_2);
  lVar4 = param_1;
  FUN_103ac7860(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c51ba8();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac7d94);
      (*pcVar2)();
    }
    func_0x000107c600f4(lVar13 - extraout_x12);
    func_0x000107c61170(lVar5);
    func_0x000107c5ed4c(auStack_90);
    puVar1 = PTR___sypN_11034f1a8;
    if (lStack_78 == 0) {
      puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        func_0x000100102924(auStack_90,auStack_b0);
        func_0x0001000bb420(auStack_b0,auStack_d0);
        uVar6 = 0;
        FUN_103ac7d98(0,0x112fe6f30,&PTR_PTR_1126d3338);
        plVar7 = alStack_f0;
        func_0x000107c6147c(plVar7,auStack_d0,puVar1 + 8,uVar6,6);
        if ((int)plVar7 != 0) {
          lStack_128 = alStack_f0[0];
          lVar5 = alStack_f0[0];
          func_0x000107c50704();
          func_0x000107c61180();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac7d98);
            (*pcVar2)();
          }
          func_0x000107c600f4(lVar13);
          func_0x000107c61170(lVar5);
          while (func_0x000107c5ed4c(auStack_d0), lStack_b8 != 0) {
            func_0x000100102924(auStack_d0,alStack_f0);
            func_0x0001000bb420(alStack_f0,auStack_110);
            uVar6 = 0;
            FUN_103ac7d98(0,0x112fe6f38,&PTR_PTR_1126d3340);
            puVar8 = &uStack_118;
            puVar11 = auStack_110;
            func_0x000107c6147c(puVar8,puVar11,puVar1 + 8,uVar6,6);
            uVar10 = uStack_118;
            if ((int)puVar8 == 0) {
LAB_103ac7b50:
              func_0x000100183ab8(alStack_f0);
            }
            else {
              uVar9 = uStack_118;
              func_0x000107c5cc18();
              func_0x000107c61180();
              if (uVar9 == 0) {
                func_0x000107c61170(uVar10);
                func_0x000100183ab8(alStack_f0);
              }
              else {
                uStack_130 = uVar10;
                uVar10 = uVar9;
                lStack_138 = lVar4;
                func_0x000107c5c82c();
                func_0x000107c61180();
                func_0x000107c61170(uVar9);
                if (uVar10 == 0) {
                  func_0x000100183ab8(alStack_f0);
                  func_0x000107c61170(uStack_130);
                  lVar4 = lStack_138;
                }
                else {
                  uVar9 = uVar10;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar10);
                  uVar10 = uVar9 & 0xffffffffffff;
                  if (((ulong)puVar11 & 0x2000000000000000) != 0) {
                    uVar10 = (ulong)puVar11 >> 0x38 & 0xf;
                  }
                  if (uVar10 != 0) {
                    puVar12 = puStack_120;
                    uStack_140 = uVar9;
                    func_0x000107c61558();
                    lVar4 = lStack_138;
                    puStack_148 = puVar11;
                    if (((ulong)puVar12 & 1) == 0) {
                      puVar12 = (undefined *)0x0;
                      func_0x0001000d182c(0,*(long *)(puStack_120 + 0x10) + 1,1);
                      puStack_120 = puVar12;
                    }
                    uVar10 = *(ulong *)(puStack_120 + 0x10);
                    lVar5 = uVar10 + 1;
                    puVar12 = puStack_120;
                    if (*(ulong *)(puStack_120 + 0x18) >> 1 <= uVar10) {
                      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_120 + 0x18));
                      lStack_150 = lVar5;
                      func_0x0001000d182c(puVar12,lVar5,1,puStack_120);
                      lVar5 = lStack_150;
                    }
                    *(long *)(puVar12 + 0x10) = lVar5;
                    *(ulong *)(puVar12 + uVar10 * 0x10 + 0x20) = uStack_140;
                    *(undefined1 **)(puVar12 + uVar10 * 0x10 + 0x28) = puStack_148;
                    puStack_120 = puVar12;
                    func_0x000107c61170(uStack_130);
                    goto LAB_103ac7b50;
                  }
                  func_0x000100183ab8(alStack_f0);
                  func_0x000107c6142c(puVar11);
                  func_0x000107c61170(uStack_130);
                  lVar4 = lStack_138;
                }
              }
            }
          }
          func_0x000107c61170(lStack_128);
          (**(code **)(lVar14 + 8))(lVar13,lVar3);
        }
        func_0x000100183ab8(auStack_b0);
        func_0x000107c5ed4c(auStack_90);
      } while (lStack_78 != 0);
    }
    (**(code **)(lVar14 + 8))(lVar13 - extraout_x12,lVar3);
    func_0x000107c61170(lVar4);
  }
  return puStack_120;
}



/* Entry: 103ac7d98; end: 103ac7dd7;  */

void FUN_103ac7d98(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103ac7dd8; end: 103ac7e33;  */

void FUN_103ac7dd8(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 103ac7e34; end: 103ac7e4b;  */

void FUN_103ac7e34(void)

{
  long unaff_x20;
  
  FUN_103ac534c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103ac7e4c; end: 103ac7e9b;  */

void FUN_103ac7e4c(long param_1,long param_2)

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



/* Entry: 103ac7e9c; end: 103ac8067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac7e9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar6 = puStack_80;
  lVar1 = *(long *)(puStack_80 + _DAT_11302e640);
  func_0x000107c61174();
  func_0x000107c61170(puVar6);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    FUN_103ac89a4();
    lVar3 = lVar2;
    func_0x000107c3ebc4();
    func_0x000107c615e8(lVar2);
    if ((int)lVar3 != 0) {
      puVar6 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar4 = &UNK_1106cb820;
      func_0x000107c613fc(&UNK_1106cb820,0x30,7);
      *(undefined8 *)(puVar4 + 0x10) = param_3;
      *(long *)(puVar4 + 0x18) = lVar1;
      *(undefined8 *)(puVar4 + 0x20) = param_4;
      *(undefined8 *)(puVar4 + 0x28) = param_5;
      pcStack_60 = FUN_103ac84fc;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_103ac8508;
      puStack_68 = &UNK_1106cb838;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c61174(lVar1);
      func_0x000107c6157c(param_3);
      func_0x000107c6157c(param_4);
      func_0x000107c6157c(param_5);
      func_0x000107c61574(puVar4);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x0001002b4ca4(0);
      func_0x000107c610f8();
      puVar4 = puVar6;
      func_0x000107c61174(puVar6);
      func_0x000103b84bd4();
      func_0x000107c61170(puVar4);
      goto LAB_103ac8040;
    }
  }
  func_0x0001002b4ca4(0);
  func_0x000107c610f8();
  puVar6 = (undefined *)0x0;
  func_0x000103b84bd4();
LAB_103ac8040:
  func_0x000107c61170(lVar1);
  *param_1 = puVar6;
  return;
}



/* Entry: 103ac8068; end: 103ac8083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac8068(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar8 = &puStack_80;
  func_0x000100083b20(&puStack_80,*(undefined8 *)(unaff_x20 + 0x10));
  puVar9 = puStack_80;
  lVar4 = *(long *)(puStack_80 + _DAT_11302e640);
  func_0x000107c61174();
  func_0x000107c61170(puVar9);
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    FUN_103ac89a4();
    lVar6 = lVar5;
    func_0x000107c3ebc4();
    func_0x000107c615e8(lVar5);
    if ((int)lVar6 != 0) {
      puVar9 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar7 = &UNK_1106cb820;
      func_0x000107c613fc(&UNK_1106cb820,0x30,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar2;
      *(long *)(puVar7 + 0x18) = lVar4;
      *(undefined8 *)(puVar7 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + 0x28) = uVar3;
      pcStack_60 = FUN_103ac84fc;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_103ac8508;
      puStack_68 = &UNK_1106cb838;
      puStack_58 = puVar7;
      func_0x000107c60bc4(&puStack_80);
      puVar7 = puStack_58;
      func_0x000107c61174(lVar4);
      func_0x000107c6157c(uVar2);
      func_0x000107c6157c(uVar1);
      func_0x000107c6157c(uVar3);
      func_0x000107c61574(puVar7);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x0001002b4ca4(0);
      func_0x000107c610f8();
      puVar7 = puVar9;
      func_0x000107c61174(puVar9);
      func_0x000103b84bd4();
      func_0x000107c61170(puVar7);
      goto LAB_103ac8040;
    }
  }
  func_0x0001002b4ca4(0);
  func_0x000107c610f8();
  puVar9 = (undefined *)0x0;
  func_0x000103b84bd4();
LAB_103ac8040:
  func_0x000107c61170(lVar4);
  *param_1 = puVar9;
  return;
}



/* Entry: 103ac8084; end: 103ac84fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103ac8084(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long extraout_x8;
  long lVar14;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  func_0x000100083b20(&uStack_68);
  uVar5 = uStack_68;
  uVar3 = uStack_68;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  lVar4 = 0;
  func_0x000103ac585c();
  func_0x000107c613fc();
  uVar5 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar4 + 0x18) = param_2;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(undefined8 *)(lVar4 + 0x10) = uVar3;
  func_0x000107c61174();
  uStack_98 = param_2;
  func_0x000100083b20(&uStack_68);
  uVar5 = uStack_68;
  func_0x000107c44f4c();
  func_0x000107c61180();
  uStack_a0 = uVar5;
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar5 = uStack_70;
  func_0x000107c44f60();
  func_0x000107c61180();
  uStack_a8 = uVar5;
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&uStack_78);
  uVar5 = uStack_78;
  func_0x000107c3e980();
  func_0x000107c61180();
  uStack_b0 = uVar5;
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar5 = uStack_80;
  func_0x000107c3e944();
  func_0x000107c61180();
  uStack_b8 = uVar5;
  func_0x000107c61170(uStack_80);
  lVar6 = 0;
  FUN_103ac738c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar1 = _DAT_112fe6eb8;
  (**(code **)(lVar14 + 0x68))
            (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar2);
  puVar8 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f19ae60);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar14 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(lVar7 + lVar1) = puVar8;
  *(undefined8 *)(lVar7 + _DAT_112fe6ec0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112fe6ec8) = 0;
  func_0x000107c61614(lVar7 + _DAT_112fe6eb0,0);
  *(undefined8 *)(lVar7 + _DAT_112fe6ed0) = uStack_a0;
  *(undefined8 *)(lVar7 + _DAT_112fe6ed8) = uStack_a8;
  *(undefined8 *)(lVar7 + _DAT_112fe6ee0) = uStack_b0;
  *(undefined8 *)(lVar7 + _DAT_112fe6ee8) = uStack_b8;
  *(undefined8 *)(lVar7 + _DAT_112fe6ef0) = uStack_98;
  *(long *)(lVar7 + _DAT_112fe6ef8) = lVar4;
  puVar8 = PTR_s_init_1125d9248;
  lStack_90 = lVar7;
  lStack_88 = lVar6;
  func_0x000107c61174();
  func_0x000107c61174();
  uStack_98 = uStack_a0;
  func_0x000107c61174();
  uVar5 = uStack_b0;
  uStack_a0 = uStack_a8;
  func_0x000107c61174(uStack_b0);
  uVar3 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  func_0x000107c6157c(lVar4);
  plVar9 = &lStack_90;
  func_0x000107c61154(plVar9,puVar8);
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  func_0x0001048d6b34(0);
  func_0x000107c61174(plVar9);
  func_0x000107c61174();
  plVar10 = plVar9;
  func_0x0001048d69d4();
  plVar11 = plVar10;
  func_0x0001048ba9a8();
  func_0x000107c61170(plVar10);
  uVar12 = 0;
  func_0x0001000aad1c(0);
  func_0x0001000aad3c();
  puVar8 = &UNK_1106cb870;
  func_0x000107c613fc(&UNK_1106cb870,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,plVar9);
  func_0x000107c61170(plVar9);
  puVar13 = &UNK_1106cb898;
  func_0x000107c613fc(&UNK_1106cb898,0x20,7);
  *(undefined **)(puVar13 + 0x10) = puVar8;
  *(long *)(puVar13 + 0x18) = lVar4;
  func_0x000107c6157c(lVar4);
  func_0x000107c6157c(puVar8);
  plVar10 = plVar11;
  func_0x0001009107f0(plVar11,uVar12,0,0,0x103ac855c,puVar13);
  func_0x000107c61170(plVar9);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(lVar4);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(plVar11);
  func_0x000107c615e8(plVar10);
  return plVar9;
}



/* Entry: 103ac84fc; end: 103ac8507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103ac84fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long extraout_x8;
  long unaff_x20;
  long lVar14;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  func_0x000107c5f804(0,uVar8,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  func_0x000100083b20(&uStack_68);
  uVar4 = uStack_68;
  uVar12 = uStack_68;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  lVar3 = 0;
  func_0x000103ac585c();
  func_0x000107c613fc();
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar3 + 0x18) = uVar8;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined8 *)(lVar3 + 0x10) = uVar12;
  func_0x000107c61174();
  uStack_98 = uVar8;
  func_0x000100083b20(&uStack_68);
  uVar8 = uStack_68;
  func_0x000107c44f4c();
  func_0x000107c61180();
  uStack_a0 = uVar8;
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar8 = uStack_70;
  func_0x000107c44f60();
  func_0x000107c61180();
  uStack_a8 = uVar8;
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&uStack_78);
  uVar8 = uStack_78;
  func_0x000107c3e980();
  func_0x000107c61180();
  uStack_b0 = uVar8;
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar8 = uStack_80;
  func_0x000107c3e944();
  func_0x000107c61180();
  uStack_b8 = uVar8;
  func_0x000107c61170(uStack_80);
  lVar5 = 0;
  FUN_103ac738c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = _DAT_112fe6eb8;
  (**(code **)(lVar14 + 0x68))
            (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar2);
  puVar7 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar8 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f19ae60);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar8);
  (**(code **)(lVar14 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(lVar6 + lVar1) = puVar7;
  *(undefined8 *)(lVar6 + _DAT_112fe6ec0) = 0;
  *(undefined8 *)(lVar6 + _DAT_112fe6ec8) = 0;
  func_0x000107c61614(lVar6 + _DAT_112fe6eb0,0);
  *(undefined8 *)(lVar6 + _DAT_112fe6ed0) = uStack_a0;
  *(undefined8 *)(lVar6 + _DAT_112fe6ed8) = uStack_a8;
  *(undefined8 *)(lVar6 + _DAT_112fe6ee0) = uStack_b0;
  *(undefined8 *)(lVar6 + _DAT_112fe6ee8) = uStack_b8;
  *(undefined8 *)(lVar6 + _DAT_112fe6ef0) = uStack_98;
  *(long *)(lVar6 + _DAT_112fe6ef8) = lVar3;
  puVar7 = PTR_s_init_1125d9248;
  lStack_90 = lVar6;
  lStack_88 = lVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  uStack_98 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  uStack_a0 = uStack_a8;
  func_0x000107c61174(uStack_b0);
  uVar4 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  func_0x000107c6157c(lVar3);
  plVar9 = &lStack_90;
  func_0x000107c61154(plVar9,puVar7);
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  func_0x0001048d6b34(0);
  func_0x000107c61174(plVar9);
  func_0x000107c61174();
  plVar10 = plVar9;
  func_0x0001048d69d4();
  plVar11 = plVar10;
  func_0x0001048ba9a8();
  func_0x000107c61170(plVar10);
  uVar12 = 0;
  func_0x0001000aad1c(0);
  func_0x0001000aad3c();
  puVar7 = &UNK_1106cb870;
  func_0x000107c613fc(&UNK_1106cb870,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,plVar9);
  func_0x000107c61170(plVar9);
  puVar13 = &UNK_1106cb898;
  func_0x000107c613fc(&UNK_1106cb898,0x20,7);
  *(undefined **)(puVar13 + 0x10) = puVar7;
  *(long *)(puVar13 + 0x18) = lVar3;
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(puVar7);
  plVar10 = plVar11;
  func_0x0001009107f0(plVar11,uVar12,0,0,0x103ac855c,puVar13);
  func_0x000107c61170(plVar9);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(plVar11);
  func_0x000107c615e8(plVar10);
  return plVar9;
}



/* Entry: 103ac8508; end: 103ac853f;  */

void FUN_103ac8508(long param_1)

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



/* Entry: 103ac8540; end: 103ac858b;  */

void FUN_103ac8540(long param_1,long param_2)

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



/* Entry: 103ac858c; end: 103ac8683;  */

ulong * FUN_103ac858c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar2) {
      func_0x000107c614b0(uVar2);
    }
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    func_0x000107c614ac();
    *param_1 = *param_2;
  }
  else {
    func_0x000107c614b0(uVar2);
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000107c614ac(uVar1);
  }
  return param_1;
}



/* Entry: 103ac8684; end: 103ac877f;  */

int FUN_103ac8684(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffa < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffb;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (5 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -4;
  }
  return iVar1;
}



/* Entry: 103ac8780; end: 103ac87cf;  */

void FUN_103ac8780(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000022;
  func_0x000100442ccc(0xd000000000000022,0x800000010f19b140,0);
  uRam000000011380ccf0 = uVar1;
  return;
}



/* Entry: 103ac87d0; end: 103ac87eb; +[SCStoriesSearchHeaderConfigKeys discoverSearchTitleEnabled] */

void FUN_103ac87d0(void)

{
  if (lRam0000000113584ad8 != -1) {
    func_0x000107c61568(0x113584ad8,FUN_103ac8780);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380ccf0);
  return;
}



/* Entry: 103ac87ec; end: 103ac883b;  */

void FUN_103ac87ec(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000028;
  func_0x000100442ccc(0xd000000000000028,0x800000010f19b110,0);
  uRam000000011380ccf8 = uVar1;
  return;
}



/* Entry: 103ac883c; end: 103ac8857; +[SCStoriesSearchHeaderConfigKeys discoverHeaderFeedManagementDisabled] */

void FUN_103ac883c(void)

{
  if (lRam0000000113584ae0 != -1) {
    func_0x000107c61568(0x113584ae0,FUN_103ac87ec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380ccf8);
  return;
}



/* Entry: 103ac8858; end: 103ac88a7;  */

void FUN_103ac8858(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000025;
  func_0x000100442ccc(0xd000000000000025,0x800000010f19b0b0,0);
  uRam000000011380cd08 = uVar1;
  return;
}



/* Entry: 103ac88a8; end: 103ac88c3; +[SCStoriesSearchHeaderConfigKeys discoverFeedThumbnailRingDisabled] */

void FUN_103ac88a8(void)

{
  if (lRam0000000113584af0 != -1) {
    func_0x000107c61568(0x113584af0,FUN_103ac8858);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cd08);
  return;
}



/* Entry: 103ac88c4; end: 103ac8913;  */

void FUN_103ac88c4(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000023;
  func_0x000100bd65fc(0xd000000000000023,0x800000010f19b050,500);
  uRam000000011380cd18 = uVar1;
  return;
}



/* Entry: 103ac8914; end: 103ac8953;  */

undefined8 FUN_103ac8914(void)

{
  if (lRam0000000113584b00 != -1) {
    func_0x000107c61568(0x113584b00,FUN_103ac88c4);
  }
  return 0x11380cd18;
}



/* Entry: 103ac8954; end: 103ac89a3;  */

void FUN_103ac8954(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000022;
  func_0x000100442ccc(0xd000000000000022,0x800000010f19b020,0);
  uRam000000011380cd20 = uVar1;
  return;
}



/* Entry: 103ac89a4; end: 103ac89e3;  */

undefined8 FUN_103ac89a4(void)

{
  if (lRam0000000113584b08 != -1) {
    func_0x000107c61568(0x113584b08,FUN_103ac8954);
  }
  return 0x11380cd20;
}



/* Entry: 103ac89e4; end: 103ac89ff; +[SCStoriesSearchHeaderConfigKeys trendingCarousel4thTabEnabled] */

void FUN_103ac89e4(void)

{
  if (lRam0000000113584b08 != -1) {
    func_0x000107c61568(0x113584b08,FUN_103ac8954);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cd20);
  return;
}



/* Entry: 103ac8a00; end: 103ac8a3b; -[SCStoriesSearchHeaderConfigKeys init] */

void FUN_103ac8a00(undefined8 param_1)

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



/* Entry: 103ac8a3c; end: 103ac8a6f;  */

void FUN_103ac8a3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ac8a70; end: 103ac8a73; -[SCStoriesSearchHeaderConfigKeys .cxx_destruct] */

void FUN_103ac8a70(void)

{
  return;
}



/* Entry: 103ac8a74; end: 103ac8a93;  */

void FUN_103ac8a74(void)

{
  func_0x000107c61168(&PTR_PTR_112924490);
  return;
}



/* Entry: 103ac8a94; end: 103ac8aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac8a94(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe6f78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ac8b00; end: 103ac8b5f; -[_TtC54LensProcessingSnapRendererScopedFactoryServiceProvider42SCLensProcessingSnapRendererScopedServices init] */

void FUN_103ac8b00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensProcessingSnapRendererScopedFactoryServiceProvider.SCLensProcessingSnapRendererScopedServices"
                      ,0x61,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ac8b2c);
  (*pcVar1)();
}



/* Entry: 103ac8b60; end: 103ac8b6f; -[_TtC54LensProcessingSnapRendererScopedFactoryServiceProvider42SCLensProcessingSnapRendererScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac8b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe6f78));
  return;
}



/* Entry: 103ac8b70; end: 103ac8bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac8b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106cbb68;
  func_0x000107c613fc(&UNK_1106cbb68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  FUN_103dc513c(FUN_103ac8c64,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103ac8bdc; end: 103ac8c3b;  */

undefined1  [16] FUN_103ac8bdc(void)

{
  return ZEXT816(0x1106cbaa8);
}



/* Entry: 103ac8c3c; end: 103ac8c63;  */

void FUN_103ac8c3c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103ac8c64; end: 103ac8c77;  */

void FUN_103ac8c64(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103ac8c78; end: 103ac8ccb;  */

undefined8 FUN_103ac8c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100c4d6e0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 103ac8ccc; end: 103ac8d07;  */

void FUN_103ac8ccc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ac8d08; end: 103ac8d4b;  */

undefined1  [16] FUN_103ac8d08(void)

{
  return ZEXT816(0x1106cbd68);
}



/* Entry: 103ac8d4c; end: 103ac8d9f;  */

void FUN_103ac8d4c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103ac8da0; end: 103ac8e0b;  */

long FUN_103ac8da0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x000100c4cec0();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000100c4d294();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 103ac8e0c; end: 103ac8e37;  */

void FUN_103ac8e0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ac8e38; end: 103ac8e7b;  */

undefined1  [16] FUN_103ac8e38(void)

{
  return ZEXT816(0x1106cbe08);
}



/* Entry: 103ac8e7c; end: 103ac8ecf;  */

void FUN_103ac8e7c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103ac8ed0; end: 103ac96c7;  */

void FUN_103ac8ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  *(undefined8 *)(unaff_x20 + 0x60) = param_8;
  *(undefined8 *)(unaff_x20 + 0x68) = param_9;
  *(undefined8 *)(unaff_x20 + 0x70) = param_10;
  *(undefined8 *)(unaff_x20 + 0x78) = param_11;
  func_0x0001000285a8(0x112de5ba0,&UNK_10db261c0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  uVar5 = param_12;
  func_0x000107c6157c(param_12);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001000285a8(0x112de5ba8,&UNK_10d9b0520);
  func_0x000107c610f8();
  uVar5 = param_13;
  func_0x000107c6157c(param_13);
  func_0x00010025a71c();
  puVar2 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  func_0x0001000285a8(0x112de5bb0,&UNK_10db261b0);
  func_0x000107c610f8();
  uVar5 = param_14;
  func_0x000107c6157c(param_14);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  puVar4 = PTR_PTR_1126ad880;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f19b740);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc71f0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc6a20);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efc6510);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar5 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efb7910);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc7220);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19ca0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efc7240);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc7270);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc72a0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  puVar1 = puVar4;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
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
  func_0x000107c61574(param_12);
  func_0x000107c61574(param_13);
  func_0x000107c61574(param_14);
  *(undefined **)(unaff_x20 + 0x80) = puVar1;
  return;
}



/* Entry: 103ac96c8; end: 103ac9773;  */

void FUN_103ac96c8(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 103ac9774; end: 103ac97c3;  */

undefined8 FUN_103ac9774(void)

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



/* Entry: 103ac97c4; end: 103ac9807;  */

undefined1  [16] FUN_103ac97c4(void)

{
  return ZEXT816(0x1106cbea8);
}



/* Entry: 103ac9808; end: 103ac982f;  */

void FUN_103ac9808(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103ac9830; end: 103ac9837;  */

undefined8 FUN_103ac9830(void)

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



/* Entry: 103ac9838; end: 103ac9f97;  */

long FUN_103ac9838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  puVar1 = PTR_PTR_1126ad888;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_14);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f19b740);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0dbec0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f19b760);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f19b790);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efc6510);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f19b7c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f19b7f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f19b810);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_13);
  func_0x000107c61174(puVar1);
  uVar2 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c615f0(param_14);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f19b830);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
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
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c615e8(param_14);
  return unaff_x20;
}



/* Entry: 103ac9f98; end: 103aca03b;  */

void FUN_103ac9f98(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}


