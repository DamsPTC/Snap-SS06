/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030fe970; end: 1030febd7;  */

void FUN_1030fe970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126acc58;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f123410);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0dbd30);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc6cf0);
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



/* Entry: 1030febd8; end: 1030fec1b;  */

void FUN_1030febd8(void)

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



/* Entry: 1030fec1c; end: 1030fec6f;  */

void FUN_1030fec1c(undefined8 *param_1)

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



/* Entry: 1030fec70; end: 1030fec77;  */

undefined8 FUN_1030fec70(void)

{
  return 0x1b;
}



/* Entry: 1030fec78; end: 1030fecfb;  */

void FUN_1030fec78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1030fedcc,param_2,FUN_1030fedd0,param_2,FUN_1030fedf8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fecfc; end: 1030fed4b;  */

undefined8 FUN_1030fecfc(void)

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



/* Entry: 1030fed4c; end: 1030fed7b;  */

undefined ** FUN_1030fed4c(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fed7c; end: 1030fed9b;  */

void FUN_1030fed7c(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e998);
  return;
}



/* Entry: 1030fed9c; end: 1030fedcf;  */

undefined1  [16] FUN_1030fed9c(void)

{
  return ZEXT816(0x11060eea8);
}



/* Entry: 1030fedd0; end: 1030fedf7;  */

void FUN_1030fedd0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fedf8; end: 1030fedff;  */

undefined8 FUN_1030fedf8(void)

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



/* Entry: 1030fee00; end: 1030ff84f;  */

void FUN_1030fee00(long *param_1,long param_2)

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
  FUN_1030ffa34();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126acc60;
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
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f123410);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef132d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f086da0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f123430);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f123450);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0dbcd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
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



/* Entry: 1030ff850; end: 1030ff8d3;  */

void FUN_1030ff850(void)

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



/* Entry: 1030ff8d4; end: 1030ff927;  */

void FUN_1030ff8d4(undefined8 *param_1)

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



/* Entry: 1030ff928; end: 1030ff92f;  */

undefined8 FUN_1030ff928(void)

{
  return 0x1b;
}



/* Entry: 1030ff930; end: 1030ff9b3;  */

void FUN_1030ff930(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1030ffa84,param_2,FUN_1030ffa88,param_2,FUN_1030ffab0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030ff9b4; end: 1030ffa03;  */

undefined8 FUN_1030ff9b4(void)

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



/* Entry: 1030ffa04; end: 1030ffa33;  */

undefined ** FUN_1030ffa04(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030ffa34; end: 1030ffa53;  */

void FUN_1030ffa34(void)

{
  func_0x000107c61168(&PTR_PTR_112f3ea80);
  return;
}



/* Entry: 1030ffa54; end: 1030ffa87;  */

undefined1  [16] FUN_1030ffa54(void)

{
  return ZEXT816(0x11060ef48);
}



/* Entry: 1030ffa88; end: 1030ffaaf;  */

void FUN_1030ffa88(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030ffab0; end: 1030ffab7;  */

undefined8 FUN_1030ffab0(void)

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



/* Entry: 1030ffab8; end: 1031001d7;  */

void FUN_1030ffab8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
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
  FUN_1031003a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126acc68;
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
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f123410);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f123430);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0db9a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef1f5d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0db820);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 1031001d8; end: 103100243;  */

void FUN_1031001d8(void)

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



/* Entry: 103100244; end: 103100297;  */

void FUN_103100244(undefined8 *param_1)

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



/* Entry: 103100298; end: 10310029f;  */

undefined8 FUN_103100298(void)

{
  return 0x1b;
}



/* Entry: 1031002a0; end: 103100323;  */

void FUN_1031002a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1031003f4,param_2,FUN_1031003f8,param_2,FUN_103100420,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103100324; end: 103100373;  */

undefined8 FUN_103100324(void)

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



/* Entry: 103100374; end: 1031003a3;  */

undefined ** FUN_103100374(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1031003a4; end: 1031003c3;  */

void FUN_1031003a4(void)

{
  func_0x000107c61168(&PTR_PTR_112f3eb90);
  return;
}



/* Entry: 1031003c4; end: 1031003f7;  */

undefined1  [16] FUN_1031003c4(void)

{
  return ZEXT816(0x11060efe8);
}



/* Entry: 1031003f8; end: 10310041f;  */

void FUN_1031003f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103100420; end: 103100427;  */

undefined8 FUN_103100420(void)

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



/* Entry: 103100428; end: 1031012bb;  */

void FUN_103100428(long *param_1,long param_2)

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
  FUN_1031014c0();
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
  puVar1 = PTR_PTR_1126acc70;
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
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174(uStack_c8);
  uVar13 = uStack_d0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f123410);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0dbd50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6750);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc66c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc66a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6680);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f123480);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar15 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f123430);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar13);
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef1f5d0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  uVar15 = uVar16;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
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
  *(undefined8 *)(param_2 + 0x78) = uVar15;
  *param_1 = param_2;
  return;
}



/* Entry: 1031012bc; end: 10310135f;  */

void FUN_1031012bc(void)

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
  return;
}



/* Entry: 103101360; end: 1031013b3;  */

void FUN_103101360(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031013b4; end: 1031013bb;  */

undefined8 FUN_1031013b4(void)

{
  return 0x1b;
}



/* Entry: 1031013bc; end: 10310143f;  */

void FUN_1031013bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x103101510,param_2,FUN_103101514,param_2,FUN_10310153c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103101440; end: 10310148f;  */

undefined8 FUN_103101440(void)

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



/* Entry: 103101490; end: 1031014bf;  */

undefined ** FUN_103101490(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1031014c0; end: 1031014df;  */

void FUN_1031014c0(void)

{
  func_0x000107c61168(&PTR_PTR_112f3ec88);
  return;
}



/* Entry: 1031014e0; end: 103101513;  */

undefined1  [16] FUN_1031014e0(void)

{
  return ZEXT816(0x11060f088);
}



/* Entry: 103101514; end: 10310153b;  */

void FUN_103101514(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10310153c; end: 103101543;  */

undefined8 FUN_10310153c(void)

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



/* Entry: 103101544; end: 103102437;  */

void FUN_103101544(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
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
  FUN_10310263c();
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
  func_0x0001000285a8(0x112e7fb90,&UNK_10da8c7a0);
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
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar14 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar12;
  puVar12 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar12;
  puVar12 = PTR_PTR_1126acc78;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f123410);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f086da0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  uVar14 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f086d10);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010f1234a0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000003e;
  func_0x000107c5fadc(0xd00000000000003e,0x800000010f1234e0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010f123520);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f123560);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f086e30);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f123590);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  lVar16 = *(long *)(param_2 + 0x20);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar14 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f1235d0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(uVar14);
  uVar17 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f086ea0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(uVar15);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar16 != 0) {
    func_0x000107c61170(uVar13);
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
    func_0x000107c61574(uStack_c8);
    *(long *)(param_2 + 0x78) = lVar16;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103101d38);
  (*pcVar1)();
}



/* Entry: 103102438; end: 1031024db;  */

void FUN_103102438(void)

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
  return;
}



/* Entry: 1031024dc; end: 10310252f;  */

void FUN_1031024dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103102530; end: 103102537;  */

undefined8 FUN_103102530(void)

{
  return 0x1b;
}



/* Entry: 103102538; end: 1031025bb;  */

void FUN_103102538(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10310268c,param_2,FUN_103102690,param_2,FUN_1031026b8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1031025bc; end: 10310260b;  */

undefined8 FUN_1031025bc(void)

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



/* Entry: 10310260c; end: 10310263b;  */

undefined ** FUN_10310260c(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 10310263c; end: 10310265b;  */

void FUN_10310263c(void)

{
  func_0x000107c61168(&PTR_PTR_112f3edb8);
  return;
}



/* Entry: 10310265c; end: 10310268f;  */

undefined1  [16] FUN_10310265c(void)

{
  return ZEXT816(0x11060f128);
}



/* Entry: 103102690; end: 1031026b7;  */

void FUN_103102690(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1031026b8; end: 1031026bf;  */

undefined8 FUN_1031026b8(void)

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



/* Entry: 1031026c0; end: 10310271f;  */

void FUN_1031026c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1031029b0();
  func_0x000107c613fc();
  FUN_10310275c(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 103102720; end: 10310275b;  */

undefined8 FUN_103102720(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10310275c(param_1);
  return unaff_x20;
}



/* Entry: 10310275c; end: 103102823;  */

void FUN_10310275c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126acc80;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f123410);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  return;
}



/* Entry: 103102824; end: 10310284f;  */

void FUN_103102824(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103102850; end: 1031028a3;  */

void FUN_103102850(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031028a4; end: 1031028ab;  */

undefined8 FUN_1031028a4(void)

{
  return 0x1b;
}



/* Entry: 1031028ac; end: 10310292f;  */

void FUN_1031028ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x103102a00,param_2,FUN_103102a04,param_2,FUN_103102a2c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103102930; end: 10310297f;  */

undefined8 FUN_103102930(void)

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



/* Entry: 103102980; end: 1031029af;  */

undefined ** FUN_103102980(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1031029b0; end: 1031029cf;  */

void FUN_1031029b0(void)

{
  func_0x000107c61168(&PTR_PTR_112f3eee8);
  return;
}



/* Entry: 1031029d0; end: 103102a03;  */

undefined1  [16] FUN_1031029d0(void)

{
  return ZEXT816(0x11060f1c8);
}



/* Entry: 103102a04; end: 103102a2b;  */

void FUN_103102a04(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103102a2c; end: 103102a33;  */

undefined8 FUN_103102a2c(void)

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



/* Entry: 103102a34; end: 103102b57;  */

void FUN_103102a34(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_103102d28();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_10349a3d4(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_10349a1e0();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  FUN_10349a230();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 103102b58; end: 103102c37;  */

long FUN_103102b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10349a3d4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10349a1e0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_10349a230();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 103102c38; end: 103102c6b;  */

void FUN_103102c38(void)

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



/* Entry: 103102c6c; end: 103102c73;  */

undefined8 FUN_103102c6c(void)

{
  return 0x1b;
}



/* Entry: 103102c74; end: 103102cf7;  */

void FUN_103102c74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103102d68,param_2,FUN_103102d6c,param_2,0x103102d94,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103102cf8; end: 103102d27;  */

undefined ** FUN_103102cf8(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 103102d28; end: 103102d47;  */

void FUN_103102d28(void)

{
  func_0x000107c61168(&PTR_PTR_112f3efb8);
  return;
}



/* Entry: 103102d48; end: 103102d6b;  */

undefined1  [16] FUN_103102d48(void)

{
  return ZEXT816(0x11060f268);
}



/* Entry: 103102d6c; end: 103102dbf;  */

void FUN_103102d6c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103102dc0; end: 1031034e7;  */

void FUN_103102dc0(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined *puVar14;
  undefined8 uVar15;
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
  FUN_10310369c();
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
  func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
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
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x18) = puVar13;
  puVar14 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar14;
  FUN_10348755c();
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = uVar12;
  func_0x0001034868d0(uVar12,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,puVar14,
                      puVar13);
  *(undefined8 *)(param_2 + 0x10) = uVar15;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar14 != (undefined *)0x0) {
    func_0x000107c61170(uVar12);
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
    func_0x000107c61574(uStack_c8);
    *(undefined **)(param_2 + 0x78) = puVar14;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031031cc);
  (*pcVar1)();
}



/* Entry: 1031034e8; end: 10310358b;  */

void FUN_1031034e8(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10310358c; end: 1031035df;  */

void FUN_10310358c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031035e0; end: 1031035e7;  */

undefined8 FUN_1031035e0(void)

{
  return 0x1b;
}



/* Entry: 1031035e8; end: 10310366b;  */

void FUN_1031035e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1031036ec,param_2,FUN_1031036f0,param_2,0x103103718,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10310366c; end: 10310369b;  */

undefined ** FUN_10310366c(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 10310369c; end: 1031036bb;  */

void FUN_10310369c(void)

{
  func_0x000107c61168(&PTR_PTR_112f3f090);
  return;
}



/* Entry: 1031036bc; end: 1031036ef;  */

undefined1  [16] FUN_1031036bc(void)

{
  return ZEXT816(0x11060f2e8);
}



/* Entry: 1031036f0; end: 103103743;  */

void FUN_1031036f0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103103744; end: 103103927;  */

void FUN_103103744(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_103103a70();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  FUN_103135068(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  FUN_10313478c(uStack_58,uVar1,uVar2,uVar3,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 103103928; end: 10310396b;  */

void FUN_103103928(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10310396c; end: 103103973;  */

undefined8 FUN_10310396c(void)

{
  return 0x1b;
}



/* Entry: 103103974; end: 1031039f7;  */

void FUN_103103974(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103103ab0,param_2,FUN_103103ab4,param_2,FUN_103103adc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1031039f8; end: 103103a3f;  */

undefined8 FUN_1031039f8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000103134fd4();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 103103a40; end: 103103a6f;  */

undefined ** FUN_103103a40(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 103103a70; end: 103103a8f;  */

void FUN_103103a70(void)

{
  func_0x000107c61168(&PTR_PTR_112f3f1c0);
  return;
}



/* Entry: 103103a90; end: 103103ab3;  */

undefined1  [16] FUN_103103a90(void)

{
  return ZEXT816(0x11060f388);
}



/* Entry: 103103ab4; end: 103103adb;  */

void FUN_103103ab4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103103adc; end: 103103ae3;  */

undefined8 FUN_103103adc(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000103134fd4();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 103103ae4; end: 1031045c3;  */

void FUN_103103ae4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11069f420;
  ppuVar4 = &PTR_DAT_112fa42e8;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112f3f240;
  func_0x0001000285a8(0x112f3f240,&UNK_10db8d490);
  func_0x0001000a6ee8(&UNK_11060e3c8,
                      "ARBarCallActivationEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_1031045c4,param_2,uVar2,&UNK_11060e3c8,&PTR_DAT_112f3d978);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11060e488,
                      "ARBarCallIntegrationEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      0x1031045f0,param_3,uVar2,&UNK_11060e488,&PTR_DAT_112f3da58);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11060e508,"ARBarCallLoggingEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,0x10310461c,param_4,uVar2,&UNK_11060e508,&PTR_DAT_112f3db58);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_11060e5a8,
                      "CallMiniCameraActivationStateServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x4f,2,0x103104648,param_5,uVar2,&UNK_11060e5a8,&PTR_DAT_112f3dc60);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_11060e648,
                      "CallMiniCameraNavigationEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,0x103104674,param_6,uVar2,&UNK_11060e648,&PTR_DAT_112f3dd30);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_11060e6e8,
                      "LensCarouselDataProviderControllingOnVideoCallServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x60,2,0x1031046a0,param_7,uVar2,&UNK_11060e6e8,&PTR_DAT_112f3de18);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_11060e788,
                      "LensCarouselLayoutServicesTalkServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x50,2,0x1031046cc,param_8,uVar2,&UNK_11060e788,&PTR_DAT_112f3def0);
  func_0x000107c61574(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_11060e828,
                      "LensCarouselLensDownloadingOnVideoCallServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x58,2,0x1031046f8,param_9,uVar2,&UNK_11060e828,&PTR_DAT_112f3dfc0);
  func_0x000107c61574(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_11060e8c8,
                      "LensCarouselTalkActivatorDependenciesServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x57,2,0x103104724,param_10,uVar2,&UNK_11060e8c8,&PTR_DAT_112f3e0a0);
  func_0x000107c61574(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000a6ee8(&UNK_11060e968,
                      "LensCarouselTalkLensApplicatorServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x50,2,0x103104750,param_11,uVar2,&UNK_11060e968,&PTR_DAT_112f3e170);
  func_0x000107c61574(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000a6ee8(&UNK_11060ea08,
                      "LensCarouselTalkLensFeaturesVisibilityControllerServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x62,2,0x10310477c,param_12,uVar2,&UNK_11060ea08,&PTR_DAT_112f3e258);
  func_0x000107c61574(param_12);
  func_0x000107c6157c(param_13);
  func_0x0001000a6ee8(&UNK_11060ea88,
                      "LensCarouselTalkLensTouchProcessingEntryPointWrapperScopeInitializationPluginKey"
                      ,0x50,2,0x1031047a8,param_13,uVar2,&UNK_11060ea88,&PTR_DAT_112f3e328);
  func_0x000107c61574(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000a6ee8(&UNK_11060eb08,
                      "LensCarouselTalkWorkflowEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,0x1031047d4,param_14,uVar2,&UNK_11060eb08,&PTR_DAT_112f3e3f8);
  func_0x000107c61574(param_14);
  func_0x000107c6157c(param_15);
  func_0x0001000a6ee8(&UNK_11060eba8,
                      "LensTalkCarouselLensCarouselSchedulerServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x57,2,0x103104800,param_15,uVar2,&UNK_11060eba8,&PTR_DAT_112f3e4e8);
  func_0x000107c61574(param_15);
  puVar3 = &UNK_11060f3d8;
  func_0x000107c613fc(&UNK_11060f3d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_16;
  *(undefined8 *)(puVar3 + 0x18) = param_17;
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x0001000a6ee8(&UNK_11060f908,"LensTalkCarouselScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_10310482c,puVar3,uVar2,&UNK_11060f908,&PTR_DAT_112f40280);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_18);
  func_0x0001000a6ee8(&UNK_11060ec48,
                      "LensTalkCarouselScopedARBarTabInfoProvidingServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5d,2,FUN_10310486c,param_18,uVar2,&UNK_11060ec48,&PTR_DAT_112f3e5c0);
  func_0x000107c61574(param_18);
  func_0x000107c6157c(param_19);
  func_0x0001000a6ee8(&UNK_11060ece8,
                      "LensTalkCarouselScopedLensCarouselPerformanceLoggerServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x65,2,0x103104898,param_19,uVar2,&UNK_11060ece8,&PTR_DAT_112f3e690);
  func_0x000107c61574(param_19);
  func_0x000107c6157c(param_20);
  func_0x0001000a6ee8(&UNK_11060ed88,
                      "LensTalkCarouselScopedLensCarouselSessionServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5b,2,0x1031048c4,param_20,uVar2,&UNK_11060ed88,&PTR_DAT_112f3e770);
  func_0x000107c61574(param_20);
  func_0x000107c6157c(param_21);
  func_0x0001000a6ee8(&UNK_11060ee28,
                      "LensTalkCarouselScopedLensCarouselSettingsServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5c,2,0x1031048f0,param_21,uVar2,&UNK_11060ee28,&PTR_DAT_112f3e858);
  func_0x000107c61574(param_21);
  func_0x000107c6157c(param_22);
  func_0x0001000a6ee8(&UNK_11060eec8,
                      "SCCallLensPickerServiceProviderWrapperScopeInitializationPluginKey",0x42,2,
                      0x10310491c,param_22,uVar2,&UNK_11060eec8,&PTR_DAT_112f3e930);
  func_0x000107c61574(param_22);
  func_0x000107c6157c(param_23);
  func_0x0001000a6ee8(&UNK_11060ef68,
                      "SCLensCarouselCollectionControllerOnVideoCallServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5f,2,0x103104948,param_23,uVar2,&UNK_11060ef68,&PTR_DAT_112f3ea18);
  func_0x000107c61574(param_23);
  func_0x000107c6157c(param_24);
  func_0x0001000a6ee8(&UNK_11060f008,
                      "SCLensCarouselTalkEventsHandingServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x51,2,0x103104974,param_24,uVar2,&UNK_11060f008,&PTR_DAT_112f3eb28);
  func_0x000107c61574(param_24);
  func_0x000107c6157c(param_25);
  func_0x0001000a6ee8(&UNK_11060f0a8,
                      "SCLensDataProviderOnVideoCallServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x4f,2,0x1031049a0,param_25,uVar2,&UNK_11060f0a8,&PTR_DAT_112f3ec20);
  func_0x000107c61574(param_25);
  func_0x000107c6157c(param_26);
  func_0x0001000a6ee8(&UNK_11060f148,
                      "SCLensInVideoCallScopeEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      0x1031049cc,param_26,uVar2,&UNK_11060f148,&PTR_DAT_112f3ed50);
  func_0x000107c61574(param_26);
  puVar3 = &UNK_11060f400;
  func_0x000107c613fc(&UNK_11060f400,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_16;
  *(undefined8 *)(puVar3 + 0x18) = param_27;
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_27);
  func_0x0001000a6ee8(&UNK_11060dec8,"SCLensTalkCarouselScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_103104aa0,puVar3,uVar2,&UNK_11060dec8,&PTR_DAT_112f3d770);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_28);
  func_0x0001000a6ee8(&UNK_11060f1e8,
                      "SCLensUIUpdateOnVideoCallServiceProviderWrapperScopeInitializationPluginKey",
                      0x4b,2,FUN_103104aa8,param_28,uVar2,&UNK_11060f1e8,&PTR_DAT_112f3ee80);
  func_0x000107c61574(param_28);
  func_0x000107c6157c(param_29);
  func_0x0001000a6ee8(&UNK_11060f268,
                      "SponsoredLensCallingCTAPresenterEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4d,2,0x103104ad4,param_29,uVar2,&UNK_11060f268,&PTR_DAT_112f3ef50);
  func_0x000107c61574(param_29);
  func_0x000107c6157c(param_30);
  func_0x0001000a6ee8(&UNK_11060f308,
                      "SponsoredLensCallingCarouselCTAImplEntryPointWrapperScopeInitializationPluginKey"
                      ,0x50,2,0x103104b00,param_30,uVar2,&UNK_11060f308,&PTR_DAT_112f3f028);
  func_0x000107c61574(param_30);
  func_0x000107c6157c(param_31);
  func_0x0001000a6ee8(&UNK_11060f388,
                      "WebLensesVideoCallIntegrationEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_103104bb0,param_31,uVar2,&UNK_11060f388,&PTR_DAT_112f3f158);
  func_0x000107c61574(param_31);
  uVar2 = 0x112f3f248;
  func_0x0001000285a8(0x112f3f248,&UNK_10db8d498);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCLensTalkCarouselScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1031045c4; end: 10310482b;  */

void FUN_1031045c4(void)

{
  FUN_103104b2c();
  return;
}



/* Entry: 10310482c; end: 10310486b;  */

void FUN_10310482c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103107aa8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensTalkCarouselScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10310486c; end: 1031049f7;  */

void FUN_10310486c(void)

{
  FUN_103104b2c();
  return;
}


