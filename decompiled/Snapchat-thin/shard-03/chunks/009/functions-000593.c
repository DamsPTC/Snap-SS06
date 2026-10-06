/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e582e0; end: 102e582e7;  */

undefined8 FUN_102e582e0(void)

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



/* Entry: 102e582e8; end: 102e58643;  */

long FUN_102e582e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126ac680;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10afb0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f01aa80);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f111a90);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    *(undefined **)(unaff_x20 + 0x40) = puVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e58644);
  (*pcVar1)();
}



/* Entry: 102e58644; end: 102e586af;  */

void FUN_102e58644(void)

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



/* Entry: 102e586b0; end: 102e586ff;  */

undefined8 FUN_102e586b0(void)

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



/* Entry: 102e58700; end: 102e58743;  */

undefined1  [16] FUN_102e58700(void)

{
  return ZEXT816(0x1105dd7c0);
}



/* Entry: 102e58744; end: 102e5876b;  */

void FUN_102e58744(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e5876c; end: 102e58773;  */

undefined8 FUN_102e5876c(void)

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



/* Entry: 102e58774; end: 102e58d7b;  */

void FUN_102e58774(long *param_1,long param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x00010034f14c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  puVar1 = PTR_PTR_1126ac688;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar12 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar12 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f089120);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  puVar13 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x60) = puVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 102e58d7c; end: 102e58daf;  */

void FUN_102e58d7c(void)

{
  long unaff_x20;
  
  FUN_102e58774(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102e58db0; end: 102e592f7;  */

void FUN_102e58db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

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
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  puVar1 = PTR_PTR_1126ac688;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f089120);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
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
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  *(undefined **)(unaff_x20 + 0x60) = puVar3;
  return;
}



/* Entry: 102e592f8; end: 102e59383;  */

void FUN_102e592f8(void)

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
  return;
}



/* Entry: 102e59384; end: 102e593d7;  */

void FUN_102e59384(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e593d8; end: 102e593df;  */

void FUN_102e593d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e593e0; end: 102e5942f;  */

undefined8 FUN_102e593e0(void)

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



/* Entry: 102e59430; end: 102e59473;  */

undefined1  [16] FUN_102e59430(void)

{
  return ZEXT816(0x1105dd888);
}



/* Entry: 102e59474; end: 102e5949b;  */

void FUN_102e59474(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e5949c; end: 102e594a3;  */

undefined8 FUN_102e5949c(void)

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



/* Entry: 102e594a4; end: 102e59a5b;  */

void FUN_102e594a4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100341d74();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  func_0x0001000285a8(0x112e77ac0,&UNK_10da80a08);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar11 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar8;
  puVar9 = PTR_PTR_1126ac690;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f00d6c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28e70);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1df60);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f07c600);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar8 = puVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(uStack_a8);
  *(undefined **)(param_2 + 0x58) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 102e59a5c; end: 102e59a8f;  */

void FUN_102e59a5c(void)

{
  long unaff_x20;
  
  FUN_102e594a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102e59a90; end: 102e59fb7;  */

long FUN_102e59a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  func_0x0001000285a8(0x112e77ac0,&UNK_10da80a08);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_9;
  func_0x000107c6157c(param_9);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126ac690;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f00d6c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28e70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1df60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f07c600);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  puVar1 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61574(param_9);
  *(undefined **)(unaff_x20 + 0x58) = puVar1;
  return unaff_x20;
}



/* Entry: 102e59fb8; end: 102e5a03b;  */

void FUN_102e59fb8(void)

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
  return;
}



/* Entry: 102e5a03c; end: 102e5a08f;  */

void FUN_102e5a03c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e5a090; end: 102e5a097;  */

void FUN_102e5a090(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e5a098; end: 102e5a0e7;  */

undefined8 FUN_102e5a098(void)

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



/* Entry: 102e5a0e8; end: 102e5a12b;  */

undefined1  [16] FUN_102e5a0e8(void)

{
  return ZEXT816(0x1105dd950);
}



/* Entry: 102e5a12c; end: 102e5a153;  */

void FUN_102e5a12c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e5a154; end: 102e5a15b;  */

undefined8 FUN_102e5a154(void)

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



/* Entry: 102e5a15c; end: 102e5a53b;  */

long FUN_102e5a15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  puVar1 = PTR_PTR_1126ac698;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
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
  func_0x000107c61170(param_7);
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  return unaff_x20;
}



/* Entry: 102e5a53c; end: 102e5a5af;  */

void FUN_102e5a53c(void)

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
  return;
}



/* Entry: 102e5a5b0; end: 102e5a5ff;  */

undefined8 FUN_102e5a5b0(void)

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



/* Entry: 102e5a600; end: 102e5a643;  */

undefined1  [16] FUN_102e5a600(void)

{
  return ZEXT816(0x1105dda18);
}



/* Entry: 102e5a644; end: 102e5a66b;  */

void FUN_102e5a644(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e5a66c; end: 102e5a673;  */

undefined8 FUN_102e5a66c(void)

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



/* Entry: 102e5a674; end: 102e5aac7;  */

void FUN_102e5a674(long *param_1,long param_2)

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
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x00010037fad4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126ac6a0;
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
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f111ac0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28e70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
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



/* Entry: 102e5aac8; end: 102e5aadb;  */

void FUN_102e5aac8(long *param_1)

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
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x00010037fad4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126ac6a0;
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
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f111ac0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28e70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
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



/* Entry: 102e5aadc; end: 102e5aeb3;  */

long FUN_102e5aadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  puVar1 = PTR_PTR_1126ac6a0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f111ac0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28e70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
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
  func_0x000107c61170(param_7);
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  return unaff_x20;
}



/* Entry: 102e5aeb4; end: 102e5af27;  */

void FUN_102e5aeb4(void)

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
  return;
}



/* Entry: 102e5af28; end: 102e5af7b;  */

void FUN_102e5af28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e5af7c; end: 102e5af83;  */

void FUN_102e5af7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e5af84; end: 102e5afd3;  */

undefined8 FUN_102e5af84(void)

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



/* Entry: 102e5afd4; end: 102e5b017;  */

undefined1  [16] FUN_102e5afd4(void)

{
  return ZEXT816(0x1105ddae0);
}



/* Entry: 102e5b018; end: 102e5b03f;  */

void FUN_102e5b018(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e5b040; end: 102e5b047;  */

undefined8 FUN_102e5b040(void)

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



/* Entry: 102e5b048; end: 102e5b08f;  */

undefined8 FUN_102e5b048(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x00010050be98(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102e5b090; end: 102e5b0d3;  */

void FUN_102e5b090(void)

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



/* Entry: 102e5b0d4; end: 102e5b123;  */

undefined8 FUN_102e5b0d4(void)

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



/* Entry: 102e5b124; end: 102e5b177;  */

undefined1  [16] FUN_102e5b124(void)

{
  return ZEXT816(0x1105ddb80);
}



/* Entry: 102e5b178; end: 102e5b19f;  */

void FUN_102e5b178(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e5b1a0; end: 102e5b1a7;  */

undefined8 FUN_102e5b1a0(void)

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



/* Entry: 102e5b1a8; end: 102e5b22f;  */

undefined8
FUN_102e5b1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102e5b2bc(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 102e5b230; end: 102e5b26b;  */

void FUN_102e5b230(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e5b26c; end: 102e5b2bb;  */

undefined8 FUN_102e5b26c(void)

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



/* Entry: 102e5b2bc; end: 102e5b4d3;  */

void FUN_102e5b2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126ac6b0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3a1f0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00cf00);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f111b60);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e5b4d4; end: 102e5b50f;  */

undefined1  [16] FUN_102e5b4d4(void)

{
  return ZEXT816(0x1105ddc68);
}



/* Entry: 102e5b510; end: 102e5e423;  */

void FUN_102e5b510(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  func_0x000100083b20(&uStack_1b0);
  func_0x000100083b20(&uStack_1b8);
  func_0x000100083b20(&uStack_1c0);
  func_0x000100083b20(&uStack_1c8);
  func_0x000100083b20(&uStack_1d0);
  func_0x000100083b20(&uStack_1d8);
  func_0x000100083b20(&uStack_1e0);
  func_0x000100083b20(&uStack_1e8);
  func_0x000100083b20(&uStack_1f0);
  func_0x000100083b20(&uStack_1f8);
  func_0x000100083b20(&uStack_200);
  func_0x000100083b20(&uStack_208);
  func_0x000100083b20(&uStack_210);
  func_0x000100083b20(&uStack_218);
  func_0x000100083b20(&uStack_220);
  func_0x000100083b20(&uStack_228);
  func_0x000100083b20(&uStack_230);
  func_0x000100083b20(&uStack_238);
  func_0x000100083b20(&uStack_240);
  func_0x000100083b20(&uStack_248);
  func_0x000100083b20(&uStack_250);
  func_0x000100083b20(&uStack_258);
  func_0x000100083b20(&uStack_260);
  func_0x000100083b20(&uStack_268);
  func_0x000100083b20(&uStack_270);
  func_0x000100083b20(&uStack_278);
  func_0x000100083b20(&uStack_280);
  func_0x000100083b20(&uStack_288);
  func_0x000100083b20(&uStack_290);
  func_0x000100083b20(&uStack_298);
  func_0x000100083b20(&uStack_2a0);
  func_0x000100083b20(&uStack_2a8);
  func_0x000100083b20(&uStack_2b0);
  func_0x00010037e8cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x78) = uStack_78;
  *(undefined8 *)(param_2 + 0x80) = uStack_80;
  *(undefined8 *)(param_2 + 0x88) = uStack_88;
  *(undefined8 *)(param_2 + 0x90) = uStack_90;
  *(undefined8 *)(param_2 + 0x98) = uStack_98;
  *(undefined8 *)(param_2 + 0xa0) = uStack_a0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_a8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_b0;
  *(undefined8 *)(param_2 + 0xb8) = uStack_b8;
  *(undefined8 *)(param_2 + 0xc0) = uStack_c0;
  *(undefined8 *)(param_2 + 200) = uStack_c8;
  *(undefined8 *)(param_2 + 0xd0) = uStack_d0;
  *(undefined8 *)(param_2 + 0xd8) = uStack_d8;
  *(undefined8 *)(param_2 + 0xe0) = uStack_e0;
  *(undefined8 *)(param_2 + 0xe8) = uStack_e8;
  *(undefined8 *)(param_2 + 0xf0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xf8) = uStack_f8;
  *(undefined8 *)(param_2 + 0x100) = uStack_100;
  *(undefined8 *)(param_2 + 0x108) = uStack_108;
  *(undefined8 *)(param_2 + 0x110) = uStack_110;
  *(undefined8 *)(param_2 + 0x118) = uStack_118;
  *(undefined8 *)(param_2 + 0x120) = uStack_120;
  *(undefined8 *)(param_2 + 0x128) = uStack_128;
  *(undefined8 *)(param_2 + 0x130) = uStack_130;
  *(undefined8 *)(param_2 + 0x138) = uStack_138;
  *(undefined8 *)(param_2 + 0x140) = uStack_140;
  *(undefined8 *)(param_2 + 0x148) = uStack_148;
  *(undefined8 *)(param_2 + 0x150) = uStack_150;
  *(undefined8 *)(param_2 + 0x158) = uStack_158;
  *(undefined8 *)(param_2 + 0x160) = uStack_160;
  *(undefined8 *)(param_2 + 0x168) = uStack_168;
  *(undefined8 *)(param_2 + 0x170) = uStack_170;
  *(undefined8 *)(param_2 + 0x178) = uStack_178;
  *(undefined8 *)(param_2 + 0x180) = uStack_180;
  *(undefined8 *)(param_2 + 0x188) = uStack_188;
  *(undefined8 *)(param_2 + 400) = uStack_190;
  *(undefined8 *)(param_2 + 0x198) = uStack_198;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x1a8) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x1b0) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x1b8) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x1d0) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_1d8;
  *(undefined8 *)(param_2 + 0x1e0) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x1e8) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x1f0) = uStack_1f0;
  *(undefined8 *)(param_2 + 0x1f8) = uStack_1f8;
  *(undefined8 *)(param_2 + 0x200) = uStack_200;
  *(undefined8 *)(param_2 + 0x208) = uStack_208;
  *(undefined8 *)(param_2 + 0x210) = uStack_210;
  *(undefined8 *)(param_2 + 0x218) = uStack_218;
  *(undefined8 *)(param_2 + 0x220) = uStack_220;
  *(undefined8 *)(param_2 + 0x228) = uStack_228;
  *(undefined8 *)(param_2 + 0x230) = uStack_230;
  *(undefined8 *)(param_2 + 0x238) = uStack_238;
  *(undefined8 *)(param_2 + 0x240) = uStack_240;
  *(undefined8 *)(param_2 + 0x248) = uStack_248;
  *(undefined8 *)(param_2 + 0x250) = uStack_250;
  func_0x0001000285a8(0x112e5cf88,&UNK_10da63620);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c61174();
  uVar17 = uStack_f8;
  func_0x000107c61174();
  uVar18 = uStack_100;
  func_0x000107c61174();
  uVar19 = uStack_108;
  func_0x000107c61174();
  uVar20 = uStack_110;
  func_0x000107c61174();
  uVar21 = uStack_118;
  func_0x000107c61174();
  uVar22 = uStack_120;
  func_0x000107c61174();
  uVar23 = uStack_128;
  func_0x000107c61174();
  uVar24 = uStack_130;
  func_0x000107c61174();
  uVar25 = uStack_138;
  func_0x000107c61174();
  uVar26 = uStack_140;
  func_0x000107c61174();
  uVar27 = uStack_148;
  func_0x000107c61174();
  uVar30 = uStack_150;
  func_0x000107c61174();
  uVar31 = uStack_158;
  func_0x000107c61174();
  uVar32 = uStack_160;
  func_0x000107c61174();
  uVar33 = uStack_168;
  func_0x000107c61174();
  uVar34 = uStack_170;
  func_0x000107c61174();
  uVar35 = uStack_178;
  func_0x000107c61174();
  uVar36 = uStack_180;
  func_0x000107c61174();
  uVar37 = uStack_188;
  func_0x000107c61174();
  uVar38 = uStack_190;
  func_0x000107c61174();
  uVar39 = uStack_198;
  func_0x000107c61174();
  uVar40 = uStack_1a0;
  func_0x000107c61174();
  uVar41 = uStack_1a8;
  func_0x000107c61174();
  uVar42 = uStack_1b0;
  func_0x000107c61174();
  uVar43 = uStack_1b8;
  func_0x000107c61174();
  uVar44 = uStack_1c0;
  func_0x000107c61174();
  uVar45 = uStack_1c8;
  func_0x000107c61174();
  uVar46 = uStack_1d0;
  func_0x000107c61174();
  uVar47 = uStack_1d8;
  func_0x000107c61174();
  uVar48 = uStack_1e0;
  func_0x000107c61174();
  uVar49 = uStack_1e8;
  func_0x000107c61174();
  uVar50 = uStack_1f0;
  func_0x000107c61174();
  uVar51 = uStack_1f8;
  func_0x000107c61174();
  uVar52 = uStack_200;
  func_0x000107c61174();
  uVar53 = uStack_208;
  func_0x000107c61174();
  uVar54 = uStack_210;
  func_0x000107c61174();
  uVar55 = uStack_218;
  func_0x000107c61174();
  uVar56 = uStack_220;
  func_0x000107c61174();
  uVar57 = uStack_228;
  func_0x000107c61174();
  uVar58 = uStack_230;
  func_0x000107c61174();
  uVar59 = uStack_238;
  func_0x000107c61174();
  uVar60 = uStack_240;
  func_0x000107c61174();
  uVar61 = uStack_248;
  func_0x000107c61174();
  uVar62 = uStack_250;
  func_0x000107c61174();
  uVar64 = uStack_258;
  func_0x000107c6157c(uStack_258);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x18) = puVar28;
  func_0x0001000285a8(0x112e5cf78,&UNK_10da63610);
  func_0x000107c610f8();
  uVar64 = uStack_260;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x20) = puVar28;
  func_0x0001000285a8(0x112e5cf70,&UNK_10db5d010);
  func_0x000107c610f8();
  uVar64 = uStack_268;
  func_0x000107c6157c(uStack_268);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x28) = puVar28;
  func_0x0001000285a8(0x112e5cf80,&UNK_10da81ba0);
  func_0x000107c610f8();
  uVar64 = uStack_270;
  func_0x000107c6157c(uStack_270);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x30) = puVar28;
  func_0x0001000285a8(0x112ebd0a0,&UNK_10dad75e0);
  func_0x000107c610f8();
  uVar64 = uStack_278;
  func_0x000107c6157c(uStack_278);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x38) = puVar28;
  func_0x0001000285a8(0x112ebc8d8,&UNK_10db4b840);
  func_0x000107c610f8();
  uVar64 = uStack_280;
  func_0x000107c6157c(uStack_280);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x40) = puVar28;
  func_0x0001000285a8(0x112e1ffe0,&UNK_10db1e9c0);
  func_0x000107c610f8();
  uVar64 = uStack_288;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar28 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x48) = puVar28;
  func_0x0001000285a8(0x112f21d28,&UNK_10db5b990);
  func_0x000107c610f8();
  uVar64 = uStack_290;
  func_0x000107c6157c(uStack_290);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x50) = puVar28;
  func_0x0001000285a8(0x112e5f738,&UNK_10da67770);
  func_0x000107c610f8();
  uVar64 = uStack_298;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x58) = puVar28;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar64 = uStack_2a0;
  func_0x000107c6157c(uStack_2a0);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x60) = puVar28;
  func_0x0001000285a8(0x112e01b58,&UNK_10da8e210);
  func_0x000107c610f8();
  uVar64 = uStack_2a8;
  func_0x000107c6157c(uStack_2a8);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x68) = puVar28;
  func_0x0001000285a8(0x112e78410,&UNK_10db5b9a0);
  func_0x000107c610f8();
  uVar64 = uStack_2b0;
  func_0x000107c6157c(uStack_2b0);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar64);
  *(undefined **)(param_2 + 0x70) = puVar28;
  puVar28 = PTR_PTR_1126ac6b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar28;
  func_0x000107c61174();
  uVar29 = auStack_70[0];
  func_0x000107c61174();
  uVar68 = 0xd000000000000010;
  uVar64 = uVar68;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar28);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar69 = 0xd000000000000016;
  uVar64 = uVar69;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar67 = 0xd000000000000011;
  uVar64 = uVar67;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef29390);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar65 = 0xd000000000000017;
  uVar64 = uVar65;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = uVar67;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2e900);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = uVar65;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = uVar68;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar63 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f111b80);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar63);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  uVar63 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef28ec0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar64 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f111ba0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = uVar65;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07da20);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  uVar63 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00d930);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar64 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar63 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0669a0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  uVar63 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00d820);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f111bd0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f066a00);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar63 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef1a570);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07d930);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar63 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar63);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  uVar63 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f590);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = uVar67;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  uVar63 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b4b0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar63);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar69);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar63 = 0x53636f4470616e73;
  func_0x000107c5fadc(0x53636f4470616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f00d870);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar64 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07dbb0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar69 = 0xd000000000000013;
  uVar64 = uVar69;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f087be0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar66 = 0xd000000000000014;
  uVar64 = uVar66;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar68);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000011,0x800000010f00cfb0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar67);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  uVar63 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar63);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar63 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d4f0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar63);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc88c0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar65);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar67 = 0xd00000000000001a;
  uVar64 = uVar67;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar68 = 0xd00000000000001b;
  uVar64 = uVar68;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  uVar63 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d050);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar64 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef39bb0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d840);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar63 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f05bfb0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar63);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  func_0x000107c5fadc(0xd000000000000013,0x800000010f111c00);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar69);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = uVar66;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef28ee0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  uVar63 = 0x6553736d61657264;
  func_0x000107c5fadc(0x6553736d61657264,0xee00736563697672);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = uVar67;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar63 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00cf00);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f089180);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar63 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar63);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  uVar63 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar63);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f111c20);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  uVar63 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2b470);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar63);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  func_0x000107c5fadc(0xd000000000000014,0x800000010f066a60);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar66);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar64 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f111c50);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar64);
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f111c80);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar68);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar64 = uVar67;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef20360);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar63);
  uVar64 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f111ca0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  uVar69 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar63);
  func_0x000107c61174(uVar69);
  uVar64 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f066b00);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  uVar63 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar64);
  func_0x000107c61174(uVar63);
  uVar69 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1117f0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  uVar69 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar63);
  func_0x000107c61174(uVar69);
  uVar64 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f07df60);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar64);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  uVar69 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174(uVar69);
  uVar64 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f066ad0);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  uVar63 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174(uVar64);
  func_0x000107c61174(uVar63);
  uVar69 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2b4d0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  uVar63 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar69 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f10cfa0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  uVar69 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174(uVar63);
  func_0x000107c61174(uVar69);
  uVar64 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f00d000);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  uVar63 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174(uVar64);
  func_0x000107c61174(uVar63);
  uVar69 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f111cd0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  uVar63 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174(uVar64);
  func_0x000107c61174(uVar63);
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef113c0);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar67);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  uVar63 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174(uVar64);
  func_0x000107c61174(uVar63);
  uVar69 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef20410);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  uVar69 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174(uVar69);
  uVar64 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef3a810);
  func_0x000107c5a49c(uVar63);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar64);
  uVar64 = *(undefined8 *)(param_2 + 0x10);
  uVar63 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c61174(uVar64);
  func_0x000107c61174(uVar63);
  uVar69 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f075b40);
  func_0x000107c5a49c(uVar64);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar69);
  uVar63 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar64 = uVar63;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar62);
  func_0x000107c61574(uStack_258);
  func_0x000107c61574(uStack_260);
  func_0x000107c61574(uStack_268);
  func_0x000107c61574(uStack_270);
  func_0x000107c61574(uStack_278);
  func_0x000107c61574(uStack_280);
  func_0x000107c61574(uStack_288);
  func_0x000107c61574(uStack_290);
  func_0x000107c61574(uStack_298);
  func_0x000107c61574(uStack_2a0);
  func_0x000107c61574(uStack_2a8);
  func_0x000107c61574(uStack_2b0);
  *(undefined8 *)(param_2 + 600) = uVar64;
  *param_1 = param_2;
  return;
}



/* Entry: 102e5e424; end: 102e5e4ff;  */

void FUN_102e5e424(void)

{
  long unaff_x20;
  
  FUN_102e5b510(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 102e5e500; end: 102e60d23;  */

long FUN_102e5e500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_3;
  *(undefined8 *)(unaff_x20 + 0x88) = param_4;
  *(undefined8 *)(unaff_x20 + 0x90) = param_5;
  *(undefined8 *)(unaff_x20 + 0x98) = param_6;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_8;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_9;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_10;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_11;
  *(undefined8 *)(unaff_x20 + 200) = param_12;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_13;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_14;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_15;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_16;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_18;
  *(undefined8 *)(unaff_x20 + 0x100) = param_19;
  *(undefined8 *)(unaff_x20 + 0x108) = param_20;
  *(undefined8 *)(unaff_x20 + 0x110) = param_21;
  *(undefined8 *)(unaff_x20 + 0x118) = param_22;
  *(undefined8 *)(unaff_x20 + 0x120) = param_23;
  *(undefined8 *)(unaff_x20 + 0x128) = param_24;
  *(undefined8 *)(unaff_x20 + 0x130) = param_25;
  *(undefined8 *)(unaff_x20 + 0x138) = param_26;
  *(undefined8 *)(unaff_x20 + 0x140) = param_27;
  *(undefined8 *)(unaff_x20 + 0x148) = param_28;
  *(undefined8 *)(unaff_x20 + 0x150) = param_29;
  *(undefined8 *)(unaff_x20 + 0x158) = param_30;
  *(undefined8 *)(unaff_x20 + 0x160) = param_31;
  *(undefined8 *)(unaff_x20 + 0x168) = param_32;
  *(undefined8 *)(unaff_x20 + 0x170) = param_33;
  *(undefined8 *)(unaff_x20 + 0x178) = param_34;
  *(undefined8 *)(unaff_x20 + 0x180) = param_35;
  *(undefined8 *)(unaff_x20 + 0x188) = param_36;
  *(undefined8 *)(unaff_x20 + 400) = param_37;
  *(undefined8 *)(unaff_x20 + 0x198) = param_38;
  *(undefined8 *)(unaff_x20 + 0x1a0) = param_39;
  *(undefined8 *)(unaff_x20 + 0x1a8) = param_40;
  *(undefined8 *)(unaff_x20 + 0x1b0) = param_41;
  *(undefined8 *)(unaff_x20 + 0x1b8) = param_42;
  *(undefined8 *)(unaff_x20 + 0x1c0) = param_43;
  *(undefined8 *)(unaff_x20 + 0x1c8) = param_44;
  *(undefined8 *)(unaff_x20 + 0x1d0) = param_45;
  *(undefined8 *)(unaff_x20 + 0x1d8) = param_46;
  *(undefined8 *)(unaff_x20 + 0x1e0) = param_47;
  *(undefined8 *)(unaff_x20 + 0x1e8) = param_48;
  *(undefined8 *)(unaff_x20 + 0x1f0) = param_49;
  *(undefined8 *)(unaff_x20 + 0x1f8) = param_50;
  *(undefined8 *)(unaff_x20 + 0x200) = param_51;
  *(undefined8 *)(unaff_x20 + 0x208) = param_52;
  *(undefined8 *)(unaff_x20 + 0x210) = param_53;
  *(undefined8 *)(unaff_x20 + 0x218) = param_54;
  *(undefined8 *)(unaff_x20 + 0x220) = param_55;
  *(undefined8 *)(unaff_x20 + 0x228) = param_56;
  *(undefined8 *)(unaff_x20 + 0x230) = param_57;
  *(undefined8 *)(unaff_x20 + 0x238) = param_58;
  *(undefined8 *)(unaff_x20 + 0x240) = param_59;
  *(undefined8 *)(unaff_x20 + 0x248) = param_60;
  *(undefined8 *)(unaff_x20 + 0x250) = param_61;
  func_0x0001000285a8(0x112e5cf88,&UNK_10da63620);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_62;
  func_0x000107c6157c(param_62);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  func_0x0001000285a8(0x112e5cf78,&UNK_10da63610);
  func_0x000107c610f8();
  uVar1 = param_63;
  func_0x000107c6157c(param_63);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar4;
  func_0x0001000285a8(0x112e5cf70,&UNK_10db5d010);
  func_0x000107c610f8();
  uVar1 = param_64;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar5;
  func_0x0001000285a8(0x112e5cf80,&UNK_10da81ba0);
  func_0x000107c610f8();
  uVar1 = param_65;
  func_0x000107c6157c(param_65);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x30) = puVar6;
  func_0x0001000285a8(0x112ebd0a0,&UNK_10dad75e0);
  func_0x000107c610f8();
  uVar1 = param_66;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x38) = puVar7;
  func_0x0001000285a8(0x112ebc8d8,&UNK_10db4b840);
  func_0x000107c610f8();
  uVar1 = param_67;
  func_0x000107c6157c(param_67);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x40) = puVar8;
  func_0x0001000285a8(0x112e1ffe0,&UNK_10db1e9c0);
  func_0x000107c610f8();
  uVar1 = param_68;
  func_0x000107c6157c(param_68);
  func_0x0001003b3b80();
  puVar9 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x48) = puVar9;
  func_0x0001000285a8(0x112f21d28,&UNK_10db5b990);
  func_0x000107c610f8();
  uVar1 = param_69;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x50) = puVar10;
  func_0x0001000285a8(0x112e5f738,&UNK_10da67770);
  func_0x000107c610f8();
  uVar1 = param_70;
  func_0x000107c6157c(param_70);
  func_0x00010017da58();
  puVar14 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x58) = puVar14;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar1 = in_stack_000001f0;
  func_0x000107c6157c(in_stack_000001f0);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x60) = puVar11;
  func_0x0001000285a8(0x112e01b58,&UNK_10da8e210);
  func_0x000107c610f8();
  uVar1 = in_stack_000001f8;
  func_0x000107c6157c(in_stack_000001f8);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x68) = puVar12;
  func_0x0001000285a8(0x112e78410,&UNK_10db5b9a0);
  func_0x000107c610f8();
  uVar1 = in_stack_00000200;
  func_0x000107c6157c(in_stack_00000200);
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x70) = puVar13;
  puVar2 = PTR_PTR_1126ac6b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  uVar1 = uVar16;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  uVar1 = uVar15;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000011;
  uVar1 = uVar18;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef29390);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000017;
  uVar1 = uVar20;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar18;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2e900);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar20;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f111b80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef28ec0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f111ba0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar20;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07da20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00d930);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0669a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00d820);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f111bd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f066a00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef1a570);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07d930);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f590);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_26);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar18;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_27);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b4b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_28);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_29);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x53636f4470616e73;
  func_0x000107c5fadc(0x53636f4470616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_30);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f00d870);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_31);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_32);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07dbb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_33);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  uVar1 = uVar16;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f087be0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_34);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000014;
  uVar1 = uVar19;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_35);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  uVar1 = uVar17;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_36);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000011,0x800000010f00cfb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_37);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d4f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_39);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc88c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_40);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001a;
  uVar1 = uVar15;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_41);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  uVar1 = uVar18;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_42);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d050);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_43);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef39bb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_44);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d840);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_45);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f05bfb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_46);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f111c00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_47);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar19;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef28ee0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_48);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x6553736d61657264;
  func_0x000107c5fadc(0x6553736d61657264,0xee00736563697672);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_49);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_50);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00cf00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_51);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f089180);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_52);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_53);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_54);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f111c20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_55);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2b470);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_56);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010f066a60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_57);
  func_0x000107c61170(uVar19);
  func_0x000107c61174(param_58);
  func_0x000107c61174();
  uVar1 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f111c50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_58);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f111c80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_59);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  uVar1 = uVar16;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef20360);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f111ca0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_61);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f066b00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1117f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f07df60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar1 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f066ad0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar7);
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2b4d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar1 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f10cfa0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f00d000);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f111cd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar14);
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef113c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef20410);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef3a810);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar13);
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f075b40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  puVar14 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
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
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_57);
  func_0x000107c61170(param_58);
  func_0x000107c61170(param_59);
  func_0x000107c61170(param_60);
  func_0x000107c61170(param_61);
  func_0x000107c61574(param_62);
  func_0x000107c61574(param_63);
  func_0x000107c61574(param_64);
  func_0x000107c61574(param_65);
  func_0x000107c61574(param_66);
  func_0x000107c61574(param_67);
  func_0x000107c61574(param_68);
  func_0x000107c61574(param_69);
  func_0x000107c61574(param_70);
  func_0x000107c61574(in_stack_000001f0);
  func_0x000107c61574(in_stack_000001f8);
  func_0x000107c61574(in_stack_00000200);
  *(undefined **)(unaff_x20 + 600) = puVar14;
  return unaff_x20;
}



/* Entry: 102e60d24; end: 102e60fa7;  */

void FUN_102e60d24(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 600));
  return;
}



/* Entry: 102e60fa8; end: 102e60ffb;  */

void FUN_102e60fa8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 600);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e60ffc; end: 102e61003;  */

void FUN_102e60ffc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 600);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e61004; end: 102e61053;  */

undefined8 FUN_102e61004(void)

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



/* Entry: 102e61054; end: 102e61097;  */

undefined1  [16] FUN_102e61054(void)

{
  return ZEXT816(0x1105ddd10);
}



/* Entry: 102e61098; end: 102e610bf;  */

void FUN_102e61098(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e610c0; end: 102e610c7;  */

undefined8 FUN_102e610c0(void)

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



/* Entry: 102e610c8; end: 102e613fb;  */

void FUN_102e610c8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010037fc60();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126ac6c0;
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
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07d990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 102e613fc; end: 102e6140b;  */

void FUN_102e613fc(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010037fc60();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126ac6c0;
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
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07d990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x38) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 102e6140c; end: 102e616e7;  */

long FUN_102e6140c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  puVar1 = PTR_PTR_1126ac6c0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07d990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
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
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 102e616e8; end: 102e61733;  */

void FUN_102e616e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e61734; end: 102e61787;  */

void FUN_102e61734(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e61788; end: 102e6178f;  */

void FUN_102e61788(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e61790; end: 102e617df;  */

undefined8 FUN_102e61790(void)

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



/* Entry: 102e617e0; end: 102e61823;  */

undefined1  [16] FUN_102e617e0(void)

{
  return ZEXT816(0x1105dddd8);
}



/* Entry: 102e61824; end: 102e6184b;  */

void FUN_102e61824(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e6184c; end: 102e61853;  */

undefined8 FUN_102e6184c(void)

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



/* Entry: 102e61854; end: 102e6266b;  */

void FUN_102e61854(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x00010037ec24();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_100;
  *(undefined8 *)(param_2 + 0xb8) = uStack_108;
  *(undefined8 *)(param_2 + 0xc0) = uStack_110;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  uVar20 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar18 = uStack_118;
  func_0x000107c6157c(uStack_118);
  func_0x00010017da58();
  puVar19 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x18) = puVar19;
  func_0x0001000285a8(0x112f22150,&UNK_10db5bf50);
  func_0x000107c610f8();
  uVar18 = uStack_120;
  func_0x000107c6157c(uStack_120);
  func_0x00010017da58();
  puVar19 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x20) = puVar19;
  puVar19 = PTR_PTR_1126ac6c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar19;
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0a3ff0);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar18 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f111cf0);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2a290);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar18);
  uVar24 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d8a0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc0750);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28e70);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar24);
  uVar18 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f111d10);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar22);
  func_0x000107c61174(uVar24);
  uVar18 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85d90);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(uVar24);
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  uVar25 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar24);
  func_0x000107c61174(uVar25);
  uVar18 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar18);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  uVar24 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174(uVar24);
  uVar18 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f075b10);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  uVar18 = uVar25;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61574(uStack_118);
  func_0x000107c61574(uStack_120);
  *(undefined8 *)(param_2 + 200) = uVar18;
  *param_1 = param_2;
  return;
}



/* Entry: 102e6266c; end: 102e626bf;  */

void FUN_102e6266c(void)

{
  long unaff_x20;
  
  FUN_102e61854(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 102e626c0; end: 102e632e3;  */

void FUN_102e626c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_10;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_12;
  *(undefined8 *)(unaff_x20 + 0x80) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_14;
  *(undefined8 *)(unaff_x20 + 0x90) = param_15;
  *(undefined8 *)(unaff_x20 + 0x98) = param_16;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_21;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174();
  uVar4 = param_22;
  func_0x000107c6157c(param_22);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001000285a8(0x112f22150,&UNK_10db5bf50);
  func_0x000107c610f8();
  uVar4 = param_23;
  func_0x000107c6157c(param_23);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar3 = PTR_PTR_1126ac6c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0a3ff0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f111cf0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2a290);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d8a0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_16);
  func_0x000107c61174();
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc0750);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_17);
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28e70);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_19);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f111d10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_20);
  func_0x000107c61174();
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85d90);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar4 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f075b10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  puVar1 = puVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
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
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61574(param_22);
  func_0x000107c61574(param_23);
  *(undefined **)(unaff_x20 + 200) = puVar1;
  return;
}



/* Entry: 102e632e4; end: 102e633d7;  */

void FUN_102e632e4(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  return;
}



/* Entry: 102e633d8; end: 102e6342b;  */

void FUN_102e633d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 200);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e6342c; end: 102e63433;  */

void FUN_102e6342c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 200);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e63434; end: 102e63483;  */

undefined8 FUN_102e63434(void)

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



/* Entry: 102e63484; end: 102e634c7;  */

undefined1  [16] FUN_102e63484(void)

{
  return ZEXT816(0x1105ddea0);
}



/* Entry: 102e634c8; end: 102e634ef;  */

void FUN_102e634c8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e634f0; end: 102e634f7;  */

undefined8 FUN_102e634f0(void)

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



/* Entry: 102e634f8; end: 102e63a73;  */

void FUN_102e634f8(long *param_1,long param_2)

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
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100330aa4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126ac6d0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00d910);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00d310);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar12 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x58) = puVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 102e63a74; end: 102e63aa7;  */

void FUN_102e63a74(void)

{
  long unaff_x20;
  
  FUN_102e634f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102e63aa8; end: 102e63f8b;  */

long FUN_102e63aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

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
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  puVar1 = PTR_PTR_1126ac6d0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00d910);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00d310);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
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
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  return unaff_x20;
}



/* Entry: 102e63f8c; end: 102e6400f;  */

void FUN_102e63f8c(void)

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
  return;
}



/* Entry: 102e64010; end: 102e64063;  */

void FUN_102e64010(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e64064; end: 102e6406b;  */

void FUN_102e64064(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e6406c; end: 102e640bb;  */

undefined8 FUN_102e6406c(void)

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



/* Entry: 102e640bc; end: 102e640ff;  */

undefined1  [16] FUN_102e640bc(void)

{
  return ZEXT816(0x1105ddf68);
}



/* Entry: 102e64100; end: 102e64127;  */

void FUN_102e64100(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e64128; end: 102e6412f;  */

undefined8 FUN_102e64128(void)

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



/* Entry: 102e64130; end: 102e65d53;  */

void FUN_102e64130(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  func_0x000100083b20(&uStack_1b0);
  func_0x000100083b20(&uStack_1b8);
  func_0x000100083b20(&uStack_1c0);
  func_0x000100083b20(&uStack_1c8);
  func_0x000100083b20(&uStack_1d0);
  func_0x00010037b900();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  *(undefined8 *)(param_2 + 0xe0) = uStack_128;
  *(undefined8 *)(param_2 + 0xe8) = uStack_130;
  *(undefined8 *)(param_2 + 0xf0) = uStack_138;
  *(undefined8 *)(param_2 + 0xf8) = uStack_140;
  *(undefined8 *)(param_2 + 0x100) = uStack_148;
  *(undefined8 *)(param_2 + 0x108) = uStack_150;
  *(undefined8 *)(param_2 + 0x110) = uStack_158;
  *(undefined8 *)(param_2 + 0x118) = uStack_160;
  *(undefined8 *)(param_2 + 0x120) = uStack_168;
  *(undefined8 *)(param_2 + 0x128) = uStack_170;
  *(undefined8 *)(param_2 + 0x130) = uStack_178;
  *(undefined8 *)(param_2 + 0x138) = uStack_180;
  *(undefined8 *)(param_2 + 0x140) = uStack_188;
  *(undefined8 *)(param_2 + 0x148) = uStack_190;
  *(undefined8 *)(param_2 + 0x150) = uStack_198;
  *(undefined8 *)(param_2 + 0x158) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x160) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x168) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x170) = uStack_1b8;
  func_0x0001000285a8(0x112e4b288,&UNK_10db1f2c0);
  func_0x000107c610f8();
  uVar19 = uStack_78;
  func_0x000107c61174();
  uVar21 = uStack_80;
  func_0x000107c61174();
  uVar22 = uStack_88;
  func_0x000107c61174();
  uVar23 = uStack_90;
  func_0x000107c61174();
  uVar1 = uStack_98;
  func_0x000107c61174();
  uVar2 = uStack_a0;
  func_0x000107c61174();
  uVar3 = uStack_a8;
  func_0x000107c61174();
  uVar4 = uStack_b0;
  func_0x000107c61174();
  uVar5 = uStack_b8;
  func_0x000107c61174();
  uVar6 = uStack_c0;
  func_0x000107c61174();
  uVar7 = uStack_c8;
  func_0x000107c61174();
  uVar8 = uStack_d0;
  func_0x000107c61174();
  uVar9 = uStack_d8;
  func_0x000107c61174();
  uVar10 = uStack_e0;
  func_0x000107c61174();
  uVar11 = uStack_e8;
  func_0x000107c61174();
  uVar12 = uStack_f0;
  func_0x000107c61174();
  uVar13 = uStack_f8;
  func_0x000107c61174();
  uVar14 = uStack_100;
  func_0x000107c61174();
  uVar15 = uStack_108;
  func_0x000107c61174();
  uVar16 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar29 = uStack_140;
  func_0x000107c61174();
  uVar30 = uStack_148;
  func_0x000107c61174();
  uVar31 = uStack_150;
  func_0x000107c61174();
  uVar32 = uStack_158;
  func_0x000107c61174();
  uVar33 = uStack_160;
  func_0x000107c61174();
  uVar34 = uStack_168;
  func_0x000107c61174();
  uVar35 = uStack_170;
  func_0x000107c61174();
  uVar36 = uStack_178;
  func_0x000107c61174();
  uVar37 = uStack_180;
  func_0x000107c61174();
  uVar38 = uStack_188;
  func_0x000107c61174();
  uVar39 = uStack_190;
  func_0x000107c61174();
  uVar40 = uStack_198;
  func_0x000107c61174();
  uVar41 = uStack_1a0;
  func_0x000107c61174();
  uVar42 = uStack_1a8;
  func_0x000107c61174();
  uVar43 = uStack_1b0;
  func_0x000107c61174();
  uVar44 = uStack_1b8;
  func_0x000107c61174();
  uVar45 = uStack_1c0;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar17 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar45);
  *(undefined **)(param_2 + 0x18) = puVar17;
  func_0x0001000285a8(0x112e77ac8,&UNK_10da80a10);
  func_0x000107c610f8();
  uVar45 = uStack_1c8;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar17 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar45);
  *(undefined **)(param_2 + 0x20) = puVar17;
  func_0x0001000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  uVar45 = uStack_1d0;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar17 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar45);
  *(undefined **)(param_2 + 0x28) = puVar17;
  puVar17 = PTR_PTR_1126ac6d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar17;
  func_0x000107c61174();
  uVar18 = auStack_70[0];
  func_0x000107c61174();
  uVar47 = 0xd000000000000013;
  uVar45 = uVar47;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar17);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000016;
  uVar45 = uVar46;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000014;
  uVar45 = uVar48;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar45 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = uVar47;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f087be0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar45 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef28ec0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07da20);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar45);
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc89e0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar45 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b4b0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar45 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00aca0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar45);
  uVar20 = 0x69767265536f6375;
  func_0x000107c5fadc(0x69767265536f6375,0xeb00000000736563);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1d180);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar20);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar20);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar45);
  uVar20 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar20);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar20);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar45);
  uVar20 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef383e0);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar20);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar47);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d840);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0x536e496b63656863;
  func_0x000107c5fadc(0x536e496b63656863,0xef73656369767265);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar20);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = uVar48;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f017660);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = uVar48;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0dba40);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d2e0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0x65536c65736e6974;
  func_0x000107c5fadc(0x65536c65736e6974,0xee00736563697672);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f111d30);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar45);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef28cf0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1dfd0);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef28ee0);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar48);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f111d60);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  uVar20 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef28d10);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  uVar46 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f07c630);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar45);
  uVar45 = *(undefined8 *)(param_2 + 0x10);
  uVar20 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1e140);
  func_0x000107c5a49c(uVar45);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar45 = uVar20;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
  func_0x000107c61574(uStack_1c0);
  func_0x000107c61574(uStack_1c8);
  func_0x000107c61574(uStack_1d0);
  *(undefined8 *)(param_2 + 0x178) = uVar45;
  *param_1 = param_2;
  return;
}



/* Entry: 102e65d54; end: 102e65dd7;  */

void FUN_102e65d54(void)

{
  long unaff_x20;
  
  FUN_102e64130(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170));
  return;
}



/* Entry: 102e65dd8; end: 102e67563;  */

long FUN_102e65dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_45)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
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
  *(undefined8 *)(unaff_x20 + 0x80) = param_12;
  *(undefined8 *)(unaff_x20 + 0x88) = param_13;
  *(undefined8 *)(unaff_x20 + 0x90) = param_14;
  *(undefined8 *)(unaff_x20 + 0x98) = param_15;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_16;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_17;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_18;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_19;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_20;
  *(undefined8 *)(unaff_x20 + 200) = param_21;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_22;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_23;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_24;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_25;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_26;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_27;
  *(undefined8 *)(unaff_x20 + 0x100) = param_28;
  *(undefined8 *)(unaff_x20 + 0x108) = param_29;
  *(undefined8 *)(unaff_x20 + 0x110) = param_30;
  *(undefined8 *)(unaff_x20 + 0x118) = param_31;
  *(undefined8 *)(unaff_x20 + 0x120) = param_32;
  *(undefined8 *)(unaff_x20 + 0x128) = param_33;
  *(undefined8 *)(unaff_x20 + 0x130) = param_34;
  *(undefined8 *)(unaff_x20 + 0x138) = param_35;
  *(undefined8 *)(unaff_x20 + 0x140) = param_36;
  *(undefined8 *)(unaff_x20 + 0x148) = param_37;
  *(undefined8 *)(unaff_x20 + 0x150) = param_38;
  *(undefined8 *)(unaff_x20 + 0x158) = param_39;
  *(undefined8 *)(unaff_x20 + 0x160) = param_40;
  *(undefined8 *)(unaff_x20 + 0x168) = param_41;
  *(undefined8 *)(unaff_x20 + 0x170) = param_42;
  func_0x0001000285a8(0x112e4b288,&UNK_10db1f2c0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_43;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  func_0x0001000285a8(0x112e77ac8,&UNK_10da80a10);
  func_0x000107c610f8();
  uVar1 = param_44;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar4;
  func_0x0001000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  uVar1 = param_45;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar5;
  puVar2 = PTR_PTR_1126ac6d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  uVar1 = uVar7;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  uVar1 = uVar8;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000014;
  uVar1 = uVar6;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar7;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f087be0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef28ec0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07da20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc89e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b4b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00aca0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x69767265536f6375;
  func_0x000107c5fadc(0x69767265536f6375,0xeb00000000736563);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1d180);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef383e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_26);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_27);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_28);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d840);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_29);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x536e496b63656863;
  func_0x000107c5fadc(0x536e496b63656863,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_30);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_31);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar6;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f017660);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_32);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar6;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_33);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0dba40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_34);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d2e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_35);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x65536c65736e6974;
  func_0x000107c5fadc(0x65536c65736e6974,0xee00736563697672);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_36);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f111d30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_37);
  func_0x000107c61170(uVar1);
  func_0x000107c61174(param_38);
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef28cf0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1dfd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_39);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_40);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef28ee0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_41);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f111d60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_42);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef28d10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f07c630);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1e140);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  puVar5 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
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
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_42);
  func_0x000107c61574(param_43);
  func_0x000107c61574(param_44);
  func_0x000107c61574(param_45);
  *(undefined **)(unaff_x20 + 0x178) = puVar5;
  return unaff_x20;
}



/* Entry: 102e67564; end: 102e67707;  */

void FUN_102e67564(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x178));
  return;
}



/* Entry: 102e67708; end: 102e6775b;  */

void FUN_102e67708(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x178);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e6775c; end: 102e67763;  */

void FUN_102e6775c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x178);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


