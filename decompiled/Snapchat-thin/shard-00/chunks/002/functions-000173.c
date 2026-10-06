/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003fbb34; end: 1003fbb7f;  */

void FUN_1003fbb34(void)

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



/* Entry: 1003fbb80; end: 1003fbcbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fbb80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  FUN_100083b20(&puStack_60);
  uVar1 = *(undefined8 *)(puStack_60 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(puStack_60);
  uVar5 = uVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_1103fcbc0;
  func_0x000107c613fc(&UNK_1103fcbc0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puStack_40 = &UNK_101702f30;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1017031ac;
  puStack_48 = &UNK_1103fcbd8;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  FUN_1001c86e0(0);
  func_0x000107c610f8();
  FUN_1003fbcf8(puVar2,uVar5);
  *param_1 = puVar2;
  return;
}



/* Entry: 1003fbcc0; end: 1003fbce3;  */

void FUN_1003fbcc0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003fbce4; end: 1003fbcf7;  */

void FUN_1003fbce4(long param_1,long param_2)

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



/* Entry: 1003fbcf8; end: 1003fbd43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fbcf8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f15588) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003fbd44; end: 1003fbd4b;  */

void FUN_1003fbd44(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_1003fbd4c(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_1003fbdb4();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1003fbd4c; end: 1003fbd6b;  */

void FUN_1003fbd4c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8798);
  return;
}



/* Entry: 1003fbd6c; end: 1003fbdb3;  */

void FUN_1003fbd6c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1003fbd4c(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_1003fbdb4();
  *param_1 = param_2;
  return;
}



/* Entry: 1003fbdb4; end: 1003fbdff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fbdb4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112dc5f38) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003fbe00; end: 1003fbe4f;  */

void FUN_1003fbe00(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fbe50; end: 1003fbe57;  */

void FUN_1003fbe50(undefined8 *param_1)

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



/* Entry: 1003fbe58; end: 1003fbeab;  */

void FUN_1003fbe58(undefined8 *param_1)

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



/* Entry: 1003fbeac; end: 1003fbeb7;  */

void FUN_1003fbeac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10022d98c();
  func_0x000107c613fc();
  FUN_1003fbf84(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fbeb8; end: 1003fbf4b;  */

void FUN_1003fbeb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10022d98c();
  func_0x000107c613fc();
  FUN_1003fbf84(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1003fbf4c; end: 1003fbf83;  */

void FUN_1003fbf4c(undefined8 param_1)

{
  if (lRam0000000112ddb358 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65d154);
  return;
}



/* Entry: 1003fbf84; end: 1003fc05f;  */

void FUN_1003fbf84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_1003fbf4c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1003fc0a4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001003fc0d8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1003fc060; end: 1003fc0a3;  */

void FUN_1003fc060(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBOWV_11034d658 + 0x40;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0x100,2,&puStack_20,param_1 + 0x70);
  return;
}



/* Entry: 1003fc0a4; end: 1003fc1b7;  */

void FUN_1003fc0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1003fc1b8; end: 1003fc1cb;  */

void FUN_1003fc1b8(long param_1,long param_2)

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



/* Entry: 1003fc1cc; end: 1003fc217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fc1cc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11301ae80) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003fc218; end: 1003fc24b;  */

void FUN_1003fc218(void)

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



/* Entry: 1003fc24c; end: 1003fc253;  */

void FUN_1003fc24c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fc254; end: 1003fc2a7;  */

void FUN_1003fc254(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fc2a8; end: 1003fc5d3;  */

void FUN_1003fc2a8(long *param_1,long param_2)

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
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_1002312e0();
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
  func_0x00010040e898();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = uVar11;
  FUN_10040e924();
  *(undefined8 *)(param_2 + 0x10) = uVar12;
  uVar13 = uVar12;
  func_0x000107c6157c();
  func_0x00010040e9b4();
  func_0x000107c61574(uVar12);
  func_0x000107c61170(uVar11);
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
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 1003fc5d4; end: 1003fc60f;  */

void FUN_1003fc5d4(void)

{
  long unaff_x20;
  
  FUN_1003fc2a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1003fc610; end: 1003fc617;  */

void FUN_1003fc610(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x140);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fc618; end: 1003fc66b;  */

void FUN_1003fc618(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x140);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fc66c; end: 1003fd133;  */

void FUN_1003fc66c(long *param_1,long param_2)

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
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_100083b20(&uStack_190);
  FUN_100083b20(&uStack_198);
  FUN_100230278();
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
  *(undefined8 *)(param_2 + 0xc0) = uStack_120;
  *(undefined8 *)(param_2 + 200) = uStack_128;
  *(undefined8 *)(param_2 + 0xd0) = uStack_130;
  *(undefined8 *)(param_2 + 0xd8) = uStack_138;
  *(undefined8 *)(param_2 + 0xe0) = uStack_140;
  *(undefined8 *)(param_2 + 0xe8) = uStack_148;
  *(undefined8 *)(param_2 + 0xf0) = uStack_150;
  *(undefined8 *)(param_2 + 0xf8) = uStack_158;
  *(undefined8 *)(param_2 + 0x100) = uStack_160;
  *(undefined8 *)(param_2 + 0x108) = uStack_168;
  *(undefined8 *)(param_2 + 0x110) = uStack_170;
  *(undefined8 *)(param_2 + 0x118) = uStack_178;
  *(undefined8 *)(param_2 + 0x120) = uStack_180;
  *(undefined8 *)(param_2 + 0x128) = uStack_188;
  *(undefined8 *)(param_2 + 0x130) = uStack_190;
  *(undefined8 *)(param_2 + 0x138) = uStack_198;
  func_0x00010040ca9c();
  func_0x000107c613fc();
  uVar1 = uStack_148;
  func_0x000107c61174();
  uVar2 = uStack_150;
  func_0x000107c61174();
  uVar3 = uStack_158;
  func_0x000107c61174();
  uVar4 = uStack_160;
  func_0x000107c61174();
  uVar5 = uStack_168;
  func_0x000107c61174();
  uVar6 = uStack_170;
  func_0x000107c61174();
  uVar7 = uStack_178;
  func_0x000107c61174();
  uVar8 = uStack_180;
  func_0x000107c61174();
  uVar9 = uStack_188;
  func_0x000107c61174();
  uVar10 = uStack_190;
  func_0x000107c61174();
  uVar11 = uStack_198;
  func_0x000107c61174();
  uVar12 = uStack_78;
  func_0x000107c61174();
  uVar13 = uStack_80;
  func_0x000107c61174();
  uVar14 = uStack_88;
  func_0x000107c61174();
  uVar15 = uStack_90;
  func_0x000107c61174();
  uVar16 = uStack_98;
  func_0x000107c61174();
  uVar18 = uStack_a0;
  func_0x000107c61174();
  uVar19 = uStack_a8;
  func_0x000107c61174();
  uVar20 = uStack_b0;
  func_0x000107c61174();
  uVar21 = uStack_b8;
  func_0x000107c61174();
  uVar22 = uStack_c0;
  func_0x000107c61174();
  uVar23 = uStack_c8;
  func_0x000107c61174();
  uVar24 = uStack_d0;
  func_0x000107c61174();
  uVar25 = uStack_d8;
  func_0x000107c61174();
  uVar26 = uStack_e0;
  func_0x000107c61174();
  uVar27 = uStack_e8;
  func_0x000107c61174();
  uVar28 = uStack_f0;
  func_0x000107c61174();
  uVar29 = uStack_f8;
  func_0x000107c61174();
  uVar30 = uStack_100;
  func_0x000107c61174();
  uVar31 = uStack_108;
  func_0x000107c61174();
  uVar32 = uStack_110;
  func_0x000107c61174();
  uVar33 = uStack_118;
  func_0x000107c61174();
  uVar34 = uStack_120;
  func_0x000107c61174();
  uVar35 = uStack_128;
  func_0x000107c61174();
  uVar36 = uStack_130;
  func_0x000107c61174();
  uVar37 = uStack_138;
  func_0x000107c61174();
  uVar38 = uStack_140;
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
  uVar17 = auStack_70[0];
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
  uVar39 = uVar17;
  FUN_10040cb74(uVar17,uVar12,uVar13,uVar14,uVar15,uVar16,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,
                uVar24,uVar25,uVar26,uVar27,uVar28,uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,
                uVar36,uVar37,uVar38,uStack_148,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
                uVar10,uVar11);
  *(undefined8 *)(param_2 + 0x10) = uVar39;
  uVar40 = uVar39;
  func_0x000107c6157c();
  FUN_10040cc40();
  func_0x000107c61574(uVar39);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
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
  *(undefined8 *)(param_2 + 0x140) = uVar40;
  *param_1 = param_2;
  return;
}



/* Entry: 1003fd134; end: 1003fd1a7;  */

void FUN_1003fd134(void)

{
  long unaff_x20;
  
  FUN_1003fc66c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138));
  return;
}



/* Entry: 1003fd1a8; end: 1003fd1af;  */

void FUN_1003fd1a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fd1b0; end: 1003fd203;  */

void FUN_1003fd1b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fd204; end: 1003fd20b;  */

void FUN_1003fd204(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b129c();
  func_0x000107c613fc();
  FUN_1003fd2bc(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar2 = uVar1;
  FUN_1003fd338();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  FUN_1003fd364();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1003fd20c; end: 1003fd2bb;  */

void FUN_1003fd20c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b129c();
  func_0x000107c613fc();
  FUN_1003fd2bc(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar2 = uVar1;
  FUN_1003fd338();
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  FUN_1003fd364();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 1003fd2bc; end: 1003fd337;  */

void FUN_1003fd2bc(undefined8 param_1)

{
  if (lRam0000000112dce818 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e655bf0);
  return;
}



/* Entry: 1003fd338; end: 1003fd343;  */

void FUN_1003fd338(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1003fd344; end: 1003fd363;  */

void FUN_1003fd344(void)

{
  func_0x000107c61168(&PTR_PTR_1127e9e50);
  return;
}



/* Entry: 1003fd364; end: 1003fd3a7;  */

void FUN_1003fd364(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1003fd344(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_1001c98ac(0);
  func_0x000107c610f8();
  func_0x0001003fd3e4(uVar1);
  return;
}



/* Entry: 1003fd3a8; end: 1003fd42f; -[_TtC34AppStoreInfoServicesImplementation20AppStoreInfoProvider init] */

void FUN_1003fd3a8(undefined8 param_1)

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



/* Entry: 1003fd430; end: 1003fd437;  */

void FUN_1003fd430(undefined8 *param_1)

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



/* Entry: 1003fd438; end: 1003fd48b;  */

void FUN_1003fd438(undefined8 *param_1)

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



/* Entry: 1003fd48c; end: 1003fd49b;  */

void FUN_1003fd48c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002093c4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_1003fd644(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_1003fd6c4();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_1003fd70c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003fd49c; end: 1003fd643;  */

void FUN_1003fd49c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  FUN_1002093c4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_1003fd644(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1003fd6c4();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_1003fd70c();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1003fd644; end: 1003fd6c3;  */

void FUN_1003fd644(undefined8 param_1)

{
  if (lRam0000000112dd1b70 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65785c);
  return;
}



/* Entry: 1003fd6c4; end: 1003fd70b;  */

void FUN_1003fd6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1003fd70c; end: 1003fda13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1003fd70c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar10;
  long lVar11;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  FUN_1000285a8(0x112d6e3a8,&UNK_10d930310);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4ec80(uVar3);
  func_0x000107c61180();
  uVar7 = uVar3;
  FUN_1000bda74();
  func_0x000107c61170(uVar3);
  uVar3 = 0x112dd1b38;
  FUN_1000285a8(0x112dd1b38,&UNK_10d992da8);
  puVar4 = &UNK_1018f6e54;
  FUN_1000cb480(&UNK_1018f6e54,0,uVar3);
  func_0x000107c61574(uVar7);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar5 != 0) {
    FUN_1000285a8(0x112dbfa50,&UNK_10d97b760);
    lVar6 = lVar5;
    FUN_1000bda74();
    func_0x000107c61170(lVar5);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_11308d048);
    puVar10 = *(undefined **)(*(long *)(unaff_x20 + 0x28) + _DAT_113093a98);
    func_0x000107c6157c(uVar3);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(lVar11 + 0x68))
                (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
                 lVar2);
      puVar8 = PTR_PTR_1126ae790;
      func_0x000107c610f8();
      uVar7 = 0xd00000000000002f;
      func_0x000107c5fadc(0xd00000000000002f,0x800000010efc00c0);
      func_0x000107c5f800();
      func_0x000107c470d0();
      func_0x000107c61170(uVar7);
      (**(code **)(lVar11 + 8))
                (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    }
    else {
      uVar7 = 0xd00000000000002f;
      func_0x000107c5fadc(0xd00000000000002f,0x800000010efc00c0);
      puVar8 = puVar10;
      func_0x000107c4e60c();
      func_0x000107c61180();
      func_0x000107c615e8(puVar10);
      func_0x000107c61170(uVar7);
    }
    puVar10 = &UNK_11040fc48;
    func_0x000107c613fc(&UNK_11040fc48,0x30,7);
    *(undefined **)(puVar10 + 0x10) = puVar4;
    *(long *)(puVar10 + 0x18) = lVar6;
    *(undefined8 *)(puVar10 + 0x20) = uVar3;
    *(undefined **)(puVar10 + 0x28) = puVar8;
    FUN_1000285a8(0x112dd1b40,&UNK_10d992db8);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(lVar6);
    func_0x000107c615f0(puVar8);
    puVar9 = &UNK_1018f6f58;
    FUN_1000bdd8c(&UNK_1018f6f58,puVar10);
    uVar7 = 0;
    FUN_100209504(0);
    func_0x000107c610f8();
    FUN_1003fda50(puVar9,uVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(lVar6);
    func_0x000107c61574(uVar3);
    func_0x000107c615e8(puVar8);
    return puVar9;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fda14);
  (*pcVar1)();
}



/* Entry: 1003fda14; end: 1003fda4f;  */

void FUN_1003fda14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003fda50; end: 1003fdaa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fda50(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113011750) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113011748) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003fdaa8; end: 1003fdaeb;  */

void FUN_1003fdaa8(void)

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



/* Entry: 1003fdaec; end: 1003fdaf3;  */

void FUN_1003fdaec(undefined8 *param_1)

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



/* Entry: 1003fdaf4; end: 1003fdb47;  */

void FUN_1003fdaf4(undefined8 *param_1)

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



/* Entry: 1003fdb48; end: 1003fdb4f;  */

void FUN_1003fdb48(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1001d74b0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1003fdc34(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_1003fdcb0();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_1003fdcd8();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003fdb50; end: 1003fdc33;  */

void FUN_1003fdb50(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1001d74b0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1003fdc34(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1003fdcb0();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_1003fdcd8();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1003fdc34; end: 1003fdcaf;  */

void FUN_1003fdc34(undefined8 param_1)

{
  if (lRam0000000112dcfa10 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e656540);
  return;
}



/* Entry: 1003fdcb0; end: 1003fdcd7;  */

void FUN_1003fdcb0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1003fdcd8; end: 1003fddb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1003fdcd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11304a478);
  FUN_1000285a8(0x112dcf9d8,&UNK_10d991420);
  func_0x000107c613fc();
  func_0x000107c61580(uVar4,2);
  puVar1 = &UNK_1018d4bd0;
  FUN_1000bdd8c(&UNK_1018d4bd0,uVar4);
  uVar3 = 0x112dcf9e0;
  FUN_1000285a8(0x112dcf9e0,&UNK_10d991428);
  puVar2 = &UNK_1018d4bd8;
  FUN_1000cb480(&UNK_1018d4bd8,0,uVar3);
  uVar3 = 0;
  FUN_1001d7e4c(0);
  func_0x000107c610f8();
  FUN_1003fddd4(puVar2,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar1);
  return puVar2;
}



/* Entry: 1003fddb4; end: 1003fddd3;  */

void FUN_1003fddb4(void)

{
  func_0x000107c61168(&PTR_PTR_1127eae28);
  return;
}



/* Entry: 1003fddd4; end: 1003fde2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fddd4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113010a58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113010a50) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003fde2c; end: 1003fde57;  */

void FUN_1003fde2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003fde58; end: 1003fde5f;  */

void FUN_1003fde58(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x112db39e8;
  FUN_1000285a8(0x112db39e8,&UNK_10d95dd70);
  func_0x000107c613fc();
  func_0x000107c6157c();
  puVar1 = &UNK_10153c08c;
  FUN_1000bdd8c();
  func_0x000107c613fc(uVar3,0x18,7);
  func_0x000107c6157c();
  puVar2 = &UNK_10153c114;
  FUN_1000bdd8c(&UNK_10153c114);
  uVar3 = 0;
  FUN_10022e83c(0);
  func_0x000107c610f8();
  FUN_1003fdf28(puVar1,puVar2,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003fde60; end: 1003fdf27;  */

void FUN_1003fde60(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x112db39e8;
  FUN_1000285a8(0x112db39e8,&UNK_10d95dd70);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  puVar1 = &UNK_10153c08c;
  FUN_1000bdd8c(&UNK_10153c08c,param_2);
  func_0x000107c613fc(uVar3,0x18,7);
  func_0x000107c6157c(param_2);
  puVar2 = &UNK_10153c114;
  FUN_1000bdd8c(&UNK_10153c114,param_2);
  uVar3 = 0;
  FUN_10022e83c(0);
  func_0x000107c610f8();
  FUN_1003fdf28(puVar1,puVar2,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003fdf28; end: 1003fdfa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fdf28(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113010620) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113010628) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113010610) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113010618) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003fdfa4; end: 1003fdfab;  */

void FUN_1003fdfa4(undefined8 *param_1)

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



/* Entry: 1003fdfac; end: 1003fdfff;  */

void FUN_1003fdfac(undefined8 *param_1)

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



/* Entry: 1003fe000; end: 1003fe00f;  */

void FUN_1003fe000(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
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
  FUN_10022f584();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  func_0x0001004004d0(0);
  func_0x000107c613fc();
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
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_100400554();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_1004005a4();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003fe010; end: 1003fe1ef;  */

void FUN_1003fe010(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10022f584();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  func_0x0001004004d0(0);
  func_0x000107c613fc();
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
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_100400554();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_1004005a4();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 1003fe1f0; end: 1003fe1f7;  */

void FUN_1003fe1f0(undefined8 *param_1)

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



/* Entry: 1003fe1f8; end: 1003fe24b;  */

void FUN_1003fe1f8(undefined8 *param_1)

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



/* Entry: 1003fe24c; end: 1003fe25b;  */

void FUN_1003fe24c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
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
  FUN_10022ea58();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  func_0x0001003ffe90(0);
  func_0x000107c613fc();
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
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_1003fff14();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  func_0x0001003fff64();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003fe25c; end: 1003fe43b;  */

void FUN_1003fe25c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10022ea58();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  func_0x0001003ffe90(0);
  func_0x000107c613fc();
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
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_1003fff14();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  func_0x0001003fff64();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 1003fe43c; end: 1003fe443;  */

void FUN_1003fe43c(undefined8 *param_1)

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



/* Entry: 1003fe444; end: 1003fe497;  */

void FUN_1003fe444(undefined8 *param_1)

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



/* Entry: 1003fe498; end: 1003fe4a3;  */

void FUN_1003fe498(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10022d398();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_1003fe8f0(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1003fe970();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_1003fe9ac();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003fe4a4; end: 1003fe60b;  */

void FUN_1003fe4a4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10022d398();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1003fe8f0(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_1003fe970();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_1003fe9ac();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 1003fe60c; end: 1003fe613;  */

void FUN_1003fe60c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fe614; end: 1003fe667;  */

void FUN_1003fe614(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fe668; end: 1003fe66f;  */

void FUN_1003fe668(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d1f08();
  func_0x000107c613fc();
  func_0x0001003fe6d0(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1003fe670; end: 1003fe797;  */

void FUN_1003fe670(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d1f08();
  func_0x000107c613fc();
  func_0x0001003fe6d0(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1003fe798; end: 1003fe87b; -[SCSKAdServiceProvider provide] */

void FUN_1003fe798(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126b8e28;
  func_0x000107c610f4(PTR_PTR_1126b8e28);
  func_0x000107c48450();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003fe87c; end: 1003fe8ef; -[SCSKAdServices initWithSKAdNetwork:] */

undefined1 * FUN_1003fe87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112703080;
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



/* Entry: 1003fe8f0; end: 1003fe96f;  */

void FUN_1003fe8f0(undefined8 param_1)

{
  if (lRam0000000112dd1490 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e657390);
  return;
}



/* Entry: 1003fe970; end: 1003fe9ab;  */

void FUN_1003fe970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 1003fe9ac; end: 1003febfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ** FUN_1003fe9ac(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long **pplVar7;
  long extraout_x8;
  undefined8 uVar8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *aplStack_a0 [5];
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_60;
  long lStack_58;
  
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_11304a478);
  func_0x000107c6157c(uVar9);
  FUN_1000d224c(aplStack_a0 + 2);
  func_0x000107c61574(uVar9);
  lVar1 = 0;
  FUN_1003fec38();
  aplStack_a0[1] = aplStack_a0[3];
  aplStack_a0[0] = aplStack_a0[2];
  lVar2 = lVar1;
  func_0x000107c610f8();
  puVar10 = (undefined8 *)(lVar2 + _DAT_112dd15d0);
  puVar10[1] = aplStack_a0[1];
  *puVar10 = aplStack_a0[0];
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5b0a8();
  func_0x000107c61180();
  uVar9 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113010c08);
  func_0x000107c5c734();
  func_0x000107c61180();
  ppuStack_70 = &PTR_DAT_11040f4e8;
  lVar5 = 0;
  aplStack_a0[2] = plVar3;
  lStack_78 = lVar1;
  FUN_1003ff9b0();
  func_0x000107c613fc();
  FUN_1000c6518(aplStack_a0 + 2,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar10 = (undefined8 *)((long)aplStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar10);
  uVar8 = *puVar10;
  *(long *)(lVar5 + 0x38) = lVar1;
  *(undefined ***)(lVar5 + 0x40) = &PTR_DAT_11040f4e8;
  *(undefined8 *)(lVar5 + 0x18) = uVar9;
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  func_0x000107c61174(plVar3);
  func_0x0001000834e4(aplStack_a0 + 2);
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c61174(plVar3);
  func_0x000107c6157c(lVar5);
  func_0x000107c453e4(puVar6);
  uVar4 = 0;
  func_0x0001003ff9d0();
  uVar9 = uVar4;
  func_0x000107c610f8();
  lVar2 = lVar5;
  FUN_1003ff9f0(lVar5,plVar3,puVar6,uVar9);
  ppuStack_70 = &PTR_DAT_11040f1d0;
  aplStack_a0[2] = (long *)lVar2;
  lStack_78 = uVar4;
  FUN_10022db30(0);
  func_0x000107c610f8();
  func_0x000107c61174(lVar2);
  func_0x000107c61174();
  pplVar7 = aplStack_a0 + 2;
  FUN_1003ffd90(pplVar7,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(lVar5);
  func_0x000107c61170(plVar3);
  return pplVar7;
}



/* Entry: 1003febfc; end: 1003fec37;  */

void FUN_1003febfc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  param_1[1] = &PTR_DAT_1103f2950;
  return;
}



/* Entry: 1003fec38; end: 1003fec57;  */

void FUN_1003fec38(void)

{
  func_0x000107c61168(&PTR_PTR_1127ebd00);
  return;
}



/* Entry: 1003fec58; end: 1003fec5f; -[SCSKAdServices skAdNetwork] */

undefined8 FUN_1003fec58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003fec60; end: 1003fec9f;  */

void FUN_1003fec60(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b1c0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1003feca0; end: 1003fecbb; -[SCSKAdServiceProvider _createAdNetwork] */

void FUN_1003feca0(void)

{
  func_0x000107c610fc(PTR_PTR_1126b8e30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003fecbc; end: 1003fef6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fecbc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_68;
  
  uVar1 = param_1 + 0x30;
  func_0x000107c61148();
  uVar2 = uVar1;
  FUN_1003fef6c();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar4 = uVar2;
  func_0x000107c6115c(uVar2,puVar3);
  if ((uVar4 & 1) == 0) {
    lVar5 = param_1 + 0x30;
    func_0x000107c61148();
    lVar6 = lVar5;
    FUN_1003fef6c();
    func_0x000107c61180();
    uStack_68 = lVar6;
    func_0x000107c436d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
  }
  else {
    uStack_68 = 0;
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  lVar5 = param_1 + 0x30;
  func_0x000107c61148();
  lVar6 = lVar5;
  func_0x0001003fef90();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c3d28c();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3ebdc();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  puVar3 = PTR_PTR_1126b8d58;
  func_0x000107c610f4(PTR_PTR_1126b8d58);
  lVar5 = param_1 + 0x30;
  func_0x000107c61148();
  lVar8 = lVar5;
  FUN_1003ff774();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar6 = param_1 + 0x30;
  func_0x000107c61148();
  lVar10 = lVar6;
  func_0x0001003ff798();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c5dac4();
  func_0x000107c61180();
  lVar7 = param_1 + 0x30;
  func_0x000107c61148(lVar7);
  lVar12 = lVar7;
  func_0x0001003ff7bc();
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c3d28c();
  func_0x000107c61180();
  param_1 = param_1 + 0x30;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127231ec;
    func_0x000107c61148(lVar15);
  }
  lVar14 = lVar15;
  func_0x000107c40580(lVar15);
  func_0x000107c61180();
  func_0x000107c46bbc(puVar3);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1003fef6c; end: 1003fefb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fef6c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127231f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003fefb4; end: 1003fefc3; -[SCAdConfigProviderService adConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fefb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11304a480));
  return;
}



/* Entry: 1003fefc4; end: 1003fefcb; -[_TtC20AdConfigProviderImpl16AdConfigProvider boolValueForKey:] */

uint FUN_1003fefc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1003ff038(param_3,param_2,0);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1003fefcc; end: 1003ff037;  */

uint FUN_1003fefcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1003ff038(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1003ff038; end: 1003ff1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1003ff038(long param_1,ulong param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong auStack_90 [3];
  undefined *puStack_78;
  undefined **ppuStack_70;
  byte abStack_68 [24];
  
  FUN_10006c804();
  lVar2 = _DAT_112dbe720;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe720,abStack_68,0x20,0);
  lVar8 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar8 + 0x10) == 0) {
    ppuStack_70 = (undefined **)0x0;
    auStack_90[1] = 0;
    auStack_90[0] = 0;
    puStack_78 = (undefined *)0x0;
    auStack_90[2] = 0;
    func_0x000107c61434(param_2);
  }
  else {
    func_0x000107c61434(param_2);
    func_0x000107c61434(lVar8);
    lVar4 = param_1;
    uVar7 = param_2;
    func_0x000100029284(param_1);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      ppuStack_70 = (undefined **)0x0;
      auStack_90[1] = 0;
      auStack_90[0] = 0;
      puStack_78 = (undefined *)0x0;
      auStack_90[2] = 0;
    }
    else {
      FUN_10048eeb8(*(long *)(lVar8 + 0x38) + lVar4 * 0x28,auStack_90);
      func_0x000107c6142c(lVar8);
    }
  }
  func_0x000107c614a8(abStack_68);
  uVar6 = 0x112dbe728;
  FUN_1000285a8(0x112dbe728,&UNK_10d979918);
  puVar1 = PTR___sSbN_11034dd40;
  pbVar5 = abStack_68;
  func_0x000107c6147c(pbVar5,auStack_90,uVar6,PTR___sSbN_11034dd40,6);
  if (((ulong)pbVar5 & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dbe730);
    FUN_1003ff1e8(uVar6,param_1,param_2,param_3 & 1);
    puStack_78 = puVar1;
    ppuStack_70 = &PTR_DAT_110738330;
    uVar3 = (uint)uVar6;
    auStack_90[0] = CONCAT71(auStack_90[0]._1_7_,(char)uVar6) & 0xffffffffffffff01;
    func_0x000107c61428(unaff_x20 + lVar2,abStack_68,0x21,0);
    FUN_1003ff25c(auStack_90,param_1,param_2);
    func_0x000107c614a8(abStack_68);
  }
  else {
    func_0x000107c6142c(param_2);
    uVar3 = (uint)abStack_68[0];
  }
  FUN_100070bfc();
  return uVar3 & 1;
}



/* Entry: 1003ff1e8; end: 1003ff243;  */

undefined8 FUN_1003ff1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c3ebd4(param_1);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1003ff244; end: 1003ff25b;  */

undefined8 * FUN_1003ff244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1003ff25c; end: 1003ff317;  */

void FUN_1003ff25c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  lStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_60 = param_1[4];
  if (lStack_68 == 0) {
    func_0x0001016881e0(&uStack_80);
    func_0x000101687c08(auStack_58,param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x0001016881e0(auStack_58);
  }
  else {
    FUN_1003ff244(&uStack_80,auStack_58);
    uVar1 = *unaff_x20;
    func_0x000107c61558(uVar1);
    uStack_80 = *unaff_x20;
    FUN_1003ff318(auStack_58,param_2,param_3,uVar1);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_80;
  }
  return;
}



/* Entry: 1003ff318; end: 1003ff43f;  */

undefined8 * FUN_1003ff318(undefined8 *param_1,long param_2,undefined8 *param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  puVar8 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)puVar8 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ff3fc);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_1003ff440(lVar4,param_4 & 1);
    puVar3 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)puVar8 & 1) != ((uint)puVar3 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ff3b8);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101687e28();
    lVar4 = *unaff_x20;
    goto joined_r0x0001003ff410;
  }
  lVar4 = *unaff_x20;
joined_r0x0001003ff410:
  if (((ulong)puVar8 & 1) != 0) {
    puVar8 = (undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 0x28);
    func_0x0001000834e4(puVar8);
    uVar10 = param_1[1];
    uVar9 = *param_1;
    uVar12 = param_1[3];
    uVar11 = param_1[2];
    puVar8[4] = param_1[4];
    puVar8[1] = uVar10;
    *puVar8 = uVar9;
    puVar8[3] = uVar12;
    puVar8[2] = uVar11;
    return puVar8;
  }
  FUN_1003ff708();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 1003ff440; end: 1003ff707;  */

void FUN_1003ff440(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [40];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112dbe770;
  FUN_1000285a8(0x112dbe770,&UNK_10d979988);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_1003ff6d4:
    func_0x000107c61574(lVar15);
LAB_1003ff6dc:
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar8 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1003ff704);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar15);
            goto LAB_1003ff6dc;
          }
          uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
            *puVar17 = -1L << (uVar16 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_1003ff6d4;
        }
        uVar16 = puVar17[lVar18];
        lVar8 = lVar8 + 1;
      } while (uVar16 == 0);
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar8;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar10 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    lVar8 = *(long *)(lVar15 + 0x38) + uVar10 * 0x28;
    if ((param_2 & 1) == 0) {
      FUN_10048eeb8(lVar8,auStack_88);
      func_0x000107c61434(uVar3);
    }
    else {
      FUN_1003ff244(lVar8,auStack_88);
    }
    func_0x000107c6068c(auStack_d0,*(undefined8 *)(lVar7 + 0x28));
    puVar9 = auStack_d0;
    func_0x000107c5fb58(puVar9,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar10 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar4 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar10) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1003ff708);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar10) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar10 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar10 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    FUN_1003ff244(auStack_88,*(long *)(lVar7 + 0x38) + uVar10 * 0x28);
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar8 = lVar18;
  } while( true );
}



/* Entry: 1003ff708; end: 1003ff773;  */

void FUN_1003ff708(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  FUN_1003ff244(param_4,*(long *)(param_5 + 0x38) + param_1 * 0x28);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ff774);
  (*pcVar3)();
}



/* Entry: 1003ff774; end: 1003ff7df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ff774(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127231d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


