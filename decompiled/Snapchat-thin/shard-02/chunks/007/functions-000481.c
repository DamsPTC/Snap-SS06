/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020c09d4; end: 1020c09df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c09d4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = lVar1;
  func_0x000100083b20(&uStack_48);
  FUN_1020c12c0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112e56c28) = 0;
  *(long *)(lVar6 + _DAT_112e56c30) = lVar1;
  *(undefined8 *)(lVar6 + _DAT_112e56c38) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112e56c40) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112e56c48) = uStack_48;
  puVar4 = PTR_s_init_1125d9248;
  lStack_58 = lVar6;
  lStack_50 = lVar5;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  plVar7 = &lStack_58;
  func_0x000107c61154(plVar7,puVar4);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 1020c09e0; end: 1020c0a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c09e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e56c28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56c30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e56c38) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e56c40) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e56c48) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020c0a78; end: 1020c0abb;  */

void FUN_1020c0a78(void)

{
  func_0x000107c614f0();
  FUN_1020c0abc();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020c0abc; end: 1020c0b87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c0abc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  lVar1 = lStack_38;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_38);
    lVar2 = lStack_38;
    func_0x000107c4ffe8(lStack_38);
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    func_0x000107c615e8(lVar2);
  }
  lVar2 = _DAT_112e56c28;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112e56c28) != 0) {
    func_0x000107c5e37c(*(long *)(unaff_x20 + _DAT_112e56c28),param_2,0);
    uVar3 = 0;
    if (*(long *)(unaff_x20 + lVar2) != 0) {
      func_0x000107c4ff2c();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    }
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1020c0b88; end: 1020c0bdf; -[_TtC20NearMeImplementation25NearMeActionMenuPresenter dealloc] */

void FUN_1020c0b88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_1020c0abc();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020c0be0; end: 1020c0c47; -[_TtC20NearMeImplementation25NearMeActionMenuPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020c0c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c0c30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c0be0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e56c40));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e56c38));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e56c30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56c28));
  return;
}



/* Entry: 1020c0c48; end: 1020c0ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c0c48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  code **ppcVar9;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 *puVar11;
  code *apcStack_90 [5];
  undefined8 uStack_68;
  
  lVar3 = 0x112e56c78;
  func_0x0001000285a8(0x112e56c78,&UNK_10da5a0c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)apcStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = (undefined8 *)(lVar6 - extraout_x12);
  uVar10 = *param_1;
  FUN_1020c0ffc(uVar10,param_1[1]);
  lVar4 = 0;
  FUN_1020e2c14();
  func_0x0001020c1308(param_1,(long)puVar11 + (long)*(int *)(lVar4 + 0x14));
  *puVar11 = uVar10;
  puVar1 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar4 + 0x18));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e56c30);
  puVar5 = &UNK_10da5a0c8;
  func_0x000107c614e0();
  puVar1 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = puVar5;
  puVar1[1] = uVar10;
  func_0x0001020c134c(puVar11,lVar6);
  puVar5 = &UNK_10da5a0f0;
  func_0x0001000285a8(0x112e56c80,&UNK_10da5a0f0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(uVar10);
  func_0x000107c5f458();
  func_0x000107c61180();
  func_0x000107c54394();
  lVar3 = lVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar7);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e56c28);
    *(long *)(unaff_x20 + _DAT_112e56c28) = lVar6;
    func_0x000107c61174(lVar6);
    func_0x000107c61170(uVar10);
    puVar7 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    puVar8 = puVar7;
    FUN_1020e74f8();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar5);
    func_0x000107c437a0(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    apcStack_90[4] = FUN_1020c1270;
    uStack_68 = 0;
    apcStack_90[0] = (code *)PTR___NSConcreteStackBlock_11034bd00;
    apcStack_90[1] = (code *)0x42000000;
    apcStack_90[2] = (code *)&UNK_101054b14;
    apcStack_90[3] = (code *)&UNK_1104c80d8;
    ppcVar9 = apcStack_90;
    func_0x000107c60bc4(ppcVar9);
    puVar5 = puVar7;
    func_0x000107c3eae8(puVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppcVar9);
    func_0x000107c61170(puVar7);
    lVar3 = lVar6;
    func_0x000107c5de64(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar7 = PTR_PTR_1126b10a8;
    func_0x000107c610f8(PTR_PTR_1126b10a8);
    uVar10 = 0;
    func_0x0001020c1400(0,0x112d56ea0,&PTR_PTR_1126b10a0);
    func_0x000107c61174(puVar5);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar10);
    func_0x000107c46c9c(puVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar8);
    func_0x000107c61174(puVar7);
    func_0x000107c54394();
    func_0x000107c3d614(puVar7);
    func_0x000107c41c30(lVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c53fcc(puVar7);
    func_0x000107c4ee8c(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e56c48) + _DAT_112e58428));
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar7);
    func_0x0001020c13b8(puVar11);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c0ffc);
  (*pcVar2)();
}



/* Entry: 1020c0ffc; end: 1020c126f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1020c0ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar2 = lStack_68;
    func_0x000107c4ffe8(lStack_68);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar3);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  puVar3 = PTR_PTR_1126b40c0;
  func_0x000107c610f8(PTR_PTR_1126b40c0);
  func_0x000107c469a4(0,0,param_1,0x405e000000000000);
  func_0x0001020c1400(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61434(param_6);
  func_0x000107c60110();
  uVar4 = 0;
  func_0x00010438d810(0);
  func_0x000107c610f8();
  func_0x00010438d238(uVar4,param_1,0x405e000000000000,param_5,param_6,0,0,1,0,0,0,0x100);
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c61174(puVar3);
  func_0x000107c4a8a4(puVar5);
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x00010438caf8(puVar3,puVar5,0xf7,0);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&lStack_68);
  func_0x000107c42c1c(lStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lStack_68);
  return puVar3;
}



/* Entry: 1020c1270; end: 1020c1283;  */

void FUN_1020c1270(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
    return;
  }
  return;
}



/* Entry: 1020c1284; end: 1020c12af; -[_TtC20NearMeImplementation25NearMeActionMenuPresenter init] */

void FUN_1020c1284(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NearMeImplementation.NearMeActionMenuPresenter",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020c12b0);
  (*pcVar1)();
}



/* Entry: 1020c12b0; end: 1020c12bf;  */

undefined1  [16] FUN_1020c12b0(void)

{
  return ZEXT816(0x1104c80c8);
}



/* Entry: 1020c12c0; end: 1020c12df;  */

void FUN_1020c12c0(void)

{
  func_0x000107c61168(&PTR_PTR_11281db78);
  return;
}



/* Entry: 1020c12e0; end: 1020c139b; -[_TtC20NearMeImplementation25NearMeActionMenuPresenter actionSheetDidDismiss:] */

void FUN_1020c12e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020c0abc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020c139c; end: 1020c13b7;  */

void FUN_1020c139c(long param_1,long param_2)

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



/* Entry: 1020c13b8; end: 1020c143f;  */

undefined8 FUN_1020c13b8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e56c78;
  func_0x0001000285a8(0x112e56c78,&UNK_10da5a0c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1020c1440; end: 1020c158b;  */

void FUN_1020c1440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e56c88,&UNK_10da5a100);
  puVar1 = &UNK_1104c8110;
  func_0x000107c613fc(&UNK_1104c8110,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1020c158c,puVar1);
  return;
}



/* Entry: 1020c158c; end: 1020c1597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c158c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = lVar1;
  func_0x000100083b20(&uStack_48,lVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1020c1b3c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e56c90) = 0;
  *(long *)(lVar5 + _DAT_112e56c98) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e56ca0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e56ca8) = uStack_48;
  puVar3 = PTR_s_init_1125d9248;
  lStack_58 = lVar5;
  lStack_50 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  plVar6 = &lStack_58;
  func_0x000107c61154(plVar6,puVar3);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 1020c1598; end: 1020c1617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c1598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e56c90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56c98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e56ca0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e56ca8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020c1618; end: 1020c165b;  */

void FUN_1020c1618(void)

{
  func_0x000107c614f0();
  FUN_1020c165c();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020c165c; end: 1020c16f7;  */

/* WARNING: Possible PIC construction at 0x0001020c16cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c16d0) */
/* WARNING: Removing unreachable block (ram,0x0001020c16d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c165c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c41868(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e56ca8) + _DAT_112e58420),
                      param_2,0);
  lVar1 = _DAT_112e56c90;
  lVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112e56c90) != 0) {
    func_0x000107c5e37c(*(long *)(unaff_x20 + _DAT_112e56c90),param_2,0);
    lVar3 = *(long *)(unaff_x20 + lVar1);
    if (lVar3 != 0) {
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c16f8);
        (*pcVar2)();
      }
      func_0x000107c4ff34();
      goto code_r0x000107c61170;
    }
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1020c16f8; end: 1020c174f; -[_TtC20NearMeImplementation26FriendsFeedNearMePresenter dealloc] */

void FUN_1020c16f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_1020c165c();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020c1750; end: 1020c17a7; -[_TtC20NearMeImplementation26FriendsFeedNearMePresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020c178c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c1790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c1750(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e56ca0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e56c98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56c90));
  return;
}



/* Entry: 1020c17a8; end: 1020c19fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c17a8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar3 = 0;
  func_0x0001020d05f8();
  uVar11 = uVar3;
  FUN_1020c1a24();
  uVar4 = uVar3;
  uVar9 = uVar11;
  func_0x000107c5f398();
  func_0x0001048580f8(&uStack_90);
  uVar10 = uStack_90;
  func_0x000107c5f1e4(uVar3,uVar11);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e56c98);
  puVar5 = &UNK_10da5a108;
  func_0x000107c614e0();
  uStack_78 = uStack_90;
  uStack_90 = uVar4;
  uStack_88 = uVar9;
  uStack_80 = uVar3;
  puStack_70 = puVar5;
  uStack_68 = uVar11;
  func_0x0001000285a8(0x112e56cb8,&UNK_10da5a130);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61580(uVar11,2);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(puVar5);
  puVar6 = &uStack_90;
  func_0x000107c5f458();
  func_0x000107c61174();
  func_0x000107c54394();
  puVar7 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c19f8);
    (*pcVar2)();
  }
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  lVar1 = _DAT_112e58428;
  lVar12 = *(long *)(unaff_x20 + _DAT_112e56ca8);
  func_0x000107c3d614(*(undefined8 *)(lVar12 + _DAT_112e58428));
  uVar9 = *(undefined8 *)(lVar12 + _DAT_112e58420);
  func_0x000107c61174(uVar9);
  puVar7 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar7 != (undefined8 *)0x0) {
    func_0x000107c3e2c8(uVar9);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar7);
    uVar9 = *(undefined8 *)(lVar12 + lVar1);
    func_0x000107c61174(uVar9);
    func_0x000107c41c30(puVar6);
    func_0x000107c61170(uVar9);
    func_0x000107c61574(uVar11);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(uVar10);
    func_0x000107c61574(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar6);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e56c90);
    *(undefined8 **)(unaff_x20 + _DAT_112e56c90) = puVar6;
    func_0x000107c61170(uVar10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c19fc);
  (*pcVar2)();
}



/* Entry: 1020c19fc; end: 1020c1a23; -[_TtC20NearMeImplementation26FriendsFeedNearMePresenter present] */

void FUN_1020c19fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020c17a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020c1a24; end: 1020c1a67;  */

void FUN_1020c1a24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e56cb0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001020d05f8(0xff);
  puVar2 = &UNK_10da5a7c0;
  func_0x000107c61520(&UNK_10da5a7c0,uVar1);
  puRam0000000112e56cb0 = puVar2;
  return;
}



/* Entry: 1020c1a68; end: 1020c1a93; -[_TtC20NearMeImplementation26FriendsFeedNearMePresenter init] */

void FUN_1020c1a68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NearMeImplementation.FriendsFeedNearMePresenter",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020c1a94);
  (*pcVar1)();
}



/* Entry: 1020c1a94; end: 1020c1acf;  */

void FUN_1020c1a94(undefined8 param_1,undefined8 param_2)

{
  func_0x0001020c1b5c();
  func_0x000107c5f3fc(param_1,&UNK_1104c8348,&UNK_1104c8348,param_2);
  return;
}



/* Entry: 1020c1ad0; end: 1020c1b2b;  */

void FUN_1020c1ad0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  uStack_38 = uVar1;
  func_0x0001020c1b5c();
  func_0x000107c6157c(uVar1);
  func_0x000107c5f400(&uStack_38,&UNK_1104c8348,&UNK_1104c8348,param_1);
  return;
}



/* Entry: 1020c1b2c; end: 1020c1b3b;  */

undefined1  [16] FUN_1020c1b2c(void)

{
  return ZEXT816(0x1104c8138);
}



/* Entry: 1020c1b3c; end: 1020c1b9b;  */

void FUN_1020c1b3c(void)

{
  func_0x000107c61168(&PTR_PTR_11281dc58);
  return;
}



/* Entry: 1020c1b9c; end: 1020c1d23;  */

long * FUN_1020c1b9c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    lVar5 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar5;
    lVar8 = (long)*(int *)(param_3 + 0x18);
    lVar2 = 0;
    func_0x000107c5ede0();
    lVar6 = *(long *)(lVar2 + -8);
    pcVar7 = *(code **)(lVar6 + 0x30);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(lVar5);
    lVar3 = (long)param_2 + lVar8;
    (*pcVar7)(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                          *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    lVar5 = (long)*(int *)(param_3 + 0x1c);
    lVar3 = (long)param_2 + lVar5;
    (*pcVar7)(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar5,(long)param_2 + lVar5,
                          *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020c1d24; end: 1020c1dd7;  */

void FUN_1020c1d24(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001020c1dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 1020c1dd8; end: 1020c1f33;  */

undefined8 * FUN_1020c1dd8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  lVar7 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar3 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar6)(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                        *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar6)(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                        *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1020c1f34; end: 1020c2447;  */

undefined8 * FUN_1020c1f34(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  lVar7 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = (long)param_1 + lVar7;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar7;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar1);
      goto LAB_1020c2048;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar7,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,lVar1);
    goto LAB_1020c2048;
  }
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
LAB_1020c2048:
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar2 = (long)param_1 + lVar7;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar7;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar7,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  return param_1;
}



/* Entry: 1020c2448; end: 1020c2473;  */

void FUN_1020c2448(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020c2474; end: 1020c24e7;  */

void FUN_1020c2474(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_40 = &UNK_10da5a1a0;
  puStack_38 = &UNK_10da5a1a0;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    func_0x000107c6153c(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020c24e8; end: 1020c272b;  */

long * FUN_1020c24e8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar10 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar10;
    lVar14 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar14;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    uVar4 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar4;
    lVar8 = 0;
    func_0x0001020c2460();
    lVar13 = (long)*(int *)(lVar8 + 0x18);
    lVar9 = 0;
    func_0x000107c5ede0();
    lVar11 = *(long *)(lVar9 + -8);
    pcVar15 = *(code **)(lVar11 + 0x30);
    func_0x000107c61434(lVar10);
    func_0x000107c61434(lVar14);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    lVar10 = (long)puVar2 + lVar13;
    (*pcVar15)(lVar10,1,lVar9);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar11 + 0x10))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar9);
      (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar13,0,1,lVar9);
    }
    else {
      lVar10 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar1 + lVar13,(long)puVar2 + lVar13,
                          *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    lVar14 = (long)*(int *)(lVar8 + 0x1c);
    lVar10 = (long)puVar2 + lVar14;
    (*pcVar15)(lVar10,1,lVar9);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar11 + 0x10))((long)puVar1 + lVar14,(long)puVar2 + lVar14,lVar9);
      (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar14,0,1,lVar9);
    }
    else {
      lVar10 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar1 + lVar14,(long)puVar2 + lVar14,
                          *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    uVar4 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar4;
    uVar5 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar5;
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 6);
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar12 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar10 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020c272c; end: 1020c2827;  */

/* WARNING: Possible PIC construction at 0x0001020c2750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020c2768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020c27f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020c2808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c27f4) */
/* WARNING: Removing unreachable block (ram,0x0001020c276c) */
/* WARNING: Removing unreachable block (ram,0x0001020c27ac) */
/* WARNING: Removing unreachable block (ram,0x0001020c27bc) */
/* WARNING: Removing unreachable block (ram,0x0001020c27d4) */
/* WARNING: Removing unreachable block (ram,0x0001020c27e4) */
/* WARNING: Removing unreachable block (ram,0x0001020c2754) */
/* WARNING: Removing unreachable block (ram,0x0001020c280c) */

void FUN_1020c272c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1020c2828; end: 1020c3187;  */

undefined8 * FUN_1020c2828(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  uVar6 = puVar2[3];
  puVar1[2] = puVar2[2];
  puVar1[3] = uVar6;
  lVar8 = 0;
  func_0x0001020c2460();
  lVar12 = (long)*(int *)(lVar8 + 0x18);
  lVar9 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar9 + -8);
  pcVar13 = *(code **)(lVar11 + 0x30);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  lVar10 = (long)puVar2 + lVar12;
  (*pcVar13)(lVar10,1,lVar9);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar11 + 0x10))((long)puVar1 + lVar12,(long)puVar2 + lVar12,lVar9);
    (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar12,0,1,lVar9);
  }
  else {
    lVar10 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)puVar1 + lVar12,(long)puVar2 + lVar12,
                        *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(lVar8 + 0x1c);
  lVar10 = (long)puVar2 + lVar8;
  (*pcVar13)(lVar10,1,lVar9);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar11 + 0x10))((long)puVar1 + lVar8,(long)puVar2 + lVar8,lVar9);
    (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar8,0,1,lVar9);
  }
  else {
    lVar10 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)puVar1 + lVar8,(long)puVar2 + lVar8,
                        *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)((long)param_1 + (long)iVar7) = *(undefined1 *)((long)param_2 + (long)iVar7);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar3 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  uVar4 = param_2[3];
  puVar1[2] = param_2[2];
  puVar1[3] = uVar4;
  uVar5 = param_2[5];
  puVar1[4] = param_2[4];
  puVar1[5] = uVar5;
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_2 + 6);
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 1020c3188; end: 1020c31b3;  */

void FUN_1020c3188(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020c31b4; end: 1020c31e3;  */

void FUN_1020c31b4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1020c31e4; end: 1020c326b;  */

void FUN_1020c31e4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_50 = &UNK_10da5a1c8;
  puStack_48 = &UNK_10da5a1c8;
  lVar1 = 0x13f;
  func_0x0001020c2460();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10da5a1c8;
    puStack_30 = &UNK_10da5a1e0;
    puStack_28 = &UNK_10da5a1f8;
    func_0x000107c6153c(param_1,0x100,6,&puStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020c326c; end: 1020c3273;  */

undefined8 FUN_1020c326c(ulong *param_1,ulong *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_90 [12];
  uint uStack_84;
  code *pcStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  uVar10 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = uVar10 - extraout_x12;
  lVar12 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar9 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar9 - extraout_x12_00;
  uVar7 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    uVar4 = *param_1;
    if (((uVar4 != *param_2) || (param_1[1] != uVar7)) && (func_0x000107c605b8(), (uVar4 & 1) == 0))
    {
      return 0;
    }
  }
  uVar7 = param_2[3];
  if (param_1[3] == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    uVar4 = param_1[2];
    if (((uVar4 != param_2[2]) || (param_1[3] != uVar7)) &&
       (func_0x000107c605b8(), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  lVar5 = 0;
  uStack_78 = uVar10;
  puStack_70 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001020c2460();
  iVar1 = *(int *)(lVar5 + 0x18);
  lVar11 = (long)*(int *)(lVar12 + 0x30);
  lStack_68 = lVar5;
  func_0x000100029394((long)param_1 + (long)iVar1,lVar13);
  func_0x000100029394((long)param_2 + (long)iVar1,lVar13 + lVar11);
  pcVar8 = *(code **)(lVar15 + 0x30);
  lVar5 = lVar13;
  (*pcVar8)(lVar13,1,lVar3);
  if ((int)lVar5 == 1) {
    lVar11 = lVar13 + lVar11;
    (*pcVar8)(lVar11,1,lVar3);
    if ((int)lVar11 != 1) goto LAB_1020c39e4;
    pcStack_80 = pcVar8;
    FUN_1020c3a80(lVar13,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar13,lVar14);
    lVar5 = lVar13 + lVar11;
    (*pcVar8)(lVar5,1,lVar3);
    puVar2 = puStack_70;
    if ((int)lVar5 == 1) {
      (**(code **)(lVar15 + 8))(lVar14,lVar3);
      goto LAB_1020c39e4;
    }
    puVar6 = puStack_70;
    pcStack_80 = pcVar8;
    (**(code **)(lVar15 + 0x20))(puStack_70,lVar13 + lVar11,lVar3);
    func_0x000101553b98();
    lVar11 = lVar14;
    func_0x000107c5fab8(lVar14,puVar2,lVar3,puVar6);
    uStack_84 = (uint)lVar11;
    pcVar8 = *(code **)(lVar15 + 8);
    (*pcVar8)(puVar2,lVar3);
    (*pcVar8)(lVar14,lVar3);
    FUN_1020c3a80(lVar13,0x112d36580,&UNK_10d9016d0);
    if ((uStack_84 & 1) == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(lStack_68 + 0x1c);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar1,lVar9);
  func_0x000100029394((long)param_2 + (long)iVar1,lVar9 + lVar12);
  pcVar8 = pcStack_80;
  lVar14 = lVar9;
  (*pcStack_80)(lVar9,1,lVar3);
  uVar7 = uStack_78;
  lVar13 = lVar9;
  if ((int)lVar14 == 1) {
    lVar12 = lVar9 + lVar12;
    (*pcVar8)(lVar12,1,lVar3);
    if ((int)lVar12 == 1) {
      FUN_1020c3a80(lVar9,0x112d36580,&UNK_10d9016d0);
      return 1;
    }
  }
  else {
    func_0x000100029394(lVar9,uStack_78);
    lVar14 = lVar9 + lVar12;
    (*pcVar8)(lVar14,1,lVar3);
    puVar2 = puStack_70;
    if ((int)lVar14 != 1) {
      puVar6 = puStack_70;
      (**(code **)(lVar15 + 0x20))(puStack_70,lVar9 + lVar12,lVar3);
      func_0x000101553b98();
      uVar10 = uVar7;
      func_0x000107c5fab8(uVar7,puVar2,lVar3,puVar6);
      pcVar8 = *(code **)(lVar15 + 8);
      (*pcVar8)(puVar2,lVar3);
      (*pcVar8)(uVar7,lVar3);
      FUN_1020c3a80(lVar9,0x112d36580,&UNK_10d9016d0);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    (**(code **)(lVar15 + 8))(uVar7,lVar3);
  }
LAB_1020c39e4:
  FUN_1020c3a80(lVar13,0x112d7e680,&UNK_10d95e350);
  return 0;
}



/* Entry: 1020c3274; end: 1020c32cf;  */

byte FUN_1020c3274(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar3 & 1) == 0))
  {
    return 0;
  }
  return (byte)uVar1 ^ (byte)uVar2 ^ 1;
}



/* Entry: 1020c32d0; end: 1020c33c7;  */

undefined8 FUN_1020c32d0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = *param_1;
  uVar9 = param_1[2];
  uVar1 = param_1[3];
  uVar10 = param_1[4];
  uVar11 = param_1[5];
  uVar6 = param_1[6];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar3 = param_2[4];
  uVar5 = param_2[5];
  uVar7 = param_2[6];
  if ((((uVar8 == *param_2) && (param_1[1] == param_2[1])) ||
      (func_0x000107c605b8(), (uVar8 & 1) != 0)) &&
     (((uVar9 == uVar2 && (uVar1 == uVar4)) ||
      (func_0x000107c605b8(uVar9,uVar1,uVar2,uVar4,0), (uVar9 & 1) != 0)))) {
    if ((uVar10 == uVar3) && (uVar11 == uVar5)) {
      if ((byte)uVar6 == (byte)uVar7) {
        return 1;
      }
    }
    else {
      func_0x000107c605b8(uVar10,uVar11,uVar3,uVar5,0);
      if (((uVar10 & 1) != 0) && ((((byte)uVar6 ^ (byte)uVar7) & 1) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1020c33c8; end: 1020c3473;  */

void FUN_1020c33c8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020c3474; end: 1020c34a7;  */

undefined8 FUN_1020c3474(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (((uVar11 == *param_2 && param_1[1] == param_2[1]) ||
      (func_0x000107c605b8(), (uVar11 & 1) != 0)) &&
     ((uVar11 = param_1[2], uVar11 == param_2[2] && param_1[3] == param_2[3] ||
      (func_0x000107c605b8(), (uVar11 & 1) != 0)))) {
    lVar12 = 0;
    func_0x0001020c31a0();
    uVar11 = (long)param_1 + (long)*(int *)(lVar12 + 0x18);
    func_0x0001020c364c(uVar11,(long)param_2 + (long)*(int *)(lVar12 + 0x18));
    if (((uVar11 & 1) != 0) &&
       (((puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar12 + 0x1c)), uVar11 = *puVar1,
         puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar12 + 0x1c)),
         uVar11 == *puVar2 && puVar1[1] == puVar2[1] || (func_0x000107c605b8(), (uVar11 & 1) != 0))
        && (*(char *)((long)param_1 + (long)*(int *)(lVar12 + 0x20)) ==
            *(char *)((long)param_2 + (long)*(int *)(lVar12 + 0x20)))))) {
      param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar12 + 0x24));
      param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar12 + 0x24));
      uVar11 = *param_1;
      uVar13 = param_1[2];
      uVar5 = param_1[3];
      uVar14 = param_1[4];
      uVar6 = param_1[5];
      uVar9 = param_1[6];
      uVar3 = param_2[2];
      uVar7 = param_2[3];
      uVar4 = param_2[4];
      uVar8 = param_2[5];
      uVar10 = param_2[6];
      if ((((uVar11 == *param_2) && (param_1[1] == param_2[1])) ||
          (func_0x000107c605b8(), (uVar11 & 1) != 0)) &&
         (((uVar13 == uVar3 && (uVar5 == uVar7)) ||
          (func_0x000107c605b8(uVar13,uVar5,uVar3,uVar7,0), (uVar13 & 1) != 0)))) {
        if ((uVar14 == uVar4) && (uVar6 == uVar8)) {
          if ((byte)uVar9 == (byte)uVar10) {
            return 1;
          }
        }
        else {
          func_0x000107c605b8(uVar14,uVar6,uVar4,uVar8,0);
          if (((uVar14 & 1) != 0) && ((((byte)uVar9 ^ (byte)uVar10) & 1) == 0)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 1020c34a8; end: 1020c3a7f;  */

undefined8 FUN_1020c34a8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (((uVar11 == *param_2 && param_1[1] == param_2[1]) ||
      (func_0x000107c605b8(), (uVar11 & 1) != 0)) &&
     ((uVar11 = param_1[2], uVar11 == param_2[2] && param_1[3] == param_2[3] ||
      (func_0x000107c605b8(), (uVar11 & 1) != 0)))) {
    lVar12 = 0;
    func_0x0001020c31a0();
    uVar11 = (long)param_1 + (long)*(int *)(lVar12 + 0x18);
    func_0x0001020c364c(uVar11,(long)param_2 + (long)*(int *)(lVar12 + 0x18));
    if (((uVar11 & 1) != 0) &&
       (((puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar12 + 0x1c)), uVar11 = *puVar1,
         puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar12 + 0x1c)),
         uVar11 == *puVar2 && puVar1[1] == puVar2[1] || (func_0x000107c605b8(), (uVar11 & 1) != 0))
        && (*(char *)((long)param_1 + (long)*(int *)(lVar12 + 0x20)) ==
            *(char *)((long)param_2 + (long)*(int *)(lVar12 + 0x20)))))) {
      param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar12 + 0x24));
      param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar12 + 0x24));
      uVar11 = *param_1;
      uVar13 = param_1[2];
      uVar5 = param_1[3];
      uVar14 = param_1[4];
      uVar6 = param_1[5];
      uVar9 = param_1[6];
      uVar3 = param_2[2];
      uVar7 = param_2[3];
      uVar4 = param_2[4];
      uVar8 = param_2[5];
      uVar10 = param_2[6];
      if ((((uVar11 == *param_2) && (param_1[1] == param_2[1])) ||
          (func_0x000107c605b8(), (uVar11 & 1) != 0)) &&
         (((uVar13 == uVar3 && (uVar5 == uVar7)) ||
          (func_0x000107c605b8(uVar13,uVar5,uVar3,uVar7,0), (uVar13 & 1) != 0)))) {
        if ((uVar14 == uVar4) && (uVar6 == uVar8)) {
          if ((byte)uVar9 == (byte)uVar10) {
            return 1;
          }
        }
        else {
          func_0x000107c605b8(uVar14,uVar6,uVar4,uVar8,0);
          if (((uVar14 & 1) != 0) && ((((byte)uVar9 ^ (byte)uVar10) & 1) == 0)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 1020c3a80; end: 1020c3b1b;  */

undefined8 FUN_1020c3a80(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1020c3b1c; end: 1020c3c0b;  */

undefined8 * FUN_1020c3b1c(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1020c3c0c; end: 1020c3c67;  */

undefined8 * FUN_1020c3c0c(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 1020c3c68; end: 1020c3e77;  */

int FUN_1020c3c68(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020c3e78; end: 1020c3eb7;  */

void FUN_1020c3e78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e56e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5a2c4;
  func_0x000107c61520(&UNK_10da5a2c4,&UNK_1104c8250);
  puRam0000000112e56e28 = puVar1;
  return;
}



/* Entry: 1020c3eb8; end: 1020c3ebf;  */

void FUN_1020c3eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1020c3ec0; end: 1020c3ef3;  */

undefined8 * FUN_1020c3ec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1020c3ef4; end: 1020c3f47;  */

undefined8 * FUN_1020c3ef4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1020c3f48; end: 1020c3f83;  */

undefined8 * FUN_1020c3f48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1020c3f84; end: 1020c4023;  */

int FUN_1020c3f84(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020c4024; end: 1020c41e3;  */

ulong FUN_1020c4024(ulong param_1,ulong param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar3 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar3 = param_2 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    uVar3 = 0;
    uVar5 = 0x100000000;
  }
  else {
    uVar5 = 0;
    func_0x000100eda154(0xf,param_1,param_2);
    if ((param_2 >> 0x3c & 1) == 0) {
      uVar5 = uVar5 >> 0x10;
      if ((param_2 >> 0x3d & 1) == 0) {
        if ((param_1 >> 0x3c & 1) == 0) {
          func_0x000107c60358(param_1,param_2);
        }
        else {
          param_1 = (param_2 & 0xfffffffffffffff) + 0x20;
        }
        pbVar1 = (byte *)(param_1 + uVar5);
        uVar2 = (uint)*pbVar1;
        uVar3 = (ulong)uVar2;
        if ((char)*pbVar1 < '\0') {
          uVar4 = (uint)LZCOUNT(uVar2 << 0x18 ^ 0xffffffff);
          if (uVar4 < 3) {
            if (uVar4 != 1) {
              uVar3 = (ulong)(pbVar1[1] & 0x3f | (uVar2 & 0x1f) << 6);
            }
          }
          else if (uVar4 == 3) {
            uVar3 = (ulong)((uVar2 & 0xf) << 0xc | (pbVar1[1] & 0x3f) << 6 | pbVar1[2] & 0x3f);
          }
          else {
            uVar3 = (ulong)((uVar2 & 0xf) << 0x12 | (pbVar1[1] & 0x3f) << 0xc |
                            (pbVar1[2] & 0x3f) << 6 | pbVar1[3] & 0x3f);
          }
        }
      }
      else {
        uStack_40 = param_1;
        uStack_38 = param_2 & 0xffffffffffffff;
        uVar2 = (uint)*(byte *)((long)&uStack_40 + uVar5);
        uVar3 = (ulong)uVar2;
        if ((char)*(byte *)((long)&uStack_40 + uVar5) < '\0') {
          uVar4 = (uint)LZCOUNT(uVar2 << 0x18 ^ 0xffffffff);
          if (uVar4 < 3) {
            if (uVar4 != 1) {
              uVar3 = (ulong)(*(byte *)((long)&uStack_40 + uVar5 + 1) & 0x3f | (uVar2 & 0x1f) << 6);
            }
          }
          else if (uVar4 == 3) {
            uVar3 = (ulong)((uVar2 & 0xf) << 0xc |
                            (*(byte *)((long)&uStack_40 + uVar5 + 1) & 0x3f) << 6 |
                           *(byte *)((long)&uStack_40 + uVar5 + 2) & 0x3f);
          }
          else {
            uVar3 = (ulong)((uVar2 & 0xf) << 0x12 |
                            (*(byte *)((long)&uStack_40 + uVar5 + 1) & 0x3f) << 0xc |
                            (*(byte *)((long)&uStack_40 + uVar5 + 2) & 0x3f) << 6 |
                           *(byte *)((long)&uStack_40 + uVar5 + 3) & 0x3f);
          }
        }
      }
    }
    else {
      uVar3 = uVar5 & 0xffffffffffff0000;
      func_0x000107c602f8(uVar3,param_1,param_2);
    }
    uVar5 = 0;
  }
  return uVar5 | uVar3 & 0xffffffff;
}



/* Entry: 1020c41e4; end: 1020c42db;  */

int FUN_1020c41e4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  else {
    uVar6 = param_1;
    func_0x000107c5fb5c();
    uVar1 = uVar6;
    if (0x1f < (long)uVar6) {
      uVar1 = 0x20;
    }
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c42dc);
      (*pcVar2)();
    }
    if (uVar6 == 0) {
      iVar7 = 0;
    }
    else {
      uVar6 = 0;
      iVar7 = 0;
      while( true ) {
        uVar4 = 0xf;
        func_0x000107c5fb6c(0xf,uVar6,param_1,param_2);
        uVar5 = param_1;
        func_0x000107c5fbcc();
        iVar7 = iVar7 * 0x1f;
        FUN_1020c4024();
        func_0x000107c6142c(uVar5);
        if ((uVar4 & 0xff00000000) != 0x100000000) {
          iVar7 = iVar7 + (int)uVar4;
        }
        if (uVar1 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        if (uVar1 == uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c42a8);
          (*pcVar2)();
        }
      }
    }
    iVar3 = -iVar7;
    if (-1 < iVar7) {
      iVar3 = iVar7;
    }
  }
  return iVar3;
}



/* Entry: 1020c42dc; end: 1020c43d7;  */

void FUN_1020c42dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5f6c4();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  FUN_1020c41e4(param_1,param_2);
  uVar2 = *(ulong *)((ulong)((uint)param_1 & 0x1f) * 8 + 0x112e56e58);
  (**(code **)(lVar3 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_1103496a8,lVar1);
  func_0x000107c5f6d8((double)(uVar2 >> 0x10 & 0xff) / 255.0,(double)(uVar2 >> 8 & 0xff) / 255.0,
                      (double)uVar2 / 255.0,0x3ff0000000000000,
                      &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 1020c43d8; end: 1020c440f;  */

undefined8 FUN_1020c43d8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  func_0x0001020c1b5c();
  func_0x000107c5f3fc(&uStack_18,&UNK_1104c8348,&UNK_1104c8348,param_1);
  return uStack_18;
}



/* Entry: 1020c4410; end: 1020c441f;  */

undefined1  [16] FUN_1020c4410(void)

{
  return ZEXT816(0x1104c8348);
}



/* Entry: 1020c4420; end: 1020c4467;  */

void FUN_1020c4420(void)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e56f68,&UNK_10da5a3e0);
  pcVar1 = FUN_1020c4468;
  func_0x0001000823a8(FUN_1020c4468,0);
  pcRam0000000112e56f60 = pcVar1;
  return;
}



/* Entry: 1020c4468; end: 1020c44bf;  */

void FUN_1020c4468(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000015,0x800000010f003550,
                      "NearMeImplementation/EnvironmentValues+Extensions.swift",0x37,2,0xe,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020c44c0);
  (*pcVar1)();
}



/* Entry: 1020c44c0; end: 1020c4513;  */

void FUN_1020c44c0(undefined8 *param_1)

{
  if (lRam0000000112e56f58 != -1) {
    func_0x000107c61568(0x112e56f58,FUN_1020c4420);
  }
  *param_1 = uRam0000000112e56f60;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1020c4514; end: 1020c452b;  */

uint FUN_1020c4514(uint param_1)

{
  func_0x000107c5f304();
  return param_1 & 1;
}



/* Entry: 1020c452c; end: 1020c45c3;  */

void FUN_1020c452c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e56f68,&UNK_10da5a3e0);
  puVar1 = &UNK_1104c8388;
  func_0x000107c613fc(&UNK_1104c8388,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1020c462c,puVar1);
  return;
}



/* Entry: 1020c45c4; end: 1020c462b;  */

/* WARNING: Possible PIC construction at 0x0001020c460c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c4610) */

void FUN_1020c45c4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_2;
  FUN_1020c65a4();
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(long *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined **)(lVar2 + 0x28) = puVar1;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1020c462c; end: 1020c4637;  */

/* WARNING: Possible PIC construction at 0x0001020c460c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c4610) */

void FUN_1020c462c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = lVar1;
  FUN_1020c65a4();
  func_0x000107c613fc();
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(long *)(lVar4 + 0x10) = lVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(undefined **)(lVar4 + 0x28) = puVar3;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 1020c4638; end: 1020c4683;  */

void FUN_1020c4638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  return;
}



/* Entry: 1020c4684; end: 1020c469b;  */

void FUN_1020c4684(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c469c,0,0);
  return;
}



/* Entry: 1020c469c; end: 1020c470f;  */

void FUN_1020c469c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  FUN_1020c4be8();
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c4710,uVar1,uVar2);
  return;
}



/* Entry: 1020c4710; end: 1020c4803;  */

void FUN_1020c4710(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61428(lVar4 + 0x28,unaff_x22 + 0x50,0x20,0);
  lVar4 = *(long *)(lVar4 + 0x28);
  if (*(long *)(lVar4 + 0x10) == 0) {
    func_0x000107c614a8(unaff_x22 + 0x50);
    pcVar2 = FUN_1020c4804;
  }
  else {
    lVar1 = 0x3438313239343333;
    if (*(long *)(unaff_x22 + 0x98) != 0) {
      lVar1 = 0x3630343230303032;
    }
    func_0x000107c61434(lVar4);
    uVar3 = 0;
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      func_0x000107c614a8(unaff_x22 + 0x50);
      func_0x000107c6142c(lVar4);
      pcVar2 = (code *)0x1020c6f7c;
    }
    else {
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(unaff_x22 + 0x50);
      func_0x000107c6142c(lVar4);
      pcVar2 = FUN_1020c4b20;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1020c4804; end: 1020c4b1f;  */

void FUN_1020c4804(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar8 = *(long *)(unaff_x22 + 0x50);
  lVar6 = lVar8;
  func_0x000107c40454();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  lVar8 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb0) = lVar8;
  func_0x000107c61170(lVar6);
  lVar6 = *(long *)(unaff_x22 + 0x98);
  if (lVar8 != 0) {
    uVar11 = 0x3736393433393534;
    if (lVar6 != 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
    }
    lVar5 = -0x11ffca8cd2c7a0ce;
    if (lVar6 != 0) {
      lVar5 = lVar6;
    }
    func_0x000107c5fadc(uVar11,lVar5);
    func_0x000107c6142c(lVar5);
    if (lVar6 == 0) {
      uVar9 = 0xd000000000000010;
      func_0x000107c5fadc(0xd000000000000010,0x800000010f061090);
      func_0x000107c6142c(0x800000010f061090);
    }
    else {
      uVar9 = 0;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = 0x3438313239343333;
    if (*(long *)(unaff_x22 + 0x98) != 0) {
      uVar1 = 0x3630343230303032;
    }
    puVar2 = PTR_PTR_1126af5d8;
    func_0x000107c610f8();
    uVar3 = uVar1;
    func_0x000107c5fadc(uVar1,0xe800000000000000);
    func_0x000107c458c4();
    *(undefined **)(unaff_x22 + 0xb8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar11);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x1020c4b60;
    lVar6 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar6,0);
    puVar2 = &UNK_1104c83d0;
    func_0x000107c613fc(&UNK_1104c83d0,0x18,7);
    plVar10 = (long *)(puVar2 + 0x10);
    *plVar10 = 0;
    func_0x000107c432c0();
    func_0x000107c61180();
    puVar4 = &UNK_1104c85b0;
    func_0x000107c613fc(&UNK_1104c85b0,0x38,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined8 *)(puVar4 + 0x18) = uVar7;
    *(undefined8 *)(puVar4 + 0x20) = uVar1;
    *(undefined8 *)(puVar4 + 0x28) = 0xe800000000000000;
    *(long *)(puVar4 + 0x30) = lVar6;
    *(code **)(unaff_x22 + 0x70) = FUN_1020c6bc8;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1010a3098;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1104c85c8;
    lVar6 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar6);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(uVar7);
    func_0x000107c61434(0xe800000000000000);
    func_0x000107c61574(uVar11);
    lVar5 = lVar8;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(lVar6);
    func_0x000107c61170(lVar8);
    func_0x000107c61428(plVar10,unaff_x22 + 0x50,1,0);
    lVar6 = *plVar10;
    *plVar10 = lVar5;
    func_0x000107c61574(puVar2);
    func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c6142c(0xe800000000000000);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x0001020c4904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1020c4b20; end: 1020c4b9f;  */

void FUN_1020c4b20(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c6142c(0xe800000000000000);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001020c4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xa8));
  return;
}



/* Entry: 1020c4ba0; end: 1020c4be7;  */

void FUN_1020c4ba0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c6142c(0xe800000000000000);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001020c4be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 1020c4be8; end: 1020c4ca3;  */

undefined1  [16] FUN_1020c4be8(void)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_30;
  long lStack_28;
  
  func_0x000100083b20(&lStack_30);
  lVar1 = lStack_30;
  func_0x000107c3e980();
  func_0x000107c61180();
  func_0x000107c61170(lStack_30);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lStack_30 = 0;
      lStack_28 = 0;
      func_0x000107c5fae8(lVar1,&lStack_30);
      func_0x000107c61170(lVar1);
      lVar1 = 0;
      if (lStack_28 != 0) {
        lVar1 = lStack_30;
      }
      goto LAB_1020c4c94;
    }
  }
  lStack_28 = 0;
  lVar1 = 0;
LAB_1020c4c94:
  auVar3._8_8_ = lStack_28;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 1020c4ca4; end: 1020c4f13;  */

void FUN_1020c4ca4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_1104c8600;
  func_0x000107c613fc(&UNK_1104c8600,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_6;
  puVar4 = &UNK_1104c8628;
  func_0x000107c613fc(&UNK_1104c8628,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1020c6c04;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x1020c6f5c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_1104c8640;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104c8678;
  func_0x000107c613fc(&UNK_1104c8678,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  puVar7 = &UNK_1104c86a0;
  func_0x000107c613fc(&UNK_1104c86a0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x1020c6c10;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x1020c6f60;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104c86b8;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61428(param_2 + 0x10,&puStack_a0,0,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_b8,1,0);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar9);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x88,0x38,0x25,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar7;
    func_0x000107c61544(puVar7,"",0x88,0x3d,0x1c,1);
    func_0x000107c61574(puVar7);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c4f14);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c4f10);
  (*pcVar2)();
}



/* Entry: 1020c4f14; end: 1020c503f;  */

void FUN_1020c4f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104c8538;
  func_0x000107c613fc(&UNK_1104c8538,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  puVar2 = &UNK_1104c86f0;
  func_0x000107c613fc(&UNK_1104c86f0,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  puVar1 = &UNK_1104c8718;
  func_0x000107c613fc(&UNK_1104c8718,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10da5a498;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  uVar3 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_4);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar5 = 0x62;
  func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a4a0,puVar1,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar5);
  **(undefined8 **)(*(long *)(param_5 + 0x40) + 0x28) = param_1;
  func_0x000107c61174(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_5);
  return;
}



/* Entry: 1020c5040; end: 1020c50af;  */

void FUN_1020c5040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1020c6f64,uVar1,uVar2);
  return;
}



/* Entry: 1020c50b0; end: 1020c50f3;  */

void FUN_1020c50b0(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001020c50f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1020c50f4; end: 1020c5117;  */

void FUN_1020c50f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c5118,0,0);
  return;
}



/* Entry: 1020c5118; end: 1020c52c7;  */

void FUN_1020c5118(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x50);
  lVar2 = lVar6;
  func_0x000107c40454();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 200) = lVar6;
  func_0x000107c61170(lVar2);
  if (lVar6 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x98);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar6 = *(long *)(unaff_x22 + 0xa8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
      func_0x000107c61434();
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      uVar4 = 0x3931303632323031;
      if (lVar6 != 0) {
        uVar4 = uVar3;
      }
      lVar1 = -0x1800000000000000;
      if (lVar6 != 0) {
        lVar1 = lVar6;
      }
      func_0x000107c61434(lVar6);
      func_0x000107c5fb78(uVar4,lVar1);
      func_0x000107c6142c(lVar1);
      *(undefined8 *)(unaff_x22 + 0xd0) = uVar5;
      *(long *)(unaff_x22 + 0xd8) = lVar2;
      uVar3 = 0;
      func_0x000107c5fcec();
      uVar4 = uVar3;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
      func_0x000100eea164();
      func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c52c8,uVar3,uVar4);
      return;
    }
    func_0x000107c615e8(lVar6);
  }
  if (lRam0000000112e57028 != -1) {
    func_0x000107c61568(0x112e57028,FUN_1020c65c4);
  }
  uVar5 = uRam0000000113804670;
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61174(uRam0000000113804670);
  FUN_1020c42dc(uVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001020c52ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5,uVar4);
  return;
}



/* Entry: 1020c52c8; end: 1020c539b;  */

void FUN_1020c52c8(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61428(lVar4 + 0x28,unaff_x22 + 0x50,0x20,0);
  lVar4 = *(long *)(lVar4 + 0x28);
  if (*(long *)(lVar4 + 0x10) == 0) {
    func_0x000107c614a8(unaff_x22 + 0x50);
    pcVar2 = FUN_1020c539c;
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0xd0);
    uVar3 = *(ulong *)(unaff_x22 + 0xd8);
    func_0x000107c61434(lVar4);
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      func_0x000107c614a8(unaff_x22 + 0x50);
      func_0x000107c6142c(lVar4);
      pcVar2 = (code *)0x1020c6f54;
    }
    else {
      *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(unaff_x22 + 0x50);
      func_0x000107c6142c(lVar4);
      pcVar2 = FUN_1020c560c;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1020c539c; end: 1020c560b;  */

void FUN_1020c539c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar4 = *(long *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar9 = -0x1800000000000000;
  if (lVar4 != 0) {
    lVar9 = lVar4;
  }
  uVar8 = 0x3931303632323031;
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  }
  puVar6 = PTR_PTR_1126af5d8;
  func_0x000107c610f8();
  func_0x000107c61434(lVar4);
  func_0x000107c5fadc(uVar7,uVar5);
  func_0x000107c5fadc(uVar8,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c458c4();
  *(undefined **)(unaff_x22 + 0xf0) = puVar6;
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  puVar6 = PTR_PTR_1126b83f8;
  func_0x000107c610f8();
  func_0x000107c4849c();
  *(undefined **)(unaff_x22 + 0xf8) = puVar6;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x1020c5650;
  lVar9 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar9,0);
  puVar6 = &UNK_1104c83d0;
  func_0x000107c613fc(&UNK_1104c83d0,0x18,7);
  puVar14 = (undefined8 *)(puVar6 + 0x10);
  *puVar14 = 0;
  func_0x000107c432a0();
  func_0x000107c61180();
  puVar11 = &UNK_1104c83f8;
  func_0x000107c613fc(&UNK_1104c83f8,0x48,7);
  *(undefined **)(puVar11 + 0x10) = puVar6;
  *(undefined8 *)(puVar11 + 0x18) = uVar13;
  *(undefined8 *)(puVar11 + 0x20) = uVar16;
  *(undefined8 *)(puVar11 + 0x28) = uVar2;
  *(long *)(puVar11 + 0x30) = lVar9;
  *(undefined8 *)(puVar11 + 0x38) = uVar1;
  puVar15 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(puVar11 + 0x40) = uVar3;
  *(code **)(unaff_x22 + 0x70) = FUN_1020c6a48;
  *(undefined **)(unaff_x22 + 0x78) = puVar11;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1010a3098;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104c8410;
  puVar12 = puVar15;
  func_0x000107c60bc4(puVar15);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(uVar13);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61574(uVar16);
  uVar16 = uVar10;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(puVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61428(puVar14,puVar15,1,0);
  uVar13 = *puVar14;
  *puVar14 = uVar16;
  func_0x000107c61574(puVar6);
  func_0x000107c61170(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1020c560c; end: 1020c568f;  */

void FUN_1020c560c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001020c564c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xe8),0);
  return;
}



/* Entry: 1020c5690; end: 1020c56eb;  */

void FUN_1020c5690(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001020c56e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 1020c56ec; end: 1020c5977;  */

void FUN_1020c56ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_1104c8448;
  func_0x000107c613fc(&UNK_1104c8448,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_6;
  puVar4 = &UNK_1104c8470;
  func_0x000107c613fc(&UNK_1104c8470,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1020c6a78;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_80 = FUN_1020c6a84;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_1104c8488;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104c84c0;
  func_0x000107c613fc(&UNK_1104c84c0,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  *(undefined8 *)(puVar6 + 0x18) = param_7;
  *(undefined8 *)(puVar6 + 0x20) = param_8;
  puVar7 = &UNK_1104c84e8;
  func_0x000107c613fc(&UNK_1104c84e8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1020c6aa4;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x1020c6f58;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104c8500;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_78;
  func_0x000107c61434(param_8);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61428(param_2 + 0x10,&puStack_a0,0,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_b8,1,0);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar9);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x88,0x5f,0x25,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar7;
    func_0x000107c61544(puVar7,"",0x88,100,0x1c,1);
    func_0x000107c61574(puVar7);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c5978);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c5974);
  (*pcVar2)();
}



/* Entry: 1020c5978; end: 1020c5aa3;  */

void FUN_1020c5978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar1 = &UNK_1104c8538;
  func_0x000107c613fc(&UNK_1104c8538,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  puVar2 = &UNK_1104c8560;
  func_0x000107c613fc(&UNK_1104c8560,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  puVar1 = &UNK_1104c8588;
  func_0x000107c613fc(&UNK_1104c8588,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10da5a468;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  uVar3 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_4);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar5 = 0x62;
  func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a478,puVar1,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar5);
  puVar6 = *(undefined8 **)(*(long *)(param_5 + 0x40) + 0x28);
  *puVar6 = param_1;
  puVar6[1] = 0;
  func_0x000107c61174(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_5);
  return;
}



/* Entry: 1020c5aa4; end: 1020c5b13;  */

void FUN_1020c5aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c5b14,uVar1,uVar2);
  return;
}



/* Entry: 1020c5b14; end: 1020c5c17;  */

void FUN_1020c5b14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    uVar3 = 1;
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x58);
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
      func_0x000107c61428(lVar5 + 0x28,unaff_x22 + 0x28,0x21,0);
      func_0x000107c61174(lVar6);
      func_0x000107c61174();
      func_0x000107c61434(uVar1);
      uVar2 = *(undefined8 *)(lVar5 + 0x28);
      func_0x000107c61558(uVar2);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = 0x8000000000000000;
      func_0x000100fdaeac(lVar6,uVar3,uVar1,uVar2);
      func_0x000107c6142c(uVar1);
      *(undefined8 *)(lVar5 + 0x28) = uVar4;
      func_0x000107c614a8(unaff_x22 + 0x28);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61574();
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001020c5c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 1020c5c18; end: 1020c5c97;  */

void FUN_1020c5c18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (lRam0000000112e57028 != -1) {
    func_0x000107c61568(0x112e57028,FUN_1020c65c4);
  }
  uVar1 = uRam0000000113804670;
  func_0x000107c61174(uRam0000000113804670);
  FUN_1020c42dc(param_3,param_4);
  puVar2 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28);
  *puVar2 = uVar1;
  puVar2[1] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_2);
  return;
}



/* Entry: 1020c5c98; end: 1020c5cbb;  */

void FUN_1020c5c98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
  *(undefined8 **)(unaff_x22 + 0x138) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  *(undefined8 *)(unaff_x22 + 0x140) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c5cbc,0,0);
  return;
}



/* Entry: 1020c5cbc; end: 1020c5d23;  */

void FUN_1020c5cbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x148) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c5d24,uVar1,uVar2);
  return;
}



/* Entry: 1020c5d24; end: 1020c5e07;  */

void FUN_1020c5d24(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x138);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c61428(lVar5 + 0x28,unaff_x22 + 0xf8,0x20,0);
  lVar5 = *(long *)(lVar5 + 0x28);
  if (*(long *)(lVar5 + 0x10) == 0) {
    func_0x000107c614a8(unaff_x22 + 0xf8);
    pcVar2 = FUN_1020c5e08;
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x128);
    uVar3 = *(ulong *)(unaff_x22 + 0x130);
    func_0x000107c61434(lVar5);
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + lVar1 * 8);
      func_0x000107c61174(uVar4);
      func_0x000107c614a8(unaff_x22 + 0xf8);
      func_0x000107c6142c(lVar5);
                    /* WARNING: Could not recover jumptable at 0x0001020c5dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar4);
      return;
    }
    func_0x000107c614a8(unaff_x22 + 0xf8);
    func_0x000107c6142c(lVar5);
    pcVar2 = (code *)0x1020c6f3c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1020c5e08; end: 1020c606f;  */

void FUN_1020c5e08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long unaff_x22;
  undefined8 *puVar14;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  puVar5 = PTR_PTR_1126aebd8;
  func_0x000107c61168();
  uVar6 = uVar1;
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c51834();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x150) = puVar5;
  func_0x000107c61170(uVar6);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar9;
  func_0x000107c6157c(uVar9);
  lVar11 = unaff_x22 + 0x110;
  func_0x000107c5fb18();
  puVar14 = (undefined8 *)(unaff_x22 + 0x60);
  *puVar14 = puVar5;
  *(undefined8 *)(unaff_x22 + 0x68) = 0x3ff0000000000000;
  *(undefined1 *)(unaff_x22 + 0x70) = 2;
  *(long *)(unaff_x22 + 0x78) = lVar11;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x88) = 0x18;
  *(undefined8 *)(unaff_x22 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0xc0) = 0;
  *(undefined8 *)(unaff_x22 + 0xb8) = 0;
  *(undefined4 *)(unaff_x22 + 200) = 0;
  lVar7 = 0;
  func_0x000100de1f70();
  func_0x000107c61174(puVar5);
  func_0x00010488bd80();
  *(long *)(unaff_x22 + 0x158) = lVar7;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar12;
  func_0x000100083b20(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar11 = *(long *)(unaff_x22 + 0xf0);
  func_0x0001000a8868(unaff_x22 + 0xd0,uVar6);
  pcVar13 = *(code **)(lVar11 + 0x10);
  func_0x000107c6157c(uVar12);
  (*pcVar13)(puVar14,FUN_1020c6d34,uVar12,uVar6,lVar11);
  *(undefined8 **)(unaff_x22 + 0x168) = puVar14;
  func_0x000107c61574(uVar12);
  func_0x0001000834e4(unaff_x22 + 0xd0);
  *(long *)(unaff_x22 + 0x20) = lVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  *(undefined8 **)(unaff_x22 + 0x50) = puVar14;
  *(long *)(unaff_x22 + 0x58) = lVar7;
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    plVar8 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x170) = plVar8;
    uVar9 = 0x112d36838;
    func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1020c6070;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(unaff_x22 + 0x118,&UNK_10da5a4b8,unaff_x22 + 0x10,FUN_1020c6df0,unaff_x22 + 0x40,0,0,uVar9);
    return;
  }
  pcVar13 = FUN_1020c6df0;
  func_0x000107c615b4(FUN_1020c6df0,unaff_x22 + 0x40);
  *(code **)(unaff_x22 + 0x178) = pcVar13;
  plVar8 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x180) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1020c60d8;
  lVar11 = *(long *)(unaff_x22 + 0x130);
  lVar3 = *(long *)(unaff_x22 + 0x138);
  plVar8[7] = *(long *)(unaff_x22 + 0x128);
  plVar8[8] = lVar11;
  plVar8[5] = unaff_x22 + 0x120;
  plVar8[6] = lVar3;
  plVar10 = (long *)0x50;
  func_0x000107c615b8();
  plVar8[9] = (long)plVar10;
  lVar11 = 0;
  func_0x000100de1f70();
  *plVar10 = (long)plVar8;
  plVar10[1] = (long)FUN_1020c6324;
  plVar10[7] = lVar7;
  plVar10[8] = lVar11;
  plVar10[6] = (long)(plVar8 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
  return;
}



/* Entry: 1020c6070; end: 1020c60d7;  */

void FUN_1020c6070(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x170));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  *(undefined8 *)(lVar1 + 0x188) = *(undefined8 *)(lVar1 + 0x118);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c6138,0,0);
  return;
}



/* Entry: 1020c60d8; end: 1020c6137;  */

void FUN_1020c60d8(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x180));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1020c6198;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_1020c61dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1020c6138; end: 1020c6197;  */

void FUN_1020c6138(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x150));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uVar2);
  FUN_101769bb8(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x0001020c6194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x188));
  return;
}


