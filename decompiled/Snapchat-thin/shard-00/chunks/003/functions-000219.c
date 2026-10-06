/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004f7d7c; end: 1004f7e1f; -[SCChatEligibilityServices initWithChatEligibilityProvider:composerChatEligibilityProvider:] */

undefined1 *
FUN_1004f7d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f8930;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004f7e20; end: 1004f7e6b;  */

void FUN_1004f7e20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004f7e6c; end: 1004f7e73;  */

void FUN_1004f7e6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f7e74; end: 1004f7ec7;  */

void FUN_1004f7e74(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f7ec8; end: 1004f7ed7;  */

void FUN_1004f7ec8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10029ba14();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a8fa0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar9 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004f7ed8; end: 1004f82ab;  */

void FUN_1004f7ed8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10029ba14();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a8fa0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar8 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 1004f82ac; end: 1004f838f; -[SCFriendsFeedUpdateServiceProvider provide] */

void FUN_1004f82ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126be620;
  func_0x000107c610f4(PTR_PTR_1126be620);
  func_0x000107c46a80();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004f8390; end: 1004f8403; -[SCFriendsFeedUpdateServices initWithFriendsFeedLegacyGroupUpdatesDataCoordinator:] */

undefined1 * FUN_1004f8390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f7588;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004f8404; end: 1004f844f;  */

void FUN_1004f8404(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004f8450; end: 1004f8457;  */

void FUN_1004f8450(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f8458; end: 1004f84ab;  */

void FUN_1004f8458(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f84ac; end: 1004f84bf;  */

void FUN_1004f84ac(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10023f918();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126a7fb8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2e2a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  puVar11 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar1 + 0x48) = puVar11;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004f84c0; end: 1004f891f;  */

void FUN_1004f84c0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10023f918();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a7fb8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2e2a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x48) = puVar10;
  *param_1 = param_2;
  return;
}



/* Entry: 1004f8920; end: 1004f89eb;  */

void FUN_1004f8920(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_1000285a8(0x112dc0830,&UNK_10d97ceb8);
  func_0x000107c613fc();
  pcVar1 = FUN_10075de18;
  FUN_1000bdd8c(FUN_10075de18,0);
  uVar2 = 0;
  FUN_1001b8be8(0);
  func_0x000107c610f8();
  func_0x0001004f8994(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1004f89ec; end: 1004f8af3; -[SCPinnedConversationsServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f89ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112724d10);
  *(undefined **)(param_1 + _DAT_112724d10) = puVar1;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112724d14);
  *(undefined8 *)(param_1 + _DAT_112724d14) = 0;
  func_0x000107c61170(uVar2);
  puVar1 = PTR_PTR_1126ba0f8;
  func_0x000107c610f4(PTR_PTR_1126ba0f8);
  func_0x000107c47ea0();
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1004f8af4; end: 1004f8b67; -[SCPinnedConversationsServices initWithPinnedConversationsDataCoordinator:] */

undefined1 * FUN_1004f8af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd8d8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004f8b68; end: 1004f8bbb;  */

void FUN_1004f8b68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004f8bbc; end: 1004f8bc3;  */

void FUN_1004f8bbc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f8bc4; end: 1004f8c17;  */

void FUN_1004f8bc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f8c18; end: 1004f8c1f;  */

void FUN_1004f8c18(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1002348bc();
  func_0x000107c613fc();
  FUN_1004f8c94(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f8c20; end: 1004f8c93;  */

void FUN_1004f8c20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1002348bc();
  func_0x000107c613fc();
  FUN_1004f8c94(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1004f8c94; end: 1004f8df7;  */

void FUN_1004f8c94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8168;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1004f8df8; end: 1004f8edb; -[SCContactSyncCTAQualificationServiceProvider provide] */

void FUN_1004f8df8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bb528;
  func_0x000107c610f4(PTR_PTR_1126bb528);
  func_0x000107c46044();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004f8edc; end: 1004f8f4f; -[SCContactSyncCTAQualificationServices initWithContactSyncCTAQualificationProvider:] */

undefined1 * FUN_1004f8edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fdb98;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004f8f50; end: 1004f8f7b;  */

void FUN_1004f8f50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004f8f7c; end: 1004f8f83;  */

void FUN_1004f8f7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f8f84; end: 1004f8fd7;  */

void FUN_1004f8f84(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f8fd8; end: 1004f8fe7;  */

void FUN_1004f8fd8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100210e24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a7f30;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004f8fe8; end: 1004f932b;  */

void FUN_1004f8fe8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100210e24();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a7f30;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1004f932c; end: 1004f94bf; -[SCSystemLegacyPreloadControllerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f932c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126cb2d0;
  func_0x000107c5a9f0(PTR_PTR_1126cb2d0);
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_11278d6c0;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_11278d6c4;
  func_0x000107c61148(lVar4);
  lVar5 = lVar4;
  func_0x000107c4d598();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_11278d6c8;
  func_0x000107c61148(lVar6);
  lVar7 = lVar6;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar8 = param_1 + _DAT_11278d6cc;
  func_0x000107c61148(lVar8);
  lVar9 = lVar8;
  func_0x000107c42eac();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11278d6d0;
  func_0x000107c61148(param_1);
  lVar10 = param_1;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c40104(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar11 = PTR_PTR_1126dfd00;
  func_0x000107c610f4(PTR_PTR_1126dfd00);
  func_0x000107c4801c();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1004f94c0; end: 1004f9653; -[SCPreloadController configWithApplicationEvent:connectivityMonitorServices:userSession:featureSettingServices:userBlizzardLogger:] */

void FUN_1004f94c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uVar1 = param_6;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_7;
  func_0x000107c61170(uVar1);
  func_0x000107c61144(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004f9654; end: 1004f96c7; -[SCLegacyTravelModeSignalProviderServices initWithPreloadController:] */

undefined1 * FUN_1004f9654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705e30;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004f96c8; end: 1004f970b;  */

void FUN_1004f96c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004f970c; end: 1004f9713;  */

void FUN_1004f970c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f9714; end: 1004f9767;  */

void FUN_1004f9714(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004f9768; end: 1004f9777;  */

void FUN_1004f9768(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10020e9cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a8780;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef307d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef220b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004f9778; end: 1004f9abf;  */

void FUN_1004f9778(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10020e9cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a8780;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef307d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef220b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1004f9ac0; end: 1004f9acf;  */

void FUN_1004f9ac0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  uVar3 = uVar2;
  func_0x0001000ad7c4();
  uVar4 = uVar3;
  func_0x0001000ad7c4();
  puVar5 = PTR_PTR_1126a6f68;
  func_0x000107c610f8();
  func_0x000107c45f20();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = puVar5;
  return;
}



/* Entry: 1004f9ad0; end: 1004f9b7f;  */

void FUN_1004f9ad0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  uVar3 = uVar2;
  func_0x0001000ad7c4();
  puVar4 = PTR_PTR_1126a6f68;
  func_0x000107c610f8();
  func_0x000107c45f20();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 1004f9b80; end: 1004f9c7b; -[SCComposerFrameworkServices initWithComposerFrameworkProvider:composerImageLoaderRegistry:composerVideoLoaderRegistry:authContextDelegateProxy:] */

undefined1 *
FUN_1004f9b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112702cb0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004f9c7c; end: 1004f9cbf;  */

void FUN_1004f9c7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004f9cc0; end: 1004fa0bb;  */

void FUN_1004f9cc0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2 + 0x38;
  func_0x000107c61148();
  if (uVar2 != 0) {
    func_0x000107c3ab5c(PTR_PTR_1126dfd20);
    uVar12 = *(undefined8 *)(uVar2 + 0x30);
    func_0x000107c61174(uVar12);
    func_0x000107c41290(uVar12);
    func_0x000107c53e04(uVar2);
    uVar3 = uVar12;
    func_0x000107c5cf80();
    *(char *)(uVar2 + 0x20) = (char)uVar3;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar4;
    func_0x000107c40244();
    *(undefined8 *)(uVar2 + 8) = uVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c3cc7c(uVar2);
    func_0x000107c61144(auStack_98,uVar2);
    puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_90 = puVar5;
    func_0x000107c5c200();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar6;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c5a74c(puVar8);
    func_0x000107c61180();
    uVar9 = uVar2;
    func_0x000107c4f7e8();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    puStack_b8 = &UNK_10b254864;
    puStack_b0 = &UNK_110851330;
    func_0x000107c6111c(auStack_a0,auStack_98);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c61174(uVar4);
    uVar3 = uVar12;
    param_5 = uVar10;
    uStack_a8 = uVar4;
    func_0x000107c4da68();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(uVar2 + 0x10);
    *(undefined8 *)(uVar2 + 0x10) = uVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    func_0x000107c5e370(uVar4);
    func_0x000107c61180();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    puStack_e0 = &UNK_10b2548c0;
    puStack_d8 = &UNK_110846510;
    func_0x000107c6111c(auStack_d0,auStack_98);
    uVar3 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar11;
    func_0x000107c4d5a4();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_f8,auStack_98);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar11);
    func_0x000107c61120(auStack_f8);
    func_0x000107c61120(auStack_d0);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61120(auStack_a0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61170(uVar12);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61120(auStack_a0);
  func_0x000107c61120(auStack_98);
  func_0x000107c60bd8(uVar2);
  uVar2 = param_5;
  func_0x000107c61174();
  FUN_1004fa1d0();
  func_0x000107c61180();
  uVar9 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar9;
  func_0x000107c41290();
  if ((0 < (long)uVar2) && (func_0x000107c2bf14(), (double)uVar2 <= param_1)) {
    func_0x000107c61174(uVar9);
    func_0x000107c61174(param_5);
    func_0x000107c4e560(uVar9);
    func_0x000107c61170(param_5);
    func_0x000107c61170(uVar9);
  }
  func_0x000107c61170(uVar9);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 1004fa0bc; end: 1004fa1cf; +[SCDataSaverModePromptCoordinator CheckDataSaverExpirationForUserSession:userBlizzardLogger:] */

void FUN_1004fa0bc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  uVar2 = param_5;
  func_0x000107c61174();
  FUN_1004fa1d0();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c41290();
  if ((0 < (long)uVar2) &&
     (func_0x000107c2bf14(), puVar1 = PTR___NSConcreteStackBlock_11034bd00, (double)uVar2 <= param_1
     )) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    puStack_58 = &UNK_10b25422c;
    puStack_50 = &UNK_110842e18;
    func_0x000107c61174(uVar3);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    puStack_80 = &UNK_10b25425c;
    puStack_78 = &UNK_110842e18;
    uStack_48 = uVar3;
    func_0x000107c61174(param_5);
    uStack_70 = param_5;
    func_0x000107c4e560(uVar3,param_3,&puStack_68,PTR___dispatch_main_q_11034be20,&puStack_90);
    func_0x000107c61170(uStack_70);
    func_0x000107c61170(uStack_48);
  }
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 1004fa1d0; end: 1004fa22b;  */

void FUN_1004fa1d0(void)

{
  if (lRam00000001137f43f0 != -1) {
    FUN_10002a2fc(0x1137f43f0,&PTR___NSConcreteGlobalBlock_110ccb960);
  }
  func_0x000107c45010(uRam00000001137f43e8);
  func_0x000107c61180();
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bfc1d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam00000001137f43e8,PTR_s_get_1125ce100);
  return;
}



/* Entry: 1004fa22c; end: 1004fa30f; -[SCContactPhotosFeatureServiceProvider provide] */

void FUN_1004fa22c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bd170;
  func_0x000107c610f4(PTR_PTR_1126bd170);
  func_0x000107c46038();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004fa310; end: 1004fa3cf;  */

void FUN_1004fa310(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x113846a80;
  func_0x000107c61148();
  func_0x000107c61170();
  if (lVar1 == 0) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026018,
                        &PTR____CFConstantStringClassReference_111026038);
  }
  func_0x000107c61148(0x113846a80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004fa3d0; end: 1004fa447; -[SCAvailableScope access:andGet:] */

void FUN_1004fa3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2d30;
  func_0x000107c519a4(PTR_PTR_1126e2d30,param_2,param_4,param_3);
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c3cb6c(param_1,param_2,param_3,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1004fa448; end: 1004fa49f; +[SCScopedAccess scopedAccessWithPropertyAccessor:scopeClass:] */

void FUN_1004fa448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c484f8();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1004fa4a0; end: 1004fa527; -[SCScopedAccess initWithScopePropertyAccessor:scopeClass:] */

undefined1 *
FUN_1004fa4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e138;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004fa528; end: 1004fa57b; -[SCScopedAccess setDelegate:] */

/* WARNING: Possible PIC construction at 0x0001004fa560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004fa564) */

void FUN_1004fa528(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c611a4(param_1);
  func_0x000107c611a0(param_1 + 0x10,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1004fa57c; end: 1004fa5ef; -[SCContactPhotosServices initWithContactPhotosService:] */

undefined1 * FUN_1004fa57c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702968;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004fa5f0; end: 1004fa633;  */

void FUN_1004fa5f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004fa634; end: 1004fa763; -[SCAvailableScope _updateAndProvideScopedAccess:withScopeAccess:] */

void FUN_1004fa634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174(param_4);
  func_0x000107c611ec(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x000107c60b14(param_3);
  func_0x000107c61180();
  func_0x000107c51744(lVar3,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c611f0(param_1 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3);
  }
  func_0x000107c611ec(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5174c(uVar1,param_2,param_3,&PTR___NSConcreteGlobalBlock_110d95b28);
  func_0x000107c61180();
  func_0x000107c3d798();
  func_0x000107c61170(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4d9c0(uVar2,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c611f0(param_1 + 0x20);
  uVar1 = param_4;
  func_0x000107c45328(param_4);
  func_0x000107c58c5c(param_4,param_2,uVar2,uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1004fa764; end: 1004fa76b;  */

void FUN_1004fa764(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_1103fca40;
  func_0x000107c613fc(&UNK_1103fca40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  puStack_50 = &UNK_101702c48;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101702c50;
  puStack_58 = &UNK_1103fca58;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  FUN_1001e0064(0);
  func_0x000107c610f8();
  FUN_1004fa888(puVar2,uVar5);
  *param_1 = puVar2;
  return;
}



/* Entry: 1004fa76c; end: 1004fa86f;  */

void FUN_1004fa76c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1103fca40;
  func_0x000107c613fc(&UNK_1103fca40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puStack_50 = &UNK_101702c48;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101702c50;
  puStack_58 = &UNK_1103fca58;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  FUN_1001e0064(0);
  func_0x000107c610f8();
  FUN_1004fa888(puVar1,uVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 1004fa870; end: 1004fa887;  */

void FUN_1004fa870(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004fa888; end: 1004fa8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004fa888(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f14398) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004fa8d4; end: 1004fa8d7;  */

void FUN_1004fa8d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004fa8d8; end: 1004fa903;  */

void FUN_1004fa8d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004fa904; end: 1004fa90b;  */

void FUN_1004fa904(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_1103fc928;
  func_0x000107c613fc(&UNK_1103fc928,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  puStack_50 = &UNK_101701a7c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101701a84;
  puStack_58 = &UNK_1103fc940;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  FUN_1001c8608(0);
  func_0x000107c610f8();
  FUN_1004faa28(puVar2,uVar5);
  *param_1 = puVar2;
  return;
}



/* Entry: 1004fa90c; end: 1004faa0f;  */

void FUN_1004fa90c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1103fc928;
  func_0x000107c613fc(&UNK_1103fc928,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puStack_50 = &UNK_101701a7c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101701a84;
  puStack_58 = &UNK_1103fc940;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  FUN_1001c8608(0);
  func_0x000107c610f8();
  FUN_1004faa28(puVar1,uVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 1004faa10; end: 1004faa27;  */

void FUN_1004faa10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004faa28; end: 1004faa73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004faa28(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130404b8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004faa74; end: 1004faa77;  */

void FUN_1004faa74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004faa78; end: 1004faaa3;  */

void FUN_1004faa78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004faaa4; end: 1004fab03;  */

void FUN_1004faaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c4d9e8(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4ff88(param_1,param_2,param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004fab04; end: 1004fab0b;  */

void FUN_1004fab04(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004fab0c; end: 1004fab5f;  */

void FUN_1004fab0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004fab60; end: 1004fab67;  */

void FUN_1004fab60(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10029b788();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1004fabf0(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004fab68; end: 1004fabef;  */

void FUN_1004fab68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10029b788();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1004fabf0(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004fabf0; end: 1004fada7;  */

void FUN_1004fabf0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8f90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f00a490);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fada8);
  (*pcVar1)();
}



/* Entry: 1004fada8; end: 1004fae3b;  */

void FUN_1004fada8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_1;
  func_0x000107c4d9e8(param_1,param_2,param_3);
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = param_4;
    (**(code **)(param_4 + 0x10))(param_4);
    func_0x000107c61180();
    func_0x000107c56bd8(param_1,param_2,lVar1,param_3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1004fae3c; end: 1004fae47;  */

void FUN_1004fae3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a2b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSHashTable_1126b4538,PTR_s_weakObjectsHashTable_112686500);
  return;
}



/* Entry: 1004fae48; end: 1004fae8f; -[SCScopedAccess incrementVersion] */

long FUN_1004fae48(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  lVar1 = *(long *)(param_1 + 0x18) + 1;
  *(long *)(param_1 + 0x18) = lVar1;
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 1004fae90; end: 1004faf0b; -[SCFriendsFeedMessagingStoryReplayingServicesEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001004faef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004faef8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004fae90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108b3de8);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126be890;
  func_0x000107c610f4(PTR_PTR_1126be890);
  func_0x000107c48aa8();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112729e7c),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1004faf0c; end: 1004faf7f; -[SCFriendsFeedMessagingStoryReplayingServices initWithStoryReplayManager:] */

undefined1 * FUN_1004faf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f7620;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004faf80; end: 1004fafab;  */

void FUN_1004faf80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004fafac; end: 1004fb15b; -[SCScopedAccess setScope:withVersion:] */

void FUN_1004fafac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,0);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  if (*(long *)(param_1 + 0x18) == param_4) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      func_0x000107c611a0(param_1 + 8,param_3);
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,param_3);
      func_0x000107c61180();
      func_0x000107c611a0(param_1 + 8,lVar1);
      func_0x000107c61170(lVar1);
    }
    lVar1 = param_1 + 8;
    func_0x000107c61148(lVar1);
    func_0x000107c611a0(auStack_38,lVar1);
    func_0x000107c61170(lVar1);
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x000107c61184();
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x000107c61184();
    func_0x000107c611a8(param_1);
    func_0x000107c61170(param_1);
    puVar3 = auStack_38;
    func_0x000107c61148();
    func_0x000107c61170();
    if ((puVar3 != (undefined1 *)0x0) && (lVar1 != 0)) {
      puVar3 = auStack_38;
      func_0x000107c61148(puVar3);
      (**(code **)(lVar1 + 0x10))(lVar1,puVar3);
      func_0x000107c61170(puVar3);
    }
    puVar3 = auStack_38;
    func_0x000107c61148();
    func_0x000107c61170();
    if ((puVar3 == (undefined1 *)0x0) && (lVar2 != 0)) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
  }
  else {
    func_0x000107c611a8(param_1);
    func_0x000107c61170(param_1);
    lVar2 = 0;
    lVar1 = 0;
  }
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004fb15c; end: 1004fb163;  */

void FUN_1004fb15c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa2b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_featureSettingsService_1125c6488);
  return;
}



/* Entry: 1004fb164; end: 1004fb167; -[SCScopedAccess ifExposed] */

void FUN_1004fb164(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_get_1125ce100);
  return;
}



/* Entry: 1004fb168; end: 1004fb273; -[SCScopedAccess get] */

void FUN_1004fb168(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_10bc6d58c;
  puStack_50 = &UNK_110847450;
  ppuVar1 = &puStack_68;
  lStack_48 = param_1;
  FUN_1001071d4(ppuVar1);
  lVar2 = param_1 + 0x10;
  func_0x000107c61148(lVar2);
  lVar3 = param_1 + 8;
  func_0x000107c61148(lVar3);
  func_0x000107c419b0(lVar2,param_2,lVar3,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 8;
  func_0x000107c61148(lVar2);
  func_0x0001000e2a84(ppuVar1);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1004fb274; end: 1004fb2cb; -[SCAvailableScope didAccessValue:scopeClass:] */

/* WARNING: Possible PIC construction at 0x0001004fb2b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004fb2b8) */

void FUN_1004fb274(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61148(param_1 + 0x28);
  func_0x000107c419b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1004fb2cc; end: 1004fb32b; -[SCScopeGraph didAccessValue:scopeClass:] */

/* WARNING: Possible PIC construction at 0x0001004fb314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004fb318) */

void FUN_1004fb2cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c4d100(uVar1);
  func_0x000107c61180();
  func_0x000107c519a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1004fb32c; end: 1004fb333; -[SCScopeLifecycleContext monitor] */

undefined8 FUN_1004fb32c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1004fb334; end: 1004fb3c3; -[SCMutliplexingScopeLifecycleMonitor scopedAccess:didAccessValue:] */

void FUN_1004fb334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1004fb4d4;
  puStack_48 = &UNK_110cb75b8;
  uStack_40 = param_4;
  uStack_38 = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c3b75c(param_1,param_2,&puStack_60);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1004fb3c4; end: 1004fb4d3; -[SCMutliplexingScopeLifecycleMonitor _forEachMonitor:] */

void FUN_1004fb3c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar4 = *(long *)(param_1 + 8);
  func_0x000107c61174(lVar4);
  lVar2 = lVar4;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar4);
      }
      param_2 = *(undefined8 *)(lVar5 * 8);
      (**(code **)(param_3 + 0x10))(param_3,param_2);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c150a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_scopedAccess_didAccessValue__112631cb0,*(undefined8 *)(param_3 + 0x28),
             *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 1004fb4d4; end: 1004fb4df;  */

void FUN_1004fb4d4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_scopedAccess_didAccessValue__112631cb0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1004fb4e0; end: 1004fb4e3; -[SCStartupScopeLifecycleMonitor scopedAccess:didAccessValue:] */

void FUN_1004fb4e0(void)

{
  return;
}



/* Entry: 1004fb4e4; end: 1004fb4e7; -[SCNoOpScopeLifecycleMonitor scopedAccess:didAccessValue:] */

void FUN_1004fb4e4(void)

{
  return;
}



/* Entry: 1004fb4e8; end: 1004fb4f7; -[SCFeatureSettingsService dataSaverExpirationMillis] */

void FUN_1004fb4e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f378,0);
  return;
}



/* Entry: 1004fb4f8; end: 1004fb53f; -[SCFeatureSettingsService _integerForFeatureSetting:defaultValue:] */

long FUN_1004fb4f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c5dc18();
  func_0x000107c61180();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x000107c49820(param_1);
  }
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 1004fb540; end: 1004fb58b; -[SCFeatureSettingsUserPropertiesService valueForFeatureSetting:] */

void FUN_1004fb540(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3bbdc();
  if ((int)uVar1 != -0x4524111) {
    func_0x000107c5dc1c(param_1,param_2,(long)(int)uVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004fb58c; end: 1004fb7af; -[SCFeatureSettingsUserPropertiesService _itemIdForFeatureSettingName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1004fb58c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  uint uStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar9 = (long)_DAT_112722cb4;
  puVar3 = *(undefined **)(param_1 + lVar9);
  func_0x000107c4a780(puVar3,param_2,param_3);
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar4 = param_3;
    func_0x000107c3ff54(param_3,param_2,&PTR____CFConstantStringClassReference_110dc1338);
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c4080c();
    if (lVar5 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110dd8cb8;
    }
    else {
      lVar12 = *plStack_120;
      ppuVar7 = &PTR____CFConstantStringClassReference_110dd8cb8;
      do {
        lVar11 = 0;
        ppuVar10 = ppuVar7;
        do {
          if (*plStack_120 != lVar12) {
            func_0x000107c61128(lVar4);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar11 * 8);
          func_0x000107c3f534(uVar6);
          func_0x000107c61180();
          ppuVar7 = ppuVar10;
          func_0x000107c5c170(ppuVar10,param_2,uVar6);
          func_0x000107c61180();
          func_0x000107c61170(ppuVar10);
          func_0x000107c61170(uVar6);
          lVar11 = lVar11 + 1;
          ppuVar10 = ppuVar7;
        } while (lVar5 != lVar11);
        lVar5 = lVar4;
        func_0x000107c4080c(lVar4,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar5 != 0);
    }
    func_0x000107c61170();
    FUN_1004fb7b0();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c44398();
    func_0x000107c61170(lVar4);
    if ((int)lVar5 == 0) {
      func_0x000107c50254(*(undefined8 *)(param_1 + _DAT_112722cbc),param_2,param_3);
      uStack_134 = 0xfbadbeef;
    }
    else {
      func_0x000107c55910(*(undefined8 *)(param_1 + lVar9),param_2,uStack_134,param_3);
    }
    puVar8 = (undefined *)(ulong)uStack_134;
    func_0x000107c61170(ppuVar7);
  }
  else {
    puVar8 = puVar3;
    func_0x000107c49804(puVar3);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    if (puRam00000001136bb9a0 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126ae980;
      func_0x000107c3dbd8(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd8d78
                          ,&UNK_10dd9c3f8,&UNK_10dda6f70,0x565,&UNK_1053e880c,0,&UNK_10dda8504);
      do {
        if (puRam00000001136bb9a0 != (undefined *)0x0) {
          ClearExclusiveLocal();
          func_0x000107c61170();
          return puRam00000001136bb9a0;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1136bb9a0,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          puRam00000001136bb9a0 = puVar3;
        }
      } while (cVar1 != '\0');
    }
    return puRam00000001136bb9a0;
  }
  return puVar8;
}



/* Entry: 1004fb7b0; end: 1004fb83f;  */

undefined * FUN_1004fb7b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bb9a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd8(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd8d78,
                        &UNK_10dd9c3f8,&UNK_10dda6f70,0x565,&UNK_1053e880c,0,&UNK_10dda8504);
    do {
      if (puRam00000001136bb9a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001136bb9a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bb9a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bb9a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bb9a0;
}



/* Entry: 1004fb840; end: 1004fb92b; -[GPBEnumDescriptor getValue:forEnumName:] */

void FUN_1004fb840(long param_1,undefined8 param_2,undefined4 *param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c4adac();
  uVar3 = param_4;
  func_0x000107c4adac();
  if (((lVar2 + 1U < uVar3) && (uVar3 = param_4, func_0x000107c44a40(), (int)uVar3 != 0)) &&
     (uVar3 = param_4, func_0x000107c3f7fc(), (int)uVar3 == 0x5f)) {
    func_0x000107c3ac4c();
    func_0x000107c3ef78(param_1);
    lVar5 = *(long *)(param_1 + 0x30);
    if ((lVar5 != 0) && (uVar1 = *(uint *)(param_1 + 0x38), uVar1 != 0)) {
      lVar6 = 0;
      lVar7 = *(long *)(param_1 + 0x10);
      do {
        lVar4 = param_4 + lVar2 + 1U;
        func_0x000107c613c0(lVar4,lVar7 + (ulong)*(uint *)(lVar5 + lVar6));
        if ((int)lVar4 == 0) {
          if (param_3 == (undefined4 *)0x0) {
            return;
          }
          *param_3 = *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar6);
          return;
        }
        lVar6 = lVar6 + 4;
      } while ((ulong)uVar1 * 4 - lVar6 != 0);
    }
  }
  return;
}



/* Entry: 1004fb92c; end: 1004fb9af; -[GPBEnumDescriptor calcValueNameOffsets] */

void FUN_1004fb92c(long param_1)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  
  func_0x000107c611a4();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar5 = (ulong)uVar1;
    piVar2 = (int *)(uVar5 << 2);
    func_0x000107c610a0();
    if (piVar2 != (int *)0x0) {
      if (uVar1 != 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        lVar4 = lVar6;
        piVar7 = piVar2;
        do {
          *piVar7 = (int)lVar4 - (int)lVar6;
          lVar3 = lVar4;
          func_0x000107c613d0();
          lVar4 = lVar4 + lVar3 + 1;
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 1;
        } while (uVar5 != 0);
      }
      *(int **)(param_1 + 0x30) = piVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_sync_exit_11034d348)(param_1);
  return;
}



/* Entry: 1004fb9b0; end: 1004fbf83; -[SCFriendsFeedDataServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004fb9b0(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar13 = param_1 + _DAT_1127492dc;
  func_0x000107c61148(lVar13);
  lVar2 = lVar13;
  func_0x000107c443dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  lVar13 = lVar2;
  func_0x000107c5c734(lVar2);
  func_0x000107c61180();
  func_0x000107c6071c();
  func_0x000107c54604(lVar13);
  func_0x000107c61170(lVar13);
  func_0x000107c61144(auStack_80,param_1);
  puVar3 = PTR_PTR_1126ae720;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_100bba46c;
  puStack_90 = &UNK_11084d4a8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127492e0);
  *(undefined **)(param_1 + _DAT_1127492e0) = puVar3;
  func_0x000107c61170(uVar12);
  puVar4 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_d8 = puVar9;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_100ba69d8;
  puStack_c0 = &UNK_110927708;
  func_0x000107c6111c(auStack_b0,auStack_80);
  puStack_b8 = puVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127492e4);
  *(undefined **)(param_1 + _DAT_1127492e4) = puVar3;
  func_0x000107c61170(uVar12);
  puVar3 = PTR_PTR_1126ae720;
  puStack_100 = puVar9;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_1064e17dc;
  puStack_e8 = &UNK_110927738;
  func_0x000107c6111c(auStack_e0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_128 = puVar9;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x1004fd33c;
  puStack_110 = &UNK_110927768;
  func_0x000107c6111c(auStack_108,auStack_80);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_150 = puVar9;
  uStack_148 = 0xc2000000;
  puStack_140 = &UNK_1064e181c;
  puStack_138 = &UNK_110927798;
  func_0x000107c6111c(auStack_130,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  if (lRam00000001136c39e8 != -1) {
    FUN_10002a2fc(0x1136c39e8,&PTR___NSConcreteGlobalBlock_110927848);
  }
  uVar1 = uRam00000001136c39e0;
  puVar7 = PTR_PTR_1126ae720;
  puStack_188 = puVar9;
  uStack_180 = 0xc2000000;
  puStack_178 = &UNK_1064e185c;
  puStack_170 = &UNK_1109277c8;
  func_0x000107c6111c(auStack_160,auStack_80);
  uStack_158 = uVar1;
  puStack_168 = puVar6;
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_1b0 = puVar9;
  uStack_1a8 = 0xc2000000;
  puStack_1a0 = &UNK_1064e18a8;
  puStack_198 = &UNK_1109277f8;
  func_0x000107c6111c(auStack_190,auStack_80);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126cb198;
  func_0x000107c610f4();
  func_0x000107c468bc();
  puVar10 = PTR_PTR_1126cb1a0;
  func_0x000107c610f4();
  func_0x000107c46a6c();
  lVar13 = (long)_DAT_1127492ec;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar10;
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(param_1 + _DAT_1127492f0);
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  func_0x000107c61174(uVar12);
  func_0x000107c42c20(uVar14);
  func_0x000107c61170(uVar12);
  puVar10 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c45454();
  lVar13 = (long)_DAT_1127492f4;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar10;
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar11);
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  func_0x000107c6111c(auStack_1b8,auStack_80);
  func_0x000107c4e524(uVar12);
  func_0x000107c61120(auStack_1b8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_190);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_160);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_130);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_108);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1004fbf84; end: 1004fbfdf; -[SCGhostToFeedLogger setEntryPointBeginTime:] */

void FUN_1004fbf84(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1004fbfe0;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_2 + 0x10),param_3,&puStack_40);
  return;
}



/* Entry: 1004fbfe0; end: 1004fbfef;  */

void FUN_1004fbfe0(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 1004fbff0; end: 1004fc037;  */

void FUN_1004fbff0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5d9c0();
  uRam00000001136c39e0 = puVar2 == (undefined *)0x1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


