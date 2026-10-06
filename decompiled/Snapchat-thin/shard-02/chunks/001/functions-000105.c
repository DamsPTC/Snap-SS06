/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10197ad9c; end: 10197adc3;  */

void FUN_10197ad9c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197adc4; end: 10197adcb;  */

undefined8 FUN_10197adc4(void)

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



/* Entry: 10197adcc; end: 10197ae07;  */

undefined8 FUN_10197adcc(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100644060(param_1);
  return unaff_x20;
}



/* Entry: 10197ae08; end: 10197ae33;  */

void FUN_10197ae08(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10197ae34; end: 10197ae83;  */

undefined8 FUN_10197ae34(void)

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



/* Entry: 10197ae84; end: 10197aec7;  */

undefined1  [16] FUN_10197ae84(void)

{
  return ZEXT816(0x11041ce60);
}



/* Entry: 10197aec8; end: 10197aeef;  */

void FUN_10197aec8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197aef0; end: 10197aef7;  */

undefined8 FUN_10197aef0(void)

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



/* Entry: 10197aef8; end: 10197af5b;  */

undefined8
FUN_10197aef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10197af5c(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 10197af5c; end: 10197b1bf;  */

void FUN_10197af5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a80d8;
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
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
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



/* Entry: 10197b1c0; end: 10197b203;  */

void FUN_10197b1c0(void)

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



/* Entry: 10197b204; end: 10197b253;  */

undefined8 FUN_10197b204(void)

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



/* Entry: 10197b254; end: 10197b297;  */

undefined1  [16] FUN_10197b254(void)

{
  return ZEXT816(0x11041cf28);
}



/* Entry: 10197b298; end: 10197b2bf;  */

void FUN_10197b298(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197b2c0; end: 10197b2c7;  */

undefined8 FUN_10197b2c0(void)

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



/* Entry: 10197b2c8; end: 10197b303;  */

undefined8 FUN_10197b2c8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006634e0(param_1);
  return unaff_x20;
}



/* Entry: 10197b304; end: 10197b32f;  */

void FUN_10197b304(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10197b330; end: 10197b37f;  */

undefined8 FUN_10197b330(void)

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



/* Entry: 10197b380; end: 10197b3c3;  */

undefined1  [16] FUN_10197b380(void)

{
  return ZEXT816(0x11041cfc8);
}



/* Entry: 10197b3c4; end: 10197b3eb;  */

void FUN_10197b3c4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197b3ec; end: 10197b3f3;  */

undefined8 FUN_10197b3ec(void)

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



/* Entry: 10197b3f4; end: 10197b43f;  */

undefined8 FUN_10197b3f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006464f0(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10197b440; end: 10197b473;  */

void FUN_10197b440(void)

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



/* Entry: 10197b474; end: 10197b4c3;  */

undefined8 FUN_10197b474(void)

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



/* Entry: 10197b4c4; end: 10197b507;  */

undefined1  [16] FUN_10197b4c4(void)

{
  return ZEXT816(0x11041d090);
}



/* Entry: 10197b508; end: 10197b52f;  */

void FUN_10197b508(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197b530; end: 10197b537;  */

undefined8 FUN_10197b530(void)

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



/* Entry: 10197b538; end: 10197ba93;  */

long FUN_10197b538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

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
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a80f0;
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
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4130);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc4150);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4170);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4190);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc41b0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc41d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_9);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c8a0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc41f0);
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
    *(undefined **)(unaff_x20 + 0x60) = puVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197ba94);
  (*pcVar1)();
}



/* Entry: 10197ba94; end: 10197bb1f;  */

void FUN_10197ba94(void)

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



/* Entry: 10197bb20; end: 10197bb6f;  */

undefined8 FUN_10197bb20(void)

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



/* Entry: 10197bb70; end: 10197bbb3;  */

undefined1  [16] FUN_10197bb70(void)

{
  return ZEXT816(0x11041d158);
}



/* Entry: 10197bbb4; end: 10197bbdb;  */

void FUN_10197bbb4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197bbdc; end: 10197bbe3;  */

undefined8 FUN_10197bbdc(void)

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



/* Entry: 10197bbe4; end: 10197bc2f;  */

undefined8 FUN_10197bbe4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010046aad0(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10197bc30; end: 10197bc63;  */

void FUN_10197bc30(void)

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



/* Entry: 10197bc64; end: 10197bcb3;  */

undefined8 FUN_10197bc64(void)

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



/* Entry: 10197bcb4; end: 10197bcf7;  */

undefined1  [16] FUN_10197bcb4(void)

{
  return ZEXT816(0x11041d220);
}



/* Entry: 10197bcf8; end: 10197bd1f;  */

void FUN_10197bcf8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197bd20; end: 10197bd27;  */

undefined8 FUN_10197bd20(void)

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



/* Entry: 10197bd28; end: 10197bd73;  */

undefined8 FUN_10197bd28(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010064433c(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10197bd74; end: 10197bda7;  */

void FUN_10197bd74(void)

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



/* Entry: 10197bda8; end: 10197bdf7;  */

undefined8 FUN_10197bda8(void)

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



/* Entry: 10197bdf8; end: 10197be3b;  */

undefined1  [16] FUN_10197bdf8(void)

{
  return ZEXT816(0x11041d2e8);
}



/* Entry: 10197be3c; end: 10197be63;  */

void FUN_10197be3c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197be64; end: 10197be6b;  */

undefined8 FUN_10197be64(void)

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



/* Entry: 10197be6c; end: 10197bea7;  */

undefined8 FUN_10197be6c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010065c43c(param_1);
  return unaff_x20;
}



/* Entry: 10197bea8; end: 10197bed3;  */

void FUN_10197bea8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10197bed4; end: 10197bf23;  */

undefined8 FUN_10197bed4(void)

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



/* Entry: 10197bf24; end: 10197bf67;  */

undefined1  [16] FUN_10197bf24(void)

{
  return ZEXT816(0x11041d388);
}



/* Entry: 10197bf68; end: 10197bf8f;  */

void FUN_10197bf68(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197bf90; end: 10197bf97;  */

undefined8 FUN_10197bf90(void)

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



/* Entry: 10197bf98; end: 10197bfd3;  */

undefined8 FUN_10197bf98(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100647a78(param_1);
  return unaff_x20;
}



/* Entry: 10197bfd4; end: 10197bfff;  */

void FUN_10197bfd4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10197c000; end: 10197c04f;  */

undefined8 FUN_10197c000(void)

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



/* Entry: 10197c050; end: 10197c093;  */

undefined1  [16] FUN_10197c050(void)

{
  return ZEXT816(0x11041d428);
}



/* Entry: 10197c094; end: 10197c0bb;  */

void FUN_10197c094(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197c0bc; end: 10197c0c3;  */

undefined8 FUN_10197c0bc(void)

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



/* Entry: 10197c0c4; end: 10197c117;  */

undefined8 FUN_10197c0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006438a0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10197c118; end: 10197c153;  */

void FUN_10197c118(void)

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



/* Entry: 10197c154; end: 10197c1a3;  */

undefined8 FUN_10197c154(void)

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



/* Entry: 10197c1a4; end: 10197c1e7;  */

undefined1  [16] FUN_10197c1a4(void)

{
  return ZEXT816(0x11041d4f0);
}



/* Entry: 10197c1e8; end: 10197c20f;  */

void FUN_10197c1e8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10197c210; end: 10197c217;  */

undefined8 FUN_10197c210(void)

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



/* Entry: 10197c218; end: 10197c27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197c218(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ddddc8;
  lVar2 = unaff_x20;
  FUN_10197ca4c();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ddddd0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197c280; end: 10197c2f3; -[SCMentionSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197c280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ddddc8;
  func_0x000107c61174();
  uVar3 = param_3;
  FUN_10197ca4c();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112ddddd0) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197c2f4; end: 10197c363; -[SCMentionSticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197c2f4(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112ddddc8;
  lVar3 = param_1;
  FUN_10197ca4c();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCMentionSticker/MentionSticker.swift",0x25,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10197c364);
  (*pcVar2)();
}



/* Entry: 10197c364; end: 10197c45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10197c364(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    func_0x000107c6147c(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x00010197c97c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ddddd0);
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_112ddddd0);
      func_0x000107c61174(uVar3);
      func_0x000107c61174(uVar6);
      uVar4 = uVar3;
      func_0x000107c60118(uVar3,uVar6);
      uVar5 = (uint)uVar4;
      func_0x000107c61170(lStack_68);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar6);
      goto LAB_10197c444;
    }
  }
  uVar5 = 0;
LAB_10197c444:
  return uVar5 & 1;
}



/* Entry: 10197c460; end: 10197c4df; -[SCMentionSticker isEqual:] */

uint FUN_10197c460(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_10197c364(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10197c4e0; end: 10197c50b; -[SCMentionSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10197c4e0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112ddddc8);
  func_0x000107c44c3c(uVar1);
  return uVar1 ^ 0x5504762;
}



/* Entry: 10197c50c; end: 10197c513; -[SCMentionSticker infoType] */

undefined8 FUN_10197c50c(void)

{
  return 8;
}



/* Entry: 10197c514; end: 10197c51f; -[SCMentionSticker stickerId] */

void FUN_10197c514(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x4e4f49544e454d;
  uVar3 = 0xe700000000000000;
  func_0x000107c5fadc(0x4e4f49544e454d,0xe700000000000000);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb990)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197c520; end: 10197c52b; -[SCMentionSticker shortLoggingName] */

void FUN_10197c520(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x4e4f49544e454d;
  uVar3 = 0xe700000000000000;
  func_0x000107c5fadc(0x4e4f49544e454d,0xe700000000000000);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb9cc)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197c52c; end: 10197c5a3;  */

void FUN_10197c52c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x4e4f49544e454d;
  uVar3 = 0xe700000000000000;
  func_0x000107c5fadc(0x4e4f49544e454d,0xe700000000000000);
  lVar2 = lVar1;
  (*param_3)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197c5a4; end: 10197c5b3; -[SCMentionSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197c5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ddddc8));
  return;
}



/* Entry: 10197c5b4; end: 10197c5c3; -[SCMentionSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197c5b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ddddd0));
  return;
}



/* Entry: 10197c5c4; end: 10197c5f7; -[SCMentionSticker updateItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197c5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ddddd0);
  *(undefined8 *)(param_1 + _DAT_112ddddd0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10197c5f8; end: 10197c5ff; -[SCMentionSticker supportedFlows] */

undefined8 FUN_10197c5f8(void)

{
  return 0;
}



/* Entry: 10197c600; end: 10197c60f; -[SCMentionSticker intrinsicSize] */

undefined1  [16] FUN_10197c600(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 10197c610; end: 10197c7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10197c610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5d0f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ddddc8);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ddddd0);
  puVar1 = PTR_PTR_1126ba898;
  func_0x000107c610f8(PTR_PTR_1126ba898);
  uVar2 = 0;
  func_0x00010197c97c(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c5fc48(param_7,uVar2);
  uVar2 = 0;
  func_0x00010197c97c(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc48(param_10,uVar2);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  return puVar1;
}



/* Entry: 10197c7c0; end: 10197c8e3; -[SCMentionSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_10197c7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010197c97c(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0;
  func_0x00010197c97c(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc54(param_12,uVar1);
  func_0x000107c61174(param_7);
  uVar1 = param_9;
  FUN_10197c610(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10197c8e4; end: 10197c943; -[SCMentionSticker init] */

void FUN_10197c8e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMentionSticker.MentionSticker",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197c910);
  (*pcVar1)();
}



/* Entry: 10197c944; end: 10197c9bb; -[SCMentionSticker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010197c960: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010197c964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197c944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ddddc8));
  return;
}



/* Entry: 10197c9bc; end: 10197c9db;  */

void FUN_10197c9bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee5c8);
  return;
}



/* Entry: 10197c9dc; end: 10197ca17; -[SCMentionStickerHelpers init] */

void FUN_10197c9dc(undefined8 param_1)

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



/* Entry: 10197ca18; end: 10197ca4b;  */

void FUN_10197ca18(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10197ca4c; end: 10197cbbb;  */

undefined * FUN_10197ca4c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    func_0x00010197cbdc();
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  func_0x000107c61174();
  uVar4 = 0x4e4f49544e454d;
  func_0x000107c5fadc(0x4e4f49544e454d,0xe700000000000000);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10197cbbc);
  (*pcVar1)();
}



/* Entry: 10197cbbc; end: 10197cc1f;  */

void FUN_10197cbbc(void)

{
  func_0x000107c61168(&PTR_PTR_1127ee690);
  return;
}



/* Entry: 10197cc20; end: 10197cc87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197cc20(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ddde28;
  lVar2 = unaff_x20;
  FUN_10197d438();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ddde30) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197cc88; end: 10197ccfb; -[SCSnapcodeSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197cc88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ddde28;
  func_0x000107c61174();
  uVar3 = param_3;
  FUN_10197d438();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112ddde30) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10197ccfc; end: 10197cd6b; -[SCSnapcodeSticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197ccfc(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112ddde28;
  lVar3 = param_1;
  FUN_10197d438();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCSnapcodeSticker/SCSnapcodeSticker.swift",0x29,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10197cd6c);
  (*pcVar2)();
}



/* Entry: 10197cd6c; end: 10197ce67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10197cd6c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    func_0x000107c6147c(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x00010197d368(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ddde30);
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_112ddde30);
      func_0x000107c61174(uVar3);
      func_0x000107c61174(uVar6);
      uVar4 = uVar3;
      func_0x000107c60118(uVar3,uVar6);
      uVar5 = (uint)uVar4;
      func_0x000107c61170(lStack_68);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar6);
      goto LAB_10197ce4c;
    }
  }
  uVar5 = 0;
LAB_10197ce4c:
  return uVar5 & 1;
}



/* Entry: 10197ce68; end: 10197cee7; -[SCSnapcodeSticker isEqual:] */

uint FUN_10197ce68(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_10197cd6c(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10197cee8; end: 10197cef7; -[SCSnapcodeSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197cee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ddde28),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10197cef8; end: 10197ceff; -[SCSnapcodeSticker infoType] */

undefined8 FUN_10197cef8(void)

{
  return 9;
}



/* Entry: 10197cf00; end: 10197cf0b; -[SCSnapcodeSticker stickerId] */

void FUN_10197cf00(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x45444f4350414e53;
  uVar3 = 0xe800000000000000;
  func_0x000107c5fadc(0x45444f4350414e53,0xe800000000000000);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb990)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197cf0c; end: 10197cf17; -[SCSnapcodeSticker shortLoggingName] */

void FUN_10197cf0c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x45444f4350414e53;
  uVar3 = 0xe800000000000000;
  func_0x000107c5fadc(0x45444f4350414e53,0xe800000000000000);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb9cc)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197cf18; end: 10197cf8f;  */

void FUN_10197cf18(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x45444f4350414e53;
  uVar3 = 0xe800000000000000;
  func_0x000107c5fadc(0x45444f4350414e53,0xe800000000000000);
  lVar2 = lVar1;
  (*param_3)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10197cf90; end: 10197cf9f; -[SCSnapcodeSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197cf90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ddde28));
  return;
}



/* Entry: 10197cfa0; end: 10197cfaf; -[SCSnapcodeSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197cfa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ddde30));
  return;
}



/* Entry: 10197cfb0; end: 10197cfe3; -[SCSnapcodeSticker updateItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10197cfb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ddde30);
  *(undefined8 *)(param_1 + _DAT_112ddde30) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


