/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102df3c38; end: 102df3cab;  */

void FUN_102df3c38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x00010032fda8();
  func_0x000107c613fc();
  FUN_102df3d00(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 102df3cac; end: 102df3cb3;  */

void FUN_102df3cac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  func_0x00010032fda8();
  func_0x000107c613fc();
  FUN_102df3d00(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df3cb4; end: 102df3cff;  */

undefined8 FUN_102df3cb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102df3d00(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102df3d00; end: 102df3e63;  */

void FUN_102df3d00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126ac528;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
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
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
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



/* Entry: 102df3e64; end: 102df3e97;  */

void FUN_102df3e64(void)

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



/* Entry: 102df3e98; end: 102df3eeb;  */

void FUN_102df3e98(undefined8 *param_1)

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



/* Entry: 102df3eec; end: 102df3ef3;  */

void FUN_102df3eec(undefined8 *param_1)

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



/* Entry: 102df3ef4; end: 102df3f43;  */

undefined8 FUN_102df3ef4(void)

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



/* Entry: 102df3f44; end: 102df3f87;  */

undefined1  [16] FUN_102df3f44(void)

{
  return ZEXT816(0x1105d4d00);
}



/* Entry: 102df3f88; end: 102df3faf;  */

void FUN_102df3f88(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df3fb0; end: 102df3fb7;  */

undefined8 FUN_102df3fb0(void)

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



/* Entry: 102df3fb8; end: 102df47af;  */

void FUN_102df3fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
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
  puVar1 = PTR_PTR_1126cc9a0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_12);
  func_0x000107c61174();
  func_0x000107c615f0(param_14);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  uVar2 = uVar4;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03ee50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f03ef30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc6f10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1f610);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c615f0(param_14);
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3db20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  uVar2 = 0x112de3bf8;
  func_0x0001000285a8(0x112de3bf8,&UNK_10da415a0);
  func_0x000107c60184();
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6af0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar4);
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
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c615e8(param_14);
  func_0x000107c61170(param_15);
  *(undefined **)(unaff_x20 + 0x88) = puVar3;
  return;
}



/* Entry: 102df47b0; end: 102df4863;  */

void FUN_102df47b0(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 102df4864; end: 102df48b3;  */

undefined8 FUN_102df4864(void)

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



/* Entry: 102df48b4; end: 102df48f7;  */

undefined1  [16] FUN_102df48b4(void)

{
  return ZEXT816(0x1105d4dc8);
}



/* Entry: 102df48f8; end: 102df491f;  */

void FUN_102df48f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df4920; end: 102df4927;  */

undefined8 FUN_102df4920(void)

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



/* Entry: 102df4928; end: 102df4973;  */

undefined8 FUN_102df4928(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010076a348(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102df4974; end: 102df49a7;  */

void FUN_102df4974(void)

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



/* Entry: 102df49a8; end: 102df49f7;  */

undefined8 FUN_102df49a8(void)

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



/* Entry: 102df49f8; end: 102df4a3b;  */

undefined1  [16] FUN_102df49f8(void)

{
  return ZEXT816(0x1105d4e90);
}



/* Entry: 102df4a3c; end: 102df4a63;  */

void FUN_102df4a3c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df4a64; end: 102df4a6b;  */

undefined8 FUN_102df4a64(void)

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



/* Entry: 102df4a6c; end: 102df4aff;  */

void FUN_102df4a6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010034eed4();
  func_0x000107c613fc();
  FUN_102df4b60(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102df4b00; end: 102df4b0b;  */

void FUN_102df4b00(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010034eed4();
  func_0x000107c613fc();
  FUN_102df4b60(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df4b0c; end: 102df4b5f;  */

undefined8 FUN_102df4b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102df4b60(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102df4b60; end: 102df4d7b;  */

void FUN_102df4b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112f1af90,&UNK_10db53738);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  uVar2 = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ac538;
  func_0x000107c610f8();
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
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar4);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f03ed80);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0522b0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar4;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102df4d7c; end: 102df4db7;  */

void FUN_102df4d7c(void)

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



/* Entry: 102df4db8; end: 102df4e0b;  */

void FUN_102df4db8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df4e0c; end: 102df4e13;  */

void FUN_102df4e0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df4e14; end: 102df4e63;  */

undefined8 FUN_102df4e14(void)

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



/* Entry: 102df4e64; end: 102df4ea7;  */

undefined1  [16] FUN_102df4e64(void)

{
  return ZEXT816(0x1105d4f58);
}



/* Entry: 102df4ea8; end: 102df4ecf;  */

void FUN_102df4ea8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df4ed0; end: 102df4ed7;  */

undefined8 FUN_102df4ed0(void)

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



/* Entry: 102df4ed8; end: 102df4f4b;  */

void FUN_102df4ed8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x0001003412d8();
  func_0x000107c613fc();
  FUN_102df4fa0(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 102df4f4c; end: 102df4f53;  */

void FUN_102df4f4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  func_0x0001003412d8();
  func_0x000107c613fc();
  FUN_102df4fa0(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df4f54; end: 102df4f9f;  */

undefined8 FUN_102df4f54(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102df4fa0(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102df4fa0; end: 102df513b;  */

void FUN_102df4fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x0001000285a8(0x112e4cce8,&UNK_10daf7050);
  func_0x000107c610f8();
  uVar2 = param_2;
  func_0x000107c6157c(param_2);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ac540;
  func_0x000107c610f8();
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
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef21f80);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar4;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 102df513c; end: 102df516f;  */

void FUN_102df513c(void)

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



/* Entry: 102df5170; end: 102df51c3;  */

void FUN_102df5170(undefined8 *param_1)

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



/* Entry: 102df51c4; end: 102df51cb;  */

void FUN_102df51c4(undefined8 *param_1)

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



/* Entry: 102df51cc; end: 102df521b;  */

undefined8 FUN_102df51cc(void)

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



/* Entry: 102df521c; end: 102df525f;  */

undefined1  [16] FUN_102df521c(void)

{
  return ZEXT816(0x1105d5020);
}



/* Entry: 102df5260; end: 102df5287;  */

void FUN_102df5260(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df5288; end: 102df528f;  */

undefined8 FUN_102df5288(void)

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



/* Entry: 102df5290; end: 102df52cb;  */

undefined8 FUN_102df5290(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100b5a2b4(param_1);
  return unaff_x20;
}



/* Entry: 102df52cc; end: 102df52f7;  */

void FUN_102df52cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df52f8; end: 102df5347;  */

undefined8 FUN_102df52f8(void)

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



/* Entry: 102df5348; end: 102df538b;  */

undefined1  [16] FUN_102df5348(void)

{
  return ZEXT816(0x1105d50c0);
}



/* Entry: 102df538c; end: 102df53b3;  */

void FUN_102df538c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df53b4; end: 102df53bb;  */

undefined8 FUN_102df53b4(void)

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



/* Entry: 102df53bc; end: 102df5407;  */

undefined8 FUN_102df53bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001007b9244(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102df5408; end: 102df543b;  */

void FUN_102df5408(void)

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



/* Entry: 102df543c; end: 102df548b;  */

undefined8 FUN_102df543c(void)

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



/* Entry: 102df548c; end: 102df54cf;  */

undefined1  [16] FUN_102df548c(void)

{
  return ZEXT816(0x1105d5188);
}



/* Entry: 102df54d0; end: 102df54f7;  */

void FUN_102df54d0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df54f8; end: 102df54ff;  */

undefined8 FUN_102df54f8(void)

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



/* Entry: 102df5500; end: 102df553b;  */

undefined8 FUN_102df5500(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100b58168(param_1);
  return unaff_x20;
}



/* Entry: 102df553c; end: 102df5567;  */

void FUN_102df553c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df5568; end: 102df55b7;  */

undefined8 FUN_102df5568(void)

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



/* Entry: 102df55b8; end: 102df55fb;  */

undefined1  [16] FUN_102df55b8(void)

{
  return ZEXT816(0x1105d5228);
}



/* Entry: 102df55fc; end: 102df5623;  */

void FUN_102df55fc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df5624; end: 102df562b;  */

undefined8 FUN_102df5624(void)

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



/* Entry: 102df562c; end: 102df569f;  */

void FUN_102df562c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x000100333354();
  func_0x000107c613fc();
  FUN_102df56f4(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 102df56a0; end: 102df56a7;  */

void FUN_102df56a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  func_0x000100333354();
  func_0x000107c613fc();
  FUN_102df56f4(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df56a8; end: 102df56f3;  */

undefined8 FUN_102df56a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102df56f4(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102df56f4; end: 102df5857;  */

void FUN_102df56f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126ac560;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
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
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
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



/* Entry: 102df5858; end: 102df588b;  */

void FUN_102df5858(void)

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



/* Entry: 102df588c; end: 102df58df;  */

void FUN_102df588c(undefined8 *param_1)

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



/* Entry: 102df58e0; end: 102df58e7;  */

void FUN_102df58e0(undefined8 *param_1)

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



/* Entry: 102df58e8; end: 102df5937;  */

undefined8 FUN_102df58e8(void)

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



/* Entry: 102df5938; end: 102df597b;  */

undefined1  [16] FUN_102df5938(void)

{
  return ZEXT816(0x1105d52f0);
}



/* Entry: 102df597c; end: 102df59a3;  */

void FUN_102df597c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df59a4; end: 102df59ab;  */

undefined8 FUN_102df59a4(void)

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



/* Entry: 102df59ac; end: 102df5adb;  */

void FUN_102df59ac(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar6 = *unaff_x20;
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = uStack_50;
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  pcVar2 = FUN_102df5adc;
  func_0x0001000d5158(FUN_102df5adc,0,&UNK_11069f2c8);
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(auStack_68);
  puVar3 = &UNK_1105d5448;
  func_0x000107c613fc(&UNK_1105d5448,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_1105d5470;
  func_0x000107c613fc(&UNK_1105d5470,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  pcVar5 = FUN_102df5ea8;
  puVar3 = puVar4;
  (**(code **)(*(long *)pcVar2 + 0x60))(FUN_102df5ea8);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(puVar4);
  pcVar2 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar3 + 0x10))(unaff_x20[4],pcVar2,puVar3);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 102df5adc; end: 102df5afb;  */

/* WARNING: Possible PIC construction at 0x000102df5f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102df5f74) */

long FUN_102df5adc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_2;
  lVar4 = param_2[1];
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  *param_1 = lVar1;
  param_1[1] = lVar4;
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  *(char *)(param_1 + 4) = (char)param_2[4];
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(lVar4);
    return lVar4;
  }
  return lVar1;
}



/* Entry: 102df5afc; end: 102df5c5f;  */

void FUN_102df5afc(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  ppuVar3 = *(undefined ***)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  ppuVar2 = &PTR____CFConstantStringClassReference_110f31158;
  lVar5 = param_2;
  func_0x000107c5faec();
  if (ppuVar3 == ppuVar2 && lVar1 == lVar5) {
    func_0x000107c6142c(lVar5);
  }
  else {
    func_0x000107c605b8(ppuVar3,lVar1,ppuVar2,lVar5,0);
    func_0x000107c6142c(lVar5);
    if (((ulong)ppuVar3 & 1) == 0) {
      return;
    }
  }
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(&uStack_70);
    func_0x000107c61574(uVar6);
    puVar4 = &UNK_1105d5498;
    func_0x000107c613fc(&UNK_1105d5498,0x28,7);
    *(undefined8 *)(puVar4 + 0x18) = uStack_68;
    *(undefined8 *)(puVar4 + 0x10) = uStack_70;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    func_0x000107c615f0(uStack_70);
    uVar6 = 0xb;
    func_0x0001009548b0(0xb,4,0x38,4,0,0,&UNK_10db54170,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(uStack_70);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 102df5c60; end: 102df5cdb;  */

void FUN_102df5c60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  func_0x000107c614f0(param_2);
  piVar3 = *(int **)(param_3 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102df5cdc;
                    /* WARNING: Could not recover jumptable at 0x000102df5cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_2,param_3);
  return;
}



/* Entry: 102df5cdc; end: 102df5d3f;  */

void FUN_102df5cdc(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x38) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102df5d40,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102df5d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 102df5d40; end: 102df5e2f;  */

void FUN_102df5d40(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c602fc(0x26);
  puVar2 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar2 = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000024,0x800000010f10e4f0);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x20),puVar2,uVar4,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001007d6c6c(3,*puVar2,uVar4,uVar3,&PTR_DAT_1105d5418);
  func_0x000107c6142c(uVar4);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102df5e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102df5e30; end: 102df5e63;  */

void FUN_102df5e30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df5e64; end: 102df5e87;  */

void FUN_102df5e64(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102df5e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102df5e88; end: 102df5ea7;  */

void FUN_102df5e88(void)

{
  func_0x000107c61168(&PTR_PTR_112f1b550);
  return;
}



/* Entry: 102df5ea8; end: 102df5eaf;  */

void FUN_102df5ea8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar3 = *(undefined ***)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  ppuVar2 = &PTR____CFConstantStringClassReference_110f31158;
  lVar7 = lVar4;
  func_0x000107c5faec();
  if (ppuVar3 == ppuVar2 && lVar1 == lVar7) {
    func_0x000107c6142c(lVar7);
  }
  else {
    func_0x000107c605b8(ppuVar3,lVar1,ppuVar2,lVar7,0);
    func_0x000107c6142c(lVar7);
    if (((ulong)ppuVar3 & 1) == 0) {
      return;
    }
  }
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(lVar4 + 0x18);
    func_0x000107c6157c(uVar8);
    func_0x000107c61574(lVar4);
    func_0x0001000d224c(&uStack_70);
    func_0x000107c61574(uVar8);
    puVar5 = &UNK_1105d5498;
    func_0x000107c613fc(&UNK_1105d5498,0x28,7);
    *(undefined8 *)(puVar5 + 0x18) = uStack_68;
    *(undefined8 *)(puVar5 + 0x10) = uStack_70;
    *(undefined8 *)(puVar5 + 0x20) = uVar6;
    func_0x000107c615f0(uStack_70);
    uVar6 = 0xb;
    func_0x0001009548b0(0xb,4,0x38,4,0,0,&UNK_10db54170,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(uStack_70);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 102df5eb0; end: 102df5f1b;  */

void FUN_102df5eb0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102df5f1c;
  plVar5[5] = lVar7;
  func_0x000107c614f0(uVar3);
  piVar6 = *(int **)(lVar2 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  plVar5[6] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_102df5cdc;
                    /* WARNING: Could not recover jumptable at 0x000102df5cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar3,lVar2);
  return;
}



/* Entry: 102df5f1c; end: 102df5f57;  */

void FUN_102df5f1c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102df5f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102df5f58; end: 102df5fb7;  */

/* WARNING: Possible PIC construction at 0x000102df5f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102df5f74) */

void FUN_102df5f58(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 102df5fb8; end: 102df6487;  */

void FUN_102df5fb8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    uVar1 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f10e520);
    lVar2 = lStack_38;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    func_0x000107c61170(uVar1);
    if (lVar2 != 0) {
      uVar1 = 0x112d373e8;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      lVar2 = 0;
      func_0x000107c5eea4();
      uVar3 = param_1;
      func_0x000107c6147c(param_1,&lStack_38,uVar1,lVar2,6);
      pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
      uVar4 = (uint)uVar3 ^ 1;
      goto LAB_102df60ac;
    }
  }
  lVar2 = 0;
  func_0x000107c5eea4();
  pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  uVar4 = 1;
LAB_102df60ac:
  (*pcVar5)(param_1,uVar4,1,lVar2);
  return;
}



/* Entry: 102df6488; end: 102df66a3;  */

void FUN_102df6488(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x000107c5ee70();
    uVar3 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f10e520);
    func_0x000107c56bcc(lStack_58);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    lVar4 = 0;
    func_0x0001038a5e54();
    lVar2 = lVar4;
    func_0x000107c5ee70((long)*(int *)(lVar4 + 0x14));
    uVar3 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f10e540);
    func_0x000107c56bcc(lStack_58);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    puVar1 = PTR___sSSN_11034da80;
    uVar3 = *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
    func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
    uVar5 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f10e560);
    func_0x000107c56bcc(lStack_58);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    uVar3 = *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x20));
    func_0x000107c5f9dc(uVar3,puVar1,PTR___sSiN_11034deb0,PTR___sSSSHsWP_11034da90);
    uVar5 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f10e580);
    func_0x000107c56bcc(lStack_58);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    uVar3 = *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x1c));
    func_0x000107c5fc48(uVar3,puVar1);
    uVar5 = 0x6e6565732e424744;
    func_0x000107c5fadc(0x6e6565732e424744,0xef736449736e654c);
    func_0x000107c56bcc(lStack_58);
    func_0x000107c61170(lStack_58);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 102df66a4; end: 102df674f;  */

void FUN_102df66a4(undefined8 param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,PTR___sSiN_11034deb0,PTR___sSSSHsWP_11034da90);
    uVar1 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f10e580);
    func_0x000107c56bcc(lStack_38);
    func_0x000107c61170(lStack_38);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102df6750; end: 102df6773;  */

void FUN_102df6750(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df6774; end: 102df678b;  */

void FUN_102df6774(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    uVar1 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f10e520);
    lVar2 = lStack_38;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    func_0x000107c61170(uVar1);
    if (lVar2 != 0) {
      uVar1 = 0x112d373e8;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      lVar2 = 0;
      func_0x000107c5eea4();
      uVar3 = param_1;
      func_0x000107c6147c(param_1,&lStack_38,uVar1,lVar2,6);
      pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
      uVar4 = (uint)uVar3 ^ 1;
      goto LAB_102df60ac;
    }
  }
  lVar2 = 0;
  func_0x000107c5eea4();
  pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  uVar4 = 1;
LAB_102df60ac:
  (*pcVar5)(param_1,uVar4,1,lVar2);
  return;
}



/* Entry: 102df678c; end: 102df682f;  */

void FUN_102df678c(undefined8 param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
    uVar1 = 0x6e6565732e424744;
    func_0x000107c5fadc(0x6e6565732e424744,0xef736449736e654c);
    func_0x000107c56bcc(lStack_38);
    func_0x000107c61170(lStack_38);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102df6830; end: 102df6833;  */

void FUN_102df6830(undefined8 param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,PTR___sSiN_11034deb0,PTR___sSSSHsWP_11034da90);
    uVar1 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f10e580);
    func_0x000107c56bcc(lStack_38);
    func_0x000107c61170(lStack_38);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102df6834; end: 102df6853;  */

void FUN_102df6834(void)

{
  func_0x000107c61168(&PTR_PTR_112f1b600);
  return;
}



/* Entry: 102df6854; end: 102df695f;  */

undefined * FUN_102df6854(long param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f1b660,&UNK_10db541b8);
    puVar7 = puVar10;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar4 = puVar11[-2];
      uVar5 = *(undefined1 *)(puVar11 + -1);
      uVar12 = *puVar11;
      func_0x000107c61434(uVar4);
      uVar8 = uVar3;
      uVar9 = uVar4;
      func_0x000100029284();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102df695c);
        (*pcVar6)();
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar9 + 0x40) = *(ulong *)(puVar7 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar2 = (undefined1 *)(*(long *)(puVar7 + 0x38) + uVar8 * 0x10);
      *puVar2 = uVar5;
      *(undefined8 *)(puVar2 + 8) = uVar12;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102df6960);
        (*pcVar6)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      puVar10 = puVar10 + -1;
      puVar11 = puVar11 + 4;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar7);
  }
  return puVar7;
}



/* Entry: 102df6960; end: 102df6997;  */

void FUN_102df6960(undefined8 param_1)

{
  if (lRam0000000112f1b7c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7323dc);
  return;
}



/* Entry: 102df6998; end: 102df6a17;  */

undefined8 FUN_102df6998(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_4;
  func_0x0001000c6518(param_4,*(undefined8 *)(param_4 + 0x18));
  func_0x000102df9ba0(param_1,param_2,param_3,lVar1);
  func_0x0001000834e4(param_4);
  return param_1;
}



/* Entry: 102df6a18; end: 102df6a2f;  */

void FUN_102df6a18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102df6a30,0,0);
  return;
}



/* Entry: 102df6a30; end: 102df6a8b;  */

void FUN_102df6a30(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102df6a8c();
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102df6a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


