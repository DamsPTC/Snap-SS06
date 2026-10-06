/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a6aacc; end: 101a6aad3;  */

undefined8 FUN_101a6aacc(void)

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



/* Entry: 101a6aad4; end: 101a6ab27;  */

undefined8 FUN_101a6aad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010065b418(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101a6ab28; end: 101a6ab63;  */

void FUN_101a6ab28(void)

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



/* Entry: 101a6ab64; end: 101a6abb3;  */

undefined8 FUN_101a6ab64(void)

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



/* Entry: 101a6abb4; end: 101a6abf7;  */

undefined1  [16] FUN_101a6abb4(void)

{
  return ZEXT816(0x110432d68);
}



/* Entry: 101a6abf8; end: 101a6ac1f;  */

void FUN_101a6abf8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a6ac20; end: 101a6ac27;  */

undefined8 FUN_101a6ac20(void)

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



/* Entry: 101a6ac28; end: 101a6af87;  */

long FUN_101a6ac28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar1 = PTR_PTR_1126a8658;
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
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
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
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7130);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
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



/* Entry: 101a6af88; end: 101a6aff3;  */

void FUN_101a6af88(void)

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



/* Entry: 101a6aff4; end: 101a6b037;  */

undefined1  [16] FUN_101a6aff4(void)

{
  return ZEXT816(0x110432eb0);
}



/* Entry: 101a6b038; end: 101a6b05f;  */

void FUN_101a6b038(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a6b060; end: 101a6b0ab;  */

undefined8 FUN_101a6b060(void)

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



/* Entry: 101a6b0ac; end: 101a6b193;  */

long FUN_101a6b0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001009aa808(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001009aa828(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x0001009aa838();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 101a6b194; end: 101a6b1c7;  */

void FUN_101a6b194(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a6b1c8; end: 101a6b1fb;  */

undefined1  [16] FUN_101a6b1c8(void)

{
  return ZEXT816(0x110433000);
}



/* Entry: 101a6b1fc; end: 101a6b227;  */

undefined8 FUN_101a6b1fc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 101a6b228; end: 101a6b4e7;  */

long FUN_101a6b228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a8660;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
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
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efcd530);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return unaff_x20;
}



/* Entry: 101a6b4e8; end: 101a6b52b;  */

void FUN_101a6b4e8(void)

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



/* Entry: 101a6b52c; end: 101a6b57b;  */

undefined8 FUN_101a6b52c(void)

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



/* Entry: 101a6b57c; end: 101a6b5b7;  */

undefined1  [16] FUN_101a6b57c(void)

{
  return ZEXT816(0x1104330a8);
}



/* Entry: 101a6b5b8; end: 101a6b697;  */

long FUN_101a6b5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001009ccaec(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001009ccb0c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x0001009ccbb4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 101a6b698; end: 101a6b6cb;  */

void FUN_101a6b698(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a6b6cc; end: 101a6b6ff;  */

undefined1  [16] FUN_101a6b6cc(void)

{
  return ZEXT816(0x110433150);
}



/* Entry: 101a6b700; end: 101a6b72b;  */

undefined8 FUN_101a6b700(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 101a6b72c; end: 101a6b877;  */

long FUN_101a6b72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x0001004353b0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100435430();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100435478();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 101a6b878; end: 101a6b8c3;  */

void FUN_101a6b878(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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



/* Entry: 101a6b8c4; end: 101a6b907;  */

undefined1  [16] FUN_101a6b8c4(void)

{
  return ZEXT816(0x1104332a0);
}



/* Entry: 101a6b908; end: 101a6b95b;  */

void FUN_101a6b908(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a6b95c; end: 101a6bcbb;  */

long FUN_101a6b95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar3 = PTR_PTR_1126a8668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3090);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efcd550);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a6bcbc);
  (*pcVar1)();
}



/* Entry: 101a6bcbc; end: 101a6bd27;  */

void FUN_101a6bcbc(void)

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



/* Entry: 101a6bd28; end: 101a6bd77;  */

undefined8 FUN_101a6bd28(void)

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



/* Entry: 101a6bd78; end: 101a6bdbb;  */

undefined1  [16] FUN_101a6bd78(void)

{
  return ZEXT816(0x110433368);
}



/* Entry: 101a6bdbc; end: 101a6bde3;  */

void FUN_101a6bdbc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a6bde4; end: 101a6bdeb;  */

undefined8 FUN_101a6bde4(void)

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



/* Entry: 101a6bdec; end: 101a6be4b; -[_TtC34SCPlaybackABRMediaServicesProvider30PlaybackABRMediaResourceLoader init] */

void FUN_101a6bdec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackABRMediaServicesProvider.PlaybackABRMediaResourceLoader",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a6be18);
  (*pcVar1)();
}



/* Entry: 101a6be4c; end: 101a6bea3; -[_TtC34SCPlaybackABRMediaServicesProvider30PlaybackABRMediaResourceLoader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a6be68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a6be88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a6be6c) */
/* WARNING: Removing unreachable block (ram,0x000101a6be8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a6be4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df1008));
  return;
}



/* Entry: 101a6bea4; end: 101a6c1ab;  */

/* WARNING: Possible PIC construction at 0x000101a6bee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a6bf08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a6bf6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a6c00c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a6bf70) */
/* WARNING: Removing unreachable block (ram,0x000101a6bf0c) */
/* WARNING: Removing unreachable block (ram,0x000101a6bf1c) */
/* WARNING: Removing unreachable block (ram,0x000101a6beec) */
/* WARNING: Removing unreachable block (ram,0x000101a6c04c) */
/* WARNING: Removing unreachable block (ram,0x000101a6bef0) */
/* WARNING: Removing unreachable block (ram,0x000101a6c010) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a6bea4(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + _DAT_112df1008));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101a6c1ac; end: 101a6c1b7; -[_TtC34SCPlaybackABRMediaServicesProvider30PlaybackABRMediaResourceLoader loadResourceForContentBundle:requestContext:range:completion:] */

void FUN_101a6c1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_6);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a6dfd4(param_3,param_4,param_5,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a6c1b8; end: 101a6c237;  */

/* WARNING: Possible PIC construction at 0x000101a6c220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a6c224) */

void FUN_101a6c1b8(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,long param_5)

{
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  if (param_4 != 0) {
    func_0x000107c5ed2c(param_4);
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a6c238; end: 101a6c453;  */

void FUN_101a6c238(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,code *param_5,
                  undefined8 param_6,long param_7)

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
  func_0x000107c49b28();
  if ((param_4 & 1) == 0) {
    func_0x000107c43e90();
    func_0x000107c61180();
    if (param_2 == 0) {
      func_0x000107c43c00(param_7);
      func_0x000107c61180();
      puVar1 = &UNK_110433720;
      func_0x000107c613fc(&UNK_110433720,0x28,7);
      *(undefined8 *)(puVar1 + 0x10) = param_3;
      *(code **)(puVar1 + 0x18) = param_5;
      *(undefined8 *)(puVar1 + 0x20) = param_6;
      uStack_50 = 0x101a6e9d8;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      uStack_60 = 0x101a6ea58;
      puStack_58 = &UNK_110433738;
      puStack_48 = puVar1;
      func_0x000107c60bc4(&puStack_70);
      puVar1 = puStack_48;
      func_0x000107c61174(param_3);
      func_0x000107c6157c(param_6);
      func_0x000107c61574(puVar1);
      func_0x000107c5c8c8(param_7);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c60bd0(ppuVar2);
    }
    else {
      param_7 = param_2;
      func_0x000107cd1204();
      func_0x000107c61180();
      (*param_5)(0,param_7);
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170(param_7);
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 101a6c454; end: 101a6c45f; -[_TtC34SCPlaybackABRMediaServicesProvider30PlaybackABRMediaResourceLoader loadResourceWithPrefetchSignals:forContentBundle:requestContext:completion:] */

void FUN_101a6c454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_6);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*(code *)0x101a6e320)(param_3,param_4,param_5,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a6c460; end: 101a6c52b;  */

void FUN_101a6c460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_6);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_7)(param_3,param_4,param_5,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a6c52c; end: 101a6c583;  */

void FUN_101a6c52c(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101a6c584; end: 101a6c62f; -[_TtC34SCPlaybackABRMediaServicesProvider30PlaybackABRMediaResourceLoader loadFullResourceForContentBundle:requestContext:completion:] */

void FUN_101a6c584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101a6e67c(param_3,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a6c630; end: 101a6c89b;  */

void FUN_101a6c630(undefined8 *param_1,undefined *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined1 auStack_b0 [80];
  
  puVar8 = auStack_b0;
  pcVar7 = param_3;
  func_0x000107c43e90();
  func_0x000107c61180();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x000107c506c8();
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) {
      puVar6 = puVar1;
      func_0x000107c61174();
      func_0x000107c5ee30(puVar1);
      func_0x000107c61170(puVar6);
      puVar5 = puVar6;
      func_0x000107c4adac(puVar6);
      (*param_3)(puVar1,pcVar7,puVar5,0);
      func_0x00010006c090(puVar1,pcVar7);
      func_0x000107c4ba9c(param_5);
      goto LAB_101a6c868;
    }
  }
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar8;
  *(undefined8 *)(lVar2 + 0x30) = 0x7461447974706d65;
  *(undefined8 *)(lVar2 + 0x38) = 0xe900000000000061;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  FUN_101a6df80((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efcd570);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  puVar6 = puVar5;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x000107c42a28();
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) {
      puVar6 = puVar1;
      func_0x000107cd1204();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar1);
    }
  }
  (*param_3)(0,0xf000000000000000,0,puVar6);
LAB_101a6c868:
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_2);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 101a6c89c; end: 101a6c98f;  */

void FUN_101a6c89c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101a6c990; end: 101a6cf9f;  */

undefined8 *
FUN_101a6c990(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  long extraout_x12;
  long extraout_x13;
  undefined8 unaff_x20;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined4 uStack_d4;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar4 = 0;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  func_0x000107c5ede0();
  lStack_b0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (long)&lStack_110 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = extraout_x13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar17 - extraout_x12;
  ppuVar6 = param_1;
  func_0x000107c44d80();
  func_0x000107c61180();
  puVar11 = PTR___sypN_11034f1a8;
  ppuVar5 = ppuVar6;
  puVar12 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8();
  func_0x000107c61170(ppuVar6);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e98978;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e98978);
  if (ppuVar5[2] == (undefined *)0x0) {
LAB_101a6cb40:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(ppuVar5);
LAB_101a6cb58:
    puVar9 = (undefined8 *)0x112d387f8;
    FUN_101a6df80(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000107c61434(ppuVar5);
    puVar13 = puVar12;
    func_0x000100029284(ppuVar6);
    if (((ulong)puVar13 & 1) == 0) {
      func_0x000107c6142c(ppuVar5);
      goto LAB_101a6cb40;
    }
    func_0x0001000bb420(ppuVar5[7] + (long)ppuVar6 * 0x20,&uStack_90);
    func_0x000107c6142c(puVar12);
    func_0x000107c61430(ppuVar5,2);
    if (lStack_78 == 0) goto LAB_101a6cb58;
    plVar7 = &lStack_a0;
    puVar9 = &uStack_90;
    func_0x000107c6147c(plVar7,puVar9,puVar11 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)plVar7 & 1) != 0) {
      lVar20 = lStack_a0;
      puVar19 = puStack_98;
      func_0x000107c5fadc();
      func_0x000107c6142c(puStack_98);
      lVar8 = lVar20;
      func_0x000107c2c4cc();
      func_0x000107c61180();
      func_0x000107c61170(lVar20);
      puVar9 = puVar19;
      if (lVar8 != 0) {
        lVar20 = lVar8;
        func_0x000107c4f894();
        puVar9 = puVar19;
        func_0x000107c61170(lVar8);
        goto LAB_101a6cb78;
      }
    }
  }
  lVar20 = 0;
  puVar19 = (undefined8 *)0x7fffffffffffffff;
LAB_101a6cb78:
  ppuVar6 = param_1;
  func_0x000107c4537c(param_1);
  func_0x000107c61180();
  ppuVar5 = ppuVar6;
  func_0x000107c5d7e8();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar6);
  func_0x000107c5edb4(lVar22,ppuVar5);
  func_0x000107c61170(ppuVar5);
  func_0x000107c4537c();
  func_0x000107c61180();
  func_0x000107c42cf0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170();
  func_0x000107c5ed6c();
  ppuVar6 = &PTR____CFConstantStringClassReference_110eaef58;
  puVar10 = puVar9;
  func_0x000107c5faec();
  if ((param_1 == ppuVar6) && (puVar9 == puVar10)) {
    uStack_d4 = 1;
    puVar16 = puVar10;
  }
  else {
    puVar16 = puVar9;
    func_0x000107c605b8();
    uStack_d4 = SUB84(param_1,0);
  }
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c();
  func_0x000107c5ed70();
  puStack_e8 = puVar16;
  puStack_e0 = puVar9;
  func_0x000107c5fadc();
  puVar10 = puVar9;
  func_0x000107c2bde4();
  func_0x000107c61180();
  puStack_d0 = puVar10;
  func_0x000107c61170(puVar9);
  puVar11 = PTR_PTR_1126b7fc8;
  func_0x000107c610f8(PTR_PTR_1126b7fc8);
  func_0x000107c495d4();
  puVar12 = PTR_PTR_1126b7fd0;
  func_0x000107c610f8();
  func_0x000107c47644();
  func_0x000107c61170(puVar11);
  puVar11 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  func_0x000107c61174();
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar15 = PTR___sSSN_11034da80;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar11);
  func_0x000107c61170(puVar13);
  puVar13 = PTR_PTR_1126b1378;
  func_0x000107c610f8();
  func_0x000107c48258();
  puStack_f8 = puVar13;
  puStack_f0 = puVar12;
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000103b79740(0);
  uStack_90 = 0x3a5242413a534c48;
  uStack_88 = 0xe800000000000000;
  func_0x000107c5edc4();
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar15);
  func_0x000107c5fb78(0x2d,0xe100000000000000);
  puVar9 = puVar19;
  func_0x000103b79398(lVar20,puVar19);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar9);
  uVar1 = uStack_88;
  uVar14 = uStack_90;
  func_0x000103b79218(uStack_90,uStack_88);
  func_0x000107c6142c(uVar1);
  if (!SCARRY8(lVar20,(long)puVar19)) {
    puVar12 = PTR_PTR_1126b7f98;
    func_0x000107c610f8();
    func_0x000107c48970();
    puVar11 = &UNK_110433518;
    puStack_100 = puVar12;
    func_0x000107c613fc(&UNK_110433518,0x18,7);
    lStack_110 = lVar20;
    puStack_108 = puVar19;
    func_0x000107c61614(puVar11 + 0x10,unaff_x20);
    lVar20 = lStack_b0;
    (**(code **)(lStack_b0 + 0x10))(lVar17,lVar22,lVar4);
    uVar18 = (ulong)*(byte *)(lVar20 + 0x50);
    uVar21 = uVar18 + 0x60 & (uVar18 ^ 0xffffffffffffffff);
    uVar23 = lStack_c8 + uVar21 + 7 & 0xfffffffffffffff8;
    puVar12 = &UNK_110433540;
    lStack_c8 = lVar22;
    func_0x000107c613fc(&UNK_110433540,uVar23 + 8,uVar18 | 7);
    uVar2 = uStack_b8;
    uVar1 = uStack_c0;
    *(undefined8 *)(puVar12 + 0x10) = uVar14;
    *(undefined8 *)(puVar12 + 0x18) = uStack_c0;
    *(undefined8 *)(puVar12 + 0x20) = uStack_b8;
    *(undefined8 **)(puVar12 + 0x28) = puStack_e0;
    *(undefined8 **)(puVar12 + 0x30) = puStack_e8;
    *(long *)(puVar12 + 0x38) = lStack_110;
    *(undefined8 **)(puVar12 + 0x40) = puStack_108;
    puVar12[0x48] = (byte)uStack_d4 & 1;
    *(undefined8 *)(puVar12 + 0x50) = param_2;
    *(undefined **)(puVar12 + 0x58) = puVar11;
    (**(code **)(lVar20 + 0x20))(puVar12 + uVar21,lVar17,lVar4);
    puVar15 = puStack_f8;
    *(undefined **)(puVar12 + uVar23) = puStack_f8;
    FUN_101a6df70(uVar1,uVar2);
    func_0x000107c615f0(param_2);
    func_0x000107c6157c(puVar11);
    func_0x000107c61174(puVar15);
    puVar9 = puStack_d0;
    puVar13 = puStack_100;
    puVar19 = puStack_d0;
    FUN_101a6bea4(puStack_d0,puVar15,puStack_100,FUN_101a6dec0,puVar12);
    func_0x000107c61170(puStack_f0);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar13);
    func_0x000107c61574(puVar12);
    func_0x000107c61170(puVar9);
    (**(code **)(lStack_b0 + 8))(lStack_c8,lVar4);
    func_0x000107c61574(puVar11);
    return puVar19;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a6cfa0);
  (*pcVar3)();
}



/* Entry: 101a6cfa0; end: 101a6d06f; -[_TtC34SCPlaybackABRMediaServicesProvider30PlaybackABRMediaResourceLoader handleProxyRequest:urlProvider:completion:] */

void FUN_101a6cfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_110433608;
    func_0x000107c613fc(&UNK_110433608,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x101a6ea3c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a6c990(param_3,param_4,uVar3,puVar2);
  func_0x000100cc3c54(uVar3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a6d070; end: 101a6d0c3;  */

void FUN_101a6d070(long param_1,undefined8 param_2,long param_3)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a6d0c4; end: 101a6d1bb;  */

undefined8 FUN_101a6d0c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  if (param_3 == 0) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_101a6d1bc;
    puStack_58 = &UNK_1104334e0;
    lStack_50 = param_3;
    uStack_48 = param_4;
    func_0x000107c60bc4();
    uVar1 = uStack_48;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(uVar1);
  }
  puVar2 = (undefined1 *)ppuVar4;
  func_0x000105906960();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar3 = &UNK_1104334c8;
  func_0x000107c613fc(&UNK_1104334c8,0x18,7);
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  FUN_101a6c990(param_1,param_2,0x101a6d464,puVar3);
  func_0x000107c61574(puVar3);
  return param_1;
}



/* Entry: 101a6d1bc; end: 101a6d2af;  */

void FUN_101a6d1bc(long param_1,undefined *param_2,long param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
    puVar4 = param_2;
  }
  else {
    puVar4 = PTR___sSSN_11034da80;
    func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  if (param_5 == 0) {
    puVar4 = (undefined *)0xf000000000000000;
  }
  else {
    lVar3 = param_5;
    func_0x000107c61174(param_5);
    func_0x000107c5ee30(param_5);
    func_0x000107c61170(lVar3);
  }
  (*pcVar1)(param_2,param_3,param_4,param_5,puVar4);
  func_0x0001000b44c0(param_5,puVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101a6d2b0; end: 101a6d453; -[_TtC34SCPlaybackABRMediaServicesProvider30PlaybackABRMediaResourceLoader handleStreamingProxyRequest:urlProvider:updateBlock:] */

void FUN_101a6d2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1104334a0;
    func_0x000107c613fc(&UNK_1104334a0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x101a6d45c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a6d0c4(param_3,param_4,uVar3,puVar2);
  func_0x000100cc3c54(uVar3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a6d454; end: 101a6d487; -[_TtC34SCPlaybackABRMediaServicesProvider30PlaybackABRMediaResourceLoader useSimplifiedProxyURLs] */

undefined8 FUN_101a6d454(void)

{
  return 0;
}



/* Entry: 101a6d488; end: 101a6dcff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a6d488(undefined *param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  long extraout_x8;
  int iVar17;
  long lVar18;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  byte in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 *puStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined1 *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [112];
  
  puVar3 = (undefined8 *)0x0;
  uStack_120 = param_7;
  func_0x000107c5ede0();
  lVar18 = puVar3[-1];
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  func_0x000100069b5c(param_5);
  func_0x000107c61170(uVar5);
  if (param_4 != 0) {
    if (param_6 == (code *)0x0) {
      return;
    }
    func_0x000107c614b0(param_4);
    uVar5 = uStack_120;
    FUN_101a6df70(param_6,uStack_120);
    (*param_6)(param_4,0);
    func_0x000107c614ac(param_4);
    func_0x000100cc3c54(param_6,uVar5);
    return;
  }
  puStack_138 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_130 = lVar18;
  if (0xe < param_2 >> 0x3c) {
    if (param_6 == (code *)0x0) {
      return;
    }
    lVar18 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar13 = auStack_d0;
    func_0x000107c61534();
    *(undefined8 *)(lVar18 + 0x18) = 2;
    *(undefined8 *)(lVar18 + 0x10) = 1;
    uVar6 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    uVar5 = uStack_120;
    *(undefined8 *)(lVar18 + 0x20) = uVar6;
    puVar8 = PTR___sSSN_11034da80;
    *(undefined **)(lVar18 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar18 + 0x28) = puVar13;
    *(undefined8 *)(lVar18 + 0x30) = 0x7461447974706d65;
    *(undefined8 *)(lVar18 + 0x38) = 0xe900000000000061;
    FUN_101a6df70(param_6,uStack_120);
    lVar7 = lVar18;
    func_0x000100214a84(lVar18);
    func_0x000107c61588(lVar18);
    FUN_101a6df80((undefined8 *)(lVar18 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar6 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010efcd570);
    lVar18 = lVar7;
    func_0x000107c5f9dc(lVar7,puVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar7);
    func_0x000107c466bc(puVar9);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar18);
    (*param_6)(puVar9,0);
    func_0x000107c61170(puVar9);
    func_0x000100cc3c54(param_6,uVar5);
    return;
  }
  lStack_128 = in_stack_00000010;
  func_0x00010006c00c(param_1,param_2);
  puVar8 = param_1;
  uStack_140 = param_2;
  func_0x000107c5ee20();
  puVar9 = puVar8;
  func_0x000107c2c4c8();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = puVar9;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar9);
  lVar18 = lStack_128;
  if (((in_stack_00000018 & 1) != 0) && (in_stack_00000020 != 0)) {
    func_0x000107c61428(in_stack_00000028 + 0x10,auStack_e8,0,0);
    in_stack_00000028 = in_stack_00000028 + 0x10;
    func_0x000107c61618();
    if (in_stack_00000028 != 0) {
      uStack_168 = in_stack_00000038;
      lStack_148 = in_stack_00000020;
      func_0x000107c615f0(in_stack_00000020);
      puVar13 = puStack_138;
      func_0x000107c5eda8(puStack_138);
      puVar9 = *(undefined **)(in_stack_00000028 + _DAT_112df1020);
      lStack_150 = in_stack_00000028;
      func_0x000107c5c734();
      func_0x000107c61180();
      puStack_170 = puVar3;
      uStack_160 = param_2;
      puStack_158 = puVar8;
      if (puVar9 == (undefined *)0x0) {
        func_0x00010006c00c(puVar8,param_2);
      }
      else {
        func_0x000107c5ee20(puVar8,param_2);
        puVar10 = puVar9;
        func_0x000107c50880();
        func_0x000107c61180();
        func_0x000107c615e8(puVar9);
        func_0x000107c61170(puVar8);
        puVar8 = puVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar10);
      }
      puVar9 = PTR_PTR_1126b9ee0;
      puStack_178 = puVar8;
      func_0x000107c610f8();
      func_0x00010006c00c(puVar8,param_2);
      puVar10 = puVar8;
      func_0x000107c5ee20(puVar8,param_2);
      func_0x000107c4635c();
      func_0x000107c61170(puVar10);
      func_0x00010006c090(puVar8,param_2);
      func_0x000107c61174();
      puVar8 = puVar9;
      func_0x000107c5ed90();
      puVar10 = puVar9;
      func_0x000107c3aba0();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar9);
      puVar8 = &UNK_1104335b8;
      uVar14 = 0x20;
      func_0x000107c613fc(&UNK_1104335b8,0x20,7);
      lVar18 = lStack_148;
      uVar1 = uStack_168;
      *(long *)(puVar8 + 0x10) = lStack_148;
      *(ulong *)(puVar8 + 0x18) = uStack_168;
      uStack_f8 = 0x101a6dfcc;
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0x42000000;
      uStack_108 = 0x101a6ddd8;
      puStack_100 = &UNK_1104335d0;
      ppuVar11 = &puStack_118;
      puStack_f0 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      puVar8 = puStack_f0;
      func_0x000107c615f0(lVar18);
      func_0x000107c61174();
      func_0x000107c61174(uVar1);
      func_0x000107c61574(puVar8);
      puVar9 = puVar10;
      func_0x000107c3aba4();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(puVar10);
      puVar10 = puVar9;
      func_0x000107c41214();
      func_0x000107c61180();
      puVar8 = puVar10;
      func_0x000107c5ee30();
      uStack_168 = uVar14;
      func_0x000107c615e8(lVar18);
      func_0x000107c61170(lStack_150);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
      func_0x00010006c090(puStack_178,param_2);
      func_0x00010006c090(puStack_158,uStack_160);
      (**(code **)(lStack_130 + 8))(puVar13,puStack_170);
      lVar18 = lStack_128;
      param_2 = uStack_168;
    }
  }
  uVar5 = uStack_120;
  uVar1 = uStack_140;
  iVar17 = (int)puVar8;
  iVar15 = (int)((ulong)puVar8 >> 0x20);
  uVar16 = (uint)(param_2 >> 0x20);
  if (lVar18 == 0x7fffffffffffffff) {
    if (uVar16 >> 0x1e < 2) {
      if (uVar16 >> 0x1e == 0) {
        uVar14 = param_2 >> 0x30 & 0xff;
        func_0x000107c2c4d4(uVar14);
        goto LAB_101a6db7c;
      }
      if (SBORROW4(iVar15,iVar17)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a6dcfc);
        (*pcVar2)();
      }
      uVar14 = (ulong)(iVar15 - iVar17);
    }
    else {
      if (uVar16 >> 0x1e != 2) {
        uVar14 = 0;
        func_0x000107c2c4d4(0);
        goto LAB_101a6db7c;
      }
      uVar14 = *(long *)(puVar8 + 0x18) - *(long *)(puVar8 + 0x10);
      if (SBORROW8(*(long *)(puVar8 + 0x18),*(long *)(puVar8 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a6db10);
        (*pcVar2)();
      }
    }
    func_0x000107c2c4d4(uVar14);
  }
  else {
    uVar16 = uVar16 >> 0x1e;
    if (uVar16 < 2) {
      if (uVar16 == 0) {
        uVar14 = param_2 >> 0x30 & 0xff;
      }
      else {
        if (SBORROW4(iVar15,iVar17)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a6dd00);
          (*pcVar2)();
        }
        uVar14 = (ulong)(iVar15 - iVar17);
      }
    }
    else if (uVar16 == 2) {
      uVar14 = *(long *)(puVar8 + 0x18) - *(long *)(puVar8 + 0x10);
      if (SBORROW8(*(long *)(puVar8 + 0x18),*(long *)(puVar8 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a6db28);
        (*pcVar2)();
      }
    }
    else {
      uVar14 = 0;
    }
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a6dcf8);
      (*pcVar2)();
    }
    func_0x000107c2c4d0(uVar14,in_stack_00000008,lVar18,param_3);
  }
LAB_101a6db7c:
  func_0x000107c61180();
  puVar9 = PTR___sypN_11034f1a8;
  uVar12 = uVar14;
  func_0x000107c5f9e8();
  func_0x000107c61170(uVar14);
  if (param_6 == (code *)0x0) {
    func_0x00010006c090(puVar8,param_2);
    func_0x0001000b44c0(param_1,uVar1);
    func_0x000107c6142c(uVar12);
  }
  else {
    puVar10 = PTR_PTR_1126bffa0;
    func_0x000107c610f8(PTR_PTR_1126bffa0);
    FUN_101a6df70(param_6,uVar5);
    func_0x00010006c00c(puVar8,param_2);
    uVar14 = uVar12;
    func_0x000107c5f9dc(uVar12,PTR___sSSN_11034da80,puVar9 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(uVar12);
    puVar9 = puVar8;
    func_0x000107c5ee20(puVar8,param_2);
    func_0x00010006c090(puVar8,param_2);
    func_0x000107c489d8(puVar10);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(puVar9);
    (*param_6)(0,puVar10);
    func_0x00010006c090(puVar8,param_2);
    func_0x0001000b44c0(param_1,uVar1);
    func_0x000107c61170(puVar10);
    func_0x000100cc3c54(param_6,uVar5);
  }
  return;
}



/* Entry: 101a6dd00; end: 101a6debf;  */

/* WARNING: Possible PIC construction at 0x000101a6dd84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a6ddac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a6dd88) */
/* WARNING: Removing unreachable block (ram,0x000101a6ddb0) */

void FUN_101a6dd00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c5ed70();
  puVar1 = PTR_PTR_1126bfe90;
  func_0x000107c610f8(PTR_PTR_1126bfe90);
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c49154(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101a6dec0; end: 101a6df6f;  */

void FUN_101a6dec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c5ede0();
  FUN_101a6d488(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101a6df70; end: 101a6df7f;  */

void FUN_101a6df70(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101a6df80; end: 101a6dfbf;  */

undefined8 FUN_101a6df80(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101a6dfc0; end: 101a6dfd3;  */

void FUN_101a6dfc0(undefined8 *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_b0 [80];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar9 = auStack_b0;
  pcVar8 = pcVar1;
  func_0x000107c43e90(param_2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x000107c506c8();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      puVar7 = puVar2;
      func_0x000107c61174();
      func_0x000107c5ee30(puVar2);
      func_0x000107c61170(puVar7);
      puVar6 = puVar7;
      func_0x000107c4adac(puVar7);
      (*pcVar1)(puVar2,pcVar8,puVar6,0);
      func_0x00010006c090(puVar2,pcVar8);
      func_0x000107c4ba9c(uVar4);
      goto LAB_101a6c868;
    }
  }
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar3 + 0x28) = puVar9;
  *(undefined8 *)(lVar3 + 0x30) = 0x7461447974706d65;
  *(undefined8 *)(lVar3 + 0x38) = 0xe900000000000061;
  lVar5 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  FUN_101a6df80((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efcd570);
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c466bc(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar3);
  puVar7 = puVar6;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x000107c42a28();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      puVar7 = puVar2;
      func_0x000107cd1204();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar2);
    }
  }
  (*pcVar1)(0,0xf000000000000000,0,puVar7);
LAB_101a6c868:
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_2);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 101a6dfd4; end: 101a6e9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101a6dfd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [80];
  
  ppuVar3 = &puStack_d0;
  puVar1 = &UNK_110433770;
  func_0x000107c613fc(&UNK_110433770,0x18,7);
  *(long *)(puVar1 + 0x10) = param_5;
  lVar8 = *(long *)(param_4 + _DAT_112df1008);
  func_0x000107c60bc4(param_5);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar2 = lVar8;
    func_0x000107c43038();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar2 != 0) {
      puVar5 = PTR_PTR_1126b7fc0;
      func_0x000107c610f8(PTR_PTR_1126b7fc0);
      func_0x000107c453e4();
      puVar6 = PTR_PTR_1126bfed0;
      func_0x000107c610f8(PTR_PTR_1126bfed0);
      func_0x000107c45a8c();
      func_0x000107c3d5f8(puVar5);
      func_0x000107c61170(puVar6);
      lVar8 = lVar2;
      func_0x000107c402d8(lVar2);
      func_0x000107c61180();
      puVar6 = &UNK_110433798;
      func_0x000107c613fc(&UNK_110433798,0x30,7);
      *(undefined8 *)(puVar6 + 0x10) = 0x101a6ea38;
      *(undefined **)(puVar6 + 0x18) = puVar1;
      *(long *)(puVar6 + 0x20) = lVar2;
      *(undefined8 *)(puVar6 + 0x28) = param_3;
      uStack_b0 = 0x101a6ea1c;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0x42000000;
      uStack_c0 = 0x101a6ea60;
      puStack_b8 = &UNK_1104337b0;
      puStack_a8 = puVar6;
      func_0x000107c60bc4(&puStack_d0);
      puVar6 = puStack_a8;
      func_0x000107c6157c(puVar1);
      func_0x000107c61174(lVar2);
      func_0x000107c61174(param_3);
      func_0x000107c61574(puVar6);
      func_0x000107c5c8c8(lVar8);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar2);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61574(puVar1);
      func_0x000107c61170(lVar8);
      return puVar5;
    }
  }
  lVar8 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar7 = auStack_a0;
  func_0x000107c61534();
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar8 + 0x20) = uVar4;
  puVar6 = PTR___sSSN_11034da80;
  *(undefined **)(lVar8 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar8 + 0x28) = puVar7;
  *(undefined8 *)(lVar8 + 0x30) = 0xd000000000000019;
  *(undefined8 *)(lVar8 + 0x38) = 0x800000010efcd590;
  lVar2 = lVar8;
  func_0x000100214a84(lVar8);
  func_0x000107c61588(lVar8);
  FUN_101a6df80((undefined8 *)(lVar8 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efcd570);
  lVar8 = lVar2;
  func_0x000107c5f9dc(lVar2,puVar6,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar2);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar8);
  puVar6 = puVar5;
  func_0x000107c5ed2c(puVar5);
  (**(code **)(param_5 + 0x10))(param_5,0,0,puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c2bde0();
  func_0x000107c61180();
  func_0x000107c61574(puVar1);
  return puVar6;
}



/* Entry: 101a6e9b8; end: 101a6e9e3;  */

/* WARNING: Possible PIC construction at 0x000101a6c220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a6c224) */

void FUN_101a6e9b8(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  if (param_4 != 0) {
    func_0x000107c5ed2c(param_4);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a6e9e4; end: 101a6ea17;  */

void FUN_101a6e9e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a6ea18; end: 101a6ea63;  */

void FUN_101a6ea18(undefined8 *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_b0 [80];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar9 = auStack_b0;
  pcVar8 = pcVar1;
  func_0x000107c43e90(param_2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x000107c506c8();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      puVar7 = puVar2;
      func_0x000107c61174();
      func_0x000107c5ee30(puVar2);
      func_0x000107c61170(puVar7);
      puVar6 = puVar7;
      func_0x000107c4adac(puVar7);
      (*pcVar1)(puVar2,pcVar8,puVar6,0);
      func_0x00010006c090(puVar2,pcVar8);
      func_0x000107c4ba9c(uVar4);
      goto LAB_101a6c868;
    }
  }
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar3 + 0x28) = puVar9;
  *(undefined8 *)(lVar3 + 0x30) = 0x7461447974706d65;
  *(undefined8 *)(lVar3 + 0x38) = 0xe900000000000061;
  lVar5 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  FUN_101a6df80((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efcd570);
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c466bc(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar3);
  puVar7 = puVar6;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x000107c42a28();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      puVar7 = puVar2;
      func_0x000107cd1204();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar2);
    }
  }
  (*pcVar1)(0,0xf000000000000000,0,puVar7);
LAB_101a6c868:
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_2);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 101a6ea64; end: 101a6eab7;  */

void FUN_101a6ea64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 101a6eab8; end: 101a6eae3;  */

/* WARNING: Possible PIC construction at 0x000101a6eac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a6ead4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a6eac8) */
/* WARNING: Removing unreachable block (ram,0x000101a6ead8) */

void FUN_101a6eab8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a6eae4; end: 101a6eb63;  */

void FUN_101a6eae4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a6eb64; end: 101a6ef37;  */

void FUN_101a6eb64(long *param_1,long param_2)

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
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x00010022c844();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a8680;
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
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar8 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
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
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 101a6ef38; end: 101a6ef47;  */

void FUN_101a6ef38(long *param_1)

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
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x00010022c844();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a8680;
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
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar9 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
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



/* Entry: 101a6ef48; end: 101a6f2af;  */

long FUN_101a6ef48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar1 = PTR_PTR_1126a8680;
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
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
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



/* Entry: 101a6f2b0; end: 101a6f31b;  */

void FUN_101a6f2b0(void)

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



/* Entry: 101a6f31c; end: 101a6f36f;  */

void FUN_101a6f31c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a6f370; end: 101a6f377;  */

void FUN_101a6f370(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a6f378; end: 101a6f3c7;  */

undefined8 FUN_101a6f378(void)

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



/* Entry: 101a6f3c8; end: 101a6f40b;  */

undefined1  [16] FUN_101a6f3c8(void)

{
  return ZEXT816(0x1104338e0);
}



/* Entry: 101a6f40c; end: 101a6f433;  */

void FUN_101a6f40c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a6f434; end: 101a6f43b;  */

undefined8 FUN_101a6f434(void)

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



/* Entry: 101a6f43c; end: 101a6f823;  */

long FUN_101a6f43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar1 = PTR_PTR_1126a8688;
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
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef855c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
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



/* Entry: 101a6f824; end: 101a6f897;  */

void FUN_101a6f824(void)

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



/* Entry: 101a6f898; end: 101a6f8e7;  */

undefined8 FUN_101a6f898(void)

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



/* Entry: 101a6f8e8; end: 101a6f92b;  */

undefined1  [16] FUN_101a6f8e8(void)

{
  return ZEXT816(0x1104339a8);
}



/* Entry: 101a6f92c; end: 101a6f953;  */

void FUN_101a6f92c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a6f954; end: 101a6f95b;  */

undefined8 FUN_101a6f954(void)

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



/* Entry: 101a6f95c; end: 101a6fc0b;  */

void FUN_101a6f95c(long *param_1,long param_2)

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
  func_0x0001002353ec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8690;
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
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
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



/* Entry: 101a6fc0c; end: 101a6fc17;  */

void FUN_101a6fc0c(long *param_1)

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
  func_0x0001002353ec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8690;
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
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
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



/* Entry: 101a6fc18; end: 101a6fc7b;  */

undefined8
FUN_101a6fc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101a6fc7c(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 101a6fc7c; end: 101a6fedb;  */

void FUN_101a6fc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a8690;
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
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
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



/* Entry: 101a6fedc; end: 101a6ff1f;  */

void FUN_101a6fedc(void)

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



/* Entry: 101a6ff20; end: 101a6ff73;  */

void FUN_101a6ff20(undefined8 *param_1)

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



/* Entry: 101a6ff74; end: 101a6ff7b;  */

void FUN_101a6ff74(undefined8 *param_1)

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



/* Entry: 101a6ff7c; end: 101a6ffcb;  */

undefined8 FUN_101a6ff7c(void)

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



/* Entry: 101a6ffcc; end: 101a7000f;  */

undefined1  [16] FUN_101a6ffcc(void)

{
  return ZEXT816(0x110433a70);
}



/* Entry: 101a70010; end: 101a70037;  */

void FUN_101a70010(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a70038; end: 101a7003f;  */

undefined8 FUN_101a70038(void)

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



/* Entry: 101a70040; end: 101a70a57;  */

long FUN_101a70040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_5;
  *(undefined8 *)(unaff_x20 + 0x58) = param_6;
  *(undefined8 *)(unaff_x20 + 0x60) = param_7;
  *(undefined8 *)(unaff_x20 + 0x68) = param_8;
  *(undefined8 *)(unaff_x20 + 0x70) = param_9;
  *(undefined8 *)(unaff_x20 + 0x78) = param_10;
  *(undefined8 *)(unaff_x20 + 0x80) = param_11;
  *(undefined8 *)(unaff_x20 + 0x88) = param_12;
  *(undefined8 *)(unaff_x20 + 0x90) = param_13;
  *(undefined8 *)(unaff_x20 + 0x98) = param_14;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_15;
  puVar2 = PTR_PTR_1126a7200;
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
  func_0x000107c61174(param_13);
  func_0x000107c61174();
  func_0x000107c61174(param_15);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar4 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  puVar5 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  puVar6 = PTR_PTR_1126a8698;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef29e30);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2ff30);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef3c3c0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(puVar6);
  func_0x000107c61174();
  uVar7 = 0x7365636976726573;
  func_0x000107c5fadc(0x7365636976726573,0xef7265736f707845);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efcd670);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efcd690);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efcd6b0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(puVar6);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a70a4c);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0xa8) = puVar2;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a70a50);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0xb0) = puVar3;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a70a54);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0xb8) = puVar4;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(param_15);
    *(undefined **)(unaff_x20 + 0xc0) = puVar5;
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
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a70a58);
  (*pcVar1)();
}



/* Entry: 101a70a58; end: 101a70b43;  */

void FUN_101a70a58(void)

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
  return;
}



/* Entry: 101a70b44; end: 101a70b97;  */

void FUN_101a70b44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a70b98; end: 101a70be7;  */

undefined8 FUN_101a70b98(void)

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



/* Entry: 101a70be8; end: 101a70c63;  */

void FUN_101a70be8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a70c64; end: 101a70c8b;  */

void FUN_101a70c64(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a70c8c; end: 101a70c93;  */

undefined8 FUN_101a70c8c(void)

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


