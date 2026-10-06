/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031e6b58; end: 1031e6dc7;  */

void FUN_1031e6b58(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + 4);
  if ((lVar7 == 0) || ((*param_2 & 1) == 0)) {
LAB_1031e6c68:
    uVar4 = 1;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 2);
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar1 = *(undefined8 *)(param_2 + 8);
    lVar2 = param_5;
    func_0x000107c3da94();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x000107c5bcc0();
    func_0x000107c61170(lVar3);
    if (lVar2 == 3) {
      if (param_7 != &UNK_11076b050) goto LAB_1031e6c68;
      FUN_1031e6e14(uVar6,lVar7,uVar4,uVar1,param_3,param_4,param_5,param_6,&UNK_11076b050,param_8);
      if (lRam0000000112f4b740 != -1) {
        func_0x000107c61568(0x112f4b740,FUN_1031e75ec);
      }
      param_7 = &UNK_11076b050;
      FUN_1031e6ebc(param_1,uRam00000001138070e8,3,0,param_3,param_4,param_5,param_6,&UNK_11076b050,
                    param_8);
    }
    else {
      if ((lVar2 != 1) || (param_7 != &UNK_11076b0d0)) goto LAB_1031e6c68;
      FUN_1031e6e14(uVar6,lVar7,uVar4,uVar1,param_3,param_4,param_5,param_6,&UNK_11076b0d0,param_8);
      func_0x000108f4236c();
      if ((int)param_6 == 0) {
        if (lRam0000000112f4b738 != -1) {
          func_0x000107c61568(0x112f4b738,0x1031e76dc);
        }
        puVar5 = (undefined8 *)0x1138070e0;
      }
      else {
        if (lRam0000000112f4b740 != -1) {
          func_0x000107c61568(0x112f4b740,FUN_1031e75ec);
        }
        puVar5 = (undefined8 *)0x1138070e8;
      }
      uVar4 = *puVar5;
      func_0x000107c61174(uVar4);
      param_7 = &UNK_11076b0d0;
      FUN_1031e6ebc(param_1);
      func_0x000107c61170(uVar4);
    }
    uVar4 = 0;
  }
  lVar7 = 0;
  func_0x00010440dfa8(0,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x0001031e6cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,uVar4,1,lVar7);
  return;
}



/* Entry: 1031e6dc8; end: 1031e6e03;  */

void FUN_1031e6dc8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031e6e04; end: 1031e6e13;  */

void FUN_1031e6e04(undefined8 param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  
  puVar12 = *(undefined **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar13 = *(long *)(param_2 + 4);
  if ((lVar13 == 0) || ((*param_2 & 1) == 0)) {
LAB_1031e6c68:
    uVar9 = 1;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 2);
    uVar1 = *(undefined8 *)(param_2 + 6);
    uVar2 = *(undefined8 *)(param_2 + 8);
    lVar5 = lVar8;
    func_0x000107c3da94();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    lVar5 = lVar6;
    func_0x000107c5bcc0();
    func_0x000107c61170(lVar6);
    if (lVar5 == 3) {
      if (puVar12 != &UNK_11076b050) goto LAB_1031e6c68;
      FUN_1031e6e14(uVar11,lVar13,uVar1,uVar2,uVar9,uVar4,lVar8,uVar7,&UNK_11076b050,uVar3);
      if (lRam0000000112f4b740 != -1) {
        func_0x000107c61568(0x112f4b740,FUN_1031e75ec);
      }
      puVar12 = &UNK_11076b050;
      FUN_1031e6ebc(param_1,uRam00000001138070e8,3,0,uVar9,uVar4,lVar8,uVar7,&UNK_11076b050,uVar3);
    }
    else {
      if ((lVar5 != 1) || (puVar12 != &UNK_11076b0d0)) goto LAB_1031e6c68;
      FUN_1031e6e14(uVar11,lVar13,uVar1,uVar2,uVar9,uVar4,lVar8,uVar7,&UNK_11076b0d0,uVar3);
      func_0x000108f4236c();
      if ((int)uVar7 == 0) {
        if (lRam0000000112f4b738 != -1) {
          func_0x000107c61568(0x112f4b738,0x1031e76dc);
        }
        puVar10 = (undefined8 *)0x1138070e0;
      }
      else {
        if (lRam0000000112f4b740 != -1) {
          func_0x000107c61568(0x112f4b740,FUN_1031e75ec);
        }
        puVar10 = (undefined8 *)0x1138070e8;
      }
      uVar9 = *puVar10;
      func_0x000107c61174(uVar9);
      puVar12 = &UNK_11076b0d0;
      FUN_1031e6ebc(param_1);
      func_0x000107c61170(uVar9);
    }
    uVar9 = 0;
  }
  lVar8 = 0;
  func_0x00010440dfa8(0,puVar12,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001031e6cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(param_1,uVar9,1,lVar8);
  return;
}



/* Entry: 1031e6e14; end: 1031e6ebb;  */

/* WARNING: Possible PIC construction at 0x0001031e6e8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e6e90) */

void FUN_1031e6e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_6 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c4b9b0(param_6);
    func_0x000107c615e8(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1031e6ebc; end: 1031e707b;  */

void FUN_1031e6ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long in_x7;
  long extraout_x8;
  long in_stack_00000000;
  undefined1 auStack_2f0 [8];
  long alStack_2e8 [5];
  undefined1 auStack_2c0 [4];
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined4 uStack_2ac;
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
  undefined8 uStack_1ef;
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
  undefined8 uStack_12f;
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
  undefined8 uStack_7f;
  
  uStack_2ac = (undefined4)param_3;
  uVar2 = param_2;
  uStack_2bc = param_4;
  uStack_2b8 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(in_x7 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1031e74f8();
  uStack_1d0 = param_2;
  func_0x0001031e60f0(&uStack_1d0);
  uStack_a8 = uStack_158;
  uStack_b0 = uStack_160;
  uStack_98 = uStack_148;
  uStack_a0 = uStack_150;
  uStack_90 = uStack_140;
  uStack_7f = uStack_12f;
  uStack_d8 = uStack_188;
  uStack_e0 = uStack_190;
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  uStack_118 = uStack_1c8;
  uStack_120 = uStack_1d0;
  uStack_108 = uStack_1b8;
  uStack_110 = uStack_1c0;
  uStack_f8 = uStack_1a8;
  uStack_100 = uStack_1b0;
  uStack_e8 = uStack_198;
  uStack_f0 = uStack_1a0;
  func_0x0001031e6100(&uStack_120);
  uStack_218 = uStack_a8;
  uStack_220 = uStack_b0;
  uStack_208 = uStack_98;
  uStack_210 = uStack_a0;
  uStack_200 = uStack_90;
  uStack_1ef = uStack_7f;
  uStack_258 = uStack_e8;
  uStack_260 = uStack_f0;
  uStack_248 = uStack_d8;
  uStack_250 = uStack_e0;
  uStack_238 = uStack_c8;
  uStack_240 = uStack_d0;
  uStack_228 = uStack_b8;
  uStack_230 = uStack_c0;
  uStack_288 = uStack_118;
  uStack_290 = uStack_120;
  uStack_278 = uStack_108;
  uStack_280 = uStack_110;
  uStack_268 = uStack_f8;
  uStack_270 = uStack_100;
  uStack_298 = 0;
  uStack_1d8 = 1;
  uStack_1e0 = 0;
  puVar3 = PTR_PTR_1126b5b00;
  uStack_2a8 = uVar2;
  uStack_2a0 = param_3;
  func_0x000107c61168(PTR_PTR_1126b5b00);
  func_0x000107c61174(param_2);
  func_0x000107c3da98(puVar3);
  func_0x000107c61180();
  (**(code **)(in_stack_00000000 + 0x10))(auStack_2c0 + lVar1,in_x7,in_stack_00000000);
  *(long *)((long)alStack_2e8 + lVar1 + 0x10) = in_x7;
  *(long *)((long)alStack_2e8 + lVar1 + 0x18) = in_stack_00000000;
  *(undefined8 *)((long)alStack_2e8 + lVar1) = 0;
  *(undefined8 *)((long)alStack_2e8 + lVar1 + 8) = 1;
  auStack_2f0[lVar1] = (char)uStack_2ac;
  func_0x00010440de98(uStack_2b8,0,0,auStack_2c0 + lVar1,&uStack_2a8,puVar3,0,0,0);
  return;
}



/* Entry: 1031e707c; end: 1031e708f;  */

code * FUN_1031e707c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  puVar4 = &UNK_110620e80;
  func_0x000107c613fc(&UNK_110620e80,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar6;
  *(undefined8 *)(puVar4 + 0x30) = uVar1;
  *(undefined8 *)(puVar4 + 0x38) = uVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar2);
  uVar9 = 0x112f4b5d0;
  func_0x0001000285a8(0x112f4b5d0,&UNK_10db9ad80);
  pcVar7 = FUN_1031e6a98;
  func_0x0001000bfde0(FUN_1031e6a98,puVar4,uVar9);
  func_0x000107c61574(puVar4);
  pcVar8 = FUN_1031e6aa8;
  func_0x00010487de38(FUN_1031e6aa8,0);
  func_0x000107c61574(pcVar7);
  puVar4 = &UNK_110620ea8;
  func_0x000107c613fc(&UNK_110620ea8,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar6;
  *(undefined8 *)(puVar4 + 0x30) = uVar1;
  *(undefined8 *)(puVar4 + 0x38) = uVar2;
  uVar9 = 0xff;
  func_0x00010440dfa8(0xff,uVar10,uVar3);
  uVar10 = 0;
  func_0x000107c60188(0,uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar2);
  pcVar7 = FUN_1031e6e04;
  func_0x0001000bfde0(FUN_1031e6e04,puVar4,uVar10);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar4);
  return pcVar7;
}



/* Entry: 1031e7090; end: 1031e70bb;  */

void FUN_1031e7090(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10db9ada4;
  func_0x000107c61520();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1031e70bc; end: 1031e70e3;  */

void FUN_1031e70bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&DAT_10dcf9f88,param_1);
  return;
}



/* Entry: 1031e70e4; end: 1031e7123;  */

undefined * FUN_1031e70e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = &DAT_10db9ad88;
  func_0x000107c61520();
  (**(code **)(puVar4 + 0x10))();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    *(undefined **)(puVar1 + 0x18) = puVar4;
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(puVar4 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar3 = 0;
    __sSaMa(0,uVar2);
    puVar4 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar1,uVar3);
    _swift_release(param_1);
    _swift_release(puVar1);
  }
  return puVar4;
}



/* Entry: 1031e7124; end: 1031e712b;  */

void FUN_1031e7124(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1031e712c; end: 1031e718f;  */

long FUN_1031e712c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031e7190; end: 1031e726f;  */

undefined8 * FUN_1031e7190(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar3);
  return param_1;
}



/* Entry: 1031e7270; end: 1031e72c3;  */

undefined8 * FUN_1031e7270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1031e72c4; end: 1031e7357;  */

int FUN_1031e72c4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031e7358; end: 1031e7473;  */

undefined8 FUN_1031e7358(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_c0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_c0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  lVar5 = *(long *)(param_2 + 0x40);
  func_0x000107c614bc(&uStack_80,&uStack_70,param_3);
  uStack_a0 = uStack_80;
  uStack_98 = uStack_78;
  func_0x000107c61434(uStack_78);
  puVar2 = &uStack_a0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_78);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(auStack_c0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_78);
    func_0x000100102924(auStack_c0,&uStack_a0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x0001013c5ec8(0);
  func_0x000107c6147c(auStack_c0,&uStack_a0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_c0[0] = 0;
  }
  return auStack_c0[0];
}



/* Entry: 1031e7474; end: 1031e74f7;  */

undefined8 FUN_1031e7474(undefined8 param_1,undefined8 param_2)

{
  FUN_10326c738(param_2,param_1);
  return param_2;
}



/* Entry: 1031e74f8; end: 1031e75bb;  */

undefined1  [16] FUN_1031e74f8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x796c7065725f6961;
  func_0x000107c5fadc(0x796c7065725f6961,0xe800000000000000);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f130af0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e75bc);
  (*pcVar1)();
}



/* Entry: 1031e75bc; end: 1031e75cb;  */

void FUN_1031e75bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031e75cc; end: 1031e75eb;  */

void FUN_1031e75cc(void)

{
  func_0x000107c61168(&PTR_PTR_112f4b6e0);
  return;
}



/* Entry: 1031e75ec; end: 1031e77c3;  */

void FUN_1031e75ec(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1031e75cc();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0x73656c6b72617073;
  func_0x000107c5fadc(0x73656c6b72617073,0xed00006e6f63692d);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam00000001138070e8 = puVar3;
  return;
}



/* Entry: 1031e77c4; end: 1031e7867;  */

void FUN_1031e77c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110621000;
  func_0x000107c613fc(&UNK_110621000,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1031e7868,puVar1);
  return;
}



/* Entry: 1031e7868; end: 1031e79ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031e7868(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  ulong auStack_80 [4];
  long lStack_60;
  char cStack_58;
  
  func_0x000100083b20(auStack_80);
  func_0x000100083b20(auStack_80);
  uVar1 = auStack_80[0];
  uVar2 = auStack_80[0];
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000100083b20(auStack_80);
  uVar1 = auStack_80[0];
  uVar3 = uVar2;
  FUN_1031e9af0(uVar2,auStack_80[0]);
  func_0x000107c61170(uVar1);
  if ((uVar3 & 1) != 0) {
    func_0x000100083b20(auStack_80);
    lVar4 = *(long *)(auStack_80[0] + _DAT_1130190c8);
    func_0x000107c61174();
    func_0x000107c61170(auStack_80[0]);
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar5 == 0) {
      uVar6 = 0;
      lVar5 = lVar4;
    }
    else {
      lVar4 = lVar5;
      func_0x000107c4057c();
      uVar6 = (undefined1)lVar4;
      func_0x000107c615e8();
    }
    if ((cStack_58 == '\x01') || (lStack_60 != 0x28)) {
      param_1[3] = &UNK_110621160;
      FUN_1031e7a00();
    }
    else {
      param_1[3] = &UNK_1106213e8;
      func_0x0001031e7a40();
    }
    param_1[4] = lVar5;
    func_0x000107c615e8(uVar2);
    *(undefined1 *)param_1 = uVar6;
    return;
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 1031e79f0; end: 1031e79ff;  */

undefined1  [16] FUN_1031e79f0(void)

{
  return ZEXT816(0x110621028);
}



/* Entry: 1031e7a00; end: 1031e7ac7;  */

void FUN_1031e7a00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9af10;
  func_0x000107c61520(&DAT_10db9af10,&UNK_110621160);
  puRam0000000112f4b748 = puVar1;
  return;
}



/* Entry: 1031e7ac8; end: 1031e7c4b;  */

uint FUN_1031e7ac8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_1d0 [80];
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
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  puVar1 = &UNK_10db9b060;
  func_0x000107c614e0(&UNK_10db9b060);
  lStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  if (lStack_78 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_158 = param_1[5];
    uStack_160 = param_1[4];
    uStack_148 = param_1[7];
    uStack_150 = param_1[6];
    uStack_138 = param_1[9];
    uStack_140 = param_1[8];
    uStack_178 = param_1[1];
    uStack_180 = *param_1;
    uStack_168 = param_1[3];
    uStack_170 = param_1[2];
    uStack_130 = uStack_180;
    uStack_128 = uStack_178;
    uStack_120 = uStack_170;
    uStack_118 = uStack_168;
    uStack_110 = uStack_160;
    uStack_108 = uStack_158;
    uStack_100 = uStack_150;
    uStack_f8 = uStack_148;
    uStack_f0 = uStack_140;
    uStack_e8 = uStack_138;
    FUN_1031e8a40(&uStack_180,auStack_1d0);
    puVar2 = &uStack_130;
    FUN_1031e9818(puVar2,&uStack_e0,puVar1);
    func_0x0001031e8a7c(&uStack_80);
    func_0x000107c61574(puVar1);
    if (((ulong)puVar2 & 1) != 0) {
      puVar1 = &UNK_10db9b080;
      func_0x000107c614e0(&UNK_10db9b080);
      FUN_1031e8a40(&uStack_180,auStack_1d0);
      puVar2 = &uStack_130;
      FUN_1031e9818(puVar2,&uStack_e0,puVar1);
      func_0x0001031e8a7c(&uStack_80);
      func_0x000107c61574(puVar1);
      if (((ulong)puVar2 & 1) == 0) {
        uVar3 = 1;
        goto LAB_1031e7c34;
      }
    }
    puVar1 = &UNK_10db9b038;
    func_0x000107c614e0(&UNK_10db9b038);
    FUN_1031e8a40(&uStack_180,auStack_1d0);
    puVar2 = &uStack_130;
    FUN_1031e9818(puVar2,&uStack_e0,puVar1);
    uVar3 = (uint)puVar2;
    func_0x0001031e8a7c(&uStack_80);
    func_0x000107c61574(puVar1);
    if ((uVar3 & 0xff) != 2) goto LAB_1031e7c34;
  }
  uVar3 = 0;
LAB_1031e7c34:
  return uVar3 & 1;
}



/* Entry: 1031e7c4c; end: 1031e7f57;  */

void FUN_1031e7c4c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2a0 [80];
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
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
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_188 = param_2[5];
  uStack_190 = param_2[4];
  uStack_178 = param_2[7];
  uStack_180 = param_2[6];
  uStack_168 = param_2[9];
  uStack_170 = param_2[8];
  uStack_160 = param_2[10];
  uStack_1a8 = param_2[1];
  uStack_1b0 = *param_2;
  uStack_198 = param_2[3];
  uStack_1a0 = param_2[2];
  puVar2 = &UNK_10db9aff0;
  func_0x000107c614e0(&UNK_10db9aff0);
  lStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
LAB_1031e7d94:
    puVar2 = &UNK_10db9b010;
    func_0x000107c614e0(&UNK_10db9b010);
    if (lStack_a8 != 0) {
      puVar6 = (undefined *)0x0;
      puVar7 = (undefined8 *)0xe000000000000000;
      goto LAB_1031e7db4;
    }
    func_0x000107c61574(puVar2);
    puVar8 = (undefined8 *)0x0;
    puVar6 = (undefined *)0x0;
    puVar7 = (undefined8 *)0xe000000000000000;
  }
  else {
    uStack_128 = param_2[5];
    uStack_130 = param_2[4];
    uStack_118 = param_2[7];
    uStack_120 = param_2[6];
    uStack_108 = param_2[9];
    uStack_110 = param_2[8];
    lStack_148 = param_2[1];
    uStack_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    uStack_100 = uStack_150;
    lStack_f8 = lStack_148;
    uStack_f0 = uStack_140;
    uStack_e8 = uStack_138;
    uStack_e0 = uStack_130;
    uStack_d8 = uStack_128;
    uStack_d0 = uStack_120;
    uStack_c8 = uStack_118;
    uStack_c0 = uStack_110;
    uStack_b8 = uStack_108;
    FUN_1031e8a40(&uStack_150,&uStack_200);
    puVar8 = &uStack_100;
    puVar7 = &uStack_1b0;
    FUN_1031e9938(puVar8,puVar7,puVar2);
    func_0x0001031e8a7c(&uStack_b0);
    func_0x000107c61574(puVar2);
    if (puVar8 == (undefined8 *)0x0) goto LAB_1031e7d94;
    puVar2 = PTR_PTR_1126b10c8;
    func_0x000107c61168();
    func_0x000107c61174(puVar8);
    func_0x000107c4223c();
    func_0x000107c5ab20();
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_10db9b010;
    func_0x000107c614e0(&UNK_10db9b010);
LAB_1031e7db4:
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    uStack_1c8 = uStack_78;
    uStack_1d0 = uStack_80;
    uStack_1b8 = uStack_68;
    uStack_1c0 = uStack_70;
    lStack_1f8 = lStack_a8;
    uStack_200 = uStack_b0;
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    lStack_148 = lStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    FUN_1031e8a40(&uStack_200,&uStack_250);
    puVar8 = &uStack_150;
    FUN_1031e9818(puVar8,&uStack_1b0,puVar2);
    func_0x0001031e8a7c(&uStack_b0);
    func_0x000107c61574(puVar2);
    if (((uint)puVar8 & 0xff) == 2) {
      puVar8 = (undefined8 *)0x0;
    }
  }
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x20) = puVar6;
  *(undefined8 **)(lVar3 + 0x28) = puVar7;
  func_0x000107c61434(puVar7);
  lVar4 = lVar3;
  if (((ulong)puVar8 & 1) != 0) {
    lVar4 = 1;
    func_0x0001000d182c(1,2,1,lVar3);
    *(undefined8 *)(lVar4 + 0x10) = 2;
    *(undefined8 *)(lVar4 + 0x30) = 0x65757274;
    *(undefined8 *)(lVar4 + 0x38) = 0xe400000000000000;
  }
  puVar2 = &UNK_10db9b038;
  func_0x000107c614e0(&UNK_10db9b038);
  if (lStack_a8 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_218 = uStack_78;
    uStack_220 = uStack_80;
    uStack_208 = uStack_68;
    uStack_210 = uStack_70;
    uStack_238 = uStack_98;
    uStack_240 = uStack_a0;
    uStack_228 = uStack_88;
    uStack_230 = uStack_90;
    lStack_248 = lStack_a8;
    uStack_250 = uStack_b0;
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    uStack_1c8 = uStack_78;
    uStack_1d0 = uStack_80;
    uStack_1b8 = uStack_68;
    uStack_1c0 = uStack_70;
    lStack_1f8 = lStack_a8;
    uStack_200 = uStack_b0;
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    FUN_1031e8a40(&uStack_250,auStack_2a0);
    puVar5 = &uStack_200;
    FUN_1031e9818(puVar5,&uStack_1b0,puVar2);
    bVar1 = (byte)puVar5;
    func_0x0001031e8a7c(&uStack_b0);
    func_0x000107c61574(puVar2);
    if (((uint)puVar5 & 0xff) != 2) goto LAB_1031e7f24;
  }
  bVar1 = 0;
LAB_1031e7f24:
  *param_1 = puVar6;
  param_1[1] = puVar7;
  param_1[2] = (ulong)puVar8 & 1;
  param_1[3] = lVar4;
  *(byte *)(param_1 + 4) = bVar1 & 1;
  return;
}



/* Entry: 1031e7f58; end: 1031e7f5f;  */

void FUN_1031e7f58(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2a0 [80];
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
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
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_188 = param_2[5];
  uStack_190 = param_2[4];
  uStack_178 = param_2[7];
  uStack_180 = param_2[6];
  uStack_168 = param_2[9];
  uStack_170 = param_2[8];
  uStack_160 = param_2[10];
  uStack_1a8 = param_2[1];
  uStack_1b0 = *param_2;
  uStack_198 = param_2[3];
  uStack_1a0 = param_2[2];
  puVar2 = &UNK_10db9aff0;
  func_0x000107c614e0(&UNK_10db9aff0,*(undefined1 *)(unaff_x20 + 0x10));
  lStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
LAB_1031e7d94:
    puVar2 = &UNK_10db9b010;
    func_0x000107c614e0(&UNK_10db9b010);
    if (lStack_a8 != 0) {
      puVar6 = (undefined *)0x0;
      puVar7 = (undefined8 *)0xe000000000000000;
      goto LAB_1031e7db4;
    }
    func_0x000107c61574(puVar2);
    puVar8 = (undefined8 *)0x0;
    puVar6 = (undefined *)0x0;
    puVar7 = (undefined8 *)0xe000000000000000;
  }
  else {
    uStack_128 = param_2[5];
    uStack_130 = param_2[4];
    uStack_118 = param_2[7];
    uStack_120 = param_2[6];
    uStack_108 = param_2[9];
    uStack_110 = param_2[8];
    lStack_148 = param_2[1];
    uStack_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    uStack_100 = uStack_150;
    lStack_f8 = lStack_148;
    uStack_f0 = uStack_140;
    uStack_e8 = uStack_138;
    uStack_e0 = uStack_130;
    uStack_d8 = uStack_128;
    uStack_d0 = uStack_120;
    uStack_c8 = uStack_118;
    uStack_c0 = uStack_110;
    uStack_b8 = uStack_108;
    FUN_1031e8a40(&uStack_150,&uStack_200);
    puVar8 = &uStack_100;
    puVar7 = &uStack_1b0;
    FUN_1031e9938(puVar8,puVar7,puVar2);
    func_0x0001031e8a7c(&uStack_b0);
    func_0x000107c61574(puVar2);
    if (puVar8 == (undefined8 *)0x0) goto LAB_1031e7d94;
    puVar2 = PTR_PTR_1126b10c8;
    func_0x000107c61168();
    func_0x000107c61174(puVar8);
    func_0x000107c4223c();
    func_0x000107c5ab20();
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_10db9b010;
    func_0x000107c614e0(&UNK_10db9b010);
LAB_1031e7db4:
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    uStack_1c8 = uStack_78;
    uStack_1d0 = uStack_80;
    uStack_1b8 = uStack_68;
    uStack_1c0 = uStack_70;
    lStack_1f8 = lStack_a8;
    uStack_200 = uStack_b0;
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    lStack_148 = lStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    FUN_1031e8a40(&uStack_200,&uStack_250);
    puVar8 = &uStack_150;
    FUN_1031e9818(puVar8,&uStack_1b0,puVar2);
    func_0x0001031e8a7c(&uStack_b0);
    func_0x000107c61574(puVar2);
    if (((uint)puVar8 & 0xff) == 2) {
      puVar8 = (undefined8 *)0x0;
    }
  }
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x20) = puVar6;
  *(undefined8 **)(lVar3 + 0x28) = puVar7;
  func_0x000107c61434(puVar7);
  lVar4 = lVar3;
  if (((ulong)puVar8 & 1) != 0) {
    lVar4 = 1;
    func_0x0001000d182c(1,2,1,lVar3);
    *(undefined8 *)(lVar4 + 0x10) = 2;
    *(undefined8 *)(lVar4 + 0x30) = 0x65757274;
    *(undefined8 *)(lVar4 + 0x38) = 0xe400000000000000;
  }
  puVar2 = &UNK_10db9b038;
  func_0x000107c614e0(&UNK_10db9b038);
  if (lStack_a8 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_218 = uStack_78;
    uStack_220 = uStack_80;
    uStack_208 = uStack_68;
    uStack_210 = uStack_70;
    uStack_238 = uStack_98;
    uStack_240 = uStack_a0;
    uStack_228 = uStack_88;
    uStack_230 = uStack_90;
    lStack_248 = lStack_a8;
    uStack_250 = uStack_b0;
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    uStack_1c8 = uStack_78;
    uStack_1d0 = uStack_80;
    uStack_1b8 = uStack_68;
    uStack_1c0 = uStack_70;
    lStack_1f8 = lStack_a8;
    uStack_200 = uStack_b0;
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    FUN_1031e8a40(&uStack_250,auStack_2a0);
    puVar5 = &uStack_200;
    FUN_1031e9818(puVar5,&uStack_1b0,puVar2);
    bVar1 = (byte)puVar5;
    func_0x0001031e8a7c(&uStack_b0);
    func_0x000107c61574(puVar2);
    if (((uint)puVar5 & 0xff) != 2) goto LAB_1031e7f24;
  }
  bVar1 = 0;
LAB_1031e7f24:
  *param_1 = puVar6;
  param_1[1] = puVar7;
  param_1[2] = (ulong)puVar8 & 1;
  param_1[3] = lVar4;
  *(byte *)(param_1 + 4) = bVar1 & 1;
  return;
}



/* Entry: 1031e7f60; end: 1031e7fcf;  */

void FUN_1031e7f60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4b760 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b758;
  func_0x00010002969c(0x112f4b758,&UNK_10db9af00);
  uVar2 = uVar1;
  FUN_1031e7fd0();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f4b760 = puVar3;
  return;
}



/* Entry: 1031e7fd0; end: 1031e800f;  */

void FUN_1031e7fd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9afb8;
  func_0x000107c61520(&UNK_10db9afb8,&UNK_1106211e0);
  puRam0000000112f4b768 = puVar1;
  return;
}



/* Entry: 1031e8010; end: 1031e81c7;  */

void FUN_1031e8010(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_2b0 [296];
  undefined8 auStack_188 [37];
  
  lVar4 = lRam0000000112f4b8f0;
  lVar11 = param_1[3];
  if (lVar11 == 0) {
    func_0x0001000285a8(0x112f4b7d0,&UNK_10db9afe0);
    FUN_1031e89ec(auStack_188);
    func_0x000107c610b4(auStack_2b0,auStack_188,0x128);
    func_0x000100854cb0(auStack_2b0);
  }
  else {
    uVar10 = *param_1;
    uVar1 = param_1[1];
    bVar2 = *(byte *)(param_1 + 4);
    bVar3 = *(byte *)(param_1 + 2);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(lVar11);
    if (lVar4 != -1) {
      func_0x000107c61568(0x112f4b8f0,0x1031e9d94);
    }
    uVar5 = uRam00000001138070f8;
    puVar6 = (undefined8 *)0x112d755d0;
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    if ((param_2 & 1) == 0) {
      auStack_188[0] = 0;
      pcVar8 = (code *)auStack_188;
      func_0x000100854cb0(pcVar8);
    }
    else {
      FUN_10326da44();
      uVar7 = *puVar6;
      func_0x000107c61174(uVar7);
      pcVar8 = FUN_1031e9b64;
      FUN_10326d7dc(FUN_1031e9b64,0,uVar7);
      func_0x000107c61170(uVar7);
    }
    puVar9 = &UNK_110621260;
    func_0x000107c613fc(&UNK_110621260,0x40,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar10;
    *(undefined8 *)(puVar9 + 0x18) = uVar1;
    puVar9[0x20] = bVar3 & 1;
    *(long *)(puVar9 + 0x28) = lVar11;
    puVar9[0x30] = bVar2 & 1;
    *(undefined8 *)(puVar9 + 0x38) = uVar5;
    func_0x000107c61174(uVar5);
    uVar10 = 0x112f4b770;
    func_0x0001000285a8(0x112f4b770,&UNK_10db9af08);
    func_0x0001000bfde0(0x1031e8a1c,puVar9,uVar10);
    func_0x000107c61574(pcVar8);
    func_0x000107c61574(puVar9);
  }
  return;
}



/* Entry: 1031e81c8; end: 1031e81cf;  */

void FUN_1031e81c8(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined1 auStack_2b0 [296];
  undefined8 auStack_188 [37];
  
  lVar5 = lRam0000000112f4b8f0;
  bVar4 = *(byte *)(unaff_x20 + 0x10);
  lVar12 = param_1[3];
  if (lVar12 == 0) {
    func_0x0001000285a8(0x112f4b7d0,&UNK_10db9afe0);
    FUN_1031e89ec(auStack_188);
    func_0x000107c610b4(auStack_2b0,auStack_188,0x128);
    func_0x000100854cb0(auStack_2b0);
  }
  else {
    uVar11 = *param_1;
    uVar1 = param_1[1];
    bVar2 = *(byte *)(param_1 + 4);
    bVar3 = *(byte *)(param_1 + 2);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(lVar12);
    if (lVar5 != -1) {
      func_0x000107c61568(0x112f4b8f0,0x1031e9d94);
    }
    uVar6 = uRam00000001138070f8;
    puVar7 = (undefined8 *)0x112d755d0;
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    if ((bVar4 & 1) == 0) {
      auStack_188[0] = 0;
      pcVar9 = (code *)auStack_188;
      func_0x000100854cb0(pcVar9);
    }
    else {
      FUN_10326da44();
      uVar8 = *puVar7;
      func_0x000107c61174(uVar8);
      pcVar9 = FUN_1031e9b64;
      FUN_10326d7dc(FUN_1031e9b64,0,uVar8);
      func_0x000107c61170(uVar8);
    }
    puVar10 = &UNK_110621260;
    func_0x000107c613fc(&UNK_110621260,0x40,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar11;
    *(undefined8 *)(puVar10 + 0x18) = uVar1;
    puVar10[0x20] = bVar3 & 1;
    *(long *)(puVar10 + 0x28) = lVar12;
    puVar10[0x30] = bVar2 & 1;
    *(undefined8 *)(puVar10 + 0x38) = uVar6;
    func_0x000107c61174(uVar6);
    uVar11 = 0x112f4b770;
    func_0x0001000285a8(0x112f4b770,&UNK_10db9af08);
    func_0x0001000bfde0(0x1031e8a1c,puVar10,uVar11);
    func_0x000107c61574(pcVar9);
    func_0x000107c61574(puVar10);
  }
  return;
}



/* Entry: 1031e81d0; end: 1031e837f;  */

void FUN_1031e81d0(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_25f;
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
  undefined8 uStack_1af;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  long lStack_168;
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
  undefined8 uStack_bf;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar5 = *param_2;
  lVar3 = param_3;
  FUN_1031e9bb8();
  lVar4 = *(long *)(param_3 + 0x18);
  if (*(long *)(lVar4 + 0x10) == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c61434(lVar4);
  }
  uVar1 = 2;
  if (*(char *)(param_3 + 0x20) != '\0') {
    uVar1 = 3;
  }
  uStack_300 = param_4;
  uStack_2f8 = uVar5;
  func_0x0001031e8a28(&uStack_300);
  uStack_1c8 = uStack_278;
  uStack_1d0 = uStack_280;
  uStack_1c0 = uStack_270;
  uStack_1af = uStack_25f;
  uStack_208 = uStack_2b8;
  uStack_210 = uStack_2c0;
  uStack_1f8 = uStack_2a8;
  uStack_200 = uStack_2b0;
  uStack_1e8 = uStack_298;
  uStack_1f0 = uStack_2a0;
  uStack_1d8 = uStack_288;
  uStack_1e0 = uStack_290;
  uStack_248 = uStack_2f8;
  uStack_250 = uStack_300;
  uStack_238 = uStack_2e8;
  uStack_240 = uStack_2f0;
  uStack_228 = uStack_2d8;
  uStack_230 = uStack_2e0;
  uStack_218 = uStack_2c8;
  uStack_220 = uStack_2d0;
  func_0x0001031e6100(&uStack_250);
  uStack_e8 = uStack_1d8;
  uStack_f0 = uStack_1e0;
  uStack_d8 = uStack_1c8;
  uStack_e0 = uStack_1d0;
  uStack_d0 = uStack_1c0;
  uStack_bf = uStack_1af;
  uStack_128 = uStack_218;
  uStack_130 = uStack_220;
  uStack_118 = uStack_208;
  uStack_120 = uStack_210;
  uStack_108 = uStack_1f8;
  uStack_110 = uStack_200;
  uStack_f8 = uStack_1e8;
  uStack_100 = uStack_1f0;
  uStack_158 = uStack_248;
  uStack_160 = uStack_250;
  uStack_148 = uStack_238;
  uStack_150 = uStack_240;
  uStack_138 = uStack_228;
  uStack_140 = uStack_230;
  puVar2 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(param_4);
  func_0x000107c3fe20();
  func_0x000107c61180();
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0x746e656d6d6f63;
  uStack_180 = 0xe700000000000000;
  uStack_b0 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0x300;
  uStack_80 = 0;
  uStack_78 = 1;
  puStack_178 = param_2;
  lStack_170 = lVar3;
  lStack_168 = lVar4;
  uStack_a8 = uVar1;
  puStack_a0 = puVar2;
  func_0x0001031e8a3c(&uStack_198);
  func_0x000107c610b4(param_1,&uStack_198,0x128);
  return;
}



/* Entry: 1031e8380; end: 1031e84c3;  */

undefined8 FUN_1031e8380(undefined8 param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *unaff_x20;
  
  uVar1 = *unaff_x20;
  pcVar2 = FUN_1031e7ac8;
  func_0x0001000c0ebc(param_1,FUN_1031e7ac8,0);
  puVar3 = &UNK_110621210;
  func_0x000107c613fc(&UNK_110621210,0x11,7);
  puVar3[0x10] = uVar1;
  uVar4 = 0x112f4b758;
  func_0x0001000285a8(0x112f4b758,&UNK_10db9af00);
  pcVar5 = FUN_1031e8ac4;
  func_0x0001000bfde0(FUN_1031e8ac4,puVar3,uVar4);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(puVar3);
  FUN_1031e7f60();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  puVar6 = &UNK_110621238;
  func_0x000107c613fc(&UNK_110621238,0x11,7);
  puVar6[0x10] = uVar1;
  uVar4 = 0x112f4b770;
  func_0x0001000285a8(0x112f4b770,&UNK_10db9af08);
  uVar7 = 0x1031e8ac8;
  func_0x00010068b194(0x1031e8ac8,puVar6,uVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar6);
  return uVar7;
}



/* Entry: 1031e84c4; end: 1031e84e7;  */

void FUN_1031e84c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031e84e8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031e84e8; end: 1031e8527;  */

void FUN_1031e84e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9af38;
  func_0x000107c61520(&DAT_10db9af38,&UNK_110621160);
  puRam0000000112f4b778 = puVar1;
  return;
}



/* Entry: 1031e8528; end: 1031e852b;  */

void FUN_1031e8528(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b780 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b788;
  func_0x00010002969c(0x112f4b788,&UNK_10db9af30);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b780 = puVar2;
  return;
}



/* Entry: 1031e852c; end: 1031e857b;  */

void FUN_1031e852c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b780 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b788;
  func_0x00010002969c(0x112f4b788,&UNK_10db9af30);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b780 = puVar2;
  return;
}



/* Entry: 1031e857c; end: 1031e86f3;  */

undefined ** FUN_1031e857c(void)

{
  return &PTR_DAT_110621298;
}



/* Entry: 1031e86f4; end: 1031e8793;  */

long FUN_1031e86f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031e8794; end: 1031e8807;  */

undefined8 * FUN_1031e8794(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1031e8808; end: 1031e885b;  */

undefined8 * FUN_1031e8808(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1031e885c; end: 1031e88f7;  */

int FUN_1031e885c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031e88f8; end: 1031e89eb;  */

byte FUN_1031e88f8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar2 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar2 == 0) goto LAB_1031e894c;
  }
  else if ((uVar2 != 0) &&
          ((uVar1 = *param_1, uVar1 == *param_2 && param_1[1] == uVar2 ||
           (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
LAB_1031e894c:
    if ((((byte)param_1[2] ^ (byte)param_2[2]) & 1) == 0) {
      uVar2 = param_1[3];
      uVar1 = param_2[3];
      lVar4 = *(long *)(uVar2 + 0x10);
      if (lVar4 == *(long *)(uVar1 + 0x10)) {
        if (lVar4 != 0 && uVar2 != uVar1) {
          plVar5 = (long *)(uVar1 + 0x28);
          plVar6 = (long *)(uVar2 + 0x28);
          do {
            uVar2 = plVar6[-1];
            if ((uVar2 != plVar5[-1] || *plVar6 != *plVar5) &&
               (func_0x000107c605b8(), (uVar2 & 1) == 0)) goto LAB_1031e89d0;
            plVar5 = plVar5 + 2;
            plVar6 = plVar6 + 2;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        bVar3 = (byte)param_1[4] ^ (byte)param_2[4] ^ 1;
        goto LAB_1031e89d4;
      }
    }
  }
LAB_1031e89d0:
  bVar3 = 0;
LAB_1031e89d4:
  return bVar3 & 1;
}



/* Entry: 1031e89ec; end: 1031e8a3f;  */

void FUN_1031e89ec(undefined8 *param_1)

{
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1031e8a40; end: 1031e8ac3;  */

undefined8 FUN_1031e8a40(undefined8 param_1,undefined8 param_2)

{
  FUN_1031e8dc4(param_2,param_1);
  return param_2;
}



/* Entry: 1031e8ac4; end: 1031e8acb;  */

void FUN_1031e8ac4(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2a0 [80];
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
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
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_188 = param_2[5];
  uStack_190 = param_2[4];
  uStack_178 = param_2[7];
  uStack_180 = param_2[6];
  uStack_168 = param_2[9];
  uStack_170 = param_2[8];
  uStack_160 = param_2[10];
  uStack_1a8 = param_2[1];
  uStack_1b0 = *param_2;
  uStack_198 = param_2[3];
  uStack_1a0 = param_2[2];
  puVar2 = &UNK_10db9aff0;
  func_0x000107c614e0(&UNK_10db9aff0,*(undefined1 *)(unaff_x20 + 0x10));
  lStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
LAB_1031e7d94:
    puVar2 = &UNK_10db9b010;
    func_0x000107c614e0(&UNK_10db9b010);
    if (lStack_a8 != 0) {
      puVar6 = (undefined *)0x0;
      puVar7 = (undefined8 *)0xe000000000000000;
      goto LAB_1031e7db4;
    }
    func_0x000107c61574(puVar2);
    puVar8 = (undefined8 *)0x0;
    puVar6 = (undefined *)0x0;
    puVar7 = (undefined8 *)0xe000000000000000;
  }
  else {
    uStack_128 = param_2[5];
    uStack_130 = param_2[4];
    uStack_118 = param_2[7];
    uStack_120 = param_2[6];
    uStack_108 = param_2[9];
    uStack_110 = param_2[8];
    lStack_148 = param_2[1];
    uStack_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    uStack_100 = uStack_150;
    lStack_f8 = lStack_148;
    uStack_f0 = uStack_140;
    uStack_e8 = uStack_138;
    uStack_e0 = uStack_130;
    uStack_d8 = uStack_128;
    uStack_d0 = uStack_120;
    uStack_c8 = uStack_118;
    uStack_c0 = uStack_110;
    uStack_b8 = uStack_108;
    FUN_1031e8a40(&uStack_150,&uStack_200);
    puVar8 = &uStack_100;
    puVar7 = &uStack_1b0;
    FUN_1031e9938(puVar8,puVar7,puVar2);
    func_0x0001031e8a7c(&uStack_b0);
    func_0x000107c61574(puVar2);
    if (puVar8 == (undefined8 *)0x0) goto LAB_1031e7d94;
    puVar2 = PTR_PTR_1126b10c8;
    func_0x000107c61168();
    func_0x000107c61174(puVar8);
    func_0x000107c4223c();
    func_0x000107c5ab20();
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_10db9b010;
    func_0x000107c614e0(&UNK_10db9b010);
LAB_1031e7db4:
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    uStack_1c8 = uStack_78;
    uStack_1d0 = uStack_80;
    uStack_1b8 = uStack_68;
    uStack_1c0 = uStack_70;
    lStack_1f8 = lStack_a8;
    uStack_200 = uStack_b0;
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    lStack_148 = lStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    FUN_1031e8a40(&uStack_200,&uStack_250);
    puVar8 = &uStack_150;
    FUN_1031e9818(puVar8,&uStack_1b0,puVar2);
    func_0x0001031e8a7c(&uStack_b0);
    func_0x000107c61574(puVar2);
    if (((uint)puVar8 & 0xff) == 2) {
      puVar8 = (undefined8 *)0x0;
    }
  }
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x20) = puVar6;
  *(undefined8 **)(lVar3 + 0x28) = puVar7;
  func_0x000107c61434(puVar7);
  lVar4 = lVar3;
  if (((ulong)puVar8 & 1) != 0) {
    lVar4 = 1;
    func_0x0001000d182c(1,2,1,lVar3);
    *(undefined8 *)(lVar4 + 0x10) = 2;
    *(undefined8 *)(lVar4 + 0x30) = 0x65757274;
    *(undefined8 *)(lVar4 + 0x38) = 0xe400000000000000;
  }
  puVar2 = &UNK_10db9b038;
  func_0x000107c614e0(&UNK_10db9b038);
  if (lStack_a8 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_218 = uStack_78;
    uStack_220 = uStack_80;
    uStack_208 = uStack_68;
    uStack_210 = uStack_70;
    uStack_238 = uStack_98;
    uStack_240 = uStack_a0;
    uStack_228 = uStack_88;
    uStack_230 = uStack_90;
    lStack_248 = lStack_a8;
    uStack_250 = uStack_b0;
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    uStack_1c8 = uStack_78;
    uStack_1d0 = uStack_80;
    uStack_1b8 = uStack_68;
    uStack_1c0 = uStack_70;
    lStack_1f8 = lStack_a8;
    uStack_200 = uStack_b0;
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    FUN_1031e8a40(&uStack_250,auStack_2a0);
    puVar5 = &uStack_200;
    FUN_1031e9818(puVar5,&uStack_1b0,puVar2);
    bVar1 = (byte)puVar5;
    func_0x0001031e8a7c(&uStack_b0);
    func_0x000107c61574(puVar2);
    if (((uint)puVar5 & 0xff) != 2) goto LAB_1031e7f24;
  }
  bVar1 = 0;
LAB_1031e7f24:
  *param_1 = puVar6;
  param_1[1] = puVar7;
  param_1[2] = (ulong)puVar8 & 1;
  param_1[3] = lVar4;
  *(byte *)(param_1 + 4) = bVar1 & 1;
  return;
}



/* Entry: 1031e8acc; end: 1031e8c27;  */

long FUN_1031e8acc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 10;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar3 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x50) = uStack_68;
  *(undefined8 *)(lVar1 + 0x48) = uStack_70;
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uVar3 = 0x112f4b7e0;
  func_0x0001000285a8(0x112f4b7e0,&UNK_10db9b0a0);
  uVar4 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar4;
  *(undefined8 *)(lVar1 + 0x88) = uVar3;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_88;
  *(undefined8 *)(lVar1 + 0x98) = uStack_90;
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 200) = uStack_98;
  *(undefined8 *)(lVar1 + 0xc0) = uStack_a0;
  FUN_1031e8d10(&uStack_60,auStack_b0,0x112f4b520,&UNK_10db9b280);
  FUN_1031e8d10(&uStack_70,auStack_b0,0x112f4b520,&UNK_10db9b280);
  FUN_1031e8d10(&uStack_80,auStack_b0,0x112f4b7e0,&UNK_10db9b0a0);
  FUN_1031e8d10(&uStack_90,auStack_b0,0x112f4b520,&UNK_10db9b280);
  FUN_1031e8d10(&uStack_a0,auStack_b0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 1031e8c28; end: 1031e8c6b;  */

void FUN_1031e8c28(undefined8 *param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1031e8c70(&uStack_70);
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[9] = uStack_28;
  param_1[8] = uStack_30;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* Entry: 1031e8c6c; end: 1031e8c6f;  */

long FUN_1031e8c6c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 10;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar3 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x50) = uStack_68;
  *(undefined8 *)(lVar1 + 0x48) = uStack_70;
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uVar3 = 0x112f4b7e0;
  func_0x0001000285a8(0x112f4b7e0,&UNK_10db9b0a0);
  uVar4 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar4;
  *(undefined8 *)(lVar1 + 0x88) = uVar3;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_88;
  *(undefined8 *)(lVar1 + 0x98) = uStack_90;
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 200) = uStack_98;
  *(undefined8 *)(lVar1 + 0xc0) = uStack_a0;
  FUN_1031e8d10(&uStack_60,auStack_b0,0x112f4b520,&UNK_10db9b280);
  FUN_1031e8d10(&uStack_70,auStack_b0,0x112f4b520,&UNK_10db9b280);
  FUN_1031e8d10(&uStack_80,auStack_b0,0x112f4b7e0,&UNK_10db9b0a0);
  FUN_1031e8d10(&uStack_90,auStack_b0,0x112f4b520,&UNK_10db9b280);
  FUN_1031e8d10(&uStack_a0,auStack_b0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 1031e8c70; end: 1031e8d0f;  */

/* WARNING: Possible PIC construction at 0x0001031e8cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e8cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031e8cd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e8cc8) */
/* WARNING: Removing unreachable block (ram,0x0001031e8cb8) */
/* WARNING: Removing unreachable block (ram,0x0001031e8cd8) */

void FUN_1031e8c70(long param_1)

{
  undefined8 uVar1;
  
  func_0x000103b93b60();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0ead8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1031e8d10; end: 1031e8dc3;  */

undefined8 FUN_1031e8d10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1031e8dc4; end: 1031e8e3f;  */

undefined8 * FUN_1031e8dc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1031e8e40; end: 1031e8f0b;  */

undefined8 * FUN_1031e8e40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1031e8f0c; end: 1031e8f7f;  */

undefined8 * FUN_1031e8f0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1031e8f80; end: 1031e902b;  */

int FUN_1031e8f80(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031e902c; end: 1031e91c3;  */

code * FUN_1031e902c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined *apuStack_50 [2];
  
  pcVar6 = (code *)apuStack_50;
  puVar1 = &UNK_10db9b0e0;
  func_0x000107c614e0();
  puVar2 = &UNK_10db9b100;
  apuStack_50[0] = puVar1;
  func_0x000107c614e0(&UNK_10db9b100,apuStack_50);
  uVar5 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  pcVar3 = FUN_1031e9344;
  func_0x0001000bfde0(FUN_1031e9344,puVar2,uVar5);
  func_0x000107c61574(puVar2);
  func_0x000102840b18();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar3);
  puVar4 = (undefined8 *)0x112d755d0;
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  FUN_10326da44();
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  pcVar3 = FUN_1031e934c;
  FUN_10326d7dc(FUN_1031e934c,0,uVar5);
  func_0x000107c61170(uVar5);
  if ((param_2 & 1) == 0) {
    apuStack_50[0] = (undefined *)0x0;
    func_0x000100854cb0(apuStack_50);
  }
  else {
    uVar5 = *puVar4;
    func_0x000107c61174(uVar5);
    pcVar6 = FUN_1031e9b64;
    FUN_10326d7dc(FUN_1031e9b64,0,uVar5);
    func_0x000107c61170(uVar5);
  }
  pcVar7 = pcVar3;
  func_0x00010061da28(pcVar3,pcVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar6);
  uVar5 = 0x112f4b7e8;
  func_0x0001000285a8(0x112f4b7e8,&UNK_10db9b150);
  pcVar3 = FUN_1031e9534;
  func_0x0001000bfde0(FUN_1031e9534,0,uVar5);
  func_0x000107c61574(pcVar7);
  return pcVar3;
}



/* Entry: 1031e91c4; end: 1031e9297;  */

void FUN_1031e91c4(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1d0 [80];
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
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_90 = param_2[10];
  lStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uVar3 = *param_3;
  if (lStack_d8 == 0) {
    uVar2 = 2;
  }
  else {
    uStack_158 = param_2[5];
    uStack_160 = param_2[4];
    uStack_148 = param_2[7];
    uStack_150 = param_2[6];
    uStack_138 = param_2[9];
    uStack_140 = param_2[8];
    uStack_178 = param_2[1];
    uStack_180 = *param_2;
    uStack_168 = param_2[3];
    uStack_170 = param_2[2];
    uStack_130 = uStack_180;
    uStack_128 = uStack_178;
    uStack_120 = uStack_170;
    uStack_118 = uStack_168;
    uStack_110 = uStack_160;
    uStack_108 = uStack_158;
    uStack_100 = uStack_150;
    uStack_f8 = uStack_148;
    uStack_f0 = uStack_140;
    uStack_e8 = uStack_138;
    uStack_80 = uStack_e0;
    lStack_78 = lStack_d8;
    uStack_70 = uStack_d0;
    uStack_68 = uStack_c8;
    uStack_60 = uStack_c0;
    uStack_58 = uStack_b8;
    uStack_50 = uStack_b0;
    uStack_48 = uStack_a8;
    uStack_40 = uStack_a0;
    uStack_38 = uStack_98;
    FUN_1031e8a40(&uStack_180,auStack_1d0);
    puVar1 = &uStack_130;
    FUN_1031e9818(puVar1,&uStack_e0,uVar3);
    uVar2 = SUB81(puVar1,0);
    func_0x0001031e9ab0(&uStack_80,0x112f4b7d8,&UNK_10db9b058);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1031e9298; end: 1031e9343;  */

void FUN_1031e9298(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_178 [104];
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_40 = param_2[0xc];
  uStack_b0 = param_2[0xc];
  FUN_1031e9a60(&uStack_a0,auStack_178);
  func_0x000107c614bc(param_1,&uStack_110,param_3);
  func_0x0001031e9ab0(&uStack_110,0x112f4b848,&UNK_10db9b1c8);
  return;
}



/* Entry: 1031e9344; end: 1031e934b;  */

void FUN_1031e9344(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_178 [104];
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_40 = param_2[0xc];
  uStack_b0 = param_2[0xc];
  FUN_1031e9a60(&uStack_a0,auStack_178);
  func_0x000107c614bc(param_1,&uStack_110);
  func_0x0001031e9ab0(&uStack_110,0x112f4b848,&UNK_10db9b1c8);
  return;
}



/* Entry: 1031e934c; end: 1031e939f;  */

undefined8 FUN_1031e934c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000112f4b8f0 != -1) {
    func_0x000107c61568(0x112f4b8f0,0x1031e9d94);
  }
  uVar1 = uRam00000001138070f8;
  func_0x000107c61174(uRam00000001138070f8);
  return uVar1;
}



/* Entry: 1031e93a0; end: 1031e9533;  */

void FUN_1031e93a0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_35f;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2af;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
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
  undefined8 uStack_1c7;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined2 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [296];
  
  if ((param_2 & 1) == 0) {
    func_0x0001031e97e8(auStack_178);
  }
  else {
    uVar2 = param_3;
    FUN_1031e9bb8();
    uStack_400 = param_3;
    uStack_3f8 = param_4;
    func_0x0001031e8a28(&uStack_400);
    uStack_2c8 = uStack_378;
    uStack_2d0 = uStack_380;
    uStack_2c0 = uStack_370;
    uStack_2af = uStack_35f;
    uStack_308 = uStack_3b8;
    uStack_310 = uStack_3c0;
    uStack_2f8 = uStack_3a8;
    uStack_300 = uStack_3b0;
    uStack_2e8 = uStack_398;
    uStack_2f0 = uStack_3a0;
    uStack_2d8 = uStack_388;
    uStack_2e0 = uStack_390;
    uStack_348 = uStack_3f8;
    uStack_350 = uStack_400;
    uStack_338 = uStack_3e8;
    uStack_340 = uStack_3f0;
    uStack_328 = uStack_3d8;
    uStack_330 = uStack_3e0;
    uStack_318 = uStack_3c8;
    uStack_320 = uStack_3d0;
    func_0x0001031e6100(&uStack_350);
    uStack_1f0 = uStack_2d8;
    uStack_1f8 = uStack_2e0;
    uStack_1e0 = uStack_2c8;
    uStack_1e8 = uStack_2d0;
    uStack_1d8 = uStack_2c0;
    uStack_1c7 = uStack_2af;
    uStack_230 = uStack_318;
    uStack_238 = uStack_320;
    uStack_220 = uStack_308;
    uStack_228 = uStack_310;
    uStack_210 = uStack_2f8;
    uStack_218 = uStack_300;
    uStack_200 = uStack_2e8;
    uStack_208 = uStack_2f0;
    uStack_260 = uStack_348;
    uStack_268 = uStack_350;
    uStack_250 = uStack_338;
    uStack_258 = uStack_340;
    uStack_240 = uStack_328;
    uStack_248 = uStack_330;
    puVar1 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_3);
    func_0x000107c3fe20();
    func_0x000107c61180();
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0x74616863;
    uStack_288 = 0xe400000000000000;
    uStack_1b0 = 2;
    uStack_1b8 = 0;
    uStack_270 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_190 = 0x300;
    uStack_188 = 0;
    uStack_180 = 1;
    uStack_280 = param_2;
    uStack_278 = uVar2;
    puStack_1a8 = puVar1;
    FUN_1031e9a5c(&uStack_2a0);
    func_0x000107c610b4(auStack_178,&uStack_2a0,0x128);
  }
  func_0x000107c610b4(param_1,auStack_178,0x128);
  return;
}



/* Entry: 1031e9534; end: 1031e9577;  */

void FUN_1031e9534(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_148 [296];
  
  FUN_1031e93a0(auStack_148,*param_2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  func_0x000107c610b4(param_1,auStack_148,0x128);
  return;
}



/* Entry: 1031e9578; end: 1031e957f;  */

code * FUN_1031e9578(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  byte *unaff_x20;
  undefined *apuStack_50 [2];
  
  bVar1 = *unaff_x20;
  pcVar7 = (code *)apuStack_50;
  puVar2 = &UNK_10db9b0e0;
  func_0x000107c614e0();
  puVar3 = &UNK_10db9b100;
  apuStack_50[0] = puVar2;
  func_0x000107c614e0(&UNK_10db9b100,apuStack_50);
  uVar6 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  pcVar4 = FUN_1031e9344;
  func_0x0001000bfde0(FUN_1031e9344,puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000102840b18();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar4);
  puVar5 = (undefined8 *)0x112d755d0;
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  FUN_10326da44();
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  pcVar4 = FUN_1031e934c;
  FUN_10326d7dc(FUN_1031e934c,0,uVar6);
  func_0x000107c61170(uVar6);
  if ((bVar1 & 1) == 0) {
    apuStack_50[0] = (undefined *)0x0;
    func_0x000100854cb0(apuStack_50);
  }
  else {
    uVar6 = *puVar5;
    func_0x000107c61174(uVar6);
    pcVar7 = FUN_1031e9b64;
    FUN_10326d7dc(FUN_1031e9b64,0,uVar6);
    func_0x000107c61170(uVar6);
  }
  pcVar8 = pcVar4;
  func_0x00010061da28(pcVar4,pcVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar7);
  uVar6 = 0x112f4b7e8;
  func_0x0001000285a8(0x112f4b7e8,&UNK_10db9b150);
  pcVar4 = FUN_1031e9534;
  func_0x0001000bfde0(FUN_1031e9534,0,uVar6);
  func_0x000107c61574(pcVar8);
  return pcVar4;
}



/* Entry: 1031e9580; end: 1031e95b7;  */

undefined * FUN_1031e9580(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x0001031e7a40();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1031e95b8; end: 1031e95db;  */

void FUN_1031e95b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031e95dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031e95dc; end: 1031e961b;  */

void FUN_1031e95dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b7f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9b180;
  func_0x000107c61520(&DAT_10db9b180,&UNK_1106213e8);
  puRam0000000112f4b7f0 = puVar1;
  return;
}



/* Entry: 1031e961c; end: 1031e961f;  */

void FUN_1031e961c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b7f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b800;
  func_0x00010002969c(0x112f4b800,&UNK_10db9d9e0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b7f8 = puVar2;
  return;
}



/* Entry: 1031e9620; end: 1031e966f;  */

void FUN_1031e9620(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b7f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b800;
  func_0x00010002969c(0x112f4b800,&UNK_10db9d9e0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b7f8 = puVar2;
  return;
}



/* Entry: 1031e9670; end: 1031e9817;  */

undefined ** FUN_1031e9670(void)

{
  return &PTR_DAT_110621298;
}



/* Entry: 1031e9818; end: 1031e9937;  */

undefined1 FUN_1031e9818(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_d0;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  lVar4 = *(long *)(param_2 + 0x50);
  func_0x000107c614bc(&uStack_90,&uStack_80,param_3);
  uStack_b0 = uStack_90;
  uStack_a8 = uStack_88;
  func_0x000107c61434(uStack_88);
  puVar2 = &uStack_b0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_88);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(auStack_d0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_88);
    func_0x000100102924(auStack_d0,&uStack_b0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_d0,&uStack_b0,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_d0[0] = 2;
  }
  return auStack_d0[0];
}



/* Entry: 1031e9938; end: 1031e9a5b;  */

undefined8 FUN_1031e9938(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_d0 [4];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_d0;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  lVar5 = *(long *)(param_2 + 0x50);
  func_0x000107c614bc(&uStack_90,&uStack_80,param_3);
  uStack_b0 = uStack_90;
  uStack_a8 = uStack_88;
  func_0x000107c61434(uStack_88);
  puVar2 = &uStack_b0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_88);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(auStack_d0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_88);
    func_0x000100102924(auStack_d0,&uStack_b0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6147c(auStack_d0,&uStack_b0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_d0[0] = 0;
  }
  return auStack_d0[0];
}



/* Entry: 1031e9a5c; end: 1031e9a5f;  */

void FUN_1031e9a5c(void)

{
  return;
}



/* Entry: 1031e9a60; end: 1031e9aef;  */

undefined8 FUN_1031e9a60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f4b848;
  func_0x0001000285a8(0x112f4b848,&UNK_10db9b1c8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1031e9af0; end: 1031e9b63;  */

undefined4 FUN_1031e9af0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x000107c615f0();
    func_0x000108f4b46c();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x000108f5476c();
      uVar2 = param_1;
      func_0x000108060950(param_1);
      func_0x000107c615e8(param_1);
      uVar3 = (undefined4)uVar2;
      if (uVar1 != 0) {
        uVar3 = 1;
      }
    }
    else {
      func_0x000107c615e8(param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 1031e9b64; end: 1031e9bb7;  */

undefined8 FUN_1031e9b64(void)

{
  undefined8 uVar1;
  
  if (lRam0000000112f4b8f8 != -1) {
    func_0x000107c61568(0x112f4b8f8,FUN_1031e9cac);
  }
  uVar1 = uRam00000001138070f0;
  func_0x000107c61174(uRam00000001138070f0);
  return uVar1;
}



/* Entry: 1031e9bb8; end: 1031e9c7b;  */

undefined1  [16] FUN_1031e9bb8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x746e656d6d6f63;
  func_0x000107c5fadc(0x746e656d6d6f63,0xe700000000000000);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f130b40);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031e9c7c);
  (*pcVar1)();
}



/* Entry: 1031e9c7c; end: 1031e9c8b;  */

void FUN_1031e9c7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031e9c8c; end: 1031e9cab;  */

void FUN_1031e9c8c(void)

{
  func_0x000107c61168(&PTR_PTR_112f4b898);
  return;
}



/* Entry: 1031e9cac; end: 1031e9e7f;  */

void FUN_1031e9cac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1031e9c8c();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f130b70);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam00000001138070f0 = puVar3;
  return;
}



/* Entry: 1031e9e80; end: 1031e9f47;  */

void FUN_1031e9e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_1106214d0;
  func_0x000107c613fc(&UNK_1106214d0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1031e9f48,puVar1);
  return;
}



/* Entry: 1031e9f48; end: 1031ea1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031e9f48(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar4 = uStack_68;
  uVar3 = 0x112efa838;
  func_0x0001000285a8(0x112efa838,&UNK_10db2f7b0);
  func_0x000107c610f8();
  func_0x0001003b3b80(uVar4);
  puVar5 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  func_0x000100083b20(&uStack_68);
  uVar4 = uStack_68;
  uVar6 = uStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ea1c4);
    (*pcVar1)();
  }
  uVar4 = uVar6;
  func_0x0001031ea21c();
  func_0x000107c615e8(uVar6);
  if ((uVar4 & 1) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    func_0x000107c61170(puVar5);
  }
  else {
    func_0x000100083b20(&uStack_68);
    uVar4 = uStack_68;
    lVar7 = *(long *)(uStack_68 + _DAT_1130190c8);
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000100083b20(&uStack_68);
    uVar4 = uStack_68;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uStack_68);
    uVar6 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    func_0x000100083b20(&lStack_70);
    lVar7 = lStack_70;
    func_0x000107c5b4b0();
    func_0x000107c61180();
    func_0x000107c61170(lStack_70);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ea1c8);
      (*pcVar1)();
    }
    func_0x000100083b20(&lStack_78);
    lVar9 = lStack_78;
    func_0x000107c4456c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ea1cc);
      (*pcVar1)();
    }
    if (lVar8 == 0) {
      lVar11 = 0;
      uVar2 = 0;
    }
    else {
      lVar11 = lVar8;
      func_0x000107c4d174();
      uVar2 = (undefined1)lVar11;
      lVar11 = lVar8;
      func_0x000107c4d178();
      lStack_78 = lVar11;
    }
    param_1[3] = &UNK_110621670;
    func_0x0001031ea1dc();
    param_1[4] = lStack_78;
    puVar10 = &UNK_110621518;
    func_0x000107c613fc(&UNK_110621518,0x3a,7);
    *param_1 = puVar10;
    func_0x000107c615e8(lVar8);
    *(ulong *)(puVar10 + 0x28) = uVar6;
    *(undefined8 *)(puVar10 + 0x30) = uVar3;
    *(long *)(puVar10 + 0x10) = lVar7;
    *(long *)(puVar10 + 0x18) = lVar9;
    *(undefined **)(puVar10 + 0x20) = puVar5;
    puVar10[0x38] = uVar2;
    puVar10[0x39] = (char)lVar11;
  }
  return;
}



/* Entry: 1031ea1cc; end: 1031ea1db;  */

undefined1  [16] FUN_1031ea1cc(void)

{
  return ZEXT816(0x1106214f8);
}



/* Entry: 1031ea1dc; end: 1031ea27b;  */

void FUN_1031ea1dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9b2b0;
  func_0x000107c61520(&DAT_10db9b2b0,&UNK_110621670);
  puRam0000000112f4b900 = puVar1;
  return;
}



/* Entry: 1031ea27c; end: 1031ea2d7;  */

/* WARNING: Possible PIC construction at 0x0001031ea2ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ea2b0) */

void FUN_1031ea27c(long param_1)

{
  func_0x00010326c18c();
  func_0x000103b93ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1031ea2d8; end: 1031ea3bb;  */

long FUN_1031ea2d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  lVar7 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 6;
  *(undefined8 *)(lVar7 + 0x10) = 3;
  uVar8 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar7 + 0x38) = uVar8;
  *(undefined ***)(lVar7 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x20) = uVar1;
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
  uVar8 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar7 + 0x60) = uVar8;
  *(undefined ***)(lVar7 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x48) = uVar2;
  *(undefined8 *)(lVar7 + 0x50) = uVar5;
  uVar8 = 0x112f4b908;
  func_0x0001000285a8(0x112f4b908,&UNK_10db9b288);
  *(undefined8 *)(lVar7 + 0x88) = uVar8;
  *(undefined ***)(lVar7 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x70) = uVar3;
  *(undefined8 *)(lVar7 + 0x78) = uVar6;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  return lVar7;
}



/* Entry: 1031ea3bc; end: 1031ea493;  */

uint FUN_1031ea3bc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_50 = param_1[6];
  puVar4 = &UNK_10db9b418;
  func_0x000107c614e0(&UNK_10db9b418);
  uVar3 = uStack_58;
  uVar2 = uStack_68;
  lVar1 = lStack_78;
  if (lStack_78 == 0) {
    func_0x000107c61574();
    uVar6 = 0;
  }
  else {
    uStack_b0 = uStack_80;
    lStack_a8 = lStack_78;
    uStack_a0 = uStack_70;
    uStack_98 = uStack_68;
    uStack_90 = uStack_60;
    uStack_88 = uStack_58;
    func_0x000107c61434(lStack_78);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    puVar5 = &uStack_b0;
    FUN_1031ebd24(puVar5,&uStack_80,puVar4);
    uVar6 = (uint)puVar5;
    func_0x000107c61574(puVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(lVar1);
  }
  return uVar6 & 1;
}



/* Entry: 1031ea494; end: 1031ea607;  */

void FUN_1031ea494(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_68 = param_2[5];
  uStack_70 = param_2[4];
  uStack_60 = param_2[6];
  puVar4 = &UNK_10db9b3d0;
  func_0x000107c614e0(&UNK_10db9b3d0);
  uVar3 = uStack_68;
  uVar2 = uStack_78;
  lVar1 = lStack_88;
  if (lStack_88 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_c0 = uStack_90;
    lStack_b8 = lStack_88;
    uStack_b0 = uStack_80;
    uStack_a8 = uStack_78;
    uStack_a0 = uStack_70;
    uStack_98 = uStack_68;
    func_0x000107c61434(lStack_88);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    puVar5 = &uStack_c0;
    FUN_1031ebf68(puVar5,&uStack_90,puVar4);
    func_0x000107c61574(puVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(lVar1);
    if (puVar5 != (undefined8 *)0x0) {
      puVar4 = &UNK_10db9b3f0;
      func_0x000107c614e0(&UNK_10db9b3f0);
      func_0x000107c61434(lVar1);
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar3);
      puVar6 = &uStack_c0;
      FUN_1031ebe3c(puVar6,&uStack_90,puVar4);
      func_0x000107c61574(puVar4);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(lVar1);
      if (puVar6 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = puVar6;
        func_0x000107c5def0();
        func_0x000107c61170(puVar6);
      }
      *param_1 = puVar5;
      param_1[1] = puVar7;
      *(bool *)(param_1 + 2) = puVar6 == (undefined8 *)0x0;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 1031ea608; end: 1031ea7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ea608(long param_1,int param_2,char param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar6 = ((undefined8 *)(param_1 + _DAT_11307fbc0))[1];
  if (lVar6 == 0) {
    uVar7 = 0x112f4b988;
    puVar3 = &UNK_10db9b3b8;
    func_0x0001000285a8();
    FUN_1031ed3ec();
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    uStack_78 = uVar7;
    puStack_70 = puVar3;
    func_0x000100854cb0(&uStack_90);
    func_0x000107c6142c(puVar3);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_11307fbc0);
    uVar5 = 0;
    if (param_2 == 0x1d) {
      uVar5 = (uint)(param_3 != '\x01');
    }
    uVar4 = (ulong)uVar5;
    lVar2 = param_1;
    FUN_1031ec3e8();
    uVar8 = 0;
    uVar10 = *(undefined8 *)(param_1 + _DAT_11307fba8);
    uVar1 = ((undefined8 *)(param_1 + _DAT_11307fba8))[1];
    if (param_3 == '\x01') {
      bVar9 = 0;
    }
    else {
      bVar9 = 0;
      if (param_2 == 0x65) {
        bVar9 = *(byte *)(param_4 + 5);
        if ((bVar9 & 1) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined1 *)((long)param_4 + 0x29);
        }
      }
    }
    puVar3 = &UNK_110621808;
    func_0x000107c613fc(&UNK_110621808,0x78,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar10;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    uVar10 = *param_4;
    uVar12 = param_4[3];
    uVar11 = param_4[2];
    *(undefined8 *)(puVar3 + 0x28) = param_4[1];
    *(undefined8 *)(puVar3 + 0x20) = uVar10;
    *(undefined8 *)(puVar3 + 0x38) = uVar12;
    *(undefined8 *)(puVar3 + 0x30) = uVar11;
    uVar10 = *(undefined8 *)((long)param_4 + 0x1a);
    *(undefined8 *)(puVar3 + 0x42) = *(undefined8 *)((long)param_4 + 0x22);
    *(undefined8 *)(puVar3 + 0x3a) = uVar10;
    *(long *)(puVar3 + 0x50) = lVar2;
    *(ulong *)(puVar3 + 0x58) = uVar4;
    puVar3[0x60] = bVar9;
    puVar3[0x61] = uVar8;
    *(undefined8 *)(puVar3 + 0x68) = uVar7;
    *(long *)(puVar3 + 0x70) = lVar6;
    func_0x0001000285a8(0x112f4b990,&UNK_10db9b3c0);
    func_0x000107c613fc();
    func_0x000107c61434(uVar1);
    FUN_1031ea7c0(param_4,&uStack_90);
    func_0x000107c61434(lVar6);
    func_0x0001000b64ac(FUN_1031ec274,puVar3);
  }
  return;
}



/* Entry: 1031ea7b4; end: 1031ea7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ea7b4(long param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar6 = ((undefined8 *)(param_1 + _DAT_11307fbc0))[1];
  if (lVar6 == 0) {
    uVar7 = 0x112f4b988;
    puVar3 = &UNK_10db9b3b8;
    func_0x0001000285a8();
    FUN_1031ed3ec();
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    uStack_78 = uVar7;
    puStack_70 = puVar3;
    func_0x000100854cb0(&uStack_90);
    func_0x000107c6142c(puVar3);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_11307fbc0);
    uVar5 = 0;
    if (param_2 == 0x1d) {
      uVar5 = (uint)(param_3 != '\x01');
    }
    uVar4 = (ulong)uVar5;
    lVar2 = param_1;
    FUN_1031ec3e8();
    uVar8 = 0;
    uVar10 = *(undefined8 *)(param_1 + _DAT_11307fba8);
    uVar1 = ((undefined8 *)(param_1 + _DAT_11307fba8))[1];
    if (param_3 == '\x01') {
      bVar9 = 0;
    }
    else {
      bVar9 = 0;
      if (param_2 == 0x65) {
        bVar9 = *(byte *)(unaff_x20 + 0x38);
        if ((bVar9 & 1) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined1 *)(unaff_x20 + 0x39);
        }
      }
    }
    puVar3 = &UNK_110621808;
    func_0x000107c613fc(&UNK_110621808,0x78,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar10;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(puVar3 + 0x20) = uVar10;
    *(undefined8 *)(puVar3 + 0x38) = uVar12;
    *(undefined8 *)(puVar3 + 0x30) = uVar11;
    uVar10 = *(undefined8 *)(unaff_x20 + 0x2a);
    *(undefined8 *)(puVar3 + 0x42) = *(undefined8 *)(unaff_x20 + 0x32);
    *(undefined8 *)(puVar3 + 0x3a) = uVar10;
    *(long *)(puVar3 + 0x50) = lVar2;
    *(ulong *)(puVar3 + 0x58) = uVar4;
    puVar3[0x60] = bVar9;
    puVar3[0x61] = uVar8;
    *(undefined8 *)(puVar3 + 0x68) = uVar7;
    *(long *)(puVar3 + 0x70) = lVar6;
    func_0x0001000285a8(0x112f4b990,&UNK_10db9b3c0);
    func_0x000107c613fc();
    func_0x000107c61434(uVar1);
    FUN_1031ea7c0((undefined8 *)(unaff_x20 + 0x10),&uStack_90);
    func_0x000107c61434(lVar6);
    func_0x0001000b64ac(FUN_1031ec274,puVar3);
  }
  return;
}



/* Entry: 1031ea7c0; end: 1031ea7f3;  */

undefined8 FUN_1031ea7c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1031eb708(param_2,param_1,&UNK_110621670);
  return param_2;
}



/* Entry: 1031ea7f4; end: 1031ea833;  */

void FUN_1031ea7f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9b388;
  func_0x000107c61520(&UNK_10db9b388,&UNK_110621788);
  puRam0000000112f4b918 = puVar1;
  return;
}



/* Entry: 1031ea834; end: 1031ea9b3;  */

void FUN_1031ea834(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_248 [16];
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
  undefined8 uStack_197;
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
  undefined8 uStack_af;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uVar4 = *param_2;
  uStack_58 = param_2[4];
  uStack_60 = param_2[3];
  uStack_48 = uVar4;
  func_0x0001031e60c4(&uStack_238);
  uStack_160 = param_2[4];
  uStack_168 = param_2[3];
  uStack_d8 = uStack_1c0;
  uStack_e0 = uStack_1c8;
  uStack_c8 = uStack_1b0;
  uStack_d0 = uStack_1b8;
  uStack_c0 = uStack_1a8;
  uStack_af = uStack_197;
  uStack_118 = uStack_200;
  uStack_120 = uStack_208;
  uStack_108 = uStack_1f0;
  uStack_110 = uStack_1f8;
  uStack_f8 = uStack_1e0;
  uStack_100 = uStack_1e8;
  uStack_e8 = uStack_1d0;
  uStack_f0 = uStack_1d8;
  uStack_148 = uStack_230;
  uStack_150 = uStack_238;
  uStack_138 = uStack_220;
  uStack_140 = uStack_228;
  uStack_128 = uStack_210;
  uStack_130 = uStack_218;
  puVar2 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  func_0x000100402194(&uStack_60,auStack_248);
  FUN_1031ec228(&uStack_48,auStack_248,0x112f4b980,&UNK_10db9b3b0);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c41e50();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0x6853746365726964;
  uStack_170 = 0xeb00000000657261;
  uStack_158 = 0;
  uStack_98 = 10;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0x300;
  uStack_70 = 0;
  uStack_68 = 1;
  uStack_a0 = uVar4;
  puStack_90 = puVar2;
  FUN_1031ec270(&uStack_188);
  func_0x000107c610b4(param_1,&uStack_188,0x128);
  return;
}



/* Entry: 1031ea9b4; end: 1031eaa5b;  */

void FUN_1031ea9b4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_4e8 [296];
  undefined1 auStack_3c0 [296];
  undefined1 auStack_298 [296];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [296];
  
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  uStack_158 = param_2[3];
  uStack_160 = param_2[2];
  uStack_150 = param_2[4];
  FUN_1031ea834(auStack_3c0,&uStack_170);
  func_0x000107c610b4(auStack_298,auStack_3c0,0x128);
  iVar1 = (int)auStack_298;
  FUN_1031ec1d4();
  if (iVar1 == 1) {
    func_0x0001031ec1ec(auStack_148);
  }
  else {
    func_0x000107c610b4(auStack_4e8,auStack_3c0,0x128);
    func_0x0001031ec224(auStack_4e8);
    func_0x000107c610b4(auStack_148,auStack_4e8,0x128);
  }
  func_0x000107c610b4(param_1,auStack_148,0x128);
  return;
}



/* Entry: 1031eaa5c; end: 1031eb453;  */

void FUN_1031eaa5c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7,byte param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_c0 [48];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_3 == 0) {
    lVar1 = param_4[1];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) goto LAB_1031ead14;
    uVar2 = param_9;
    func_0x000107c5fadc(param_9,param_10);
    puVar3 = &UNK_110621830;
    func_0x000107c613fc(&UNK_110621830,0x70,7);
    lVar6 = *param_4;
    lVar8 = param_4[3];
    lVar7 = param_4[2];
    *(long *)(puVar3 + 0x18) = param_4[1];
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x28) = lVar8;
    *(long *)(puVar3 + 0x20) = lVar7;
    uVar5 = *(undefined8 *)((long)param_4 + 0x1a);
    *(undefined8 *)(puVar3 + 0x32) = *(undefined8 *)((long)param_4 + 0x22);
    *(undefined8 *)(puVar3 + 0x2a) = uVar5;
    *(undefined8 *)(puVar3 + 0x40) = param_5;
    *(undefined8 *)(puVar3 + 0x48) = param_6;
    puVar3[0x50] = param_7 & 1;
    puVar3[0x51] = param_8 & 1;
    *(undefined8 *)(puVar3 + 0x58) = param_1;
    *(undefined8 *)(puVar3 + 0x60) = param_9;
    *(undefined8 *)(puVar3 + 0x68) = param_10;
    uStack_70 = 0x1031ec2ac;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101306b38;
    puStack_78 = &UNK_110621848;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_68;
    FUN_1031ea7c0(param_4,auStack_c0);
    func_0x000107c61434(param_6);
    func_0x000107c6157c(param_1);
    func_0x000107c61434(param_10);
    func_0x000107c61574(puVar3);
    uVar5 = 0;
    FUN_1031ec38c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    func_0x000107c440a8(lVar1);
    func_0x000107c61170(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
  }
  else {
    lVar1 = *param_4;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) goto LAB_1031ead14;
    func_0x000107c5fadc(param_2,param_3);
    uVar2 = 0;
    FUN_1031ec38c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar3 = &UNK_110621880;
    func_0x000107c613fc(&UNK_110621880,0x70,7);
    lVar6 = *param_4;
    lVar8 = param_4[3];
    lVar7 = param_4[2];
    *(long *)(puVar3 + 0x18) = param_4[1];
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x28) = lVar8;
    *(long *)(puVar3 + 0x20) = lVar7;
    uVar5 = *(undefined8 *)((long)param_4 + 0x1a);
    *(undefined8 *)(puVar3 + 0x32) = *(undefined8 *)((long)param_4 + 0x22);
    *(undefined8 *)(puVar3 + 0x2a) = uVar5;
    *(undefined8 *)(puVar3 + 0x40) = param_5;
    *(undefined8 *)(puVar3 + 0x48) = param_6;
    puVar3[0x50] = param_7 & 1;
    puVar3[0x51] = param_8 & 1;
    *(undefined8 *)(puVar3 + 0x58) = param_1;
    *(undefined8 *)(puVar3 + 0x60) = param_9;
    *(undefined8 *)(puVar3 + 0x68) = param_10;
    uStack_70 = 0x1031ec354;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101043a98;
    puStack_78 = &UNK_110621898;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_68;
    FUN_1031ea7c0(param_4,auStack_c0);
    func_0x000107c61434(param_6);
    func_0x000107c6157c(param_1);
    func_0x000107c61434(param_10);
    func_0x000107c61574(puVar3);
    func_0x000107c5b49c(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c61170(uVar2);
LAB_1031ead14:
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1031eb454; end: 1031eb5c7;  */

code * FUN_1031eb454(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = (undefined2)unaff_x20[3];
  uStack_3e = *(undefined8 *)((long)unaff_x20 + 0x22);
  uStack_46 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x1a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x1a) >> 0x30);
  pcVar1 = FUN_1031ea3bc;
  func_0x0001000c0ebc(FUN_1031ea3bc,0);
  uVar6 = 0x112f4b910;
  func_0x0001000285a8(0x112f4b910,&UNK_10db9b290);
  pcVar2 = FUN_1031ea494;
  func_0x0001000d5158(FUN_1031ea494,0,uVar6);
  func_0x000107c61574(pcVar1);
  uVar3 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(pcVar2);
  puVar4 = &UNK_1106217b8;
  func_0x000107c613fc(&UNK_1106217b8,0x3a,7);
  uVar6 = *unaff_x20;
  uVar8 = unaff_x20[3];
  uVar7 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  uVar6 = *(undefined8 *)((long)unaff_x20 + 0x1a);
  *(undefined8 *)(puVar4 + 0x32) = *(undefined8 *)((long)unaff_x20 + 0x22);
  *(undefined8 *)(puVar4 + 0x2a) = uVar6;
  puVar5 = &UNK_1106217e0;
  func_0x000107c613fc(&UNK_1106217e0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1031ec3d4;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  FUN_1031ea7c0(&uStack_60,auStack_90);
  uVar6 = 0x1031ec3e4;
  func_0x00010068b194(0x1031ec3e4,puVar5,&UNK_110621788);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar5);
  FUN_1031ea7f4();
  func_0x0001000c2068();
  func_0x000107c61574(uVar6);
  uVar6 = 0x112f4b920;
  func_0x0001000285a8(0x112f4b920,&UNK_10db9b298);
  pcVar1 = FUN_1031ea9b4;
  func_0x0001000d5158(FUN_1031ea9b4,0,uVar6);
  func_0x000107c61574(puVar5);
  return pcVar1;
}



/* Entry: 1031eb5c8; end: 1031eb5eb;  */

void FUN_1031eb5c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031eb5ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031eb5ec; end: 1031eb62b;  */

void FUN_1031eb5ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9b2d8;
  func_0x000107c61520(&DAT_10db9b2d8,&UNK_110621670);
  puRam0000000112f4b928 = puVar1;
  return;
}



/* Entry: 1031eb62c; end: 1031eb62f;  */

void FUN_1031eb62c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b930 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b938;
  func_0x00010002969c(0x112f4b938,&UNK_10db9b2d0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b930 = puVar2;
  return;
}



/* Entry: 1031eb630; end: 1031eb67f;  */

void FUN_1031eb630(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b930 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b938;
  func_0x00010002969c(0x112f4b938,&UNK_10db9b2d0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b930 = puVar2;
  return;
}



/* Entry: 1031eb680; end: 1031eb697;  */

undefined ** FUN_1031eb680(void)

{
  return &PTR_DAT_1106215d8;
}


