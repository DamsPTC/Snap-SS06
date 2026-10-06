/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10075ce04; end: 10075ce57;  */

void FUN_10075ce04(undefined8 *param_1)

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



/* Entry: 10075ce58; end: 10075ce67;  */

void FUN_10075ce58(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
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
  FUN_10023f58c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_88;
  FUN_1000285a8(0x112dda5b0,&UNK_10d99ec08);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c6157c(uStack_90);
  FUN_10025a71c();
  puVar6 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar1 + 0x18) = puVar6;
  puVar6 = PTR_PTR_1126a7f90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar6);
  uVar8 = 0x65536b6165727473;
  func_0x000107c5fadc(0x65536b6165727473,0xee00736563697672);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar10 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efc3320);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
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
  func_0x000107c61574(uStack_90);
  *(undefined8 *)(lVar1 + 0x40) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10075ce68; end: 10075d27f;  */

void FUN_10075ce68(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  FUN_10023f58c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  FUN_1000285a8(0x112dda5b0,&UNK_10d99ec08);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c6157c(uStack_90);
  FUN_10025a71c();
  puVar5 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar5;
  puVar5 = PTR_PTR_1126a7f90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar7 = 0x65536b6165727473;
  func_0x000107c5fadc(0x65536b6165727473,0xee00736563697672);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efc3320);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_90);
  *(undefined8 *)(param_2 + 0x40) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10075d280; end: 10075d287;  */

void FUN_10075d280(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10075d288; end: 10075d2db;  */

void FUN_10075d288(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10075d2dc; end: 10075d2ef;  */

void FUN_10075d2dc(long *param_1)

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
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
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
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10023ea38();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174();
  uVar9 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar10 = PTR_PTR_1126a7fc8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2e2a0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar10);
  func_0x000107c61174();
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc3570);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(puVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(undefined **)(lVar2 + 0x50) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10075d7bc);
  (*pcVar1)();
}



/* Entry: 10075d2f0; end: 10075d7bb;  */

void FUN_10075d2f0(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  FUN_10023ea38();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  puVar2 = PTR_PTR_1126a7200;
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
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar9 = PTR_PTR_1126a7fc8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2e2a0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174();
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc3570);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(puVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined **)(param_2 + 0x50) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10075d7bc);
  (*pcVar1)();
}



/* Entry: 10075d7bc; end: 10075dd4f; -[SCStreakServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075d7bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar20 = param_1 + _DAT_112724ef4;
  func_0x000107c61148();
  lVar1 = lVar20;
  func_0x000107c4e604();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112724f0c;
    func_0x000107c61148();
  }
  lVar1 = lVar20;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar20);
  lVar20 = param_1 + _DAT_112724ef8;
  func_0x000107c61148();
  lVar1 = lVar20;
  func_0x000107c3fa08();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  lVar20 = param_1 + _DAT_112724efc;
  func_0x000107c61148();
  lVar4 = lVar20;
  func_0x000107c5cf7c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar20);
  puVar6 = PTR_PTR_1126ae720;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  puStack_a0 = &UNK_1055018a0;
  puStack_98 = &UNK_1108931e0;
  func_0x000107c61174(lVar2);
  lStack_90 = lVar2;
  func_0x000107c61174(lVar3);
  lStack_88 = lVar3;
  func_0x000107c61174(lVar5);
  lStack_80 = lVar5;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_d8 = puVar11;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_1055018d4;
  puStack_c0 = &UNK_110893210;
  func_0x000107c61174(lVar1);
  lStack_b8 = lVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_100 = puVar11;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_105501904;
  puStack_e8 = &UNK_110893240;
  func_0x000107c61174(puVar6);
  puStack_e0 = puVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_130 = puVar11;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_105501934;
  puStack_118 = &UNK_110893270;
  func_0x000107c61174(puVar6);
  puStack_110 = puVar6;
  func_0x000107c61174(lVar1);
  lStack_108 = lVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ba250;
  func_0x000107c610f4();
  func_0x000107c48adc();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112724f00));
  puVar11 = PTR_PTR_1126ba258;
  func_0x000107c610f4();
  lVar20 = param_1 + _DAT_112724f10;
  func_0x000107c61148(lVar20);
  lVar4 = lVar20;
  func_0x000107c43a84();
  func_0x000107c61180();
  lVar12 = param_1;
  FUN_10075df80(param_1);
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c5b4b4();
  func_0x000107c61180();
  lVar14 = param_1;
  FUN_10075df80(param_1);
  func_0x000107c61180();
  lVar15 = lVar14;
  func_0x000107c5b4bc();
  func_0x000107c61180();
  func_0x000107c49208();
  uVar19 = *(undefined8 *)(param_1 + _DAT_112724f04);
  *(undefined **)(param_1 + _DAT_112724f04) = puVar11;
  func_0x000107c61170(uVar19);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar20);
  func_0x000107c61144(auStack_138,param_1);
  puVar18 = PTR_PTR_1126aeec0;
  puVar11 = PTR_PTR_1126ae960;
  puVar16 = PTR_PTR_1126b2990;
  func_0x000107c5c110(PTR_PTR_1126b2990);
  func_0x000107c61180();
  func_0x000107c4074c(puVar11);
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126ae970;
  func_0x000107c44e60(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_140,auStack_138);
  func_0x000107c3e2d4();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)(param_1 + _DAT_112724f08);
  *(undefined **)(param_1 + _DAT_112724f08) = puVar18;
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar16);
  func_0x000107c61120(auStack_140);
  func_0x000107c61120(auStack_138);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lStack_108);
  func_0x000107c61170(puStack_110);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puStack_e0);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(lStack_90);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10075dd50; end: 10075dd83; -[_TtC44FriendsFeedNativeDataModelTranslatorServices44FriendsFeedNativeDataModelTranslatorServices translator] */

void FUN_10075dd50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10075dd84();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10075dd84; end: 10075ddf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10075dd84(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11301aeb8;
  lVar2 = *(long *)(unaff_x20 + _DAT_11301aeb8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_11301aeb0));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10075ddf8; end: 10075de17;  */

void FUN_10075ddf8(void)

{
  func_0x000107c61168(&PTR_PTR_1127e6748);
  return;
}



/* Entry: 10075de18; end: 10075de47;  */

void FUN_10075de18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10075ddf8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10075de48; end: 10075de83; -[_TtC50FriendsFeedNativeDataModelTranslatorImplementation36FriendsFeedNativeDataModelTranslator init] */

void FUN_10075de48(undefined8 param_1)

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



/* Entry: 10075de84; end: 10075df7f; -[SCStreakServices initWithStreakProvider:streakMilestoneProvider:valdiStreakProvider:streakMetadataProvider:] */

undefined1 *
FUN_10075de84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5c70;
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



/* Entry: 10075df80; end: 10075dfa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075df80(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112724f14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10075dfa4; end: 10075e16f; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver initWithUserId:friendsFeedEntryStore:snapchattersMutator:snapchattersDataTracker:performer:streakProvider:translator:] */

undefined1 *
FUN_10075dfa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126e8c50;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    func_0x000107c61170(uVar2);
    uVar2 = param_6;
    func_0x000107c5c734(param_6);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10075e170; end: 10075e177; +[SCAttributedConvoTask streaks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075e170(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b1f0) = 0xf;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10075e178; end: 10075e1c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075e178(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b1f0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10075e1c8; end: 10075e48f; +[SCAttributedTask convo:] */

void FUN_10075e1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010075e200();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10075e490; end: 10075e4e3;  */

void FUN_10075e490(void)

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



/* Entry: 10075e4e4; end: 10075e4eb;  */

void FUN_10075e4e4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10075e4ec; end: 10075e797; -[SCFriendmojiServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075e4ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
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
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_105508a18;
  puStack_90 = &UNK_110893820;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_105508ab0;
  puStack_b8 = &UNK_110893850;
  puVar2 = PTR_PTR_1126ae720;
  puStack_b0 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar5;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_105508ae0;
  puStack_e0 = &UNK_110893880;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae560;
  func_0x000107c61160();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c61174(puVar4);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112724f94);
  func_0x000107c61174(puVar4);
  func_0x000107c42c14(uVar7);
  puVar6 = PTR_PTR_1126ba2a8;
  func_0x000107c610f4(PTR_PTR_1126ba2a8);
  func_0x000107c46a54();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10075e798; end: 10075e893; -[SCFriendmojiServices initWithFriendmojiPresenter:friendmojiRegistry:friendmojiData:friendmojiDataProvider:] */

undefined1 *
FUN_10075e798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112705e38;
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



/* Entry: 10075e894; end: 10075e8df;  */

void FUN_10075e894(void)

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



/* Entry: 10075e8e0; end: 10075e903;  */

void FUN_10075e8e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  uVar1 = 0x112e5e838;
  FUN_100083b20(&uStack_48);
  FUN_1000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_48;
  FUN_10017da58(uStack_48,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10075e904; end: 10075ea6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075e904(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826e0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ef6f90;
    uVar5 = 0;
    FUN_1000285a8(0x112ef6f90);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_10075e9a8;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_10075e9a8:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ef6f90;
    FUN_1000285a8(0x112ef6f90,&UNK_10db25c60);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005c6d50(0);
      func_0x000107c610f8();
      FUN_10075eac8(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000049,0x800000010f142720);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10075ea6c);
  (*pcVar1)();
}



/* Entry: 10075ea6c; end: 10075ea73;  */

void FUN_10075ea6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10075ea74; end: 10075eac7;  */

void FUN_10075ea74(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10075eac8; end: 10075eb13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075eac8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130361a8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10075eb14; end: 10075eb1b; -[SCCameraUIScopedLensCTAHandlingServices lensCTAHandlingServices] */

undefined8 FUN_10075eb14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10075eb1c; end: 10075ebab;  */

void FUN_10075eb1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_100094780(0);
  func_0x000107c610f8();
  func_0x00010075eb60(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 10075ebac; end: 10075f93f; -[SCCameraCoreFeatureProviderPluginWorkflow initWithPrivateFeatureContainer:cameraUIScope:cameraSnapModelServices:cameraLensProvider:cameraUIServices:userSession:featureUpdateEventSubject:applicationLifecycleEvents:cameraConfigurationServices:systemConfigurationServices:cameraFeatureLoggingServices:cameraUserLoggingServices:deviceMotionManager:notificationManager:userStorageServices:cameraHardwareServices:cameraRequestHandlerServices:cameraViewfinderServices:objcMusicServices:musicServices:musicLoggingServices:activeVideoPaths:talkServices:previewCameraSourceOverlayService:valdiRuntimeProvider:groupsDataFetcher:userInfoProvider:preferences:legacyCameraTooltipsService:appTerminationProvider:featureSettingsService:circumstanceEngine:lensCarouselSettingsServices:lensUnlockServices:lensLoggerServices:lensPickerServices:musicPickerScopeExposer:musicEditorScopeExposer:percMLModelServices:grapheneServices:plusServices:customAppThemeProvider:musicRecommendationServices:addSoundPillScopeExposer:musicRecentsComposerServices:resourceDownloaderServices:friendmojiServices:cameraFeaturePerformanceFeatureScopedLoggerFactory:lensCarouselFeatureServices:plusSubcriberScopeExposer:contentDeliveryServices:lensProcessingLensModeServices:lensProcessingCarouselServices:lensProcessingServices:cameraDeviceSettingsResolverServices:nightModeServices:lensCTAHandlingServices:secretFeatureCheckingServices:cameraMLServices:miniCameraActivationStateServices:appStartExperimentReader:currentPageTracker:customVolumeServices:audioServices:snapEditorTweakServices:cameraPreviewPresenterServices:cameraModeActivationServices:userDataFeedServices:quickReplyHandsFreeBridge:snapReplyCameraFeatureFactory:creativeToolsABServices:] */

undefined8 *
FUN_10075ebac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  func_0x000107c61174(param_49);
  func_0x000107c61174(param_50);
  func_0x000107c61174(param_51);
  func_0x000107c61174(param_52);
  func_0x000107c61174(param_53);
  func_0x000107c61174(param_54);
  func_0x000107c61174(param_55);
  func_0x000107c61174(param_56);
  func_0x000107c61174(param_57);
  func_0x000107c61174(param_58);
  func_0x000107c61174(param_59);
  func_0x000107c61174(param_60);
  func_0x000107c61174(param_61);
  func_0x000107c61174(param_62);
  func_0x000107c61174(param_63);
  func_0x000107c61174(param_64);
  func_0x000107c61174(param_65);
  func_0x000107c61174(param_66);
  func_0x000107c61174(param_67);
  func_0x000107c61174(param_68);
  func_0x000107c61174(param_69);
  func_0x000107c61174(param_70);
  func_0x000107c61174(in_stack_000001f0);
  func_0x000107c61174(in_stack_000001f8);
  func_0x000107c61174(in_stack_00000200);
  puStack_70 = PTR_PTR_1126ef878;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 0x44,param_3);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[1];
    puVar1[1] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_32;
    func_0x000107c61170(uVar2);
    uVar2 = param_11;
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c5bca0();
    func_0x000107c61180();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[7];
    puVar1[7] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[8];
    puVar1[8] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[9];
    puVar1[9] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_50);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_50;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_29);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_29;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_26;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_33);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_33;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_34);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_34;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_36);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_36;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_35);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_35;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_39);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_39;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_40);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_40;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_37);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_37;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_38);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_38;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_56);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_56;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_41);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_41;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_42);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_42;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_43);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_43;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_44);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_44;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_45);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_45;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_46);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_46;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_47);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_47;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_48);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_48;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_49);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_49;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_51);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_51;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_53);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_53;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_54);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_54;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_55);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_55;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_52);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_52;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_57);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_57;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_58);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_58;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_59);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_59;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_60);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_60;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_61);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_61;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_62);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_62;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_63);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_63;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_64);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_64;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_65);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_65;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_66);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_66;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_67);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_67;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_68);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_68;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_69);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_69;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_70);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_70;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_000001f0);
    uVar2 = puVar1[0x56];
    puVar1[0x56] = in_stack_000001f0;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_000001f8);
    uVar2 = puVar1[0x57];
    puVar1[0x57] = in_stack_000001f8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000200);
    uVar2 = puVar1[0x58];
    puVar1[0x58] = in_stack_00000200;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(in_stack_00000200);
  func_0x000107c61170(in_stack_000001f8);
  func_0x000107c61170(in_stack_000001f0);
  func_0x000107c61170(param_70);
  func_0x000107c61170(param_69);
  func_0x000107c61170(param_68);
  func_0x000107c61170(param_67);
  func_0x000107c61170(param_66);
  func_0x000107c61170(param_65);
  func_0x000107c61170(param_64);
  func_0x000107c61170(param_63);
  func_0x000107c61170(param_62);
  func_0x000107c61170(param_61);
  func_0x000107c61170(param_60);
  func_0x000107c61170(param_59);
  func_0x000107c61170(param_58);
  func_0x000107c61170(param_57);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
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



/* Entry: 10075f940; end: 10075fb8b;  */

void FUN_10075f940(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10075fb8c; end: 100760857;  */

void FUN_10075fb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ee27c0,&UNK_10db0d490);
  puVar1 = &UNK_110588110;
  func_0x000107c613fc(&UNK_110588110,0x170,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_40;
  *(undefined8 *)(puVar1 + 0x138) = param_41;
  *(undefined8 *)(puVar1 + 0x140) = param_42;
  *(undefined8 *)(puVar1 + 0x148) = param_43;
  *(undefined8 *)(puVar1 + 0x150) = param_38;
  *(undefined8 *)(puVar1 + 0x158) = param_39;
  *(undefined8 *)(puVar1 + 0x160) = param_37;
  *(undefined8 *)(puVar1 + 0x168) = param_44;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_44);
  FUN_1000823a8(0x10075ff1c,puVar1);
  return;
}



/* Entry: 100760858; end: 10076085f;  */

void FUN_100760858(undefined8 *param_1)

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



/* Entry: 100760860; end: 1007608b3;  */

void FUN_100760860(undefined8 *param_1)

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



/* Entry: 1007608b4; end: 1007608bb;  */

void FUN_1007608b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1002a62e4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100760944(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007608bc; end: 100760943;  */

void FUN_1007608bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1002a62e4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100760944(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100760944; end: 100760afb;  */

void FUN_100760944(undefined8 param_1,undefined8 param_2)

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
  puVar2 = PTR_PTR_1126a96f0;
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
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar6 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f017700);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100760afc);
  (*pcVar1)();
}



/* Entry: 100760afc; end: 100760c07; -[SCUserPreferenceTimeProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100760afc(long param_1)

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
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272c238);
  *(undefined **)(param_1 + _DAT_11272c238) = puVar1;
  func_0x000107c61170(uVar2);
  puVar1 = PTR_PTR_1126c0208;
  func_0x000107c610f4(PTR_PTR_1126c0208);
  func_0x000107c492d0();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272c23c));
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100760c08; end: 100760c7b; -[SCUserPreferenceTimeProviderServices initWithUserPreferenceTimeProvider:] */

undefined1 * FUN_100760c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126faec0;
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



/* Entry: 100760c7c; end: 100760ca7;  */

void FUN_100760c7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100760ca8; end: 100760d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100760ca8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1005c5df4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eef9b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100760d10; end: 100760d23;  */

/* WARNING: Possible PIC construction at 0x000100760de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100760df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100760e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100760df4) */
/* WARNING: Removing unreachable block (ram,0x000100760de4) */
/* WARNING: Removing unreachable block (ram,0x000100760e04) */

void FUN_100760d10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_110586570;
  func_0x000107c613fc(&UNK_110586570,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  uVar7 = 0x112edb4f0;
  FUN_1000285a8(0x112edb4f0,&UNK_10db094d0);
  func_0x000107c613fc();
  puVar8 = &UNK_102a07c18;
  FUN_1000841f8(&UNK_102a07c18,puVar6,uVar7);
  FUN_100084214(&UNK_10db094a0,0x2c,2);
  *param_1 = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100760d24; end: 100760e2b;  */

/* WARNING: Possible PIC construction at 0x000100760de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100760df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100760e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100760df4) */
/* WARNING: Removing unreachable block (ram,0x000100760de4) */
/* WARNING: Removing unreachable block (ram,0x000100760e04) */

void FUN_100760d24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110586570;
  func_0x000107c613fc(&UNK_110586570,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  uVar2 = 0x112edb4f0;
  FUN_1000285a8(0x112edb4f0,&UNK_10db094d0);
  func_0x000107c613fc();
  puVar3 = &UNK_102a07c18;
  FUN_1000841f8(&UNK_102a07c18,puVar1,uVar2);
  FUN_100084214(&UNK_10db094a0,0x2c,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100760e2c; end: 100760e33;  */

void FUN_100760e2c(void)

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



/* Entry: 100760e34; end: 100760e87;  */

void FUN_100760e34(void)

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



/* Entry: 100760e88; end: 100760e8f;  */

void FUN_100760e88(undefined8 *param_1)

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



/* Entry: 100760e90; end: 100760ee3;  */

void FUN_100760e90(undefined8 *param_1)

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



/* Entry: 100760ee4; end: 100760eeb;  */

void FUN_100760ee4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1001f491c();
  func_0x000107c613fc();
  FUN_100760f60(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100760eec; end: 100760f5f;  */

void FUN_100760eec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1001f491c();
  func_0x000107c613fc();
  FUN_100760f60(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100760f60; end: 1007610c3;  */

void FUN_100760f60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8568;
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



/* Entry: 1007610c4; end: 1007611a7; -[SCMemoriesUserDefaultsServiceProvider provide] */

void FUN_1007610c4(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bc880;
  func_0x000107c610f4(PTR_PTR_1126bc880);
  func_0x000107c47770();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007611a8; end: 1007611ff; -[_TtC30SCMemoriesUserDefaultsServices30SCMemoriesUserDefaultsServices initWithMemoriesUserDefaultsManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007611a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_11303ea38) = param_3;
  lVar2 = param_1;
  FUN_1001f49a8();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100761200; end: 10076122b;  */

void FUN_100761200(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10076122c; end: 100761233;  */

void FUN_10076122c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_11058b380;
  func_0x000107c613fc(&UNK_11058b380,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  FUN_1000285a8(0x112ee4050,&UNK_10db0f100);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  puVar3 = &UNK_102a3e5a4;
  FUN_1000bdd8c(&UNK_102a3e5a4,puVar2);
  uVar4 = 0;
  FUN_1005c7060(0);
  func_0x000107c610f8();
  FUN_1007612f4(puVar3,uVar4);
  *param_1 = puVar3;
  return;
}



/* Entry: 100761234; end: 1007612ef;  */

void FUN_100761234(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11058b380;
  func_0x000107c613fc(&UNK_11058b380,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  FUN_1000285a8(0x112ee4050,&UNK_10db0f100);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  puVar2 = &UNK_102a3e5a4;
  FUN_1000bdd8c(&UNK_102a3e5a4,puVar1);
  uVar3 = 0;
  FUN_1005c7060(0);
  func_0x000107c610f8();
  FUN_1007612f4(puVar2,uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 1007612f0; end: 1007612f3;  */

void FUN_1007612f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007612f4; end: 100761377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1007612f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f5cda8) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112f5cdb0) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 100761378; end: 10076137b;  */

void FUN_100761378(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10076137c; end: 1007613a7;  */

void FUN_10076137c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007613a8; end: 100761c87; -[SCCameraCaptureFeatureProviderPluginWorkflow initWithPrivateFeatureContainer:cameraUIScope:cameraSnapModelServices:userPreferenceTimeProviderServices:cameraUIServices:userSession:cameraSnapCreationLogger:featureUpdateEventSubject:applicationLifecycleEvents:cameraConfigurationServices:systemConfigurationServices:cameraFeatureLoggingServices:cameraUserLoggingServices:audioSession:notificationManager:userStorageServices:cameraHardwareServices:cameraRequestHandlerServices:cameraViewfinderServices:activeVideoPaths:talkServices:userInfoProvider:preferences:appTerminationProvider:featureSettingsService:circumstanceEngine:cameraPreviewPresenterServices:percMLModelServices:grapheneServices:resourceDownloaderServices:cameraFeaturePerformanceFeatureScopedLoggerFactory:cameraDeviceSettingsResolverServices:currentPageTracker:secretFeatureCheckingServices:previewABServices:customVolumeServices:valdiRuntimeProvider:lensCarouselFeatureServices:appStartExperimentReader:cameraModeActivationServices:snapEditorTweakServices:captureServiceScopeBuilderServices:memoriesExperimentService:memoriesUserDefaultsManager:lensCarouselOnCameraScopeDataProvider:lensPlusSnapDocRecordProvider:] */

undefined8 *
FUN_1007613a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  puStack_70 = PTR_PTR_1126ef870;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 0x3f,param_3);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_29);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_29;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[2];
    puVar1[2] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_26;
    func_0x000107c61170(uVar2);
    uVar2 = param_12;
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_13;
    func_0x000107c5bca0();
    func_0x000107c61180();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[1];
    puVar1[1] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_33);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_33;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_34);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_34;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_35);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_35;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_36);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_36;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_37);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_37;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_38);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_38;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_39);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_39;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_40);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_40;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_41);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_41;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_42);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_42;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_43);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_43;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_44);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_44;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_45);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_45;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_46);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_46;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_47);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_47;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_48);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_48;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
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



/* Entry: 100761c88; end: 100761e03;  */

void FUN_100761c88(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100761e04; end: 100762a47;  */

void FUN_100761e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ee27c0,&UNK_10db0d490);
  puVar1 = &UNK_11058afa0;
  func_0x000107c613fc(&UNK_11058afa0,0x150,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_10;
  *(undefined8 *)(puVar1 + 0x48) = param_15;
  *(undefined8 *)(puVar1 + 0x50) = param_16;
  *(undefined8 *)(puVar1 + 0x58) = param_17;
  *(undefined8 *)(puVar1 + 0x60) = param_18;
  *(undefined8 *)(puVar1 + 0x68) = param_11;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_12;
  *(undefined8 *)(puVar1 + 0x80) = param_13;
  *(undefined8 *)(puVar1 + 0x88) = param_9;
  *(undefined8 *)(puVar1 + 0x90) = param_20;
  *(undefined8 *)(puVar1 + 0x98) = param_8;
  *(undefined8 *)(puVar1 + 0xa0) = param_21;
  *(undefined8 *)(puVar1 + 0xa8) = param_26;
  *(undefined8 *)(puVar1 + 0xb0) = param_27;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_28;
  *(undefined8 *)(puVar1 + 0xd8) = param_19;
  *(undefined8 *)(puVar1 + 0xe0) = param_29;
  *(undefined8 *)(puVar1 + 0xe8) = param_30;
  *(undefined8 *)(puVar1 + 0xf0) = param_31;
  *(undefined8 *)(puVar1 + 0xf8) = param_32;
  *(undefined8 *)(puVar1 + 0x100) = param_5;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_40;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  *(undefined8 *)(puVar1 + 0x148) = param_25;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_25);
  FUN_1000823a8(0x100762130,puVar1);
  return;
}



/* Entry: 100762a48; end: 100762a4f;  */

void FUN_100762a48(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100762a50; end: 100762aa3;  */

void FUN_100762a50(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100762aa4; end: 100762aab;  */

void FUN_100762aa4(undefined8 *param_1)

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



/* Entry: 100762aac; end: 100762aff;  */

void FUN_100762aac(undefined8 *param_1)

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



/* Entry: 100762b00; end: 100762b0f;  */

/* WARNING: Possible PIC construction at 0x000100762bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100762bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100762bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100762be0) */
/* WARNING: Removing unreachable block (ram,0x000100762bcc) */
/* WARNING: Removing unreachable block (ram,0x000100762bf8) */

void FUN_100762b00(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(auStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100287d6c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  *(undefined8 *)(lVar1 + 0x38) = uStack_80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uStack_80);
  return;
}



/* Entry: 100762b10; end: 100762c3b;  */

/* WARNING: Possible PIC construction at 0x000100762bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100762bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100762bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100762be0) */
/* WARNING: Removing unreachable block (ram,0x000100762bcc) */
/* WARNING: Removing unreachable block (ram,0x000100762bf8) */

void FUN_100762b10(long param_1)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  FUN_100083b20(auStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100287d6c();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = uStack_60;
  *(undefined8 *)(param_1 + 0x20) = uStack_68;
  *(undefined8 *)(param_1 + 0x28) = uStack_70;
  *(undefined8 *)(param_1 + 0x30) = uStack_78;
  *(undefined8 *)(param_1 + 0x38) = uStack_80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uStack_80);
  return;
}



/* Entry: 100762c3c; end: 100762c43;  */

void FUN_100762c3c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 100762c44; end: 100762f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_100762c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  uVar2 = param_4;
  func_0x000107c4b100();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = param_5;
  func_0x000107c4b274();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_100763184();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e1c178) = uVar2;
  plVar6 = &lStack_80;
  lStack_80 = lVar5;
  lStack_78 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  lVar7 = 0;
  func_0x0001007631a4();
  lVar4 = lVar7;
  func_0x000107c610f8();
  lVar5 = _DAT_112e1c130;
  FUN_10006a340(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  plVar8 = plVar6;
  FUN_10006a360();
  *(long **)(lVar4 + lVar5) = plVar8;
  *(undefined **)(lVar4 + _DAT_112e1c138) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(long **)(lVar4 + _DAT_112e1c140) = plVar6;
  plVar8 = &lStack_90;
  lStack_90 = lVar4;
  lStack_88 = lVar7;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar10 = &UNK_11046fb00;
  func_0x000107c613fc(&UNK_11046fb00,0x18,7);
  *(long **)(puVar10 + 0x10) = plVar8;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = &UNK_101cef954;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_101cefd18;
  puStack_a8 = &UNK_11046fb18;
  ppuVar11 = &puStack_c0;
  puStack_98 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar10 = puStack_98;
  func_0x000107c61174();
  func_0x000107c61574(puVar10);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar10 = &UNK_11046fb50;
  func_0x000107c613fc(&UNK_11046fb50,0x38,7);
  *(undefined8 *)(puVar10 + 0x10) = param_6;
  *(undefined8 *)(puVar10 + 0x18) = param_2;
  *(long **)(puVar10 + 0x20) = plVar8;
  *(undefined8 *)(puVar10 + 0x28) = param_3;
  *(undefined8 *)(puVar10 + 0x30) = uVar3;
  puStack_a0 = &UNK_101cefcb0;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_101cefd1c;
  puStack_a8 = &UNK_11046fb68;
  ppuVar11 = &puStack_c0;
  puStack_98 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar10 = puStack_98;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(uVar3);
  func_0x000107c61174(plVar8);
  func_0x000107c61574(puVar10);
  func_0x000107c3e4fc(puVar12);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  puVar10 = PTR_PTR_1126a9168;
  func_0x000107c610f8(PTR_PTR_1126a9168);
  func_0x000107c47208();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(plVar6);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar9);
  return puVar10;
}



/* Entry: 100762f7c; end: 100762fe3;  */

void FUN_100762f7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100762fe4; end: 100762feb; -[SCLensExplorerStudySettingsServices lensExplorerStudySettings] */

undefined8 FUN_100762fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100762fec; end: 10076302b;  */

void FUN_100762fec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c950();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10076302c; end: 10076310f; -[SCLensExplorerStudySettingsServiceProvider _studySettings] */

void FUN_10076302c(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bbb60;
  func_0x000107c610f4(PTR_PTR_1126bbb60);
  func_0x000107c45db0();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100763110; end: 100763183; -[SCLensExplorerExperiments initWithCircumstanceEngine:] */

undefined1 * FUN_100763110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f99a8;
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



/* Entry: 100763184; end: 1007631c3;  */

void FUN_100763184(void)

{
  func_0x000107c61168(&PTR_PTR_112801678);
  return;
}



/* Entry: 1007631c4; end: 1007631db;  */

void FUN_1007631c4(long param_1,long param_2)

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



/* Entry: 1007631dc; end: 10076327f; -[SCLensCollectionsServices initWithLensCollectionDataProvider:lensCollectionMetadataMapper:] */

undefined1 *
FUN_1007631dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702cd8;
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



/* Entry: 100763280; end: 1007632cb;  */

void FUN_100763280(void)

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



/* Entry: 1007632cc; end: 1007632db; -[SCCircumstanceEngineServices ipInferredCountryCodeProvider] */

undefined8 FUN_1007632cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1007632dc; end: 10076332f;  */

void FUN_1007632dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100763330; end: 100763343;  */

void FUN_100763330(long *param_1)

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
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
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
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10022f9f8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a7e20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar3);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar3);
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc1350);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc1370);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar12);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(lVar2 + 0x50) = lVar13;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100763828);
  (*pcVar1)();
}



/* Entry: 100763344; end: 100763827;  */

void FUN_100763344(long *param_1,long param_2)

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
  FUN_10022f9f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  puVar2 = PTR_PTR_1126a7200;
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
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7e20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
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
  func_0x000107c61174(puVar2);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc1350);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc1370);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(long *)(param_2 + 0x50) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100763828);
  (*pcVar1)();
}



/* Entry: 100763828; end: 10076382f;  */

void FUN_100763828(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100763830; end: 100763883;  */

void FUN_100763830(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100763884; end: 10076388f;  */

void FUN_100763884(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001f8418();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100763940(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100763890; end: 10076393f;  */

void FUN_100763890(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001f8418();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100763940(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100763940; end: 100763b6f;  */

void FUN_100763940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7bd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbb450);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef32c60);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efbb470);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100763b70);
  (*pcVar1)();
}



/* Entry: 100763b70; end: 100763c83; -[SCUserInfoDeltaFetchEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100763b70(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e504();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112722e94);
  *(undefined **)(param_1 + _DAT_112722e94) = puVar1;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112722e98);
  puVar1 = PTR_PTR_1126b88b0;
  func_0x000107c610f4(PTR_PTR_1126b88b0);
  func_0x000107c49294();
  func_0x000107c42c20(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100763c84; end: 100763cf7; -[SCUserInfoFetcherServices initWithUserInfoFetcher:] */

undefined1 * FUN_100763c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f5fa8;
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



/* Entry: 100763cf8; end: 100763d2b;  */

void FUN_100763cf8(void)

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



/* Entry: 100763d2c; end: 100763ea7; -[SCBitmojiUserServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100763d2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1054a821c;
  puStack_68 = &UNK_11088ec28;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b9780;
  func_0x000107c610f4(PTR_PTR_1126b9780);
  func_0x000107c492a8();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112724034));
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 100763ea8; end: 100763eef;  */

void FUN_100763ea8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3cd6c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c3e790(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100763ef0; end: 1007640f7; -[SCUserInfoDeltaFetchEntryPoint _userInfoFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100763ef0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b88b8;
  func_0x000107c610f4();
  lVar13 = (long)_DAT_112722e9c;
  lVar2 = param_1 + lVar13;
  func_0x000107c61148();
  lStack_88 = lVar2;
  func_0x000107c5da60();
  func_0x000107c61180();
  lStack_90 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar13 = param_1 + lVar13;
  func_0x000107c61148();
  lStack_98 = lVar13;
  func_0x000107c5da68();
  func_0x000107c61180();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dd6018;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dd5ff8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dd6018;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_112722ea0;
  func_0x000107c61148();
  lVar6 = lVar5;
  func_0x000107c5d700();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112722ea4;
  func_0x000107c61148();
  lVar7 = param_1;
  func_0x000107c5b6b8();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar11 = lVar2;
  lVar12 = lVar13;
  func_0x000107c49268();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lStack_98);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lStack_90);
  lVar2 = lStack_88;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  func_0x000107c60e78();
  plVar9 = &lStack_e0;
  pcStack_a8 = FUN_1007640f8;
  puStack_d0 = puVar1;
  lStack_c8 = lVar8;
  lStack_c0 = lVar7;
  lStack_b8 = lVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(lVar11);
  func_0x000107c61174(lVar12);
  puStack_d8 = PTR_PTR_1126fea00;
  lStack_e0 = lVar2;
  func_0x000107c61154(&lStack_e0,PTR_s_init_1125d9248);
  if (plVar9 != (long *)0x0) {
    func_0x000107c61174(lVar11);
    uVar10 = *(undefined8 *)((long)plVar9 + 8);
    *(long *)((long)plVar9 + 8) = lVar11;
    func_0x000107c61170(uVar10);
    func_0x000107c61174(lVar12);
    uVar10 = *(undefined8 *)((long)plVar9 + 0x10);
    *(long *)((long)plVar9 + 0x10) = lVar12;
    func_0x000107c61170(uVar10);
  }
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  return (undefined1 *)plVar9;
}



/* Entry: 1007640f8; end: 10076419b; -[SCBitmojiUserServices initWithUserLinkingServices:userLinkingContentServices:] */

undefined1 *
FUN_1007640f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fea00;
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



/* Entry: 10076419c; end: 1007641ef;  */

void FUN_10076419c(void)

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



/* Entry: 1007641f0; end: 1007641f7; -[SCLensCarouselFeatureInternalServices cameraReplyConfigurationResolver] */

undefined8 FUN_1007641f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1007641f8; end: 1007641ff; -[SCLensCarouselPrivateServices lensCarouselUIActivationParameters] */

undefined8 FUN_1007641f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


