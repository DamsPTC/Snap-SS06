/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006dda1c; end: 1006ddacb;  */

void FUN_1006dda1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002b2b08();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006ddacc(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ddacc; end: 1006ddcfb;  */

void FUN_1006ddacc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8fd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1c6a0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar6);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a7c0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ddcfc);
  (*pcVar1)();
}



/* Entry: 1006ddcfc; end: 1006ddd53;  */

/* WARNING: Possible PIC construction at 0x0001006ddd3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006ddd40) */

void FUN_1006ddcfc(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x38);
  func_0x000107c3c0f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1006ddd54; end: 1006dde53; -[SCSnapSendingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ddd54(long param_1)

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
  puVar2 = PTR_PTR_1126be770;
  func_0x000107c610f4(PTR_PTR_1126be770);
  func_0x000107c487e4();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112729d50));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1006dde54; end: 1006ddeab; -[_TtC19SnapSendingServices19SnapSendingServices initWithSnapSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006dde54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff58a0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1006ddeac; end: 1006ddedf;  */

void FUN_1006ddeac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006ddee0; end: 1006ddee7;  */

void FUN_1006ddee0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ddee8; end: 1006ddf3b;  */

void FUN_1006ddee8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ddf3c; end: 1006ddf4f;  */

void FUN_1006ddf3c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_1002c6acc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  *(undefined8 *)(lVar2 + 0x50) = uStack_a0;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174();
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  uVar10 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a9990;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar3);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa60);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar3);
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar3);
  uVar12 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbaa40);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01ac10);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(long *)(lVar2 + 0x58) = lVar13;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006de4d4);
  (*pcVar1)();
}



/* Entry: 1006ddf50; end: 1006de4d3;  */

void FUN_1006ddf50(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
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
  FUN_100083b20(&uStack_a0);
  FUN_1002c6acc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9990;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar2);
  uVar11 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbaa40);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01ac10);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(param_2 + 0x58) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006de4d4);
  (*pcVar1)();
}



/* Entry: 1006de4d4; end: 1006de62b; -[SCGroupsDataUpdater _performFilterLoadedGroupsForConversations:fetchedConversations:snapchatterUserIdToSnapchatter:completion:] */

void FUN_1006de4d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c4e524(uVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1006de62c; end: 1006de663;  */

void FUN_1006de62c(long param_1)

{
  param_1 = param_1 + 0x40;
  func_0x000107c61148(param_1);
  func_0x000107c3b738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1006de664; end: 1006de7c3; -[SCGroupsDataUpdater _filterLoadedGroupsForConversations:fetchedConversations:snapchatterUserIdToSnapchatter:completion:] */

void FUN_1006de664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_10050471c(param_4,&PTR___NSConcreteGlobalBlock_110894410,
                &PTR___NSConcreteGlobalBlock_110894450);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_105514b74;
  puStack_70 = &UNK_110894470;
  uStack_68 = param_4;
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x0001006372a4(param_3,&puStack_88);
  func_0x000107c61170(param_3);
  uVar2 = uVar1;
  FUN_100504554(uVar1,&PTR___NSConcreteGlobalBlock_1108944a0);
  func_0x000107c61174(param_6);
  func_0x000107c3cd58(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1006de7c4; end: 1006de873;  */

void FUN_1006de7c4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_2;
  func_0x000107c406e8();
  if (lVar1 == 1) {
    lVar1 = param_2;
    func_0x000107c40674(param_2);
    func_0x000107c61180();
  }
  else {
    lVar1 = 0;
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1006de874; end: 1006debef; -[SCGroupsDataUpdater _upsertGroupsWithConversations:conversationIds:snapchatterUserIdToSnapchatter:completion:] */

/* WARNING: Possible PIC construction at 0x0001006dea00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006dea10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006dea20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006dea6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006dea7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006deacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006deadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006deb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006deb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006deba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006debb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006debc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006deaa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006dea94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006debc4) */
/* WARNING: Removing unreachable block (ram,0x0001006debb4) */
/* WARNING: Removing unreachable block (ram,0x0001006deba4) */
/* WARNING: Removing unreachable block (ram,0x0001006deb94) */
/* WARNING: Removing unreachable block (ram,0x0001006deb84) */
/* WARNING: Removing unreachable block (ram,0x0001006deae0) */
/* WARNING: Removing unreachable block (ram,0x0001006dead0) */
/* WARNING: Removing unreachable block (ram,0x0001006dea80) */
/* WARNING: Removing unreachable block (ram,0x0001006deaa8) */
/* WARNING: Removing unreachable block (ram,0x0001006dea84) */
/* WARNING: Removing unreachable block (ram,0x0001006dea70) */
/* WARNING: Removing unreachable block (ram,0x0001006dea24) */
/* WARNING: Removing unreachable block (ram,0x0001006dea88) */
/* WARNING: Removing unreachable block (ram,0x0001006dea54) */
/* WARNING: Removing unreachable block (ram,0x0001006deaa4) */
/* WARNING: Removing unreachable block (ram,0x0001006dea5c) */
/* WARNING: Removing unreachable block (ram,0x0001006dea14) */
/* WARNING: Removing unreachable block (ram,0x0001006dea04) */
/* WARNING: Removing unreachable block (ram,0x0001006dea98) */
/* WARNING: Removing unreachable block (ram,0x0001006deab8) */

void FUN_1006de874(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  func_0x000107c3db40();
  func_0x000107c61180();
  lVar2 = param_4;
  func_0x000107c40808();
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    puVar5 = puVar1;
    func_0x000107c40794(puVar1);
    func_0x000107c61174(puVar1);
    func_0x000107c61174(puVar3);
    func_0x000107c61174(param_7);
    func_0x000107c4f6fc(uVar4);
  }
  else {
    func_0x000107c4d9a4(param_4);
    func_0x000107c61180();
    func_0x000107c4d9a4(param_5);
    func_0x000107c61180();
    puVar3 = *(undefined **)(param_2 + 0x70);
    func_0x000107c4d9e8(puVar3);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    func_0x000107c4aa00(puVar3);
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c4aa44(puVar3);
    func_0x000107c61180();
    func_0x000107c4aa00(puVar3);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    func_0x000105509404(puVar5,(long)param_1);
    func_0x000107c61180();
    func_0x000107c3f88c(uVar4);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1006debf0; end: 1006decbb; -[SCGroupsStorage putGroups:completionHandler:] */

/* WARNING: Possible PIC construction at 0x0001006dec58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006dec8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006dec5c) */
/* WARNING: Removing unreachable block (ram,0x0001006dec78) */
/* WARNING: Removing unreachable block (ram,0x0001006dec88) */
/* WARNING: Removing unreachable block (ram,0x0001006dec90) */

void FUN_1006debf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c611ec(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c40794(param_3);
  FUN_1006decbc(uVar2,param_3);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006decbc; end: 1006ded2f;  */

void FUN_1006decbc(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  lVar1 = param_2;
  if ((param_1 == 0) || (lVar1 = param_1, param_2 == 0)) {
    func_0x000107c40794(lVar1);
  }
  else {
    func_0x000107c4d2d4();
    func_0x000107c3d66c();
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1006ded30; end: 1006deddf;  */

/* WARNING: Possible PIC construction at 0x0001006deda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006dedb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006deda4) */
/* WARNING: Removing unreachable block (ram,0x0001006dedb4) */

void FUN_1006ded30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c3dbc0(uVar1);
    func_0x000107c61180();
    func_0x000107c40794();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c3dbc0(uVar2);
    func_0x000107c61180();
    func_0x000107c40794();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1006dede0; end: 1006dedf7;  */

void FUN_1006dede0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006dedf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1006dedf8; end: 1006dee67;  */

void FUN_1006dedf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1006df68c;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar2);
  uStack_28 = uVar2;
  FUN_10007380c(uVar1,&puStack_48);
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 1006dee68; end: 1006df0cf; -[SCOurStoriesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006dee68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_105a2398c;
  puStack_90 = &UNK_110861c28;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar4;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_105a239cc;
  puStack_b8 = &UNK_1108ce468;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar4;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_105a23a0c;
  puStack_e0 = &UNK_1108ce498;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272da1c);
  puVar5 = PTR_PTR_1126c1458;
  func_0x000107c610f4(PTR_PTR_1126c1458);
  func_0x000107c47ccc();
  func_0x000107c42c20(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 1006df0d0; end: 1006df15f; -[_TtC20SCOurStoriesServices20SCOurStoriesServices initWithOurStoriesAttributionManager:ourStoriesOnboardingManager:ourStoriesDataCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006df0d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11302d2d8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302d2e0) = param_4;
  *(undefined8 *)(param_1 + _DAT_11302d2e8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1006df160; end: 1006df1bb;  */

void FUN_1006df160(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006df1bc; end: 1006df1c3;  */

void FUN_1006df1bc(undefined8 *param_1)

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



/* Entry: 1006df1c4; end: 1006df217;  */

void FUN_1006df1c4(undefined8 *param_1)

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



/* Entry: 1006df218; end: 1006df22b;  */

void FUN_1006df218(long *param_1)

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
  undefined8 uVar11;
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
  FUN_1002bfce4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126a99f0;
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
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar2);
  uVar10 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174();
  uVar10 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006df22c; end: 1006df68b;  */

void FUN_1006df22c(long *param_1,long param_2)

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
  undefined8 uVar10;
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
  FUN_1002bfce4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a99f0;
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
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar1);
  uVar9 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 1006df68c; end: 1006df697;  */

void FUN_1006df68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001006df694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1006df698; end: 1006df6c3;  */

void FUN_1006df698(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b4c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1006df6c4; end: 1006df737; -[SCGroupsDataFetcher _didLoadGroupsIntoMemory] */

void FUN_1006df6c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c41bdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006df738; end: 1006df7cf; -[SCGroupServicesEntryPoint _groupsDataTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006df738(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ba3c8;
  func_0x000107c610f4(PTR_PTR_1126ba3c8);
  lVar4 = (long)_DAT_1127250f4;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c3db44(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c3db7c(uVar3);
  func_0x000107c61180();
  func_0x000107c4566c(puVar1,param_2,uVar2,uVar3,*(undefined8 *)(param_1 + lVar4));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006df7d0; end: 1006df7d7; -[SCGroupsDataFetcher allGroupsObservable] */

void FUN_1006df7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_allGroupsObservable_11259da08);
  return;
}



/* Entry: 1006df7d8; end: 1006df7ff; -[SCGroupsStorage allGroupsObservable] */

void FUN_1006df7d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006df800; end: 1006df84f; -[SCGroupsDataFetcher allNonLockedGroupsObservable] */

void FUN_1006df800(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3db44(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1006df850; end: 1006df94f; -[SCGroupsDataTracker initWithAllGroupsObservable:nonLockedGroupsObservable:delegate:] */

undefined1 *
FUN_1006df850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e8cd8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ba378;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_5);
    puVar2 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006df950; end: 1006df96f; -[SCGroupsDataRequestListenerAnnouncer .cxx_construct] */

void FUN_1006df950(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1006df970; end: 1006df9e3; -[SCGroupsDataTracker didFinishLoadingGroups] */

void FUN_1006df970(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c41e00(*(undefined8 *)(param_1 + 8),param_2,3,
                      &PTR____CFConstantStringClassReference_110daafd8);
  puVar1 = PTR_PTR_1126ba380;
  func_0x000107c435a8(PTR_PTR_1126ba380);
  func_0x000107c61180();
  func_0x000107c41c08(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    func_0x000107c3fefc(*(undefined8 *)(param_1 + 0x28),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1006df9e4; end: 1006dfad7; -[SCGroupsDataRequestListenerAnnouncer didUpdateGroupsDataRequest:groupId:] */

/* WARNING: Possible PIC construction at 0x0001006dfa4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006dfa50) */

void FUN_1006df9e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_50;
  long *plStack_48;
  
  func_0x000107c61174(param_4);
  FUN_1006dfad8(&plStack_50,param_1 + 0x48);
  if ((plStack_50 == (long *)0x0) || (lVar4 = *plStack_50, lVar4 == plStack_50[1])) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x000107c60d68(plStack_48);
      }
    }
  }
  else {
    func_0x000107c61148(lVar4);
    func_0x000107c41e00();
    param_4 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1006dfad8; end: 1006dfb37;  */

void FUN_1006dfad8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  func_0x000107c60c40(param_2);
  func_0x000107c60dc4();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 1006dfb38; end: 1006dfb83; +[SCGroupsUpdateDataRequest finishLoading] */

void FUN_1006dfb38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ba380;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006dfb84; end: 1006dfbc7; -[SCGroupsUpdateDataRequest internalInit] */

void FUN_1006dfb84(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112706d80;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006dfbc8; end: 1006dfccf; -[SCGroupsDataRequestListenerAnnouncer didGroupsUpdateDataRequest:] */

/* WARNING: Possible PIC construction at 0x0001006dfc40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006dfc44) */

void FUN_1006dfbc8(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puStack_50;
  long *plStack_48;
  
  func_0x000107c61174(param_3);
  FUN_1006dfad8(&puStack_50,param_1 + 0x48);
  if ((puStack_50 == (ulong *)0x0) || (uVar4 = *puStack_50, uVar4 == puStack_50[1])) {
    uVar4 = param_3;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x000107c60d68(plStack_48);
      }
    }
  }
  else {
    func_0x000107c61148();
    uVar5 = uVar4;
    func_0x000107c61164();
    if ((uVar5 & 1) != 0) {
      func_0x000107c41c08(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1006dfcd0; end: 1006dfd0b; -[SCGroupsUpdateDataRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001006dfce8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006dfcec) */

void FUN_1006dfcd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1006dfd0c; end: 1006dfdef; -[SCStoryDraftingServiceProvider provide] */

void FUN_1006dfd0c(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126c14b0;
  func_0x000107c610f4(PTR_PTR_1126c14b0);
  func_0x000107c48a70();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006dfdf0; end: 1006dfe47; -[_TtC23SCStoryDraftingServices23SCStoryDraftingServices initWithStoryDraftingDataCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006dfdf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112fe68f0) = param_3;
  lVar2 = param_1;
  FUN_1002bfd70();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1006dfe48; end: 1006dfe9b;  */

void FUN_1006dfe48(void)

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



/* Entry: 1006dfe9c; end: 1006dfea3;  */

void FUN_1006dfe9c(undefined8 *param_1)

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



/* Entry: 1006dfea4; end: 1006dfef7;  */

void FUN_1006dfea4(undefined8 *param_1)

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



/* Entry: 1006dfef8; end: 1006dfeff;  */

void FUN_1006dfef8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1002a440c();
  func_0x000107c613fc();
  FUN_1006dff74(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006dff00; end: 1006dff73;  */

void FUN_1006dff00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1002a440c();
  func_0x000107c613fc();
  FUN_1006dff74(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1006dff74; end: 1006e00d7;  */

void FUN_1006dff74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a9920;
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
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
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



/* Entry: 1006e00d8; end: 1006e01bb; -[SCSpotlightRepliesViewCountManagerServiceProvider provide] */

void FUN_1006e00d8(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126c0fc8;
  func_0x000107c610f4(PTR_PTR_1126c0fc8);
  func_0x000107c48310();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006e01bc; end: 1006e0213; -[_TtC42SCSpotlightRepliesViewCountManagerServices42SCSpotlightRepliesViewCountManagerServices initWithRepliesViewCountManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e01bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff1e00) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1006e0214; end: 1006e023f;  */

void FUN_1006e0214(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006e0240; end: 1006e028f;  */

void FUN_1006e0240(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126d7ad8;
  func_0x000107c610f8();
  func_0x000107c48164();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1006e0290; end: 1006e0303; -[SCImpalaBusinessProfileManagerService initWithProfileManager:] */

undefined1 * FUN_1006e0290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fdb18;
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



/* Entry: 1006e0304; end: 1006e0557;  */

int FUN_1006e0304(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = 0;
  lVar3 = 6;
  do {
    if (lVar3 == 10) {
      return iVar2;
    }
    iVar1 = *(int *)(*param_1 + lVar3 * 4);
    iVar2 = iVar2 + iVar1 * ((int)lVar3 + -5);
    lVar3 = lVar3 + 1;
  } while (-1 < iVar1);
  return 0;
}



/* Entry: 1006e0558; end: 1006e0e97; -[SCLegacyStoriesServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e0558(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_288 [8];
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined1 auStack_250 [8];
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  lVar1 = param_1 + _DAT_11275429c;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127542a0;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c5bf44();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar4 = PTR_PTR_1126ae720;
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_100811e58;
  puStack_90 = &UNK_110861c28;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_d0 = puVar14;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_10696c478;
  puStack_b8 = &UNK_11094dac0;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_100 = puVar14;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_100c83dc8;
  puStack_e8 = &UNK_11094daf0;
  func_0x000107c6111c(auStack_d8,auStack_80);
  puStack_e0 = puVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_140 = puVar14;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_10081c304;
  puStack_128 = &UNK_11094db20;
  func_0x000107c6111c(auStack_108,auStack_80);
  puStack_120 = puVar4;
  puStack_118 = puVar5;
  puStack_110 = puVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_178 = puVar14;
  uStack_170 = 0xc2000000;
  puStack_168 = &UNK_10696c4b8;
  puStack_160 = &UNK_11094db50;
  func_0x000107c6111c(auStack_148,auStack_80);
  puStack_158 = puVar4;
  puStack_150 = puVar7;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_1b0 = puVar14;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_100811de4;
  puStack_198 = &UNK_11094db80;
  func_0x000107c6111c(auStack_180,auStack_80);
  puStack_190 = puVar4;
  puStack_188 = puVar7;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  puStack_1e0 = puVar14;
  uStack_1d8 = 0xc2000000;
  puStack_1d0 = &UNK_10696c52c;
  puStack_1c8 = &UNK_11094dbb0;
  func_0x000107c6111c(auStack_1b8,auStack_80);
  func_0x000107c61174(puVar8);
  puStack_1c0 = puVar8;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  puStack_218 = puVar14;
  uStack_210 = 0xc2000000;
  puStack_208 = &UNK_10696c574;
  puStack_200 = &UNK_11094dbe0;
  func_0x000107c6111c(auStack_1e8,auStack_80);
  func_0x000107c61174(puVar9);
  puStack_1f8 = puVar9;
  puStack_1f0 = puVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_248 = puVar14;
  uStack_240 = 0xc2000000;
  puStack_238 = &UNK_10696c5bc;
  puStack_230 = &UNK_11094dc10;
  func_0x000107c6111c(auStack_220,auStack_80);
  func_0x000107c61174(puVar9);
  puStack_228 = puVar9;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  puStack_280 = puVar14;
  uStack_278 = 0xc2000000;
  puStack_270 = &UNK_10696c604;
  puStack_268 = &UNK_11094dc40;
  func_0x000107c6111c(auStack_250,auStack_80);
  func_0x000107c61174(puVar9);
  puStack_260 = puVar9;
  lStack_258 = lVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126cf458;
  func_0x000107c61160();
  uVar23 = *(undefined8 *)(param_1 + _DAT_1127542a4);
  *(undefined **)(param_1 + _DAT_1127542a4) = puVar14;
  func_0x000107c61170(uVar23);
  uVar23 = *(undefined8 *)(param_1 + _DAT_1127542a8);
  puVar14 = PTR_PTR_1126cf460;
  func_0x000107c610f4();
  func_0x000107c47888();
  func_0x000107c42c20(uVar23);
  func_0x000107c61170(puVar14);
  uVar23 = *(undefined8 *)(param_1 + _DAT_1127542ac);
  puVar14 = PTR_PTR_1126cafe0;
  func_0x000107c610f4();
  func_0x000107c48a30();
  func_0x000107c42c20(uVar23);
  func_0x000107c61170(puVar14);
  lVar24 = (long)_DAT_1127542b0;
  lVar1 = param_1 + lVar24;
  func_0x000107c61148();
  lVar15 = lVar1;
  func_0x000107c443e4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar24 = param_1 + lVar24;
  func_0x000107c61148();
  lVar16 = lVar24;
  func_0x000107c443e0();
  func_0x000107c61180();
  func_0x000107c61170(lVar24);
  lVar1 = param_1 + _DAT_1127542b4;
  func_0x000107c61148();
  lVar17 = lVar1;
  func_0x000107c4ac40();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127542b8;
  func_0x000107c61148();
  lVar18 = lVar1;
  func_0x000107c5b46c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127542bc;
  func_0x000107c61148();
  lVar19 = lVar1;
  func_0x000107c4ac90();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar14 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_288,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar20 = PTR_PTR_1126cf468;
  func_0x000107c610f4();
  lVar1 = param_1 + _DAT_1127542c0;
  func_0x000107c61148();
  lVar21 = lVar1;
  func_0x000107c5bf3c();
  func_0x000107c61180();
  lVar24 = param_1 + _DAT_1127542c4;
  func_0x000107c61148();
  lVar22 = lVar24;
  func_0x000107c5bcac();
  func_0x000107c61180();
  func_0x000107c48a5c();
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_11275435c;
  func_0x000107c61148();
  lVar21 = lVar1;
  func_0x000107c3dec0();
  func_0x000107c61180();
  lVar22 = lVar21;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar24 = lVar22;
  func_0x000107c40938();
  func_0x000107c61180();
  lVar25 = (long)_DAT_1127542c8;
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  *(long *)(param_1 + lVar25) = lVar24;
  func_0x000107c61170(uVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar1);
  func_0x000107c3e7d8(*(undefined8 *)(param_1 + lVar25));
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar14);
  func_0x000107c61120(auStack_288);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puStack_260);
  func_0x000107c61120(auStack_250);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puStack_228);
  func_0x000107c61120(auStack_220);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puStack_1f8);
  func_0x000107c61120(auStack_1e8);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puStack_1c0);
  func_0x000107c61120(auStack_1b8);
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_180);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_148);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_108);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 1006e0e98; end: 1006e0e9f; -[SCStoriesServices storiesDataCoordinator] */

undefined8 FUN_1006e0e98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006e0ea0; end: 1006e0f73; -[SCStoryMediaCache init] */

undefined1 * FUN_1006e0ea0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8c08;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ced20;
    func_0x000107c5bf60();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c3b4f8(puVar1);
    func_0x000107c61180();
    func_0x000107c540d8(*(undefined8 *)((long)puVar1 + 8));
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1006e0f74; end: 1006e0f7f; +[SCCache storiesMediaCache] */

void FUN_1006e0f74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd7810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cacheForName_defaultSizeMB__1125537a0,5,400)
  ;
  return;
}



/* Entry: 1006e0f80; end: 1006e1013; +[SCCache _cacheForName:defaultSizeMB:] */

void FUN_1006e0f80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)(param_3 * 8 + 0x1137f9c10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_1006e1014;
  puStack_40 = &UNK_110ad7730;
  uStack_38 = param_1;
  lStack_30 = param_3;
  uStack_28 = param_4;
  if (*plVar1 != -1) {
    FUN_10002a2fc(plVar1,&puStack_58);
  }
  uVar2 = *(undefined8 *)(param_3 * 8 + 0x1137f9c68);
  func_0x000107c61174(uVar2);
  func_0x000107c5dbe0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1006e1014; end: 1006e10d3;  */

/* WARNING: Possible PIC construction at 0x0001006e1064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006e10b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006e1068) */
/* WARNING: Removing unreachable block (ram,0x0001006e10b8) */

void FUN_1006e1014(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9940;
  func_0x000107c610f4(PTR_PTR_1126b9940);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3c944(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  func_0x000107c478c4(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1006e10d4; end: 1006e10f3; +[SCCache _stringForCacheName:] */

undefined * FUN_1006e10d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xb) {
    return (&PTR_PTR_110d609b0)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 1006e10f4; end: 1006e1197; -[SCCache initWithName:diskSizeLimitConfig:] */

undefined8
FUN_1006e10f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3448;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5a9bc(puVar1);
  func_0x000107c61180();
  func_0x000107c478e0(param_1,param_2,param_3,0,puVar1,param_4,0,1,0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1006e1198; end: 1006e12cb; +[SCCacheUtil prepareDiskCacheInstance:evictPolicy:] */

void FUN_1006e1198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  uVar2 = param_1;
  func_0x000107c508e8(param_1);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126e1418;
  func_0x000107c610f4(PTR_PTR_1126e1418);
  uVar4 = param_1;
  func_0x000107c41fe0(param_1);
  func_0x000107c61180();
  func_0x000107c41fdc(param_1);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126e1420;
  func_0x000107c5aa0c();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1133e0f78;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  func_0x000107c478f0(puVar3,param_2,param_3,&PTR____CFConstantStringClassReference_110f83498,uVar2,
                      uVar4,param_1,0,puVar5,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1006e12cc; end: 1006e1317; +[SCCacheUtil rootSCCachePath] */

void FUN_1006e12cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1000f73a0();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c168();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006e1318; end: 1006e13bf; -[SCCache validate] */

void FUN_1006e1318(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4e5e8(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 1006e13c0; end: 1006e1447; -[SCStoryMediaCache _didRemoveObjectFromDiskBlock] */

void FUN_1006e13c0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  func_0x000107c61144(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  puStack_40 = &UNK_1071e7d6c;
  puStack_38 = &UNK_110992968;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c61184(&puStack_50);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1006e1448; end: 1006e151f; -[SCCache setDidRemoveObjectFromDiskBlock:] */

void FUN_1006e1448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c4e5e8(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1006e1520; end: 1006e15cf; -[_TtC19SCMyStoriesServices19SCMyStoriesServices initWithMyStoriesDataCoordinator:playbackManagementDataProvider:storyMentionMessageSender:cachedSummaryInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e1520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff2c78) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff2c80) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ff2c88) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ff2c90) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 1006e15d0; end: 1006e16f3; -[SCLegacyStoriesServices initWithStories:legacyStoryMediaCache:storiesSyncNetworkRequester:cachedSummaryInfoProvider:galleryStorySaver:ourStoryProfileDataSource:] */

undefined1 *
FUN_1006e15d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  func_0x000107c61174(param_8);
  puStack_48 = PTR_PTR_1126ff428;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006e16f4; end: 1006e16fb; -[SCStoriesMetricServices ghostToMyStoriesMetricsEmitter] */

undefined8 FUN_1006e16f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006e16fc; end: 1006e1703; -[SCStoriesMetricServices ghostToFriendStoriesMetricsEmitter] */

undefined8 FUN_1006e16fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1006e1704; end: 1006e170b; -[SCDiscoverFeedDataServices lazyDiscoverFeedDataMutator] */

undefined8 FUN_1006e1704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006e170c; end: 1006e171b; -[_TtC28SCStoriesSnapchatterServices28SCStoriesSnapchatterServices snapchatterFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e170c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff1c20));
  return;
}



/* Entry: 1006e171c; end: 1006e1723; -[SCStoriesSnapReadReceiptService lazySnapReadReceiptCoordinator] */

undefined8 FUN_1006e171c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006e1724; end: 1006e19e7; -[SCStoriesAppUserLifecycleObserver initWithStoriesFetcher:storiesDataCoordinator:myStoriesDataCoordinator:discoverFeedDataMutator:legacyStoriesMediaCache:snapReadReceiptCoordinator:snapchatterFetcher:ghostToMyStoriesMetricsEmitter:ghostToFriendStoriesMetricsEmitter:storiesConfigProvider:performer:startupInfoService:] */

undefined8 *
FUN_1006e1724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_1126f3e68;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 8) = 1;
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006e19e8; end: 1006e1a13; -[SCStoriesAppUserLifecycleObserver onUserResumed:didLaunchWithDataUnavailable:] */

void FUN_1006e19e8(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  if (((param_4 & 1) == 0) && (param_3 != 0)) {
    func_0x000107c3b6f0();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 1006e1a14; end: 1006e1b77; -[SCStoriesAppUserLifecycleObserver _fetchStoriesOnColdStart] */

void FUN_1006e1a14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar3 = PTR_PTR_1126be840;
  puVar1 = PTR_PTR_1126aeec0;
  puVar4 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126be848;
  func_0x000107c432c4(PTR_PTR_1126be848);
  func_0x000107c61180();
  func_0x000107c5bf20(puVar3);
  func_0x000107c61180();
  func_0x000107c40418(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c5d9b8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e2d4(puVar1);
  func_0x000107c611b0();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 1006e1b78; end: 1006e1b87; +[SCAttributedStoriesSubtask fetchStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e1b78(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b100) = 5;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006e1b88; end: 1006e1bdf;  */

void FUN_1006e1b88(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + *param_3) = param_4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006e1be0; end: 1006e1c57; +[SCAttributedContentTask stories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e1be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b110) = 3;
  *(undefined8 *)(lVar2 + _DAT_11309b118) = param_3;
  *(undefined8 *)(lVar2 + _DAT_11309b120) = 0;
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



/* Entry: 1006e1c58; end: 1006e1fc7; +[SCAttributedTask content:] */

void FUN_1006e1c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x0001006e1c90();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006e1fc8; end: 1006e2313;  */

undefined1  [16] FUN_1006e1fc8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  
  uVar1 = param_1 & 0xff;
  uVar2 = param_1 >> 6 & 3;
  if (uVar2 == 0) {
    lVar4 = 0x112d38280;
    FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    *(undefined8 *)(lVar4 + 0x20) = 0x736569726f7453;
    *(undefined8 *)(lVar4 + 0x28) = 0xe700000000000000;
    if (uVar1 < 4) {
      if (uVar1 < 2) {
        uVar8 = 0xd000000000000013;
        if (uVar1 == 0) {
          pcVar10 = "warmupFriendStories";
        }
        else {
          pcVar10 = "warmupCustomStories";
        }
        uVar9 = (ulong)(pcVar10 + -0x20) | 0x8000000000000000;
      }
      else if (uVar1 == 2) {
        uVar8 = 0x615779636167656c;
        uVar9 = 0xec00000070756d72;
      }
      else {
        uVar9 = 0x800000010f2153e0;
        uVar8 = 0xd000000000000016;
      }
    }
    else if (uVar1 < 6) {
      if (uVar1 == 4) {
        uVar9 = 0x800000010f2153c0;
        uVar8 = 0xd00000000000001c;
      }
      else {
        uVar9 = 0xec00000073656972;
        uVar8 = 0x6f74536863746566;
      }
    }
    else if (uVar1 == 6) {
      uVar9 = 0x800000010f2153a0;
      uVar8 = 0xd000000000000010;
    }
    else if (uVar1 == 7) {
      uVar9 = 0xee00676e69676461;
      uVar8 = 0x42736569726f7473;
    }
    else {
      uVar9 = 0x800000010f215380;
      uVar8 = 0xd00000000000001a;
    }
    *(undefined8 *)(lVar4 + 0x30) = uVar8;
    *(ulong *)(lVar4 + 0x38) = uVar9;
  }
  else {
    if (uVar2 != 1) {
      uVar8 = 0x800000010f216750;
      uVar7 = 0xd000000000000011;
      if (uVar1 != 0x82) {
        uVar8 = 0xec00000070756e61;
        uVar7 = 0x656c4374736f6f42;
      }
      uVar5 = 0xef6e6f6974616369;
      uVar6 = 0x6669746f4e234644;
      if (uVar1 != 0x80) {
        uVar5 = 0x800000010f216770;
        uVar6 = 0xd000000000000017;
      }
      if (uVar1 < 0x82) {
        uVar7 = uVar6;
        uVar8 = uVar5;
      }
      goto LAB_1006e22f8;
    }
    lVar4 = 0x112d38280;
    FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(lVar4 + 0x28) = 0x800000010f216730;
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    bVar3 = (param_1 & 0x3f) != 1;
    uVar8 = 0xd000000000000012;
    if (bVar3) {
      uVar8 = 0x6163696669746f6e;
    }
    uVar7 = 0x800000010f2161a0;
    if (bVar3) {
      uVar7 = 0xec0000006e6f6974;
    }
    *(undefined8 *)(lVar4 + 0x30) = uVar8;
    *(undefined8 *)(lVar4 + 0x38) = uVar7;
  }
  uVar5 = 0x112d38270;
  FUN_1000285a8(0x112d38270,&UNK_10d905a20);
  uVar6 = uVar5;
  FUN_10011d734();
  uVar7 = 0x23;
  uVar8 = 0xe100000000000000;
  func_0x000107c5fa80(0x23,0xe100000000000000,uVar5,uVar6);
  func_0x000107c61574(lVar4);
LAB_1006e22f8:
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = uVar7;
  return auVar11;
}



/* Entry: 1006e2314; end: 1006e234b; -[SCAttributedContentTask .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001006e2330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006e2334) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e2314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309b118));
  return;
}



/* Entry: 1006e234c; end: 1006e2567;  */

void FUN_1006e234c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006e2568; end: 1006e261f;  */

void FUN_1006e2568(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_80 = PTR___sBoWV_11034d678 + 0x40;
  puStack_78 = PTR___sBOWV_11034d658 + 0x40;
  puStack_58 = &UNK_10daaa3a0;
  puStack_50 = &UNK_10daaa3b8;
  puStack_48 = &UNK_10daaa3b8;
  puStack_40 = &UNK_10daaa3d0;
  puStack_38 = &UNK_10daaa3d0;
  lVar1 = 0x13f;
  puStack_70 = puStack_78;
  puStack_68 = puStack_78;
  puStack_60 = puStack_78;
  FUN_1000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10daaa3e8;
    func_0x000107c61630(param_1,0x100,0xc,&puStack_80,param_1 + 0x50);
  }
  return;
}



/* Entry: 1006e2620; end: 1006e2663;  */

void FUN_1006e2620(void)

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



/* Entry: 1006e2664; end: 1006e26d7; -[SCCameraPreviewPresenterServices initWithPreviewPresenter:] */

undefined1 * FUN_1006e2664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fe2f0;
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



/* Entry: 1006e26d8; end: 1006e28af;  */

void FUN_1006e26d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006e28b0; end: 1006e28d7;  */

void FUN_1006e28b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1006e28d8; end: 1006e29bb;  */

void FUN_1006e28d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_110593e88;
  func_0x000107c613fc(&UNK_110593e88,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  puStack_40 = &UNK_102aba4e8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_102aba504;
  puStack_48 = &UNK_110593ea0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001005c7120(0);
  func_0x000107c610f8();
  FUN_1006e29f4(puVar1);
  return;
}



/* Entry: 1006e29bc; end: 1006e29df;  */

void FUN_1006e29bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006e29e0; end: 1006e29f3;  */

void FUN_1006e29e0(long param_1,long param_2)

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



/* Entry: 1006e29f4; end: 1006e2a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e29f4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113036078) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1006e2a40; end: 1006e2a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e2a40(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826e0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ef6f68;
    uVar6 = 0;
    FUN_1000285a8(0x112ef6f68);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1006e2aec;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1006e2aec:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ef6f68;
    FUN_1000285a8(0x112ef6f68,&UNK_10db911f0);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad180;
      func_0x000107c610f8();
      func_0x000107c473b4();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000048,0x800000010f128e50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e2bac);
  (*pcVar1)();
}



/* Entry: 1006e2a48; end: 1006e2bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e2a48(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826e0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ef6f68;
    uVar6 = 0;
    FUN_1000285a8(0x112ef6f68);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1006e2aec;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1006e2aec:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ef6f68;
    FUN_1000285a8(0x112ef6f68,&UNK_10db911f0);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad180;
      func_0x000107c610f8();
      func_0x000107c473b4();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000048,0x800000010f128e50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e2bac);
  (*pcVar1)();
}



/* Entry: 1006e2bac; end: 1006e2bb3;  */

void FUN_1006e2bac(undefined8 *param_1)

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



/* Entry: 1006e2bb4; end: 1006e2c07;  */

void FUN_1006e2bb4(undefined8 *param_1)

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


