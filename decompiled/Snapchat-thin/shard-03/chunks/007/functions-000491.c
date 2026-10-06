/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c2d984; end: 102c2d997;  */

void FUN_102c2d984(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  FUN_102c2e054();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_102c31e24(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000102c31c4c();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  func_0x000107c6157c();
  func_0x000102c31c90();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = lVar1;
  return;
}



/* Entry: 102c2d998; end: 102c2d9cb;  */

void FUN_102c2d998(void)

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



/* Entry: 102c2d9cc; end: 102c2da0f;  */

void FUN_102c2d9cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102c2dd50();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102c2dc38(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c2da10; end: 102c2da3b;  */

void FUN_102c2da10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c2da3c; end: 102c2da43;  */

void FUN_102c2da3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105b4ce8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105b4ce8;
  return;
}



/* Entry: 102c2da44; end: 102c2daf3;  */

void FUN_102c2da44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102c2dd50();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102c2dc38(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c2daf4; end: 102c2db63;  */

undefined8 FUN_102c2daf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102c2dc38(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 102c2db64; end: 102c2db97;  */

void FUN_102c2db64(void)

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



/* Entry: 102c2db98; end: 102c2db9f;  */

undefined8 FUN_102c2db98(void)

{
  return 0x1b;
}



/* Entry: 102c2dba0; end: 102c2dc23;  */

void FUN_102c2dba0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102c2dd90,param_2,FUN_102c2dd94,param_2,0x102c2ddbc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c2dc24; end: 102c2dc37;  */

void FUN_102c2dc24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105b4f90;
  return;
}



/* Entry: 102c2dc38; end: 102c2dd33;  */

void FUN_102c2dc38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112f00f10,&UNK_10db344a8);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001003b3b80();
  puVar1 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  FUN_102ca7714(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  func_0x000107c61174();
  func_0x000102ca7418();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c6157c();
  FUN_102ca7664();
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 102c2dd34; end: 102c2dd4f;  */

undefined ** FUN_102c2dd34(void)

{
  return &PTR_DAT_1130664a8;
}



/* Entry: 102c2dd50; end: 102c2dd6f;  */

void FUN_102c2dd50(void)

{
  func_0x000107c61168(&PTR_PTR_112f00ea0);
  return;
}



/* Entry: 102c2dd70; end: 102c2dd93;  */

undefined1  [16] FUN_102c2dd70(void)

{
  return ZEXT816(0x1105b4fd0);
}



/* Entry: 102c2dd94; end: 102c2dde7;  */

void FUN_102c2dd94(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c2dde8; end: 102c2dec3;  */

void FUN_102c2dde8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_102c2e054();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_102c31e24(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000102c31c4c();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  func_0x000107c6157c();
  func_0x000102c31c90();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 102c2dec4; end: 102c2df6b;  */

long FUN_102c2dec4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_102c31e24(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102c31c4c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x000102c31c90();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 102c2df6c; end: 102c2df97;  */

void FUN_102c2df6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c2df98; end: 102c2df9f;  */

undefined8 FUN_102c2df98(void)

{
  return 0x1b;
}



/* Entry: 102c2dfa0; end: 102c2e023;  */

void FUN_102c2dfa0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102c2e094,param_2,FUN_102c2e098,param_2,0x102c2e0c0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c2e024; end: 102c2e053;  */

undefined ** FUN_102c2e024(void)

{
  return &PTR_DAT_1130664a8;
}



/* Entry: 102c2e054; end: 102c2e073;  */

void FUN_102c2e054(void)

{
  func_0x000107c61168(&PTR_PTR_112f00f80);
  return;
}



/* Entry: 102c2e074; end: 102c2e097;  */

undefined1  [16] FUN_102c2e074(void)

{
  return ZEXT816(0x1105b5050);
}



/* Entry: 102c2e098; end: 102c2e0eb;  */

void FUN_102c2e098(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c2e0ec; end: 102c2e20f;  */

void FUN_102c2e0ec(long *param_1,long param_2)

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
  FUN_102c2e3e0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_102c31458(0);
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
  FUN_102c30ff8();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  FUN_102c31254();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 102c2e210; end: 102c2e2ef;  */

long FUN_102c2e210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_102c31458(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c30ff8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_102c31254();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 102c2e2f0; end: 102c2e323;  */

void FUN_102c2e2f0(void)

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



/* Entry: 102c2e324; end: 102c2e32b;  */

undefined8 FUN_102c2e324(void)

{
  return 0x1b;
}



/* Entry: 102c2e32c; end: 102c2e3af;  */

void FUN_102c2e32c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102c2e420,param_2,FUN_102c2e424,param_2,0x102c2e44c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c2e3b0; end: 102c2e3df;  */

undefined ** FUN_102c2e3b0(void)

{
  return &PTR_DAT_1130664a8;
}



/* Entry: 102c2e3e0; end: 102c2e3ff;  */

void FUN_102c2e3e0(void)

{
  func_0x000107c61168(&PTR_PTR_112f01050);
  return;
}



/* Entry: 102c2e400; end: 102c2e423;  */

undefined1  [16] FUN_102c2e400(void)

{
  return ZEXT816(0x1105b50d0);
}



/* Entry: 102c2e424; end: 102c2e477;  */

void FUN_102c2e424(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c2e478; end: 102c2e927;  */

void FUN_102c2e478(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
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
  FUN_102c2eaa0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  func_0x0001000285a8(0x112f010c0,&UNK_10db34758);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar8;
  func_0x000102c33424(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar7;
  func_0x000102c32d8c();
  *(undefined8 *)(param_2 + 0x10) = uVar9;
  func_0x000107c6157c();
  func_0x000102c333b0();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a0);
  func_0x000107c61574(uVar9);
  *param_1 = param_2;
  return;
}



/* Entry: 102c2e928; end: 102c2e99b;  */

void FUN_102c2e928(void)

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
  return;
}



/* Entry: 102c2e99c; end: 102c2e9a3;  */

undefined8 FUN_102c2e99c(void)

{
  return 0x1b;
}



/* Entry: 102c2e9a4; end: 102c2ea27;  */

void FUN_102c2e9a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102c2eae0,param_2,FUN_102c2eae4,param_2,FUN_102c2eb0c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c2ea28; end: 102c2ea6f;  */

undefined8 FUN_102c2ea28(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102c333b8();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 102c2ea70; end: 102c2ea9f;  */

undefined ** FUN_102c2ea70(void)

{
  return &PTR_DAT_1130664a8;
}



/* Entry: 102c2eaa0; end: 102c2eabf;  */

void FUN_102c2eaa0(void)

{
  func_0x000107c61168(&PTR_PTR_112f01130);
  return;
}



/* Entry: 102c2eac0; end: 102c2eae3;  */

undefined1  [16] FUN_102c2eac0(void)

{
  return ZEXT816(0x1105b5150);
}



/* Entry: 102c2eae4; end: 102c2eb0b;  */

void FUN_102c2eae4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c2eb0c; end: 102c2eb13;  */

undefined8 FUN_102c2eb0c(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102c333b8();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 102c2eb14; end: 102c2ee2b;  */

void FUN_102c2eb14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074ca38;
  ppuVar4 = &PTR_DAT_1130664a8;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112f011c8;
  func_0x0001000285a8(0x112f011c8,&UNK_10db348a0);
  func_0x0001000a6ee8(&UNK_1105b4fd0,
                      "ActiveOperaSessionEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_102c2ee2c,param_2,uVar2,&UNK_1105b4fd0,&PTR_DAT_112f00e38);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_1105b51a0;
  func_0x000107c613fc(&UNK_1105b51a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105b5458,
                      "ActiveOperaSessionScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_102c2ee58,puVar3,uVar2,&UNK_1105b5458,&PTR_DAT_112f01268);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105b51c8;
  func_0x000107c613fc(&UNK_1105b51c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1105b4d78,"ActiveOperaSessionScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_102c2ef40,puVar3,uVar2,&UNK_1105b4d78,&PTR_DAT_112f00da0);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1105b5050,
                      "AdCrossInventoryRuleTrackerEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_102c2ef48,param_6,uVar2,&UNK_1105b5050,&PTR_DAT_112f00f18);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1105b50d0,
                      "AdMultiSegmentOperaSessionEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,0x102c2ef74,param_7,uVar2,&UNK_1105b50d0,&PTR_DAT_112f00fe8);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_1105b5150,"AdOperaPluginEntryPointWrapperScopeInitializationPluginKey",
                      0x3a,2,FUN_102c2f024,param_8,uVar2,&UNK_1105b5150,&PTR_DAT_112f010c8);
  func_0x000107c61574(param_8);
  uVar2 = 0x112f011d0;
  func_0x0001000285a8(0x112f011d0,&UNK_10db348a8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("ActiveOperaSessionScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102c2ee2c; end: 102c2ee57;  */

void FUN_102c2ee2c(void)

{
  FUN_102c2efa0();
  return;
}



/* Entry: 102c2ee58; end: 102c2ee97;  */

void FUN_102c2ee58(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102c2f9c8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ActiveOperaSessionScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c2ee98; end: 102c2ef3f;  */

void FUN_102c2ee98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105b51f0;
  func_0x000107c613fc(&UNK_1105b51f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102c2f094;
  func_0x0001000823a8(FUN_102c2f094,puVar1);
  func_0x000100082720("ActiveOperaSessionScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102c2ef40; end: 102c2ef47;  */

void FUN_102c2ef40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105b51f0;
  func_0x000107c613fc(&UNK_1105b51f0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102c2f094;
  func_0x0001000823a8(FUN_102c2f094,puVar3);
  func_0x000100082720("ActiveOperaSessionScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102c2ef48; end: 102c2ef9f;  */

void FUN_102c2ef48(void)

{
  FUN_102c2efa0();
  return;
}



/* Entry: 102c2efa0; end: 102c2f023;  */

void FUN_102c2efa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 102c2f024; end: 102c2f04f;  */

void FUN_102c2f024(void)

{
  FUN_102c2efa0();
  return;
}



/* Entry: 102c2f050; end: 102c2f067;  */

void FUN_102c2f050(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x102c2eae0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c2f068; end: 102c2f093;  */

void FUN_102c2f068(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c2f094; end: 102c2f0a3;  */

void FUN_102c2f094(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105b4e00;
  func_0x000107c613fc(&UNK_1105b4e00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102c2c9dc;
  func_0x00010058fa64(FUN_102c2c9dc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c2f0a4; end: 102c2f1bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102c2f0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102c2f4f4();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f011d8) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f011e0) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c2f1bc);
  (*pcVar2)();
}



/* Entry: 102c2f1bc; end: 102c2f21b; -[_TtC34ActiveOperaSessionScopeGraphBridge49ActiveOperaSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_102c2f1bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActiveOperaSessionScopeGraphBridge.ActiveOperaSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c2f1e8);
  (*pcVar1)();
}



/* Entry: 102c2f21c; end: 102c2f253; -[_TtC34ActiveOperaSessionScopeGraphBridge49ActiveOperaSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c2f238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c2f23c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2f21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f011d8));
  return;
}



/* Entry: 102c2f254; end: 102c2f27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2f254(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f011e0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f011d8));
  return;
}



/* Entry: 102c2f27c; end: 102c2f29b;  */

void FUN_102c2f27c(void)

{
  func_0x000107c61168(&PTR_PTR_112898a10);
  return;
}



/* Entry: 102c2f29c; end: 102c2f323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c2f29c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f01210) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f01218);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c2f324);
  (*pcVar2)();
}



/* Entry: 102c2f324; end: 102c2f40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c2f324(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f01210);
  *(undefined **)(unaff_x20 + _DAT_112f01210) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f01218);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f01218))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105b5310;
  func_0x000107c613fc(&UNK_1105b5310,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102c2f410,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102c2f40c; end: 102c2f417;  */

void FUN_102c2f40c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102c2f418; end: 102c2f477; -[_TtC34ActiveOperaSessionScopeGraphBridge47ActiveOperaSessionScopedServicesSaberEntryPoint init] */

void FUN_102c2f418(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActiveOperaSessionScopeGraphBridge.ActiveOperaSessionScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c2f444);
  (*pcVar1)();
}



/* Entry: 102c2f478; end: 102c2f4af; -[_TtC34ActiveOperaSessionScopeGraphBridge47ActiveOperaSessionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2f478(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f01218));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f01210));
  return;
}



/* Entry: 102c2f4b0; end: 102c2f4b3;  */

void FUN_102c2f4b0(void)

{
  return;
}



/* Entry: 102c2f4b4; end: 102c2f4d3;  */

void FUN_102c2f4b4(void)

{
  FUN_102c2f324();
  return;
}



/* Entry: 102c2f4d4; end: 102c2f4f3;  */

void FUN_102c2f4d4(void)

{
  func_0x000107c61168(&PTR_PTR_112898ad8);
  return;
}



/* Entry: 102c2f4f4; end: 102c2f5c3;  */

undefined8 FUN_102c2f4f4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f01248,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102c2f5c4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102c2f5c4; end: 102c2f5e3;  */

void FUN_102c2f5c4(void)

{
  func_0x000107c61168(&PTR_PTR_112898ba0);
  return;
}



/* Entry: 102c2f5e4; end: 102c2f607;  */

void FUN_102c2f5e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105b5358;
  func_0x0001000285a8(0x112f01250,&UNK_10db34978);
  func_0x000107c613fc(&UNK_1105b5358,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102c2f68c,puVar1);
  return;
}



/* Entry: 102c2f608; end: 102c2f68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2f608(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102c2f5c4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f01258) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f01260) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102c2f68c; end: 102c2f693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2f68c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_102c2f5c4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f01258) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f01260) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102c2f694; end: 102c2f6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2f694(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f01258) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f01260) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c2f6f8; end: 102c2f757; -[_TtC34ActiveOperaSessionScopeGraphBridge42ActiveOperaSessionScopeGraphBridgeServices init] */

void FUN_102c2f6f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActiveOperaSessionScopeGraphBridge.ActiveOperaSessionScopeGraphBridgeServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c2f724);
  (*pcVar1)();
}



/* Entry: 102c2f758; end: 102c2f78f; -[_TtC34ActiveOperaSessionScopeGraphBridge42ActiveOperaSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c2f774: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c2f778) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2f758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f01258));
  return;
}



/* Entry: 102c2f790; end: 102c2f7c3; -[ActiveOperaSessionScope activeOperaSessionScopeGraphBridgeServices] */

void FUN_102c2f790(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c2f4f4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c2f7c4; end: 102c2f84f; -[ActiveOperaSessionScope setActiveOperaSessionScopeGraphBridgeServices:] */

void FUN_102c2f7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112f01248,auStack_48,0x20,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61188();
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c2f850; end: 102c2f88f;  */

void FUN_102c2f850(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102c2fc90,0);
  return;
}



/* Entry: 102c2f890; end: 102c2f89b;  */

void FUN_102c2f890(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102c2fc8c,param_1);
  return;
}



/* Entry: 102c2f89c; end: 102c2f927;  */

void FUN_102c2f89c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102c2fc94,0);
  return;
}



/* Entry: 102c2f928; end: 102c2f933;  */

void FUN_102c2f928(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c2f98c,param_1);
  return;
}



/* Entry: 102c2f934; end: 102c2f98b;  */

void FUN_102c2f934(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102c2f98c; end: 102c2f9bf;  */

void FUN_102c2f98c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102c2f9c0; end: 102c2f9eb;  */

undefined8 FUN_102c2f9c0(void)

{
  return 0x1b;
}



/* Entry: 102c2f9ec; end: 102c2fa6b;  */

void FUN_102c2f9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 102c2fa6c; end: 102c2fb63;  */

void FUN_102c2fa6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f01248,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f01248,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105b5498;
  func_0x000107c613fc(&UNK_1105b5498,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102c2fc84;
  func_0x00010058fa64(0x102c2fc84,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c2fb64; end: 102c2fb8f;  */

void FUN_102c2fb64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c2fb90; end: 102c2fb97;  */

void FUN_102c2fb90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f01248,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f01248,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105b5498;
  func_0x000107c613fc(&UNK_1105b5498,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102c2fc84;
  func_0x00010058fa64(0x102c2fc84,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c2fb98; end: 102c2fbf3;  */

void FUN_102c2fb98(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f01248,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f01248,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102c2fbf4; end: 102c2fc97;  */

undefined ** FUN_102c2fbf4(void)

{
  return &PTR_DAT_1130664a8;
}



/* Entry: 102c2fc98; end: 102c2fcdf; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2fc98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f012b8;
  func_0x000107c61428(param_1 + _DAT_112f012b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c2fce0; end: 102c2fd37; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2fce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f012b8;
  func_0x000107c61428(param_1 + _DAT_112f012b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c2fd38; end: 102c2fd7f; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint operaPageViewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2fd38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f012c0;
  func_0x000107c61428(param_1 + _DAT_112f012c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c2fd80; end: 102c2fd8b; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint setOperaPageViewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2fd80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f012c0;
  func_0x000107c61428(param_1 + _DAT_112f012c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c2fd8c; end: 102c2fdd3; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint sCAdPlaybackScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2fd8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f012c8;
  func_0x000107c61428(param_1 + _DAT_112f012c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c2fdd4; end: 102c2fddf; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint setSCAdPlaybackScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2fdd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f012c8;
  func_0x000107c61428(param_1 + _DAT_112f012c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c2fde0; end: 102c2fe27; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint activeOperaSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2fde0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f012d0;
  func_0x000107c61428(param_1 + _DAT_112f012d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c2fe28; end: 102c2fe33; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint setActiveOperaSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2fe28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f012d0;
  func_0x000107c61428(param_1 + _DAT_112f012d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c2fe34; end: 102c2fe93;  */

void FUN_102c2fe34(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}


