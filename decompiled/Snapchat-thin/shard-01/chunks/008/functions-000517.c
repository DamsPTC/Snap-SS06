/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014a4fc8; end: 1014a4fef;  */

void FUN_1014a4fc8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014a4ff0; end: 1014a4ff7;  */

undefined8 FUN_1014a4ff0(void)

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



/* Entry: 1014a4ff8; end: 1014a508b;  */

void FUN_1014a4ff8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100097f34();
  func_0x000107c613fc();
  FUN_1014a50ec(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1014a508c; end: 1014a5097;  */

void FUN_1014a508c(undefined8 *param_1)

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
  func_0x000100097f34();
  func_0x000107c613fc();
  FUN_1014a50ec(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014a5098; end: 1014a50eb;  */

undefined8 FUN_1014a5098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1014a50ec(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1014a50ec; end: 1014a52cb;  */

void FUN_1014a50ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a71e8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
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
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1014a52cc; end: 1014a5307;  */

void FUN_1014a52cc(void)

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



/* Entry: 1014a5308; end: 1014a535b;  */

void FUN_1014a5308(undefined8 *param_1)

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



/* Entry: 1014a535c; end: 1014a5363;  */

void FUN_1014a535c(undefined8 *param_1)

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



/* Entry: 1014a5364; end: 1014a53b3;  */

undefined8 FUN_1014a5364(void)

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



/* Entry: 1014a53b4; end: 1014a53f7;  */

undefined1  [16] FUN_1014a53b4(void)

{
  return ZEXT816(0x1103c79f0);
}



/* Entry: 1014a53f8; end: 1014a541f;  */

void FUN_1014a53f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014a5420; end: 1014a5427;  */

undefined8 FUN_1014a5420(void)

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



/* Entry: 1014a5428; end: 1014a56e3;  */

void FUN_1014a5428(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010009bea0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a71f0;
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
  uVar6 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef851b0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef851d0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 1014a56e4; end: 1014a56ef;  */

void FUN_1014a56e4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
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
  func_0x00010009bea0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a71f0;
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
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef851b0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef851d0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
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
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 1014a56f0; end: 1014a5753;  */

undefined8
FUN_1014a56f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1014a5754(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 1014a5754; end: 1014a59b3;  */

void FUN_1014a5754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a71f0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef851b0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef851d0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
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



/* Entry: 1014a59b4; end: 1014a59f7;  */

void FUN_1014a59b4(void)

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



/* Entry: 1014a59f8; end: 1014a5a4b;  */

void FUN_1014a59f8(undefined8 *param_1)

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



/* Entry: 1014a5a4c; end: 1014a5a53;  */

void FUN_1014a5a4c(undefined8 *param_1)

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



/* Entry: 1014a5a54; end: 1014a5aa3;  */

undefined8 FUN_1014a5a54(void)

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



/* Entry: 1014a5aa4; end: 1014a5ae7;  */

undefined1  [16] FUN_1014a5aa4(void)

{
  return ZEXT816(0x1103c7ab8);
}



/* Entry: 1014a5ae8; end: 1014a5b0f;  */

void FUN_1014a5ae8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014a5b10; end: 1014a5b17;  */

undefined8 FUN_1014a5b10(void)

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



/* Entry: 1014a5b18; end: 1014a5f87;  */

void FUN_1014a5b18(long *param_1,long param_2)

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
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x00010009c200();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a71f8;
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
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef22f50);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3dba0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef851b0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef851d0);
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



/* Entry: 1014a5f88; end: 1014a5f9b;  */

void FUN_1014a5f88(long *param_1)

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
  undefined8 uVar11;
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
  func_0x00010009c200();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126a71f8;
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
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef22f50);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3dba0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef851b0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef851d0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
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



/* Entry: 1014a5f9c; end: 1014a6383;  */

long FUN_1014a5f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar1 = PTR_PTR_1126a71f8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef22f50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3dba0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef851b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef851d0);
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



/* Entry: 1014a6384; end: 1014a63f7;  */

void FUN_1014a6384(void)

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



/* Entry: 1014a63f8; end: 1014a644b;  */

void FUN_1014a63f8(undefined8 *param_1)

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



/* Entry: 1014a644c; end: 1014a6453;  */

void FUN_1014a644c(undefined8 *param_1)

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



/* Entry: 1014a6454; end: 1014a64a3;  */

undefined8 FUN_1014a6454(void)

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



/* Entry: 1014a64a4; end: 1014a64e7;  */

undefined1  [16] FUN_1014a64a4(void)

{
  return ZEXT816(0x1103c7b80);
}



/* Entry: 1014a64e8; end: 1014a650f;  */

void FUN_1014a64e8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014a6510; end: 1014a6517;  */

undefined8 FUN_1014a6510(void)

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



/* Entry: 1014a6518; end: 1014a659f;  */

undefined8
FUN_1014a6518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x00010044e1b4(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 1014a65a0; end: 1014a65eb;  */

void FUN_1014a65a0(void)

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



/* Entry: 1014a65ec; end: 1014a663b;  */

undefined8 FUN_1014a65ec(void)

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



/* Entry: 1014a663c; end: 1014a667f;  */

undefined1  [16] FUN_1014a663c(void)

{
  return ZEXT816(0x1103c7c48);
}



/* Entry: 1014a6680; end: 1014a66a7;  */

void FUN_1014a6680(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014a66a8; end: 1014a66af;  */

undefined8 FUN_1014a66a8(void)

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



/* Entry: 1014a66b0; end: 1014a6743;  */

void FUN_1014a66b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001000985dc();
  func_0x000107c613fc();
  FUN_1014a67a4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1014a6744; end: 1014a674f;  */

void FUN_1014a6744(undefined8 *param_1)

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
  func_0x0001000985dc();
  func_0x000107c613fc();
  FUN_1014a67a4(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014a6750; end: 1014a67a3;  */

undefined8 FUN_1014a6750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1014a67a4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1014a67a4; end: 1014a697f;  */

void FUN_1014a67a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a7210;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
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
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1014a6980; end: 1014a69bb;  */

void FUN_1014a6980(void)

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



/* Entry: 1014a69bc; end: 1014a6a0f;  */

void FUN_1014a69bc(undefined8 *param_1)

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



/* Entry: 1014a6a10; end: 1014a6a17;  */

void FUN_1014a6a10(undefined8 *param_1)

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



/* Entry: 1014a6a18; end: 1014a6a67;  */

undefined8 FUN_1014a6a18(void)

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



/* Entry: 1014a6a68; end: 1014a6aab;  */

undefined1  [16] FUN_1014a6a68(void)

{
  return ZEXT816(0x1103c7d10);
}



/* Entry: 1014a6aac; end: 1014a6ad3;  */

void FUN_1014a6aac(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014a6ad4; end: 1014a6adb;  */

undefined8 FUN_1014a6ad4(void)

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



/* Entry: 1014a6adc; end: 1014a6b0f;  */

void FUN_1014a6adc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1014a6b10; end: 1014a6b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a6b10(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + _DAT_1130525f0);
  lVar1 = 0;
  func_0x0001014a7018();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126a7218;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar4);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  lVar3 = 0;
  func_0x0001014a7c44();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(long *)(lVar3 + 0x18) = lVar1;
  return;
}



/* Entry: 1014a6b98; end: 1014a6b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a6b98(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130525f0);
  lVar1 = 0;
  func_0x0001014a7018();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126a7218;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar4);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  lVar3 = 0;
  func_0x0001014a7c44();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(long *)(lVar3 + 0x18) = lVar1;
  return;
}



/* Entry: 1014a6ba0; end: 1014a6bd7;  */

void FUN_1014a6ba0(long param_1)

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



/* Entry: 1014a6bd8; end: 1014a6be7;  */

void FUN_1014a6bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1014a6be8; end: 1014a6c0b;  */

void FUN_1014a6be8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014a6c0c; end: 1014a6ce7;  */

void FUN_1014a6c0c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_50 = 0x1014a6cf0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1014a6ba0;
  puStack_58 = &UNK_1103c7e38;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x000100098c78(0);
  func_0x000107c610f8();
  func_0x00010097abc0(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 1014a6ce8; end: 1014a6cf3;  */

void FUN_1014a6ce8(long param_1,long param_2)

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



/* Entry: 1014a6cf4; end: 1014a6e07;  */

void FUN_1014a6cf4(void)

{
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_70 [16];
  
  func_0x000107c6071c();
  func_0x00010405d794(FUN_1014a7038,auStack_70,0x1014a7078,auStack_a0,FUN_1014a70b8,auStack_d0,
                      FUN_1014a70c4,auStack_100,0x1014a7108,auStack_130,0x1014a7150,auStack_160,
                      0x1014a7190,auStack_190,0x1014a71d0,auStack_1c0,0x1014a7210,auStack_1f0);
  return;
}



/* Entry: 1014a6e08; end: 1014a6eb7;  */

void FUN_1014a6e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  FUN_1014a6eb8(param_1,param_4,0xd000000000000019,0x800000010ef852e0);
  func_0x000107c6142c(0x800000010ef852e0);
  return;
}



/* Entry: 1014a6eb8; end: 1014a6ff3;  */

/* WARNING: Possible PIC construction at 0x0001014a6f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014a6fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014a6f88) */
/* WARNING: Removing unreachable block (ram,0x0001014a6fd4) */

void FUN_1014a6eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = 0x6e776f6e6b6e75;
  if (param_1 == 0) {
    uVar1 = 0x747366;
  }
  uVar3 = 0xe700000000000000;
  if (param_1 == 0) {
    uVar3 = 0xe300000000000000;
  }
  uVar2 = 0x706866;
  if (param_1 != 1) {
    uVar2 = uVar1;
  }
  uVar1 = 0xe300000000000000;
  if (param_1 != 1) {
    uVar1 = uVar3;
  }
  uVar3 = 0x74696e756d6d6f63;
  if (param_1 != 2) {
    uVar3 = uVar2;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = 0xe900000000000079;
  if (param_1 != 2) {
    uVar2 = uVar1;
  }
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x0001053033ec(uVar4,param_2,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1014a6ff4; end: 1014a7037;  */

void FUN_1014a6ff4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014a7038; end: 1014a70b7;  */

void FUN_1014a7038(void)

{
  long unaff_x20;
  
  FUN_1014a6eb8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x18),0xd000000000000012,0x800000010ef85320);
  return;
}



/* Entry: 1014a70b8; end: 1014a70c3;  */

void FUN_1014a70b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  FUN_1014a6eb8(uVar3,uVar1,0xd000000000000019,0x800000010ef852e0);
  func_0x000107c6142c(0x800000010ef852e0);
  return;
}



/* Entry: 1014a70c4; end: 1014a7253;  */

void FUN_1014a70c4(void)

{
  long unaff_x20;
  
  FUN_1014a6eb8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x18),0x746e657261506f6e,0xec00000077656956);
  return;
}



/* Entry: 1014a7254; end: 1014a728f;  */

void FUN_1014a7254(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1014a7290; end: 1014a7487;  */

void FUN_1014a7290(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_2;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined1 *)(lVar10 - extraout_x12_00);
  uVar2 = 0;
  func_0x00010405dbac();
  func_0x00010405d210();
  puVar3 = *(undefined1 **)(unaff_x20 + 0x10);
  func_0x000107c41038();
  func_0x000107c61180();
  if (puVar3 == (undefined1 *)0x0) {
    func_0x00010405d0c4();
    func_0x000107c61170(uVar2);
    puVar4 = puVar3;
  }
  else {
    puVar4 = puVar3;
    uStack_78 = uVar2;
    pcStack_70 = param_1;
    func_0x000107c3cee4();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c42bcc();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 != (undefined1 *)0x0) {
      func_0x000107c5ee94(lVar10,puVar5);
      func_0x000107c61170(puVar5);
      (**(code **)(lVar8 + 0x20))(puVar9,lVar10,lVar1);
      func_0x000107c5eea0(puVar6);
      puVar4 = puVar6;
      func_0x000107c5ee78(puVar6,puVar9);
      pcVar7 = *(code **)(lVar8 + 8);
      (*pcVar7)(puVar6,lVar1);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x0001014a79a0();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uStack_78);
        (*pcVar7)(puVar9,lVar1);
        puVar4 = puVar6;
        param_1 = pcStack_70;
        goto LAB_1014a7444;
      }
      (*pcVar7)(puVar9,lVar1);
      puVar4 = puVar9;
    }
    func_0x00010405d0b4();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uStack_78);
    param_1 = pcStack_70;
  }
LAB_1014a7444:
  func_0x000107c61174(puVar4);
  (*param_1)();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1014a7488; end: 1014a74d7; -[_TtC41SCGoogleContactPermissionInfoServicesImpl37GoogleContactPermissionManagerDefault getContactPermission:] */

void FUN_1014a7488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c6157c(param_1);
  FUN_1014a7c74();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1014a74d8; end: 1014a770b;  */

void FUN_1014a74d8(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  if (param_2 == (undefined *)0x0) {
    uVar9 = 0xe300000000000000;
    uVar2 = 0x747366;
  }
  else if (param_2 == (undefined *)0x1) {
    uVar9 = 0xe300000000000000;
    uVar2 = 0x706866;
  }
  else {
    if (param_2 != (undefined *)0x2) {
      puStack_90 = param_2;
      func_0x000107c60614(&UNK_11073b580,&puStack_90,&UNK_11073b580,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a770c);
      (*pcVar1)();
    }
    uVar9 = 0xe900000000000079;
    uVar2 = 0x74696e756d6d6f63;
  }
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x10);
  func_0x000107c5fadc(uVar2,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000105303278(uVar10,uVar2,1);
  func_0x000107c61170(uVar2);
  func_0x000107c6071c();
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar2 = 0x40;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  ppuVar4 = &PTR____CFConstantStringClassReference_110da7ed8;
  func_0x000107c5faec();
  *(undefined ***)(lVar3 + 0x20) = ppuVar4;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  ppuVar4 = &PTR____CFConstantStringClassReference_110da7eb8;
  func_0x000107c5faec();
  *(undefined ***)(lVar3 + 0x30) = ppuVar4;
  *(undefined8 *)(lVar3 + 0x38) = uVar2;
  lVar5 = lVar3;
  func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar3);
  puVar6 = &UNK_1103c7e88;
  func_0x000107c613fc(&UNK_1103c7e88,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_1103c7eb0;
  func_0x000107c613fc(&UNK_1103c7eb0,0x38,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined8 *)(puVar7 + 0x20) = param_4;
  *(undefined **)(puVar7 + 0x28) = param_2;
  *(undefined8 *)(puVar7 + 0x30) = param_1;
  pcStack_70 = FUN_1014a7b64;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100e8ba8c;
  puStack_78 = &UNK_1103c7ec8;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar6);
  func_0x000107c5afbc(uVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 1014a770c; end: 1014a781f;  */

void FUN_1014a770c(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  undefined1 auStack_90 [16];
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    func_0x00010405dbac();
    func_0x00010405d210();
    (*param_4)();
  }
  else {
    lVar1 = 0;
    func_0x00010405dbac();
    func_0x00010405d210();
    plStack_a0 = &lStack_70;
    plStack_80 = plStack_a0;
    lStack_78 = param_3;
    lStack_70 = lVar1;
    func_0x000104064d80(FUN_1014a7e5c,auStack_90,0x1014a7e88,auStack_b0);
    lVar1 = lStack_70;
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    func_0x000107c6157c(uVar2);
    FUN_1014a6cf4(param_1,param_6,lVar1);
    func_0x000107c61574(uVar2);
    (*param_4)(lVar1);
    func_0x000107c61574(param_3);
    param_3 = lVar1;
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1014a7820; end: 1014a7897; -[_TtC41SCGoogleContactPermissionInfoServicesImpl37GoogleContactPermissionManagerDefault requestGoogleContactsAccessWith:completion:] */

/* WARNING: Possible PIC construction at 0x0001014a7880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014a7884) */

void FUN_1014a7820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103c7f00;
  func_0x000107c613fc(&UNK_1103c7f00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c6157c(param_1);
  FUN_1014a74d8(param_3,FUN_1014a7c64,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1014a7898; end: 1014a7b63;  */

void FUN_1014a7898(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c41038();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c44488();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = lVar2;
      puVar4 = PTR___sSSN_11034da80;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
      func_0x000100403a6c(lVar3);
      func_0x000107c6142c(lVar3);
      func_0x000107c5faec();
      puVar5 = puVar4;
      func_0x0001000f66f0();
      func_0x000107c6142c(puVar4);
      func_0x000107c5faec();
      func_0x0001000f66f0();
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(lVar2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1014a7b64; end: 1014a7b8f;  */

void FUN_1014a7b64(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  undefined1 auStack_90 [16];
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    func_0x00010405dbac();
    func_0x00010405d210();
    (*pcVar1)();
  }
  else {
    lVar4 = 0;
    func_0x00010405dbac();
    func_0x00010405d210();
    plStack_a0 = &lStack_70;
    plStack_80 = plStack_a0;
    lStack_78 = lVar3;
    lStack_70 = lVar4;
    func_0x000104064d80(FUN_1014a7e5c,auStack_90,0x1014a7e88,auStack_b0);
    lVar4 = lStack_70;
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    func_0x000107c6157c(uVar5);
    FUN_1014a6cf4(uVar6,uVar2,lVar4);
    func_0x000107c61574(uVar5);
    (*pcVar1)(lVar4);
    func_0x000107c61574(lVar3);
    lVar3 = lVar4;
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1014a7b90; end: 1014a7bd3;  */

void FUN_1014a7b90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010405dbac(0);
  func_0x00010405d0d4(param_1,uVar1);
  uVar1 = *param_2;
  *param_2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1014a7bd4; end: 1014a7c17;  */

void FUN_1014a7bd4(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x00010405dbac();
  (*param_2)();
  uVar2 = *param_1;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1014a7c18; end: 1014a7c63;  */

void FUN_1014a7c18(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014a7c64; end: 1014a7c73;  */

void FUN_1014a7c64(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001014a7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1014a7c74; end: 1014a7e5b;  */

void FUN_1014a7c74(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = uVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = lVar10 - extraout_x12_00;
  uVar2 = 0;
  func_0x00010405dbac();
  func_0x00010405d210();
  uVar3 = *(ulong *)(param_1 + 0x10);
  func_0x000107c41038();
  func_0x000107c61180();
  if (uVar3 == 0) {
    func_0x00010405d0c4();
    func_0x000107c61170(uVar2);
    uVar4 = uVar3;
  }
  else {
    uVar4 = uVar3;
    uStack_70 = uVar2;
    lStack_68 = param_2;
    func_0x000107c3cee4();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c42bcc();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar5 != 0) {
      func_0x000107c5ee94(lVar10,uVar5);
      func_0x000107c61170(uVar5);
      (**(code **)(lVar7 + 0x20))(uVar9,lVar10,lVar1);
      func_0x000107c5eea0(uVar6);
      uVar4 = uVar6;
      func_0x000107c5ee78(uVar6,uVar9);
      pcVar8 = *(code **)(lVar7 + 8);
      (*pcVar8)(uVar6,lVar1);
      if ((uVar4 & 1) != 0) {
        func_0x0001014a79a0();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uStack_70);
        (*pcVar8)(uVar9,lVar1);
        uVar4 = uVar6;
        param_2 = lStack_68;
        goto LAB_1014a7e24;
      }
      (*pcVar8)(uVar9,lVar1);
      uVar4 = uVar9;
    }
    func_0x00010405d0b4();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uStack_70);
    param_2 = lStack_68;
  }
LAB_1014a7e24:
  (**(code **)(param_2 + 0x10))(param_2,uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1014a7e5c; end: 1014a7ee7;  */

void FUN_1014a7e5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x0001014a79a0();
  uVar2 = *puVar1;
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1014a7ee8; end: 1014a7eef;  */

void FUN_1014a7ee8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x00010405dbac(0);
  func_0x00010405d0d4(param_1,uVar1);
  uVar1 = *puVar2;
  *puVar2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1014a7ef0; end: 1014a7f2f;  */

void FUN_1014a7ef0(void)

{
  long unaff_x20;
  
  FUN_1014a7bd4(*(undefined8 *)(unaff_x20 + 0x10),&UNK_10405d200);
  return;
}



/* Entry: 1014a7f30; end: 1014a7f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1014a7f30(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da3dd0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112da3dd0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1014a7f94();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1014a7f94; end: 1014a8403;  */

/* WARNING: Removing unreachable block (ram,0x0001014a825c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014a7f94(byte *param_1)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar8 = auStack_d0;
  puVar15 = auStack_d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar4 = param_1;
  func_0x0001000ad07c();
  if ((*pbVar4 & 1) == 0) {
    puVar5 = *(undefined1 **)(param_1 + _DAT_112da3dc0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar5 == (undefined1 *)0x0) goto LAB_1014a82b0;
    uVar12 = 0x800000010ef853e0;
    uVar6 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012);
    puVar7 = puVar5;
    func_0x000107c5dc34();
    func_0x000107c61180();
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(uVar6);
    if (puVar7 == (undefined1 *)0x0) goto LAB_1014a82b0;
    puVar5 = puVar7;
    func_0x000107c3dd54();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar5 == (undefined1 *)0x0) goto LAB_1014a8400;
    puVar7 = puVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar7 == (undefined1 *)0x0) goto LAB_1014a82b0;
    puVar5 = puVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar7);
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    puVar7 = puVar5;
    func_0x00010006c00c(puVar5,uVar12);
    FUN_10151f054(&uStack_b8);
    uVar2 = (uint)(uVar12 >> 0x20);
    uVar13 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        auStack_d0[0] = SUB81(puVar5,0);
        auStack_d0[1] = (undefined1)((ulong)puVar5 >> 8);
        auStack_d0[2] = (undefined1)((ulong)puVar5 >> 0x10);
        auStack_d0[3] = (undefined1)((ulong)puVar5 >> 0x18);
        auStack_d0[4] = (undefined1)((ulong)puVar5 >> 0x20);
        auStack_d0[5] = (undefined1)((ulong)puVar5 >> 0x28);
        auStack_d0[6] = (undefined1)((ulong)puVar5 >> 0x30);
        auStack_d0[7] = (undefined1)((ulong)puVar5 >> 0x38);
        auStack_d0[8] = (undefined1)uVar12;
        auStack_d0[9] = (undefined1)(uVar12 >> 8);
        auStack_d0[10] = (undefined1)(uVar12 >> 0x10);
        auStack_d0[0xb] = (undefined1)(uVar12 >> 0x18);
        auStack_d0[0xc] = (undefined1)(uVar12 >> 0x20);
        auStack_d0[0xd] = (undefined1)(uVar12 >> 0x28);
        puVar15 = auStack_d0 + (uVar12 >> 0x30 & 0xff);
        func_0x0001014a87f0();
        puVar8 = auStack_d0;
      }
      else {
        lVar16 = (long)(int)puVar5;
        puVar14 = (undefined1 *)(((long)puVar5 >> 0x20) - lVar16);
        if ((long)puVar5 >> 0x20 < lVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014a83f4);
          (*pcVar3)();
        }
        func_0x000107c5ec30();
        if (puVar7 != (undefined1 *)0x0) {
          puVar15 = puVar7;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar16,(long)puVar15)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1014a83fc);
            (*pcVar3)();
          }
          puVar8 = puVar7 + (lVar16 - (long)puVar15);
          goto LAB_1014a81d4;
        }
        func_0x000107c5ec38();
        puVar8 = (undefined1 *)0x0;
LAB_1014a8220:
        puVar15 = (undefined1 *)0x0;
LAB_1014a8224:
        func_0x0001014a87f0();
      }
    }
    else {
      if (uVar13 == 2) {
        lVar16 = *(long *)(puVar5 + 0x10);
        lVar1 = *(long *)(puVar5 + 0x18);
        func_0x000107c5ec30();
        puVar15 = puVar7;
        puVar8 = puVar7;
        if (puVar7 != (undefined1 *)0x0) {
          func_0x000107c5ec3c();
          if (SBORROW8(lVar16,(long)puVar15)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1014a83f8);
            (*pcVar3)();
          }
          puVar8 = puVar7 + (lVar16 - (long)puVar15);
        }
        puVar14 = (undefined1 *)(lVar1 - lVar16);
        if (SBORROW8(lVar1,lVar16)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014a81a0);
          (*pcVar3)();
        }
LAB_1014a81d4:
        func_0x000107c5ec38();
        puVar7 = puVar15;
        if (puVar8 == (undefined1 *)0x0) goto LAB_1014a8220;
        if ((long)puVar14 <= (long)puVar15) {
          puVar15 = puVar14;
        }
        puVar15 = puVar15 + (long)puVar8;
        goto LAB_1014a8224;
      }
      func_0x0001014a87f0();
      auStack_d0[0] = 0;
      auStack_d0[1] = 0;
      auStack_d0[2] = 0;
      auStack_d0[3] = 0;
      auStack_d0[4] = 0;
      auStack_d0[5] = 0;
      auStack_d0[6] = 0;
      auStack_d0[7] = 0;
      auStack_d0[8] = 0;
      auStack_d0[9] = 0;
      auStack_d0[10] = 0;
      auStack_d0[0xb] = 0;
      auStack_d0[0xc] = 0;
      auStack_d0[0xd] = 0;
    }
    func_0x00010006ae80(puVar8,puVar15,&uStack_90,0,100,0,&UNK_1103d6a90,puVar7);
    func_0x00010006c090(puVar5,uVar12);
    FUN_100ee9068(&uStack_90);
    uVar6 = uStack_b8;
    FUN_1014a8830(uStack_b8);
    uVar9 = uStack_b0;
    FUN_1014a8830(uStack_b0);
    uVar10 = uStack_a8;
    func_0x0001014a89a8(uStack_a8);
    uVar11 = 0;
    func_0x00010405fe54(0);
    func_0x000107c610f8();
    func_0x00010405edc8(uVar6,uVar9,uVar10,uVar11);
    func_0x000107c6142c(uStack_a8);
    func_0x000107c6142c(uStack_b0);
    func_0x000107c6142c(uStack_b8);
    func_0x00010006c090(uStack_a0,uStack_98);
    func_0x00010006c090(puVar5,uVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return uVar6;
    }
  }
  else {
LAB_1014a82b0:
    if (lRam0000000112da3e20 != -1) {
      func_0x000107c61568(0x112da3e20,FUN_1014a8b3c);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      uVar6 = uRam00000001137ff4e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(uRam00000001137ff4e0);
      return uVar6;
    }
  }
  func_0x000107c60e78();
LAB_1014a8400:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1014a8404);
  (*pcVar3)();
}



/* Entry: 1014a8404; end: 1014a844b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a8404(void)

{
  long *plVar1;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112da3dd8);
  if ((char)plVar1[1] == '\x01') {
    FUN_1014a844c();
    *plVar1 = unaff_x20;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  return;
}



/* Entry: 1014a844c; end: 1014a85eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014a844c(byte *param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  pbVar1 = param_1;
  func_0x0001000ad07c();
  if ((*pbVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + _DAT_112da3dc8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar3 = 0xd00000000000001d;
      func_0x000107c5fadc(0xd00000000000001d,0x800000010ef853c0);
      uVar4 = 0;
      lVar8 = -0x2000000000000000;
      func_0x000107c5fadc(0);
      lVar5 = lVar2;
      func_0x000107c5c1dc();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      lVar6 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
      lVar5 = lVar8;
      func_0x000107c5fb24();
      func_0x000107c6142c(lVar8);
      if (lVar6 != 0x5854 || lVar5 != -0x1e00000000000000) {
        uVar7 = 0;
        func_0x000107c605b8(0x5854,0xe200000000000000,lVar6,lVar5,0);
        if ((uVar7 & 1) == 0) {
          if (lVar6 == 0x4c46 && lVar5 == -0x1e00000000000000) {
            func_0x000107c6142c(lVar5);
            func_0x000107c615e8(lVar2);
            return 1;
          }
          uVar7 = 0;
          func_0x000107c605b8(0x4c46,0xe200000000000000,lVar6,lVar5,0);
          func_0x000107c6142c(lVar5);
          func_0x000107c615e8(lVar2);
          if ((uVar7 & 1) != 0) {
            return 1;
          }
          return 2;
        }
      }
      func_0x000107c615e8(lVar2);
      func_0x000107c6142c(lVar5);
      return 0;
    }
  }
  return 2;
}



/* Entry: 1014a85ec; end: 1014a861f; -[_TtC39AuthenticationExperimentServiceProvider35AuthenticationExperimentServiceImpl oAuthLoginConfig] */

void FUN_1014a85ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014a7f30();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014a8620; end: 1014a8653; -[_TtC39AuthenticationExperimentServiceProvider35AuthenticationExperimentServiceImpl ageVerificationRegion] */

undefined8 FUN_1014a8620(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014a8404();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1014a8654; end: 1014a86f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a8654(byte *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x0001000ad07c();
  if ((*param_1 & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112da3dc8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c5fadc(0xd00000000000002d,0x800000010ef85390);
      func_0x000107c3ebd4(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 1014a86f4; end: 1014a8727; -[_TtC39AuthenticationExperimentServiceProvider35AuthenticationExperimentServiceImpl emailSettingsDomainSuggestionPillEnabled] */

uint FUN_1014a86f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014a8654();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1014a8728; end: 1014a8787; -[_TtC39AuthenticationExperimentServiceProvider35AuthenticationExperimentServiceImpl init] */

void FUN_1014a8728(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AuthenticationExperimentServiceProvider.AuthenticationExperimentServiceImpl",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a8754);
  (*pcVar1)();
}



/* Entry: 1014a8788; end: 1014a87cf; -[_TtC39AuthenticationExperimentServiceProvider35AuthenticationExperimentServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014a87a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014a87a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a8788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da3dc0));
  return;
}



/* Entry: 1014a87d0; end: 1014a882f;  */

void FUN_1014a87d0(void)

{
  func_0x000107c61168(&PTR_PTR_1127da058);
  return;
}



/* Entry: 1014a8830; end: 1014a8b3b;  */

undefined * FUN_1014a8830(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  
  lVar7 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar7 != 0) {
    pcVar8 = (char *)(param_1 + 0x28);
    do {
      if ((*pcVar8 == '\x01') && (*(long *)(pcVar8 + -8) != 0)) {
        if (*(long *)(pcVar8 + -8) == 1) {
          uVar4 = 0;
          func_0x00010486de80();
          func_0x00010486dd30();
        }
        else {
          uVar4 = 0;
          func_0x00010486de80();
          func_0x00010486dd40();
        }
        puVar3 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar3 == 0) || ((long)puVar5 < 0)) ||
           (puVar3 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar2 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar2 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar2 = puVar5;
            }
            func_0x000107c60480(puVar2);
          }
          puVar3 = (undefined *)0x0;
          FUN_1014a8b80(0,puVar2 + 1,1,puVar5,&SUB_10486de80,0x112da3e18,&UNK_10d948a98);
        }
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar3;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_1014a8b80(puVar5,uVar1 + 1,1,puVar3,&SUB_10486de80,0x112da3e18,&UNK_10d948a98);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(undefined8 *)(uVar6 + uVar1 * 8 + 0x20) = uVar4;
      }
      lVar7 = lVar7 + -1;
      pcVar8 = pcVar8 + 0x10;
    } while (lVar7 != 0);
  }
  return puVar5;
}



/* Entry: 1014a8b3c; end: 1014a8b7f;  */

void FUN_1014a8b3c(void)

{
  undefined *puVar1;
  
  func_0x00010405fe54(0);
  func_0x000107c610f8();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010405edc8(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___swiftEmptyArrayStorage_11034f1c8,
                      PTR___swiftEmptyArrayStorage_11034f1c8);
  puRam00000001137ff4e0 = puVar1;
  return;
}



/* Entry: 1014a8b80; end: 1014a8ccb;  */

ulong FUN_1014a8b80(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a8ccc);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1014a8ccc(uVar2,uVar4,param_5,param_6,param_7);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014a8cc8);
      (*pcVar1)();
    }
    FUN_1014a8d58(0,uVar2,uVar3 + 0x20,param_4,param_5);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1014a8ccc; end: 1014a8d57;  */

undefined *
FUN_1014a8ccc(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1014a8e60(param_3,param_4,param_5);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1014a8d58; end: 1014a8e5f;  */

long FUN_1014a8d58(long param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014a8e5c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014a8e60);
        (*pcVar3)();
      }
      uVar4 = 0;
      (*param_5)(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      (*param_5)(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1014a8e58);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1014a8e60; end: 1014a901f;  */

void FUN_1014a8e60(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1014a9020; end: 1014a9083;  */

long FUN_1014a9020(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_1014a908c();
    func_0x000107c61574(param_1);
  }
  return lVar1;
}


