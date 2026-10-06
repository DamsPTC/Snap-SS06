/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101eb3134; end: 101eb3167;  */

undefined1  [16] FUN_101eb3134(void)

{
  return ZEXT816(0x110495650);
}



/* Entry: 101eb3168; end: 101eb318f;  */

void FUN_101eb3168(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101eb3190; end: 101eb3197;  */

undefined8 FUN_101eb3190(void)

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



/* Entry: 101eb3198; end: 101eb3797;  */

long FUN_101eb3198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  func_0x0001000285a8(0x112e37f40,&UNK_10da22528);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  uVar3 = param_11;
  func_0x000107c6157c(param_11);
  func_0x00010025a71c();
  puVar1 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126a9748;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f017e70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f008690);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85c50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f017e90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(puVar2);
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
  func_0x000107c61574(param_11);
  return unaff_x20;
}



/* Entry: 101eb3798; end: 101eb3823;  */

void FUN_101eb3798(void)

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



/* Entry: 101eb3824; end: 101eb3873;  */

undefined8 FUN_101eb3824(void)

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



/* Entry: 101eb3874; end: 101eb38af;  */

undefined1  [16] FUN_101eb3874(void)

{
  return ZEXT816(0x1104956f8);
}



/* Entry: 101eb38b0; end: 101eb3ef7;  */

void FUN_101eb38b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a9750;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc3350);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f017eb0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00a720);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_9);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f017ed0);
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
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    *(undefined **)(unaff_x20 + 0x70) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb3ef8);
  (*pcVar1)();
}



/* Entry: 101eb3ef8; end: 101eb3f93;  */

void FUN_101eb3ef8(void)

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
  return;
}



/* Entry: 101eb3f94; end: 101eb3fe3;  */

undefined8 FUN_101eb3f94(void)

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



/* Entry: 101eb3fe4; end: 101eb402f;  */

undefined1  [16] FUN_101eb3fe4(void)

{
  return ZEXT816(0x1104957a0);
}



/* Entry: 101eb4030; end: 101eb42b7;  */

long FUN_101eb4030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  code *pcVar1;
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
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001008fb3fc();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_1;
  func_0x0001008fb41c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c6157c();
  func_0x0001008fb74c();
  func_0x000107c61574(uVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
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
    *(undefined **)(unaff_x20 + 0x68) = puVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb42b8);
  (*pcVar1)();
}



/* Entry: 101eb42b8; end: 101eb434b;  */

void FUN_101eb42b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 101eb434c; end: 101eb4393;  */

undefined8 FUN_101eb434c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_101eb9cb4();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 101eb4394; end: 101eb43df;  */

undefined1  [16] FUN_101eb4394(void)

{
  return ZEXT816(0x110495868);
}



/* Entry: 101eb43e0; end: 101eb50fb;  */

void FUN_101eb43e0(long *param_1,long param_2)

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
  func_0x0001002ce63c();
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
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  puVar1 = PTR_PTR_1126a9758;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  uVar18 = uStack_f8;
  func_0x000107c61174(uStack_f8);
  uVar19 = uStack_100;
  func_0x000107c61174();
  uVar20 = uStack_108;
  func_0x000107c61174();
  uVar21 = uStack_110;
  func_0x000107c61174();
  uVar22 = uStack_118;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar23 = auStack_70[0];
  func_0x000107c61174();
  uVar26 = 0xd000000000000010;
  uVar24 = uVar26;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar24);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef27f00);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef22380);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f017f00);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar24);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar24);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar26);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar24);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar25);
  uVar24 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar24);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar24);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2dce0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85c50);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar24);
  func_0x000107c3e740(uVar25);
  func_0x000107c61170(uVar23);
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
  *param_1 = param_2;
  return;
}



/* Entry: 101eb50fc; end: 101eb5147;  */

void FUN_101eb50fc(void)

{
  long unaff_x20;
  
  FUN_101eb43e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 101eb5148; end: 101eb5c97;  */

long FUN_101eb5148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
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
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_21;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_22;
  puVar1 = PTR_PTR_1126a9758;
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
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000010;
  uVar2 = uVar3;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
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
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef27f00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef22380);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f017f00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_16);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_17);
  func_0x000107c61174();
  uVar2 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_19);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_20);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2dce0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85c50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_22);
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
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  return unaff_x20;
}



/* Entry: 101eb5c98; end: 101eb5d7b;  */

void FUN_101eb5c98(void)

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
  return;
}



/* Entry: 101eb5d7c; end: 101eb5dcb;  */

undefined8 FUN_101eb5d7c(void)

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



/* Entry: 101eb5dcc; end: 101eb5dff;  */

undefined1  [16] FUN_101eb5dcc(void)

{
  return ZEXT816(0x110495930);
}



/* Entry: 101eb5e00; end: 101eb5e27;  */

void FUN_101eb5e00(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101eb5e28; end: 101eb5e2f;  */

undefined8 FUN_101eb5e28(void)

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



/* Entry: 101eb5e30; end: 101eb600b;  */

/* WARNING: Possible PIC construction at 0x000101eb5eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eb5ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eb5fec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb5ed0) */
/* WARNING: Removing unreachable block (ram,0x000101eb5ed8) */
/* WARNING: Removing unreachable block (ram,0x000101eb5eb4) */
/* WARNING: Removing unreachable block (ram,0x000101eb5ff0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb5e30(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = param_1;
  FUN_101eb662c();
  if (lVar1 == 0) {
    return;
  }
  if (param_3 == (undefined *)0x0) {
    func_0x000101eb6d24(lVar1,1);
    func_0x000107c4f9f8(param_1);
    if (param_2 != 0) {
      uVar2 = 0;
      FUN_101eba130(0);
      lVar1 = param_2;
      func_0x000107c61480(param_2,uVar2);
      if (lVar1 != 0) {
        param_3 = PTR_PTR_1126a9760;
        func_0x000107c610f8(PTR_PTR_1126a9760);
        func_0x000107c615f0(param_2);
        func_0x000107c47adc(param_3);
        func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112e38440));
        func_0x000107c615e8(param_2);
        goto code_r0x000107c61170;
      }
    }
    param_3 = PTR_PTR_1126a9760;
    func_0x000107c610f8(PTR_PTR_1126a9760);
    func_0x000107c47adc();
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112e38440));
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c3d008();
    func_0x000107c61180();
    uVar2 = 0;
    FUN_101eb6c78(0,0x112e38478,&PTR_PTR_1126c07d8);
    func_0x000107c5fc54(param_3,uVar2);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101eb600c; end: 101eb6097; -[_TtC38NativeNotificationHandlingServicesImpl27NativeNotificationAnnouncer onNotificationReady:platformData:groupingResult:] */

/* WARNING: Possible PIC construction at 0x000101eb606c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eb607c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb6070) */
/* WARNING: Removing unreachable block (ram,0x000101eb6080) */

void FUN_101eb600c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101eb5e30(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101eb6098; end: 101eb61f3;  */

/* WARNING: Possible PIC construction at 0x000101eb61bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb61c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb6098(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = param_1;
  FUN_101eb662c();
  if (lVar1 == 0) {
    return;
  }
  func_0x000101eb6d30();
  func_0x000107c4f9f8(param_1);
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_101eba130(0);
    lVar1 = param_3;
    func_0x000107c61480(param_3,uVar2);
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126a9760;
      func_0x000107c610f8(PTR_PTR_1126a9760);
      func_0x000107c615f0(param_3);
      func_0x000107c47adc(puVar3);
      func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112e38440));
      func_0x000107c615e8(param_3);
      goto LAB_101eb61b8;
    }
  }
  puVar3 = PTR_PTR_1126a9760;
  func_0x000107c610f8(PTR_PTR_1126a9760);
  func_0x000107c47adc();
  func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112e38440));
LAB_101eb61b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 101eb61f4; end: 101eb6267; -[_TtC38NativeNotificationHandlingServicesImpl27NativeNotificationAnnouncer onNotificationError:reason:platformData:] */

/* WARNING: Possible PIC construction at 0x000101eb6248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb624c) */

void FUN_101eb61f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_101eb6098(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101eb6268; end: 101eb62cf; -[_TtC38NativeNotificationHandlingServicesImpl27NativeNotificationAnnouncer onNotificationDiscarded:notification:reason:platformData:] */

/* WARNING: Possible PIC construction at 0x000101eb62b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb62b4) */

void FUN_101eb6268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  FUN_101eb6b44(param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 101eb62d0; end: 101eb632f; -[_TtC38NativeNotificationHandlingServicesImpl27NativeNotificationAnnouncer init] */

void FUN_101eb62d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NativeNotificationHandlingServicesImpl.NativeNotificationAnnouncer",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb62fc);
  (*pcVar1)();
}



/* Entry: 101eb6330; end: 101eb6367; -[_TtC38NativeNotificationHandlingServicesImpl27NativeNotificationAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb6330(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e38440));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e38448));
  return;
}



/* Entry: 101eb6368; end: 101eb6377;  */

void FUN_101eb6368(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101eb6378; end: 101eb65f3;  */

void FUN_101eb6378(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  undefined8 uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112da0590;
  func_0x0001000285a8(0x112da0590,&UNK_10d9ca8e0);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_101eb65c0:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar18 = uVar18 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar17 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101eb65f0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar18 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar18 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_101eb65c0;
        }
        uVar18 = puVar16[lVar17];
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar17 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar17 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 8);
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar14);
      func_0x000107c61434(uVar3);
    }
    uVar8 = *(ulong *)(lVar7 + 0x28);
    func_0x000107c60114();
    uVar13 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar8 = uVar8 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar8 >> 6;
    uVar9 = -1L << (uVar8 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar13 >> 6;
      do {
        uVar8 = uVar11 + 1;
        if ((uVar8 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101eb65f4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar8 != uVar9) {
          uVar11 = uVar8;
        }
        bVar4 = (bool)(uVar8 == uVar9 | bVar4);
        uVar8 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar8 == 0xffffffffffffffff);
      uVar8 = ~uVar8;
      uVar9 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 8) = uVar14;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar17;
  } while( true );
}



/* Entry: 101eb65f4; end: 101eb662b;  */

void FUN_101eb65f4(ulong param_1)

{
  undefined **ppuVar1;
  
  func_0x000107c5b634();
  if (param_1 < 7) {
    ppuVar1 = (undefined **)(&PTR_PTR_110495a30)[param_1];
  }
  else {
    ppuVar1 = &PTR_PTR_110d7f308;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ_110350fb0)
            (*ppuVar1);
  return;
}



/* Entry: 101eb662c; end: 101eb69fb;  */

/* WARNING: Type propagation algorithm not settling */

undefined ** FUN_101eb662c(undefined **param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  long extraout_x8;
  undefined ***unaff_x20;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***unaff_x23;
  undefined **ppuVar14;
  undefined *unaff_x24;
  undefined ***unaff_x25;
  undefined **ppuVar15;
  undefined *puVar16;
  long alStack_100 [10];
  undefined ***apppuStack_b0 [4];
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)0x0;
  func_0x000107c5fb10();
  ppuVar15 = pppuVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppuVar15[8]);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppuVar6 = (undefined **)((long)alStack_100 + lVar1 + 0x50);
  ppuVar8 = param_1;
  func_0x000107c4a854();
  func_0x000107c61180();
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
    pppuVar9 = (undefined ***)0x0;
    goto LAB_101eb69bc;
  }
  ppuVar4 = ppuVar8;
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar8);
  func_0x000107c5b634();
  ppuVar8 = param_1;
  func_0x000107c4fb20();
  func_0x000107c61180();
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    ppuVar14 = ppuVar8;
    func_0x000107c4fb18();
    func_0x000107c61170(ppuVar8);
  }
  ppuStack_88 = ppuVar4;
  uStack_80 = param_2;
  func_0x000107c5fb04(ppuVar6);
  func_0x000100e8b654();
  unaff_x24 = PTR___sSSN_11034da80;
  unaff_x25 = (undefined ***)0x0;
  ppuVar4 = ppuVar6;
  func_0x000107c60214(ppuVar6,0,PTR___sSSN_11034da80,ppuVar8);
  (*(code *)ppuVar15[1])(ppuVar6);
  puVar16 = PTR___sypN_11034f1a8;
  if ((ulong)unaff_x25 >> 0x3c < 0xf) {
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    ppuVar6 = ppuVar4;
    func_0x000107c5ee20(ppuVar4,unaff_x25);
    ppuStack_88 = (undefined **)0x0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar6);
    ppuVar8 = ppuStack_88;
    if (puVar5 == (undefined *)0x0) {
      ppuVar6 = ppuStack_88;
      func_0x000107c61174();
      func_0x000107c5ed30(ppuVar8);
      func_0x000107c61170(ppuVar6);
      func_0x000107c61654();
      func_0x000107c6142c(param_2);
      func_0x0001000b44c0(ppuVar4);
      puVar16 = PTR___sypN_11034f1a8;
      func_0x000107c614ac(ppuVar8);
      goto LAB_101eb688c;
    }
    func_0x000107c61174();
    func_0x000107c60234(&ppuStack_88,puVar5);
    func_0x000107c6142c(param_2);
    func_0x0001000b44c0(ppuVar4,unaff_x25);
    func_0x000107c615e8(puVar5);
    uVar7 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    ppuVar8 = (undefined **)(apppuStack_b0 + 1);
    unaff_x25 = &ppuStack_88;
    func_0x000107c6147c(ppuVar8,unaff_x25,puVar16 + 8,uVar7,6);
    pppuVar3 = apppuStack_b0[1];
    if (((ulong)ppuVar8 & 1) == 0) goto LAB_101eb688c;
  }
  else {
    func_0x000107c6142c(param_2);
    unaff_x25 = pppuVar3;
LAB_101eb688c:
    pppuVar3 = (undefined ***)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  ppuVar8 = &PTR____CFConstantStringClassReference_110f9eff8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9eff8);
  pppuVar9 = unaff_x25;
  FUN_101eb65f4();
  puStack_90 = unaff_x24;
  apppuStack_b0[1] = (undefined ***)param_1;
  apppuStack_b0[2] = pppuVar9;
  func_0x000100102924(apppuStack_b0 + 1,&ppuStack_88);
  pppuVar9 = pppuVar3;
  func_0x000107c61558(pppuVar3);
  apppuStack_b0[1] = pppuVar3;
  func_0x0001001029e8(&ppuStack_88,ppuVar8,unaff_x25,pppuVar9);
  pppuVar9 = unaff_x25;
  func_0x000107c6142c();
  pppuVar3 = apppuStack_b0[1];
  func_0x0001048522c4();
  ppuVar8 = *pppuVar9;
  ppuVar15 = pppuVar9[1];
  puStack_90 = PTR___ss5Int64VN_11034ee50;
  apppuStack_b0[1] = (undefined ***)ppuVar14;
  func_0x000100102924(apppuStack_b0 + 1,&ppuStack_88);
  func_0x000107c61434(ppuVar15);
  pppuVar9 = pppuVar3;
  func_0x000107c61558(pppuVar3);
  apppuStack_b0[1] = pppuVar3;
  func_0x0001001029e8(&ppuStack_88,ppuVar8,ppuVar15,pppuVar9);
  func_0x000107c6142c(ppuVar15);
  unaff_x20 = apppuStack_b0[1];
  pppuVar3 = apppuStack_b0[1];
  func_0x00010018cc3c();
  param_1 = (undefined **)PTR_PTR_1126b1370;
  func_0x000107c610f8();
  unaff_x23 = pppuVar3;
  func_0x000107c5f9dc(pppuVar3,PTR___ss11AnyHashableVN_11034e448,puVar16 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(pppuVar3);
  ppuVar8 = param_1;
  func_0x000107c47b2c();
  func_0x000107c6142c(unaff_x20);
  pppuVar9 = unaff_x23;
  func_0x000107c61170();
LAB_101eb69bc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar8;
  }
  func_0x000107c60e78();
  *(undefined ***)((long)alStack_100 + lVar1) = ppuVar6;
  *(undefined ****)((long)alStack_100 + lVar1 + 8) = unaff_x25;
  *(undefined **)((long)alStack_100 + lVar1 + 0x10) = unaff_x24;
  *(undefined ****)((long)alStack_100 + lVar1 + 0x18) = unaff_x23;
  *(undefined ***)((long)alStack_100 + lVar1 + 0x20) = param_1;
  *(undefined ****)((long)alStack_100 + lVar1 + 0x28) = pppuVar3;
  *(undefined ****)((long)alStack_100 + lVar1 + 0x30) = unaff_x20;
  *(undefined ***)((long)alStack_100 + lVar1 + 0x38) = ppuVar8;
  *(undefined1 **)((long)alStack_100 + lVar1 + 0x40) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_100 + lVar1 + 0x48) = FUN_101eb69fc;
  pppuVar3 = (undefined ***)((ulong)pppuVar9 & 0xffffffffffffff8);
  if ((ulong)pppuVar9 >> 0x3e == 0) {
    pppuVar12 = (undefined ***)pppuVar3[2];
  }
  else {
    pppuVar12 = pppuVar3;
    if ((undefined ***)0x7fffffffffffffff < pppuVar9) {
      pppuVar12 = pppuVar9;
    }
    func_0x000107c60480();
  }
  pppuVar13 = (undefined ***)0x0;
  while( true ) {
    if (pppuVar12 == pppuVar13) {
      pppuVar13 = (undefined ***)0x0;
      while( true ) {
        if (pppuVar12 == pppuVar13) {
          return (undefined **)(undefined *)0x1;
        }
        if (((ulong)pppuVar9 & 0xc000000000000001) == 0) {
          if (pppuVar3[2] <= pppuVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb6b30);
            (*pcVar2)();
          }
          pppuVar10 = (undefined ***)pppuVar9[(long)pppuVar13 + 4];
          func_0x000107c61174();
        }
        else {
          pppuVar10 = pppuVar13;
          FUN_101eb8624(pppuVar13,pppuVar9);
        }
        if (SCARRY8((long)pppuVar13,1)) break;
        pppuVar11 = pppuVar10;
        func_0x000107c5d0f0();
        func_0x000107c61170(pppuVar10);
        pppuVar13 = (undefined ***)((long)pppuVar13 + 1);
        if (pppuVar11 == (undefined ***)0x0) {
          return (undefined **)(undefined *)0x2;
        }
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb6b08);
      (*pcVar2)();
    }
    if (((ulong)pppuVar9 & 0xc000000000000001) == 0) {
      if (pppuVar3[2] <= pppuVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb6b2c);
        (*pcVar2)();
      }
      pppuVar10 = (undefined ***)pppuVar9[(long)pppuVar13 + 4];
      func_0x000107c61174();
    }
    else {
      pppuVar10 = pppuVar13;
      FUN_101eb8624(pppuVar13,pppuVar9);
    }
    if (SCARRY8((long)pppuVar13,1)) break;
    pppuVar11 = pppuVar10;
    func_0x000107c5d0f0();
    func_0x000107c61170(pppuVar10);
    pppuVar13 = (undefined ***)((long)pppuVar13 + 1);
    if (pppuVar11 == (undefined ***)0x1) {
      return (undefined **)(undefined *)0x7;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb6a9c);
  (*pcVar2)();
}



/* Entry: 101eb69fc; end: 101eb6b43;  */

undefined8 FUN_101eb69fc(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar4 = uVar6;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar5 = 0;
  while( true ) {
    if (uVar4 == uVar5) {
      uVar5 = 0;
      while( true ) {
        if (uVar4 == uVar5) {
          return 1;
        }
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb6b30);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar2 = uVar5;
          FUN_101eb8624(uVar5,param_1);
        }
        if (SCARRY8(uVar5,1)) break;
        uVar3 = uVar2;
        func_0x000107c5d0f0();
        func_0x000107c61170(uVar2);
        uVar5 = uVar5 + 1;
        if (uVar3 == 0) {
          return 2;
        }
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb6b08);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb6b2c);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = uVar5;
      FUN_101eb8624(uVar5,param_1);
    }
    if (SCARRY8(uVar5,1)) break;
    uVar3 = uVar2;
    func_0x000107c5d0f0();
    func_0x000107c61170(uVar2);
    uVar5 = uVar5 + 1;
    if (uVar3 == 1) {
      return 7;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb6a9c);
  (*pcVar1)();
}



/* Entry: 101eb6b44; end: 101eb6c77;  */

/* WARNING: Possible PIC construction at 0x000101eb6c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb6c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb6b44(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = param_1;
  FUN_101eb662c();
  if (lVar1 == 0) {
    return;
  }
  func_0x000101eb6d18();
  func_0x000107c4f9f8(param_1);
  if (param_2 != 0) {
    uVar2 = 0;
    FUN_101eba130(0);
    lVar1 = param_2;
    func_0x000107c61480(param_2,uVar2);
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126a9760;
      func_0x000107c610f8(PTR_PTR_1126a9760);
      func_0x000107c615f0(param_2);
      func_0x000107c47adc(puVar3);
      func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112e38440));
      func_0x000107c615e8(param_2);
      goto LAB_101eb6c44;
    }
  }
  puVar3 = PTR_PTR_1126a9760;
  func_0x000107c610f8(PTR_PTR_1126a9760);
  func_0x000107c47adc();
  func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112e38440));
LAB_101eb6c44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 101eb6c78; end: 101eb6cb7;  */

void FUN_101eb6c78(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101eb6cb8; end: 101eb6ccb;  */

void FUN_101eb6cb8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110495a20;
  if (lRam0000000112e38480 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e38480 = param_1;
  }
  return;
}



/* Entry: 101eb6ccc; end: 101eb6d0f;  */

void FUN_101eb6ccc(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101eb6d10; end: 101eb6d3b;  */

bool FUN_101eb6d10(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101eb6d3c; end: 101eb6e53;  */

/* WARNING: Possible PIC construction at 0x000101eb6dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eb6e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb6db0) */
/* WARNING: Removing unreachable block (ram,0x000101eb6e2c) */

void FUN_101eb6d3c(long param_1,long param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  lVar2 = param_2;
  func_0x000107c5b634();
  FUN_101eb6f4c();
  lVar3 = lVar2;
  FUN_101eb7090(param_2);
  func_0x000107c4f6e0();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar5 = 0x6c696e;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c5fadc(param_2,lVar3);
    func_0x000107c6142c(lVar3);
    func_0x000107c5fadc(lVar1,lVar2);
    func_0x000107c6142c(lVar2);
    func_0x000107c5fadc(0x6c696e,0xe300000000000000);
    func_0x000107c6142c(0xe300000000000000);
    (*param_3)(uVar4,param_2,lVar1,uVar5,1);
  }
  else {
    func_0x000107c5faec();
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101eb6e54; end: 101eb6f1f;  */

/* WARNING: Possible PIC construction at 0x000101eb6ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eb6f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb6ea8) */
/* WARNING: Removing unreachable block (ram,0x000101eb6f08) */

void FUN_101eb6e54(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107c5b634();
  FUN_101eb6f4c();
  func_0x000107c4f6e0();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar3 = 0x6c696e;
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c5fadc(0x6c696e,0xe300000000000000);
    func_0x000107c6142c(0xe300000000000000);
    func_0x000107b1e564(uVar2,lVar1,uVar3,1);
  }
  else {
    func_0x000107c5faec();
    lVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101eb6f20; end: 101eb6f4b;  */

void FUN_101eb6f20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eb6f4c; end: 101eb708f;  */

undefined1  [16] FUN_101eb6f4c(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar5._8_8_ = 0xe400000000000000;
        auVar5._0_8_ = 0x736e7061;
        return auVar5;
      }
      if (param_1 == 1) {
        auVar2._8_8_ = 0xe400000000000000;
        auVar2._0_8_ = 0x70696f76;
        return auVar2;
      }
    }
    else {
      if (param_1 == 2) {
        auVar6._8_8_ = 0xe500000000000000;
        auVar6._0_8_ = 0x6c61636f6c;
        return auVar6;
      }
      if (param_1 == 3) {
        auVar3._8_8_ = 0xe600000000000000;
        auVar3._0_8_ = 0x78656c707564;
        return auVar3;
      }
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar8._8_8_ = 0xe800000000000000;
      auVar8._0_8_ = 0x797265766f636572;
      return auVar8;
    }
    if (param_1 == 5) {
      auVar4._8_8_ = 0xe90000000000006e;
      auVar4._0_8_ = 0x6f69736e65747865;
      return auVar4;
    }
  }
  else {
    if (param_1 == 6) {
      auVar7._8_8_ = 0xe700000000000000;
      auVar7._0_8_ = 0x6e776f6e6b6e75;
      return auVar7;
    }
    if (param_1 == 7) {
      auVar9._8_8_ = 0xe700000000000000;
      auVar9._0_8_ = 0x65766972646572;
      return auVar9;
    }
    if (param_1 == 8) {
      auVar1._8_8_ = 0xe800000000000000;
      auVar1._0_8_ = 0x7265646e696d6572;
      return auVar1;
    }
  }
  auVar10._8_8_ = 0xed0000656372756f;
  auVar10._0_8_ = 0x5364696c61766e69;
  return auVar10;
}



/* Entry: 101eb7090; end: 101eb7253;  */

undefined1  [16] FUN_101eb7090(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar3._8_8_ = 0xe700000000000000;
        auVar3._0_8_ = 0x6e776f6e6b6e75;
        return auVar3;
      }
      if (param_1 == 1) {
        auVar6._8_8_ = 0xe700000000000000;
        auVar6._0_8_ = 0x79616c70736964;
        return auVar6;
      }
    }
    else {
      if (param_1 == 2) {
        auVar4._8_8_ = 0x800000010f017ff0;
        auVar4._0_8_ = 0xd000000000000022;
        return auVar4;
      }
      if (param_1 == 3) {
        auVar8._8_8_ = 0xe800000000000000;
        auVar8._0_8_ = 0x6465707075646564;
        return auVar8;
      }
    }
  }
  else {
    if (param_1 < 6) {
      if (param_1 == 4) {
        pcVar2 = "nativeUnknownError";
      }
      else {
        if (param_1 != 5) goto LAB_101eb71bc;
        pcVar2 = "nativeStorageError";
      }
      auVar7._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
      auVar7._0_8_ = 0xd000000000000012;
      return auVar7;
    }
    if (param_1 == 6) {
      auVar5._8_8_ = 0x800000010f017f90;
      auVar5._0_8_ = 0xd000000000000019;
      return auVar5;
    }
    if (param_1 == 7) {
      auVar9._8_8_ = 0x800000010f017f70;
      auVar9._0_8_ = 0xd00000000000001a;
      return auVar9;
    }
  }
LAB_101eb71bc:
  FUN_101eb6cb8(0);
  func_0x000107c60614();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb71f4);
  (*pcVar1)();
}



/* Entry: 101eb7254; end: 101eb73e3;  */

/* WARNING: Possible PIC construction at 0x000101eb7378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eb7388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb737c) */
/* WARNING: Removing unreachable block (ram,0x000101eb738c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb7254(undefined *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = param_1;
  FUN_101eb8d6c();
  if (puVar2 != (undefined *)0x0) {
    FUN_101eb6e54(param_1);
    if (param_2 == 0) {
      func_0x000107c4d82c(*(undefined8 *)(unaff_x20 + 0x10));
    }
    else {
      puVar2 = PTR_PTR_1126c0868;
      func_0x000107c610f8();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101228174;
      puStack_58 = &UNK_110495b60;
      ppuVar3 = &puStack_70;
      lStack_50 = param_2;
      uStack_48 = param_3;
      func_0x000107c60bc4(ppuVar3);
      func_0x000101eb8fc4(param_2,param_3);
      func_0x000107c6157c(param_3);
      func_0x000107c45ee4();
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61574(uStack_48);
      lVar4 = 0;
      FUN_101eba130();
      lVar5 = lVar4;
      func_0x000107c610f8();
      *(undefined **)(lVar5 + _DAT_112e38798) = puVar2;
      puVar1 = PTR_s_init_1125d9248;
      lStack_80 = lVar5;
      lStack_78 = lVar4;
      func_0x000107c61174(puVar2);
      func_0x000107c61154(&lStack_80,puVar1);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c61174();
      func_0x000107c4d82c(uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 101eb73e4; end: 101eb7483; -[_TtC38NativeNotificationHandlingServicesImpl25NativeNotificationHandler notificationReceived:completion:] */

void FUN_101eb73e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_110495b48;
    func_0x000107c613fc(&UNK_110495b48,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x101eb883c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_101eb7254(param_3,uVar2,puVar1);
  FUN_101eb882c(uVar2,puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101eb7484; end: 101eb75a7;  */

/* WARNING: Possible PIC construction at 0x000101eb7550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eb7580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb7554) */
/* WARNING: Removing unreachable block (ram,0x000101eb7584) */

void FUN_101eb7484(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_x3;
  long unaff_x20;
  
  if (in_x3 == 10) {
    func_0x000107b1e884();
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  else {
    func_0x000107b1e80c(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x18),1);
  }
  uVar1 = 0;
  func_0x0001048535c0(0);
  func_0x00010485321c(in_x3,uVar1);
  puVar2 = PTR_PTR_1126c0828;
  func_0x000107c610f8(PTR_PTR_1126c0828);
  func_0x000107c5fadc(in_x3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c45704(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 101eb75a8; end: 101eb7697; -[_TtC38NativeNotificationHandlingServicesImpl25NativeNotificationHandler redriveWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb75a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_40;
  func_0x000107c60bc4();
  puVar2 = &UNK_110495af8;
  func_0x000107c613fc(&UNK_110495af8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  puVar3 = &UNK_110495b20;
  func_0x000107c613fc(&UNK_110495b20,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101eb87f4;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  lVar4 = 0;
  func_0x000101eb800c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112e385e8);
  *puVar1 = FUN_101eb8808;
  puVar1[1] = puVar3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  func_0x000107c4fb24(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(plVar6);
  return;
}



/* Entry: 101eb7698; end: 101eb76a3; -[_TtC38NativeNotificationHandlingServicesImpl25NativeNotificationHandler redriveReminders] */

void FUN_101eb7698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c124cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_redriveReminders__112626d50,0);
  return;
}



/* Entry: 101eb76a4; end: 101eb76ab; -[_TtC38NativeNotificationHandlingServicesImpl25NativeNotificationHandler clearReminders] */

void FUN_101eb76a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3bed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_clearReminders_1125ac958);
  return;
}



/* Entry: 101eb76ac; end: 101eb7cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb76ac(undefined **param_1,undefined **param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  long extraout_x8;
  long lVar17;
  undefined **ppuVar18;
  undefined **unaff_x22;
  undefined **ppuVar19;
  long alStack_150 [8];
  undefined **appuStack_110 [4];
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (undefined **)0x0;
  ppuStack_f0 = param_3;
  ppuStack_e8 = param_2;
  func_0x000107c5fb10();
  puStack_d0 = ppuVar5[-1];
  ppuStack_c8 = ppuVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puStack_d0 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppuVar5 = (undefined **)((long)appuStack_110 + lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((ulong)param_1 >> 0x3e == 0) {
    ppuVar18 = *(undefined ***)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuVar18 = (undefined **)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined **)0x7fffffffffffffff < param_1) {
      ppuVar18 = param_1;
    }
    func_0x000107c60480();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
  if (ppuVar18 == (undefined **)0x0) {
    lVar17 = *(long *)(puVar12 + 0x10);
  }
  else {
    ppuVar19 = (undefined **)0x0;
    appuStack_110[2] = &PTR____CFConstantStringClassReference_110dad058;
    appuStack_110[3] = &PTR____CFConstantStringClassReference_110e12538;
    uStack_b8 = (ulong)param_1 & 0xc000000000000001;
    uStack_c0 = (ulong)param_1 & 0xffffffffffffff8;
    ppuStack_d8 = param_1;
    do {
      if (uStack_b8 == 0) {
        if (*(undefined ***)(uStack_c0 + 0x10) <= ppuVar19) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101eb7c54);
          (*pcVar4)();
        }
        unaff_x22 = (undefined **)param_1[(long)ppuVar19 + 4];
        func_0x000107c61174();
        ppuVar8 = param_2;
      }
      else {
        param_3 = &PTR_PTR_1126c07f0;
        unaff_x22 = ppuVar19;
        ppuVar8 = param_1;
        FUN_101eb8638();
      }
      ppuVar1 = (undefined **)((long)ppuVar19 + 1);
      if (SCARRY8((long)ppuVar19,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101eb7c50);
        (*pcVar4)();
      }
      if (1 < *(ulong *)(puVar12 + 0x10)) {
        func_0x000107c61170(unaff_x22);
        break;
      }
      ppuVar16 = unaff_x22;
      func_0x000107c4a854();
      func_0x000107c61180();
      if (ppuVar16 == (undefined **)0x0) {
        func_0x000107c61170(unaff_x22);
        param_2 = ppuVar8;
        goto LAB_101eb7788;
      }
      ppuVar6 = ppuVar16;
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar16);
      ppuStack_90 = ppuVar6;
      ppuStack_88 = ppuVar8;
      func_0x000107c5fb04(ppuVar5);
      func_0x000100e8b654();
      param_2 = (undefined **)0x0;
      ppuVar16 = ppuVar5;
      param_3 = (undefined **)PTR___sSSN_11034da80;
      func_0x000107c60214();
      ppuVar6 = ppuStack_c8;
      (**(code **)(puStack_d0 + 8))(ppuVar5);
      func_0x000107c6142c(ppuVar8);
      if ((ulong)param_2 >> 0x3c < 0xf) {
        puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x000107c61168();
        ppuVar8 = ppuVar16;
        func_0x000107c5ee20(ppuVar16,param_2);
        ppuStack_90 = (undefined **)0x0;
        param_3 = ppuVar8;
        func_0x000107c3ab8c();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar8);
        ppuVar8 = ppuStack_90;
        if (puVar7 == (undefined *)0x0) {
          ppuVar5 = ppuStack_90;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(ppuVar5);
          func_0x000107c61654();
          func_0x000107c61170(unaff_x22);
          func_0x0001000b44c0(ppuVar16,param_2);
          func_0x000107c6142c(puVar12);
          ppuVar5 = ppuStack_f0;
          (*(code *)ppuStack_e8)(0,0);
          ppuVar19 = ppuVar8;
          func_0x000107c614ac();
          goto LAB_101eb7ca0;
        }
        func_0x000107c61174();
        func_0x000107c60234(&ppuStack_90,puVar7);
        func_0x000107c615e8(puVar7);
        func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
        uVar9 = 0;
        pppuVar11 = &ppuStack_90;
        param_3 = (undefined **)(PTR___sypN_11034f1a8 + 8);
        func_0x000107c6147c();
        ppuVar8 = ppuStack_b0;
        if ((uVar9 & 1) == 0) {
          func_0x0001000b44c0(ppuVar16);
          ppuVar6 = param_2;
          goto LAB_101eb7a88;
        }
        ppuVar6 = appuStack_110[3];
        puStack_e0 = puVar12;
        func_0x000107c5faec(appuStack_110[3]);
        if (ppuVar8[2] == (undefined *)0x0) {
          func_0x000107c61434(ppuVar8);
        }
        else {
          func_0x000107c61434(ppuVar8);
          pppuVar15 = pppuVar11;
          func_0x000100029284(ppuVar6);
          puVar12 = puStack_e0;
          if (((ulong)pppuVar15 & 1) != 0) {
            func_0x0001000bb420(ppuVar8[7] + (long)ppuVar6 * 0x20,&ppuStack_90);
            func_0x000107c6142c(ppuVar8);
            func_0x000107c6142c(pppuVar11);
            uVar9 = 0;
            pppuVar11 = &ppuStack_90;
            param_3 = (undefined **)(PTR___sypN_11034f1a8 + 8);
            func_0x000107c6147c();
            ppuVar6 = ppuStack_b0;
            if ((uVar9 & 1) == 0) {
              func_0x000107c61170(unaff_x22);
              func_0x0001000b44c0(ppuVar16);
              func_0x000107c6142c(ppuVar8);
              param_1 = ppuStack_d8;
            }
            else {
              appuStack_110[1] = ppuStack_a8;
              ppuVar10 = appuStack_110[2];
              func_0x000107c5faec(appuStack_110[2]);
              if ((ppuVar8[2] == (undefined *)0x0) ||
                 (pppuVar15 = pppuVar11, func_0x000100029284(), ((ulong)pppuVar15 & 1) == 0)) {
                func_0x000107c61170(unaff_x22);
                func_0x0001000b44c0(ppuVar16);
                func_0x000107c6142c(pppuVar11);
                func_0x000107c6142c(appuStack_110[1]);
              }
              else {
                func_0x0001000bb420(ppuVar8[7] + (long)ppuVar10 * 0x20,&ppuStack_90);
                func_0x000107c6142c(ppuVar8);
                func_0x000107c6142c(pppuVar11);
                pppuVar11 = &ppuStack_b0;
                param_3 = (undefined **)(PTR___sypN_11034f1a8 + 8);
                func_0x000107c6147c(pppuVar11,&ppuStack_90,param_3,PTR___sSSN_11034da80,6);
                ppuVar8 = ppuStack_a8;
                if (((ulong)pppuVar11 & 1) != 0) {
                  appuStack_110[0] = ppuStack_b0;
                  ppuStack_90 = ppuVar6;
                  ppuStack_88 = appuStack_110[1];
                  func_0x000107c5fb78(0x5f,0xe100000000000000);
                  func_0x000107c5fb78(appuStack_110[0],ppuVar8);
                  func_0x000107c6142c(ppuVar8);
                  ppuVar6 = ppuStack_88;
                  ppuVar8 = ppuStack_90;
                  puVar12 = puStack_e0;
                  func_0x000107c61558();
                  appuStack_110[1] = ppuVar6;
                  if (((ulong)puVar12 & 1) == 0) {
                    puVar12 = (undefined *)0x0;
                    param_3 = (undefined **)0x1;
                    func_0x0001000d182c(0,*(long *)(puStack_e0 + 0x10) + 1);
                    puStack_e0 = puVar12;
                  }
                  uVar9 = *(ulong *)(puStack_e0 + 0x10);
                  if (*(ulong *)(puStack_e0 + 0x18) >> 1 <= uVar9) {
                    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_e0 + 0x18));
                    param_3 = (undefined **)0x1;
                    func_0x0001000d182c(puVar12,uVar9 + 1,1,puStack_e0);
                    puStack_e0 = puVar12;
                  }
                  puVar12 = puStack_e0;
                  *(ulong *)(puStack_e0 + 0x10) = uVar9 + 1;
                  *(undefined ***)(puStack_e0 + uVar9 * 0x10 + 0x20) = ppuVar8;
                  *(undefined ***)(puStack_e0 + uVar9 * 0x10 + 0x28) = appuStack_110[1];
                  func_0x000107c61170(unaff_x22);
                  func_0x0001000b44c0(ppuVar16);
                  puStack_98 = puVar12;
                  param_1 = ppuStack_d8;
                  goto LAB_101eb7788;
                }
                func_0x000107c61170(unaff_x22);
                func_0x0001000b44c0(ppuVar16);
                ppuVar8 = appuStack_110[1];
              }
              func_0x000107c6142c(ppuVar8);
              param_1 = ppuStack_d8;
              puVar12 = puStack_e0;
            }
            goto LAB_101eb7788;
          }
        }
        puVar12 = puStack_e0;
        func_0x000107c61170(unaff_x22);
        func_0x0001000b44c0(ppuVar16,param_2);
        func_0x000107c6142c(pppuVar11);
        param_2 = (undefined **)0x2;
        func_0x000107c61430(ppuVar8);
        param_1 = ppuStack_d8;
      }
      else {
LAB_101eb7a88:
        param_2 = ppuVar6;
        func_0x000107c61170(unaff_x22);
        param_1 = ppuStack_d8;
      }
LAB_101eb7788:
      ppuVar19 = (undefined **)((long)ppuVar19 + 1);
    } while (ppuVar1 != ppuVar18);
    lVar17 = *(long *)(puVar12 + 0x10);
  }
  if (lVar17 == 0) {
    ppuVar16 = (undefined **)0x0;
  }
  else {
    param_3 = (undefined **)0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    ppuVar5 = param_3;
    func_0x00010011d734();
    ppuVar16 = (undefined **)0xe100000000000000;
    func_0x000107c5fa80(0x2c,0xe100000000000000,param_3,ppuVar5);
  }
  ppuVar5 = ppuStack_f0;
  (*(code *)ppuStack_e8)();
  func_0x000107c6142c(puVar12);
  ppuVar19 = ppuVar16;
  func_0x000107c6142c();
  ppuVar8 = ppuVar18;
LAB_101eb7ca0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    puVar14 = (undefined1 *)((long)alStack_150 + lVar3);
    *(undefined ***)((long)alStack_150 + lVar3 + 0x10) = unaff_x22;
    *(undefined ***)((long)alStack_150 + lVar3 + 0x18) = ppuVar8;
    *(undefined ***)((long)alStack_150 + lVar3 + 0x20) = ppuVar5;
    *(undefined ***)((long)alStack_150 + lVar3 + 0x28) = ppuVar16;
    *(undefined1 **)((long)alStack_150 + lVar3 + 0x30) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_150 + lVar3 + 0x38) = FUN_101eb7cdc;
    func_0x000107c60bc4();
    puVar12 = &UNK_110495aa8;
    func_0x000107c613fc(&UNK_110495aa8,0x18,7);
    *(undefined ***)(puVar12 + 0x10) = param_3;
    puVar7 = &UNK_110495ad0;
    func_0x000107c613fc(&UNK_110495ad0,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_101eb804c;
    *(undefined **)(puVar7 + 0x18) = puVar12;
    lVar13 = 0;
    func_0x000101eb802c();
    lVar17 = lVar13;
    func_0x000107c610f8();
    puVar2 = (undefined8 *)(lVar17 + _DAT_112e38618);
    *puVar2 = 0x101eb8054;
    puVar2[1] = puVar7;
    puVar7 = PTR_s_init_1125d9248;
    *(long *)((long)alStack_150 + lVar3) = lVar17;
    *(long *)((long)alStack_150 + lVar3 + 8) = lVar13;
    func_0x000107c6157c(ppuVar19);
    func_0x000107c6157c(puVar12);
    func_0x000107c61154((long)alStack_150 + lVar3,puVar7);
    func_0x000107c43140(ppuVar19[2]);
    func_0x000107c61574(ppuVar19);
    func_0x000107c61574(puVar12);
    func_0x000107c61170(puVar14);
    return;
  }
  return;
}



/* Entry: 101eb7cdc; end: 101eb7e3f; -[_TtC38NativeNotificationHandlingServicesImpl25NativeNotificationHandler getLatestNotificationInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb7cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_40;
  func_0x000107c60bc4();
  puVar2 = &UNK_110495aa8;
  func_0x000107c613fc(&UNK_110495aa8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  puVar3 = &UNK_110495ad0;
  func_0x000107c613fc(&UNK_110495ad0,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101eb804c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  lVar4 = 0;
  func_0x000101eb802c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112e38618);
  *puVar1 = 0x101eb8054;
  puVar1[1] = puVar3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  func_0x000107c43140(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(plVar6);
  return;
}



/* Entry: 101eb7e40; end: 101eb7e7f; -[_TtCC38NativeNotificationHandlingServicesImpl25NativeNotificationHandlerP33_10B805AA628AE64F2BB402C34F76E57F15RedriveCallback onComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb7e40(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112e385e8);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101eb7e80; end: 101eb7eab; -[_TtCC38NativeNotificationHandlingServicesImpl25NativeNotificationHandlerP33_10B805AA628AE64F2BB402C34F76E57F15RedriveCallback init] */

void FUN_101eb7e80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NativeNotificationHandlingServicesImpl.RedriveCallback",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb7eac);
  (*pcVar1)();
}



/* Entry: 101eb7eac; end: 101eb7eb7;  */

void FUN_101eb7eac(void)

{
  (*(code *)0x101eb800c)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101eb7eb8; end: 101eb7ecb; -[_TtCC38NativeNotificationHandlingServicesImpl25NativeNotificationHandlerP33_10B805AA628AE64F2BB402C34F76E57F15RedriveCallback .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb7eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e385e8 + 8));
  return;
}



/* Entry: 101eb7ecc; end: 101eb7f4b; -[_TtCC38NativeNotificationHandlingServicesImpl25NativeNotificationHandlerP33_10B805AA628AE64F2BB402C34F76E57F38FetchLastNotificationsReceivedCallback onComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb7ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_101eb8fdc(0,0x112e38648,&PTR_PTR_1126c07f0);
  func_0x000107c5fc54(param_3,uVar2);
  pcVar1 = *(code **)(param_1 + _DAT_112e38618);
  func_0x000107c61174(param_1);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101eb7f4c; end: 101eb7f77; -[_TtCC38NativeNotificationHandlingServicesImpl25NativeNotificationHandlerP33_10B805AA628AE64F2BB402C34F76E57F38FetchLastNotificationsReceivedCallback init] */

void FUN_101eb7f4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NativeNotificationHandlingServicesImpl.FetchLastNotificationsReceivedCallback"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb7f78);
  (*pcVar1)();
}



/* Entry: 101eb7f78; end: 101eb7f83;  */

void FUN_101eb7f78(void)

{
  (*(code *)0x101eb802c)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101eb7f84; end: 101eb7fbb;  */

void FUN_101eb7f84(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101eb7fbc; end: 101eb7fcf; -[_TtCC38NativeNotificationHandlingServicesImpl25NativeNotificationHandlerP33_10B805AA628AE64F2BB402C34F76E57F38FetchLastNotificationsReceivedCallback .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb7fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e38618 + 8));
  return;
}



/* Entry: 101eb7fd0; end: 101eb804b;  */

void FUN_101eb7fd0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eb804c; end: 101eb805b;  */

void FUN_101eb804c(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101eb805c; end: 101eb8267;  */

undefined * FUN_101eb805c(undefined *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *unaff_x21;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lStack_130;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [40];
  undefined auStack_80 [8];
  undefined *puStack_78;
  undefined *apuStack_70 [2];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  uVar13 = uVar12 * 8;
  uStack_50 = param_2;
  if ((param_1[0x20] & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar4 = 2;
    param_4 = (code *)0x0;
    func_0x000100029b9c(2,0xf,4);
    func_0x000107c6157c(param_1);
    if ((iVar4 == 0) || (uVar11 = uVar13, func_0x000107c61594(uVar13,8), (uVar11 & 1) == 0)) {
      func_0x000107c6158c(uVar13,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      param_4 = (code *)0x101eb8fd4;
      FUN_101eb884c(apuStack_70,uVar13,uVar12,param_1,0x101eb8fd4,auStack_60,&puStack_78);
      puVar5 = apuStack_70[0];
      if (unaff_x21 != (undefined *)0x0) {
        puVar5 = puStack_78;
      }
      uVar12 = 0xffffffffffffffff;
      puVar8 = (undefined *)0xffffffffffffffff;
      func_0x000107c61590(uVar13);
      puVar1 = puVar5;
      goto joined_r0x000101eb8220;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = auStack_80 + -(uVar13 + 0xf & 0x3ffffffffffffff0);
  func_0x000107c60ee4(puVar5,uVar13);
  puVar8 = param_1;
  FUN_101eb8a84();
  puVar1 = unaff_x21;
joined_r0x000101eb8220:
  if (unaff_x21 == (undefined *)0x0) {
    func_0x000107c61574();
  }
  else {
    iVar4 = 2;
    uVar12 = 0x12;
    puVar8 = (undefined *)0x0;
    param_4 = (code *)0x0;
    func_0x000100029b9c();
    if (iVar4 != 0) {
      uVar12 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar8 = PTR___ss5ErrorWS_11034ee10;
      func_0x000107c61658(&puStack_78);
    }
    func_0x000107c61574();
    puVar5 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  func_0x000107c60e78();
  lStack_130 = 0;
  uVar11 = 1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((puVar8[0x20] & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(puVar8 + 0x40);
  lVar10 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar14 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb83e8);
          (*pcVar2)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar14) {
          FUN_101eb83e8(param_1,uVar12,lStack_130,puVar8);
          return param_1;
        }
        uVar13 = *(ulong *)((long)(puVar8 + 0x40) + lVar14 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar13 == 0);
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar14 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9);
    uVar15 = uVar9 | lVar14 << 6;
    func_0x0001007bbd18(*(long *)(puVar8 + 0x30) + uVar15 * 0x28,auStack_108);
    func_0x0001000bb420(*(long *)(puVar8 + 0x38) + uVar15 * 0x20,auStack_128);
    puVar6 = auStack_108;
    (*param_4)(puVar6,auStack_128);
    func_0x000100183ab8(auStack_128);
    puVar7 = auStack_108;
    func_0x0001007bbff0(puVar7);
    if (unaff_x21 != (undefined *)0x0) {
      return puVar7;
    }
    lVar10 = lVar14;
    if (((ulong)puVar6 & 1) != 0) {
      uVar15 = (uVar9 & 0xffffffffffffffc0 | lVar14 << 6) >> 3;
      *(ulong *)(param_1 + uVar15) = *(ulong *)(param_1 + uVar15) | 1L << (uVar9 & 0x3f);
      bVar3 = SCARRY8(lStack_130,1);
      lStack_130 = lStack_130 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb83b0);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 101eb8268; end: 101eb83e7;  */

void FUN_101eb8268(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x21;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  lStack_b0 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(param_3 + 0x40);
  lVar5 = 0;
  do {
    if (uVar8 == 0) {
      do {
        lVar7 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb83e8);
          (*pcVar1)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar7) {
          FUN_101eb83e8(param_1,param_2,lStack_b0,param_3);
          return;
        }
        uVar8 = ((ulong *)(param_3 + 0x40))[lVar7];
        lVar5 = lVar5 + 1;
      } while (uVar8 == 0);
      uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
    }
    else {
      uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar7 = lVar5;
    }
    uVar4 = LZCOUNT(uVar4);
    uVar9 = uVar4 | lVar7 << 6;
    func_0x0001007bbd18(*(long *)(param_3 + 0x30) + uVar9 * 0x28,auStack_88);
    func_0x0001000bb420(*(long *)(param_3 + 0x38) + uVar9 * 0x20,auStack_a8);
    puVar3 = auStack_88;
    (*param_4)(puVar3,auStack_a8);
    func_0x000100183ab8(auStack_a8);
    func_0x0001007bbff0(auStack_88);
    if (unaff_x21 != 0) {
      return;
    }
    lVar5 = lVar7;
    if (((ulong)puVar3 & 1) != 0) {
      uVar9 = (uVar4 & 0xffffffffffffffc0 | lVar7 << 6) >> 3;
      *(ulong *)(param_1 + uVar9) = *(ulong *)(param_1 + uVar9) | 1L << (uVar4 & 0x3f);
      bVar2 = SCARRY8(lStack_b0,1);
      lStack_b0 = lStack_b0 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb83b0);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 101eb83e8; end: 101eb8623;  */

undefined * FUN_101eb83e8(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar3 = param_4;
    }
    else {
      func_0x0001000285a8(0x112d37798,&UNK_10d902e10);
      puVar3 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = *param_1;
      }
      lVar6 = 0;
      do {
        if (uVar11 == 0) {
          do {
            lVar10 = lVar6 + 1;
            if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb861c);
              (*pcVar1)();
            }
            if (param_2 <= lVar10) {
              return puVar3;
            }
            uVar11 = param_1[lVar10];
            lVar6 = lVar6 + 1;
          } while (uVar11 == 0);
          uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar11 = uVar11 - 1 & uVar11;
        }
        else {
          uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar11 = uVar11 - 1 & uVar11;
          lVar10 = lVar6;
        }
        uVar5 = LZCOUNT(uVar5) | lVar10 << 6;
        lVar6 = *(long *)(param_4 + 0x38);
        func_0x0001007bbd18(*(long *)(param_4 + 0x30) + uVar5 * 0x28,&uStack_88);
        func_0x0001000bb420(lVar6 + uVar5 * 0x20,auStack_a8);
        uVar4 = *(ulong *)(puVar3 + 0x28);
        func_0x000107c602c4();
        uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
        uVar7 = uVar4 >> 6;
        uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(puVar3 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff)
        ;
        if (uVar5 == 0) {
          bVar2 = false;
          uVar5 = 0x3f - uVar9 >> 6;
          do {
            uVar4 = uVar7 + 1;
            if ((uVar4 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb8620);
              (*pcVar1)();
            }
            uVar7 = 0;
            if (uVar4 != uVar5) {
              uVar7 = uVar4;
            }
            bVar2 = (bool)(uVar4 == uVar5 | bVar2);
          } while (*(ulong *)(puVar3 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
          uVar5 = ~*(ulong *)(puVar3 + uVar7 * 8 + 0x40);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
        }
        else {
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
        }
        uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar3 + uVar7 + 0x40) = 1L << (uVar5 & 0x3f) | *(ulong *)(puVar3 + uVar7 + 0x40)
        ;
        puVar8 = (undefined8 *)(*(long *)(puVar3 + 0x30) + uVar5 * 0x28);
        puVar8[4] = uStack_68;
        puVar8[1] = uStack_80;
        *puVar8 = uStack_88;
        puVar8[3] = uStack_70;
        puVar8[2] = uStack_78;
        func_0x000100102924(auStack_a8,*(long *)(puVar3 + 0x38) + uVar5 * 0x20);
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        bVar2 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb8624);
          (*pcVar1)();
        }
        lVar6 = lVar10;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar3;
}



/* Entry: 101eb8624; end: 101eb8637;  */

ulong FUN_101eb8624(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb871c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb8720);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c07d8;
    func_0x000107c61168(PTR_PTR_1126c07d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c07d8;
    func_0x000107c61168(PTR_PTR_1126c07d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101eb8fdc(0,0x112e38478,&PTR_PTR_1126c07d8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb87f4);
  (*pcVar2)();
}



/* Entry: 101eb8638; end: 101eb87f3;  */

ulong FUN_101eb8638(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb871c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb8720);
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
  FUN_101eb8fdc(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb87f4);
  (*pcVar2)();
}



/* Entry: 101eb87f4; end: 101eb8807;  */

void FUN_101eb87f4(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101eb8804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 101eb8808; end: 101eb882b;  */

void FUN_101eb8808(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(1);
  return;
}



/* Entry: 101eb882c; end: 101eb884b;  */

void FUN_101eb882c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 101eb884c; end: 101eb8917;  */

void FUN_101eb884c(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb8918);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_101eb8268(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb8914);
  (*pcVar1)();
}



/* Entry: 101eb8918; end: 101eb8a83;  */

void FUN_101eb8918(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = (int)&uStack_50;
  iVar3 = (int)&uStack_50;
  iVar4 = (int)&uStack_50;
  iVar5 = (int)&uStack_50;
  iVar6 = (int)&uStack_50;
  func_0x0001000bb420(param_1,auStack_40);
  puVar1 = PTR___sypN_11034f1a8;
  func_0x000107c6147c(&uStack_50,auStack_40,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (iVar2 == 0) {
    func_0x0001000bb420(param_1,auStack_40);
    uVar7 = 0;
    FUN_101eb8fdc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c6147c(&uStack_50,auStack_40,puVar1 + 8,uVar7,6);
    if (iVar3 == 0) {
      func_0x0001000bb420(param_1,auStack_40);
      uVar7 = 0;
      FUN_101eb8fdc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c6147c(&uStack_50,auStack_40,puVar1 + 8,uVar7,6);
      if (iVar4 == 0) {
        func_0x0001000bb420(param_1,auStack_40);
        uVar7 = 0;
        FUN_101eb8fdc(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
        func_0x000107c6147c(&uStack_50,auStack_40,puVar1 + 8,uVar7,6);
        if (iVar5 == 0) {
          func_0x0001000bb420(param_1,auStack_40);
          uVar7 = 0;
          FUN_101eb8fdc(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
          func_0x000107c6147c(&uStack_50,auStack_40,puVar1 + 8,uVar7,6);
          if (iVar6 == 0) {
            return;
          }
        }
      }
    }
    func_0x000107c61170(uStack_50);
  }
  else {
    func_0x000107c6142c(uStack_48);
  }
  return;
}



/* Entry: 101eb8a84; end: 101eb8d6b;  */

void FUN_101eb8a84(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  long lStack_58;
  
  puVar1 = PTR___sypN_11034f1a8;
  lStack_58 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_3 + 0x40);
  lVar4 = 0;
  do {
    while( true ) {
      if (uVar12 == 0) {
        do {
          lVar13 = lVar4 + 1;
          if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb8d6c);
            (*pcVar2)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar13) {
            FUN_101eb83e8(param_1,param_2,lStack_58,param_3);
            return;
          }
          uVar12 = ((ulong *)(param_3 + 0x40))[lVar13];
          lVar4 = lVar4 + 1;
        } while (uVar12 == 0);
        uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
      }
      else {
        uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
        lVar13 = lVar4;
      }
      uVar9 = LZCOUNT(uVar9);
      uVar11 = uVar9 | lVar13 << 6;
      func_0x0001007bbd18(*(long *)(param_3 + 0x30) + uVar11 * 0x28,auStack_88);
      lVar4 = *(long *)(param_3 + 0x38) + uVar11 * 0x20;
      func_0x0001000bb420(lVar4,auStack_a8);
      func_0x000107c602bc();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSString_1126ae4d0);
      lVar6 = lVar4;
      func_0x000107c6148c(lVar4,puVar5);
      func_0x000107c61170(lVar4);
      lVar4 = lVar13;
      if (lVar6 != 0) break;
LAB_101eb8af8:
      func_0x000100183ab8(auStack_a8);
      func_0x0001007bbff0(auStack_88);
    }
    func_0x0001000bb420(auStack_a8,auStack_c8);
    puVar7 = &uStack_d8;
    func_0x000107c6147c(puVar7,auStack_c8,puVar1 + 8,PTR___sSSN_11034da80,6);
    if ((int)puVar7 == 0) {
      func_0x0001000bb420(auStack_a8,auStack_c8);
      uVar8 = 0;
      FUN_101eb8fdc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar7 = &uStack_d8;
      func_0x000107c6147c(puVar7,auStack_c8,puVar1 + 8,uVar8,6);
      if ((int)puVar7 == 0) {
        func_0x0001000bb420(auStack_a8,auStack_c8);
        uVar8 = 0;
        FUN_101eb8fdc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
        puVar7 = &uStack_d8;
        func_0x000107c6147c(puVar7,auStack_c8,puVar1 + 8,uVar8,6);
        if ((int)puVar7 == 0) {
          func_0x0001000bb420(auStack_a8,auStack_c8);
          uVar8 = 0;
          FUN_101eb8fdc(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
          puVar7 = &uStack_d8;
          func_0x000107c6147c(puVar7,auStack_c8,puVar1 + 8,uVar8,6);
          if ((int)puVar7 == 0) {
            func_0x0001000bb420(auStack_a8,auStack_c8);
            uVar8 = 0;
            FUN_101eb8fdc(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
            puVar7 = &uStack_d8;
            func_0x000107c6147c(puVar7,auStack_c8,puVar1 + 8,uVar8,6);
            if ((int)puVar7 == 0) goto LAB_101eb8af8;
          }
        }
      }
      func_0x000107c61170(uStack_d8);
    }
    else {
      func_0x000107c6142c(uStack_d0);
    }
    func_0x000100183ab8(auStack_a8);
    func_0x0001007bbff0(auStack_88);
    uVar11 = (uVar9 & 0xffffffffffffffc0 | lVar13 << 6) >> 3;
    *(ulong *)(param_1 + uVar11) = *(ulong *)(param_1 + uVar11) | 1L << (uVar9 & 0x3f);
    bVar3 = SCARRY8(lStack_58,1);
    lStack_58 = lStack_58 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eb8d30);
      (*pcVar2)();
    }
  } while( true );
}



/* Entry: 101eb8d6c; end: 101eb8fbb;  */

/* WARNING: Possible PIC construction at 0x000101eb8e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb8e6c) */
/* WARNING: Removing unreachable block (ram,0x000101eb8f5c) */
/* WARNING: Removing unreachable block (ram,0x000101eb8ea4) */
/* WARNING: Removing unreachable block (ram,0x000101eb8f80) */
/* WARNING: Removing unreachable block (ram,0x000101eb8eec) */
/* WARNING: Removing unreachable block (ram,0x000101eb8efc) */
/* WARNING: Removing unreachable block (ram,0x000101eb8f08) */

void FUN_101eb8d6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  func_0x000107c5d9a4();
  func_0x000107c61180();
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___ss11AnyHashableVSHsWP_11034e450;
  puVar1 = PTR___ss11AnyHashableVN_11034e448;
  if (param_1 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    func_0x000107c60e78();
    lVar4 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar5 = param_1;
    func_0x000107c5f9e8();
    func_0x000107c61170(param_1);
    func_0x000100904b20();
    lVar4 = lVar5;
    FUN_101eb805c(lVar5,param_1);
    func_0x000107c6142c(lVar5);
    func_0x000107c61168(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    func_0x000107c5f9dc(lVar4,puVar1,puVar3 + 8,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar4);
  return;
}



/* Entry: 101eb8fbc; end: 101eb8fdb;  */

void FUN_101eb8fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101eb8fdc; end: 101eb901b;  */

void FUN_101eb8fdc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101eb901c; end: 101eb902f;  */

void FUN_101eb901c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c3de6c(*(undefined8 *)(lVar1 + 0x10));
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101eb9030; end: 101eb934f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101eb9030(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10,undefined8 param_11)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar4 = 0x98;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  uVar6 = *(undefined8 *)(param_2 + _DAT_113091b70);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + _DAT_113091b58);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar6;
  lVar5 = _DAT_113092298;
  iVar8 = (int)*(undefined8 *)(param_9 + _DAT_113092298);
  func_0x000107c61174();
  func_0x000107c615f0(uVar6);
  func_0x0001008fb738();
  plVar1 = (long *)&DAT_113091bd0;
  if (iVar8 == 0) {
    plVar1 = (long *)&DAT_113091bc0;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(param_2 + *plVar1);
  *(undefined8 *)(unaff_x20 + 0x28) = param_7;
  uVar7 = *(undefined8 *)(param_1 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
  *(long *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_5;
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar4 = param_8;
  func_0x000107c3ddb0();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x88) = uVar4;
  uVar4 = *(undefined8 *)(param_9 + lVar5);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar4;
  if (param_10 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_10 + _DAT_11309bf10);
    func_0x000107c615f0();
  }
  *(undefined8 *)(unaff_x20 + 0x68) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar4);
  func_0x000107c61174(param_11);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x90) = puVar2;
  lVar5 = param_3;
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar3 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar3 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_10);
    lVar5 = 0;
  }
  else {
    lVar5 = lVar3;
    func_0x000107c4f800();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_10);
  }
  *(long *)(unaff_x20 + 0x80) = lVar5;
  return unaff_x20;
}



/* Entry: 101eb9350; end: 101eb9353;  */

void FUN_101eb9350(void)

{
  return;
}



/* Entry: 101eb9354; end: 101eb93e7;  */

void FUN_101eb9354(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0xd) {
    return;
  }
  uVar3 = param_2;
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    FUN_101eb7484(lVar2,uVar3,(uint)param_2 & 1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb93e8);
  (*pcVar1)();
}



/* Entry: 101eb93e8; end: 101eb944f;  */

void FUN_101eb93e8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    FUN_101eb7484(lVar2,param_2,0,10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb9450);
  (*pcVar1)();
}



/* Entry: 101eb9450; end: 101eb976b;  */

void FUN_101eb9450(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar10 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar10 - extraout_x12;
  if ((param_4 & 1) == 0) {
    lVar3 = param_2;
    func_0x000107c4d7e4();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb976c);
      (*pcVar1)();
    }
    lVar4 = param_2;
    func_0x000107c43648();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c5ee94(lVar7);
      func_0x000107c61170(lVar4);
    }
    uVar9 = (ulong)(lVar4 == 0);
    (**(code **)(lVar8 + 0x38))(lVar7,uVar9,1,lVar2);
    func_0x000107c45240();
    func_0x000107c61180();
    if (param_2 == 0) {
      lStack_68 = 0;
      uVar9 = 0;
    }
    else {
      lVar4 = param_2;
      func_0x000107c5faec();
      lStack_68 = lVar4;
      func_0x000107c61170(param_2);
    }
    func_0x000107b1e794(*(undefined8 *)(*(long *)(param_5 + 0x18) + 0x18),1);
    func_0x0001008fc854(lVar7,lVar10,0x112d373d8,&UNK_10d9014c0);
    lVar4 = lVar10;
    (**(code **)(lVar8 + 0x30))(lVar10,1,lVar2);
    if ((int)lVar4 == 1) {
      func_0x000100905bb0(lVar10,0x112d373d8,&UNK_10d9014c0);
      puVar11 = (undefined *)0x0;
    }
    else {
      (**(code **)(lVar8 + 0x20))(puVar6,lVar10,lVar2);
      func_0x000107c5ee84();
      if (0x7fefffffffffffff < (ulong)ABS(param_1 * 1000.0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb9764);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= ABS(param_1 * 1000.0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb9768);
        (*pcVar1)();
      }
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c47580();
      (**(code **)(lVar8 + 8))(puVar6,lVar2);
    }
    if (uVar9 == 0) {
      func_0x000107c61174(puVar11);
      lVar2 = 0;
    }
    else {
      func_0x000107c61174(puVar11);
      lVar2 = lStack_68;
      func_0x000107c5fadc(lStack_68,uVar9);
    }
    puVar5 = PTR_PTR_1126c07f8;
    func_0x000107c610f8(PTR_PTR_1126c07f8);
    func_0x000107c45700();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(lVar2);
    func_0x000107c4d7d8(*(undefined8 *)(param_5 + 0x10));
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar5);
    func_0x000107c6142c(uVar9);
    func_0x000107c61170(lVar3);
    func_0x000100905bb0(lVar7,0x112d373d8,&UNK_10d9014c0);
  }
  return;
}



/* Entry: 101eb976c; end: 101eb97bf;  */

void FUN_101eb976c(long param_1,long param_2)

{
  code *pcVar1;
  
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107b1e8fc(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x18),1);
    func_0x000107c4d7d0(*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb97c0);
  (*pcVar1)();
}



/* Entry: 101eb97c0; end: 101eb98cb;  */

void FUN_101eb97c0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_110495d18;
  func_0x000107c613fc(&UNK_110495d18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101eb9e58;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_101eb9e60;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b54d8c;
  puStack_58 = &UNK_110495d30;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c5e4(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0xa1,0x11c,0x3a,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb98cc);
  (*pcVar1)();
}



/* Entry: 101eb98cc; end: 101eb9be7;  */

void FUN_101eb98cc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - extraout_x12;
  lVar3 = param_2;
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb9be8);
    (*pcVar1)();
  }
  lVar4 = param_2;
  func_0x000107c43648();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c5ee94(lVar8);
    func_0x000107c61170(lVar4);
  }
  uVar9 = (ulong)(lVar4 == 0);
  (**(code **)(lVar7 + 0x38))(lVar8,uVar9,1,lVar2);
  func_0x000107c45240();
  func_0x000107c61180();
  if (param_2 == 0) {
    lStack_68 = 0;
    uVar9 = 0;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5faec();
    lStack_68 = lVar4;
    func_0x000107c61170(param_2);
  }
  func_0x000107b1e794(*(undefined8 *)(*(long *)(param_5 + 0x18) + 0x18),1);
  func_0x0001008fc854(lVar8,lVar10,0x112d373d8,&UNK_10d9014c0);
  lVar4 = lVar10;
  (**(code **)(lVar7 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar4 == 1) {
    func_0x000100905bb0(lVar10,0x112d373d8,&UNK_10d9014c0);
    puVar11 = (undefined *)0x0;
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar6,lVar10,lVar2);
    func_0x000107c5ee84();
    if (0x7fefffffffffffff < (ulong)ABS(param_1 * 1000.0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb9be0);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= ABS(param_1 * 1000.0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb9be4);
      (*pcVar1)();
    }
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c47580();
    (**(code **)(lVar7 + 8))(puVar6,lVar2);
  }
  if (uVar9 == 0) {
    func_0x000107c61174(puVar11);
    lVar2 = 0;
  }
  else {
    func_0x000107c61174(puVar11);
    lVar2 = lStack_68;
    func_0x000107c5fadc(lStack_68,uVar9);
  }
  puVar5 = PTR_PTR_1126c07f8;
  func_0x000107c610f8(PTR_PTR_1126c07f8);
  func_0x000107c45700();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar2);
  func_0x000107c4d7d8(*(undefined8 *)(param_5 + 0x10));
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar5);
  func_0x000107c6142c(uVar9);
  func_0x000107c61170(lVar3);
  func_0x000100905bb0(lVar8,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 101eb9be8; end: 101eb9cb3;  */

void FUN_101eb9be8(long param_1,undefined8 param_2)

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



/* Entry: 101eb9cb4; end: 101eb9d8b;  */

undefined8 FUN_101eb9cb4(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    func_0x000107c4218c(*(undefined8 *)(*(long *)(unaff_x20 + 0x78) + 0x10));
  }
  return 0;
}



/* Entry: 101eb9d8c; end: 101eb9dab;  */

void FUN_101eb9d8c(void)

{
  func_0x0001008fb74c();
  return;
}



/* Entry: 101eb9dac; end: 101eb9dd3;  */

undefined8 FUN_101eb9dac(void)

{
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x78) != 0) {
    func_0x000107c4218c(*(undefined8 *)(*(long *)(*unaff_x20 + 0x78) + 0x10));
  }
  return 0;
}



/* Entry: 101eb9dd4; end: 101eb9e47;  */

void FUN_101eb9dd4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [16];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_30 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x00010484fff0(param_1,FUN_101eb9350,0,0x101eb9e8c,uStack_28,0x101eb9e94,uStack_28,
                      0x101eb9e9c,auStack_40,0x101eb9ea8,uStack_28);
  return;
}



/* Entry: 101eb9e48; end: 101eb9e5f;  */

void FUN_101eb9e48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101eb9e60; end: 101eb9e7f;  */

void FUN_101eb9e60(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101eb9e80; end: 101eb9ec3;  */

void FUN_101eb9e80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61574();
    func_0x000107c5fadc(uVar4,uVar2);
    func_0x000107c3d648(uVar1);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 101eb9ec4; end: 101eb9faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb9ec4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e38768);
  uVar1 = uVar4;
  func_0x000107c507d0(uVar4);
  func_0x000107c61180();
  puVar2 = &UNK_110495d98;
  func_0x000107c613fc(&UNK_110495d98,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_50 = FUN_101eba064;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1014b8460;
  puStack_58 = &UNK_110495db0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc64(uVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101eb9fb0; end: 101eba003; -[_TtC38NativeNotificationHandlingServicesImpl36NativeNotificationPermissionProvider getNotificationPermission:] */

/* WARNING: Possible PIC construction at 0x000101eb9fec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eb9ff0) */

void FUN_101eb9fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101eb9ec4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101eba004; end: 101eba063; -[_TtC38NativeNotificationHandlingServicesImpl36NativeNotificationPermissionProvider init] */

void FUN_101eba004(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NativeNotificationHandlingServicesImpl.NativeNotificationPermissionProvider",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eba030);
  (*pcVar1)();
}



/* Entry: 101eba064; end: 101eba0a3;  */

void FUN_101eba064(long param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if ((param_1 == 0) || (param_2 != 0)) {
    param_1 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c440b8(param_1);
  }
  else {
    func_0x000107c3e488();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e60d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_onResult__112617248,param_1 == 1);
  return;
}



/* Entry: 101eba0a4; end: 101eba0bf;  */

void FUN_101eba0a4(long param_1,long param_2)

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


