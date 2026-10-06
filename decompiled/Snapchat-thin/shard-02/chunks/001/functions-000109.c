/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019886a8; end: 1019886af;  */

void FUN_1019886a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1019886b0; end: 1019886ff;  */

undefined8 FUN_1019886b0(void)

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



/* Entry: 101988700; end: 101988743;  */

undefined1  [16] FUN_101988700(void)

{
  return ZEXT816(0x11041f1e8);
}



/* Entry: 101988744; end: 10198876b;  */

void FUN_101988744(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10198876c; end: 101988773;  */

undefined8 FUN_10198876c(void)

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



/* Entry: 101988774; end: 101988acf;  */

long FUN_101988774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar1 = PTR_PTR_1126a81c8;
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
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef1c450);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
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



/* Entry: 101988ad0; end: 101988b3b;  */

void FUN_101988ad0(void)

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



/* Entry: 101988b3c; end: 101988b8b;  */

undefined8 FUN_101988b3c(void)

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



/* Entry: 101988b8c; end: 101988bcf;  */

undefined1  [16] FUN_101988b8c(void)

{
  return ZEXT816(0x11041f2b0);
}



/* Entry: 101988bd0; end: 101988bf7;  */

void FUN_101988bd0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101988bf8; end: 101988bff;  */

undefined8 FUN_101988bf8(void)

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



/* Entry: 101988c00; end: 101988eb3;  */

void FUN_101988c00(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010020912c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a81d0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc4820);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc4660);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efbb4b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 101988eb4; end: 101988ebf;  */

void FUN_101988eb4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010020912c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a81d0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc4820);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc4660);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efbb4b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 101988ec0; end: 101988f23;  */

undefined8
FUN_101988ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101988f24(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 101988f24; end: 101989187;  */

void FUN_101988f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a81d0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
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
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc4820);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc4660);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efbb4b0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 101989188; end: 1019891cb;  */

void FUN_101989188(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019891cc; end: 10198921f;  */

void FUN_1019891cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101989220; end: 101989227;  */

void FUN_101989220(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101989228; end: 101989277;  */

undefined8 FUN_101989228(void)

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



/* Entry: 101989278; end: 1019892bb;  */

undefined1  [16] FUN_101989278(void)

{
  return ZEXT816(0x11041f378);
}



/* Entry: 1019892bc; end: 1019892e3;  */

void FUN_1019892bc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019892e4; end: 1019892eb;  */

undefined8 FUN_1019892e4(void)

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



/* Entry: 1019892ec; end: 10198937f; -[_TtC43FriendingFindFriendsEligibilityServicesImpl33FindFriendsEligibilityCheckerImpl isEligibleForFindFriendsSettings] */

long FUN_1019892ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = lVar2;
  if (lVar2 != 0) {
    func_0x000107c6157c();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x00010098a0cc(0);
      uVar1 = 0;
      func_0x00010098a590(0);
      lVar3 = lVar2;
      func_0x000107c3ebc0(lVar2,param_2,uVar1);
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61574(param_1);
  }
  return lVar3;
}



/* Entry: 101989380; end: 1019893ab;  */

void FUN_101989380(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019893ac; end: 1019893eb;  */

void FUN_1019893ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1019893ec; end: 101989407;  */

/* WARNING: Possible PIC construction at 0x0001019893f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019893fc) */

void FUN_1019893ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101989408; end: 101989453;  */

void FUN_101989408(void)

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



/* Entry: 101989454; end: 10198953b;  */

void FUN_101989454(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11041f488;
  func_0x000107c613fc(&UNK_11041f488,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x101989544;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100989590;
  puStack_48 = &UNK_11041f4c8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000100209888(0);
  func_0x000107c610f8();
  func_0x0001003e0fa8();
  *param_1 = puVar1;
  return;
}



/* Entry: 10198953c; end: 10198955b;  */

void FUN_10198953c(long param_1,long param_2)

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



/* Entry: 10198955c; end: 101989607;  */

void FUN_10198955c(void)

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



/* Entry: 101989608; end: 101989617;  */

void FUN_101989608(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101989618; end: 1019896b7;  */

undefined8
FUN_101989618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  long lVar1;
  
  lVar1 = param_6;
  func_0x0001000c6518(param_6,*(undefined8 *)(param_6 + 0x18));
  FUN_10198a1e8(param_1,param_2,param_3,param_4,param_5,lVar1);
  func_0x0001000834e4(param_6);
  return param_1;
}



/* Entry: 1019896b8; end: 1019896cf;  */

void FUN_1019896b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019896d0,0,0);
  return;
}



/* Entry: 1019896d0; end: 101989837;  */

void FUN_1019896d0(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(*(long *)(unaff_x22 + 0x98) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  if (uVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xb0) = lVar2;
    if (lVar2 != 0) {
      uVar3 = uVar1;
      func_0x000107c42d3c();
      if (((long)uVar3 < 1) || (uVar4 = uVar3, func_0x0001055a9344(), (int)uVar4 != 0)) {
        uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar5 = 0;
        func_0x000103e6a8ac(0);
        func_0x000103e6a62c();
      }
      else {
        FUN_101989d28();
        if ((uVar3 & 1) != 0) {
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_101989838;
          func_0x000107c61448(unaff_x22 + 0x10,1);
          FUN_10198aec4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
        uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar5 = 0;
        func_0x000103e6a8ac(0);
        func_0x000103e6a61c();
      }
      func_0x000107c4d664(uVar6);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(lVar2);
      goto LAB_1019897ac;
    }
    func_0x000107c61170(uVar1);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000103e6a8ac(0);
  uVar5 = 0;
  func_0x000103e6a6f8(0);
  func_0x000107c4d664(uVar6);
LAB_1019897ac:
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001019897cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101989838; end: 1019898a3;  */

void FUN_101989838(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(lVar2 + 0x90);
    pcVar1 = FUN_1019898a4;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101989a04;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1019898a4; end: 10198999f;  */

void FUN_1019898a4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(unaff_x22 + 0xc0);
  lVar4 = *(long *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  lVar2 = *(long *)(lVar4 + 0x58);
  func_0x0001000a8868(lVar4 + 0x38,uVar1);
  if (uVar3 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0xc0)) {
      uVar3 = *(ulong *)(unaff_x22 + 0xc0);
    }
    func_0x000107c60480(uVar3);
  }
  (**(code **)(lVar2 + 8))(0 < (long)uVar3,0,uVar1,lVar2);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  lVar2 = *(long *)(lVar4 + 0x58);
  func_0x0001000a8868(lVar4 + 0x38,uVar1);
  (**(code **)(lVar2 + 8))(uVar3,2,uVar1,lVar2);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1019899a0;
  func_0x000107c61448(unaff_x22 + 0x50,1);
  FUN_101989f70();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 1019899a0; end: 101989a03;  */

void FUN_1019899a0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 200) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101989b38;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101989bec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101989a04; end: 101989b37;  */

void FUN_101989a04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar7;
  func_0x000107c614b0(uVar7);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar6 = unaff_x22 + 0xd0;
  func_0x000107c6147c(lVar6,(undefined8 *)(unaff_x22 + 0x90),uVar5,&UNK_11041f608,0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  if ((int)lVar6 == 0) {
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x90));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c614ac(uVar7);
    uVar4 = *(undefined1 *)(unaff_x22 + 0xd0);
    uVar7 = *(undefined8 *)(lVar6 + 0x50);
    lVar3 = *(long *)(lVar6 + 0x58);
    func_0x0001000a8868(lVar6 + 0x38,uVar7);
    (**(code **)(lVar3 + 8))(uVar4,1,uVar7,lVar3);
    func_0x000103e6a8ac(0);
    uVar7 = 0;
    func_0x000103e6a6f8(0);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x90));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101989b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101989b38; end: 101989beb;  */

void FUN_101989b38(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xc0));
  uVar6 = *(undefined8 *)(lVar2 + 0x50);
  lVar5 = *(long *)(lVar2 + 0x58);
  func_0x0001000a8868(lVar2 + 0x38,uVar6);
  (**(code **)(lVar5 + 8))(2,3,uVar6,lVar5);
  func_0x000103e6a8ac(0);
  uVar6 = 1;
  func_0x000103e6a6f8(1);
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101989be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101989bec; end: 101989d27;  */

void FUN_101989bec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xc0));
  uVar7 = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar7;
  func_0x000107c614b0(uVar7);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar6 = unaff_x22 + 0xd0;
  func_0x000107c6147c(lVar6,(undefined8 *)(unaff_x22 + 0x90),uVar5,&UNK_11041f608,0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  if ((int)lVar6 == 0) {
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x90));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c614ac(uVar7);
    uVar4 = *(undefined1 *)(unaff_x22 + 0xd0);
    uVar7 = *(undefined8 *)(lVar6 + 0x50);
    lVar3 = *(long *)(lVar6 + 0x58);
    func_0x0001000a8868(lVar6 + 0x38,uVar7);
    (**(code **)(lVar3 + 8))(uVar4,1,uVar7,lVar3);
    func_0x000103e6a8ac(0);
    uVar7 = 0;
    func_0x000103e6a6f8(0);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x90));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101989d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101989d28; end: 101989e23;  */

bool FUN_101989d28(double param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = *(long *)(unaff_x20 + 0x30);
  func_0x000108c07908(lVar3);
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101989e18);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101989e1c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101989e20);
    (*pcVar1)();
  }
  if (!SBORROW8((long)param_1,param_2)) {
    return lVar3 < (long)param_1 - param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101989e24);
  (*pcVar1)();
}



/* Entry: 101989e24; end: 101989efb; -[_TtC28FriendingFacebookContactSync30FriendingFacebookContactSyncer syncFacebookContactsIfNeeded] */

void FUN_101989e24(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c6157c(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_11041f628;
  func_0x000107c613fc(&UNK_11041f628,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(puVar1);
  uVar3 = 3;
  func_0x000100859150(3,2,0x34,4,0,0,&UNK_10d9a7b00,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101989efc; end: 101989f6f; -[_TtC28FriendingFacebookContactSync30FriendingFacebookContactSyncer linkedWithFacebook] */

bool FUN_101989efc(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61574(param_1);
    bVar1 = false;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c42d3c();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(param_1);
    bVar1 = 0 < lVar2;
  }
  return bVar1;
}



/* Entry: 101989f70; end: 10198a0c3;  */

void FUN_101989f70(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  puVar2 = &UNK_11041f650;
  func_0x000107c613fc(&UNK_11041f650,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10198a560;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ab3660;
  puStack_78 = &UNK_11041f668;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c4f7c0(uVar4);
  func_0x000107c61180();
  puVar2 = &UNK_11041f6a0;
  func_0x000107c613fc(&UNK_11041f6a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcStack_70 = (code *)0x10198a584;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ab47f8;
  puStack_78 = &UNK_11041f6b8;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c4e55c(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10198a0c4; end: 10198a19b;  */

void FUN_10198a0c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000100e18fbc(0);
  func_0x000107c5fc48(param_2,uVar1);
  func_0x0001055a7c68(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10198a19c; end: 10198a1e7;  */

void FUN_10198a19c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x0001000834e4(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10198a1e8; end: 10198a2cb;  */

long FUN_10198a1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  )

{
  long extraout_x8;
  long lVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_8 + -8);
  uStack_68 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  func_0x000107c613fc(param_7,0x60,7);
  (**(code **)(lVar1 + 0x10))
            (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_6,param_8);
  *(long *)(param_7 + 0x50) = param_8;
  *(undefined8 *)(param_7 + 0x58) = param_9;
  func_0x0001000c5db4(param_7 + 0x38);
  (**(code **)(lVar1 + 0x20))();
  *(undefined8 *)(param_7 + 0x10) = param_1;
  *(undefined8 *)(param_7 + 0x18) = param_2;
  *(undefined8 *)(param_7 + 0x20) = param_3;
  *(undefined8 *)(param_7 + 0x28) = param_4;
  *(undefined8 *)(param_7 + 0x30) = uStack_68;
  return param_7;
}



/* Entry: 10198a2cc; end: 10198a2cf;  */

void FUN_10198a2cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de0188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a79c0;
  func_0x000107c61520(&UNK_10d9a79c0,&UNK_11041f608);
  puRam0000000112de0188 = puVar1;
  return;
}



/* Entry: 10198a2d0; end: 10198a30f;  */

void FUN_10198a2d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de0188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a79c0;
  func_0x000107c61520(&UNK_10d9a79c0,&UNK_11041f608);
  puRam0000000112de0188 = puVar1;
  return;
}



/* Entry: 10198a310; end: 10198a473;  */

int FUN_10198a310(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10198a38c;
        goto LAB_10198a370;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10198a370:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10198a38c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10198a474; end: 10198a4bf;  */

void FUN_10198a474(void)

{
  func_0x000107c61168(&PTR_PTR_112de01d0);
  return;
}



/* Entry: 10198a4c0; end: 10198a523;  */

void FUN_10198a4c0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10198a524;
  plVar3[0x13] = lVar1;
  plVar3[0x14] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019896d0,0,0);
  return;
}



/* Entry: 10198a524; end: 10198a55f;  */

void FUN_10198a524(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010198a55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10198a560; end: 10198a58b;  */

void FUN_10198a560(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x000100e18fbc(0);
  func_0x000107c5fc48(uVar2,uVar1);
  func_0x0001055a7c68(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10198a58c; end: 10198a5cb;  */

void FUN_10198a58c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de0258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a7a28;
  func_0x000107c61520(&UNK_10d9a7a28,&UNK_11041f608);
  puRam0000000112de0258 = puVar1;
  return;
}



/* Entry: 10198a5cc; end: 10198a6a3;  */

void FUN_10198a5cc(long param_1,long param_2)

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



/* Entry: 10198a6a4; end: 10198a7e3;  */

void FUN_10198a6a4(ulong param_1,byte param_2)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined1 **unaff_x19;
  long lVar5;
  long *unaff_x20;
  undefined8 *unaff_x21;
  char *pcVar6;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_2 < 2) {
    if (param_2 != 0) {
      lVar5 = unaff_x20[2];
      if ((param_1 & 0xff) == 0) {
        uVar2 = 0xd000000000000024;
        pcVar6 = "yncError.PersistenceError";
      }
      else {
        uVar2 = 0xd000000000000029;
        pcVar6 = "yncError.Unknown";
        if (((uint)param_1 & 0xff) != 1) {
          uVar2 = 0xd000000000000020;
          pcVar6 = "EligibilityServiceProvider";
        }
      }
      func_0x000107c5fadc(uVar2,(ulong)pcVar6 | 0x8000000000000000);
      func_0x000107c6142c((ulong)pcVar6 | 0x8000000000000000);
      func_0x0001055a4658(lVar5,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    puVar4 = (undefined *)(ulong)((uint)param_1 & 1);
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = (undefined1 **)0x0;
    if (unaff_x20[2] != 0) {
      unaff_x20 = *(long **)(unaff_x20[2] + 8);
      pcVar6 = "true";
      if ((param_1 & 1) == 0) {
        pcVar6 = "false";
      }
      func_0x00010002b838(appuStack_50,pcVar6);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
      puVar4 = &UNK_110899c68;
      (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_110899c68,&uStack_70,1);
      unaff_x19 = &puStack_58;
      puStack_58 = (undefined1 *)&uStack_70;
      func_0x00010007e5dc();
      unaff_x21 = &uStack_70;
      if (uStack_40 < 0) {
        unaff_x19 = appuStack_50[0];
        __ZdlPv();
        unaff_x21 = &uStack_70;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    puStack_58 = (undefined1 *)unaff_x21;
    func_0x00010007e5dc(&puStack_58);
    if (uStack_40._7_1_ < '\0') {
      __ZdlPv(appuStack_50[0]);
    }
    unaff_x30 = &LAB_1055a4568;
    ppuVar1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)&uStack_70;
  }
  else {
    if (param_2 == 2) {
      if (unaff_x20[2] != 0) {
        plVar3 = *(long **)(unaff_x20[2] + 8);
        uStack_40 = 0;
        lStack_38 = 0;
        (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110899da8,&uStack_40,param_1);
        func_0x00010007e5dc(&stack0xffffffffffffffd8);
      }
      return;
    }
    if (param_1 == 0) {
      if (unaff_x20[2] != 0) {
        plVar3 = *(long **)(unaff_x20[2] + 8);
        uStack_40 = 0;
        lStack_38 = 0;
        (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110899c18,&uStack_40,1);
        func_0x00010007e5dc(&stack0xffffffffffffffd8);
      }
      return;
    }
    if (param_1 != 1) {
      if (unaff_x20[2] != 0) {
        plVar3 = *(long **)(unaff_x20[2] + 8);
        uStack_40 = 0;
        lStack_38 = 0;
        (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110899d08,&uStack_40,1);
        func_0x00010007e5dc(&stack0xffffffffffffffd8);
      }
      return;
    }
    ppuVar1 = (undefined1 **)unaff_x20[2];
    puVar4 = (undefined *)0x1;
  }
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 ***)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar3 = (long *)ppuVar1[1];
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
    (**(code **)(*plVar3 + 0x18))
              (plVar3,&UNK_110899cb8,(undefined1 *)((long)register0x00000008 + -0x40),puVar4);
    *(undefined1 **)((long)register0x00000008 + -0x28) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    func_0x00010007e5dc((undefined1 *)((long)register0x00000008 + -0x28));
  }
  return;
}



/* Entry: 10198a7e4; end: 10198a827;  */

void FUN_10198a7e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10198a828; end: 10198a847;  */

void FUN_10198a828(void)

{
  FUN_10198a6a4();
  return;
}



/* Entry: 10198a848; end: 10198a8a3;  */

void FUN_10198a848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 10198a8a4; end: 10198ab2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198a8a4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x000107c44580();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      func_0x000107c421c8();
      func_0x000107c61180();
      lVar3 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar3 != 0) {
        uVar6 = 0xd00000000000001e;
        func_0x000107c5fadc(0xd00000000000001e,0x800000010efc4980);
        lVar5 = lVar2;
        func_0x000107c4e60c();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        puVar7 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        puVar8 = &UNK_11041f840;
        func_0x000107c613fc(&UNK_11041f840,0x20,7);
        *(long *)(puVar8 + 0x10) = lVar5;
        *(long *)(puVar8 + 0x18) = lVar4;
        pcStack_70 = FUN_10198ad64;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        uStack_80 = 0x10198ad80;
        puStack_78 = &UNK_11041f858;
        puStack_68 = puVar8;
        func_0x000107c60bc4(&puStack_90);
        puVar8 = puStack_68;
        func_0x000107c615f0(lVar5);
        func_0x000107c615f0(lVar4);
        func_0x000107c61574(puVar8);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar9);
        lVar10 = *(long *)(param_1 + 0x20);
        func_0x000107c42eac();
        func_0x000107c61180();
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10198ab28);
          (*pcVar1)();
        }
        lVar11 = *(long *)(param_1 + 0x30);
        func_0x000107c3fa04();
        func_0x000107c61180();
        if (lVar11 != 0) {
          lVar12 = 0;
          func_0x00010198a808();
          lVar13 = lVar12;
          func_0x000107c613fc();
          puVar8 = PTR_PTR_1126a81d8;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar2);
          *(undefined **)(lVar13 + 0x10) = puVar8;
          lVar2 = 0;
          FUN_10198a474();
          func_0x000107c613fc();
          *(long *)(lVar2 + 0x50) = lVar12;
          *(undefined ***)(lVar2 + 0x58) = &PTR_DAT_11041f7d0;
          *(long *)(lVar2 + 0x10) = lVar10;
          *(undefined **)(lVar2 + 0x18) = puVar7;
          *(long *)(lVar2 + 0x20) = lVar3;
          *(long *)(lVar2 + 0x28) = lVar5;
          *(long *)(lVar2 + 0x30) = lVar11;
          *(long *)(lVar2 + 0x38) = lVar13;
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10198ab2c);
        (*pcVar1)();
      }
      func_0x000107c615e8(lVar2);
      lVar2 = lVar4;
    }
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10198ab2c; end: 10198ab33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198ab2c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x28) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c44580();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar5 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c421c8();
      func_0x000107c61180();
      lVar3 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar3 != 0) {
        uVar6 = 0xd00000000000001e;
        func_0x000107c5fadc(0xd00000000000001e,0x800000010efc4980);
        lVar5 = lVar2;
        func_0x000107c4e60c();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        puVar7 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        puVar8 = &UNK_11041f840;
        func_0x000107c613fc(&UNK_11041f840,0x20,7);
        *(long *)(puVar8 + 0x10) = lVar5;
        *(long *)(puVar8 + 0x18) = lVar4;
        pcStack_70 = FUN_10198ad64;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        uStack_80 = 0x10198ad80;
        puStack_78 = &UNK_11041f858;
        puStack_68 = puVar8;
        func_0x000107c60bc4(&puStack_90);
        puVar8 = puStack_68;
        func_0x000107c615f0(lVar5);
        func_0x000107c615f0(lVar4);
        func_0x000107c61574(puVar8);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar9);
        lVar10 = *(long *)(unaff_x20 + 0x20);
        func_0x000107c42eac();
        func_0x000107c61180();
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10198ab28);
          (*pcVar1)();
        }
        lVar11 = *(long *)(unaff_x20 + 0x30);
        func_0x000107c3fa04();
        func_0x000107c61180();
        if (lVar11 != 0) {
          lVar12 = 0;
          func_0x00010198a808();
          lVar13 = lVar12;
          func_0x000107c613fc();
          puVar8 = PTR_PTR_1126a81d8;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar2);
          *(undefined **)(lVar13 + 0x10) = puVar8;
          lVar2 = 0;
          FUN_10198a474();
          func_0x000107c613fc();
          *(long *)(lVar2 + 0x50) = lVar12;
          *(undefined ***)(lVar2 + 0x58) = &PTR_DAT_11041f7d0;
          *(long *)(lVar2 + 0x10) = lVar10;
          *(undefined **)(lVar2 + 0x18) = puVar7;
          *(long *)(lVar2 + 0x20) = lVar3;
          *(long *)(lVar2 + 0x28) = lVar5;
          *(long *)(lVar2 + 0x30) = lVar11;
          *(long *)(lVar2 + 0x38) = lVar13;
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10198ab2c);
        (*pcVar1)();
      }
      func_0x000107c615e8(lVar2);
      lVar2 = lVar4;
    }
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10198ab34; end: 10198abaf;  */

undefined8 FUN_10198ab34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_10198b57c(0);
  uVar2 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  uVar3 = param_1;
  FUN_10198b538(param_1,param_2,uVar1,uVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return uVar3;
}



/* Entry: 10198abb0; end: 10198abe7;  */

void FUN_10198abb0(long param_1)

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



/* Entry: 10198abe8; end: 10198abef;  */

void FUN_10198abe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10198abf0; end: 10198ac23;  */

/* WARNING: Possible PIC construction at 0x00010198abfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010198ac0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198ac00) */
/* WARNING: Removing unreachable block (ram,0x00010198ac10) */

void FUN_10198abf0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10198ac24; end: 10198ac87;  */

void FUN_10198ac24(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10198ac88; end: 10198ad63;  */

void FUN_10198ac88(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_50 = 0x10198ad84;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x10198ad7c;
  puStack_58 = &UNK_11041f808;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x000100209744(0);
  func_0x000107c610f8();
  func_0x00010097bdf8(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 10198ad64; end: 10198ad93;  */

undefined8 FUN_10198ad64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0;
  FUN_10198b57c(0);
  uVar4 = uVar1;
  func_0x000107c614f0(uVar1);
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar2);
  uVar5 = uVar1;
  FUN_10198b538(uVar1,uVar2,uVar3,uVar4);
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(uVar2);
  return uVar5;
}



/* Entry: 10198ad94; end: 10198adef;  */

undefined8 FUN_10198ad94(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  func_0x000107c614f0();
  uVar1 = param_1;
  (*param_3)(param_1,param_2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return uVar1;
}



/* Entry: 10198adf0; end: 10198ae07;  */

void FUN_10198adf0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198ae08,0,0);
  return;
}



/* Entry: 10198ae08; end: 10198ae5b;  */

void FUN_10198ae08(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10198ae5c;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_10198aec4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10198ae5c; end: 10198aec3;  */

void FUN_10198ae5c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010198aea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010198aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x50));
  return;
}



/* Entry: 10198aec4; end: 10198b0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198aec4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae748;
  lVar5 = param_2;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x0001055a9338();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    lVar4 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar7 = ((undefined8 *)(param_2 + _DAT_112de0410))[1];
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_2 + _DAT_112de0410);
    *(undefined8 *)(lVar4 + 0x28) = uVar7;
    *(undefined **)(lVar4 + 0x30) = puVar3;
    *(long *)(lVar4 + 0x38) = lVar5;
    func_0x000107c61434();
    lVar5 = lVar4;
    func_0x0001001830b8(lVar4);
    func_0x000107c61588(lVar4);
    func_0x000100ab5dc4((undefined8 *)(lVar4 + 0x20));
    lVar4 = lVar5;
    func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar5);
    puVar2 = puVar1;
    func_0x000107c3d704(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar2);
  }
  uVar7 = *(undefined8 *)(param_2 + _DAT_112de03f0);
  puVar3 = PTR_PTR_1126a81e0;
  func_0x000107c610f8(PTR_PTR_1126a81e0);
  func_0x000107c453e4();
  puVar2 = &UNK_11041f8a8;
  func_0x000107c613fc(&UNK_11041f8a8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcStack_60 = FUN_10198b59c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10198b1dc;
  puStack_68 = &UNK_11041f8c0;
  ppuVar6 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_58;
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c4405c(uVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10198b0cc; end: 10198b1db;  */

/* WARNING: Possible PIC construction at 0x00010198b198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010198b1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198b19c) */
/* WARNING: Removing unreachable block (ram,0x00010198b1a4) */
/* WARNING: Removing unreachable block (ram,0x00010198b1d8) */

void FUN_10198b0cc(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  
  if ((param_2 == 0) && (param_1 != (undefined1 *)0x0)) {
    func_0x000107c61174();
    puVar2 = param_1;
    func_0x000107c5b4a4();
    func_0x000107c61180();
    if (puVar2 != (undefined1 *)0x0) {
      uStack_38 = 0;
      uVar3 = 0;
      func_0x000100e18fbc(0);
      func_0x000107c5fc50(puVar2,&uStack_38,uVar3);
      param_1 = puVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  FUN_10198a58c();
  puVar1 = &UNK_11041f608;
  func_0x000107c613f8(&UNK_11041f608,param_1,0,0);
  *param_1 = 0;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar4 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar3);
  return;
}



/* Entry: 10198b1dc; end: 10198b253;  */

/* WARNING: Possible PIC construction at 0x00010198b238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198b23c) */

void FUN_10198b1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10198b254; end: 10198b2af; -[_TtC28FriendingFacebookContactSync30FacebookContactSyncGrpcService init] */

void FUN_10198b254(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingFacebookContactSync.FacebookContactSyncGrpcService",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10198b280);
  (*pcVar1)();
}



/* Entry: 10198b2b0; end: 10198b313; -[_TtC28FriendingFacebookContactSync30FacebookContactSyncGrpcService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010198b2e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198b2e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198b2b0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de03f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112de03f8 + 8))
  ;
  return;
}



/* Entry: 10198b314; end: 10198b537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198b314(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_60;
  undefined8 uStack_58;
  
  puVar1 = (undefined8 *)(param_3 + _DAT_112de03f8);
  *puVar1 = 0xd000000000000018;
  puVar1[1] = 0x800000010ef11a10;
  *(undefined8 *)(param_3 + _DAT_112de0400) = 120000;
  puVar2 = (undefined8 *)(param_3 + _DAT_112de0408);
  *puVar2 = 0x53746361746e6f43;
  puVar2[1] = 0xef43505247636e79;
  puVar3 = (undefined8 *)(param_3 + _DAT_112de0410);
  *puVar3 = 0xd000000000000010;
  puVar3[1] = 0x800000010ef1c330;
  puVar5 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar6 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  puVar7 = puVar5;
  func_0x000107c545b8(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c57f3c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5343c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar6 = *puVar2;
  uVar4 = puVar2[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c40a28();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126bb3d8;
  func_0x000107c610f8();
  func_0x000107c49088();
  func_0x000107c61170(puVar5);
  func_0x000107c61170();
  *(undefined **)(param_3 + _DAT_112de03f0) = puVar7;
  FUN_10198b57c();
  lStack_60 = param_3;
  uStack_58 = param_2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10198b538; end: 10198b57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198b538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_60;
  undefined8 uStack_58;
  
  FUN_10198b57c();
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(param_1 + _DAT_112de03f8);
  *puVar1 = 0xd000000000000018;
  puVar1[1] = 0x800000010ef11a10;
  *(undefined8 *)(param_1 + _DAT_112de0400) = 120000;
  puVar2 = (undefined8 *)(param_1 + _DAT_112de0408);
  *puVar2 = 0x53746361746e6f43;
  puVar2[1] = 0xef43505247636e79;
  puVar3 = (undefined8 *)(param_1 + _DAT_112de0410);
  *puVar3 = 0xd000000000000010;
  puVar3[1] = 0x800000010ef1c330;
  puVar5 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728,param_2,param_1,param_4);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar6 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  puVar7 = puVar5;
  func_0x000107c545b8(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c57f3c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5343c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar6 = *puVar2;
  uVar4 = puVar2[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c40a28();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126bb3d8;
  func_0x000107c610f8();
  func_0x000107c49088();
  func_0x000107c61170(puVar5);
  func_0x000107c61170();
  *(undefined **)(param_1 + _DAT_112de03f0) = puVar7;
  FUN_10198b57c();
  lStack_60 = param_1;
  uStack_58 = param_2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10198b57c; end: 10198b59b;  */

void FUN_10198b57c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ef038);
  return;
}



/* Entry: 10198b59c; end: 10198b5bf;  */

/* WARNING: Possible PIC construction at 0x00010198b198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010198b1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198b19c) */
/* WARNING: Removing unreachable block (ram,0x00010198b1a4) */
/* WARNING: Removing unreachable block (ram,0x00010198b1d8) */

void FUN_10198b59c(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((param_2 == 0) && (param_1 != (undefined1 *)0x0)) {
    func_0x000107c61174();
    puVar3 = param_1;
    func_0x000107c5b4a4();
    func_0x000107c61180();
    if (puVar3 != (undefined1 *)0x0) {
      uStack_38 = 0;
      uVar5 = 0;
      func_0x000100e18fbc(0);
      func_0x000107c5fc50(puVar3,&uStack_38,uVar5);
      param_1 = puVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  FUN_10198a58c();
  puVar1 = &UNK_11041f608;
  func_0x000107c613f8(&UNK_11041f608,param_1,0,0);
  *param_1 = 0;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar4 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar5,uVar2);
  return;
}



/* Entry: 10198b5c0; end: 10198b66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198b5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112de0440);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112de0448) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112de0450) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112de0458) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112de0460) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10198b66c; end: 10198b68b;  */

void FUN_10198b66c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ef120);
  return;
}



/* Entry: 10198b68c; end: 10198b697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198b68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112de0460);
  puVar1 = &UNK_11041fa18;
  func_0x000107c613fc(&UNK_11041fa18,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_11041fb08;
  func_0x000107c613fc(&UNK_11041fb08,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  uStack_50 = 0x10198c2d0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10198ba6c;
  puStack_58 = &UNK_11041fb20;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c43fa8(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10198b698; end: 10198b76f;  */

void FUN_10198b698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_160 = param_4;
  uStack_158 = param_2;
  uStack_150 = param_3;
  uStack_130 = param_4;
  uStack_128 = param_2;
  uStack_120 = param_3;
  uStack_100 = param_4;
  uStack_f8 = param_2;
  uStack_f0 = param_3;
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  uStack_b0 = param_2;
  uStack_a8 = param_3;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_50 = param_2;
  uStack_48 = param_3;
  uStack_30 = param_2;
  uStack_28 = param_3;
  func_0x00010405d794(0x10198c2dc,auStack_40,0x10198c2e4,auStack_60,0x10198c2ec,auStack_80,
                      FUN_10198c2f4,auStack_a0,0x10198c384,auStack_c0,0x10198c388,auStack_e0,
                      0x10198c30c,auStack_110,0x10198c32c,auStack_140,0x10198c34c,auStack_170);
  return;
}



/* Entry: 10198b770; end: 10198b89f;  */

/* WARNING: Possible PIC construction at 0x00010198b7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010198b7f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198b7d8) */
/* WARNING: Removing unreachable block (ram,0x00010198b7f4) */

void FUN_10198b770(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar2 = 0xd00000000000003d;
  func_0x000107c5fadc(0xd00000000000003d,0x800000010efc4ab0);
  func_0x000107c466bc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10198b8a0; end: 10198b943;  */

/* WARNING: Possible PIC construction at 0x00010198b90c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010198b928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198b910) */
/* WARNING: Removing unreachable block (ram,0x00010198b92c) */

void FUN_10198b8a0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar2 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010efc4a20);
  func_0x000107c466bc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10198b944; end: 10198b9db;  */

/* WARNING: Possible PIC construction at 0x00010198b9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010198b9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198b9ac) */
/* WARNING: Removing unreachable block (ram,0x00010198b9c8) */

void FUN_10198b944(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar2 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010efc4a20);
  func_0x000107c466bc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10198b9dc; end: 10198ba6b;  */

void FUN_10198b9dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_10198bb2c(param_6,param_1,param_2,param_4,param_5);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10198ba6c; end: 10198bab7;  */

void FUN_10198ba6c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10198bab8; end: 10198bb2b; -[SCFriendingGoogleContactSyncerImpl syncGoogleContacts:completionHandler:] */

void FUN_10198bab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11041fae0;
  func_0x000107c613fc(&UNK_11041fae0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_10198c140(0x10198c2c8,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10198bb2c; end: 10198bc4f;  */

/* WARNING: Possible PIC construction at 0x00010198bc1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198bc20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198bb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112de0440);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112de0440))[1];
  lVar2 = *(long *)(unaff_x20 + _DAT_112de0458);
  func_0x000107c4f7c0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c614f0(uVar3);
    puVar4 = &UNK_11041fa18;
    func_0x000107c613fc(&UNK_11041fa18,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_11041fab8;
    func_0x000107c613fc(&UNK_11041fab8,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    *(undefined8 *)(puVar5 + 0x20) = param_5;
    pcVar6 = *(code **)(lVar1 + 8);
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(param_5);
    (*pcVar6)(param_1,param_2,param_3,lVar2,FUN_10198c2bc,puVar5,uVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10198bc50);
  (*pcVar6)();
}



/* Entry: 10198bc50; end: 10198bcc7;  */

void FUN_10198bc50(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10198bcc8(param_1,param_3,param_4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10198bcc8; end: 10198be7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198bcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  lVar8 = *(long *)(unaff_x20 + _DAT_112de0448);
  lVar2 = *(long *)(unaff_x20 + _DAT_112de0458);
  func_0x000107c4f7c0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_11041fa18;
    func_0x000107c613fc(&UNK_11041fa18,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_11041fa40;
    func_0x000107c613fc(&UNK_11041fa40,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(param_3);
    FUN_10198dc5c(param_1);
    uVar9 = *(undefined8 *)(lVar8 + _DAT_112de0580);
    uVar5 = param_1;
    FUN_10198d074();
    puVar6 = &UNK_11041fa68;
    func_0x000107c613fc(&UNK_11041fa68,0x28,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(code **)(puVar6 + 0x18) = FUN_10198c278;
    *(undefined **)(puVar6 + 0x20) = puVar4;
    uStack_60 = 0x10198c284;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_10198ce10;
    puStack_68 = &UNK_11041fa80;
    puStack_58 = puVar6;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000107c61174(lVar2);
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c43bc0(uVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10198be80);
  (*pcVar1)();
}



/* Entry: 10198be80; end: 10198bf0b;  */

void FUN_10198be80(undefined8 param_1,char param_2,long param_3,code *param_4,undefined8 param_5)

{
  undefined1 auStack_48 [24];
  
  if (param_2 == '\x01') {
    (*param_4)();
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      FUN_10198bf0c(param_1,param_4,param_5);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 10198bf0c; end: 10198c07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198bf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112de0450);
  puVar2 = &UNK_11041f978;
  func_0x000107c613fc(&UNK_11041f978,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10198c230;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ab3660;
  puStack_78 = &UNK_11041f990;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112de0458);
  func_0x000107c4f7c0(uVar4);
  func_0x000107c61180();
  puVar2 = &UNK_11041f9c8;
  func_0x000107c613fc(&UNK_11041f9c8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_70 = FUN_10198c254;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ab47f8;
  puStack_78 = &UNK_11041f9e0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e55c(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10198c07c; end: 10198c0d7; -[SCFriendingGoogleContactSyncerImpl init] */

void FUN_10198c07c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingGoogleContactSync.FriendingGoogleContactSyncer",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10198c0a8);
  (*pcVar1)();
}



/* Entry: 10198c0d8; end: 10198c13f; -[SCFriendingGoogleContactSyncerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010198c0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010198c114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198c0f8) */
/* WARNING: Removing unreachable block (ram,0x00010198c118) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198c0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112de0440));
  return;
}



/* Entry: 10198c140; end: 10198c22f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198c140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112de0460);
  puVar1 = &UNK_11041fa18;
  func_0x000107c613fc(&UNK_11041fa18,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_11041fb08;
  func_0x000107c613fc(&UNK_11041fb08,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  uStack_50 = 0x10198c2d0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10198ba6c;
  puStack_58 = &UNK_11041fb20;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c43fa8(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}


